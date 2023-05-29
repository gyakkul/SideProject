#Copyright Epic Games, Inc. All Rights Reserved.

require 'logger'

module EpicGames
  module Datasmith

    class MessagesLog

      def initialize()
        @messages = ""
      end

      def set_on_change(&callback)
        @on_change = callback
      end

      def get_messages_text
        @messages
      end

      def clear
        @messages = ""
        @on_change.call(nil) if @on_change
      end

      def write(text)
        @messages += text
        @on_change.call(text) if @on_change
      end

      def close
      end
    end

    @enable_logging = true

    # todo: change to temp
    @log_file_path = File.join(File.dirname(__FILE__), "log.txt")

    class ConsoleWrapper
      def write message
        $stdout.write message
      end
      def close
      end
    end

    class MessagesLogDevice
      def initialize(messages_log)
        # @type [MessagesLog]
        @messages_log = messages_log
      end

      def write(message)
        @messages_log.write message
      end
      def close
        @messages_log.close
      end
    end

    progname = 'datasmith'
    @log_file = Logger.new(@log_file_path, progname: progname, level: Logger::DEBUG)

    # SketchUp redirects $stdout to its Ruby Console
    @log_stdout = Logger.new(ConsoleWrapper.new, progname: progname, level: Logger::DEBUG)

    # Log used to display messages to the User in the Messages dialog
    @messages_log = MessagesLog.new
    @log_messages = Logger.new(MessagesLogDevice.new(@messages_log), progname: progname, level: Logger::DEBUG)

    @loggers = [@log_stdout, @log_file, @log_messages]

    def self.log_init(dev)
      unless dev
        @log_file.level = Logger::INFO
        @log_stdout.level = Logger::INFO
        @log_messages.level = Logger::INFO
      end
    end

    # log value returned from block call
    # reason for block - optimization, when logging is disabled block is not evaluated
    # e.g. string interpolation is not performed
    def self.log_info
      if should_log? Logger::INFO
        message = yield
        @loggers.each do |logger|
          logger.info message
        end
      end
      nil
    end

    def self.log_debug
      if should_log? Logger::DEBUG
        message = yield
        @loggers.each do |logger|
          logger.debug message
        end
      end
      nil
    end

    def self.log_warn
      if should_log? Logger::WARN
        message = yield
        @loggers.each do |logger|
          logger.warn message
        end
      end
      nil
    end

    def self.log_error
      if should_log? Logger::ERROR
        message = yield
        @loggers.each do |logger|
          logger.error message
        end
      end
      nil
    end

    def self._log(level, method)
      if should_log? level
        message = yield
        @loggers.each do |logger|
          logger.send method, message
        end
      end
      nil
    end

    def self.log_xxx
      _log Logger::ERROR, :error do
        yield
      end
    end

    def self.should_log?(level)
      @enable_logging && @loggers.any? { |logger| logger.level <= level }
    end
  end
end

