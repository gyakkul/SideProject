// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCacheActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCacheActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_AGeometryCacheActor();
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_AGeometryCacheActor_NoRegister();
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GeometryCache();
// End Cross Module References
	DEFINE_FUNCTION(AGeometryCacheActor::execGetGeometryCacheComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGeometryCacheComponent**)Z_Param__Result=P_THIS->GetGeometryCacheComponent();
		P_NATIVE_END;
	}
	void AGeometryCacheActor::StaticRegisterNativesAGeometryCacheActor()
	{
		UClass* Class = AGeometryCacheActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGeometryCacheComponent", &AGeometryCacheActor::execGetGeometryCacheComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGeometryCacheActor_GetGeometryCacheComponent_Statics
	{
		struct GeometryCacheActor_eventGetGeometryCacheComponent_Parms
		{
			UGeometryCacheComponent* ReturnValue;
		};
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeometryCacheActor_GetGeometryCacheComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGeometryCacheActor_GetGeometryCacheComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryCacheActor_eventGetGeometryCacheComponent_Parms, ReturnValue), Z_Construct_UClass_UGeometryCacheComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AGeometryCacheActor_GetGeometryCacheComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeometryCacheActor_GetGeometryCacheComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeometryCacheActor_GetGeometryCacheComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeometryCacheActor_GetGeometryCacheComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeometryCacheActor_GetGeometryCacheComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|GeometryCache" },
		{ "Comment", "/** Returns GeometryCacheComponent subobject **/" },
		{ "ModuleRelativePath", "Classes/GeometryCacheActor.h" },
		{ "ToolTip", "Returns GeometryCacheComponent subobject *" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeometryCacheActor_GetGeometryCacheComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeometryCacheActor, nullptr, "GetGeometryCacheComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGeometryCacheActor_GetGeometryCacheComponent_Statics::GeometryCacheActor_eventGetGeometryCacheComponent_Parms), Z_Construct_UFunction_AGeometryCacheActor_GetGeometryCacheComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeometryCacheActor_GetGeometryCacheComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGeometryCacheActor_GetGeometryCacheComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeometryCacheActor_GetGeometryCacheComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGeometryCacheActor_GetGeometryCacheComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGeometryCacheActor_GetGeometryCacheComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGeometryCacheActor);
	UClass* Z_Construct_UClass_AGeometryCacheActor_NoRegister()
	{
		return AGeometryCacheActor::StaticClass();
	}
	struct Z_Construct_UClass_AGeometryCacheActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeometryCacheComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GeometryCacheComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGeometryCacheActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCache,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGeometryCacheActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGeometryCacheActor_GetGeometryCacheComponent, "GetGeometryCacheComponent" }, // 1898865713
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCacheActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** GeometryCache actor, serves as a place-able actor for GeometryCache objects*/" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "GeometryCacheActor.h" },
		{ "ModuleRelativePath", "Classes/GeometryCacheActor.h" },
		{ "ToolTip", "GeometryCache actor, serves as a place-able actor for GeometryCache objects" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCacheActor_Statics::NewProp_GeometryCacheComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "GeometryCacheActor" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Mesh,Rendering,Physics,Components|GeometryCache" },
		{ "ModuleRelativePath", "Classes/GeometryCacheActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AGeometryCacheActor_Statics::NewProp_GeometryCacheComponent = { "GeometryCacheComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGeometryCacheActor, GeometryCacheComponent), Z_Construct_UClass_UGeometryCacheComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGeometryCacheActor_Statics::NewProp_GeometryCacheComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCacheActor_Statics::NewProp_GeometryCacheComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGeometryCacheActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCacheActor_Statics::NewProp_GeometryCacheComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGeometryCacheActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeometryCacheActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGeometryCacheActor_Statics::ClassParams = {
		&AGeometryCacheActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGeometryCacheActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCacheActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGeometryCacheActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCacheActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGeometryCacheActor()
	{
		if (!Z_Registration_Info_UClass_AGeometryCacheActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGeometryCacheActor.OuterSingleton, Z_Construct_UClass_AGeometryCacheActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGeometryCacheActor.OuterSingleton;
	}
	template<> GEOMETRYCACHE_API UClass* StaticClass<AGeometryCacheActor>()
	{
		return AGeometryCacheActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGeometryCacheActor);
	AGeometryCacheActor::~AGeometryCacheActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGeometryCacheActor, AGeometryCacheActor::StaticClass, TEXT("AGeometryCacheActor"), &Z_Registration_Info_UClass_AGeometryCacheActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGeometryCacheActor), 1356028635U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheActor_h_848292121(TEXT("/Script/GeometryCache"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
