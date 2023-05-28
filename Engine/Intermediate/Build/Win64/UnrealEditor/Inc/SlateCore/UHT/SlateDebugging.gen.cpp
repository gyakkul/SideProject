// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Debugging/SlateDebugging.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateDebugging() {}
// Cross Module References
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ESlateDebuggingFocusEvent();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ESlateDebuggingInputEvent();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ESlateDebuggingNavigationMethod();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ESlateDebuggingStateChangeEvent();
	UPackage* Z_Construct_UPackage__Script_SlateCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESlateDebuggingInputEvent;
	static UEnum* ESlateDebuggingInputEvent_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESlateDebuggingInputEvent.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESlateDebuggingInputEvent.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_ESlateDebuggingInputEvent, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("ESlateDebuggingInputEvent"));
		}
		return Z_Registration_Info_UEnum_ESlateDebuggingInputEvent.OuterSingleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<ESlateDebuggingInputEvent>()
	{
		return ESlateDebuggingInputEvent_StaticEnum();
	}
	struct Z_Construct_UEnum_SlateCore_ESlateDebuggingInputEvent_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SlateCore_ESlateDebuggingInputEvent_Statics::Enumerators[] = {
		{ "ESlateDebuggingInputEvent::MouseMove", (int64)ESlateDebuggingInputEvent::MouseMove },
		{ "ESlateDebuggingInputEvent::MouseEnter", (int64)ESlateDebuggingInputEvent::MouseEnter },
		{ "ESlateDebuggingInputEvent::MouseLeave", (int64)ESlateDebuggingInputEvent::MouseLeave },
		{ "ESlateDebuggingInputEvent::PreviewMouseButtonDown", (int64)ESlateDebuggingInputEvent::PreviewMouseButtonDown },
		{ "ESlateDebuggingInputEvent::MouseButtonDown", (int64)ESlateDebuggingInputEvent::MouseButtonDown },
		{ "ESlateDebuggingInputEvent::MouseButtonUp", (int64)ESlateDebuggingInputEvent::MouseButtonUp },
		{ "ESlateDebuggingInputEvent::MouseButtonDoubleClick", (int64)ESlateDebuggingInputEvent::MouseButtonDoubleClick },
		{ "ESlateDebuggingInputEvent::MouseWheel", (int64)ESlateDebuggingInputEvent::MouseWheel },
		{ "ESlateDebuggingInputEvent::TouchStart", (int64)ESlateDebuggingInputEvent::TouchStart },
		{ "ESlateDebuggingInputEvent::TouchEnd", (int64)ESlateDebuggingInputEvent::TouchEnd },
		{ "ESlateDebuggingInputEvent::TouchForceChanged", (int64)ESlateDebuggingInputEvent::TouchForceChanged },
		{ "ESlateDebuggingInputEvent::TouchFirstMove", (int64)ESlateDebuggingInputEvent::TouchFirstMove },
		{ "ESlateDebuggingInputEvent::TouchMoved", (int64)ESlateDebuggingInputEvent::TouchMoved },
		{ "ESlateDebuggingInputEvent::DragDetected", (int64)ESlateDebuggingInputEvent::DragDetected },
		{ "ESlateDebuggingInputEvent::DragEnter", (int64)ESlateDebuggingInputEvent::DragEnter },
		{ "ESlateDebuggingInputEvent::DragLeave", (int64)ESlateDebuggingInputEvent::DragLeave },
		{ "ESlateDebuggingInputEvent::DragOver", (int64)ESlateDebuggingInputEvent::DragOver },
		{ "ESlateDebuggingInputEvent::DragDrop", (int64)ESlateDebuggingInputEvent::DragDrop },
		{ "ESlateDebuggingInputEvent::DropMessage", (int64)ESlateDebuggingInputEvent::DropMessage },
		{ "ESlateDebuggingInputEvent::PreviewKeyDown", (int64)ESlateDebuggingInputEvent::PreviewKeyDown },
		{ "ESlateDebuggingInputEvent::KeyDown", (int64)ESlateDebuggingInputEvent::KeyDown },
		{ "ESlateDebuggingInputEvent::KeyUp", (int64)ESlateDebuggingInputEvent::KeyUp },
		{ "ESlateDebuggingInputEvent::KeyChar", (int64)ESlateDebuggingInputEvent::KeyChar },
		{ "ESlateDebuggingInputEvent::AnalogInput", (int64)ESlateDebuggingInputEvent::AnalogInput },
		{ "ESlateDebuggingInputEvent::TouchGesture", (int64)ESlateDebuggingInputEvent::TouchGesture },
		{ "ESlateDebuggingInputEvent::MotionDetected", (int64)ESlateDebuggingInputEvent::MotionDetected },
		{ "ESlateDebuggingInputEvent::MAX", (int64)ESlateDebuggingInputEvent::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SlateCore_ESlateDebuggingInputEvent_Statics::Enum_MetaDataParams[] = {
		{ "AnalogInput.Name", "ESlateDebuggingInputEvent::AnalogInput" },
		{ "DragDetected.Name", "ESlateDebuggingInputEvent::DragDetected" },
		{ "DragDrop.Name", "ESlateDebuggingInputEvent::DragDrop" },
		{ "DragEnter.Name", "ESlateDebuggingInputEvent::DragEnter" },
		{ "DragLeave.Name", "ESlateDebuggingInputEvent::DragLeave" },
		{ "DragOver.Name", "ESlateDebuggingInputEvent::DragOver" },
		{ "DropMessage.Name", "ESlateDebuggingInputEvent::DropMessage" },
		{ "KeyChar.Name", "ESlateDebuggingInputEvent::KeyChar" },
		{ "KeyDown.Name", "ESlateDebuggingInputEvent::KeyDown" },
		{ "KeyUp.Name", "ESlateDebuggingInputEvent::KeyUp" },
		{ "MAX.Name", "ESlateDebuggingInputEvent::MAX" },
		{ "ModuleRelativePath", "Public/Debugging/SlateDebugging.h" },
		{ "MotionDetected.Name", "ESlateDebuggingInputEvent::MotionDetected" },
		{ "MouseButtonDoubleClick.Name", "ESlateDebuggingInputEvent::MouseButtonDoubleClick" },
		{ "MouseButtonDown.Name", "ESlateDebuggingInputEvent::MouseButtonDown" },
		{ "MouseButtonUp.Name", "ESlateDebuggingInputEvent::MouseButtonUp" },
		{ "MouseEnter.Name", "ESlateDebuggingInputEvent::MouseEnter" },
		{ "MouseLeave.Name", "ESlateDebuggingInputEvent::MouseLeave" },
		{ "MouseMove.Name", "ESlateDebuggingInputEvent::MouseMove" },
		{ "MouseWheel.Name", "ESlateDebuggingInputEvent::MouseWheel" },
		{ "PreviewKeyDown.Name", "ESlateDebuggingInputEvent::PreviewKeyDown" },
		{ "PreviewMouseButtonDown.Name", "ESlateDebuggingInputEvent::PreviewMouseButtonDown" },
		{ "TouchEnd.Name", "ESlateDebuggingInputEvent::TouchEnd" },
		{ "TouchFirstMove.Name", "ESlateDebuggingInputEvent::TouchFirstMove" },
		{ "TouchForceChanged.Name", "ESlateDebuggingInputEvent::TouchForceChanged" },
		{ "TouchGesture.Name", "ESlateDebuggingInputEvent::TouchGesture" },
		{ "TouchMoved.Name", "ESlateDebuggingInputEvent::TouchMoved" },
		{ "TouchStart.Name", "ESlateDebuggingInputEvent::TouchStart" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SlateCore_ESlateDebuggingInputEvent_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		"ESlateDebuggingInputEvent",
		"ESlateDebuggingInputEvent",
		Z_Construct_UEnum_SlateCore_ESlateDebuggingInputEvent_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_ESlateDebuggingInputEvent_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SlateCore_ESlateDebuggingInputEvent_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_ESlateDebuggingInputEvent_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SlateCore_ESlateDebuggingInputEvent()
	{
		if (!Z_Registration_Info_UEnum_ESlateDebuggingInputEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESlateDebuggingInputEvent.InnerSingleton, Z_Construct_UEnum_SlateCore_ESlateDebuggingInputEvent_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESlateDebuggingInputEvent.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESlateDebuggingStateChangeEvent;
	static UEnum* ESlateDebuggingStateChangeEvent_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESlateDebuggingStateChangeEvent.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESlateDebuggingStateChangeEvent.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_ESlateDebuggingStateChangeEvent, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("ESlateDebuggingStateChangeEvent"));
		}
		return Z_Registration_Info_UEnum_ESlateDebuggingStateChangeEvent.OuterSingleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<ESlateDebuggingStateChangeEvent>()
	{
		return ESlateDebuggingStateChangeEvent_StaticEnum();
	}
	struct Z_Construct_UEnum_SlateCore_ESlateDebuggingStateChangeEvent_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SlateCore_ESlateDebuggingStateChangeEvent_Statics::Enumerators[] = {
		{ "ESlateDebuggingStateChangeEvent::MouseCaptureGained", (int64)ESlateDebuggingStateChangeEvent::MouseCaptureGained },
		{ "ESlateDebuggingStateChangeEvent::MouseCaptureLost", (int64)ESlateDebuggingStateChangeEvent::MouseCaptureLost },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SlateCore_ESlateDebuggingStateChangeEvent_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Debugging/SlateDebugging.h" },
		{ "MouseCaptureGained.Name", "ESlateDebuggingStateChangeEvent::MouseCaptureGained" },
		{ "MouseCaptureLost.Name", "ESlateDebuggingStateChangeEvent::MouseCaptureLost" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SlateCore_ESlateDebuggingStateChangeEvent_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		"ESlateDebuggingStateChangeEvent",
		"ESlateDebuggingStateChangeEvent",
		Z_Construct_UEnum_SlateCore_ESlateDebuggingStateChangeEvent_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_ESlateDebuggingStateChangeEvent_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SlateCore_ESlateDebuggingStateChangeEvent_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_ESlateDebuggingStateChangeEvent_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SlateCore_ESlateDebuggingStateChangeEvent()
	{
		if (!Z_Registration_Info_UEnum_ESlateDebuggingStateChangeEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESlateDebuggingStateChangeEvent.InnerSingleton, Z_Construct_UEnum_SlateCore_ESlateDebuggingStateChangeEvent_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESlateDebuggingStateChangeEvent.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESlateDebuggingNavigationMethod;
	static UEnum* ESlateDebuggingNavigationMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESlateDebuggingNavigationMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESlateDebuggingNavigationMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_ESlateDebuggingNavigationMethod, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("ESlateDebuggingNavigationMethod"));
		}
		return Z_Registration_Info_UEnum_ESlateDebuggingNavigationMethod.OuterSingleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<ESlateDebuggingNavigationMethod>()
	{
		return ESlateDebuggingNavigationMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_SlateCore_ESlateDebuggingNavigationMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SlateCore_ESlateDebuggingNavigationMethod_Statics::Enumerators[] = {
		{ "ESlateDebuggingNavigationMethod::Unknown", (int64)ESlateDebuggingNavigationMethod::Unknown },
		{ "ESlateDebuggingNavigationMethod::Explicit", (int64)ESlateDebuggingNavigationMethod::Explicit },
		{ "ESlateDebuggingNavigationMethod::CustomDelegateBound", (int64)ESlateDebuggingNavigationMethod::CustomDelegateBound },
		{ "ESlateDebuggingNavigationMethod::CustomDelegateUnbound", (int64)ESlateDebuggingNavigationMethod::CustomDelegateUnbound },
		{ "ESlateDebuggingNavigationMethod::NextOrPrevious", (int64)ESlateDebuggingNavigationMethod::NextOrPrevious },
		{ "ESlateDebuggingNavigationMethod::HitTestGrid", (int64)ESlateDebuggingNavigationMethod::HitTestGrid },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SlateCore_ESlateDebuggingNavigationMethod_Statics::Enum_MetaDataParams[] = {
		{ "CustomDelegateBound.Name", "ESlateDebuggingNavigationMethod::CustomDelegateBound" },
		{ "CustomDelegateUnbound.Name", "ESlateDebuggingNavigationMethod::CustomDelegateUnbound" },
		{ "Explicit.Name", "ESlateDebuggingNavigationMethod::Explicit" },
		{ "HitTestGrid.Name", "ESlateDebuggingNavigationMethod::HitTestGrid" },
		{ "ModuleRelativePath", "Public/Debugging/SlateDebugging.h" },
		{ "NextOrPrevious.Name", "ESlateDebuggingNavigationMethod::NextOrPrevious" },
		{ "Unknown.Name", "ESlateDebuggingNavigationMethod::Unknown" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SlateCore_ESlateDebuggingNavigationMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		"ESlateDebuggingNavigationMethod",
		"ESlateDebuggingNavigationMethod",
		Z_Construct_UEnum_SlateCore_ESlateDebuggingNavigationMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_ESlateDebuggingNavigationMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SlateCore_ESlateDebuggingNavigationMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_ESlateDebuggingNavigationMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SlateCore_ESlateDebuggingNavigationMethod()
	{
		if (!Z_Registration_Info_UEnum_ESlateDebuggingNavigationMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESlateDebuggingNavigationMethod.InnerSingleton, Z_Construct_UEnum_SlateCore_ESlateDebuggingNavigationMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESlateDebuggingNavigationMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESlateDebuggingFocusEvent;
	static UEnum* ESlateDebuggingFocusEvent_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESlateDebuggingFocusEvent.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESlateDebuggingFocusEvent.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_ESlateDebuggingFocusEvent, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("ESlateDebuggingFocusEvent"));
		}
		return Z_Registration_Info_UEnum_ESlateDebuggingFocusEvent.OuterSingleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<ESlateDebuggingFocusEvent>()
	{
		return ESlateDebuggingFocusEvent_StaticEnum();
	}
	struct Z_Construct_UEnum_SlateCore_ESlateDebuggingFocusEvent_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SlateCore_ESlateDebuggingFocusEvent_Statics::Enumerators[] = {
		{ "ESlateDebuggingFocusEvent::FocusChanging", (int64)ESlateDebuggingFocusEvent::FocusChanging },
		{ "ESlateDebuggingFocusEvent::FocusLost", (int64)ESlateDebuggingFocusEvent::FocusLost },
		{ "ESlateDebuggingFocusEvent::FocusReceived", (int64)ESlateDebuggingFocusEvent::FocusReceived },
		{ "ESlateDebuggingFocusEvent::MAX", (int64)ESlateDebuggingFocusEvent::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SlateCore_ESlateDebuggingFocusEvent_Statics::Enum_MetaDataParams[] = {
		{ "FocusChanging.Name", "ESlateDebuggingFocusEvent::FocusChanging" },
		{ "FocusLost.Name", "ESlateDebuggingFocusEvent::FocusLost" },
		{ "FocusReceived.Name", "ESlateDebuggingFocusEvent::FocusReceived" },
		{ "MAX.Name", "ESlateDebuggingFocusEvent::MAX" },
		{ "ModuleRelativePath", "Public/Debugging/SlateDebugging.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SlateCore_ESlateDebuggingFocusEvent_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		"ESlateDebuggingFocusEvent",
		"ESlateDebuggingFocusEvent",
		Z_Construct_UEnum_SlateCore_ESlateDebuggingFocusEvent_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_ESlateDebuggingFocusEvent_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SlateCore_ESlateDebuggingFocusEvent_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_ESlateDebuggingFocusEvent_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SlateCore_ESlateDebuggingFocusEvent()
	{
		if (!Z_Registration_Info_UEnum_ESlateDebuggingFocusEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESlateDebuggingFocusEvent.InnerSingleton, Z_Construct_UEnum_SlateCore_ESlateDebuggingFocusEvent_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESlateDebuggingFocusEvent.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Debugging_SlateDebugging_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Debugging_SlateDebugging_h_Statics::EnumInfo[] = {
		{ ESlateDebuggingInputEvent_StaticEnum, TEXT("ESlateDebuggingInputEvent"), &Z_Registration_Info_UEnum_ESlateDebuggingInputEvent, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3172837150U) },
		{ ESlateDebuggingStateChangeEvent_StaticEnum, TEXT("ESlateDebuggingStateChangeEvent"), &Z_Registration_Info_UEnum_ESlateDebuggingStateChangeEvent, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1902626608U) },
		{ ESlateDebuggingNavigationMethod_StaticEnum, TEXT("ESlateDebuggingNavigationMethod"), &Z_Registration_Info_UEnum_ESlateDebuggingNavigationMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1507895968U) },
		{ ESlateDebuggingFocusEvent_StaticEnum, TEXT("ESlateDebuggingFocusEvent"), &Z_Registration_Info_UEnum_ESlateDebuggingFocusEvent, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1710131633U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Debugging_SlateDebugging_h_3867710601(TEXT("/Script/SlateCore"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Debugging_SlateDebugging_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Debugging_SlateDebugging_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
