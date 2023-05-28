// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/Physics/AsyncPhysicsData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsyncPhysicsData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UAsyncPhysicsData();
	ENGINE_API UClass* Z_Construct_UClass_UAsyncPhysicsData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UAsyncPhysicsData::StaticRegisterNativesUAsyncPhysicsData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAsyncPhysicsData);
	UClass* Z_Construct_UClass_UAsyncPhysicsData_NoRegister()
	{
		return UAsyncPhysicsData::StaticClass();
	}
	struct Z_Construct_UClass_UAsyncPhysicsData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerFrame_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ServerFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicationRedundancy_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReplicationRedundancy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAsyncPhysicsData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncPhysicsData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n\x09The base class for async physics data. Inherit from this to create custom data for async physics tick.\n\x09When no data is available (say due to massive latency or packet loss) we fall back on the default constructed data.\n\x09This means you should set the default values to something equivalent to no input (for example bPlayerWantsToJump should probably default to false)\n*/" },
		{ "IncludePath", "Physics/AsyncPhysicsData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Physics/AsyncPhysicsData.h" },
		{ "ToolTip", "The base class for async physics data. Inherit from this to create custom data for async physics tick.\nWhen no data is available (say due to massive latency or packet loss) we fall back on the default constructed data.\nThis means you should set the default values to something equivalent to no input (for example bPlayerWantsToJump should probably default to false)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncPhysicsData_Statics::NewProp_ServerFrame_MetaData[] = {
		{ "ModuleRelativePath", "Public/Physics/AsyncPhysicsData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAsyncPhysicsData_Statics::NewProp_ServerFrame = { "ServerFrame", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAsyncPhysicsData, ServerFrame), METADATA_PARAMS(Z_Construct_UClass_UAsyncPhysicsData_Statics::NewProp_ServerFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncPhysicsData_Statics::NewProp_ServerFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncPhysicsData_Statics::NewProp_ReplicationRedundancy_MetaData[] = {
		{ "Category", "AsyncPhysicsData" },
		{ "Comment", "//Determines how many times we redundantly send data to server. The higher this number the less packet loss, but more bandwidth is used\n" },
		{ "ModuleRelativePath", "Public/Physics/AsyncPhysicsData.h" },
		{ "ToolTip", "Determines how many times we redundantly send data to server. The higher this number the less packet loss, but more bandwidth is used" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAsyncPhysicsData_Statics::NewProp_ReplicationRedundancy = { "ReplicationRedundancy", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAsyncPhysicsData, ReplicationRedundancy), METADATA_PARAMS(Z_Construct_UClass_UAsyncPhysicsData_Statics::NewProp_ReplicationRedundancy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncPhysicsData_Statics::NewProp_ReplicationRedundancy_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncPhysicsData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncPhysicsData_Statics::NewProp_ServerFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncPhysicsData_Statics::NewProp_ReplicationRedundancy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAsyncPhysicsData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncPhysicsData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncPhysicsData_Statics::ClassParams = {
		&UAsyncPhysicsData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAsyncPhysicsData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncPhysicsData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAsyncPhysicsData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncPhysicsData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAsyncPhysicsData()
	{
		if (!Z_Registration_Info_UClass_UAsyncPhysicsData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncPhysicsData.OuterSingleton, Z_Construct_UClass_UAsyncPhysicsData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAsyncPhysicsData.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAsyncPhysicsData>()
	{
		return UAsyncPhysicsData::StaticClass();
	}
	UAsyncPhysicsData::UAsyncPhysicsData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncPhysicsData);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_AsyncPhysicsData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_AsyncPhysicsData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncPhysicsData, UAsyncPhysicsData::StaticClass, TEXT("UAsyncPhysicsData"), &Z_Registration_Info_UClass_UAsyncPhysicsData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncPhysicsData), 217560073U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_AsyncPhysicsData_h_4007686510(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_AsyncPhysicsData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_AsyncPhysicsData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
