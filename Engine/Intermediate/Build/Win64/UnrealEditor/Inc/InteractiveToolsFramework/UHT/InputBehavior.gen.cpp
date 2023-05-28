// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InputBehavior.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputBehavior() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInputBehavior();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInputBehavior_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureRequestType();
	INTERACTIVETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureSide();
	INTERACTIVETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureState();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInputCaptureSide;
	static UEnum* EInputCaptureSide_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInputCaptureSide.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInputCaptureSide.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureSide, (UObject*)Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("EInputCaptureSide"));
		}
		return Z_Registration_Info_UEnum_EInputCaptureSide.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<EInputCaptureSide>()
	{
		return EInputCaptureSide_StaticEnum();
	}
	struct Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureSide_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureSide_Statics::Enumerators[] = {
		{ "EInputCaptureSide::None", (int64)EInputCaptureSide::None },
		{ "EInputCaptureSide::Left", (int64)EInputCaptureSide::Left },
		{ "EInputCaptureSide::Right", (int64)EInputCaptureSide::Right },
		{ "EInputCaptureSide::Both", (int64)EInputCaptureSide::Both },
		{ "EInputCaptureSide::Any", (int64)EInputCaptureSide::Any },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureSide_Statics::Enum_MetaDataParams[] = {
		{ "Any.Name", "EInputCaptureSide::Any" },
		{ "Both.Name", "EInputCaptureSide::Both" },
		{ "Comment", "/**\n * Input can be captured separately for Left and Right sides (eg for VR controllers)\n * Currently mouse is Left.\n */" },
		{ "Left.Name", "EInputCaptureSide::Left" },
		{ "ModuleRelativePath", "Public/InputBehavior.h" },
		{ "None.Name", "EInputCaptureSide::None" },
		{ "Right.Name", "EInputCaptureSide::Right" },
		{ "ToolTip", "Input can be captured separately for Left and Right sides (eg for VR controllers)\nCurrently mouse is Left." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureSide_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
		nullptr,
		"EInputCaptureSide",
		"EInputCaptureSide",
		Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureSide_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureSide_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureSide_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureSide_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureSide()
	{
		if (!Z_Registration_Info_UEnum_EInputCaptureSide.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInputCaptureSide.InnerSingleton, Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureSide_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInputCaptureSide.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInputCaptureRequestType;
	static UEnum* EInputCaptureRequestType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInputCaptureRequestType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInputCaptureRequestType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureRequestType, (UObject*)Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("EInputCaptureRequestType"));
		}
		return Z_Registration_Info_UEnum_EInputCaptureRequestType.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<EInputCaptureRequestType>()
	{
		return EInputCaptureRequestType_StaticEnum();
	}
	struct Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureRequestType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureRequestType_Statics::Enumerators[] = {
		{ "EInputCaptureRequestType::Begin", (int64)EInputCaptureRequestType::Begin },
		{ "EInputCaptureRequestType::Ignore", (int64)EInputCaptureRequestType::Ignore },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureRequestType_Statics::Enum_MetaDataParams[] = {
		{ "Begin.Name", "EInputCaptureRequestType::Begin" },
		{ "Comment", "/**\n * Used by FInputCaptureRequest to indicate whether the InputBehavior\n * wants to capture or ignore an input event\n */" },
		{ "Ignore.Name", "EInputCaptureRequestType::Ignore" },
		{ "ModuleRelativePath", "Public/InputBehavior.h" },
		{ "ToolTip", "Used by FInputCaptureRequest to indicate whether the InputBehavior\nwants to capture or ignore an input event" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureRequestType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
		nullptr,
		"EInputCaptureRequestType",
		"EInputCaptureRequestType",
		Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureRequestType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureRequestType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureRequestType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureRequestType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureRequestType()
	{
		if (!Z_Registration_Info_UEnum_EInputCaptureRequestType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInputCaptureRequestType.InnerSingleton, Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureRequestType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInputCaptureRequestType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInputCaptureState;
	static UEnum* EInputCaptureState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInputCaptureState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInputCaptureState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureState, (UObject*)Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("EInputCaptureState"));
		}
		return Z_Registration_Info_UEnum_EInputCaptureState.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<EInputCaptureState>()
	{
		return EInputCaptureState_StaticEnum();
	}
	struct Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureState_Statics::Enumerators[] = {
		{ "EInputCaptureState::Begin", (int64)EInputCaptureState::Begin },
		{ "EInputCaptureState::Continue", (int64)EInputCaptureState::Continue },
		{ "EInputCaptureState::End", (int64)EInputCaptureState::End },
		{ "EInputCaptureState::Ignore", (int64)EInputCaptureState::Ignore },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureState_Statics::Enum_MetaDataParams[] = {
		{ "Begin.Name", "EInputCaptureState::Begin" },
		{ "Comment", "/**\n * FInputCaptureUpdate uses this type to indicate what state the capturing Behavior\n * would like to transition to, based on the input event\n */" },
		{ "Continue.Comment", "// start capturing (which should always be the case if BeginCapture is called)\n" },
		{ "Continue.Name", "EInputCaptureState::Continue" },
		{ "Continue.ToolTip", "start capturing (which should always be the case if BeginCapture is called)" },
		{ "End.Comment", "// Behavior wants to continue capturing\n" },
		{ "End.Name", "EInputCaptureState::End" },
		{ "End.ToolTip", "Behavior wants to continue capturing" },
		{ "Ignore.Comment", "// Behavior wants to end capturing\n" },
		{ "Ignore.Name", "EInputCaptureState::Ignore" },
		{ "Ignore.ToolTip", "Behavior wants to end capturing" },
		{ "ModuleRelativePath", "Public/InputBehavior.h" },
		{ "ToolTip", "FInputCaptureUpdate uses this type to indicate what state the capturing Behavior\nwould like to transition to, based on the input event" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
		nullptr,
		"EInputCaptureState",
		"EInputCaptureState",
		Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureState()
	{
		if (!Z_Registration_Info_UEnum_EInputCaptureState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInputCaptureState.InnerSingleton, Z_Construct_UEnum_InteractiveToolsFramework_EInputCaptureState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInputCaptureState.InnerSingleton;
	}
	void UInputBehavior::StaticRegisterNativesUInputBehavior()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputBehavior);
	UClass* Z_Construct_UClass_UInputBehavior_NoRegister()
	{
		return UInputBehavior::StaticClass();
	}
	struct Z_Construct_UClass_UInputBehavior_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputBehavior_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputBehavior_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An InputBehavior implements a state machine for a user interaction. \n * The InputRouter maintains a set of active Behaviors, and when new input\n * events occur, it calls WantsCapture() to check if the Behavior would like to\n * begin capturing the applicable input event stream (eg for a mouse, one or both VR controllers, etc).\n * If the Behavior acquires capture, UpdateCapture() is called until the Behavior\n * indicates that it wants to release the device, or until the InputRouter force-terminates\n * the capture via ForceEndCapture().\n *\n * For example, something like ButtonSetClickBehavior might work as follows:\n *    - in WantsCapture(), if left mouse is pressed and a button is under cursor, return Begin, otherwise Ignore\n *    - in BeginCapture(), save identifier for button that is under cursor\n *    - in UpdateCapture()\n *        - if left mouse is down, return Continue\n *        - if left mouse is released:\n *            - if saved button is still under cursor, call button.Clicked()\n *            - return End\n *\n * Written sufficiently generically, the above Behavior doesn't need to know about buttons,\n * it just needs to know how to hit-test the clickable object(s). Similarly separate \n * Behaviors can be written for mouse, VR, touch, gamepad, etc. \n *\n * Implementing interactions in this way allows the input handling to be separated from functionality.\n */" },
		{ "IncludePath", "InputBehavior.h" },
		{ "ModuleRelativePath", "Public/InputBehavior.h" },
		{ "ToolTip", "An InputBehavior implements a state machine for a user interaction.\nThe InputRouter maintains a set of active Behaviors, and when new input\nevents occur, it calls WantsCapture() to check if the Behavior would like to\nbegin capturing the applicable input event stream (eg for a mouse, one or both VR controllers, etc).\nIf the Behavior acquires capture, UpdateCapture() is called until the Behavior\nindicates that it wants to release the device, or until the InputRouter force-terminates\nthe capture via ForceEndCapture().\n\nFor example, something like ButtonSetClickBehavior might work as follows:\n   - in WantsCapture(), if left mouse is pressed and a button is under cursor, return Begin, otherwise Ignore\n   - in BeginCapture(), save identifier for button that is under cursor\n   - in UpdateCapture()\n       - if left mouse is down, return Continue\n       - if left mouse is released:\n           - if saved button is still under cursor, call button.Clicked()\n           - return End\n\nWritten sufficiently generically, the above Behavior doesn't need to know about buttons,\nit just needs to know how to hit-test the clickable object(s). Similarly separate\nBehaviors can be written for mouse, VR, touch, gamepad, etc.\n\nImplementing interactions in this way allows the input handling to be separated from functionality." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputBehavior_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputBehavior>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputBehavior_Statics::ClassParams = {
		&UInputBehavior::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UInputBehavior_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputBehavior_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputBehavior()
	{
		if (!Z_Registration_Info_UClass_UInputBehavior.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputBehavior.OuterSingleton, Z_Construct_UClass_UInputBehavior_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInputBehavior.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UInputBehavior>()
	{
		return UInputBehavior::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputBehavior);
	UInputBehavior::~UInputBehavior() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehavior_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehavior_h_Statics::EnumInfo[] = {
		{ EInputCaptureSide_StaticEnum, TEXT("EInputCaptureSide"), &Z_Registration_Info_UEnum_EInputCaptureSide, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 688444477U) },
		{ EInputCaptureRequestType_StaticEnum, TEXT("EInputCaptureRequestType"), &Z_Registration_Info_UEnum_EInputCaptureRequestType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2855606915U) },
		{ EInputCaptureState_StaticEnum, TEXT("EInputCaptureState"), &Z_Registration_Info_UEnum_EInputCaptureState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1863761443U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehavior_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInputBehavior, UInputBehavior::StaticClass, TEXT("UInputBehavior"), &Z_Registration_Info_UClass_UInputBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputBehavior), 88155856U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehavior_h_927501230(TEXT("/Script/InteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehavior_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehavior_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehavior_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehavior_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
