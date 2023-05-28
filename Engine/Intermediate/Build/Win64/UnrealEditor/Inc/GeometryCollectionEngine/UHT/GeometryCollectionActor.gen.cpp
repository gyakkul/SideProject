// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCollection/GeometryCollectionActor.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionActor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_AGeometryCollectionActor();
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_AGeometryCollectionActor_NoRegister();
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollectionComponent_NoRegister();
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollectionDebugDrawComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GeometryCollectionEngine();
// End Cross Module References
	DEFINE_FUNCTION(AGeometryCollectionActor::execRaycastSingle)
	{
		P_GET_STRUCT(FVector,Z_Param_Start);
		P_GET_STRUCT(FVector,Z_Param_End);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RaycastSingle(Z_Param_Start,Z_Param_End,Z_Param_Out_OutHit);
		P_NATIVE_END;
	}
	void AGeometryCollectionActor::StaticRegisterNativesAGeometryCollectionActor()
	{
		UClass* Class = AGeometryCollectionActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RaycastSingle", &AGeometryCollectionActor::execRaycastSingle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle_Statics
	{
		struct GeometryCollectionActor_eventRaycastSingle_Parms
		{
			FVector Start;
			FVector End;
			FHitResult OutHit;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
		static const UECodeGen_Private::FStructPropertyParams NewProp_End;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutHit;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryCollectionActor_eventRaycastSingle_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryCollectionActor_eventRaycastSingle_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle_Statics::NewProp_OutHit = { "OutHit", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryCollectionActor_eventRaycastSingle_Parms, OutHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1287526515
	void Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GeometryCollectionActor_eventRaycastSingle_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryCollectionActor_eventRaycastSingle_Parms), &Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle_Statics::NewProp_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle_Statics::NewProp_End,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle_Statics::NewProp_OutHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeometryCollectionActor, nullptr, "RaycastSingle", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle_Statics::GeometryCollectionActor_eventRaycastSingle_Parms), Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGeometryCollectionActor);
	UClass* Z_Construct_UClass_AGeometryCollectionActor_NoRegister()
	{
		return AGeometryCollectionActor::StaticClass();
	}
	struct Z_Construct_UClass_AGeometryCollectionActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeometryCollectionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GeometryCollectionComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeometryCollectionDebugDrawComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GeometryCollectionDebugDrawComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGeometryCollectionActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGeometryCollectionActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle, "RaycastSingle" }, // 2059781201
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeometryCollection/GeometryCollectionActor.h" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionActor_Statics::NewProp_GeometryCollectionComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Destruction" },
		{ "Comment", "/* GeometryCollectionComponent */" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Components|GeometryCollection" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionActor.h" },
		{ "ToolTip", "GeometryCollectionComponent" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AGeometryCollectionActor_Statics::NewProp_GeometryCollectionComponent = { "GeometryCollectionComponent", nullptr, (EPropertyFlags)0x00140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGeometryCollectionActor, GeometryCollectionComponent), Z_Construct_UClass_UGeometryCollectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionActor_Statics::NewProp_GeometryCollectionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionActor_Statics::NewProp_GeometryCollectionComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionActor_Statics::NewProp_GeometryCollectionDebugDrawComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AGeometryCollectionActor_Statics::NewProp_GeometryCollectionDebugDrawComponent = { "GeometryCollectionDebugDrawComponent", nullptr, (EPropertyFlags)0x0014000020080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGeometryCollectionActor, GeometryCollectionDebugDrawComponent_DEPRECATED), Z_Construct_UClass_UGeometryCollectionDebugDrawComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionActor_Statics::NewProp_GeometryCollectionDebugDrawComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionActor_Statics::NewProp_GeometryCollectionDebugDrawComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGeometryCollectionActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionActor_Statics::NewProp_GeometryCollectionComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionActor_Statics::NewProp_GeometryCollectionDebugDrawComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGeometryCollectionActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeometryCollectionActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGeometryCollectionActor_Statics::ClassParams = {
		&AGeometryCollectionActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGeometryCollectionActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGeometryCollectionActor()
	{
		if (!Z_Registration_Info_UClass_AGeometryCollectionActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGeometryCollectionActor.OuterSingleton, Z_Construct_UClass_AGeometryCollectionActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGeometryCollectionActor.OuterSingleton;
	}
	template<> GEOMETRYCOLLECTIONENGINE_API UClass* StaticClass<AGeometryCollectionActor>()
	{
		return AGeometryCollectionActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGeometryCollectionActor);
	AGeometryCollectionActor::~AGeometryCollectionActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGeometryCollectionActor, AGeometryCollectionActor::StaticClass, TEXT("AGeometryCollectionActor"), &Z_Registration_Info_UClass_AGeometryCollectionActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGeometryCollectionActor), 3540540895U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionActor_h_2445730561(TEXT("/Script/GeometryCollectionEngine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
