// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlackboardKeyType_SOClaimHandle.h"
#include "SmartObjectRuntime.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlackboardKeyType_SOClaimHandle() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType_SOClaimHandle();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType_SOClaimHandle_NoRegister();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectClaimHandle();
	UPackage* Z_Construct_UPackage__Script_SmartObjectsModule();
// End Cross Module References
	void UBlackboardKeyType_SOClaimHandle::StaticRegisterNativesUBlackboardKeyType_SOClaimHandle()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlackboardKeyType_SOClaimHandle);
	UClass* Z_Construct_UClass_UBlackboardKeyType_SOClaimHandle_NoRegister()
	{
		return UBlackboardKeyType_SOClaimHandle::StaticClass();
	}
	struct Z_Construct_UClass_UBlackboardKeyType_SOClaimHandle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlackboardKeyType_SOClaimHandle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlackboardKeyType,
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackboardKeyType_SOClaimHandle_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Blackboard" },
		{ "Comment", "/**\n * Blackboard key type that holds a SmartObject claim handle \n */" },
		{ "DisplayName", "SO Claim Handle" },
		{ "IncludePath", "BlackboardKeyType_SOClaimHandle.h" },
		{ "ModuleRelativePath", "Public/BlackboardKeyType_SOClaimHandle.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Blackboard key type that holds a SmartObject claim handle" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackboardKeyType_SOClaimHandle_Statics::NewProp_Handle_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Public/BlackboardKeyType_SOClaimHandle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlackboardKeyType_SOClaimHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlackboardKeyType_SOClaimHandle, Handle), Z_Construct_UScriptStruct_FSmartObjectClaimHandle, METADATA_PARAMS(Z_Construct_UClass_UBlackboardKeyType_SOClaimHandle_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackboardKeyType_SOClaimHandle_Statics::NewProp_Handle_MetaData)) }; // 931449528
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlackboardKeyType_SOClaimHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackboardKeyType_SOClaimHandle_Statics::NewProp_Handle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlackboardKeyType_SOClaimHandle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlackboardKeyType_SOClaimHandle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlackboardKeyType_SOClaimHandle_Statics::ClassParams = {
		&UBlackboardKeyType_SOClaimHandle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBlackboardKeyType_SOClaimHandle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlackboardKeyType_SOClaimHandle_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBlackboardKeyType_SOClaimHandle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackboardKeyType_SOClaimHandle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlackboardKeyType_SOClaimHandle()
	{
		if (!Z_Registration_Info_UClass_UBlackboardKeyType_SOClaimHandle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlackboardKeyType_SOClaimHandle.OuterSingleton, Z_Construct_UClass_UBlackboardKeyType_SOClaimHandle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlackboardKeyType_SOClaimHandle.OuterSingleton;
	}
	template<> SMARTOBJECTSMODULE_API UClass* StaticClass<UBlackboardKeyType_SOClaimHandle>()
	{
		return UBlackboardKeyType_SOClaimHandle::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlackboardKeyType_SOClaimHandle);
	UBlackboardKeyType_SOClaimHandle::~UBlackboardKeyType_SOClaimHandle() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_BlackboardKeyType_SOClaimHandle_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_BlackboardKeyType_SOClaimHandle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlackboardKeyType_SOClaimHandle, UBlackboardKeyType_SOClaimHandle::StaticClass, TEXT("UBlackboardKeyType_SOClaimHandle"), &Z_Registration_Info_UClass_UBlackboardKeyType_SOClaimHandle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlackboardKeyType_SOClaimHandle), 1565715363U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_BlackboardKeyType_SOClaimHandle_h_2952991065(TEXT("/Script/SmartObjectsModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_BlackboardKeyType_SOClaimHandle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_BlackboardKeyType_SOClaimHandle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
