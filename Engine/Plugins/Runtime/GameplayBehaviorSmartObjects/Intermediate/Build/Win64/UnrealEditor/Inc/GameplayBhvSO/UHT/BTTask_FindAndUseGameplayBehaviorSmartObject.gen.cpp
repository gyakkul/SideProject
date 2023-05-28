// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AI/BTTask_FindAndUseGameplayBehaviorSmartObject.h"
#include "../../AIModule/Classes/EnvironmentQuery/EnvQueryTypes.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_FindAndUseGameplayBehaviorSmartObject() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest();
	GAMEPLAYBEHAVIORSMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_UBTTask_FindAndUseGameplayBehaviorSmartObject();
	GAMEPLAYBEHAVIORSMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_UBTTask_FindAndUseGameplayBehaviorSmartObject_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQuery();
	UPackage* Z_Construct_UPackage__Script_GameplayBehaviorSmartObjectsModule();
// End Cross Module References
	void UBTTask_FindAndUseGameplayBehaviorSmartObject::StaticRegisterNativesUBTTask_FindAndUseGameplayBehaviorSmartObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_FindAndUseGameplayBehaviorSmartObject);
	UClass* Z_Construct_UClass_UBTTask_FindAndUseGameplayBehaviorSmartObject_NoRegister()
	{
		return UBTTask_FindAndUseGameplayBehaviorSmartObject::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_FindAndUseGameplayBehaviorSmartObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivityRequirements_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActivityRequirements;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EQSRequest_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EQSRequest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_FindAndUseGameplayBehaviorSmartObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayBehaviorSmartObjectsModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_FindAndUseGameplayBehaviorSmartObject_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n*\n*/" },
		{ "IncludePath", "AI/BTTask_FindAndUseGameplayBehaviorSmartObject.h" },
		{ "ModuleRelativePath", "Public/AI/BTTask_FindAndUseGameplayBehaviorSmartObject.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_FindAndUseGameplayBehaviorSmartObject_Statics::NewProp_ActivityRequirements_MetaData[] = {
		{ "Category", "SmartObjects" },
		{ "Comment", "/** Additional tag query to filter available smart objects. We'll query for smart\n\x09 *\x09objects that support activities tagged in a way matching the filter.\n\x09 *\x09Note that regular tag-base filtering is going to take place as well */" },
		{ "ModuleRelativePath", "Public/AI/BTTask_FindAndUseGameplayBehaviorSmartObject.h" },
		{ "ToolTip", "Additional tag query to filter available smart objects. We'll query for smart\n    objects that support activities tagged in a way matching the filter.\n    Note that regular tag-base filtering is going to take place as well" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_FindAndUseGameplayBehaviorSmartObject_Statics::NewProp_ActivityRequirements = { "ActivityRequirements", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTTask_FindAndUseGameplayBehaviorSmartObject, ActivityRequirements), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(Z_Construct_UClass_UBTTask_FindAndUseGameplayBehaviorSmartObject_Statics::NewProp_ActivityRequirements_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FindAndUseGameplayBehaviorSmartObject_Statics::NewProp_ActivityRequirements_MetaData)) }; // 689482789
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_FindAndUseGameplayBehaviorSmartObject_Statics::NewProp_EQSRequest_MetaData[] = {
		{ "Category", "SmartObjects" },
		{ "ModuleRelativePath", "Public/AI/BTTask_FindAndUseGameplayBehaviorSmartObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_FindAndUseGameplayBehaviorSmartObject_Statics::NewProp_EQSRequest = { "EQSRequest", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTTask_FindAndUseGameplayBehaviorSmartObject, EQSRequest), Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest, METADATA_PARAMS(Z_Construct_UClass_UBTTask_FindAndUseGameplayBehaviorSmartObject_Statics::NewProp_EQSRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FindAndUseGameplayBehaviorSmartObject_Statics::NewProp_EQSRequest_MetaData)) }; // 104046496
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_FindAndUseGameplayBehaviorSmartObject_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "SmartObjects" },
		{ "Comment", "/** Used for smart object querying if EQSRequest is not configured */" },
		{ "DisplayName", "Fallback Radius" },
		{ "ModuleRelativePath", "Public/AI/BTTask_FindAndUseGameplayBehaviorSmartObject.h" },
		{ "ToolTip", "Used for smart object querying if EQSRequest is not configured" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_FindAndUseGameplayBehaviorSmartObject_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTTask_FindAndUseGameplayBehaviorSmartObject, Radius), METADATA_PARAMS(Z_Construct_UClass_UBTTask_FindAndUseGameplayBehaviorSmartObject_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FindAndUseGameplayBehaviorSmartObject_Statics::NewProp_Radius_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_FindAndUseGameplayBehaviorSmartObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_FindAndUseGameplayBehaviorSmartObject_Statics::NewProp_ActivityRequirements,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_FindAndUseGameplayBehaviorSmartObject_Statics::NewProp_EQSRequest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_FindAndUseGameplayBehaviorSmartObject_Statics::NewProp_Radius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_FindAndUseGameplayBehaviorSmartObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_FindAndUseGameplayBehaviorSmartObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_FindAndUseGameplayBehaviorSmartObject_Statics::ClassParams = {
		&UBTTask_FindAndUseGameplayBehaviorSmartObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_FindAndUseGameplayBehaviorSmartObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FindAndUseGameplayBehaviorSmartObject_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_FindAndUseGameplayBehaviorSmartObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FindAndUseGameplayBehaviorSmartObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_FindAndUseGameplayBehaviorSmartObject()
	{
		if (!Z_Registration_Info_UClass_UBTTask_FindAndUseGameplayBehaviorSmartObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_FindAndUseGameplayBehaviorSmartObject.OuterSingleton, Z_Construct_UClass_UBTTask_FindAndUseGameplayBehaviorSmartObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTTask_FindAndUseGameplayBehaviorSmartObject.OuterSingleton;
	}
	template<> GAMEPLAYBEHAVIORSMARTOBJECTSMODULE_API UClass* StaticClass<UBTTask_FindAndUseGameplayBehaviorSmartObject>()
	{
		return UBTTask_FindAndUseGameplayBehaviorSmartObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_FindAndUseGameplayBehaviorSmartObject);
	UBTTask_FindAndUseGameplayBehaviorSmartObject::~UBTTask_FindAndUseGameplayBehaviorSmartObject() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayBehaviorSmartObjects_Source_GameplayBehaviorSmartObjectsModule_Public_AI_BTTask_FindAndUseGameplayBehaviorSmartObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayBehaviorSmartObjects_Source_GameplayBehaviorSmartObjectsModule_Public_AI_BTTask_FindAndUseGameplayBehaviorSmartObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_FindAndUseGameplayBehaviorSmartObject, UBTTask_FindAndUseGameplayBehaviorSmartObject::StaticClass, TEXT("UBTTask_FindAndUseGameplayBehaviorSmartObject"), &Z_Registration_Info_UClass_UBTTask_FindAndUseGameplayBehaviorSmartObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_FindAndUseGameplayBehaviorSmartObject), 1976369249U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayBehaviorSmartObjects_Source_GameplayBehaviorSmartObjectsModule_Public_AI_BTTask_FindAndUseGameplayBehaviorSmartObject_h_3331114678(TEXT("/Script/GameplayBehaviorSmartObjectsModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayBehaviorSmartObjects_Source_GameplayBehaviorSmartObjectsModule_Public_AI_BTTask_FindAndUseGameplayBehaviorSmartObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayBehaviorSmartObjects_Source_GameplayBehaviorSmartObjectsModule_Public_AI_BTTask_FindAndUseGameplayBehaviorSmartObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
