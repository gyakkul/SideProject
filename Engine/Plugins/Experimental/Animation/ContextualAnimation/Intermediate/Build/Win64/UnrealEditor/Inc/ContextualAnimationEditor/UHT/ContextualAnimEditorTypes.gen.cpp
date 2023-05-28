// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ContextualAnimEditorTypes.h"
#include "../../Source/Runtime/Engine/Public/BoneContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContextualAnimEditorTypes() {}
// Cross Module References
	CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimSceneAsset_NoRegister();
	CONTEXTUALANIMATION_API UEnum* Z_Construct_UEnum_ContextualAnimation_EContextualAnimIKTargetProvider();
	CONTEXTUALANIMATIONEDITOR_API UClass* Z_Construct_UClass_UContextualAnimNewIKTargetParams();
	CONTEXTUALANIMATIONEDITOR_API UClass* Z_Construct_UClass_UContextualAnimNewIKTargetParams_NoRegister();
	CONTEXTUALANIMATIONEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimNewAnimSetData();
	CONTEXTUALANIMATIONEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimNewAnimSetParams();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoneReferenceSkeletonProvider_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	UPackage* Z_Construct_UPackage__Script_ContextualAnimationEditor();
// End Cross Module References
	DEFINE_FUNCTION(UContextualAnimNewIKTargetParams::execGetTargetRoleOptions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetTargetRoleOptions();
		P_NATIVE_END;
	}
	void UContextualAnimNewIKTargetParams::StaticRegisterNativesUContextualAnimNewIKTargetParams()
	{
		UClass* Class = UContextualAnimNewIKTargetParams::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTargetRoleOptions", &UContextualAnimNewIKTargetParams::execGetTargetRoleOptions },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UContextualAnimNewIKTargetParams_GetTargetRoleOptions_Statics
	{
		struct ContextualAnimNewIKTargetParams_eventGetTargetRoleOptions_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UContextualAnimNewIKTargetParams_GetTargetRoleOptions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UContextualAnimNewIKTargetParams_GetTargetRoleOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimNewIKTargetParams_eventGetTargetRoleOptions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextualAnimNewIKTargetParams_GetTargetRoleOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimNewIKTargetParams_GetTargetRoleOptions_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimNewIKTargetParams_GetTargetRoleOptions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimNewIKTargetParams_GetTargetRoleOptions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ContextualAnimEditorTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextualAnimNewIKTargetParams_GetTargetRoleOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextualAnimNewIKTargetParams, nullptr, "GetTargetRoleOptions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextualAnimNewIKTargetParams_GetTargetRoleOptions_Statics::ContextualAnimNewIKTargetParams_eventGetTargetRoleOptions_Parms), Z_Construct_UFunction_UContextualAnimNewIKTargetParams_GetTargetRoleOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimNewIKTargetParams_GetTargetRoleOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimNewIKTargetParams_GetTargetRoleOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimNewIKTargetParams_GetTargetRoleOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextualAnimNewIKTargetParams_GetTargetRoleOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextualAnimNewIKTargetParams_GetTargetRoleOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContextualAnimNewIKTargetParams);
	UClass* Z_Construct_UClass_UContextualAnimNewIKTargetParams_NoRegister()
	{
		return UContextualAnimNewIKTargetParams::StaticClass();
	}
	struct Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceRole_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SourceRole;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceBone;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Provider_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Provider_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Provider;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetRole_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TargetRole;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GoalName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GoalName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionIdx_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIdx;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneAssetPtr_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_SceneAssetPtr;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CachedRoles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedRoles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedRoles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ContextualAnimationEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UContextualAnimNewIKTargetParams_GetTargetRoleOptions, "GetTargetRoleOptions" }, // 2271677498
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Object used to construct the New IK Target Widget */" },
		{ "IncludePath", "ContextualAnimEditorTypes.h" },
		{ "ModuleRelativePath", "Public/ContextualAnimEditorTypes.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Object used to construct the New IK Target Widget" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics::NewProp_SourceRole_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/ContextualAnimEditorTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics::NewProp_SourceRole = { "SourceRole", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContextualAnimNewIKTargetParams, SourceRole), METADATA_PARAMS(Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics::NewProp_SourceRole_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics::NewProp_SourceRole_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics::NewProp_SourceBone_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/ContextualAnimEditorTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics::NewProp_SourceBone = { "SourceBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContextualAnimNewIKTargetParams, SourceBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics::NewProp_SourceBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics::NewProp_SourceBone_MetaData)) }; // 2906976723
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics::NewProp_Provider_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics::NewProp_Provider_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/ContextualAnimEditorTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics::NewProp_Provider = { "Provider", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContextualAnimNewIKTargetParams, Provider), Z_Construct_UEnum_ContextualAnimation_EContextualAnimIKTargetProvider, METADATA_PARAMS(Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics::NewProp_Provider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics::NewProp_Provider_MetaData)) }; // 3488058899
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics::NewProp_TargetRole_MetaData[] = {
		{ "Category", "Settings" },
		{ "GetOptions", "GetTargetRoleOptions" },
		{ "ModuleRelativePath", "Public/ContextualAnimEditorTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics::NewProp_TargetRole = { "TargetRole", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContextualAnimNewIKTargetParams, TargetRole), METADATA_PARAMS(Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics::NewProp_TargetRole_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics::NewProp_TargetRole_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics::NewProp_TargetBone_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/ContextualAnimEditorTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics::NewProp_TargetBone = { "TargetBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContextualAnimNewIKTargetParams, TargetBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics::NewProp_TargetBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics::NewProp_TargetBone_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics::NewProp_GoalName_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/ContextualAnimEditorTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics::NewProp_GoalName = { "GoalName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContextualAnimNewIKTargetParams, GoalName), METADATA_PARAMS(Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics::NewProp_GoalName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics::NewProp_GoalName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics::NewProp_SectionIdx_MetaData[] = {
		{ "ModuleRelativePath", "Public/ContextualAnimEditorTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics::NewProp_SectionIdx = { "SectionIdx", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContextualAnimNewIKTargetParams, SectionIdx), METADATA_PARAMS(Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics::NewProp_SectionIdx_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics::NewProp_SectionIdx_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics::NewProp_SceneAssetPtr_MetaData[] = {
		{ "ModuleRelativePath", "Public/ContextualAnimEditorTypes.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics::NewProp_SceneAssetPtr = { "SceneAssetPtr", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContextualAnimNewIKTargetParams, SceneAssetPtr), Z_Construct_UClass_UContextualAnimSceneAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics::NewProp_SceneAssetPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics::NewProp_SceneAssetPtr_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics::NewProp_CachedRoles_Inner = { "CachedRoles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics::NewProp_CachedRoles_MetaData[] = {
		{ "ModuleRelativePath", "Public/ContextualAnimEditorTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics::NewProp_CachedRoles = { "CachedRoles", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContextualAnimNewIKTargetParams, CachedRoles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics::NewProp_CachedRoles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics::NewProp_CachedRoles_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics::NewProp_SourceRole,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics::NewProp_SourceBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics::NewProp_Provider_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics::NewProp_Provider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics::NewProp_TargetRole,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics::NewProp_TargetBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics::NewProp_GoalName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics::NewProp_SectionIdx,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics::NewProp_SceneAssetPtr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics::NewProp_CachedRoles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics::NewProp_CachedRoles,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBoneReferenceSkeletonProvider_NoRegister, (int32)VTABLE_OFFSET(UContextualAnimNewIKTargetParams, IBoneReferenceSkeletonProvider), false },  // 3827725125
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContextualAnimNewIKTargetParams>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics::ClassParams = {
		&UContextualAnimNewIKTargetParams::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UContextualAnimNewIKTargetParams()
	{
		if (!Z_Registration_Info_UClass_UContextualAnimNewIKTargetParams.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContextualAnimNewIKTargetParams.OuterSingleton, Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UContextualAnimNewIKTargetParams.OuterSingleton;
	}
	template<> CONTEXTUALANIMATIONEDITOR_API UClass* StaticClass<UContextualAnimNewIKTargetParams>()
	{
		return UContextualAnimNewIKTargetParams::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContextualAnimNewIKTargetParams);
	UContextualAnimNewIKTargetParams::~UContextualAnimNewIKTargetParams() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ContextualAnimNewAnimSetData;
class UScriptStruct* FContextualAnimNewAnimSetData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ContextualAnimNewAnimSetData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ContextualAnimNewAnimSetData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FContextualAnimNewAnimSetData, (UObject*)Z_Construct_UPackage__Script_ContextualAnimationEditor(), TEXT("ContextualAnimNewAnimSetData"));
	}
	return Z_Registration_Info_UScriptStruct_ContextualAnimNewAnimSetData.OuterSingleton;
}
template<> CONTEXTUALANIMATIONEDITOR_API UScriptStruct* StaticStruct<FContextualAnimNewAnimSetData>()
{
	return FContextualAnimNewAnimSetData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FContextualAnimNewAnimSetData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoleName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RoleName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Animation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresFlyingMode_MetaData[];
#endif
		static void NewProp_bRequiresFlyingMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresFlyingMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOptional_MetaData[];
#endif
		static void NewProp_bOptional_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOptional;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimNewAnimSetData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ContextualAnimEditorTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FContextualAnimNewAnimSetData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FContextualAnimNewAnimSetData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimNewAnimSetData_Statics::NewProp_RoleName_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/ContextualAnimEditorTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FContextualAnimNewAnimSetData_Statics::NewProp_RoleName = { "RoleName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FContextualAnimNewAnimSetData, RoleName), METADATA_PARAMS(Z_Construct_UScriptStruct_FContextualAnimNewAnimSetData_Statics::NewProp_RoleName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimNewAnimSetData_Statics::NewProp_RoleName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimNewAnimSetData_Statics::NewProp_Animation_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/ContextualAnimEditorTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FContextualAnimNewAnimSetData_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FContextualAnimNewAnimSetData, Animation), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FContextualAnimNewAnimSetData_Statics::NewProp_Animation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimNewAnimSetData_Statics::NewProp_Animation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimNewAnimSetData_Statics::NewProp_bRequiresFlyingMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/ContextualAnimEditorTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FContextualAnimNewAnimSetData_Statics::NewProp_bRequiresFlyingMode_SetBit(void* Obj)
	{
		((FContextualAnimNewAnimSetData*)Obj)->bRequiresFlyingMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FContextualAnimNewAnimSetData_Statics::NewProp_bRequiresFlyingMode = { "bRequiresFlyingMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FContextualAnimNewAnimSetData), &Z_Construct_UScriptStruct_FContextualAnimNewAnimSetData_Statics::NewProp_bRequiresFlyingMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FContextualAnimNewAnimSetData_Statics::NewProp_bRequiresFlyingMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimNewAnimSetData_Statics::NewProp_bRequiresFlyingMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimNewAnimSetData_Statics::NewProp_bOptional_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/ContextualAnimEditorTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FContextualAnimNewAnimSetData_Statics::NewProp_bOptional_SetBit(void* Obj)
	{
		((FContextualAnimNewAnimSetData*)Obj)->bOptional = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FContextualAnimNewAnimSetData_Statics::NewProp_bOptional = { "bOptional", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FContextualAnimNewAnimSetData), &Z_Construct_UScriptStruct_FContextualAnimNewAnimSetData_Statics::NewProp_bOptional_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FContextualAnimNewAnimSetData_Statics::NewProp_bOptional_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimNewAnimSetData_Statics::NewProp_bOptional_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FContextualAnimNewAnimSetData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimNewAnimSetData_Statics::NewProp_RoleName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimNewAnimSetData_Statics::NewProp_Animation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimNewAnimSetData_Statics::NewProp_bRequiresFlyingMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimNewAnimSetData_Statics::NewProp_bOptional,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FContextualAnimNewAnimSetData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ContextualAnimationEditor,
		nullptr,
		&NewStructOps,
		"ContextualAnimNewAnimSetData",
		sizeof(FContextualAnimNewAnimSetData),
		alignof(FContextualAnimNewAnimSetData),
		Z_Construct_UScriptStruct_FContextualAnimNewAnimSetData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimNewAnimSetData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FContextualAnimNewAnimSetData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimNewAnimSetData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimNewAnimSetData()
	{
		if (!Z_Registration_Info_UScriptStruct_ContextualAnimNewAnimSetData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ContextualAnimNewAnimSetData.InnerSingleton, Z_Construct_UScriptStruct_FContextualAnimNewAnimSetData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ContextualAnimNewAnimSetData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ContextualAnimNewAnimSetParams;
class UScriptStruct* FContextualAnimNewAnimSetParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ContextualAnimNewAnimSetParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ContextualAnimNewAnimSetParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FContextualAnimNewAnimSetParams, (UObject*)Z_Construct_UPackage__Script_ContextualAnimationEditor(), TEXT("ContextualAnimNewAnimSetParams"));
	}
	return Z_Registration_Info_UScriptStruct_ContextualAnimNewAnimSetParams.OuterSingleton;
}
template<> CONTEXTUALANIMATIONEDITOR_API UScriptStruct* StaticStruct<FContextualAnimNewAnimSetParams>()
{
	return FContextualAnimNewAnimSetParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FContextualAnimNewAnimSetParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SectionName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RandomWeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimNewAnimSetParams_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct used to construct the widget for adding a new set */" },
		{ "ModuleRelativePath", "Public/ContextualAnimEditorTypes.h" },
		{ "ToolTip", "Struct used to construct the widget for adding a new set" },
	};
#endif
	void* Z_Construct_UScriptStruct_FContextualAnimNewAnimSetParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FContextualAnimNewAnimSetParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimNewAnimSetParams_Statics::NewProp_SectionName_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/ContextualAnimEditorTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FContextualAnimNewAnimSetParams_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FContextualAnimNewAnimSetParams, SectionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FContextualAnimNewAnimSetParams_Statics::NewProp_SectionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimNewAnimSetParams_Statics::NewProp_SectionName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FContextualAnimNewAnimSetParams_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FContextualAnimNewAnimSetData, METADATA_PARAMS(nullptr, 0) }; // 1618655219
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimNewAnimSetParams_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/ContextualAnimEditorTypes.h" },
		{ "TitleProperty", "RoleName" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FContextualAnimNewAnimSetParams_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FContextualAnimNewAnimSetParams, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FContextualAnimNewAnimSetParams_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimNewAnimSetParams_Statics::NewProp_Data_MetaData)) }; // 1618655219
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimNewAnimSetParams_Statics::NewProp_RandomWeight_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/ContextualAnimEditorTypes.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FContextualAnimNewAnimSetParams_Statics::NewProp_RandomWeight = { "RandomWeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FContextualAnimNewAnimSetParams, RandomWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FContextualAnimNewAnimSetParams_Statics::NewProp_RandomWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimNewAnimSetParams_Statics::NewProp_RandomWeight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FContextualAnimNewAnimSetParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimNewAnimSetParams_Statics::NewProp_SectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimNewAnimSetParams_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimNewAnimSetParams_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimNewAnimSetParams_Statics::NewProp_RandomWeight,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FContextualAnimNewAnimSetParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ContextualAnimationEditor,
		nullptr,
		&NewStructOps,
		"ContextualAnimNewAnimSetParams",
		sizeof(FContextualAnimNewAnimSetParams),
		alignof(FContextualAnimNewAnimSetParams),
		Z_Construct_UScriptStruct_FContextualAnimNewAnimSetParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimNewAnimSetParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FContextualAnimNewAnimSetParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimNewAnimSetParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimNewAnimSetParams()
	{
		if (!Z_Registration_Info_UScriptStruct_ContextualAnimNewAnimSetParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ContextualAnimNewAnimSetParams.InnerSingleton, Z_Construct_UScriptStruct_FContextualAnimNewAnimSetParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ContextualAnimNewAnimSetParams.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimationEditor_Public_ContextualAnimEditorTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimationEditor_Public_ContextualAnimEditorTypes_h_Statics::ScriptStructInfo[] = {
		{ FContextualAnimNewAnimSetData::StaticStruct, Z_Construct_UScriptStruct_FContextualAnimNewAnimSetData_Statics::NewStructOps, TEXT("ContextualAnimNewAnimSetData"), &Z_Registration_Info_UScriptStruct_ContextualAnimNewAnimSetData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FContextualAnimNewAnimSetData), 1618655219U) },
		{ FContextualAnimNewAnimSetParams::StaticStruct, Z_Construct_UScriptStruct_FContextualAnimNewAnimSetParams_Statics::NewStructOps, TEXT("ContextualAnimNewAnimSetParams"), &Z_Registration_Info_UScriptStruct_ContextualAnimNewAnimSetParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FContextualAnimNewAnimSetParams), 3989493408U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimationEditor_Public_ContextualAnimEditorTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UContextualAnimNewIKTargetParams, UContextualAnimNewIKTargetParams::StaticClass, TEXT("UContextualAnimNewIKTargetParams"), &Z_Registration_Info_UClass_UContextualAnimNewIKTargetParams, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContextualAnimNewIKTargetParams), 804672595U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimationEditor_Public_ContextualAnimEditorTypes_h_4219698738(TEXT("/Script/ContextualAnimationEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimationEditor_Public_ContextualAnimEditorTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimationEditor_Public_ContextualAnimEditorTypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimationEditor_Public_ContextualAnimEditorTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimationEditor_Public_ContextualAnimEditorTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
