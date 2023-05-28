// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosFlesh/ChaosDeformableCollisionsComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosDeformableCollisionsComponent() {}
// Cross Module References
	CHAOSFLESHENGINE_API UClass* Z_Construct_UClass_UDeformableCollisionsComponent();
	CHAOSFLESHENGINE_API UClass* Z_Construct_UClass_UDeformableCollisionsComponent_NoRegister();
	CHAOSFLESHENGINE_API UClass* Z_Construct_UClass_UDeformablePhysicsComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ChaosFleshEngine();
// End Cross Module References
	DEFINE_FUNCTION(UDeformableCollisionsComponent::execRemoveStaticMeshComponent)
	{
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_StaticMeshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveStaticMeshComponent(Z_Param_StaticMeshComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDeformableCollisionsComponent::execAddStaticMeshComponent)
	{
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_StaticMeshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddStaticMeshComponent(Z_Param_StaticMeshComponent);
		P_NATIVE_END;
	}
	void UDeformableCollisionsComponent::StaticRegisterNativesUDeformableCollisionsComponent()
	{
		UClass* Class = UDeformableCollisionsComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddStaticMeshComponent", &UDeformableCollisionsComponent::execAddStaticMeshComponent },
			{ "RemoveStaticMeshComponent", &UDeformableCollisionsComponent::execRemoveStaticMeshComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDeformableCollisionsComponent_AddStaticMeshComponent_Statics
	{
		struct DeformableCollisionsComponent_eventAddStaticMeshComponent_Parms
		{
			UStaticMeshComponent* StaticMeshComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeformableCollisionsComponent_AddStaticMeshComponent_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDeformableCollisionsComponent_AddStaticMeshComponent_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DeformableCollisionsComponent_eventAddStaticMeshComponent_Parms, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDeformableCollisionsComponent_AddStaticMeshComponent_Statics::NewProp_StaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeformableCollisionsComponent_AddStaticMeshComponent_Statics::NewProp_StaticMeshComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDeformableCollisionsComponent_AddStaticMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeformableCollisionsComponent_AddStaticMeshComponent_Statics::NewProp_StaticMeshComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeformableCollisionsComponent_AddStaticMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "ModuleRelativePath", "Public/ChaosFlesh/ChaosDeformableCollisionsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeformableCollisionsComponent_AddStaticMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeformableCollisionsComponent, nullptr, "AddStaticMeshComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDeformableCollisionsComponent_AddStaticMeshComponent_Statics::DeformableCollisionsComponent_eventAddStaticMeshComponent_Parms), Z_Construct_UFunction_UDeformableCollisionsComponent_AddStaticMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeformableCollisionsComponent_AddStaticMeshComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDeformableCollisionsComponent_AddStaticMeshComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeformableCollisionsComponent_AddStaticMeshComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDeformableCollisionsComponent_AddStaticMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDeformableCollisionsComponent_AddStaticMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDeformableCollisionsComponent_RemoveStaticMeshComponent_Statics
	{
		struct DeformableCollisionsComponent_eventRemoveStaticMeshComponent_Parms
		{
			UStaticMeshComponent* StaticMeshComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeformableCollisionsComponent_RemoveStaticMeshComponent_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDeformableCollisionsComponent_RemoveStaticMeshComponent_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DeformableCollisionsComponent_eventRemoveStaticMeshComponent_Parms, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDeformableCollisionsComponent_RemoveStaticMeshComponent_Statics::NewProp_StaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeformableCollisionsComponent_RemoveStaticMeshComponent_Statics::NewProp_StaticMeshComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDeformableCollisionsComponent_RemoveStaticMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeformableCollisionsComponent_RemoveStaticMeshComponent_Statics::NewProp_StaticMeshComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeformableCollisionsComponent_RemoveStaticMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "ModuleRelativePath", "Public/ChaosFlesh/ChaosDeformableCollisionsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeformableCollisionsComponent_RemoveStaticMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeformableCollisionsComponent, nullptr, "RemoveStaticMeshComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDeformableCollisionsComponent_RemoveStaticMeshComponent_Statics::DeformableCollisionsComponent_eventRemoveStaticMeshComponent_Parms), Z_Construct_UFunction_UDeformableCollisionsComponent_RemoveStaticMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeformableCollisionsComponent_RemoveStaticMeshComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDeformableCollisionsComponent_RemoveStaticMeshComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeformableCollisionsComponent_RemoveStaticMeshComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDeformableCollisionsComponent_RemoveStaticMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDeformableCollisionsComponent_RemoveStaticMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDeformableCollisionsComponent);
	UClass* Z_Construct_UClass_UDeformableCollisionsComponent_NoRegister()
	{
		return UDeformableCollisionsComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDeformableCollisionsComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CollisionBodies_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionBodies_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CollisionBodies;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDeformableCollisionsComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeformablePhysicsComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosFleshEngine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDeformableCollisionsComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDeformableCollisionsComponent_AddStaticMeshComponent, "AddStaticMeshComponent" }, // 769371024
		{ &Z_Construct_UFunction_UDeformableCollisionsComponent_RemoveStaticMeshComponent, "RemoveStaticMeshComponent" }, // 509279064
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeformableCollisionsComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "Comment", "/**\n*\x09UDeformableCollisionsComponent\n*/" },
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "ChaosFlesh/ChaosDeformableCollisionsComponent.h" },
		{ "ModuleRelativePath", "Public/ChaosFlesh/ChaosDeformableCollisionsComponent.h" },
		{ "ToolTip", "UDeformableCollisionsComponent" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDeformableCollisionsComponent_Statics::NewProp_CollisionBodies_Inner = { "CollisionBodies", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeformableCollisionsComponent_Statics::NewProp_CollisionBodies_MetaData[] = {
		{ "Category", "Physics" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ChaosFlesh/ChaosDeformableCollisionsComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDeformableCollisionsComponent_Statics::NewProp_CollisionBodies = { "CollisionBodies", nullptr, (EPropertyFlags)0x001400800000001c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDeformableCollisionsComponent, CollisionBodies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDeformableCollisionsComponent_Statics::NewProp_CollisionBodies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeformableCollisionsComponent_Statics::NewProp_CollisionBodies_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDeformableCollisionsComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeformableCollisionsComponent_Statics::NewProp_CollisionBodies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeformableCollisionsComponent_Statics::NewProp_CollisionBodies,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDeformableCollisionsComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeformableCollisionsComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDeformableCollisionsComponent_Statics::ClassParams = {
		&UDeformableCollisionsComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDeformableCollisionsComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDeformableCollisionsComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDeformableCollisionsComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDeformableCollisionsComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDeformableCollisionsComponent()
	{
		if (!Z_Registration_Info_UClass_UDeformableCollisionsComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDeformableCollisionsComponent.OuterSingleton, Z_Construct_UClass_UDeformableCollisionsComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDeformableCollisionsComponent.OuterSingleton;
	}
	template<> CHAOSFLESHENGINE_API UClass* StaticClass<UDeformableCollisionsComponent>()
	{
		return UDeformableCollisionsComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDeformableCollisionsComponent);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableCollisionsComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableCollisionsComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDeformableCollisionsComponent, UDeformableCollisionsComponent::StaticClass, TEXT("UDeformableCollisionsComponent"), &Z_Registration_Info_UClass_UDeformableCollisionsComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDeformableCollisionsComponent), 3548016116U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableCollisionsComponent_h_1394578433(TEXT("/Script/ChaosFleshEngine"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableCollisionsComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableCollisionsComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
