// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRigBlueprintEditorLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigBlueprintEditorLibrary() {}
// Cross Module References
	CONTROLRIG_API UClass* Z_Construct_UClass_URigHierarchy_NoRegister();
	CONTROLRIG_API UClass* Z_Construct_UClass_URigHierarchyController_NoRegister();
	CONTROLRIGDEVELOPER_API UClass* Z_Construct_UClass_UControlRigBlueprint_NoRegister();
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigBlueprintEditorLibrary();
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigBlueprintEditorLibrary_NoRegister();
	CONTROLRIGEDITOR_API UEnum* Z_Construct_UEnum_ControlRigEditor_ECastToControlRigBlueprintCases();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UStruct();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMController_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMGraph_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ControlRigEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECastToControlRigBlueprintCases;
	static UEnum* ECastToControlRigBlueprintCases_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECastToControlRigBlueprintCases.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECastToControlRigBlueprintCases.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRigEditor_ECastToControlRigBlueprintCases, (UObject*)Z_Construct_UPackage__Script_ControlRigEditor(), TEXT("ECastToControlRigBlueprintCases"));
		}
		return Z_Registration_Info_UEnum_ECastToControlRigBlueprintCases.OuterSingleton;
	}
	template<> CONTROLRIGEDITOR_API UEnum* StaticEnum<ECastToControlRigBlueprintCases>()
	{
		return ECastToControlRigBlueprintCases_StaticEnum();
	}
	struct Z_Construct_UEnum_ControlRigEditor_ECastToControlRigBlueprintCases_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ControlRigEditor_ECastToControlRigBlueprintCases_Statics::Enumerators[] = {
		{ "ECastToControlRigBlueprintCases::CastSucceeded", (int64)ECastToControlRigBlueprintCases::CastSucceeded },
		{ "ECastToControlRigBlueprintCases::CastFailed", (int64)ECastToControlRigBlueprintCases::CastFailed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ControlRigEditor_ECastToControlRigBlueprintCases_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CastFailed.Name", "ECastToControlRigBlueprintCases::CastFailed" },
		{ "CastSucceeded.Name", "ECastToControlRigBlueprintCases::CastSucceeded" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprintEditorLibrary.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRigEditor_ECastToControlRigBlueprintCases_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ControlRigEditor,
		nullptr,
		"ECastToControlRigBlueprintCases",
		"ECastToControlRigBlueprintCases",
		Z_Construct_UEnum_ControlRigEditor_ECastToControlRigBlueprintCases_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRigEditor_ECastToControlRigBlueprintCases_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ControlRigEditor_ECastToControlRigBlueprintCases_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRigEditor_ECastToControlRigBlueprintCases_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ControlRigEditor_ECastToControlRigBlueprintCases()
	{
		if (!Z_Registration_Info_UEnum_ECastToControlRigBlueprintCases.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECastToControlRigBlueprintCases.InnerSingleton, Z_Construct_UEnum_ControlRigEditor_ECastToControlRigBlueprintCases_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECastToControlRigBlueprintCases.InnerSingleton;
	}
	DEFINE_FUNCTION(UControlRigBlueprintEditorLibrary::execGetHierarchyController)
	{
		P_GET_OBJECT(UControlRigBlueprint,Z_Param_InRigBlueprint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigHierarchyController**)Z_Param__Result=UControlRigBlueprintEditorLibrary::GetHierarchyController(Z_Param_InRigBlueprint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigBlueprintEditorLibrary::execGetHierarchy)
	{
		P_GET_OBJECT(UControlRigBlueprint,Z_Param_InRigBlueprint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigHierarchy**)Z_Param__Result=UControlRigBlueprintEditorLibrary::GetHierarchy(Z_Param_InRigBlueprint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigBlueprintEditorLibrary::execGetAvailableRigUnits)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UStruct*>*)Z_Param__Result=UControlRigBlueprintEditorLibrary::GetAvailableRigUnits();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigBlueprintEditorLibrary::execGetCurrentlyOpenRigBlueprints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UControlRigBlueprint*>*)Z_Param__Result=UControlRigBlueprintEditorLibrary::GetCurrentlyOpenRigBlueprints();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigBlueprintEditorLibrary::execGetController)
	{
		P_GET_OBJECT(UControlRigBlueprint,Z_Param_InRigBlueprint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigVMController**)Z_Param__Result=UControlRigBlueprintEditorLibrary::GetController(Z_Param_InRigBlueprint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigBlueprintEditorLibrary::execGetModel)
	{
		P_GET_OBJECT(UControlRigBlueprint,Z_Param_InRigBlueprint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigVMGraph**)Z_Param__Result=UControlRigBlueprintEditorLibrary::GetModel(Z_Param_InRigBlueprint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigBlueprintEditorLibrary::execRequestControlRigInit)
	{
		P_GET_OBJECT(UControlRigBlueprint,Z_Param_InRigBlueprint);
		P_FINISH;
		P_NATIVE_BEGIN;
		UControlRigBlueprintEditorLibrary::RequestControlRigInit(Z_Param_InRigBlueprint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigBlueprintEditorLibrary::execRequestAutoVMRecompilation)
	{
		P_GET_OBJECT(UControlRigBlueprint,Z_Param_InRigBlueprint);
		P_FINISH;
		P_NATIVE_BEGIN;
		UControlRigBlueprintEditorLibrary::RequestAutoVMRecompilation(Z_Param_InRigBlueprint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigBlueprintEditorLibrary::execRecompileVMIfRequired)
	{
		P_GET_OBJECT(UControlRigBlueprint,Z_Param_InRigBlueprint);
		P_FINISH;
		P_NATIVE_BEGIN;
		UControlRigBlueprintEditorLibrary::RecompileVMIfRequired(Z_Param_InRigBlueprint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigBlueprintEditorLibrary::execRecompileVM)
	{
		P_GET_OBJECT(UControlRigBlueprint,Z_Param_InRigBlueprint);
		P_FINISH;
		P_NATIVE_BEGIN;
		UControlRigBlueprintEditorLibrary::RecompileVM(Z_Param_InRigBlueprint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigBlueprintEditorLibrary::execGetPreviewMesh)
	{
		P_GET_OBJECT(UControlRigBlueprint,Z_Param_InRigBlueprint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMesh**)Z_Param__Result=UControlRigBlueprintEditorLibrary::GetPreviewMesh(Z_Param_InRigBlueprint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigBlueprintEditorLibrary::execSetPreviewMesh)
	{
		P_GET_OBJECT(UControlRigBlueprint,Z_Param_InRigBlueprint);
		P_GET_OBJECT(USkeletalMesh,Z_Param_PreviewMesh);
		P_GET_UBOOL(Z_Param_bMarkAsDirty);
		P_FINISH;
		P_NATIVE_BEGIN;
		UControlRigBlueprintEditorLibrary::SetPreviewMesh(Z_Param_InRigBlueprint,Z_Param_PreviewMesh,Z_Param_bMarkAsDirty);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigBlueprintEditorLibrary::execCastToControlRigBlueprint)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_GET_ENUM_REF(ECastToControlRigBlueprintCases,Z_Param_Out_Branches);
		P_GET_OBJECT_REF(UControlRigBlueprint,Z_Param_Out_AsControlRigBlueprint);
		P_FINISH;
		P_NATIVE_BEGIN;
		UControlRigBlueprintEditorLibrary::CastToControlRigBlueprint(Z_Param_Object,(ECastToControlRigBlueprintCases&)(Z_Param_Out_Branches),Z_Param_Out_AsControlRigBlueprint);
		P_NATIVE_END;
	}
	void UControlRigBlueprintEditorLibrary::StaticRegisterNativesUControlRigBlueprintEditorLibrary()
	{
		UClass* Class = UControlRigBlueprintEditorLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CastToControlRigBlueprint", &UControlRigBlueprintEditorLibrary::execCastToControlRigBlueprint },
			{ "GetAvailableRigUnits", &UControlRigBlueprintEditorLibrary::execGetAvailableRigUnits },
			{ "GetController", &UControlRigBlueprintEditorLibrary::execGetController },
			{ "GetCurrentlyOpenRigBlueprints", &UControlRigBlueprintEditorLibrary::execGetCurrentlyOpenRigBlueprints },
			{ "GetHierarchy", &UControlRigBlueprintEditorLibrary::execGetHierarchy },
			{ "GetHierarchyController", &UControlRigBlueprintEditorLibrary::execGetHierarchyController },
			{ "GetModel", &UControlRigBlueprintEditorLibrary::execGetModel },
			{ "GetPreviewMesh", &UControlRigBlueprintEditorLibrary::execGetPreviewMesh },
			{ "RecompileVM", &UControlRigBlueprintEditorLibrary::execRecompileVM },
			{ "RecompileVMIfRequired", &UControlRigBlueprintEditorLibrary::execRecompileVMIfRequired },
			{ "RequestAutoVMRecompilation", &UControlRigBlueprintEditorLibrary::execRequestAutoVMRecompilation },
			{ "RequestControlRigInit", &UControlRigBlueprintEditorLibrary::execRequestControlRigInit },
			{ "SetPreviewMesh", &UControlRigBlueprintEditorLibrary::execSetPreviewMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_CastToControlRigBlueprint_Statics
	{
		struct ControlRigBlueprintEditorLibrary_eventCastToControlRigBlueprint_Parms
		{
			UObject* Object;
			ECastToControlRigBlueprintCases Branches;
			UControlRigBlueprint* AsControlRigBlueprint;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AsControlRigBlueprint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_CastToControlRigBlueprint_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigBlueprintEditorLibrary_eventCastToControlRigBlueprint_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_CastToControlRigBlueprint_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_CastToControlRigBlueprint_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigBlueprintEditorLibrary_eventCastToControlRigBlueprint_Parms, Branches), Z_Construct_UEnum_ControlRigEditor_ECastToControlRigBlueprintCases, METADATA_PARAMS(nullptr, 0) }; // 510518329
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_CastToControlRigBlueprint_Statics::NewProp_AsControlRigBlueprint = { "AsControlRigBlueprint", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigBlueprintEditorLibrary_eventCastToControlRigBlueprint_Parms, AsControlRigBlueprint), Z_Construct_UClass_UControlRigBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_CastToControlRigBlueprint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_CastToControlRigBlueprint_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_CastToControlRigBlueprint_Statics::NewProp_Branches_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_CastToControlRigBlueprint_Statics::NewProp_Branches,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_CastToControlRigBlueprint_Statics::NewProp_AsControlRigBlueprint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_CastToControlRigBlueprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig Blueprint" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprintEditorLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_CastToControlRigBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigBlueprintEditorLibrary, nullptr, "CastToControlRigBlueprint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_CastToControlRigBlueprint_Statics::ControlRigBlueprintEditorLibrary_eventCastToControlRigBlueprint_Parms), Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_CastToControlRigBlueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_CastToControlRigBlueprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_CastToControlRigBlueprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_CastToControlRigBlueprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_CastToControlRigBlueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_CastToControlRigBlueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetAvailableRigUnits_Statics
	{
		struct ControlRigBlueprintEditorLibrary_eventGetAvailableRigUnits_Parms
		{
			TArray<UStruct*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetAvailableRigUnits_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UStruct, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetAvailableRigUnits_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigBlueprintEditorLibrary_eventGetAvailableRigUnits_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetAvailableRigUnits_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetAvailableRigUnits_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetAvailableRigUnits_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetAvailableRigUnits_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig Blueprint" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprintEditorLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetAvailableRigUnits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigBlueprintEditorLibrary, nullptr, "GetAvailableRigUnits", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetAvailableRigUnits_Statics::ControlRigBlueprintEditorLibrary_eventGetAvailableRigUnits_Parms), Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetAvailableRigUnits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetAvailableRigUnits_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetAvailableRigUnits_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetAvailableRigUnits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetAvailableRigUnits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetAvailableRigUnits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetController_Statics
	{
		struct ControlRigBlueprintEditorLibrary_eventGetController_Parms
		{
			UControlRigBlueprint* InRigBlueprint;
			URigVMController* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InRigBlueprint;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetController_Statics::NewProp_InRigBlueprint = { "InRigBlueprint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigBlueprintEditorLibrary_eventGetController_Parms, InRigBlueprint), Z_Construct_UClass_UControlRigBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigBlueprintEditorLibrary_eventGetController_Parms, ReturnValue), Z_Construct_UClass_URigVMController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetController_Statics::NewProp_InRigBlueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetController_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig Blueprint" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprintEditorLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigBlueprintEditorLibrary, nullptr, "GetController", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetController_Statics::ControlRigBlueprintEditorLibrary_eventGetController_Parms), Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetCurrentlyOpenRigBlueprints_Statics
	{
		struct ControlRigBlueprintEditorLibrary_eventGetCurrentlyOpenRigBlueprints_Parms
		{
			TArray<UControlRigBlueprint*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetCurrentlyOpenRigBlueprints_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UControlRigBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetCurrentlyOpenRigBlueprints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigBlueprintEditorLibrary_eventGetCurrentlyOpenRigBlueprints_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetCurrentlyOpenRigBlueprints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetCurrentlyOpenRigBlueprints_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetCurrentlyOpenRigBlueprints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetCurrentlyOpenRigBlueprints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig Blueprint" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprintEditorLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetCurrentlyOpenRigBlueprints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigBlueprintEditorLibrary, nullptr, "GetCurrentlyOpenRigBlueprints", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetCurrentlyOpenRigBlueprints_Statics::ControlRigBlueprintEditorLibrary_eventGetCurrentlyOpenRigBlueprints_Parms), Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetCurrentlyOpenRigBlueprints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetCurrentlyOpenRigBlueprints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetCurrentlyOpenRigBlueprints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetCurrentlyOpenRigBlueprints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetCurrentlyOpenRigBlueprints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetCurrentlyOpenRigBlueprints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetHierarchy_Statics
	{
		struct ControlRigBlueprintEditorLibrary_eventGetHierarchy_Parms
		{
			UControlRigBlueprint* InRigBlueprint;
			URigHierarchy* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InRigBlueprint;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetHierarchy_Statics::NewProp_InRigBlueprint = { "InRigBlueprint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigBlueprintEditorLibrary_eventGetHierarchy_Parms, InRigBlueprint), Z_Construct_UClass_UControlRigBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetHierarchy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigBlueprintEditorLibrary_eventGetHierarchy_Parms, ReturnValue), Z_Construct_UClass_URigHierarchy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetHierarchy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetHierarchy_Statics::NewProp_InRigBlueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetHierarchy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetHierarchy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig Blueprint" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprintEditorLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetHierarchy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigBlueprintEditorLibrary, nullptr, "GetHierarchy", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetHierarchy_Statics::ControlRigBlueprintEditorLibrary_eventGetHierarchy_Parms), Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetHierarchy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetHierarchy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetHierarchy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetHierarchy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetHierarchy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetHierarchy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetHierarchyController_Statics
	{
		struct ControlRigBlueprintEditorLibrary_eventGetHierarchyController_Parms
		{
			UControlRigBlueprint* InRigBlueprint;
			URigHierarchyController* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InRigBlueprint;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetHierarchyController_Statics::NewProp_InRigBlueprint = { "InRigBlueprint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigBlueprintEditorLibrary_eventGetHierarchyController_Parms, InRigBlueprint), Z_Construct_UClass_UControlRigBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetHierarchyController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigBlueprintEditorLibrary_eventGetHierarchyController_Parms, ReturnValue), Z_Construct_UClass_URigHierarchyController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetHierarchyController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetHierarchyController_Statics::NewProp_InRigBlueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetHierarchyController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetHierarchyController_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig Blueprint" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprintEditorLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetHierarchyController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigBlueprintEditorLibrary, nullptr, "GetHierarchyController", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetHierarchyController_Statics::ControlRigBlueprintEditorLibrary_eventGetHierarchyController_Parms), Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetHierarchyController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetHierarchyController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetHierarchyController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetHierarchyController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetHierarchyController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetHierarchyController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetModel_Statics
	{
		struct ControlRigBlueprintEditorLibrary_eventGetModel_Parms
		{
			UControlRigBlueprint* InRigBlueprint;
			URigVMGraph* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InRigBlueprint;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetModel_Statics::NewProp_InRigBlueprint = { "InRigBlueprint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigBlueprintEditorLibrary_eventGetModel_Parms, InRigBlueprint), Z_Construct_UClass_UControlRigBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetModel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigBlueprintEditorLibrary_eventGetModel_Parms, ReturnValue), Z_Construct_UClass_URigVMGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetModel_Statics::NewProp_InRigBlueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetModel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetModel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig Blueprint" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprintEditorLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigBlueprintEditorLibrary, nullptr, "GetModel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetModel_Statics::ControlRigBlueprintEditorLibrary_eventGetModel_Parms), Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetModel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetModel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetModel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetPreviewMesh_Statics
	{
		struct ControlRigBlueprintEditorLibrary_eventGetPreviewMesh_Parms
		{
			UControlRigBlueprint* InRigBlueprint;
			USkeletalMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InRigBlueprint;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetPreviewMesh_Statics::NewProp_InRigBlueprint = { "InRigBlueprint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigBlueprintEditorLibrary_eventGetPreviewMesh_Parms, InRigBlueprint), Z_Construct_UClass_UControlRigBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetPreviewMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigBlueprintEditorLibrary_eventGetPreviewMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetPreviewMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetPreviewMesh_Statics::NewProp_InRigBlueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetPreviewMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetPreviewMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig Blueprint" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprintEditorLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetPreviewMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigBlueprintEditorLibrary, nullptr, "GetPreviewMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetPreviewMesh_Statics::ControlRigBlueprintEditorLibrary_eventGetPreviewMesh_Parms), Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetPreviewMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetPreviewMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetPreviewMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetPreviewMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetPreviewMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetPreviewMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_RecompileVM_Statics
	{
		struct ControlRigBlueprintEditorLibrary_eventRecompileVM_Parms
		{
			UControlRigBlueprint* InRigBlueprint;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InRigBlueprint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_RecompileVM_Statics::NewProp_InRigBlueprint = { "InRigBlueprint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigBlueprintEditorLibrary_eventRecompileVM_Parms, InRigBlueprint), Z_Construct_UClass_UControlRigBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_RecompileVM_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_RecompileVM_Statics::NewProp_InRigBlueprint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_RecompileVM_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig Blueprint" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprintEditorLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_RecompileVM_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigBlueprintEditorLibrary, nullptr, "RecompileVM", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_RecompileVM_Statics::ControlRigBlueprintEditorLibrary_eventRecompileVM_Parms), Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_RecompileVM_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_RecompileVM_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_RecompileVM_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_RecompileVM_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_RecompileVM()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_RecompileVM_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_RecompileVMIfRequired_Statics
	{
		struct ControlRigBlueprintEditorLibrary_eventRecompileVMIfRequired_Parms
		{
			UControlRigBlueprint* InRigBlueprint;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InRigBlueprint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_RecompileVMIfRequired_Statics::NewProp_InRigBlueprint = { "InRigBlueprint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigBlueprintEditorLibrary_eventRecompileVMIfRequired_Parms, InRigBlueprint), Z_Construct_UClass_UControlRigBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_RecompileVMIfRequired_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_RecompileVMIfRequired_Statics::NewProp_InRigBlueprint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_RecompileVMIfRequired_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig Blueprint" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprintEditorLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_RecompileVMIfRequired_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigBlueprintEditorLibrary, nullptr, "RecompileVMIfRequired", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_RecompileVMIfRequired_Statics::ControlRigBlueprintEditorLibrary_eventRecompileVMIfRequired_Parms), Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_RecompileVMIfRequired_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_RecompileVMIfRequired_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_RecompileVMIfRequired_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_RecompileVMIfRequired_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_RecompileVMIfRequired()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_RecompileVMIfRequired_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_RequestAutoVMRecompilation_Statics
	{
		struct ControlRigBlueprintEditorLibrary_eventRequestAutoVMRecompilation_Parms
		{
			UControlRigBlueprint* InRigBlueprint;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InRigBlueprint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_RequestAutoVMRecompilation_Statics::NewProp_InRigBlueprint = { "InRigBlueprint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigBlueprintEditorLibrary_eventRequestAutoVMRecompilation_Parms, InRigBlueprint), Z_Construct_UClass_UControlRigBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_RequestAutoVMRecompilation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_RequestAutoVMRecompilation_Statics::NewProp_InRigBlueprint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_RequestAutoVMRecompilation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig Blueprint" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprintEditorLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_RequestAutoVMRecompilation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigBlueprintEditorLibrary, nullptr, "RequestAutoVMRecompilation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_RequestAutoVMRecompilation_Statics::ControlRigBlueprintEditorLibrary_eventRequestAutoVMRecompilation_Parms), Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_RequestAutoVMRecompilation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_RequestAutoVMRecompilation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_RequestAutoVMRecompilation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_RequestAutoVMRecompilation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_RequestAutoVMRecompilation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_RequestAutoVMRecompilation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_RequestControlRigInit_Statics
	{
		struct ControlRigBlueprintEditorLibrary_eventRequestControlRigInit_Parms
		{
			UControlRigBlueprint* InRigBlueprint;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InRigBlueprint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_RequestControlRigInit_Statics::NewProp_InRigBlueprint = { "InRigBlueprint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigBlueprintEditorLibrary_eventRequestControlRigInit_Parms, InRigBlueprint), Z_Construct_UClass_UControlRigBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_RequestControlRigInit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_RequestControlRigInit_Statics::NewProp_InRigBlueprint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_RequestControlRigInit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig Blueprint" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprintEditorLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_RequestControlRigInit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigBlueprintEditorLibrary, nullptr, "RequestControlRigInit", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_RequestControlRigInit_Statics::ControlRigBlueprintEditorLibrary_eventRequestControlRigInit_Parms), Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_RequestControlRigInit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_RequestControlRigInit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_RequestControlRigInit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_RequestControlRigInit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_RequestControlRigInit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_RequestControlRigInit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_SetPreviewMesh_Statics
	{
		struct ControlRigBlueprintEditorLibrary_eventSetPreviewMesh_Parms
		{
			UControlRigBlueprint* InRigBlueprint;
			USkeletalMesh* PreviewMesh;
			bool bMarkAsDirty;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InRigBlueprint;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewMesh;
		static void NewProp_bMarkAsDirty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMarkAsDirty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_SetPreviewMesh_Statics::NewProp_InRigBlueprint = { "InRigBlueprint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigBlueprintEditorLibrary_eventSetPreviewMesh_Parms, InRigBlueprint), Z_Construct_UClass_UControlRigBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_SetPreviewMesh_Statics::NewProp_PreviewMesh = { "PreviewMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigBlueprintEditorLibrary_eventSetPreviewMesh_Parms, PreviewMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_SetPreviewMesh_Statics::NewProp_bMarkAsDirty_SetBit(void* Obj)
	{
		((ControlRigBlueprintEditorLibrary_eventSetPreviewMesh_Parms*)Obj)->bMarkAsDirty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_SetPreviewMesh_Statics::NewProp_bMarkAsDirty = { "bMarkAsDirty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigBlueprintEditorLibrary_eventSetPreviewMesh_Parms), &Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_SetPreviewMesh_Statics::NewProp_bMarkAsDirty_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_SetPreviewMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_SetPreviewMesh_Statics::NewProp_InRigBlueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_SetPreviewMesh_Statics::NewProp_PreviewMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_SetPreviewMesh_Statics::NewProp_bMarkAsDirty,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_SetPreviewMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig Blueprint" },
		{ "CPP_Default_bMarkAsDirty", "true" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprintEditorLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_SetPreviewMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigBlueprintEditorLibrary, nullptr, "SetPreviewMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_SetPreviewMesh_Statics::ControlRigBlueprintEditorLibrary_eventSetPreviewMesh_Parms), Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_SetPreviewMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_SetPreviewMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_SetPreviewMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_SetPreviewMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_SetPreviewMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_SetPreviewMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigBlueprintEditorLibrary);
	UClass* Z_Construct_UClass_UControlRigBlueprintEditorLibrary_NoRegister()
	{
		return UControlRigBlueprintEditorLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UControlRigBlueprintEditorLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControlRigBlueprintEditorLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UControlRigBlueprintEditorLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_CastToControlRigBlueprint, "CastToControlRigBlueprint" }, // 3470741999
		{ &Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetAvailableRigUnits, "GetAvailableRigUnits" }, // 3631946110
		{ &Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetController, "GetController" }, // 315598335
		{ &Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetCurrentlyOpenRigBlueprints, "GetCurrentlyOpenRigBlueprints" }, // 4214598597
		{ &Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetHierarchy, "GetHierarchy" }, // 3622917662
		{ &Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetHierarchyController, "GetHierarchyController" }, // 3342072681
		{ &Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetModel, "GetModel" }, // 1158177996
		{ &Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_GetPreviewMesh, "GetPreviewMesh" }, // 3681930058
		{ &Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_RecompileVM, "RecompileVM" }, // 573854433
		{ &Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_RecompileVMIfRequired, "RecompileVMIfRequired" }, // 491791280
		{ &Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_RequestAutoVMRecompilation, "RequestAutoVMRecompilation" }, // 384989090
		{ &Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_RequestControlRigInit, "RequestControlRigInit" }, // 1229391947
		{ &Z_Construct_UFunction_UControlRigBlueprintEditorLibrary_SetPreviewMesh, "SetPreviewMesh" }, // 1267235030
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigBlueprintEditorLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ControlRigBlueprintEditorLibrary.h" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprintEditorLibrary.h" },
		{ "ScriptName", "ControlRigBlueprintLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControlRigBlueprintEditorLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigBlueprintEditorLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigBlueprintEditorLibrary_Statics::ClassParams = {
		&UControlRigBlueprintEditorLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UControlRigBlueprintEditorLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprintEditorLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UControlRigBlueprintEditorLibrary()
	{
		if (!Z_Registration_Info_UClass_UControlRigBlueprintEditorLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigBlueprintEditorLibrary.OuterSingleton, Z_Construct_UClass_UControlRigBlueprintEditorLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UControlRigBlueprintEditorLibrary.OuterSingleton;
	}
	template<> CONTROLRIGEDITOR_API UClass* StaticClass<UControlRigBlueprintEditorLibrary>()
	{
		return UControlRigBlueprintEditorLibrary::StaticClass();
	}
	UControlRigBlueprintEditorLibrary::UControlRigBlueprintEditorLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigBlueprintEditorLibrary);
	UControlRigBlueprintEditorLibrary::~UControlRigBlueprintEditorLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigBlueprintEditorLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigBlueprintEditorLibrary_h_Statics::EnumInfo[] = {
		{ ECastToControlRigBlueprintCases_StaticEnum, TEXT("ECastToControlRigBlueprintCases"), &Z_Registration_Info_UEnum_ECastToControlRigBlueprintCases, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 510518329U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigBlueprintEditorLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UControlRigBlueprintEditorLibrary, UControlRigBlueprintEditorLibrary::StaticClass, TEXT("UControlRigBlueprintEditorLibrary"), &Z_Registration_Info_UClass_UControlRigBlueprintEditorLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigBlueprintEditorLibrary), 286659415U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigBlueprintEditorLibrary_h_3352540100(TEXT("/Script/ControlRigEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigBlueprintEditorLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigBlueprintEditorLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigBlueprintEditorLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigBlueprintEditorLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
