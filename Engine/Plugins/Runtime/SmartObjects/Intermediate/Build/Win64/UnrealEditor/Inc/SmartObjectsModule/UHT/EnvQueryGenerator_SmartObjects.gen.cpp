// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnvQueryGenerator_SmartObjects.h"
#include "SmartObjectSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator_SmartObjects() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_SmartObjects();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_SmartObjects_NoRegister();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectRequestFilter();
	UPackage* Z_Construct_UPackage__Script_SmartObjectsModule();
// End Cross Module References
	void UEnvQueryGenerator_SmartObjects::StaticRegisterNativesUEnvQueryGenerator_SmartObjects()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQueryGenerator_SmartObjects);
	UClass* Z_Construct_UClass_UEnvQueryGenerator_SmartObjects_NoRegister()
	{
		return UEnvQueryGenerator_SmartObjects::StaticClass();
	}
	struct Z_Construct_UClass_UEnvQueryGenerator_SmartObjects_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueryOriginContext_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_QueryOriginContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmartObjectRequestFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SmartObjectRequestFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueryBoxExtent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QueryBoxExtent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyClaimable_MetaData[];
#endif
		static void NewProp_bOnlyClaimable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyClaimable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvQueryGenerator_SmartObjects_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_SmartObjects_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Fetches Smart Object slots within QueryBoxExtent from locations given by QueryOriginContext, that match SmartObjectRequestFilter */" },
		{ "DisplayName", "Smart Objects" },
		{ "IncludePath", "EnvQueryGenerator_SmartObjects.h" },
		{ "ModuleRelativePath", "Public/EnvQueryGenerator_SmartObjects.h" },
		{ "ToolTip", "Fetches Smart Object slots within QueryBoxExtent from locations given by QueryOriginContext, that match SmartObjectRequestFilter" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_SmartObjects_Statics::NewProp_QueryOriginContext_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** The context indicating the locations to be used as query origins */" },
		{ "ModuleRelativePath", "Public/EnvQueryGenerator_SmartObjects.h" },
		{ "ToolTip", "The context indicating the locations to be used as query origins" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnvQueryGenerator_SmartObjects_Statics::NewProp_QueryOriginContext = { "QueryOriginContext", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_SmartObjects, QueryOriginContext), Z_Construct_UClass_UClass, Z_Construct_UClass_UEnvQueryContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_SmartObjects_Statics::NewProp_QueryOriginContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_SmartObjects_Statics::NewProp_QueryOriginContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_SmartObjects_Statics::NewProp_SmartObjectRequestFilter_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** If set will be used to filter gathered results */" },
		{ "ModuleRelativePath", "Public/EnvQueryGenerator_SmartObjects.h" },
		{ "ToolTip", "If set will be used to filter gathered results" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryGenerator_SmartObjects_Statics::NewProp_SmartObjectRequestFilter = { "SmartObjectRequestFilter", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_SmartObjects, SmartObjectRequestFilter), Z_Construct_UScriptStruct_FSmartObjectRequestFilter, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_SmartObjects_Statics::NewProp_SmartObjectRequestFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_SmartObjects_Statics::NewProp_SmartObjectRequestFilter_MetaData)) }; // 3905379238
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_SmartObjects_Statics::NewProp_QueryBoxExtent_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** Combined with generator's origin(s) (as indicated by QueryOriginContext) determines query's volume */" },
		{ "ModuleRelativePath", "Public/EnvQueryGenerator_SmartObjects.h" },
		{ "ToolTip", "Combined with generator's origin(s) (as indicated by QueryOriginContext) determines query's volume" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryGenerator_SmartObjects_Statics::NewProp_QueryBoxExtent = { "QueryBoxExtent", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_SmartObjects, QueryBoxExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_SmartObjects_Statics::NewProp_QueryBoxExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_SmartObjects_Statics::NewProp_QueryBoxExtent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_SmartObjects_Statics::NewProp_bOnlyClaimable_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** Determines whether only currently claimable slots are allowed */" },
		{ "ModuleRelativePath", "Public/EnvQueryGenerator_SmartObjects.h" },
		{ "ToolTip", "Determines whether only currently claimable slots are allowed" },
	};
#endif
	void Z_Construct_UClass_UEnvQueryGenerator_SmartObjects_Statics::NewProp_bOnlyClaimable_SetBit(void* Obj)
	{
		((UEnvQueryGenerator_SmartObjects*)Obj)->bOnlyClaimable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvQueryGenerator_SmartObjects_Statics::NewProp_bOnlyClaimable = { "bOnlyClaimable", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEnvQueryGenerator_SmartObjects), &Z_Construct_UClass_UEnvQueryGenerator_SmartObjects_Statics::NewProp_bOnlyClaimable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_SmartObjects_Statics::NewProp_bOnlyClaimable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_SmartObjects_Statics::NewProp_bOnlyClaimable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryGenerator_SmartObjects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_SmartObjects_Statics::NewProp_QueryOriginContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_SmartObjects_Statics::NewProp_SmartObjectRequestFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_SmartObjects_Statics::NewProp_QueryBoxExtent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_SmartObjects_Statics::NewProp_bOnlyClaimable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvQueryGenerator_SmartObjects_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryGenerator_SmartObjects>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryGenerator_SmartObjects_Statics::ClassParams = {
		&UEnvQueryGenerator_SmartObjects::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnvQueryGenerator_SmartObjects_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_SmartObjects_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_SmartObjects_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_SmartObjects_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvQueryGenerator_SmartObjects()
	{
		if (!Z_Registration_Info_UClass_UEnvQueryGenerator_SmartObjects.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryGenerator_SmartObjects.OuterSingleton, Z_Construct_UClass_UEnvQueryGenerator_SmartObjects_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnvQueryGenerator_SmartObjects.OuterSingleton;
	}
	template<> SMARTOBJECTSMODULE_API UClass* StaticClass<UEnvQueryGenerator_SmartObjects>()
	{
		return UEnvQueryGenerator_SmartObjects::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryGenerator_SmartObjects);
	UEnvQueryGenerator_SmartObjects::~UEnvQueryGenerator_SmartObjects() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_EnvQueryGenerator_SmartObjects_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_EnvQueryGenerator_SmartObjects_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryGenerator_SmartObjects, UEnvQueryGenerator_SmartObjects::StaticClass, TEXT("UEnvQueryGenerator_SmartObjects"), &Z_Registration_Info_UClass_UEnvQueryGenerator_SmartObjects, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryGenerator_SmartObjects), 3375171113U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_EnvQueryGenerator_SmartObjects_h_1300507761(TEXT("/Script/SmartObjectsModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_EnvQueryGenerator_SmartObjects_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_EnvQueryGenerator_SmartObjects_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
