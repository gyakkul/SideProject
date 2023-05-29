# vim: noexpandtab foldlevel=1 ft=make

# {{{1 debug and flags ---------------------------------------------------------
OUT_DIR = _build/windows

!if "$(DEBUG)" == "1"
CXXFLAGS = \
	$(CXXFLAGS) \
	/DTS_BUILD_DEBUG=TS_ON \
	/Od
OUT_DIR = $(OUT_DIR)/debug
!else
CXXFLAGS = \
	$(CXXFLAGS) \
	/Ox
OUT_DIR = $(OUT_DIR)/development
!endif

CXXFLAGS = \
	$(CXXFLAGS) \
	/c /nologo /Zi /MT /EHs-c- /MP$(NUMBER_OF_PROCESSORS) \
	/W3 /WX \
	/std:c++latest \
	/YuPch.h /Fp$(OUT_DIR)/pch.pch \
	/Fo:$(OUT_DIR)/ \
	/Fd:$(OUT_DIR)/

LDFLAGS = \
	/nologo \
	/subsystem:console \
	/machine:x64 \
	/debug \
	/incremental:no \
	/opt:ref,icf \
	$(LDFLAGS)

# {{{1 all/clean targets -------------------------------------------------------
.SILENT :

all : dirs unreal_trace

clean :
	-rd /q /s $(OUT_DIR:/=\) 2>nul

dirs : $(OUT_DIR)

$(OUT_DIR) :
	-mkdir $(@:/=\)

# {{{1 thirdparty --------------------------------------------------------------
ASIO_VER = 1.12.2
CXXFLAGS = \
	$(CXXFLAGS) \
	/Ithirdparty/asio/$(ASIO_VER)/

CXXFLAGS = \
	$(CXXFLAGS) \
	/DCXXOPTS_NO_EXCEPTIONS \
    /Ithirdparty/cxxopts/include

# {{{1 pch ---------------------------------------------------------------------
PCH_DEPS = \
	src/Pch.h \
	src/Asio.h

OBJS = \
	$(OBJS) \
	$(OUT_DIR)/Pch.obj

$(OUT_DIR)/Pch.obj : $(PCH_DEPS)
	echo #include "Pch.h"1>$(OUT_DIR)/Pch.cpp
	cl.exe $(CXXFLAGS) /Isrc/ /YcPch.h $(OUT_DIR)/Pch.cpp

# {{{1 store compile/link ------------------------------------------------------
OBJS = \
	$(OBJS) \
	$(OUT_DIR)/Asio.obj \
	$(OUT_DIR)/AsioContext.obj \
	$(OUT_DIR)/AsioFile.obj \
	$(OUT_DIR)/AsioIoable.obj \
	$(OUT_DIR)/AsioSocket.obj \
	$(OUT_DIR)/AsioTcpServer.obj \
	$(OUT_DIR)/AsioTickable.obj \
	$(OUT_DIR)/Cbor.obj \
	$(OUT_DIR)/Main.obj \
	$(OUT_DIR)/Recorder.obj \
	$(OUT_DIR)/Store.obj \
	$(OUT_DIR)/StoreCborServer.obj \
	$(OUT_DIR)/StoreService.obj \
	$(OUT_DIR)/SystemTray.obj \
	$(OUT_DIR)/TraceRelay.obj \
	$(OUT_DIR)/Version.res

{src}.cpp{$(OUT_DIR)}.obj ::
	cl.exe $(CXXFLAGS) $<

$(OUT_DIR)/Asio.obj				: src/Asio.cpp
$(OUT_DIR)/AsioContext.obj		: src/AsioContext.cpp
$(OUT_DIR)/AsioFile.obj			: src/AsioFile.cpp
$(OUT_DIR)/AsioIoable.obj		: src/AsioIoable.cpp
$(OUT_DIR)/AsioSocket.obj		: src/AsioSocket.cpp
$(OUT_DIR)/AsioTcpServer.obj	: src/AsioTcpServer.cpp
$(OUT_DIR)/AsioTickable.obj		: src/AsioTickable.cpp
$(OUT_DIR)/Cbor.obj				: src/Cbor.cpp
$(OUT_DIR)/Main.obj				: src/Main.cpp
$(OUT_DIR)/Recorder.obj			: src/Recorder.cpp
$(OUT_DIR)/Store.obj			: src/Store.cpp
$(OUT_DIR)/StoreCborServer.obj	: src/StoreCborServer.cpp
$(OUT_DIR)/StoreService.obj		: src/StoreService.cpp
$(OUT_DIR)/SystemTray.obj		: src/SystemTray.cpp
$(OUT_DIR)/TraceRelay.obj		: src/TraceRelay.cpp

$(OUT_DIR)/Version.res : src/Version.rc
	echo $(@F)
	rc.exe /nologo /fo$@ $**

$(OUT_DIR)/UnrealTraceServer.exe : $(OBJS)
	echo $(@F)
	link.exe \
		$(LDFLAGS) \
		$** \
		/out:$@

unreal_trace : dirs $(OUT_DIR)/UnrealTraceServer.exe

# {{{1 release -----------------------------------------------------------------
release :
	$(MAKE) /nologo clean all
	attrib -r $(UTS_P4_LOCATION).\..\..\..\Binaries\Win64\UnrealTraceServer.*
	copy /y _build\windows\development\UnrealTraceServer.* $(UTS_P4_LOCATION).\..\..\..\Binaries\Win64
	-(git tag -f release && git push -f --tags) 1>nul 2>nul
	cd $(UTS_P4_LOCATION).
	p4 open ../../../Binaries/Win64/UnrealTraceServer.*
