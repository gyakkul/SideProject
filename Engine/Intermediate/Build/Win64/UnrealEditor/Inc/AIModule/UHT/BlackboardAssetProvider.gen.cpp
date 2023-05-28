// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/BehaviorTree/BlackboardAssetProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlackboardAssetProvider() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardAssetProvider();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardAssetProvider_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardData_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	DEFINE_FUNCTION(IBlackboardAssetProvider::execGetBlackboardAsset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBlackboardData**)Z_Param__Result=P_THIS->GetBlackboardAsset();
		P_NATIVE_END;
	}
	void UBlackboardAssetProvider::StaticRegisterNativesUBlackboardAssetProvider()
	{
		UClass* Class = UBlackboardAssetProvider::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBlackboardAsset", &IBlackboardAssetProvider::execGetBlackboardAsset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBlackboardAssetProvider_GetBlackboardAsset_Statics
	{
		struct BlackboardAssetProvider_eventGetBlackboardAsset_Parms
		{
			UBlackboardData* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlackboardAssetProvider_GetBlackboardAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlackboardAssetProvider_eventGetBlackboardAsset_Parms, ReturnValue), Z_Construct_UClass_UBlackboardData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardAssetProvider_GetBlackboardAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardAssetProvider_GetBlackboardAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardAssetProvider_GetBlackboardAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameplayTags" },
		{ "Comment", "/** Returns BlackboardData referenced by the owner object. */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardAssetProvider.h" },
		{ "ToolTip", "Returns BlackboardData referenced by the owner object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardAssetProvider_GetBlackboardAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardAssetProvider, nullptr, "GetBlackboardAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlackboardAssetProvider_GetBlackboardAsset_Statics::BlackboardAssetProvider_eventGetBlackboardAsset_Parms), Z_Construct_UFunction_UBlackboardAssetProvider_GetBlackboardAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardAssetProvider_GetBlackboardAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlackboardAssetProvider_GetBlackboardAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardAssetProvider_GetBlackboardAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlackboardAssetProvider_GetBlackboardAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlackboardAssetProvider_GetBlackboardAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlackboardAssetProvider);
	UClass* Z_Construct_UClass_UBlackboardAssetProvider_NoRegister()
	{
		return UBlackboardAssetProvider::StaticClass();
	}
	struct Z_Construct_UClass_UBlackboardAssetProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlackboardAssetProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBlackboardAssetProvider_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlackboardAssetProvider_GetBlackboardAsset, "GetBlackboardAsset" }, // 26790836
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackboardAssetProvider_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardAssetProvider.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlackboardAssetProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBlackboardAssetProvider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlackboardAssetProvider_Statics::ClassParams = {
		&UBlackboardAssetProvider::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBlackboardAssetProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackboardAssetProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlackboardAssetProvider()
	{
		if (!Z_Registration_Info_UClass_UBlackboardAssetProvider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlackboardAssetProvider.OuterSingleton, Z_Construct_UClass_UBlackboardAssetProvider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlackboardAssetProvider.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UBlackboardAssetProvider>()
	{
		return UBlackboardAssetProvider::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlackboardAssetProvider);
	UBlackboardAssetProvider::~UBlackboardAssetProvider() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardAssetProvider_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardAssetProvider_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlackboardAssetProvider, UBlackboardAssetProvider::StaticClass, TEXT("UBlackboardAssetProvider"), &Z_Registration_Info_UClass_UBlackboardAssetProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlackboardAssetProvider), 2264754034U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardAssetProvider_h_1987254847(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardAssetProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardAssetProvider_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
