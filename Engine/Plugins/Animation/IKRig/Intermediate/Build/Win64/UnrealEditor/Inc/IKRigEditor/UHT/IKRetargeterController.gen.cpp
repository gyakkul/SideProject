// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RetargetEditor/IKRetargeterController.h"
#include "Retargeter/IKRetargeter.h"
#include "Retargeter/IKRetargetSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIKRetargeterController() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	IKRIG_API UClass* Z_Construct_UClass_UIKRetargeter_NoRegister();
	IKRIG_API UClass* Z_Construct_UClass_UIKRigDefinition_NoRegister();
	IKRIG_API UClass* Z_Construct_UClass_URetargetChainSettings_NoRegister();
	IKRIG_API UEnum* Z_Construct_UEnum_IKRig_ERetargetSourceOrTarget();
	IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FIKRetargetPose();
	IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRetargetGlobalSettings();
	IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FTargetChainSettings();
	IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FTargetRootSettings();
	IKRIGEDITOR_API UClass* Z_Construct_UClass_UIKRetargeterController();
	IKRIGEDITOR_API UClass* Z_Construct_UClass_UIKRetargeterController_NoRegister();
	IKRIGEDITOR_API UEnum* Z_Construct_UEnum_IKRigEditor_EAutoMapChainType();
	UPackage* Z_Construct_UPackage__Script_IKRigEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAutoMapChainType;
	static UEnum* EAutoMapChainType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAutoMapChainType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAutoMapChainType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_IKRigEditor_EAutoMapChainType, (UObject*)Z_Construct_UPackage__Script_IKRigEditor(), TEXT("EAutoMapChainType"));
		}
		return Z_Registration_Info_UEnum_EAutoMapChainType.OuterSingleton;
	}
	template<> IKRIGEDITOR_API UEnum* StaticEnum<EAutoMapChainType>()
	{
		return EAutoMapChainType_StaticEnum();
	}
	struct Z_Construct_UEnum_IKRigEditor_EAutoMapChainType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_IKRigEditor_EAutoMapChainType_Statics::Enumerators[] = {
		{ "EAutoMapChainType::Exact", (int64)EAutoMapChainType::Exact },
		{ "EAutoMapChainType::Fuzzy", (int64)EAutoMapChainType::Fuzzy },
		{ "EAutoMapChainType::Clear", (int64)EAutoMapChainType::Clear },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_IKRigEditor_EAutoMapChainType_Statics::Enum_MetaDataParams[] = {
		{ "Clear.Comment", "// map chains to the chain with the closest name (levenshtein distance)\n" },
		{ "Clear.Name", "EAutoMapChainType::Clear" },
		{ "Clear.ToolTip", "map chains to the chain with the closest name (levenshtein distance)" },
		{ "Exact.Name", "EAutoMapChainType::Exact" },
		{ "Fuzzy.Comment", "// map chains that have exactly the same name (case insensitive)\n" },
		{ "Fuzzy.Name", "EAutoMapChainType::Fuzzy" },
		{ "Fuzzy.ToolTip", "map chains that have exactly the same name (case insensitive)" },
		{ "ModuleRelativePath", "Public/RetargetEditor/IKRetargeterController.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_IKRigEditor_EAutoMapChainType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_IKRigEditor,
		nullptr,
		"EAutoMapChainType",
		"EAutoMapChainType",
		Z_Construct_UEnum_IKRigEditor_EAutoMapChainType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_IKRigEditor_EAutoMapChainType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_IKRigEditor_EAutoMapChainType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_IKRigEditor_EAutoMapChainType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_IKRigEditor_EAutoMapChainType()
	{
		if (!Z_Registration_Info_UEnum_EAutoMapChainType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAutoMapChainType.InnerSingleton, Z_Construct_UEnum_IKRigEditor_EAutoMapChainType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAutoMapChainType.InnerSingleton;
	}
	DEFINE_FUNCTION(UIKRetargeterController::execGetRootOffsetInRetargetPose)
	{
		P_GET_ENUM(ERetargetSourceOrTarget,Z_Param_SourceOrTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetRootOffsetInRetargetPose(ERetargetSourceOrTarget(Z_Param_SourceOrTarget));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRetargeterController::execSetRootOffsetInRetargetPose)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TranslationOffset);
		P_GET_ENUM(ERetargetSourceOrTarget,Z_Param_SourceOrTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRootOffsetInRetargetPose(Z_Param_Out_TranslationOffset,ERetargetSourceOrTarget(Z_Param_SourceOrTarget));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRetargeterController::execGetRotationOffsetForRetargetPoseBone)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_BoneName);
		P_GET_ENUM(ERetargetSourceOrTarget,Z_Param_SourceOrTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=P_THIS->GetRotationOffsetForRetargetPoseBone(Z_Param_Out_BoneName,ERetargetSourceOrTarget(Z_Param_SourceOrTarget));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRetargeterController::execSetRotationOffsetForRetargetPoseBone)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_BoneName);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_RotationOffset);
		P_GET_ENUM(ERetargetSourceOrTarget,Z_Param_SkeletonMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRotationOffsetForRetargetPoseBone(Z_Param_Out_BoneName,Z_Param_Out_RotationOffset,ERetargetSourceOrTarget(Z_Param_SkeletonMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRetargeterController::execResetRetargetPose)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_PoseToReset);
		P_GET_TARRAY_REF(FName,Z_Param_Out_BonesToReset);
		P_GET_ENUM(ERetargetSourceOrTarget,Z_Param_SourceOrTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetRetargetPose(Z_Param_Out_PoseToReset,Z_Param_Out_BonesToReset,ERetargetSourceOrTarget(Z_Param_SourceOrTarget));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRetargeterController::execGetCurrentRetargetPose)
	{
		P_GET_ENUM(ERetargetSourceOrTarget,Z_Param_SourceOrTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIKRetargetPose*)Z_Param__Result=P_THIS->GetCurrentRetargetPose(ERetargetSourceOrTarget(Z_Param_SourceOrTarget));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRetargeterController::execGetRetargetPoses)
	{
		P_GET_ENUM(ERetargetSourceOrTarget,Z_Param_SourceOrTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FName,FIKRetargetPose>*)Z_Param__Result=P_THIS->GetRetargetPoses(ERetargetSourceOrTarget(Z_Param_SourceOrTarget));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRetargeterController::execGetCurrentRetargetPoseName)
	{
		P_GET_ENUM(ERetargetSourceOrTarget,Z_Param_SourceOrTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetCurrentRetargetPoseName(ERetargetSourceOrTarget(Z_Param_SourceOrTarget));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRetargeterController::execSetCurrentRetargetPose)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_CurrentPose);
		P_GET_ENUM(ERetargetSourceOrTarget,Z_Param_SourceOrTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCurrentRetargetPose(Z_Param_CurrentPose,ERetargetSourceOrTarget(Z_Param_SourceOrTarget));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRetargeterController::execRenameRetargetPose)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_OldPoseName);
		P_GET_PROPERTY(FNameProperty,Z_Param_NewPoseName);
		P_GET_ENUM(ERetargetSourceOrTarget,Z_Param_SourceOrTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RenameRetargetPose(Z_Param_OldPoseName,Z_Param_NewPoseName,ERetargetSourceOrTarget(Z_Param_SourceOrTarget));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRetargeterController::execDuplicateRetargetPose)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_PoseToDuplicate);
		P_GET_PROPERTY(FNameProperty,Z_Param_NewName);
		P_GET_ENUM(ERetargetSourceOrTarget,Z_Param_SourceOrTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->DuplicateRetargetPose(Z_Param_PoseToDuplicate,Z_Param_NewName,ERetargetSourceOrTarget(Z_Param_SourceOrTarget));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRetargeterController::execRemoveRetargetPose)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_PoseToRemove);
		P_GET_ENUM(ERetargetSourceOrTarget,Z_Param_SourceOrTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveRetargetPose(Z_Param_Out_PoseToRemove,ERetargetSourceOrTarget(Z_Param_SourceOrTarget));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRetargeterController::execCreateRetargetPose)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_NewPoseName);
		P_GET_ENUM(ERetargetSourceOrTarget,Z_Param_SourceOrTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->CreateRetargetPose(Z_Param_Out_NewPoseName,ERetargetSourceOrTarget(Z_Param_SourceOrTarget));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRetargeterController::execGetAllChainSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<URetargetChainSettings*>*)Z_Param__Result=P_THIS->GetAllChainSettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRetargeterController::execGetSourceChain)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_TargetChainName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetSourceChain(Z_Param_Out_TargetChainName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRetargeterController::execSetSourceChain)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SourceChainName);
		P_GET_PROPERTY(FNameProperty,Z_Param_TargetChainName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetSourceChain(Z_Param_SourceChainName,Z_Param_TargetChainName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRetargeterController::execAutoMapChains)
	{
		P_GET_ENUM(EAutoMapChainType,Z_Param_AutoMapType);
		P_GET_UBOOL(Z_Param_bForceRemap);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AutoMapChains(EAutoMapChainType(Z_Param_AutoMapType),Z_Param_bForceRemap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRetargeterController::execSetRetargetChainSettings)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_TargetChainName);
		P_GET_STRUCT_REF(FTargetChainSettings,Z_Param_Out_Settings);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetRetargetChainSettings(Z_Param_Out_TargetChainName,Z_Param_Out_Settings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRetargeterController::execGetRetargetChainSettings)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_TargetChainName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTargetChainSettings*)Z_Param__Result=P_THIS->GetRetargetChainSettings(Z_Param_Out_TargetChainName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRetargeterController::execSetGlobalSettings)
	{
		P_GET_STRUCT_REF(FRetargetGlobalSettings,Z_Param_Out_GlobalSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGlobalSettings(Z_Param_Out_GlobalSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRetargeterController::execGetGlobalSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRetargetGlobalSettings*)Z_Param__Result=P_THIS->GetGlobalSettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRetargeterController::execSetRootSettings)
	{
		P_GET_STRUCT_REF(FTargetRootSettings,Z_Param_Out_RootSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRootSettings(Z_Param_Out_RootSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRetargeterController::execGetRootSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTargetRootSettings*)Z_Param__Result=P_THIS->GetRootSettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRetargeterController::execGetPreviewMesh)
	{
		P_GET_ENUM(ERetargetSourceOrTarget,Z_Param_SourceOrTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMesh**)Z_Param__Result=P_THIS->GetPreviewMesh(ERetargetSourceOrTarget(Z_Param_SourceOrTarget));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRetargeterController::execSetPreviewMesh)
	{
		P_GET_ENUM(ERetargetSourceOrTarget,Z_Param_SourceOrTarget);
		P_GET_OBJECT(USkeletalMesh,Z_Param_InPreviewMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPreviewMesh(ERetargetSourceOrTarget(Z_Param_SourceOrTarget),Z_Param_InPreviewMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRetargeterController::execGetIKRig)
	{
		P_GET_ENUM(ERetargetSourceOrTarget,Z_Param_SourceOrTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const UIKRigDefinition**)Z_Param__Result=P_THIS->GetIKRig(ERetargetSourceOrTarget(Z_Param_SourceOrTarget));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRetargeterController::execSetIKRig)
	{
		P_GET_ENUM(ERetargetSourceOrTarget,Z_Param_SourceOrTarget);
		P_GET_OBJECT(UIKRigDefinition,Z_Param_IKRig);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIKRig(ERetargetSourceOrTarget(Z_Param_SourceOrTarget),Z_Param_IKRig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRetargeterController::execGetController)
	{
		P_GET_OBJECT(UIKRetargeter,Z_Param_InRetargeterAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UIKRetargeterController**)Z_Param__Result=UIKRetargeterController::GetController(Z_Param_InRetargeterAsset);
		P_NATIVE_END;
	}
	void UIKRetargeterController::StaticRegisterNativesUIKRetargeterController()
	{
		UClass* Class = UIKRetargeterController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AutoMapChains", &UIKRetargeterController::execAutoMapChains },
			{ "CreateRetargetPose", &UIKRetargeterController::execCreateRetargetPose },
			{ "DuplicateRetargetPose", &UIKRetargeterController::execDuplicateRetargetPose },
			{ "GetAllChainSettings", &UIKRetargeterController::execGetAllChainSettings },
			{ "GetController", &UIKRetargeterController::execGetController },
			{ "GetCurrentRetargetPose", &UIKRetargeterController::execGetCurrentRetargetPose },
			{ "GetCurrentRetargetPoseName", &UIKRetargeterController::execGetCurrentRetargetPoseName },
			{ "GetGlobalSettings", &UIKRetargeterController::execGetGlobalSettings },
			{ "GetIKRig", &UIKRetargeterController::execGetIKRig },
			{ "GetPreviewMesh", &UIKRetargeterController::execGetPreviewMesh },
			{ "GetRetargetChainSettings", &UIKRetargeterController::execGetRetargetChainSettings },
			{ "GetRetargetPoses", &UIKRetargeterController::execGetRetargetPoses },
			{ "GetRootOffsetInRetargetPose", &UIKRetargeterController::execGetRootOffsetInRetargetPose },
			{ "GetRootSettings", &UIKRetargeterController::execGetRootSettings },
			{ "GetRotationOffsetForRetargetPoseBone", &UIKRetargeterController::execGetRotationOffsetForRetargetPoseBone },
			{ "GetSourceChain", &UIKRetargeterController::execGetSourceChain },
			{ "RemoveRetargetPose", &UIKRetargeterController::execRemoveRetargetPose },
			{ "RenameRetargetPose", &UIKRetargeterController::execRenameRetargetPose },
			{ "ResetRetargetPose", &UIKRetargeterController::execResetRetargetPose },
			{ "SetCurrentRetargetPose", &UIKRetargeterController::execSetCurrentRetargetPose },
			{ "SetGlobalSettings", &UIKRetargeterController::execSetGlobalSettings },
			{ "SetIKRig", &UIKRetargeterController::execSetIKRig },
			{ "SetPreviewMesh", &UIKRetargeterController::execSetPreviewMesh },
			{ "SetRetargetChainSettings", &UIKRetargeterController::execSetRetargetChainSettings },
			{ "SetRootOffsetInRetargetPose", &UIKRetargeterController::execSetRootOffsetInRetargetPose },
			{ "SetRootSettings", &UIKRetargeterController::execSetRootSettings },
			{ "SetRotationOffsetForRetargetPoseBone", &UIKRetargeterController::execSetRotationOffsetForRetargetPoseBone },
			{ "SetSourceChain", &UIKRetargeterController::execSetSourceChain },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIKRetargeterController_AutoMapChains_Statics
	{
		struct IKRetargeterController_eventAutoMapChains_Parms
		{
			EAutoMapChainType AutoMapType;
			bool bForceRemap;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_AutoMapType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoMapType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AutoMapType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceRemap_MetaData[];
#endif
		static void NewProp_bForceRemap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceRemap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIKRetargeterController_AutoMapChains_Statics::NewProp_AutoMapType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_AutoMapChains_Statics::NewProp_AutoMapType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIKRetargeterController_AutoMapChains_Statics::NewProp_AutoMapType = { "AutoMapType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeterController_eventAutoMapChains_Parms, AutoMapType), Z_Construct_UEnum_IKRigEditor_EAutoMapChainType, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_AutoMapChains_Statics::NewProp_AutoMapType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_AutoMapChains_Statics::NewProp_AutoMapType_MetaData)) }; // 2484919149
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_AutoMapChains_Statics::NewProp_bForceRemap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UIKRetargeterController_AutoMapChains_Statics::NewProp_bForceRemap_SetBit(void* Obj)
	{
		((IKRetargeterController_eventAutoMapChains_Parms*)Obj)->bForceRemap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIKRetargeterController_AutoMapChains_Statics::NewProp_bForceRemap = { "bForceRemap", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(IKRetargeterController_eventAutoMapChains_Parms), &Z_Construct_UFunction_UIKRetargeterController_AutoMapChains_Statics::NewProp_bForceRemap_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_AutoMapChains_Statics::NewProp_bForceRemap_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_AutoMapChains_Statics::NewProp_bForceRemap_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRetargeterController_AutoMapChains_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_AutoMapChains_Statics::NewProp_AutoMapType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_AutoMapChains_Statics::NewProp_AutoMapType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_AutoMapChains_Statics::NewProp_bForceRemap,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_AutoMapChains_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRetargeter" },
		{ "Comment", "// Use fuzzy string search to find \"best\" Source chain to map to each Target chain\n" },
		{ "ModuleRelativePath", "Public/RetargetEditor/IKRetargeterController.h" },
		{ "ToolTip", "Use fuzzy string search to find \"best\" Source chain to map to each Target chain" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRetargeterController_AutoMapChains_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRetargeterController, nullptr, "AutoMapChains", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRetargeterController_AutoMapChains_Statics::IKRetargeterController_eventAutoMapChains_Parms), Z_Construct_UFunction_UIKRetargeterController_AutoMapChains_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_AutoMapChains_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_AutoMapChains_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_AutoMapChains_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRetargeterController_AutoMapChains()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRetargeterController_AutoMapChains_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRetargeterController_CreateRetargetPose_Statics
	{
		struct IKRetargeterController_eventCreateRetargetPose_Parms
		{
			FName NewPoseName;
			ERetargetSourceOrTarget SourceOrTarget;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewPoseName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewPoseName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SourceOrTarget_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceOrTarget_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceOrTarget;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_CreateRetargetPose_Statics::NewProp_NewPoseName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRetargeterController_CreateRetargetPose_Statics::NewProp_NewPoseName = { "NewPoseName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeterController_eventCreateRetargetPose_Parms, NewPoseName), METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_CreateRetargetPose_Statics::NewProp_NewPoseName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_CreateRetargetPose_Statics::NewProp_NewPoseName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIKRetargeterController_CreateRetargetPose_Statics::NewProp_SourceOrTarget_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_CreateRetargetPose_Statics::NewProp_SourceOrTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIKRetargeterController_CreateRetargetPose_Statics::NewProp_SourceOrTarget = { "SourceOrTarget", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeterController_eventCreateRetargetPose_Parms, SourceOrTarget), Z_Construct_UEnum_IKRig_ERetargetSourceOrTarget, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_CreateRetargetPose_Statics::NewProp_SourceOrTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_CreateRetargetPose_Statics::NewProp_SourceOrTarget_MetaData)) }; // 3404744579
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRetargeterController_CreateRetargetPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeterController_eventCreateRetargetPose_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRetargeterController_CreateRetargetPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_CreateRetargetPose_Statics::NewProp_NewPoseName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_CreateRetargetPose_Statics::NewProp_SourceOrTarget_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_CreateRetargetPose_Statics::NewProp_SourceOrTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_CreateRetargetPose_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_CreateRetargetPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRetargeter" },
		{ "Comment", "// Add new retarget pose. Returns the name of the new retarget pose.\n" },
		{ "ModuleRelativePath", "Public/RetargetEditor/IKRetargeterController.h" },
		{ "ToolTip", "Add new retarget pose. Returns the name of the new retarget pose." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRetargeterController_CreateRetargetPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRetargeterController, nullptr, "CreateRetargetPose", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRetargeterController_CreateRetargetPose_Statics::IKRetargeterController_eventCreateRetargetPose_Parms), Z_Construct_UFunction_UIKRetargeterController_CreateRetargetPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_CreateRetargetPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_CreateRetargetPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_CreateRetargetPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRetargeterController_CreateRetargetPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRetargeterController_CreateRetargetPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRetargeterController_DuplicateRetargetPose_Statics
	{
		struct IKRetargeterController_eventDuplicateRetargetPose_Parms
		{
			FName PoseToDuplicate;
			FName NewName;
			ERetargetSourceOrTarget SourceOrTarget;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoseToDuplicate_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PoseToDuplicate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SourceOrTarget_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceOrTarget_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceOrTarget;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_DuplicateRetargetPose_Statics::NewProp_PoseToDuplicate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRetargeterController_DuplicateRetargetPose_Statics::NewProp_PoseToDuplicate = { "PoseToDuplicate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeterController_eventDuplicateRetargetPose_Parms, PoseToDuplicate), METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_DuplicateRetargetPose_Statics::NewProp_PoseToDuplicate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_DuplicateRetargetPose_Statics::NewProp_PoseToDuplicate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_DuplicateRetargetPose_Statics::NewProp_NewName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRetargeterController_DuplicateRetargetPose_Statics::NewProp_NewName = { "NewName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeterController_eventDuplicateRetargetPose_Parms, NewName), METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_DuplicateRetargetPose_Statics::NewProp_NewName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_DuplicateRetargetPose_Statics::NewProp_NewName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIKRetargeterController_DuplicateRetargetPose_Statics::NewProp_SourceOrTarget_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_DuplicateRetargetPose_Statics::NewProp_SourceOrTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIKRetargeterController_DuplicateRetargetPose_Statics::NewProp_SourceOrTarget = { "SourceOrTarget", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeterController_eventDuplicateRetargetPose_Parms, SourceOrTarget), Z_Construct_UEnum_IKRig_ERetargetSourceOrTarget, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_DuplicateRetargetPose_Statics::NewProp_SourceOrTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_DuplicateRetargetPose_Statics::NewProp_SourceOrTarget_MetaData)) }; // 3404744579
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRetargeterController_DuplicateRetargetPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeterController_eventDuplicateRetargetPose_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRetargeterController_DuplicateRetargetPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_DuplicateRetargetPose_Statics::NewProp_PoseToDuplicate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_DuplicateRetargetPose_Statics::NewProp_NewName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_DuplicateRetargetPose_Statics::NewProp_SourceOrTarget_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_DuplicateRetargetPose_Statics::NewProp_SourceOrTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_DuplicateRetargetPose_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_DuplicateRetargetPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRetargeter" },
		{ "Comment", "// Duplicate a retarget pose. Returns the name of the new, duplicate pose (or NAME_None if PoseToDuplicate is not found).\n" },
		{ "ModuleRelativePath", "Public/RetargetEditor/IKRetargeterController.h" },
		{ "ToolTip", "Duplicate a retarget pose. Returns the name of the new, duplicate pose (or NAME_None if PoseToDuplicate is not found)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRetargeterController_DuplicateRetargetPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRetargeterController, nullptr, "DuplicateRetargetPose", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRetargeterController_DuplicateRetargetPose_Statics::IKRetargeterController_eventDuplicateRetargetPose_Parms), Z_Construct_UFunction_UIKRetargeterController_DuplicateRetargetPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_DuplicateRetargetPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_DuplicateRetargetPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_DuplicateRetargetPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRetargeterController_DuplicateRetargetPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRetargeterController_DuplicateRetargetPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRetargeterController_GetAllChainSettings_Statics
	{
		struct IKRetargeterController_eventGetAllChainSettings_Parms
		{
			TArray<URetargetChainSettings*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIKRetargeterController_GetAllChainSettings_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URetargetChainSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_GetAllChainSettings_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UIKRetargeterController_GetAllChainSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeterController_eventGetAllChainSettings_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_GetAllChainSettings_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_GetAllChainSettings_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRetargeterController_GetAllChainSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_GetAllChainSettings_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_GetAllChainSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_GetAllChainSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRetargeter" },
		{ "Comment", "// Get read-only access to the list of settings for each target chain\n" },
		{ "ModuleRelativePath", "Public/RetargetEditor/IKRetargeterController.h" },
		{ "ToolTip", "Get read-only access to the list of settings for each target chain" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRetargeterController_GetAllChainSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRetargeterController, nullptr, "GetAllChainSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRetargeterController_GetAllChainSettings_Statics::IKRetargeterController_eventGetAllChainSettings_Parms), Z_Construct_UFunction_UIKRetargeterController_GetAllChainSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_GetAllChainSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_GetAllChainSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_GetAllChainSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRetargeterController_GetAllChainSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRetargeterController_GetAllChainSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRetargeterController_GetController_Statics
	{
		struct IKRetargeterController_eventGetController_Parms
		{
			const UIKRetargeter* InRetargeterAsset;
			UIKRetargeterController* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InRetargeterAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InRetargeterAsset;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_GetController_Statics::NewProp_InRetargeterAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIKRetargeterController_GetController_Statics::NewProp_InRetargeterAsset = { "InRetargeterAsset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeterController_eventGetController_Parms, InRetargeterAsset), Z_Construct_UClass_UIKRetargeter_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_GetController_Statics::NewProp_InRetargeterAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_GetController_Statics::NewProp_InRetargeterAsset_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIKRetargeterController_GetController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeterController_eventGetController_Parms, ReturnValue), Z_Construct_UClass_UIKRetargeterController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRetargeterController_GetController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_GetController_Statics::NewProp_InRetargeterAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_GetController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_GetController_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRetargeter" },
		{ "Comment", "/** Use this to get the controller for the given retargeter asset */" },
		{ "ModuleRelativePath", "Public/RetargetEditor/IKRetargeterController.h" },
		{ "ToolTip", "Use this to get the controller for the given retargeter asset" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRetargeterController_GetController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRetargeterController, nullptr, "GetController", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRetargeterController_GetController_Statics::IKRetargeterController_eventGetController_Parms), Z_Construct_UFunction_UIKRetargeterController_GetController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_GetController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_GetController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_GetController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRetargeterController_GetController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRetargeterController_GetController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRetargeterController_GetCurrentRetargetPose_Statics
	{
		struct IKRetargeterController_eventGetCurrentRetargetPose_Parms
		{
			ERetargetSourceOrTarget SourceOrTarget;
			FIKRetargetPose ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_SourceOrTarget_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceOrTarget_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceOrTarget;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIKRetargeterController_GetCurrentRetargetPose_Statics::NewProp_SourceOrTarget_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_GetCurrentRetargetPose_Statics::NewProp_SourceOrTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIKRetargeterController_GetCurrentRetargetPose_Statics::NewProp_SourceOrTarget = { "SourceOrTarget", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeterController_eventGetCurrentRetargetPose_Parms, SourceOrTarget), Z_Construct_UEnum_IKRig_ERetargetSourceOrTarget, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_GetCurrentRetargetPose_Statics::NewProp_SourceOrTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_GetCurrentRetargetPose_Statics::NewProp_SourceOrTarget_MetaData)) }; // 3404744579
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRetargeterController_GetCurrentRetargetPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeterController_eventGetCurrentRetargetPose_Parms, ReturnValue), Z_Construct_UScriptStruct_FIKRetargetPose, METADATA_PARAMS(nullptr, 0) }; // 3101249334
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRetargeterController_GetCurrentRetargetPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_GetCurrentRetargetPose_Statics::NewProp_SourceOrTarget_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_GetCurrentRetargetPose_Statics::NewProp_SourceOrTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_GetCurrentRetargetPose_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_GetCurrentRetargetPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRetargeter" },
		{ "Comment", "// Get the current retarget pose\n" },
		{ "ModuleRelativePath", "Public/RetargetEditor/IKRetargeterController.h" },
		{ "ToolTip", "Get the current retarget pose" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRetargeterController_GetCurrentRetargetPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRetargeterController, nullptr, "GetCurrentRetargetPose", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRetargeterController_GetCurrentRetargetPose_Statics::IKRetargeterController_eventGetCurrentRetargetPose_Parms), Z_Construct_UFunction_UIKRetargeterController_GetCurrentRetargetPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_GetCurrentRetargetPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_GetCurrentRetargetPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_GetCurrentRetargetPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRetargeterController_GetCurrentRetargetPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRetargeterController_GetCurrentRetargetPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRetargeterController_GetCurrentRetargetPoseName_Statics
	{
		struct IKRetargeterController_eventGetCurrentRetargetPoseName_Parms
		{
			ERetargetSourceOrTarget SourceOrTarget;
			FName ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_SourceOrTarget_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceOrTarget_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceOrTarget;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIKRetargeterController_GetCurrentRetargetPoseName_Statics::NewProp_SourceOrTarget_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_GetCurrentRetargetPoseName_Statics::NewProp_SourceOrTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIKRetargeterController_GetCurrentRetargetPoseName_Statics::NewProp_SourceOrTarget = { "SourceOrTarget", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeterController_eventGetCurrentRetargetPoseName_Parms, SourceOrTarget), Z_Construct_UEnum_IKRig_ERetargetSourceOrTarget, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_GetCurrentRetargetPoseName_Statics::NewProp_SourceOrTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_GetCurrentRetargetPoseName_Statics::NewProp_SourceOrTarget_MetaData)) }; // 3404744579
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRetargeterController_GetCurrentRetargetPoseName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeterController_eventGetCurrentRetargetPoseName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRetargeterController_GetCurrentRetargetPoseName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_GetCurrentRetargetPoseName_Statics::NewProp_SourceOrTarget_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_GetCurrentRetargetPoseName_Statics::NewProp_SourceOrTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_GetCurrentRetargetPoseName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_GetCurrentRetargetPoseName_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRetargeter" },
		{ "Comment", "// Get the current retarget pose\n" },
		{ "ModuleRelativePath", "Public/RetargetEditor/IKRetargeterController.h" },
		{ "ToolTip", "Get the current retarget pose" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRetargeterController_GetCurrentRetargetPoseName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRetargeterController, nullptr, "GetCurrentRetargetPoseName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRetargeterController_GetCurrentRetargetPoseName_Statics::IKRetargeterController_eventGetCurrentRetargetPoseName_Parms), Z_Construct_UFunction_UIKRetargeterController_GetCurrentRetargetPoseName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_GetCurrentRetargetPoseName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_GetCurrentRetargetPoseName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_GetCurrentRetargetPoseName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRetargeterController_GetCurrentRetargetPoseName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRetargeterController_GetCurrentRetargetPoseName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRetargeterController_GetGlobalSettings_Statics
	{
		struct IKRetargeterController_eventGetGlobalSettings_Parms
		{
			FRetargetGlobalSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRetargeterController_GetGlobalSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeterController_eventGetGlobalSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FRetargetGlobalSettings, METADATA_PARAMS(nullptr, 0) }; // 3791297177
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRetargeterController_GetGlobalSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_GetGlobalSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_GetGlobalSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRetargeter" },
		{ "Comment", "// Get a copy of the global settings for this asset.\n" },
		{ "ModuleRelativePath", "Public/RetargetEditor/IKRetargeterController.h" },
		{ "ToolTip", "Get a copy of the global settings for this asset." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRetargeterController_GetGlobalSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRetargeterController, nullptr, "GetGlobalSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRetargeterController_GetGlobalSettings_Statics::IKRetargeterController_eventGetGlobalSettings_Parms), Z_Construct_UFunction_UIKRetargeterController_GetGlobalSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_GetGlobalSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_GetGlobalSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_GetGlobalSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRetargeterController_GetGlobalSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRetargeterController_GetGlobalSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRetargeterController_GetIKRig_Statics
	{
		struct IKRetargeterController_eventGetIKRig_Parms
		{
			ERetargetSourceOrTarget SourceOrTarget;
			const UIKRigDefinition* ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_SourceOrTarget_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceOrTarget_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceOrTarget;
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIKRetargeterController_GetIKRig_Statics::NewProp_SourceOrTarget_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_GetIKRig_Statics::NewProp_SourceOrTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIKRetargeterController_GetIKRig_Statics::NewProp_SourceOrTarget = { "SourceOrTarget", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeterController_eventGetIKRig_Parms, SourceOrTarget), Z_Construct_UEnum_IKRig_ERetargetSourceOrTarget, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_GetIKRig_Statics::NewProp_SourceOrTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_GetIKRig_Statics::NewProp_SourceOrTarget_MetaData)) }; // 3404744579
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_GetIKRig_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIKRetargeterController_GetIKRig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeterController_eventGetIKRig_Parms, ReturnValue), Z_Construct_UClass_UIKRigDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_GetIKRig_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_GetIKRig_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRetargeterController_GetIKRig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_GetIKRig_Statics::NewProp_SourceOrTarget_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_GetIKRig_Statics::NewProp_SourceOrTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_GetIKRig_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_GetIKRig_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRetargeter" },
		{ "Comment", "// Get either source or target IK Rig \n" },
		{ "ModuleRelativePath", "Public/RetargetEditor/IKRetargeterController.h" },
		{ "ToolTip", "Get either source or target IK Rig" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRetargeterController_GetIKRig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRetargeterController, nullptr, "GetIKRig", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRetargeterController_GetIKRig_Statics::IKRetargeterController_eventGetIKRig_Parms), Z_Construct_UFunction_UIKRetargeterController_GetIKRig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_GetIKRig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_GetIKRig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_GetIKRig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRetargeterController_GetIKRig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRetargeterController_GetIKRig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRetargeterController_GetPreviewMesh_Statics
	{
		struct IKRetargeterController_eventGetPreviewMesh_Parms
		{
			ERetargetSourceOrTarget SourceOrTarget;
			USkeletalMesh* ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_SourceOrTarget_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceOrTarget_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceOrTarget;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIKRetargeterController_GetPreviewMesh_Statics::NewProp_SourceOrTarget_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_GetPreviewMesh_Statics::NewProp_SourceOrTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIKRetargeterController_GetPreviewMesh_Statics::NewProp_SourceOrTarget = { "SourceOrTarget", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeterController_eventGetPreviewMesh_Parms, SourceOrTarget), Z_Construct_UEnum_IKRig_ERetargetSourceOrTarget, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_GetPreviewMesh_Statics::NewProp_SourceOrTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_GetPreviewMesh_Statics::NewProp_SourceOrTarget_MetaData)) }; // 3404744579
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIKRetargeterController_GetPreviewMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeterController_eventGetPreviewMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRetargeterController_GetPreviewMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_GetPreviewMesh_Statics::NewProp_SourceOrTarget_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_GetPreviewMesh_Statics::NewProp_SourceOrTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_GetPreviewMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_GetPreviewMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRetargeter" },
		{ "Comment", "// Get the preview skeletal mesh\n" },
		{ "ModuleRelativePath", "Public/RetargetEditor/IKRetargeterController.h" },
		{ "ToolTip", "Get the preview skeletal mesh" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRetargeterController_GetPreviewMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRetargeterController, nullptr, "GetPreviewMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRetargeterController_GetPreviewMesh_Statics::IKRetargeterController_eventGetPreviewMesh_Parms), Z_Construct_UFunction_UIKRetargeterController_GetPreviewMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_GetPreviewMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_GetPreviewMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_GetPreviewMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRetargeterController_GetPreviewMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRetargeterController_GetPreviewMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRetargeterController_GetRetargetChainSettings_Statics
	{
		struct IKRetargeterController_eventGetRetargetChainSettings_Parms
		{
			FName TargetChainName;
			FTargetChainSettings ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetChainName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TargetChainName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_GetRetargetChainSettings_Statics::NewProp_TargetChainName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRetargeterController_GetRetargetChainSettings_Statics::NewProp_TargetChainName = { "TargetChainName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeterController_eventGetRetargetChainSettings_Parms, TargetChainName), METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_GetRetargetChainSettings_Statics::NewProp_TargetChainName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_GetRetargetChainSettings_Statics::NewProp_TargetChainName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRetargeterController_GetRetargetChainSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeterController_eventGetRetargetChainSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FTargetChainSettings, METADATA_PARAMS(nullptr, 0) }; // 1600617571
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRetargeterController_GetRetargetChainSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_GetRetargetChainSettings_Statics::NewProp_TargetChainName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_GetRetargetChainSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_GetRetargetChainSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRetargeter" },
		{ "Comment", "// Get a copy of the settings for the target chain by name.\n" },
		{ "ModuleRelativePath", "Public/RetargetEditor/IKRetargeterController.h" },
		{ "ToolTip", "Get a copy of the settings for the target chain by name." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRetargeterController_GetRetargetChainSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRetargeterController, nullptr, "GetRetargetChainSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRetargeterController_GetRetargetChainSettings_Statics::IKRetargeterController_eventGetRetargetChainSettings_Parms), Z_Construct_UFunction_UIKRetargeterController_GetRetargetChainSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_GetRetargetChainSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_GetRetargetChainSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_GetRetargetChainSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRetargeterController_GetRetargetChainSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRetargeterController_GetRetargetChainSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRetargeterController_GetRetargetPoses_Statics
	{
		struct IKRetargeterController_eventGetRetargetPoses_Parms
		{
			ERetargetSourceOrTarget SourceOrTarget;
			TMap<FName,FIKRetargetPose> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_SourceOrTarget_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceOrTarget_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceOrTarget;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIKRetargeterController_GetRetargetPoses_Statics::NewProp_SourceOrTarget_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_GetRetargetPoses_Statics::NewProp_SourceOrTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIKRetargeterController_GetRetargetPoses_Statics::NewProp_SourceOrTarget = { "SourceOrTarget", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeterController_eventGetRetargetPoses_Parms, SourceOrTarget), Z_Construct_UEnum_IKRig_ERetargetSourceOrTarget, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_GetRetargetPoses_Statics::NewProp_SourceOrTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_GetRetargetPoses_Statics::NewProp_SourceOrTarget_MetaData)) }; // 3404744579
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRetargeterController_GetRetargetPoses_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FIKRetargetPose, METADATA_PARAMS(nullptr, 0) }; // 3101249334
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRetargeterController_GetRetargetPoses_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UIKRetargeterController_GetRetargetPoses_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeterController_eventGetRetargetPoses_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3101249334
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRetargeterController_GetRetargetPoses_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_GetRetargetPoses_Statics::NewProp_SourceOrTarget_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_GetRetargetPoses_Statics::NewProp_SourceOrTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_GetRetargetPoses_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_GetRetargetPoses_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_GetRetargetPoses_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_GetRetargetPoses_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRetargeter" },
		{ "Comment", "// Get access to array of retarget poses\n" },
		{ "ModuleRelativePath", "Public/RetargetEditor/IKRetargeterController.h" },
		{ "ToolTip", "Get access to array of retarget poses" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRetargeterController_GetRetargetPoses_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRetargeterController, nullptr, "GetRetargetPoses", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRetargeterController_GetRetargetPoses_Statics::IKRetargeterController_eventGetRetargetPoses_Parms), Z_Construct_UFunction_UIKRetargeterController_GetRetargetPoses_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_GetRetargetPoses_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_GetRetargetPoses_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_GetRetargetPoses_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRetargeterController_GetRetargetPoses()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRetargeterController_GetRetargetPoses_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRetargeterController_GetRootOffsetInRetargetPose_Statics
	{
		struct IKRetargeterController_eventGetRootOffsetInRetargetPose_Parms
		{
			ERetargetSourceOrTarget SourceOrTarget;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_SourceOrTarget_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceOrTarget_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceOrTarget;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIKRetargeterController_GetRootOffsetInRetargetPose_Statics::NewProp_SourceOrTarget_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_GetRootOffsetInRetargetPose_Statics::NewProp_SourceOrTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIKRetargeterController_GetRootOffsetInRetargetPose_Statics::NewProp_SourceOrTarget = { "SourceOrTarget", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeterController_eventGetRootOffsetInRetargetPose_Parms, SourceOrTarget), Z_Construct_UEnum_IKRig_ERetargetSourceOrTarget, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_GetRootOffsetInRetargetPose_Statics::NewProp_SourceOrTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_GetRootOffsetInRetargetPose_Statics::NewProp_SourceOrTarget_MetaData)) }; // 3404744579
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRetargeterController_GetRootOffsetInRetargetPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeterController_eventGetRootOffsetInRetargetPose_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRetargeterController_GetRootOffsetInRetargetPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_GetRootOffsetInRetargetPose_Statics::NewProp_SourceOrTarget_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_GetRootOffsetInRetargetPose_Statics::NewProp_SourceOrTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_GetRootOffsetInRetargetPose_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_GetRootOffsetInRetargetPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRetargeter" },
		{ "Comment", "// Get the translation offset on the retarget root bone for the current retarget pose\n" },
		{ "ModuleRelativePath", "Public/RetargetEditor/IKRetargeterController.h" },
		{ "ToolTip", "Get the translation offset on the retarget root bone for the current retarget pose" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRetargeterController_GetRootOffsetInRetargetPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRetargeterController, nullptr, "GetRootOffsetInRetargetPose", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRetargeterController_GetRootOffsetInRetargetPose_Statics::IKRetargeterController_eventGetRootOffsetInRetargetPose_Parms), Z_Construct_UFunction_UIKRetargeterController_GetRootOffsetInRetargetPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_GetRootOffsetInRetargetPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_GetRootOffsetInRetargetPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_GetRootOffsetInRetargetPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRetargeterController_GetRootOffsetInRetargetPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRetargeterController_GetRootOffsetInRetargetPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRetargeterController_GetRootSettings_Statics
	{
		struct IKRetargeterController_eventGetRootSettings_Parms
		{
			FTargetRootSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRetargeterController_GetRootSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeterController_eventGetRootSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FTargetRootSettings, METADATA_PARAMS(nullptr, 0) }; // 1694733288
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRetargeterController_GetRootSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_GetRootSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_GetRootSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRetargeter" },
		{ "Comment", "// Get a copy of the retarget root settings for this asset.\n" },
		{ "ModuleRelativePath", "Public/RetargetEditor/IKRetargeterController.h" },
		{ "ToolTip", "Get a copy of the retarget root settings for this asset." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRetargeterController_GetRootSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRetargeterController, nullptr, "GetRootSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRetargeterController_GetRootSettings_Statics::IKRetargeterController_eventGetRootSettings_Parms), Z_Construct_UFunction_UIKRetargeterController_GetRootSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_GetRootSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_GetRootSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_GetRootSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRetargeterController_GetRootSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRetargeterController_GetRootSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRetargeterController_GetRotationOffsetForRetargetPoseBone_Statics
	{
		struct IKRetargeterController_eventGetRotationOffsetForRetargetPoseBone_Parms
		{
			FName BoneName;
			ERetargetSourceOrTarget SourceOrTarget;
			FQuat ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SourceOrTarget_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceOrTarget_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceOrTarget;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_GetRotationOffsetForRetargetPoseBone_Statics::NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRetargeterController_GetRotationOffsetForRetargetPoseBone_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeterController_eventGetRotationOffsetForRetargetPoseBone_Parms, BoneName), METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_GetRotationOffsetForRetargetPoseBone_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_GetRotationOffsetForRetargetPoseBone_Statics::NewProp_BoneName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIKRetargeterController_GetRotationOffsetForRetargetPoseBone_Statics::NewProp_SourceOrTarget_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_GetRotationOffsetForRetargetPoseBone_Statics::NewProp_SourceOrTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIKRetargeterController_GetRotationOffsetForRetargetPoseBone_Statics::NewProp_SourceOrTarget = { "SourceOrTarget", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeterController_eventGetRotationOffsetForRetargetPoseBone_Parms, SourceOrTarget), Z_Construct_UEnum_IKRig_ERetargetSourceOrTarget, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_GetRotationOffsetForRetargetPoseBone_Statics::NewProp_SourceOrTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_GetRotationOffsetForRetargetPoseBone_Statics::NewProp_SourceOrTarget_MetaData)) }; // 3404744579
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRetargeterController_GetRotationOffsetForRetargetPoseBone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeterController_eventGetRotationOffsetForRetargetPoseBone_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRetargeterController_GetRotationOffsetForRetargetPoseBone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_GetRotationOffsetForRetargetPoseBone_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_GetRotationOffsetForRetargetPoseBone_Statics::NewProp_SourceOrTarget_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_GetRotationOffsetForRetargetPoseBone_Statics::NewProp_SourceOrTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_GetRotationOffsetForRetargetPoseBone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_GetRotationOffsetForRetargetPoseBone_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRetargeter" },
		{ "Comment", "// Get a delta rotation for a given bone for the current retarget pose\n" },
		{ "ModuleRelativePath", "Public/RetargetEditor/IKRetargeterController.h" },
		{ "ToolTip", "Get a delta rotation for a given bone for the current retarget pose" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRetargeterController_GetRotationOffsetForRetargetPoseBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRetargeterController, nullptr, "GetRotationOffsetForRetargetPoseBone", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRetargeterController_GetRotationOffsetForRetargetPoseBone_Statics::IKRetargeterController_eventGetRotationOffsetForRetargetPoseBone_Parms), Z_Construct_UFunction_UIKRetargeterController_GetRotationOffsetForRetargetPoseBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_GetRotationOffsetForRetargetPoseBone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_GetRotationOffsetForRetargetPoseBone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_GetRotationOffsetForRetargetPoseBone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRetargeterController_GetRotationOffsetForRetargetPoseBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRetargeterController_GetRotationOffsetForRetargetPoseBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRetargeterController_GetSourceChain_Statics
	{
		struct IKRetargeterController_eventGetSourceChain_Parms
		{
			FName TargetChainName;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetChainName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TargetChainName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_GetSourceChain_Statics::NewProp_TargetChainName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRetargeterController_GetSourceChain_Statics::NewProp_TargetChainName = { "TargetChainName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeterController_eventGetSourceChain_Parms, TargetChainName), METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_GetSourceChain_Statics::NewProp_TargetChainName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_GetSourceChain_Statics::NewProp_TargetChainName_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRetargeterController_GetSourceChain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeterController_eventGetSourceChain_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRetargeterController_GetSourceChain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_GetSourceChain_Statics::NewProp_TargetChainName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_GetSourceChain_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_GetSourceChain_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRetargeter" },
		{ "Comment", "// Get the name of the source chain mapped to a given target chain (the chain animation is copied FROM).\n" },
		{ "ModuleRelativePath", "Public/RetargetEditor/IKRetargeterController.h" },
		{ "ToolTip", "Get the name of the source chain mapped to a given target chain (the chain animation is copied FROM)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRetargeterController_GetSourceChain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRetargeterController, nullptr, "GetSourceChain", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRetargeterController_GetSourceChain_Statics::IKRetargeterController_eventGetSourceChain_Parms), Z_Construct_UFunction_UIKRetargeterController_GetSourceChain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_GetSourceChain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_GetSourceChain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_GetSourceChain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRetargeterController_GetSourceChain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRetargeterController_GetSourceChain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRetargeterController_RemoveRetargetPose_Statics
	{
		struct IKRetargeterController_eventRemoveRetargetPose_Parms
		{
			FName PoseToRemove;
			ERetargetSourceOrTarget SourceOrTarget;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoseToRemove_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PoseToRemove;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SourceOrTarget_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceOrTarget_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceOrTarget;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_RemoveRetargetPose_Statics::NewProp_PoseToRemove_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRetargeterController_RemoveRetargetPose_Statics::NewProp_PoseToRemove = { "PoseToRemove", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeterController_eventRemoveRetargetPose_Parms, PoseToRemove), METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_RemoveRetargetPose_Statics::NewProp_PoseToRemove_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_RemoveRetargetPose_Statics::NewProp_PoseToRemove_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIKRetargeterController_RemoveRetargetPose_Statics::NewProp_SourceOrTarget_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_RemoveRetargetPose_Statics::NewProp_SourceOrTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIKRetargeterController_RemoveRetargetPose_Statics::NewProp_SourceOrTarget = { "SourceOrTarget", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeterController_eventRemoveRetargetPose_Parms, SourceOrTarget), Z_Construct_UEnum_IKRig_ERetargetSourceOrTarget, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_RemoveRetargetPose_Statics::NewProp_SourceOrTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_RemoveRetargetPose_Statics::NewProp_SourceOrTarget_MetaData)) }; // 3404744579
	void Z_Construct_UFunction_UIKRetargeterController_RemoveRetargetPose_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((IKRetargeterController_eventRemoveRetargetPose_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIKRetargeterController_RemoveRetargetPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(IKRetargeterController_eventRemoveRetargetPose_Parms), &Z_Construct_UFunction_UIKRetargeterController_RemoveRetargetPose_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRetargeterController_RemoveRetargetPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_RemoveRetargetPose_Statics::NewProp_PoseToRemove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_RemoveRetargetPose_Statics::NewProp_SourceOrTarget_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_RemoveRetargetPose_Statics::NewProp_SourceOrTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_RemoveRetargetPose_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_RemoveRetargetPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRetargeter" },
		{ "Comment", "// Remove a retarget pose. Returns true if the pose was found and removed.\n" },
		{ "ModuleRelativePath", "Public/RetargetEditor/IKRetargeterController.h" },
		{ "ToolTip", "Remove a retarget pose. Returns true if the pose was found and removed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRetargeterController_RemoveRetargetPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRetargeterController, nullptr, "RemoveRetargetPose", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRetargeterController_RemoveRetargetPose_Statics::IKRetargeterController_eventRemoveRetargetPose_Parms), Z_Construct_UFunction_UIKRetargeterController_RemoveRetargetPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_RemoveRetargetPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_RemoveRetargetPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_RemoveRetargetPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRetargeterController_RemoveRetargetPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRetargeterController_RemoveRetargetPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRetargeterController_RenameRetargetPose_Statics
	{
		struct IKRetargeterController_eventRenameRetargetPose_Parms
		{
			FName OldPoseName;
			FName NewPoseName;
			ERetargetSourceOrTarget SourceOrTarget;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldPoseName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OldPoseName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewPoseName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewPoseName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SourceOrTarget_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceOrTarget_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceOrTarget;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_RenameRetargetPose_Statics::NewProp_OldPoseName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRetargeterController_RenameRetargetPose_Statics::NewProp_OldPoseName = { "OldPoseName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeterController_eventRenameRetargetPose_Parms, OldPoseName), METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_RenameRetargetPose_Statics::NewProp_OldPoseName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_RenameRetargetPose_Statics::NewProp_OldPoseName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_RenameRetargetPose_Statics::NewProp_NewPoseName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRetargeterController_RenameRetargetPose_Statics::NewProp_NewPoseName = { "NewPoseName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeterController_eventRenameRetargetPose_Parms, NewPoseName), METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_RenameRetargetPose_Statics::NewProp_NewPoseName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_RenameRetargetPose_Statics::NewProp_NewPoseName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIKRetargeterController_RenameRetargetPose_Statics::NewProp_SourceOrTarget_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_RenameRetargetPose_Statics::NewProp_SourceOrTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIKRetargeterController_RenameRetargetPose_Statics::NewProp_SourceOrTarget = { "SourceOrTarget", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeterController_eventRenameRetargetPose_Parms, SourceOrTarget), Z_Construct_UEnum_IKRig_ERetargetSourceOrTarget, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_RenameRetargetPose_Statics::NewProp_SourceOrTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_RenameRetargetPose_Statics::NewProp_SourceOrTarget_MetaData)) }; // 3404744579
	void Z_Construct_UFunction_UIKRetargeterController_RenameRetargetPose_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((IKRetargeterController_eventRenameRetargetPose_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIKRetargeterController_RenameRetargetPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(IKRetargeterController_eventRenameRetargetPose_Parms), &Z_Construct_UFunction_UIKRetargeterController_RenameRetargetPose_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRetargeterController_RenameRetargetPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_RenameRetargetPose_Statics::NewProp_OldPoseName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_RenameRetargetPose_Statics::NewProp_NewPoseName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_RenameRetargetPose_Statics::NewProp_SourceOrTarget_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_RenameRetargetPose_Statics::NewProp_SourceOrTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_RenameRetargetPose_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_RenameRetargetPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRetargeter" },
		{ "Comment", "// Rename current retarget pose. Returns true if a pose was renamed.\n" },
		{ "ModuleRelativePath", "Public/RetargetEditor/IKRetargeterController.h" },
		{ "ToolTip", "Rename current retarget pose. Returns true if a pose was renamed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRetargeterController_RenameRetargetPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRetargeterController, nullptr, "RenameRetargetPose", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRetargeterController_RenameRetargetPose_Statics::IKRetargeterController_eventRenameRetargetPose_Parms), Z_Construct_UFunction_UIKRetargeterController_RenameRetargetPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_RenameRetargetPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_RenameRetargetPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_RenameRetargetPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRetargeterController_RenameRetargetPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRetargeterController_RenameRetargetPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRetargeterController_ResetRetargetPose_Statics
	{
		struct IKRetargeterController_eventResetRetargetPose_Parms
		{
			FName PoseToReset;
			TArray<FName> BonesToReset;
			ERetargetSourceOrTarget SourceOrTarget;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoseToReset_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PoseToReset;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BonesToReset_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BonesToReset_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BonesToReset;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SourceOrTarget_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceOrTarget_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceOrTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_ResetRetargetPose_Statics::NewProp_PoseToReset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRetargeterController_ResetRetargetPose_Statics::NewProp_PoseToReset = { "PoseToReset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeterController_eventResetRetargetPose_Parms, PoseToReset), METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_ResetRetargetPose_Statics::NewProp_PoseToReset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_ResetRetargetPose_Statics::NewProp_PoseToReset_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRetargeterController_ResetRetargetPose_Statics::NewProp_BonesToReset_Inner = { "BonesToReset", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_ResetRetargetPose_Statics::NewProp_BonesToReset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UIKRetargeterController_ResetRetargetPose_Statics::NewProp_BonesToReset = { "BonesToReset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeterController_eventResetRetargetPose_Parms, BonesToReset), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_ResetRetargetPose_Statics::NewProp_BonesToReset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_ResetRetargetPose_Statics::NewProp_BonesToReset_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIKRetargeterController_ResetRetargetPose_Statics::NewProp_SourceOrTarget_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_ResetRetargetPose_Statics::NewProp_SourceOrTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIKRetargeterController_ResetRetargetPose_Statics::NewProp_SourceOrTarget = { "SourceOrTarget", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeterController_eventResetRetargetPose_Parms, SourceOrTarget), Z_Construct_UEnum_IKRig_ERetargetSourceOrTarget, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_ResetRetargetPose_Statics::NewProp_SourceOrTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_ResetRetargetPose_Statics::NewProp_SourceOrTarget_MetaData)) }; // 3404744579
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRetargeterController_ResetRetargetPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_ResetRetargetPose_Statics::NewProp_PoseToReset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_ResetRetargetPose_Statics::NewProp_BonesToReset_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_ResetRetargetPose_Statics::NewProp_BonesToReset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_ResetRetargetPose_Statics::NewProp_SourceOrTarget_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_ResetRetargetPose_Statics::NewProp_SourceOrTarget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_ResetRetargetPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRetargeter" },
		{ "Comment", "// Reset a retarget pose for the specified bones.\n// If BonesToReset is Empty, will removes all stored deltas, returning pose to reference pose\n" },
		{ "ModuleRelativePath", "Public/RetargetEditor/IKRetargeterController.h" },
		{ "ToolTip", "Reset a retarget pose for the specified bones.\nIf BonesToReset is Empty, will removes all stored deltas, returning pose to reference pose" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRetargeterController_ResetRetargetPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRetargeterController, nullptr, "ResetRetargetPose", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRetargeterController_ResetRetargetPose_Statics::IKRetargeterController_eventResetRetargetPose_Parms), Z_Construct_UFunction_UIKRetargeterController_ResetRetargetPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_ResetRetargetPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_ResetRetargetPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_ResetRetargetPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRetargeterController_ResetRetargetPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRetargeterController_ResetRetargetPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRetargeterController_SetCurrentRetargetPose_Statics
	{
		struct IKRetargeterController_eventSetCurrentRetargetPose_Parms
		{
			FName CurrentPose;
			ERetargetSourceOrTarget SourceOrTarget;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurrentPose;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SourceOrTarget_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceOrTarget_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceOrTarget;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRetargeterController_SetCurrentRetargetPose_Statics::NewProp_CurrentPose = { "CurrentPose", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeterController_eventSetCurrentRetargetPose_Parms, CurrentPose), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIKRetargeterController_SetCurrentRetargetPose_Statics::NewProp_SourceOrTarget_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_SetCurrentRetargetPose_Statics::NewProp_SourceOrTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIKRetargeterController_SetCurrentRetargetPose_Statics::NewProp_SourceOrTarget = { "SourceOrTarget", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeterController_eventSetCurrentRetargetPose_Parms, SourceOrTarget), Z_Construct_UEnum_IKRig_ERetargetSourceOrTarget, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_SetCurrentRetargetPose_Statics::NewProp_SourceOrTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_SetCurrentRetargetPose_Statics::NewProp_SourceOrTarget_MetaData)) }; // 3404744579
	void Z_Construct_UFunction_UIKRetargeterController_SetCurrentRetargetPose_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((IKRetargeterController_eventSetCurrentRetargetPose_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIKRetargeterController_SetCurrentRetargetPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(IKRetargeterController_eventSetCurrentRetargetPose_Parms), &Z_Construct_UFunction_UIKRetargeterController_SetCurrentRetargetPose_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRetargeterController_SetCurrentRetargetPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_SetCurrentRetargetPose_Statics::NewProp_CurrentPose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_SetCurrentRetargetPose_Statics::NewProp_SourceOrTarget_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_SetCurrentRetargetPose_Statics::NewProp_SourceOrTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_SetCurrentRetargetPose_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_SetCurrentRetargetPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRetargeter" },
		{ "Comment", "// Change which retarget pose is used by the retargeter at runtime\n" },
		{ "ModuleRelativePath", "Public/RetargetEditor/IKRetargeterController.h" },
		{ "ToolTip", "Change which retarget pose is used by the retargeter at runtime" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRetargeterController_SetCurrentRetargetPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRetargeterController, nullptr, "SetCurrentRetargetPose", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRetargeterController_SetCurrentRetargetPose_Statics::IKRetargeterController_eventSetCurrentRetargetPose_Parms), Z_Construct_UFunction_UIKRetargeterController_SetCurrentRetargetPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_SetCurrentRetargetPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_SetCurrentRetargetPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_SetCurrentRetargetPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRetargeterController_SetCurrentRetargetPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRetargeterController_SetCurrentRetargetPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRetargeterController_SetGlobalSettings_Statics
	{
		struct IKRetargeterController_eventSetGlobalSettings_Parms
		{
			FRetargetGlobalSettings GlobalSettings;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_SetGlobalSettings_Statics::NewProp_GlobalSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRetargeterController_SetGlobalSettings_Statics::NewProp_GlobalSettings = { "GlobalSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeterController_eventSetGlobalSettings_Parms, GlobalSettings), Z_Construct_UScriptStruct_FRetargetGlobalSettings, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_SetGlobalSettings_Statics::NewProp_GlobalSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_SetGlobalSettings_Statics::NewProp_GlobalSettings_MetaData)) }; // 3791297177
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRetargeterController_SetGlobalSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_SetGlobalSettings_Statics::NewProp_GlobalSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_SetGlobalSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRetargeter" },
		{ "Comment", "// Get a copy of the global settings for this asset.\n" },
		{ "ModuleRelativePath", "Public/RetargetEditor/IKRetargeterController.h" },
		{ "ToolTip", "Get a copy of the global settings for this asset." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRetargeterController_SetGlobalSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRetargeterController, nullptr, "SetGlobalSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRetargeterController_SetGlobalSettings_Statics::IKRetargeterController_eventSetGlobalSettings_Parms), Z_Construct_UFunction_UIKRetargeterController_SetGlobalSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_SetGlobalSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_SetGlobalSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_SetGlobalSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRetargeterController_SetGlobalSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRetargeterController_SetGlobalSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRetargeterController_SetIKRig_Statics
	{
		struct IKRetargeterController_eventSetIKRig_Parms
		{
			ERetargetSourceOrTarget SourceOrTarget;
			UIKRigDefinition* IKRig;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_SourceOrTarget_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceOrTarget_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceOrTarget;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IKRig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIKRetargeterController_SetIKRig_Statics::NewProp_SourceOrTarget_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_SetIKRig_Statics::NewProp_SourceOrTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIKRetargeterController_SetIKRig_Statics::NewProp_SourceOrTarget = { "SourceOrTarget", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeterController_eventSetIKRig_Parms, SourceOrTarget), Z_Construct_UEnum_IKRig_ERetargetSourceOrTarget, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_SetIKRig_Statics::NewProp_SourceOrTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_SetIKRig_Statics::NewProp_SourceOrTarget_MetaData)) }; // 3404744579
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIKRetargeterController_SetIKRig_Statics::NewProp_IKRig = { "IKRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeterController_eventSetIKRig_Parms, IKRig), Z_Construct_UClass_UIKRigDefinition_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRetargeterController_SetIKRig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_SetIKRig_Statics::NewProp_SourceOrTarget_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_SetIKRig_Statics::NewProp_SourceOrTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_SetIKRig_Statics::NewProp_IKRig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_SetIKRig_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRetargeter" },
		{ "Comment", "// Set the IK Rig to use as the source or target (to copy animation FROM/TO) \n" },
		{ "ModuleRelativePath", "Public/RetargetEditor/IKRetargeterController.h" },
		{ "ToolTip", "Set the IK Rig to use as the source or target (to copy animation FROM/TO)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRetargeterController_SetIKRig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRetargeterController, nullptr, "SetIKRig", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRetargeterController_SetIKRig_Statics::IKRetargeterController_eventSetIKRig_Parms), Z_Construct_UFunction_UIKRetargeterController_SetIKRig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_SetIKRig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_SetIKRig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_SetIKRig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRetargeterController_SetIKRig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRetargeterController_SetIKRig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRetargeterController_SetPreviewMesh_Statics
	{
		struct IKRetargeterController_eventSetPreviewMesh_Parms
		{
			ERetargetSourceOrTarget SourceOrTarget;
			USkeletalMesh* InPreviewMesh;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_SourceOrTarget_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceOrTarget_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceOrTarget;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPreviewMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIKRetargeterController_SetPreviewMesh_Statics::NewProp_SourceOrTarget_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_SetPreviewMesh_Statics::NewProp_SourceOrTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIKRetargeterController_SetPreviewMesh_Statics::NewProp_SourceOrTarget = { "SourceOrTarget", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeterController_eventSetPreviewMesh_Parms, SourceOrTarget), Z_Construct_UEnum_IKRig_ERetargetSourceOrTarget, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_SetPreviewMesh_Statics::NewProp_SourceOrTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_SetPreviewMesh_Statics::NewProp_SourceOrTarget_MetaData)) }; // 3404744579
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIKRetargeterController_SetPreviewMesh_Statics::NewProp_InPreviewMesh = { "InPreviewMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeterController_eventSetPreviewMesh_Parms, InPreviewMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRetargeterController_SetPreviewMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_SetPreviewMesh_Statics::NewProp_SourceOrTarget_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_SetPreviewMesh_Statics::NewProp_SourceOrTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_SetPreviewMesh_Statics::NewProp_InPreviewMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_SetPreviewMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRetargeter" },
		{ "Comment", "// Set the preview skeletal mesh for either source or target\n" },
		{ "ModuleRelativePath", "Public/RetargetEditor/IKRetargeterController.h" },
		{ "ToolTip", "Set the preview skeletal mesh for either source or target" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRetargeterController_SetPreviewMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRetargeterController, nullptr, "SetPreviewMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRetargeterController_SetPreviewMesh_Statics::IKRetargeterController_eventSetPreviewMesh_Parms), Z_Construct_UFunction_UIKRetargeterController_SetPreviewMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_SetPreviewMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_SetPreviewMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_SetPreviewMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRetargeterController_SetPreviewMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRetargeterController_SetPreviewMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRetargeterController_SetRetargetChainSettings_Statics
	{
		struct IKRetargeterController_eventSetRetargetChainSettings_Parms
		{
			FName TargetChainName;
			FTargetChainSettings Settings;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetChainName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TargetChainName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_SetRetargetChainSettings_Statics::NewProp_TargetChainName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRetargeterController_SetRetargetChainSettings_Statics::NewProp_TargetChainName = { "TargetChainName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeterController_eventSetRetargetChainSettings_Parms, TargetChainName), METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_SetRetargetChainSettings_Statics::NewProp_TargetChainName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_SetRetargetChainSettings_Statics::NewProp_TargetChainName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_SetRetargetChainSettings_Statics::NewProp_Settings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRetargeterController_SetRetargetChainSettings_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeterController_eventSetRetargetChainSettings_Parms, Settings), Z_Construct_UScriptStruct_FTargetChainSettings, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_SetRetargetChainSettings_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_SetRetargetChainSettings_Statics::NewProp_Settings_MetaData)) }; // 1600617571
	void Z_Construct_UFunction_UIKRetargeterController_SetRetargetChainSettings_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((IKRetargeterController_eventSetRetargetChainSettings_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIKRetargeterController_SetRetargetChainSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(IKRetargeterController_eventSetRetargetChainSettings_Parms), &Z_Construct_UFunction_UIKRetargeterController_SetRetargetChainSettings_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRetargeterController_SetRetargetChainSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_SetRetargetChainSettings_Statics::NewProp_TargetChainName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_SetRetargetChainSettings_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_SetRetargetChainSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_SetRetargetChainSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRetargeter" },
		{ "Comment", "// Set the settings for the target chain by name. Returns true if the chain settings were applied, false otherwise.\n" },
		{ "ModuleRelativePath", "Public/RetargetEditor/IKRetargeterController.h" },
		{ "ToolTip", "Set the settings for the target chain by name. Returns true if the chain settings were applied, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRetargeterController_SetRetargetChainSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRetargeterController, nullptr, "SetRetargetChainSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRetargeterController_SetRetargetChainSettings_Statics::IKRetargeterController_eventSetRetargetChainSettings_Parms), Z_Construct_UFunction_UIKRetargeterController_SetRetargetChainSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_SetRetargetChainSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_SetRetargetChainSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_SetRetargetChainSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRetargeterController_SetRetargetChainSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRetargeterController_SetRetargetChainSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRetargeterController_SetRootOffsetInRetargetPose_Statics
	{
		struct IKRetargeterController_eventSetRootOffsetInRetargetPose_Parms
		{
			FVector TranslationOffset;
			ERetargetSourceOrTarget SourceOrTarget;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TranslationOffset;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SourceOrTarget_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceOrTarget_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceOrTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_SetRootOffsetInRetargetPose_Statics::NewProp_TranslationOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRetargeterController_SetRootOffsetInRetargetPose_Statics::NewProp_TranslationOffset = { "TranslationOffset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeterController_eventSetRootOffsetInRetargetPose_Parms, TranslationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_SetRootOffsetInRetargetPose_Statics::NewProp_TranslationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_SetRootOffsetInRetargetPose_Statics::NewProp_TranslationOffset_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIKRetargeterController_SetRootOffsetInRetargetPose_Statics::NewProp_SourceOrTarget_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_SetRootOffsetInRetargetPose_Statics::NewProp_SourceOrTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIKRetargeterController_SetRootOffsetInRetargetPose_Statics::NewProp_SourceOrTarget = { "SourceOrTarget", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeterController_eventSetRootOffsetInRetargetPose_Parms, SourceOrTarget), Z_Construct_UEnum_IKRig_ERetargetSourceOrTarget, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_SetRootOffsetInRetargetPose_Statics::NewProp_SourceOrTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_SetRootOffsetInRetargetPose_Statics::NewProp_SourceOrTarget_MetaData)) }; // 3404744579
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRetargeterController_SetRootOffsetInRetargetPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_SetRootOffsetInRetargetPose_Statics::NewProp_TranslationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_SetRootOffsetInRetargetPose_Statics::NewProp_SourceOrTarget_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_SetRootOffsetInRetargetPose_Statics::NewProp_SourceOrTarget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_SetRootOffsetInRetargetPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRetargeter" },
		{ "Comment", "// Set the translation offset on the retarget root bone for the current retarget pose\n" },
		{ "ModuleRelativePath", "Public/RetargetEditor/IKRetargeterController.h" },
		{ "ToolTip", "Set the translation offset on the retarget root bone for the current retarget pose" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRetargeterController_SetRootOffsetInRetargetPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRetargeterController, nullptr, "SetRootOffsetInRetargetPose", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRetargeterController_SetRootOffsetInRetargetPose_Statics::IKRetargeterController_eventSetRootOffsetInRetargetPose_Parms), Z_Construct_UFunction_UIKRetargeterController_SetRootOffsetInRetargetPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_SetRootOffsetInRetargetPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_SetRootOffsetInRetargetPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_SetRootOffsetInRetargetPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRetargeterController_SetRootOffsetInRetargetPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRetargeterController_SetRootOffsetInRetargetPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRetargeterController_SetRootSettings_Statics
	{
		struct IKRetargeterController_eventSetRootSettings_Parms
		{
			FTargetRootSettings RootSettings;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RootSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_SetRootSettings_Statics::NewProp_RootSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRetargeterController_SetRootSettings_Statics::NewProp_RootSettings = { "RootSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeterController_eventSetRootSettings_Parms, RootSettings), Z_Construct_UScriptStruct_FTargetRootSettings, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_SetRootSettings_Statics::NewProp_RootSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_SetRootSettings_Statics::NewProp_RootSettings_MetaData)) }; // 1694733288
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRetargeterController_SetRootSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_SetRootSettings_Statics::NewProp_RootSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_SetRootSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRetargeter" },
		{ "Comment", "// Set the retarget root settings for this asset.\n" },
		{ "ModuleRelativePath", "Public/RetargetEditor/IKRetargeterController.h" },
		{ "ToolTip", "Set the retarget root settings for this asset." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRetargeterController_SetRootSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRetargeterController, nullptr, "SetRootSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRetargeterController_SetRootSettings_Statics::IKRetargeterController_eventSetRootSettings_Parms), Z_Construct_UFunction_UIKRetargeterController_SetRootSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_SetRootSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_SetRootSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_SetRootSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRetargeterController_SetRootSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRetargeterController_SetRootSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRetargeterController_SetRotationOffsetForRetargetPoseBone_Statics
	{
		struct IKRetargeterController_eventSetRotationOffsetForRetargetPoseBone_Parms
		{
			FName BoneName;
			FQuat RotationOffset;
			ERetargetSourceOrTarget SkeletonMode;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationOffset;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SkeletonMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletonMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SkeletonMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_SetRotationOffsetForRetargetPoseBone_Statics::NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRetargeterController_SetRotationOffsetForRetargetPoseBone_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeterController_eventSetRotationOffsetForRetargetPoseBone_Parms, BoneName), METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_SetRotationOffsetForRetargetPoseBone_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_SetRotationOffsetForRetargetPoseBone_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_SetRotationOffsetForRetargetPoseBone_Statics::NewProp_RotationOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRetargeterController_SetRotationOffsetForRetargetPoseBone_Statics::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeterController_eventSetRotationOffsetForRetargetPoseBone_Parms, RotationOffset), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_SetRotationOffsetForRetargetPoseBone_Statics::NewProp_RotationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_SetRotationOffsetForRetargetPoseBone_Statics::NewProp_RotationOffset_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIKRetargeterController_SetRotationOffsetForRetargetPoseBone_Statics::NewProp_SkeletonMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_SetRotationOffsetForRetargetPoseBone_Statics::NewProp_SkeletonMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIKRetargeterController_SetRotationOffsetForRetargetPoseBone_Statics::NewProp_SkeletonMode = { "SkeletonMode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeterController_eventSetRotationOffsetForRetargetPoseBone_Parms, SkeletonMode), Z_Construct_UEnum_IKRig_ERetargetSourceOrTarget, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_SetRotationOffsetForRetargetPoseBone_Statics::NewProp_SkeletonMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_SetRotationOffsetForRetargetPoseBone_Statics::NewProp_SkeletonMode_MetaData)) }; // 3404744579
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRetargeterController_SetRotationOffsetForRetargetPoseBone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_SetRotationOffsetForRetargetPoseBone_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_SetRotationOffsetForRetargetPoseBone_Statics::NewProp_RotationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_SetRotationOffsetForRetargetPoseBone_Statics::NewProp_SkeletonMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_SetRotationOffsetForRetargetPoseBone_Statics::NewProp_SkeletonMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_SetRotationOffsetForRetargetPoseBone_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRetargeter" },
		{ "Comment", "// Set a delta rotation for a given bone for the current retarget pose\n" },
		{ "ModuleRelativePath", "Public/RetargetEditor/IKRetargeterController.h" },
		{ "ToolTip", "Set a delta rotation for a given bone for the current retarget pose" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRetargeterController_SetRotationOffsetForRetargetPoseBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRetargeterController, nullptr, "SetRotationOffsetForRetargetPoseBone", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRetargeterController_SetRotationOffsetForRetargetPoseBone_Statics::IKRetargeterController_eventSetRotationOffsetForRetargetPoseBone_Parms), Z_Construct_UFunction_UIKRetargeterController_SetRotationOffsetForRetargetPoseBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_SetRotationOffsetForRetargetPoseBone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_SetRotationOffsetForRetargetPoseBone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_SetRotationOffsetForRetargetPoseBone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRetargeterController_SetRotationOffsetForRetargetPoseBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRetargeterController_SetRotationOffsetForRetargetPoseBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRetargeterController_SetSourceChain_Statics
	{
		struct IKRetargeterController_eventSetSourceChain_Parms
		{
			FName SourceChainName;
			FName TargetChainName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SourceChainName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_TargetChainName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRetargeterController_SetSourceChain_Statics::NewProp_SourceChainName = { "SourceChainName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeterController_eventSetSourceChain_Parms, SourceChainName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRetargeterController_SetSourceChain_Statics::NewProp_TargetChainName = { "TargetChainName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeterController_eventSetSourceChain_Parms, TargetChainName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UIKRetargeterController_SetSourceChain_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((IKRetargeterController_eventSetSourceChain_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIKRetargeterController_SetSourceChain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(IKRetargeterController_eventSetSourceChain_Parms), &Z_Construct_UFunction_UIKRetargeterController_SetSourceChain_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRetargeterController_SetSourceChain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_SetSourceChain_Statics::NewProp_SourceChainName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_SetSourceChain_Statics::NewProp_TargetChainName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeterController_SetSourceChain_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeterController_SetSourceChain_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRetargeter" },
		{ "Comment", "// Assign a source chain to the given target chain. Animation will be copied from the source to the target.\n" },
		{ "ModuleRelativePath", "Public/RetargetEditor/IKRetargeterController.h" },
		{ "ToolTip", "Assign a source chain to the given target chain. Animation will be copied from the source to the target." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRetargeterController_SetSourceChain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRetargeterController, nullptr, "SetSourceChain", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRetargeterController_SetSourceChain_Statics::IKRetargeterController_eventSetSourceChain_Parms), Z_Construct_UFunction_UIKRetargeterController_SetSourceChain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_SetSourceChain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeterController_SetSourceChain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeterController_SetSourceChain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRetargeterController_SetSourceChain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRetargeterController_SetSourceChain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIKRetargeterController);
	UClass* Z_Construct_UClass_UIKRetargeterController_NoRegister()
	{
		return UIKRetargeterController::StaticClass();
	}
	struct Z_Construct_UClass_UIKRetargeterController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIKRetargeterController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IKRigEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIKRetargeterController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIKRetargeterController_AutoMapChains, "AutoMapChains" }, // 3370653445
		{ &Z_Construct_UFunction_UIKRetargeterController_CreateRetargetPose, "CreateRetargetPose" }, // 2139638396
		{ &Z_Construct_UFunction_UIKRetargeterController_DuplicateRetargetPose, "DuplicateRetargetPose" }, // 1350236203
		{ &Z_Construct_UFunction_UIKRetargeterController_GetAllChainSettings, "GetAllChainSettings" }, // 3567341695
		{ &Z_Construct_UFunction_UIKRetargeterController_GetController, "GetController" }, // 2214814272
		{ &Z_Construct_UFunction_UIKRetargeterController_GetCurrentRetargetPose, "GetCurrentRetargetPose" }, // 3502413930
		{ &Z_Construct_UFunction_UIKRetargeterController_GetCurrentRetargetPoseName, "GetCurrentRetargetPoseName" }, // 557503549
		{ &Z_Construct_UFunction_UIKRetargeterController_GetGlobalSettings, "GetGlobalSettings" }, // 2889064181
		{ &Z_Construct_UFunction_UIKRetargeterController_GetIKRig, "GetIKRig" }, // 411016713
		{ &Z_Construct_UFunction_UIKRetargeterController_GetPreviewMesh, "GetPreviewMesh" }, // 28283526
		{ &Z_Construct_UFunction_UIKRetargeterController_GetRetargetChainSettings, "GetRetargetChainSettings" }, // 2168342115
		{ &Z_Construct_UFunction_UIKRetargeterController_GetRetargetPoses, "GetRetargetPoses" }, // 3600902519
		{ &Z_Construct_UFunction_UIKRetargeterController_GetRootOffsetInRetargetPose, "GetRootOffsetInRetargetPose" }, // 2810787560
		{ &Z_Construct_UFunction_UIKRetargeterController_GetRootSettings, "GetRootSettings" }, // 2004087352
		{ &Z_Construct_UFunction_UIKRetargeterController_GetRotationOffsetForRetargetPoseBone, "GetRotationOffsetForRetargetPoseBone" }, // 722436287
		{ &Z_Construct_UFunction_UIKRetargeterController_GetSourceChain, "GetSourceChain" }, // 3998609103
		{ &Z_Construct_UFunction_UIKRetargeterController_RemoveRetargetPose, "RemoveRetargetPose" }, // 4115634335
		{ &Z_Construct_UFunction_UIKRetargeterController_RenameRetargetPose, "RenameRetargetPose" }, // 101130580
		{ &Z_Construct_UFunction_UIKRetargeterController_ResetRetargetPose, "ResetRetargetPose" }, // 2542359585
		{ &Z_Construct_UFunction_UIKRetargeterController_SetCurrentRetargetPose, "SetCurrentRetargetPose" }, // 3230355614
		{ &Z_Construct_UFunction_UIKRetargeterController_SetGlobalSettings, "SetGlobalSettings" }, // 2294505980
		{ &Z_Construct_UFunction_UIKRetargeterController_SetIKRig, "SetIKRig" }, // 3223428095
		{ &Z_Construct_UFunction_UIKRetargeterController_SetPreviewMesh, "SetPreviewMesh" }, // 1065983047
		{ &Z_Construct_UFunction_UIKRetargeterController_SetRetargetChainSettings, "SetRetargetChainSettings" }, // 2989854658
		{ &Z_Construct_UFunction_UIKRetargeterController_SetRootOffsetInRetargetPose, "SetRootOffsetInRetargetPose" }, // 3885038820
		{ &Z_Construct_UFunction_UIKRetargeterController_SetRootSettings, "SetRootSettings" }, // 1204920999
		{ &Z_Construct_UFunction_UIKRetargeterController_SetRotationOffsetForRetargetPoseBone, "SetRotationOffsetForRetargetPoseBone" }, // 4064550527
		{ &Z_Construct_UFunction_UIKRetargeterController_SetSourceChain, "SetSourceChain" }, // 1709107767
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargeterController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// A stateless singleton (1-per-asset) class used to make modifications to a UIKRetargeter asset.\n// Use UIKRetargeter.GetController() to get the controller for the asset you want to modify.  \n" },
		{ "HideCategories", "UObject" },
		{ "IncludePath", "RetargetEditor/IKRetargeterController.h" },
		{ "ModuleRelativePath", "Public/RetargetEditor/IKRetargeterController.h" },
		{ "ToolTip", "A stateless singleton (1-per-asset) class used to make modifications to a UIKRetargeter asset.\nUse UIKRetargeter.GetController() to get the controller for the asset you want to modify." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIKRetargeterController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIKRetargeterController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIKRetargeterController_Statics::ClassParams = {
		&UIKRetargeterController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIKRetargeterController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargeterController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIKRetargeterController()
	{
		if (!Z_Registration_Info_UClass_UIKRetargeterController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIKRetargeterController.OuterSingleton, Z_Construct_UClass_UIKRetargeterController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIKRetargeterController.OuterSingleton;
	}
	template<> IKRIGEDITOR_API UClass* StaticClass<UIKRetargeterController>()
	{
		return UIKRetargeterController::StaticClass();
	}
	UIKRetargeterController::UIKRetargeterController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIKRetargeterController);
	UIKRetargeterController::~UIKRetargeterController() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargeterController_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargeterController_h_Statics::EnumInfo[] = {
		{ EAutoMapChainType_StaticEnum, TEXT("EAutoMapChainType"), &Z_Registration_Info_UEnum_EAutoMapChainType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2484919149U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargeterController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIKRetargeterController, UIKRetargeterController::StaticClass, TEXT("UIKRetargeterController"), &Z_Registration_Info_UClass_UIKRetargeterController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIKRetargeterController), 1003997212U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargeterController_h_890243645(TEXT("/Script/IKRigEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargeterController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargeterController_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargeterController_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargeterController_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
