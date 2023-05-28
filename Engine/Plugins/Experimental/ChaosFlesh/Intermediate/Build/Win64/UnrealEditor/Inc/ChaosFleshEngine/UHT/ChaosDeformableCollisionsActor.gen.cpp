// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosFlesh/ChaosDeformableCollisionsActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosDeformableCollisionsActor() {}
// Cross Module References
	CHAOSFLESHENGINE_API UClass* Z_Construct_UClass_ADeformableCollisionsActor();
	CHAOSFLESHENGINE_API UClass* Z_Construct_UClass_ADeformableCollisionsActor_NoRegister();
	CHAOSFLESHENGINE_API UClass* Z_Construct_UClass_ADeformableSolverActor_NoRegister();
	CHAOSFLESHENGINE_API UClass* Z_Construct_UClass_UDeformableCollisionsComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDeformableInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ChaosFleshEngine();
// End Cross Module References
	DEFINE_FUNCTION(ADeformableCollisionsActor::execEnableSimulation)
	{
		P_GET_OBJECT(ADeformableSolverActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableSimulation(Z_Param_Actor);
		P_NATIVE_END;
	}
	void ADeformableCollisionsActor::StaticRegisterNativesADeformableCollisionsActor()
	{
		UClass* Class = ADeformableCollisionsActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnableSimulation", &ADeformableCollisionsActor::execEnableSimulation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADeformableCollisionsActor_EnableSimulation_Statics
	{
		struct DeformableCollisionsActor_eventEnableSimulation_Parms
		{
			ADeformableSolverActor* Actor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADeformableCollisionsActor_EnableSimulation_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DeformableCollisionsActor_eventEnableSimulation_Parms, Actor), Z_Construct_UClass_ADeformableSolverActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADeformableCollisionsActor_EnableSimulation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADeformableCollisionsActor_EnableSimulation_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADeformableCollisionsActor_EnableSimulation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "ModuleRelativePath", "Public/ChaosFlesh/ChaosDeformableCollisionsActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADeformableCollisionsActor_EnableSimulation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADeformableCollisionsActor, nullptr, "EnableSimulation", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADeformableCollisionsActor_EnableSimulation_Statics::DeformableCollisionsActor_eventEnableSimulation_Parms), Z_Construct_UFunction_ADeformableCollisionsActor_EnableSimulation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADeformableCollisionsActor_EnableSimulation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADeformableCollisionsActor_EnableSimulation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADeformableCollisionsActor_EnableSimulation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADeformableCollisionsActor_EnableSimulation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADeformableCollisionsActor_EnableSimulation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADeformableCollisionsActor);
	UClass* Z_Construct_UClass_ADeformableCollisionsActor_NoRegister()
	{
		return ADeformableCollisionsActor::StaticClass();
	}
	struct Z_Construct_UClass_ADeformableCollisionsActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeformableCollisionsComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DeformableCollisionsComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimarySolver_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PrimarySolver;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StaticCollisions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticCollisions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StaticCollisions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADeformableCollisionsActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosFleshEngine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADeformableCollisionsActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADeformableCollisionsActor_EnableSimulation, "EnableSimulation" }, // 3647661113
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADeformableCollisionsActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ChaosFlesh/ChaosDeformableCollisionsActor.h" },
		{ "ModuleRelativePath", "Public/ChaosFlesh/ChaosDeformableCollisionsActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADeformableCollisionsActor_Statics::NewProp_DeformableCollisionsComponent_MetaData[] = {
		{ "Category", "Physics" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ChaosFlesh/ChaosDeformableCollisionsActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADeformableCollisionsActor_Statics::NewProp_DeformableCollisionsComponent = { "DeformableCollisionsComponent", nullptr, (EPropertyFlags)0x00140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADeformableCollisionsActor, DeformableCollisionsComponent), Z_Construct_UClass_UDeformableCollisionsComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADeformableCollisionsActor_Statics::NewProp_DeformableCollisionsComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADeformableCollisionsActor_Statics::NewProp_DeformableCollisionsComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADeformableCollisionsActor_Statics::NewProp_PrimarySolver_MetaData[] = {
		{ "Category", "Physics" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/ChaosFlesh/ChaosDeformableCollisionsActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADeformableCollisionsActor_Statics::NewProp_PrimarySolver = { "PrimarySolver", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADeformableCollisionsActor, PrimarySolver), Z_Construct_UClass_ADeformableSolverActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADeformableCollisionsActor_Statics::NewProp_PrimarySolver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADeformableCollisionsActor_Statics::NewProp_PrimarySolver_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADeformableCollisionsActor_Statics::NewProp_StaticCollisions_Inner = { "StaticCollisions", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AStaticMeshActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADeformableCollisionsActor_Statics::NewProp_StaticCollisions_MetaData[] = {
		{ "Category", "Physics" },
		{ "DisplayPriority", "2" },
		{ "ModuleRelativePath", "Public/ChaosFlesh/ChaosDeformableCollisionsActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADeformableCollisionsActor_Statics::NewProp_StaticCollisions = { "StaticCollisions", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADeformableCollisionsActor, StaticCollisions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADeformableCollisionsActor_Statics::NewProp_StaticCollisions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADeformableCollisionsActor_Statics::NewProp_StaticCollisions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADeformableCollisionsActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADeformableCollisionsActor_Statics::NewProp_DeformableCollisionsComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADeformableCollisionsActor_Statics::NewProp_PrimarySolver,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADeformableCollisionsActor_Statics::NewProp_StaticCollisions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADeformableCollisionsActor_Statics::NewProp_StaticCollisions,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ADeformableCollisionsActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UDeformableInterface_NoRegister, (int32)VTABLE_OFFSET(ADeformableCollisionsActor, IDeformableInterface), false },  // 221638707
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADeformableCollisionsActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADeformableCollisionsActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADeformableCollisionsActor_Statics::ClassParams = {
		&ADeformableCollisionsActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADeformableCollisionsActor_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADeformableCollisionsActor_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADeformableCollisionsActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADeformableCollisionsActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADeformableCollisionsActor()
	{
		if (!Z_Registration_Info_UClass_ADeformableCollisionsActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADeformableCollisionsActor.OuterSingleton, Z_Construct_UClass_ADeformableCollisionsActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADeformableCollisionsActor.OuterSingleton;
	}
	template<> CHAOSFLESHENGINE_API UClass* StaticClass<ADeformableCollisionsActor>()
	{
		return ADeformableCollisionsActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADeformableCollisionsActor);
	ADeformableCollisionsActor::~ADeformableCollisionsActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableCollisionsActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableCollisionsActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADeformableCollisionsActor, ADeformableCollisionsActor::StaticClass, TEXT("ADeformableCollisionsActor"), &Z_Registration_Info_UClass_ADeformableCollisionsActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADeformableCollisionsActor), 878879487U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableCollisionsActor_h_458880092(TEXT("/Script/ChaosFleshEngine"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableCollisionsActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableCollisionsActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
