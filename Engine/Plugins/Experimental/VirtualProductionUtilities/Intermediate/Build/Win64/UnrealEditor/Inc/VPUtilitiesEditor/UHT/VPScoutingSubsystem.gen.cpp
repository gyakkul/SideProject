// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VPScoutingSubsystem.h"
#include "UI/VREditorFloatingUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVPScoutingSubsystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VPUtilitiesEditor();
	VPUTILITIESEDITOR_API UClass* Z_Construct_UClass_UVPScoutingSubsystem();
	VPUTILITIESEDITOR_API UClass* Z_Construct_UClass_UVPScoutingSubsystem_NoRegister();
	VPUTILITIESEDITOR_API UClass* Z_Construct_UClass_UVPScoutingSubsystemGestureManagerBase();
	VPUTILITIESEDITOR_API UClass* Z_Construct_UClass_UVPScoutingSubsystemGestureManagerBase_NoRegister();
	VPUTILITIESEDITOR_API UClass* Z_Construct_UClass_UVPScoutingSubsystemHelpersBase();
	VPUTILITIESEDITOR_API UClass* Z_Construct_UClass_UVPScoutingSubsystemHelpersBase_NoRegister();
	VPUTILITIESEDITOR_API UEnum* Z_Construct_UEnum_VPUtilitiesEditor_EVProdPanelIDs();
	VREDITOR_API UClass* Z_Construct_UClass_AVREditorFloatingUI_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorInteractor_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorMode_NoRegister();
	VREDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVProdPanelIDs;
	static UEnum* EVProdPanelIDs_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVProdPanelIDs.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVProdPanelIDs.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VPUtilitiesEditor_EVProdPanelIDs, (UObject*)Z_Construct_UPackage__Script_VPUtilitiesEditor(), TEXT("EVProdPanelIDs"));
		}
		return Z_Registration_Info_UEnum_EVProdPanelIDs.OuterSingleton;
	}
	template<> VPUTILITIESEDITOR_API UEnum* StaticEnum<EVProdPanelIDs>()
	{
		return EVProdPanelIDs_StaticEnum();
	}
	struct Z_Construct_UEnum_VPUtilitiesEditor_EVProdPanelIDs_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VPUtilitiesEditor_EVProdPanelIDs_Statics::Enumerators[] = {
		{ "EVProdPanelIDs::Main", (int64)EVProdPanelIDs::Main },
		{ "EVProdPanelIDs::Left", (int64)EVProdPanelIDs::Left },
		{ "EVProdPanelIDs::Right", (int64)EVProdPanelIDs::Right },
		{ "EVProdPanelIDs::Context", (int64)EVProdPanelIDs::Context },
		{ "EVProdPanelIDs::Timeline", (int64)EVProdPanelIDs::Timeline },
		{ "EVProdPanelIDs::Measure", (int64)EVProdPanelIDs::Measure },
		{ "EVProdPanelIDs::Gaffer", (int64)EVProdPanelIDs::Gaffer },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VPUtilitiesEditor_EVProdPanelIDs_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Context.Name", "EVProdPanelIDs::Context" },
		{ "Gaffer.Name", "EVProdPanelIDs::Gaffer" },
		{ "Left.Name", "EVProdPanelIDs::Left" },
		{ "Main.Name", "EVProdPanelIDs::Main" },
		{ "Measure.Name", "EVProdPanelIDs::Measure" },
		{ "ModuleRelativePath", "Public/VPScoutingSubsystem.h" },
		{ "Right.Name", "EVProdPanelIDs::Right" },
		{ "Timeline.Name", "EVProdPanelIDs::Timeline" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VPUtilitiesEditor_EVProdPanelIDs_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VPUtilitiesEditor,
		nullptr,
		"EVProdPanelIDs",
		"EVProdPanelIDs",
		Z_Construct_UEnum_VPUtilitiesEditor_EVProdPanelIDs_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VPUtilitiesEditor_EVProdPanelIDs_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VPUtilitiesEditor_EVProdPanelIDs_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VPUtilitiesEditor_EVProdPanelIDs_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VPUtilitiesEditor_EVProdPanelIDs()
	{
		if (!Z_Registration_Info_UEnum_EVProdPanelIDs.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVProdPanelIDs.InnerSingleton, Z_Construct_UEnum_VPUtilitiesEditor_EVProdPanelIDs_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVProdPanelIDs.InnerSingleton;
	}
	void UVPScoutingSubsystemHelpersBase::StaticRegisterNativesUVPScoutingSubsystemHelpersBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVPScoutingSubsystemHelpersBase);
	UClass* Z_Construct_UClass_UVPScoutingSubsystemHelpersBase_NoRegister()
	{
		return UVPScoutingSubsystemHelpersBase::StaticClass();
	}
	struct Z_Construct_UClass_UVPScoutingSubsystemHelpersBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVPScoutingSubsystemHelpersBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VPUtilitiesEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPScoutingSubsystemHelpersBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * Base class of the helper class defined in BP\n */" },
		{ "IncludePath", "VPScoutingSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VPScoutingSubsystem.h" },
		{ "ShowWorldContextPin", "" },
		{ "ToolTip", "* Base class of the helper class defined in BP" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVPScoutingSubsystemHelpersBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVPScoutingSubsystemHelpersBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVPScoutingSubsystemHelpersBase_Statics::ClassParams = {
		&UVPScoutingSubsystemHelpersBase::StaticClass,
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
		0x000800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVPScoutingSubsystemHelpersBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVPScoutingSubsystemHelpersBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVPScoutingSubsystemHelpersBase()
	{
		if (!Z_Registration_Info_UClass_UVPScoutingSubsystemHelpersBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVPScoutingSubsystemHelpersBase.OuterSingleton, Z_Construct_UClass_UVPScoutingSubsystemHelpersBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVPScoutingSubsystemHelpersBase.OuterSingleton;
	}
	template<> VPUTILITIESEDITOR_API UClass* StaticClass<UVPScoutingSubsystemHelpersBase>()
	{
		return UVPScoutingSubsystemHelpersBase::StaticClass();
	}
	UVPScoutingSubsystemHelpersBase::UVPScoutingSubsystemHelpersBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVPScoutingSubsystemHelpersBase);
	UVPScoutingSubsystemHelpersBase::~UVPScoutingSubsystemHelpersBase() {}
	DEFINE_FUNCTION(UVPScoutingSubsystemGestureManagerBase::execOnVREditingModeExit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnVREditingModeExit_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPScoutingSubsystemGestureManagerBase::execOnVREditingModeEnter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnVREditingModeEnter_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPScoutingSubsystemGestureManagerBase::execEditorTick)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EditorTick_Implementation(Z_Param_DeltaSeconds);
		P_NATIVE_END;
	}
	struct VPScoutingSubsystemGestureManagerBase_eventEditorTick_Parms
	{
		float DeltaSeconds;
	};
	static FName NAME_UVPScoutingSubsystemGestureManagerBase_EditorTick = FName(TEXT("EditorTick"));
	void UVPScoutingSubsystemGestureManagerBase::EditorTick(float DeltaSeconds)
	{
		VPScoutingSubsystemGestureManagerBase_eventEditorTick_Parms Parms;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_UVPScoutingSubsystemGestureManagerBase_EditorTick),&Parms);
	}
	static FName NAME_UVPScoutingSubsystemGestureManagerBase_OnVREditingModeEnter = FName(TEXT("OnVREditingModeEnter"));
	void UVPScoutingSubsystemGestureManagerBase::OnVREditingModeEnter()
	{
		ProcessEvent(FindFunctionChecked(NAME_UVPScoutingSubsystemGestureManagerBase_OnVREditingModeEnter),NULL);
	}
	static FName NAME_UVPScoutingSubsystemGestureManagerBase_OnVREditingModeExit = FName(TEXT("OnVREditingModeExit"));
	void UVPScoutingSubsystemGestureManagerBase::OnVREditingModeExit()
	{
		ProcessEvent(FindFunctionChecked(NAME_UVPScoutingSubsystemGestureManagerBase_OnVREditingModeExit),NULL);
	}
	void UVPScoutingSubsystemGestureManagerBase::StaticRegisterNativesUVPScoutingSubsystemGestureManagerBase()
	{
		UClass* Class = UVPScoutingSubsystemGestureManagerBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EditorTick", &UVPScoutingSubsystemGestureManagerBase::execEditorTick },
			{ "OnVREditingModeEnter", &UVPScoutingSubsystemGestureManagerBase::execOnVREditingModeEnter },
			{ "OnVREditingModeExit", &UVPScoutingSubsystemGestureManagerBase::execOnVREditingModeExit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVPScoutingSubsystemGestureManagerBase_EditorTick_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVPScoutingSubsystemGestureManagerBase_EditorTick_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPScoutingSubsystemGestureManagerBase_eventEditorTick_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPScoutingSubsystemGestureManagerBase_EditorTick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPScoutingSubsystemGestureManagerBase_EditorTick_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPScoutingSubsystemGestureManagerBase_EditorTick_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Tick" },
		{ "ModuleRelativePath", "Public/VPScoutingSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPScoutingSubsystemGestureManagerBase_EditorTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPScoutingSubsystemGestureManagerBase, nullptr, "EditorTick", nullptr, nullptr, sizeof(VPScoutingSubsystemGestureManagerBase_eventEditorTick_Parms), Z_Construct_UFunction_UVPScoutingSubsystemGestureManagerBase_EditorTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystemGestureManagerBase_EditorTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPScoutingSubsystemGestureManagerBase_EditorTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystemGestureManagerBase_EditorTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPScoutingSubsystemGestureManagerBase_EditorTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPScoutingSubsystemGestureManagerBase_EditorTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPScoutingSubsystemGestureManagerBase_OnVREditingModeEnter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPScoutingSubsystemGestureManagerBase_OnVREditingModeEnter_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "VR" },
		{ "ModuleRelativePath", "Public/VPScoutingSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPScoutingSubsystemGestureManagerBase_OnVREditingModeEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPScoutingSubsystemGestureManagerBase, nullptr, "OnVREditingModeEnter", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPScoutingSubsystemGestureManagerBase_OnVREditingModeEnter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystemGestureManagerBase_OnVREditingModeEnter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPScoutingSubsystemGestureManagerBase_OnVREditingModeEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPScoutingSubsystemGestureManagerBase_OnVREditingModeEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPScoutingSubsystemGestureManagerBase_OnVREditingModeExit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPScoutingSubsystemGestureManagerBase_OnVREditingModeExit_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "VR" },
		{ "ModuleRelativePath", "Public/VPScoutingSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPScoutingSubsystemGestureManagerBase_OnVREditingModeExit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPScoutingSubsystemGestureManagerBase, nullptr, "OnVREditingModeExit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPScoutingSubsystemGestureManagerBase_OnVREditingModeExit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystemGestureManagerBase_OnVREditingModeExit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPScoutingSubsystemGestureManagerBase_OnVREditingModeExit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPScoutingSubsystemGestureManagerBase_OnVREditingModeExit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVPScoutingSubsystemGestureManagerBase);
	UClass* Z_Construct_UClass_UVPScoutingSubsystemGestureManagerBase_NoRegister()
	{
		return UVPScoutingSubsystemGestureManagerBase::StaticClass();
	}
	struct Z_Construct_UClass_UVPScoutingSubsystemGestureManagerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVPScoutingSubsystemGestureManagerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VPUtilitiesEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVPScoutingSubsystemGestureManagerBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVPScoutingSubsystemGestureManagerBase_EditorTick, "EditorTick" }, // 3954056550
		{ &Z_Construct_UFunction_UVPScoutingSubsystemGestureManagerBase_OnVREditingModeEnter, "OnVREditingModeEnter" }, // 2363070879
		{ &Z_Construct_UFunction_UVPScoutingSubsystemGestureManagerBase_OnVREditingModeExit, "OnVREditingModeExit" }, // 3356149128
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPScoutingSubsystemGestureManagerBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * Base class of the gesture manager defined in BP\n */" },
		{ "IncludePath", "VPScoutingSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VPScoutingSubsystem.h" },
		{ "ShowWorldContextPin", "" },
		{ "ToolTip", "* Base class of the gesture manager defined in BP" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVPScoutingSubsystemGestureManagerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVPScoutingSubsystemGestureManagerBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVPScoutingSubsystemGestureManagerBase_Statics::ClassParams = {
		&UVPScoutingSubsystemGestureManagerBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVPScoutingSubsystemGestureManagerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVPScoutingSubsystemGestureManagerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVPScoutingSubsystemGestureManagerBase()
	{
		if (!Z_Registration_Info_UClass_UVPScoutingSubsystemGestureManagerBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVPScoutingSubsystemGestureManagerBase.OuterSingleton, Z_Construct_UClass_UVPScoutingSubsystemGestureManagerBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVPScoutingSubsystemGestureManagerBase.OuterSingleton;
	}
	template<> VPUTILITIESEDITOR_API UClass* StaticClass<UVPScoutingSubsystemGestureManagerBase>()
	{
		return UVPScoutingSubsystemGestureManagerBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVPScoutingSubsystemGestureManagerBase);
	UVPScoutingSubsystemGestureManagerBase::~UVPScoutingSubsystemGestureManagerBase() {}
	DEFINE_FUNCTION(UVPScoutingSubsystem::execToggleRotationGridSnapping)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UVPScoutingSubsystem::ToggleRotationGridSnapping();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPScoutingSubsystem::execIsRotationGridSnappingEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVPScoutingSubsystem::IsRotationGridSnappingEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPScoutingSubsystem::execToggleLocationGridSnapping)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UVPScoutingSubsystem::ToggleLocationGridSnapping();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPScoutingSubsystem::execIsLocationGridSnappingEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVPScoutingSubsystem::IsLocationGridSnappingEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPScoutingSubsystem::execExitVRMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UVPScoutingSubsystem::ExitVRMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPScoutingSubsystem::execEnterVRMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVPScoutingSubsystem::EnterVRMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPScoutingSubsystem::execGetVREditorMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVREditorMode**)Z_Param__Result=UVPScoutingSubsystem::GetVREditorMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPScoutingSubsystem::execSetIsHelperSystemEnabled)
	{
		P_GET_UBOOL(Z_Param_bInIsHelperSystemEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVPScoutingSubsystem::SetIsHelperSystemEnabled(Z_Param_bInIsHelperSystemEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPScoutingSubsystem::execIsHelperSystemEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVPScoutingSubsystem::IsHelperSystemEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPScoutingSubsystem::execSetInertiaDampingCVar)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InInertiaDamping);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVPScoutingSubsystem::SetInertiaDampingCVar(Z_Param_InInertiaDamping);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPScoutingSubsystem::execSetIsUsingInertiaDamping)
	{
		P_GET_UBOOL(Z_Param_bInIsUsingInertiaDamping);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVPScoutingSubsystem::SetIsUsingInertiaDamping(Z_Param_bInIsUsingInertiaDamping);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPScoutingSubsystem::execIsUsingInertiaDamping)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVPScoutingSubsystem::IsUsingInertiaDamping();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPScoutingSubsystem::execSetGripNavSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InGripNavSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVPScoutingSubsystem::SetGripNavSpeed(Z_Param_InGripNavSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPScoutingSubsystem::execGetGripNavSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UVPScoutingSubsystem::GetGripNavSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPScoutingSubsystem::execSetFlightSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InFlightSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVPScoutingSubsystem::SetFlightSpeed(Z_Param_InFlightSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPScoutingSubsystem::execGetFlightSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UVPScoutingSubsystem::GetFlightSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPScoutingSubsystem::execSetShowTransformGizmoCVar)
	{
		P_GET_UBOOL(Z_Param_bInShowTransformGizmoCVar);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVPScoutingSubsystem::SetShowTransformGizmoCVar(Z_Param_bInShowTransformGizmoCVar);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPScoutingSubsystem::execSetIsUsingTransformGizmo)
	{
		P_GET_UBOOL(Z_Param_bInIsUsingTransformGizmo);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVPScoutingSubsystem::SetIsUsingTransformGizmo(Z_Param_bInIsUsingTransformGizmo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPScoutingSubsystem::execIsUsingTransformGizmo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVPScoutingSubsystem::IsUsingTransformGizmo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPScoutingSubsystem::execSetIsUsingMetricSystem)
	{
		P_GET_UBOOL(Z_Param_bInUseMetricSystem);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVPScoutingSubsystem::SetIsUsingMetricSystem(Z_Param_bInUseMetricSystem);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPScoutingSubsystem::execIsUsingMetricSystem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVPScoutingSubsystem::IsUsingMetricSystem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPScoutingSubsystem::execGetShowName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UVPScoutingSubsystem::GetShowName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPScoutingSubsystem::execGetDirectorName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UVPScoutingSubsystem::GetDirectorName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPScoutingSubsystem::execGetVProdPanelID)
	{
		P_GET_ENUM(EVProdPanelIDs,Z_Param_Panel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UVPScoutingSubsystem::GetVProdPanelID(EVProdPanelIDs(Z_Param_Panel));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPScoutingSubsystem::execGetActiveEditorVRControllers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UVREditorInteractor*>*)Z_Param__Result=UVPScoutingSubsystem::GetActiveEditorVRControllers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPScoutingSubsystem::execGetPanelWidget)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_PanelID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUserWidget**)Z_Param__Result=P_THIS->GetPanelWidget(Z_Param_Out_PanelID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPScoutingSubsystem::execGetPanelActor)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_PanelID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AVREditorFloatingUI**)Z_Param__Result=P_THIS->GetPanelActor(Z_Param_Out_PanelID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPScoutingSubsystem::execIsVRScoutingUIOpen)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_PanelID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsVRScoutingUIOpen(Z_Param_Out_PanelID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPScoutingSubsystem::execHideInfoDisplayPanel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideInfoDisplayPanel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPScoutingSubsystem::execToggleVRScoutingUI)
	{
		P_GET_STRUCT_REF(FVREditorFloatingUICreationContext,Z_Param_Out_CreationContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleVRScoutingUI(Z_Param_Out_CreationContext);
		P_NATIVE_END;
	}
	void UVPScoutingSubsystem::StaticRegisterNativesUVPScoutingSubsystem()
	{
		UClass* Class = UVPScoutingSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnterVRMode", &UVPScoutingSubsystem::execEnterVRMode },
			{ "ExitVRMode", &UVPScoutingSubsystem::execExitVRMode },
			{ "GetActiveEditorVRControllers", &UVPScoutingSubsystem::execGetActiveEditorVRControllers },
			{ "GetDirectorName", &UVPScoutingSubsystem::execGetDirectorName },
			{ "GetFlightSpeed", &UVPScoutingSubsystem::execGetFlightSpeed },
			{ "GetGripNavSpeed", &UVPScoutingSubsystem::execGetGripNavSpeed },
			{ "GetPanelActor", &UVPScoutingSubsystem::execGetPanelActor },
			{ "GetPanelWidget", &UVPScoutingSubsystem::execGetPanelWidget },
			{ "GetShowName", &UVPScoutingSubsystem::execGetShowName },
			{ "GetVProdPanelID", &UVPScoutingSubsystem::execGetVProdPanelID },
			{ "GetVREditorMode", &UVPScoutingSubsystem::execGetVREditorMode },
			{ "HideInfoDisplayPanel", &UVPScoutingSubsystem::execHideInfoDisplayPanel },
			{ "IsHelperSystemEnabled", &UVPScoutingSubsystem::execIsHelperSystemEnabled },
			{ "IsLocationGridSnappingEnabled", &UVPScoutingSubsystem::execIsLocationGridSnappingEnabled },
			{ "IsRotationGridSnappingEnabled", &UVPScoutingSubsystem::execIsRotationGridSnappingEnabled },
			{ "IsUsingInertiaDamping", &UVPScoutingSubsystem::execIsUsingInertiaDamping },
			{ "IsUsingMetricSystem", &UVPScoutingSubsystem::execIsUsingMetricSystem },
			{ "IsUsingTransformGizmo", &UVPScoutingSubsystem::execIsUsingTransformGizmo },
			{ "IsVRScoutingUIOpen", &UVPScoutingSubsystem::execIsVRScoutingUIOpen },
			{ "SetFlightSpeed", &UVPScoutingSubsystem::execSetFlightSpeed },
			{ "SetGripNavSpeed", &UVPScoutingSubsystem::execSetGripNavSpeed },
			{ "SetInertiaDampingCVar", &UVPScoutingSubsystem::execSetInertiaDampingCVar },
			{ "SetIsHelperSystemEnabled", &UVPScoutingSubsystem::execSetIsHelperSystemEnabled },
			{ "SetIsUsingInertiaDamping", &UVPScoutingSubsystem::execSetIsUsingInertiaDamping },
			{ "SetIsUsingMetricSystem", &UVPScoutingSubsystem::execSetIsUsingMetricSystem },
			{ "SetIsUsingTransformGizmo", &UVPScoutingSubsystem::execSetIsUsingTransformGizmo },
			{ "SetShowTransformGizmoCVar", &UVPScoutingSubsystem::execSetShowTransformGizmoCVar },
			{ "ToggleLocationGridSnapping", &UVPScoutingSubsystem::execToggleLocationGridSnapping },
			{ "ToggleRotationGridSnapping", &UVPScoutingSubsystem::execToggleRotationGridSnapping },
			{ "ToggleVRScoutingUI", &UVPScoutingSubsystem::execToggleVRScoutingUI },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVPScoutingSubsystem_EnterVRMode_Statics
	{
		struct VPScoutingSubsystem_eventEnterVRMode_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVPScoutingSubsystem_EnterVRMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VPScoutingSubsystem_eventEnterVRMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVPScoutingSubsystem_EnterVRMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VPScoutingSubsystem_eventEnterVRMode_Parms), &Z_Construct_UFunction_UVPScoutingSubsystem_EnterVRMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPScoutingSubsystem_EnterVRMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPScoutingSubsystem_EnterVRMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPScoutingSubsystem_EnterVRMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "Comment", "/** Enter VR Mode */" },
		{ "ModuleRelativePath", "Public/VPScoutingSubsystem.h" },
		{ "ToolTip", "Enter VR Mode" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPScoutingSubsystem_EnterVRMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPScoutingSubsystem, nullptr, "EnterVRMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVPScoutingSubsystem_EnterVRMode_Statics::VPScoutingSubsystem_eventEnterVRMode_Parms), Z_Construct_UFunction_UVPScoutingSubsystem_EnterVRMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_EnterVRMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPScoutingSubsystem_EnterVRMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_EnterVRMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPScoutingSubsystem_EnterVRMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPScoutingSubsystem_EnterVRMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPScoutingSubsystem_ExitVRMode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPScoutingSubsystem_ExitVRMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "Comment", "/** Exit VR Mode */" },
		{ "ModuleRelativePath", "Public/VPScoutingSubsystem.h" },
		{ "ToolTip", "Exit VR Mode" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPScoutingSubsystem_ExitVRMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPScoutingSubsystem, nullptr, "ExitVRMode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPScoutingSubsystem_ExitVRMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_ExitVRMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPScoutingSubsystem_ExitVRMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPScoutingSubsystem_ExitVRMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPScoutingSubsystem_GetActiveEditorVRControllers_Statics
	{
		struct VPScoutingSubsystem_eventGetActiveEditorVRControllers_Parms
		{
			TArray<UVREditorInteractor*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVPScoutingSubsystem_GetActiveEditorVRControllers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UVREditorInteractor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVPScoutingSubsystem_GetActiveEditorVRControllers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPScoutingSubsystem_eventGetActiveEditorVRControllers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPScoutingSubsystem_GetActiveEditorVRControllers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPScoutingSubsystem_GetActiveEditorVRControllers_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPScoutingSubsystem_GetActiveEditorVRControllers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPScoutingSubsystem_GetActiveEditorVRControllers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VPScoutingSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPScoutingSubsystem_GetActiveEditorVRControllers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPScoutingSubsystem, nullptr, "GetActiveEditorVRControllers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVPScoutingSubsystem_GetActiveEditorVRControllers_Statics::VPScoutingSubsystem_eventGetActiveEditorVRControllers_Parms), Z_Construct_UFunction_UVPScoutingSubsystem_GetActiveEditorVRControllers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_GetActiveEditorVRControllers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPScoutingSubsystem_GetActiveEditorVRControllers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_GetActiveEditorVRControllers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPScoutingSubsystem_GetActiveEditorVRControllers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPScoutingSubsystem_GetActiveEditorVRControllers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPScoutingSubsystem_GetDirectorName_Statics
	{
		struct VPScoutingSubsystem_eventGetDirectorName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVPScoutingSubsystem_GetDirectorName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPScoutingSubsystem_eventGetDirectorName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPScoutingSubsystem_GetDirectorName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPScoutingSubsystem_GetDirectorName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPScoutingSubsystem_GetDirectorName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VPScoutingSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPScoutingSubsystem_GetDirectorName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPScoutingSubsystem, nullptr, "GetDirectorName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVPScoutingSubsystem_GetDirectorName_Statics::VPScoutingSubsystem_eventGetDirectorName_Parms), Z_Construct_UFunction_UVPScoutingSubsystem_GetDirectorName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_GetDirectorName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPScoutingSubsystem_GetDirectorName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_GetDirectorName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPScoutingSubsystem_GetDirectorName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPScoutingSubsystem_GetDirectorName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPScoutingSubsystem_GetFlightSpeed_Statics
	{
		struct VPScoutingSubsystem_eventGetFlightSpeed_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVPScoutingSubsystem_GetFlightSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPScoutingSubsystem_eventGetFlightSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPScoutingSubsystem_GetFlightSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPScoutingSubsystem_GetFlightSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPScoutingSubsystem_GetFlightSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "Comment", "/** Get flight speed for scouting in VR */" },
		{ "ModuleRelativePath", "Public/VPScoutingSubsystem.h" },
		{ "ToolTip", "Get flight speed for scouting in VR" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPScoutingSubsystem_GetFlightSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPScoutingSubsystem, nullptr, "GetFlightSpeed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVPScoutingSubsystem_GetFlightSpeed_Statics::VPScoutingSubsystem_eventGetFlightSpeed_Parms), Z_Construct_UFunction_UVPScoutingSubsystem_GetFlightSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_GetFlightSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPScoutingSubsystem_GetFlightSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_GetFlightSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPScoutingSubsystem_GetFlightSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPScoutingSubsystem_GetFlightSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPScoutingSubsystem_GetGripNavSpeed_Statics
	{
		struct VPScoutingSubsystem_eventGetGripNavSpeed_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVPScoutingSubsystem_GetGripNavSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPScoutingSubsystem_eventGetGripNavSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPScoutingSubsystem_GetGripNavSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPScoutingSubsystem_GetGripNavSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPScoutingSubsystem_GetGripNavSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "Comment", "/** Get grip nav speed for scouting in VR */" },
		{ "ModuleRelativePath", "Public/VPScoutingSubsystem.h" },
		{ "ToolTip", "Get grip nav speed for scouting in VR" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPScoutingSubsystem_GetGripNavSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPScoutingSubsystem, nullptr, "GetGripNavSpeed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVPScoutingSubsystem_GetGripNavSpeed_Statics::VPScoutingSubsystem_eventGetGripNavSpeed_Parms), Z_Construct_UFunction_UVPScoutingSubsystem_GetGripNavSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_GetGripNavSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPScoutingSubsystem_GetGripNavSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_GetGripNavSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPScoutingSubsystem_GetGripNavSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPScoutingSubsystem_GetGripNavSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPScoutingSubsystem_GetPanelActor_Statics
	{
		struct VPScoutingSubsystem_eventGetPanelActor_Parms
		{
			FName PanelID;
			AVREditorFloatingUI* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PanelID_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PanelID;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPScoutingSubsystem_GetPanelActor_Statics::NewProp_PanelID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVPScoutingSubsystem_GetPanelActor_Statics::NewProp_PanelID = { "PanelID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPScoutingSubsystem_eventGetPanelActor_Parms, PanelID), METADATA_PARAMS(Z_Construct_UFunction_UVPScoutingSubsystem_GetPanelActor_Statics::NewProp_PanelID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_GetPanelActor_Statics::NewProp_PanelID_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVPScoutingSubsystem_GetPanelActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPScoutingSubsystem_eventGetPanelActor_Parms, ReturnValue), Z_Construct_UClass_AVREditorFloatingUI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPScoutingSubsystem_GetPanelActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPScoutingSubsystem_GetPanelActor_Statics::NewProp_PanelID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPScoutingSubsystem_GetPanelActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPScoutingSubsystem_GetPanelActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "Comment", "/** Get UI panel Actor from the passed ID */" },
		{ "ModuleRelativePath", "Public/VPScoutingSubsystem.h" },
		{ "ToolTip", "Get UI panel Actor from the passed ID" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPScoutingSubsystem_GetPanelActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPScoutingSubsystem, nullptr, "GetPanelActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVPScoutingSubsystem_GetPanelActor_Statics::VPScoutingSubsystem_eventGetPanelActor_Parms), Z_Construct_UFunction_UVPScoutingSubsystem_GetPanelActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_GetPanelActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPScoutingSubsystem_GetPanelActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_GetPanelActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPScoutingSubsystem_GetPanelActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPScoutingSubsystem_GetPanelActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPScoutingSubsystem_GetPanelWidget_Statics
	{
		struct VPScoutingSubsystem_eventGetPanelWidget_Parms
		{
			FName PanelID;
			UUserWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PanelID_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PanelID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPScoutingSubsystem_GetPanelWidget_Statics::NewProp_PanelID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVPScoutingSubsystem_GetPanelWidget_Statics::NewProp_PanelID = { "PanelID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPScoutingSubsystem_eventGetPanelWidget_Parms, PanelID), METADATA_PARAMS(Z_Construct_UFunction_UVPScoutingSubsystem_GetPanelWidget_Statics::NewProp_PanelID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_GetPanelWidget_Statics::NewProp_PanelID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPScoutingSubsystem_GetPanelWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVPScoutingSubsystem_GetPanelWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPScoutingSubsystem_eventGetPanelWidget_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVPScoutingSubsystem_GetPanelWidget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_GetPanelWidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPScoutingSubsystem_GetPanelWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPScoutingSubsystem_GetPanelWidget_Statics::NewProp_PanelID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPScoutingSubsystem_GetPanelWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPScoutingSubsystem_GetPanelWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "Comment", "/** Get UI panel widget from the passed ID */" },
		{ "ModuleRelativePath", "Public/VPScoutingSubsystem.h" },
		{ "ToolTip", "Get UI panel widget from the passed ID" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPScoutingSubsystem_GetPanelWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPScoutingSubsystem, nullptr, "GetPanelWidget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVPScoutingSubsystem_GetPanelWidget_Statics::VPScoutingSubsystem_eventGetPanelWidget_Parms), Z_Construct_UFunction_UVPScoutingSubsystem_GetPanelWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_GetPanelWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPScoutingSubsystem_GetPanelWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_GetPanelWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPScoutingSubsystem_GetPanelWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPScoutingSubsystem_GetPanelWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPScoutingSubsystem_GetShowName_Statics
	{
		struct VPScoutingSubsystem_eventGetShowName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVPScoutingSubsystem_GetShowName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPScoutingSubsystem_eventGetShowName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPScoutingSubsystem_GetShowName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPScoutingSubsystem_GetShowName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPScoutingSubsystem_GetShowName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VPScoutingSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPScoutingSubsystem_GetShowName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPScoutingSubsystem, nullptr, "GetShowName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVPScoutingSubsystem_GetShowName_Statics::VPScoutingSubsystem_eventGetShowName_Parms), Z_Construct_UFunction_UVPScoutingSubsystem_GetShowName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_GetShowName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPScoutingSubsystem_GetShowName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_GetShowName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPScoutingSubsystem_GetShowName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPScoutingSubsystem_GetShowName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPScoutingSubsystem_GetVProdPanelID_Statics
	{
		struct VPScoutingSubsystem_eventGetVProdPanelID_Parms
		{
			EVProdPanelIDs Panel;
			FName ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Panel_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Panel_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Panel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVPScoutingSubsystem_GetVProdPanelID_Statics::NewProp_Panel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPScoutingSubsystem_GetVProdPanelID_Statics::NewProp_Panel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVPScoutingSubsystem_GetVProdPanelID_Statics::NewProp_Panel = { "Panel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPScoutingSubsystem_eventGetVProdPanelID_Parms, Panel), Z_Construct_UEnum_VPUtilitiesEditor_EVProdPanelIDs, METADATA_PARAMS(Z_Construct_UFunction_UVPScoutingSubsystem_GetVProdPanelID_Statics::NewProp_Panel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_GetVProdPanelID_Statics::NewProp_Panel_MetaData)) }; // 2314291343
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPScoutingSubsystem_GetVProdPanelID_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVPScoutingSubsystem_GetVProdPanelID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPScoutingSubsystem_eventGetVProdPanelID_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UVPScoutingSubsystem_GetVProdPanelID_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_GetVProdPanelID_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPScoutingSubsystem_GetVProdPanelID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPScoutingSubsystem_GetVProdPanelID_Statics::NewProp_Panel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPScoutingSubsystem_GetVProdPanelID_Statics::NewProp_Panel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPScoutingSubsystem_GetVProdPanelID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPScoutingSubsystem_GetVProdPanelID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VPScoutingSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPScoutingSubsystem_GetVProdPanelID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPScoutingSubsystem, nullptr, "GetVProdPanelID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVPScoutingSubsystem_GetVProdPanelID_Statics::VPScoutingSubsystem_eventGetVProdPanelID_Parms), Z_Construct_UFunction_UVPScoutingSubsystem_GetVProdPanelID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_GetVProdPanelID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPScoutingSubsystem_GetVProdPanelID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_GetVProdPanelID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPScoutingSubsystem_GetVProdPanelID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPScoutingSubsystem_GetVProdPanelID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPScoutingSubsystem_GetVREditorMode_Statics
	{
		struct VPScoutingSubsystem_eventGetVREditorMode_Parms
		{
			UVREditorMode* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVPScoutingSubsystem_GetVREditorMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPScoutingSubsystem_eventGetVREditorMode_Parms, ReturnValue), Z_Construct_UClass_UVREditorMode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPScoutingSubsystem_GetVREditorMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPScoutingSubsystem_GetVREditorMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPScoutingSubsystem_GetVREditorMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "Comment", "/** Get VR Editor Mode object */" },
		{ "ModuleRelativePath", "Public/VPScoutingSubsystem.h" },
		{ "ToolTip", "Get VR Editor Mode object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPScoutingSubsystem_GetVREditorMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPScoutingSubsystem, nullptr, "GetVREditorMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVPScoutingSubsystem_GetVREditorMode_Statics::VPScoutingSubsystem_eventGetVREditorMode_Parms), Z_Construct_UFunction_UVPScoutingSubsystem_GetVREditorMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_GetVREditorMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPScoutingSubsystem_GetVREditorMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_GetVREditorMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPScoutingSubsystem_GetVREditorMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPScoutingSubsystem_GetVREditorMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPScoutingSubsystem_HideInfoDisplayPanel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPScoutingSubsystem_HideInfoDisplayPanel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "Comment", "/** Hide VR Sequencer Window*/" },
		{ "ModuleRelativePath", "Public/VPScoutingSubsystem.h" },
		{ "ToolTip", "Hide VR Sequencer Window" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPScoutingSubsystem_HideInfoDisplayPanel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPScoutingSubsystem, nullptr, "HideInfoDisplayPanel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPScoutingSubsystem_HideInfoDisplayPanel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_HideInfoDisplayPanel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPScoutingSubsystem_HideInfoDisplayPanel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPScoutingSubsystem_HideInfoDisplayPanel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPScoutingSubsystem_IsHelperSystemEnabled_Statics
	{
		struct VPScoutingSubsystem_eventIsHelperSystemEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVPScoutingSubsystem_IsHelperSystemEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VPScoutingSubsystem_eventIsHelperSystemEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVPScoutingSubsystem_IsHelperSystemEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VPScoutingSubsystem_eventIsHelperSystemEnabled_Parms), &Z_Construct_UFunction_UVPScoutingSubsystem_IsHelperSystemEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPScoutingSubsystem_IsHelperSystemEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPScoutingSubsystem_IsHelperSystemEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPScoutingSubsystem_IsHelperSystemEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "Comment", "/** Whether the helper system on the controllers is enabled */" },
		{ "ModuleRelativePath", "Public/VPScoutingSubsystem.h" },
		{ "ToolTip", "Whether the helper system on the controllers is enabled" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPScoutingSubsystem_IsHelperSystemEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPScoutingSubsystem, nullptr, "IsHelperSystemEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVPScoutingSubsystem_IsHelperSystemEnabled_Statics::VPScoutingSubsystem_eventIsHelperSystemEnabled_Parms), Z_Construct_UFunction_UVPScoutingSubsystem_IsHelperSystemEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_IsHelperSystemEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPScoutingSubsystem_IsHelperSystemEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_IsHelperSystemEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPScoutingSubsystem_IsHelperSystemEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPScoutingSubsystem_IsHelperSystemEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPScoutingSubsystem_IsLocationGridSnappingEnabled_Statics
	{
		struct VPScoutingSubsystem_eventIsLocationGridSnappingEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVPScoutingSubsystem_IsLocationGridSnappingEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VPScoutingSubsystem_eventIsLocationGridSnappingEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVPScoutingSubsystem_IsLocationGridSnappingEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VPScoutingSubsystem_eventIsLocationGridSnappingEnabled_Parms), &Z_Construct_UFunction_UVPScoutingSubsystem_IsLocationGridSnappingEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPScoutingSubsystem_IsLocationGridSnappingEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPScoutingSubsystem_IsLocationGridSnappingEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPScoutingSubsystem_IsLocationGridSnappingEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "Comment", "/** Whether location grid snapping is enabled */" },
		{ "ModuleRelativePath", "Public/VPScoutingSubsystem.h" },
		{ "ToolTip", "Whether location grid snapping is enabled" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPScoutingSubsystem_IsLocationGridSnappingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPScoutingSubsystem, nullptr, "IsLocationGridSnappingEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVPScoutingSubsystem_IsLocationGridSnappingEnabled_Statics::VPScoutingSubsystem_eventIsLocationGridSnappingEnabled_Parms), Z_Construct_UFunction_UVPScoutingSubsystem_IsLocationGridSnappingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_IsLocationGridSnappingEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPScoutingSubsystem_IsLocationGridSnappingEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_IsLocationGridSnappingEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPScoutingSubsystem_IsLocationGridSnappingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPScoutingSubsystem_IsLocationGridSnappingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPScoutingSubsystem_IsRotationGridSnappingEnabled_Statics
	{
		struct VPScoutingSubsystem_eventIsRotationGridSnappingEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVPScoutingSubsystem_IsRotationGridSnappingEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VPScoutingSubsystem_eventIsRotationGridSnappingEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVPScoutingSubsystem_IsRotationGridSnappingEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VPScoutingSubsystem_eventIsRotationGridSnappingEnabled_Parms), &Z_Construct_UFunction_UVPScoutingSubsystem_IsRotationGridSnappingEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPScoutingSubsystem_IsRotationGridSnappingEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPScoutingSubsystem_IsRotationGridSnappingEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPScoutingSubsystem_IsRotationGridSnappingEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "Comment", "/** Whether rotation grid snapping is enabled */" },
		{ "ModuleRelativePath", "Public/VPScoutingSubsystem.h" },
		{ "ToolTip", "Whether rotation grid snapping is enabled" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPScoutingSubsystem_IsRotationGridSnappingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPScoutingSubsystem, nullptr, "IsRotationGridSnappingEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVPScoutingSubsystem_IsRotationGridSnappingEnabled_Statics::VPScoutingSubsystem_eventIsRotationGridSnappingEnabled_Parms), Z_Construct_UFunction_UVPScoutingSubsystem_IsRotationGridSnappingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_IsRotationGridSnappingEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPScoutingSubsystem_IsRotationGridSnappingEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_IsRotationGridSnappingEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPScoutingSubsystem_IsRotationGridSnappingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPScoutingSubsystem_IsRotationGridSnappingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPScoutingSubsystem_IsUsingInertiaDamping_Statics
	{
		struct VPScoutingSubsystem_eventIsUsingInertiaDamping_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVPScoutingSubsystem_IsUsingInertiaDamping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VPScoutingSubsystem_eventIsUsingInertiaDamping_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVPScoutingSubsystem_IsUsingInertiaDamping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VPScoutingSubsystem_eventIsUsingInertiaDamping_Parms), &Z_Construct_UFunction_UVPScoutingSubsystem_IsUsingInertiaDamping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPScoutingSubsystem_IsUsingInertiaDamping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPScoutingSubsystem_IsUsingInertiaDamping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPScoutingSubsystem_IsUsingInertiaDamping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "Comment", "/** Whether grip nav inertia is enabled when scouting in VR */" },
		{ "ModuleRelativePath", "Public/VPScoutingSubsystem.h" },
		{ "ToolTip", "Whether grip nav inertia is enabled when scouting in VR" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPScoutingSubsystem_IsUsingInertiaDamping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPScoutingSubsystem, nullptr, "IsUsingInertiaDamping", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVPScoutingSubsystem_IsUsingInertiaDamping_Statics::VPScoutingSubsystem_eventIsUsingInertiaDamping_Parms), Z_Construct_UFunction_UVPScoutingSubsystem_IsUsingInertiaDamping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_IsUsingInertiaDamping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPScoutingSubsystem_IsUsingInertiaDamping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_IsUsingInertiaDamping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPScoutingSubsystem_IsUsingInertiaDamping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPScoutingSubsystem_IsUsingInertiaDamping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPScoutingSubsystem_IsUsingMetricSystem_Statics
	{
		struct VPScoutingSubsystem_eventIsUsingMetricSystem_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVPScoutingSubsystem_IsUsingMetricSystem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VPScoutingSubsystem_eventIsUsingMetricSystem_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVPScoutingSubsystem_IsUsingMetricSystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VPScoutingSubsystem_eventIsUsingMetricSystem_Parms), &Z_Construct_UFunction_UVPScoutingSubsystem_IsUsingMetricSystem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPScoutingSubsystem_IsUsingMetricSystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPScoutingSubsystem_IsUsingMetricSystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPScoutingSubsystem_IsUsingMetricSystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "Comment", "/** Whether the VR user wants to use the metric system instead of imperial */" },
		{ "ModuleRelativePath", "Public/VPScoutingSubsystem.h" },
		{ "ToolTip", "Whether the VR user wants to use the metric system instead of imperial" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPScoutingSubsystem_IsUsingMetricSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPScoutingSubsystem, nullptr, "IsUsingMetricSystem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVPScoutingSubsystem_IsUsingMetricSystem_Statics::VPScoutingSubsystem_eventIsUsingMetricSystem_Parms), Z_Construct_UFunction_UVPScoutingSubsystem_IsUsingMetricSystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_IsUsingMetricSystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPScoutingSubsystem_IsUsingMetricSystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_IsUsingMetricSystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPScoutingSubsystem_IsUsingMetricSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPScoutingSubsystem_IsUsingMetricSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPScoutingSubsystem_IsUsingTransformGizmo_Statics
	{
		struct VPScoutingSubsystem_eventIsUsingTransformGizmo_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVPScoutingSubsystem_IsUsingTransformGizmo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VPScoutingSubsystem_eventIsUsingTransformGizmo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVPScoutingSubsystem_IsUsingTransformGizmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VPScoutingSubsystem_eventIsUsingTransformGizmo_Parms), &Z_Construct_UFunction_UVPScoutingSubsystem_IsUsingTransformGizmo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPScoutingSubsystem_IsUsingTransformGizmo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPScoutingSubsystem_IsUsingTransformGizmo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPScoutingSubsystem_IsUsingTransformGizmo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "Comment", "/** Whether the VR user wants to have the transform gizmo enabled */" },
		{ "ModuleRelativePath", "Public/VPScoutingSubsystem.h" },
		{ "ToolTip", "Whether the VR user wants to have the transform gizmo enabled" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPScoutingSubsystem_IsUsingTransformGizmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPScoutingSubsystem, nullptr, "IsUsingTransformGizmo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVPScoutingSubsystem_IsUsingTransformGizmo_Statics::VPScoutingSubsystem_eventIsUsingTransformGizmo_Parms), Z_Construct_UFunction_UVPScoutingSubsystem_IsUsingTransformGizmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_IsUsingTransformGizmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPScoutingSubsystem_IsUsingTransformGizmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_IsUsingTransformGizmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPScoutingSubsystem_IsUsingTransformGizmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPScoutingSubsystem_IsUsingTransformGizmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPScoutingSubsystem_IsVRScoutingUIOpen_Statics
	{
		struct VPScoutingSubsystem_eventIsVRScoutingUIOpen_Parms
		{
			FName PanelID;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PanelID_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PanelID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPScoutingSubsystem_IsVRScoutingUIOpen_Statics::NewProp_PanelID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVPScoutingSubsystem_IsVRScoutingUIOpen_Statics::NewProp_PanelID = { "PanelID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPScoutingSubsystem_eventIsVRScoutingUIOpen_Parms, PanelID), METADATA_PARAMS(Z_Construct_UFunction_UVPScoutingSubsystem_IsVRScoutingUIOpen_Statics::NewProp_PanelID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_IsVRScoutingUIOpen_Statics::NewProp_PanelID_MetaData)) };
	void Z_Construct_UFunction_UVPScoutingSubsystem_IsVRScoutingUIOpen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VPScoutingSubsystem_eventIsVRScoutingUIOpen_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVPScoutingSubsystem_IsVRScoutingUIOpen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VPScoutingSubsystem_eventIsVRScoutingUIOpen_Parms), &Z_Construct_UFunction_UVPScoutingSubsystem_IsVRScoutingUIOpen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPScoutingSubsystem_IsVRScoutingUIOpen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPScoutingSubsystem_IsVRScoutingUIOpen_Statics::NewProp_PanelID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPScoutingSubsystem_IsVRScoutingUIOpen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPScoutingSubsystem_IsVRScoutingUIOpen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "Comment", "/** Check whether a widget UI is open*/" },
		{ "ModuleRelativePath", "Public/VPScoutingSubsystem.h" },
		{ "ToolTip", "Check whether a widget UI is open" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPScoutingSubsystem_IsVRScoutingUIOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPScoutingSubsystem, nullptr, "IsVRScoutingUIOpen", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVPScoutingSubsystem_IsVRScoutingUIOpen_Statics::VPScoutingSubsystem_eventIsVRScoutingUIOpen_Parms), Z_Construct_UFunction_UVPScoutingSubsystem_IsVRScoutingUIOpen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_IsVRScoutingUIOpen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPScoutingSubsystem_IsVRScoutingUIOpen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_IsVRScoutingUIOpen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPScoutingSubsystem_IsVRScoutingUIOpen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPScoutingSubsystem_IsVRScoutingUIOpen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPScoutingSubsystem_SetFlightSpeed_Statics
	{
		struct VPScoutingSubsystem_eventSetFlightSpeed_Parms
		{
			float InFlightSpeed;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InFlightSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InFlightSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPScoutingSubsystem_SetFlightSpeed_Statics::NewProp_InFlightSpeed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVPScoutingSubsystem_SetFlightSpeed_Statics::NewProp_InFlightSpeed = { "InFlightSpeed", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPScoutingSubsystem_eventSetFlightSpeed_Parms, InFlightSpeed), METADATA_PARAMS(Z_Construct_UFunction_UVPScoutingSubsystem_SetFlightSpeed_Statics::NewProp_InFlightSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_SetFlightSpeed_Statics::NewProp_InFlightSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPScoutingSubsystem_SetFlightSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPScoutingSubsystem_SetFlightSpeed_Statics::NewProp_InFlightSpeed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPScoutingSubsystem_SetFlightSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "Comment", "/** Set flight speed for scouting in VR */" },
		{ "ModuleRelativePath", "Public/VPScoutingSubsystem.h" },
		{ "ToolTip", "Set flight speed for scouting in VR" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPScoutingSubsystem_SetFlightSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPScoutingSubsystem, nullptr, "SetFlightSpeed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVPScoutingSubsystem_SetFlightSpeed_Statics::VPScoutingSubsystem_eventSetFlightSpeed_Parms), Z_Construct_UFunction_UVPScoutingSubsystem_SetFlightSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_SetFlightSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPScoutingSubsystem_SetFlightSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_SetFlightSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPScoutingSubsystem_SetFlightSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPScoutingSubsystem_SetFlightSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPScoutingSubsystem_SetGripNavSpeed_Statics
	{
		struct VPScoutingSubsystem_eventSetGripNavSpeed_Parms
		{
			float InGripNavSpeed;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InGripNavSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InGripNavSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPScoutingSubsystem_SetGripNavSpeed_Statics::NewProp_InGripNavSpeed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVPScoutingSubsystem_SetGripNavSpeed_Statics::NewProp_InGripNavSpeed = { "InGripNavSpeed", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPScoutingSubsystem_eventSetGripNavSpeed_Parms, InGripNavSpeed), METADATA_PARAMS(Z_Construct_UFunction_UVPScoutingSubsystem_SetGripNavSpeed_Statics::NewProp_InGripNavSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_SetGripNavSpeed_Statics::NewProp_InGripNavSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPScoutingSubsystem_SetGripNavSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPScoutingSubsystem_SetGripNavSpeed_Statics::NewProp_InGripNavSpeed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPScoutingSubsystem_SetGripNavSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "Comment", "/** Set grip nav speed for scouting in VR */" },
		{ "ModuleRelativePath", "Public/VPScoutingSubsystem.h" },
		{ "ToolTip", "Set grip nav speed for scouting in VR" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPScoutingSubsystem_SetGripNavSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPScoutingSubsystem, nullptr, "SetGripNavSpeed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVPScoutingSubsystem_SetGripNavSpeed_Statics::VPScoutingSubsystem_eventSetGripNavSpeed_Parms), Z_Construct_UFunction_UVPScoutingSubsystem_SetGripNavSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_SetGripNavSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPScoutingSubsystem_SetGripNavSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_SetGripNavSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPScoutingSubsystem_SetGripNavSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPScoutingSubsystem_SetGripNavSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPScoutingSubsystem_SetInertiaDampingCVar_Statics
	{
		struct VPScoutingSubsystem_eventSetInertiaDampingCVar_Parms
		{
			float InInertiaDamping;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInertiaDamping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InInertiaDamping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPScoutingSubsystem_SetInertiaDampingCVar_Statics::NewProp_InInertiaDamping_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVPScoutingSubsystem_SetInertiaDampingCVar_Statics::NewProp_InInertiaDamping = { "InInertiaDamping", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPScoutingSubsystem_eventSetInertiaDampingCVar_Parms, InInertiaDamping), METADATA_PARAMS(Z_Construct_UFunction_UVPScoutingSubsystem_SetInertiaDampingCVar_Statics::NewProp_InInertiaDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_SetInertiaDampingCVar_Statics::NewProp_InInertiaDamping_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPScoutingSubsystem_SetInertiaDampingCVar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPScoutingSubsystem_SetInertiaDampingCVar_Statics::NewProp_InInertiaDamping,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPScoutingSubsystem_SetInertiaDampingCVar_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "Comment", "/** Set value of cvar \"VI.HighSpeedInertiaDamping\" */" },
		{ "ModuleRelativePath", "Public/VPScoutingSubsystem.h" },
		{ "ToolTip", "Set value of cvar \"VI.HighSpeedInertiaDamping\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPScoutingSubsystem_SetInertiaDampingCVar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPScoutingSubsystem, nullptr, "SetInertiaDampingCVar", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVPScoutingSubsystem_SetInertiaDampingCVar_Statics::VPScoutingSubsystem_eventSetInertiaDampingCVar_Parms), Z_Construct_UFunction_UVPScoutingSubsystem_SetInertiaDampingCVar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_SetInertiaDampingCVar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPScoutingSubsystem_SetInertiaDampingCVar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_SetInertiaDampingCVar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPScoutingSubsystem_SetInertiaDampingCVar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPScoutingSubsystem_SetInertiaDampingCVar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPScoutingSubsystem_SetIsHelperSystemEnabled_Statics
	{
		struct VPScoutingSubsystem_eventSetIsHelperSystemEnabled_Parms
		{
			bool bInIsHelperSystemEnabled;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInIsHelperSystemEnabled_MetaData[];
#endif
		static void NewProp_bInIsHelperSystemEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInIsHelperSystemEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPScoutingSubsystem_SetIsHelperSystemEnabled_Statics::NewProp_bInIsHelperSystemEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UVPScoutingSubsystem_SetIsHelperSystemEnabled_Statics::NewProp_bInIsHelperSystemEnabled_SetBit(void* Obj)
	{
		((VPScoutingSubsystem_eventSetIsHelperSystemEnabled_Parms*)Obj)->bInIsHelperSystemEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVPScoutingSubsystem_SetIsHelperSystemEnabled_Statics::NewProp_bInIsHelperSystemEnabled = { "bInIsHelperSystemEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VPScoutingSubsystem_eventSetIsHelperSystemEnabled_Parms), &Z_Construct_UFunction_UVPScoutingSubsystem_SetIsHelperSystemEnabled_Statics::NewProp_bInIsHelperSystemEnabled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UVPScoutingSubsystem_SetIsHelperSystemEnabled_Statics::NewProp_bInIsHelperSystemEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_SetIsHelperSystemEnabled_Statics::NewProp_bInIsHelperSystemEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPScoutingSubsystem_SetIsHelperSystemEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPScoutingSubsystem_SetIsHelperSystemEnabled_Statics::NewProp_bInIsHelperSystemEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPScoutingSubsystem_SetIsHelperSystemEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "Comment", "/** Set whether the helper system on the controllers is enabled   */" },
		{ "ModuleRelativePath", "Public/VPScoutingSubsystem.h" },
		{ "ToolTip", "Set whether the helper system on the controllers is enabled" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPScoutingSubsystem_SetIsHelperSystemEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPScoutingSubsystem, nullptr, "SetIsHelperSystemEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVPScoutingSubsystem_SetIsHelperSystemEnabled_Statics::VPScoutingSubsystem_eventSetIsHelperSystemEnabled_Parms), Z_Construct_UFunction_UVPScoutingSubsystem_SetIsHelperSystemEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_SetIsHelperSystemEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPScoutingSubsystem_SetIsHelperSystemEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_SetIsHelperSystemEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPScoutingSubsystem_SetIsHelperSystemEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPScoutingSubsystem_SetIsHelperSystemEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPScoutingSubsystem_SetIsUsingInertiaDamping_Statics
	{
		struct VPScoutingSubsystem_eventSetIsUsingInertiaDamping_Parms
		{
			bool bInIsUsingInertiaDamping;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInIsUsingInertiaDamping_MetaData[];
#endif
		static void NewProp_bInIsUsingInertiaDamping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInIsUsingInertiaDamping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPScoutingSubsystem_SetIsUsingInertiaDamping_Statics::NewProp_bInIsUsingInertiaDamping_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UVPScoutingSubsystem_SetIsUsingInertiaDamping_Statics::NewProp_bInIsUsingInertiaDamping_SetBit(void* Obj)
	{
		((VPScoutingSubsystem_eventSetIsUsingInertiaDamping_Parms*)Obj)->bInIsUsingInertiaDamping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVPScoutingSubsystem_SetIsUsingInertiaDamping_Statics::NewProp_bInIsUsingInertiaDamping = { "bInIsUsingInertiaDamping", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VPScoutingSubsystem_eventSetIsUsingInertiaDamping_Parms), &Z_Construct_UFunction_UVPScoutingSubsystem_SetIsUsingInertiaDamping_Statics::NewProp_bInIsUsingInertiaDamping_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UVPScoutingSubsystem_SetIsUsingInertiaDamping_Statics::NewProp_bInIsUsingInertiaDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_SetIsUsingInertiaDamping_Statics::NewProp_bInIsUsingInertiaDamping_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPScoutingSubsystem_SetIsUsingInertiaDamping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPScoutingSubsystem_SetIsUsingInertiaDamping_Statics::NewProp_bInIsUsingInertiaDamping,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPScoutingSubsystem_SetIsUsingInertiaDamping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "Comment", "/** Set whether grip nav inertia is enabled when scouting in VR */" },
		{ "ModuleRelativePath", "Public/VPScoutingSubsystem.h" },
		{ "ToolTip", "Set whether grip nav inertia is enabled when scouting in VR" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPScoutingSubsystem_SetIsUsingInertiaDamping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPScoutingSubsystem, nullptr, "SetIsUsingInertiaDamping", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVPScoutingSubsystem_SetIsUsingInertiaDamping_Statics::VPScoutingSubsystem_eventSetIsUsingInertiaDamping_Parms), Z_Construct_UFunction_UVPScoutingSubsystem_SetIsUsingInertiaDamping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_SetIsUsingInertiaDamping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPScoutingSubsystem_SetIsUsingInertiaDamping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_SetIsUsingInertiaDamping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPScoutingSubsystem_SetIsUsingInertiaDamping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPScoutingSubsystem_SetIsUsingInertiaDamping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPScoutingSubsystem_SetIsUsingMetricSystem_Statics
	{
		struct VPScoutingSubsystem_eventSetIsUsingMetricSystem_Parms
		{
			bool bInUseMetricSystem;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInUseMetricSystem_MetaData[];
#endif
		static void NewProp_bInUseMetricSystem_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInUseMetricSystem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPScoutingSubsystem_SetIsUsingMetricSystem_Statics::NewProp_bInUseMetricSystem_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UVPScoutingSubsystem_SetIsUsingMetricSystem_Statics::NewProp_bInUseMetricSystem_SetBit(void* Obj)
	{
		((VPScoutingSubsystem_eventSetIsUsingMetricSystem_Parms*)Obj)->bInUseMetricSystem = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVPScoutingSubsystem_SetIsUsingMetricSystem_Statics::NewProp_bInUseMetricSystem = { "bInUseMetricSystem", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VPScoutingSubsystem_eventSetIsUsingMetricSystem_Parms), &Z_Construct_UFunction_UVPScoutingSubsystem_SetIsUsingMetricSystem_Statics::NewProp_bInUseMetricSystem_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UVPScoutingSubsystem_SetIsUsingMetricSystem_Statics::NewProp_bInUseMetricSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_SetIsUsingMetricSystem_Statics::NewProp_bInUseMetricSystem_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPScoutingSubsystem_SetIsUsingMetricSystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPScoutingSubsystem_SetIsUsingMetricSystem_Statics::NewProp_bInUseMetricSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPScoutingSubsystem_SetIsUsingMetricSystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "Comment", "/** Set whether the VR user wants to use the metric system instead of imperial */" },
		{ "ModuleRelativePath", "Public/VPScoutingSubsystem.h" },
		{ "ToolTip", "Set whether the VR user wants to use the metric system instead of imperial" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPScoutingSubsystem_SetIsUsingMetricSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPScoutingSubsystem, nullptr, "SetIsUsingMetricSystem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVPScoutingSubsystem_SetIsUsingMetricSystem_Statics::VPScoutingSubsystem_eventSetIsUsingMetricSystem_Parms), Z_Construct_UFunction_UVPScoutingSubsystem_SetIsUsingMetricSystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_SetIsUsingMetricSystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPScoutingSubsystem_SetIsUsingMetricSystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_SetIsUsingMetricSystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPScoutingSubsystem_SetIsUsingMetricSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPScoutingSubsystem_SetIsUsingMetricSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPScoutingSubsystem_SetIsUsingTransformGizmo_Statics
	{
		struct VPScoutingSubsystem_eventSetIsUsingTransformGizmo_Parms
		{
			bool bInIsUsingTransformGizmo;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInIsUsingTransformGizmo_MetaData[];
#endif
		static void NewProp_bInIsUsingTransformGizmo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInIsUsingTransformGizmo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPScoutingSubsystem_SetIsUsingTransformGizmo_Statics::NewProp_bInIsUsingTransformGizmo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UVPScoutingSubsystem_SetIsUsingTransformGizmo_Statics::NewProp_bInIsUsingTransformGizmo_SetBit(void* Obj)
	{
		((VPScoutingSubsystem_eventSetIsUsingTransformGizmo_Parms*)Obj)->bInIsUsingTransformGizmo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVPScoutingSubsystem_SetIsUsingTransformGizmo_Statics::NewProp_bInIsUsingTransformGizmo = { "bInIsUsingTransformGizmo", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VPScoutingSubsystem_eventSetIsUsingTransformGizmo_Parms), &Z_Construct_UFunction_UVPScoutingSubsystem_SetIsUsingTransformGizmo_Statics::NewProp_bInIsUsingTransformGizmo_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UVPScoutingSubsystem_SetIsUsingTransformGizmo_Statics::NewProp_bInIsUsingTransformGizmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_SetIsUsingTransformGizmo_Statics::NewProp_bInIsUsingTransformGizmo_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPScoutingSubsystem_SetIsUsingTransformGizmo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPScoutingSubsystem_SetIsUsingTransformGizmo_Statics::NewProp_bInIsUsingTransformGizmo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPScoutingSubsystem_SetIsUsingTransformGizmo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "Comment", "/** Set whether the VR user wants to have the transform gizmo enabled */" },
		{ "ModuleRelativePath", "Public/VPScoutingSubsystem.h" },
		{ "ToolTip", "Set whether the VR user wants to have the transform gizmo enabled" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPScoutingSubsystem_SetIsUsingTransformGizmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPScoutingSubsystem, nullptr, "SetIsUsingTransformGizmo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVPScoutingSubsystem_SetIsUsingTransformGizmo_Statics::VPScoutingSubsystem_eventSetIsUsingTransformGizmo_Parms), Z_Construct_UFunction_UVPScoutingSubsystem_SetIsUsingTransformGizmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_SetIsUsingTransformGizmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPScoutingSubsystem_SetIsUsingTransformGizmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_SetIsUsingTransformGizmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPScoutingSubsystem_SetIsUsingTransformGizmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPScoutingSubsystem_SetIsUsingTransformGizmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPScoutingSubsystem_SetShowTransformGizmoCVar_Statics
	{
		struct VPScoutingSubsystem_eventSetShowTransformGizmoCVar_Parms
		{
			bool bInShowTransformGizmoCVar;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInShowTransformGizmoCVar_MetaData[];
#endif
		static void NewProp_bInShowTransformGizmoCVar_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInShowTransformGizmoCVar;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPScoutingSubsystem_SetShowTransformGizmoCVar_Statics::NewProp_bInShowTransformGizmoCVar_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UVPScoutingSubsystem_SetShowTransformGizmoCVar_Statics::NewProp_bInShowTransformGizmoCVar_SetBit(void* Obj)
	{
		((VPScoutingSubsystem_eventSetShowTransformGizmoCVar_Parms*)Obj)->bInShowTransformGizmoCVar = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVPScoutingSubsystem_SetShowTransformGizmoCVar_Statics::NewProp_bInShowTransformGizmoCVar = { "bInShowTransformGizmoCVar", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VPScoutingSubsystem_eventSetShowTransformGizmoCVar_Parms), &Z_Construct_UFunction_UVPScoutingSubsystem_SetShowTransformGizmoCVar_Statics::NewProp_bInShowTransformGizmoCVar_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UVPScoutingSubsystem_SetShowTransformGizmoCVar_Statics::NewProp_bInShowTransformGizmoCVar_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_SetShowTransformGizmoCVar_Statics::NewProp_bInShowTransformGizmoCVar_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPScoutingSubsystem_SetShowTransformGizmoCVar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPScoutingSubsystem_SetShowTransformGizmoCVar_Statics::NewProp_bInShowTransformGizmoCVar,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPScoutingSubsystem_SetShowTransformGizmoCVar_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "Comment", "/** Set value of cvar \"VI.ShowTransformGizmo\" */" },
		{ "ModuleRelativePath", "Public/VPScoutingSubsystem.h" },
		{ "ToolTip", "Set value of cvar \"VI.ShowTransformGizmo\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPScoutingSubsystem_SetShowTransformGizmoCVar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPScoutingSubsystem, nullptr, "SetShowTransformGizmoCVar", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVPScoutingSubsystem_SetShowTransformGizmoCVar_Statics::VPScoutingSubsystem_eventSetShowTransformGizmoCVar_Parms), Z_Construct_UFunction_UVPScoutingSubsystem_SetShowTransformGizmoCVar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_SetShowTransformGizmoCVar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPScoutingSubsystem_SetShowTransformGizmoCVar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_SetShowTransformGizmoCVar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPScoutingSubsystem_SetShowTransformGizmoCVar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPScoutingSubsystem_SetShowTransformGizmoCVar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPScoutingSubsystem_ToggleLocationGridSnapping_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPScoutingSubsystem_ToggleLocationGridSnapping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "Comment", "/** Toggle location grid snapping */" },
		{ "ModuleRelativePath", "Public/VPScoutingSubsystem.h" },
		{ "ToolTip", "Toggle location grid snapping" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPScoutingSubsystem_ToggleLocationGridSnapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPScoutingSubsystem, nullptr, "ToggleLocationGridSnapping", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPScoutingSubsystem_ToggleLocationGridSnapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_ToggleLocationGridSnapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPScoutingSubsystem_ToggleLocationGridSnapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPScoutingSubsystem_ToggleLocationGridSnapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPScoutingSubsystem_ToggleRotationGridSnapping_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPScoutingSubsystem_ToggleRotationGridSnapping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "Comment", "/** Toggle rotation grid snapping */" },
		{ "ModuleRelativePath", "Public/VPScoutingSubsystem.h" },
		{ "ToolTip", "Toggle rotation grid snapping" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPScoutingSubsystem_ToggleRotationGridSnapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPScoutingSubsystem, nullptr, "ToggleRotationGridSnapping", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPScoutingSubsystem_ToggleRotationGridSnapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_ToggleRotationGridSnapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPScoutingSubsystem_ToggleRotationGridSnapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPScoutingSubsystem_ToggleRotationGridSnapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPScoutingSubsystem_ToggleVRScoutingUI_Statics
	{
		struct VPScoutingSubsystem_eventToggleVRScoutingUI_Parms
		{
			FVREditorFloatingUICreationContext CreationContext;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_CreationContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVPScoutingSubsystem_ToggleVRScoutingUI_Statics::NewProp_CreationContext = { "CreationContext", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPScoutingSubsystem_eventToggleVRScoutingUI_Parms, CreationContext), Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext, METADATA_PARAMS(nullptr, 0) }; // 1963716951
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPScoutingSubsystem_ToggleVRScoutingUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPScoutingSubsystem_ToggleVRScoutingUI_Statics::NewProp_CreationContext,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPScoutingSubsystem_ToggleVRScoutingUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "Comment", "/** Open a widget UI in front of the user. Opens default VProd UI (defined via the 'Virtual Scouting User Interface' setting) if null. */" },
		{ "ModuleRelativePath", "Public/VPScoutingSubsystem.h" },
		{ "ToolTip", "Open a widget UI in front of the user. Opens default VProd UI (defined via the 'Virtual Scouting User Interface' setting) if null." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPScoutingSubsystem_ToggleVRScoutingUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPScoutingSubsystem, nullptr, "ToggleVRScoutingUI", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVPScoutingSubsystem_ToggleVRScoutingUI_Statics::VPScoutingSubsystem_eventToggleVRScoutingUI_Parms), Z_Construct_UFunction_UVPScoutingSubsystem_ToggleVRScoutingUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_ToggleVRScoutingUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPScoutingSubsystem_ToggleVRScoutingUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPScoutingSubsystem_ToggleVRScoutingUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPScoutingSubsystem_ToggleVRScoutingUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPScoutingSubsystem_ToggleVRScoutingUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVPScoutingSubsystem);
	UClass* Z_Construct_UClass_UVPScoutingSubsystem_NoRegister()
	{
		return UVPScoutingSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UVPScoutingSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VPSubsystemHelpers_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VPSubsystemHelpers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GestureManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GestureManager;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsSettingsMenuOpen_MetaData[];
#endif
		static void NewProp_IsSettingsMenuOpen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSettingsMenuOpen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GripNavSpeedCoeff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GripNavSpeedCoeff;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVPScoutingSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_VPUtilitiesEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVPScoutingSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVPScoutingSubsystem_EnterVRMode, "EnterVRMode" }, // 2447203801
		{ &Z_Construct_UFunction_UVPScoutingSubsystem_ExitVRMode, "ExitVRMode" }, // 49617768
		{ &Z_Construct_UFunction_UVPScoutingSubsystem_GetActiveEditorVRControllers, "GetActiveEditorVRControllers" }, // 111477373
		{ &Z_Construct_UFunction_UVPScoutingSubsystem_GetDirectorName, "GetDirectorName" }, // 1536030125
		{ &Z_Construct_UFunction_UVPScoutingSubsystem_GetFlightSpeed, "GetFlightSpeed" }, // 1957562848
		{ &Z_Construct_UFunction_UVPScoutingSubsystem_GetGripNavSpeed, "GetGripNavSpeed" }, // 2450407182
		{ &Z_Construct_UFunction_UVPScoutingSubsystem_GetPanelActor, "GetPanelActor" }, // 1365988006
		{ &Z_Construct_UFunction_UVPScoutingSubsystem_GetPanelWidget, "GetPanelWidget" }, // 2510187831
		{ &Z_Construct_UFunction_UVPScoutingSubsystem_GetShowName, "GetShowName" }, // 247887614
		{ &Z_Construct_UFunction_UVPScoutingSubsystem_GetVProdPanelID, "GetVProdPanelID" }, // 3922560766
		{ &Z_Construct_UFunction_UVPScoutingSubsystem_GetVREditorMode, "GetVREditorMode" }, // 996430882
		{ &Z_Construct_UFunction_UVPScoutingSubsystem_HideInfoDisplayPanel, "HideInfoDisplayPanel" }, // 4125763997
		{ &Z_Construct_UFunction_UVPScoutingSubsystem_IsHelperSystemEnabled, "IsHelperSystemEnabled" }, // 1343050732
		{ &Z_Construct_UFunction_UVPScoutingSubsystem_IsLocationGridSnappingEnabled, "IsLocationGridSnappingEnabled" }, // 725882581
		{ &Z_Construct_UFunction_UVPScoutingSubsystem_IsRotationGridSnappingEnabled, "IsRotationGridSnappingEnabled" }, // 3164432739
		{ &Z_Construct_UFunction_UVPScoutingSubsystem_IsUsingInertiaDamping, "IsUsingInertiaDamping" }, // 1042215362
		{ &Z_Construct_UFunction_UVPScoutingSubsystem_IsUsingMetricSystem, "IsUsingMetricSystem" }, // 2851592140
		{ &Z_Construct_UFunction_UVPScoutingSubsystem_IsUsingTransformGizmo, "IsUsingTransformGizmo" }, // 194481406
		{ &Z_Construct_UFunction_UVPScoutingSubsystem_IsVRScoutingUIOpen, "IsVRScoutingUIOpen" }, // 3534818884
		{ &Z_Construct_UFunction_UVPScoutingSubsystem_SetFlightSpeed, "SetFlightSpeed" }, // 612319427
		{ &Z_Construct_UFunction_UVPScoutingSubsystem_SetGripNavSpeed, "SetGripNavSpeed" }, // 2822238834
		{ &Z_Construct_UFunction_UVPScoutingSubsystem_SetInertiaDampingCVar, "SetInertiaDampingCVar" }, // 1288004297
		{ &Z_Construct_UFunction_UVPScoutingSubsystem_SetIsHelperSystemEnabled, "SetIsHelperSystemEnabled" }, // 1959836182
		{ &Z_Construct_UFunction_UVPScoutingSubsystem_SetIsUsingInertiaDamping, "SetIsUsingInertiaDamping" }, // 2791687295
		{ &Z_Construct_UFunction_UVPScoutingSubsystem_SetIsUsingMetricSystem, "SetIsUsingMetricSystem" }, // 3239557917
		{ &Z_Construct_UFunction_UVPScoutingSubsystem_SetIsUsingTransformGizmo, "SetIsUsingTransformGizmo" }, // 4020835458
		{ &Z_Construct_UFunction_UVPScoutingSubsystem_SetShowTransformGizmoCVar, "SetShowTransformGizmoCVar" }, // 1286424623
		{ &Z_Construct_UFunction_UVPScoutingSubsystem_ToggleLocationGridSnapping, "ToggleLocationGridSnapping" }, // 2098458717
		{ &Z_Construct_UFunction_UVPScoutingSubsystem_ToggleRotationGridSnapping, "ToggleRotationGridSnapping" }, // 2966432395
		{ &Z_Construct_UFunction_UVPScoutingSubsystem_ToggleVRScoutingUI, "ToggleVRScoutingUI" }, // 2233185346
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPScoutingSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * Subsystem used for VR Scouting\n */" },
		{ "IncludePath", "VPScoutingSubsystem.h" },
		{ "ModuleRelativePath", "Public/VPScoutingSubsystem.h" },
		{ "ToolTip", "* Subsystem used for VR Scouting" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPScoutingSubsystem_Statics::NewProp_VPSubsystemHelpers_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "Comment", "/** Subsystems can't have any Blueprint implementations, so we attach this class for any BP logic that we to provide. */" },
		{ "ModuleRelativePath", "Public/VPScoutingSubsystem.h" },
		{ "ToolTip", "Subsystems can't have any Blueprint implementations, so we attach this class for any BP logic that we to provide." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVPScoutingSubsystem_Statics::NewProp_VPSubsystemHelpers = { "VPSubsystemHelpers", nullptr, (EPropertyFlags)0x0014000000002014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVPScoutingSubsystem, VPSubsystemHelpers), Z_Construct_UClass_UVPScoutingSubsystemHelpersBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVPScoutingSubsystem_Statics::NewProp_VPSubsystemHelpers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPScoutingSubsystem_Statics::NewProp_VPSubsystemHelpers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPScoutingSubsystem_Statics::NewProp_GestureManager_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "Comment", "/** GestureManager that manage some user input in VR editor. */" },
		{ "ModuleRelativePath", "Public/VPScoutingSubsystem.h" },
		{ "ToolTip", "GestureManager that manage some user input in VR editor." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVPScoutingSubsystem_Statics::NewProp_GestureManager = { "GestureManager", nullptr, (EPropertyFlags)0x0014000000002014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVPScoutingSubsystem, GestureManager), Z_Construct_UClass_UVPScoutingSubsystemGestureManagerBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVPScoutingSubsystem_Statics::NewProp_GestureManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPScoutingSubsystem_Statics::NewProp_GestureManager_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPScoutingSubsystem_Statics::NewProp_IsSettingsMenuOpen_MetaData[] = {
		{ "Category", "Main Menu" },
		{ "Comment", "/** bool to keep track of whether the settings menu panel in the main menu is open*/" },
		{ "ModuleRelativePath", "Public/VPScoutingSubsystem.h" },
		{ "ToolTip", "bool to keep track of whether the settings menu panel in the main menu is open" },
	};
#endif
	void Z_Construct_UClass_UVPScoutingSubsystem_Statics::NewProp_IsSettingsMenuOpen_SetBit(void* Obj)
	{
		((UVPScoutingSubsystem*)Obj)->IsSettingsMenuOpen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVPScoutingSubsystem_Statics::NewProp_IsSettingsMenuOpen = { "IsSettingsMenuOpen", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVPScoutingSubsystem), &Z_Construct_UClass_UVPScoutingSubsystem_Statics::NewProp_IsSettingsMenuOpen_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVPScoutingSubsystem_Statics::NewProp_IsSettingsMenuOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPScoutingSubsystem_Statics::NewProp_IsSettingsMenuOpen_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPScoutingSubsystem_Statics::NewProp_GripNavSpeedCoeff_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "Comment", "/** This is a multiplier for grip nav speed so we can keep the grip nav value in the range 0-1 and increase this variable if we need a bigger range */" },
		{ "ModuleRelativePath", "Public/VPScoutingSubsystem.h" },
		{ "ToolTip", "This is a multiplier for grip nav speed so we can keep the grip nav value in the range 0-1 and increase this variable if we need a bigger range" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVPScoutingSubsystem_Statics::NewProp_GripNavSpeedCoeff = { "GripNavSpeedCoeff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVPScoutingSubsystem, GripNavSpeedCoeff), METADATA_PARAMS(Z_Construct_UClass_UVPScoutingSubsystem_Statics::NewProp_GripNavSpeedCoeff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPScoutingSubsystem_Statics::NewProp_GripNavSpeedCoeff_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVPScoutingSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPScoutingSubsystem_Statics::NewProp_VPSubsystemHelpers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPScoutingSubsystem_Statics::NewProp_GestureManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPScoutingSubsystem_Statics::NewProp_IsSettingsMenuOpen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPScoutingSubsystem_Statics::NewProp_GripNavSpeedCoeff,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVPScoutingSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVPScoutingSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVPScoutingSubsystem_Statics::ClassParams = {
		&UVPScoutingSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVPScoutingSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVPScoutingSubsystem_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVPScoutingSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVPScoutingSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVPScoutingSubsystem()
	{
		if (!Z_Registration_Info_UClass_UVPScoutingSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVPScoutingSubsystem.OuterSingleton, Z_Construct_UClass_UVPScoutingSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVPScoutingSubsystem.OuterSingleton;
	}
	template<> VPUTILITIESEDITOR_API UClass* StaticClass<UVPScoutingSubsystem>()
	{
		return UVPScoutingSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVPScoutingSubsystem);
	UVPScoutingSubsystem::~UVPScoutingSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPScoutingSubsystem_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPScoutingSubsystem_h_Statics::EnumInfo[] = {
		{ EVProdPanelIDs_StaticEnum, TEXT("EVProdPanelIDs"), &Z_Registration_Info_UEnum_EVProdPanelIDs, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2314291343U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPScoutingSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVPScoutingSubsystemHelpersBase, UVPScoutingSubsystemHelpersBase::StaticClass, TEXT("UVPScoutingSubsystemHelpersBase"), &Z_Registration_Info_UClass_UVPScoutingSubsystemHelpersBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVPScoutingSubsystemHelpersBase), 1711538197U) },
		{ Z_Construct_UClass_UVPScoutingSubsystemGestureManagerBase, UVPScoutingSubsystemGestureManagerBase::StaticClass, TEXT("UVPScoutingSubsystemGestureManagerBase"), &Z_Registration_Info_UClass_UVPScoutingSubsystemGestureManagerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVPScoutingSubsystemGestureManagerBase), 4113644054U) },
		{ Z_Construct_UClass_UVPScoutingSubsystem, UVPScoutingSubsystem::StaticClass, TEXT("UVPScoutingSubsystem"), &Z_Registration_Info_UClass_UVPScoutingSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVPScoutingSubsystem), 2766672427U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPScoutingSubsystem_h_1793984541(TEXT("/Script/VPUtilitiesEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPScoutingSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPScoutingSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPScoutingSubsystem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPScoutingSubsystem_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
