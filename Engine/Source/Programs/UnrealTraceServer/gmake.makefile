# vim: set foldlevel=1 :

# {{{1 debug and flags ---------------------------------------------------------
ifdef ComSpec
PLATFORM := Windows
else
PLATFORM := $(shell uname -s)
endif

OUT_DIR := _build/$(PLATFORM)

ifeq ($(DEBUG), 1)
CXXFLAGS := \
	$(CXXFLAGS) \
	-DTS_BUILD_DEBUG=TS_ON \
	-Og
OUT_DIR := $(OUT_DIR)/debug
else
CXXFLAGS := \
	$(CXXFLAGS) \
	-O3
OUT_DIR := $(OUT_DIR)/development
endif

CXXFLAGS := \
	$(CXXFLAGS) \
	-g \
	-Werror \
	-std=c++17 \
	-fno-exceptions

ifeq ($(PLATFORM), Linux)
	LDLIBS := $(LDLIBS) -lpthread -lrt
	# below is an example of how to statically link an ELF
	#LDLIBS := $(LDLIBS) -static -Wl,--whole-archive -lstdc++ -lpthread -lrt -Wl,--no-whole-archive
else ifeq ($(PLATFORM), Darwin)
	LDLIBS := \
        $(LDLIBS) \
	    -framework CoreServices \
        -framework CoreFoundation \
        -lstdc++ \
        -lpthread
endif

# {{{1 all/clean targets -------------------------------------------------------
.SILENT :

.PHONY : clean all unreal_trace dirs

all : dirs unreal_trace

clean :
	rm -rf $(OUT_DIR)

$(OUT_DIR) :
	mkdir -p $@

dirs : $(OUT_DIR)

# {{{1 thirdparty --------------------------------------------------------------
ASIO_VER = 1.12.2
CXXFLAGS := \
	$(CXXFLAGS) \
	-Ithirdparty/asio/$(ASIO_VER)

CXXFLAGS := \
	$(CXXFLAGS) \
	-DCXXOPTS_NO_EXCEPTIONS \
	-Ithirdparty/cxxopts/include

# {{{1 store compile/link ------------------------------------------------------
OBJS := \
	$(OBJS) \
	$(OUT_DIR)/Asio.o \
	$(OUT_DIR)/AsioContext.o \
	$(OUT_DIR)/AsioFile.o \
	$(OUT_DIR)/AsioIoable.o \
	$(OUT_DIR)/AsioSocket.o \
	$(OUT_DIR)/AsioTcpServer.o \
	$(OUT_DIR)/AsioTickable.o \
	$(OUT_DIR)/Cbor.o \
	$(OUT_DIR)/Main.o \
	$(OUT_DIR)/Recorder.o \
	$(OUT_DIR)/Store.o \
	$(OUT_DIR)/StoreCborServer.o \
	$(OUT_DIR)/StoreService.o \
	$(OUT_DIR)/TraceRelay.o

ifeq ($(PLATFORM), Linux)
$(OUT_DIR)/%.o : src/%.cpp
	echo $(<F)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

$(OUT_DIR)/UnrealTraceServer : $(OBJS)
	echo $(@F)
	$(CXX) -o $@ $(OBJS) $(LDLIBS)

else ifeq ($(PLATFORM), Darwin)
# x64
X64_TARGET := -target x86_64-apple-macos10.15
X64_OUT_DIR := $(OUT_DIR)/x64
X64_OBJS := $(foreach i, $(OBJS), $(dir $(i))x64/$(notdir $(i)))

$(X64_OUT_DIR)/%.o : src/%.cpp
	echo x64 $(<F)
	$(CXX) $(CXXFLAGS) $(X64_TARGET) -c -o $@ $<

$(X64_OUT_DIR)/UnrealTraceServer : $(X64_OBJS)
	echo x64 $(@F)
	$(CXX) $(X64_TARGET) -o $@ $^ $(LDLIBS)

# arm64
ARM64_TARGET := -target arm64-apple-macos11
ARM64_OUT_DIR := $(OUT_DIR)/arm64
ARM64_OBJS := $(foreach i, $(OBJS), $(dir $(i))arm64/$(notdir $(i)))

$(ARM64_OUT_DIR)/%.o : src/%.cpp
	echo arm64 $(<F)
	$(CXX) $(CXXFLAGS) $(ARM64_TARGET) -c -o $@ $<

$(ARM64_OUT_DIR)/UnrealTraceServer : $(ARM64_OBJS)
	echo arm64 $(@F)
	$(CXX) $(ARM64_TARGET) -o $@ $^ $(LDLIBS)

# universal
$(OUT_DIR)/UnrealTraceServer : \
		$(X64_OUT_DIR)/UnrealTraceServer \
		$(ARM64_OUT_DIR)/UnrealTraceServer
	echo $(<F)
	lipo -create -output $@ $^

# dirs
dirs : \
	$(X64_OUT_DIR) \
	$(ARM64_OUT_DIR)

$(X64_OUT_DIR) $(ARM64_OUT_DIR) :
	mkdir -p $@
endif # Darwin

unreal_trace : dirs $(OUT_DIR)/UnrealTraceServer
