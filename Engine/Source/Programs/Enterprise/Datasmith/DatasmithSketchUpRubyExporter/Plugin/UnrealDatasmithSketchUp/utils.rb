#Copyright Epic Games, Inc. All Rights Reserved.

module EpicGames
    module Datasmith
      # This class helps monitoring SketchUp observers work by decorating their methods:
      # Logs every callback method(method starting with 'on'), marking which one is missing implementation
      # Logs all exceptions
      # todo:
      # - ability to turn off 'on' call logging(exceptions could stay). Although logging level controls this...
      module ObserverHelperDecorator

        def self.install(klass, base, production=false)
          # create new module with decorated methods for decorated class each class
          decorator_module = Module.new do
            if not production
              include ObserverHelperDecorator

              def self.prepended(base)
                base.instance_methods(true).each do |method_symbol|
                  if ObserverHelperDecorator.is_callback(method_symbol)
                    ObserverHelperDecorator.add_overload(self, base, method_symbol)
                  end
                end
              end
            else
              def self.prepended(base)
                base.instance_methods(true).each do |method_symbol|
                  if ObserverHelperDecorator.is_callback(method_symbol)
                    ObserverHelperDecorator.add_overload_production(self, base, method_symbol)
                  end
                end
              end
            end
          end
          base.prepend decorator_module
        end

        def self.is_callback(method_symbol)
          method_symbol.to_s.start_with? 'on'
        end

        def self.add_overload(decorator, base, method_symbol)
          decorator.define_method(method_symbol) do |*args|
            begin
              log_call(method_symbol, args)
              super(*args)
            rescue => exception
              log_exception method_symbol, exception
            end
          end
        end

        def self.add_overload_production(decorator, base, method_symbol)
          decorator.define_method(method_symbol) do |*args|
            begin
              super(*args)
            rescue => exception
              log_exception method_symbol, exception
            end
          end
        end

        def respond_to?(method_symbol, include_private = false)
          if ObserverHelperDecorator.is_callback(method_symbol)
            true
          else
            super
          end
        end

        def method_missing(method_symbol, *args, &block)
          if ObserverHelperDecorator.is_callback(method_symbol)
            begin
              log_missing method_symbol, args
            rescue => exception
              log_exception method_symbol, exception
            end
          else
            super
          end
        end
      end
    end
end