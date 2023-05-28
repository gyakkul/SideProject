// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LidarPointCloudActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLidarPointCloudActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	LIDARPOINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_ALidarPointCloudActor();
	LIDARPOINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_ALidarPointCloudActor_NoRegister();
	LIDARPOINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_ULidarPointCloud_NoRegister();
	LIDARPOINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_ULidarPointCloudComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LidarPointCloudRuntime();
// End Cross Module References
	DEFINE_FUNCTION(ALidarPointCloudActor::execSetPointCloud)
	{
		P_GET_OBJECT(ULidarPointCloud,Z_Param_InPointCloud);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPointCloud(Z_Param_InPointCloud);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALidarPointCloudActor::execGetPointCloud)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULidarPointCloud**)Z_Param__Result=P_THIS->GetPointCloud();
		P_NATIVE_END;
	}
	void ALidarPointCloudActor::StaticRegisterNativesALidarPointCloudActor()
	{
		UClass* Class = ALidarPointCloudActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPointCloud", &ALidarPointCloudActor::execGetPointCloud },
			{ "SetPointCloud", &ALidarPointCloudActor::execSetPointCloud },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALidarPointCloudActor_GetPointCloud_Statics
	{
		struct LidarPointCloudActor_eventGetPointCloud_Parms
		{
			ULidarPointCloud* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALidarPointCloudActor_GetPointCloud_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudActor_eventGetPointCloud_Parms, ReturnValue), Z_Construct_UClass_ULidarPointCloud_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALidarPointCloudActor_GetPointCloud_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALidarPointCloudActor_GetPointCloud_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALidarPointCloudActor_GetPointCloud_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|LidarPointCloud" },
		{ "ModuleRelativePath", "Public/LidarPointCloudActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALidarPointCloudActor_GetPointCloud_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALidarPointCloudActor, nullptr, "GetPointCloud", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALidarPointCloudActor_GetPointCloud_Statics::LidarPointCloudActor_eventGetPointCloud_Parms), Z_Construct_UFunction_ALidarPointCloudActor_GetPointCloud_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALidarPointCloudActor_GetPointCloud_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALidarPointCloudActor_GetPointCloud_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALidarPointCloudActor_GetPointCloud_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALidarPointCloudActor_GetPointCloud()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALidarPointCloudActor_GetPointCloud_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALidarPointCloudActor_SetPointCloud_Statics
	{
		struct LidarPointCloudActor_eventSetPointCloud_Parms
		{
			ULidarPointCloud* InPointCloud;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPointCloud;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALidarPointCloudActor_SetPointCloud_Statics::NewProp_InPointCloud = { "InPointCloud", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudActor_eventSetPointCloud_Parms, InPointCloud), Z_Construct_UClass_ULidarPointCloud_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALidarPointCloudActor_SetPointCloud_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALidarPointCloudActor_SetPointCloud_Statics::NewProp_InPointCloud,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALidarPointCloudActor_SetPointCloud_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|LidarPointCloud" },
		{ "ModuleRelativePath", "Public/LidarPointCloudActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALidarPointCloudActor_SetPointCloud_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALidarPointCloudActor, nullptr, "SetPointCloud", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALidarPointCloudActor_SetPointCloud_Statics::LidarPointCloudActor_eventSetPointCloud_Parms), Z_Construct_UFunction_ALidarPointCloudActor_SetPointCloud_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALidarPointCloudActor_SetPointCloud_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALidarPointCloudActor_SetPointCloud_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALidarPointCloudActor_SetPointCloud_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALidarPointCloudActor_SetPointCloud()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALidarPointCloudActor_SetPointCloud_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALidarPointCloudActor);
	UClass* Z_Construct_UClass_ALidarPointCloudActor_NoRegister()
	{
		return ALidarPointCloudActor::StaticClass();
	}
	struct Z_Construct_UClass_ALidarPointCloudActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointCloudComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PointCloudComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALidarPointCloudActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LidarPointCloudRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALidarPointCloudActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALidarPointCloudActor_GetPointCloud, "GetPointCloud" }, // 828731770
		{ &Z_Construct_UFunction_ALidarPointCloudActor_SetPointCloud, "SetPointCloud" }, // 4293984183
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALidarPointCloudActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Materials" },
		{ "IncludePath", "LidarPointCloudActor.h" },
		{ "ModuleRelativePath", "Public/LidarPointCloudActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALidarPointCloudActor_Statics::NewProp_PointCloudComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PointCloudActor" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Rendering,Components|LidarPointCloud" },
		{ "ModuleRelativePath", "Public/LidarPointCloudActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ALidarPointCloudActor_Statics::NewProp_PointCloudComponent = { "PointCloudComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALidarPointCloudActor, PointCloudComponent), Z_Construct_UClass_ULidarPointCloudComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALidarPointCloudActor_Statics::NewProp_PointCloudComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALidarPointCloudActor_Statics::NewProp_PointCloudComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALidarPointCloudActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALidarPointCloudActor_Statics::NewProp_PointCloudComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALidarPointCloudActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALidarPointCloudActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALidarPointCloudActor_Statics::ClassParams = {
		&ALidarPointCloudActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALidarPointCloudActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALidarPointCloudActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALidarPointCloudActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALidarPointCloudActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALidarPointCloudActor()
	{
		if (!Z_Registration_Info_UClass_ALidarPointCloudActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALidarPointCloudActor.OuterSingleton, Z_Construct_UClass_ALidarPointCloudActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALidarPointCloudActor.OuterSingleton;
	}
	template<> LIDARPOINTCLOUDRUNTIME_API UClass* StaticClass<ALidarPointCloudActor>()
	{
		return ALidarPointCloudActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALidarPointCloudActor);
	ALidarPointCloudActor::~ALidarPointCloudActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALidarPointCloudActor, ALidarPointCloudActor::StaticClass, TEXT("ALidarPointCloudActor"), &Z_Registration_Info_UClass_ALidarPointCloudActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALidarPointCloudActor), 3622686835U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudActor_h_71063626(TEXT("/Script/LidarPointCloudRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
