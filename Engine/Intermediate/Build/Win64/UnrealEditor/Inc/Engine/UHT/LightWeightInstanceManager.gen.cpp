// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/GameFramework/LightWeightInstanceManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightWeightInstanceManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ALightWeightInstanceManager();
	ENGINE_API UClass* Z_Construct_UClass_ALightWeightInstanceManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorInstanceHandleInterface();
	ENGINE_API UClass* Z_Construct_UClass_UActorInstanceHandleInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UActorInstanceHandleInterface::StaticRegisterNativesUActorInstanceHandleInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorInstanceHandleInterface);
	UClass* Z_Construct_UClass_UActorInstanceHandleInterface_NoRegister()
	{
		return UActorInstanceHandleInterface::StaticClass();
	}
	struct Z_Construct_UClass_UActorInstanceHandleInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorInstanceHandleInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorInstanceHandleInterface_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Base class for interfaces for each handle\n" },
		{ "IncludePath", "GameFramework/LightWeightInstanceManager.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/LightWeightInstanceManager.h" },
		{ "ToolTip", "Base class for interfaces for each handle" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorInstanceHandleInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorInstanceHandleInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorInstanceHandleInterface_Statics::ClassParams = {
		&UActorInstanceHandleInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UActorInstanceHandleInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorInstanceHandleInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorInstanceHandleInterface()
	{
		if (!Z_Registration_Info_UClass_UActorInstanceHandleInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorInstanceHandleInterface.OuterSingleton, Z_Construct_UClass_UActorInstanceHandleInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorInstanceHandleInterface.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UActorInstanceHandleInterface>()
	{
		return UActorInstanceHandleInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorInstanceHandleInterface);
	UActorInstanceHandleInterface::~UActorInstanceHandleInterface() {}
	DEFINE_FUNCTION(ALightWeightInstanceManager::execOnRep_Transforms)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Transforms();
		P_NATIVE_END;
	}
	void ALightWeightInstanceManager::StaticRegisterNativesALightWeightInstanceManager()
	{
		UClass* Class = ALightWeightInstanceManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_Transforms", &ALightWeightInstanceManager::execOnRep_Transforms },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALightWeightInstanceManager_OnRep_Transforms_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALightWeightInstanceManager_OnRep_Transforms_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/LightWeightInstanceManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALightWeightInstanceManager_OnRep_Transforms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALightWeightInstanceManager, nullptr, "OnRep_Transforms", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALightWeightInstanceManager_OnRep_Transforms_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightWeightInstanceManager_OnRep_Transforms_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALightWeightInstanceManager_OnRep_Transforms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALightWeightInstanceManager_OnRep_Transforms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALightWeightInstanceManager);
	UClass* Z_Construct_UClass_ALightWeightInstanceManager_NoRegister()
	{
		return ALightWeightInstanceManager::StaticClass();
	}
	struct Z_Construct_UClass_ALightWeightInstanceManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RepresentedClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_RepresentedClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AcceptedClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AcceptedClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceTransforms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceTransforms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InstanceTransforms;
		static const UECodeGen_Private::FIntPropertyParams NewProp_FreeIndices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FreeIndices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FreeIndices;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ValidIndices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValidIndices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ValidIndices;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALightWeightInstanceManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALightWeightInstanceManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALightWeightInstanceManager_OnRep_Transforms, "OnRep_Transforms" }, // 190512064
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightWeightInstanceManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GameFramework/LightWeightInstanceManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/LightWeightInstanceManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightWeightInstanceManager_Statics::NewProp_RepresentedClass_MetaData[] = {
		{ "Category", "LightWeightInstance" },
		{ "ModuleRelativePath", "Classes/GameFramework/LightWeightInstanceManager.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALightWeightInstanceManager_Statics::NewProp_RepresentedClass = { "RepresentedClass", nullptr, (EPropertyFlags)0x0024080000010021, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALightWeightInstanceManager, RepresentedClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALightWeightInstanceManager_Statics::NewProp_RepresentedClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALightWeightInstanceManager_Statics::NewProp_RepresentedClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightWeightInstanceManager_Statics::NewProp_AcceptedClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/LightWeightInstanceManager.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALightWeightInstanceManager_Statics::NewProp_AcceptedClass = { "AcceptedClass", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALightWeightInstanceManager, AcceptedClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALightWeightInstanceManager_Statics::NewProp_AcceptedClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALightWeightInstanceManager_Statics::NewProp_AcceptedClass_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALightWeightInstanceManager_Statics::NewProp_InstanceTransforms_Inner = { "InstanceTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightWeightInstanceManager_Statics::NewProp_InstanceTransforms_MetaData[] = {
		{ "Category", "LightWeightInstance" },
		{ "Comment", "// Current per instance transforms\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/LightWeightInstanceManager.h" },
		{ "ToolTip", "Current per instance transforms" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALightWeightInstanceManager_Statics::NewProp_InstanceTransforms = { "InstanceTransforms", "OnRep_Transforms", (EPropertyFlags)0x0020080100000821, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALightWeightInstanceManager, InstanceTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ALightWeightInstanceManager_Statics::NewProp_InstanceTransforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALightWeightInstanceManager_Statics::NewProp_InstanceTransforms_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALightWeightInstanceManager_Statics::NewProp_FreeIndices_Inner = { "FreeIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightWeightInstanceManager_Statics::NewProp_FreeIndices_MetaData[] = {
		{ "Comment", "// list of indices that we are no longer using\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/LightWeightInstanceManager.h" },
		{ "ToolTip", "list of indices that we are no longer using" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALightWeightInstanceManager_Statics::NewProp_FreeIndices = { "FreeIndices", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALightWeightInstanceManager, FreeIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ALightWeightInstanceManager_Statics::NewProp_FreeIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALightWeightInstanceManager_Statics::NewProp_FreeIndices_MetaData)) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALightWeightInstanceManager_Statics::NewProp_ValidIndices_Inner = { "ValidIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightWeightInstanceManager_Statics::NewProp_ValidIndices_MetaData[] = {
		{ "Comment", "// handy way to check indices quickly so we don't need to iterate through the free indices list\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/LightWeightInstanceManager.h" },
		{ "ToolTip", "handy way to check indices quickly so we don't need to iterate through the free indices list" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALightWeightInstanceManager_Statics::NewProp_ValidIndices = { "ValidIndices", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALightWeightInstanceManager, ValidIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ALightWeightInstanceManager_Statics::NewProp_ValidIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALightWeightInstanceManager_Statics::NewProp_ValidIndices_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALightWeightInstanceManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightWeightInstanceManager_Statics::NewProp_RepresentedClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightWeightInstanceManager_Statics::NewProp_AcceptedClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightWeightInstanceManager_Statics::NewProp_InstanceTransforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightWeightInstanceManager_Statics::NewProp_InstanceTransforms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightWeightInstanceManager_Statics::NewProp_FreeIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightWeightInstanceManager_Statics::NewProp_FreeIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightWeightInstanceManager_Statics::NewProp_ValidIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightWeightInstanceManager_Statics::NewProp_ValidIndices,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALightWeightInstanceManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALightWeightInstanceManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALightWeightInstanceManager_Statics::ClassParams = {
		&ALightWeightInstanceManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALightWeightInstanceManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALightWeightInstanceManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALightWeightInstanceManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALightWeightInstanceManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALightWeightInstanceManager()
	{
		if (!Z_Registration_Info_UClass_ALightWeightInstanceManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALightWeightInstanceManager.OuterSingleton, Z_Construct_UClass_ALightWeightInstanceManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALightWeightInstanceManager.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ALightWeightInstanceManager>()
	{
		return ALightWeightInstanceManager::StaticClass();
	}

	void ALightWeightInstanceManager::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_RepresentedClass(TEXT("RepresentedClass"));
		static const FName Name_InstanceTransforms(TEXT("InstanceTransforms"));
		static const FName Name_FreeIndices(TEXT("FreeIndices"));
		static const FName Name_ValidIndices(TEXT("ValidIndices"));

		const bool bIsValid = true
			&& Name_RepresentedClass == ClassReps[(int32)ENetFields_Private::RepresentedClass].Property->GetFName()
			&& Name_InstanceTransforms == ClassReps[(int32)ENetFields_Private::InstanceTransforms].Property->GetFName()
			&& Name_FreeIndices == ClassReps[(int32)ENetFields_Private::FreeIndices].Property->GetFName()
			&& Name_ValidIndices == ClassReps[(int32)ENetFields_Private::ValidIndices].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ALightWeightInstanceManager"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALightWeightInstanceManager);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LightWeightInstanceManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LightWeightInstanceManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorInstanceHandleInterface, UActorInstanceHandleInterface::StaticClass, TEXT("UActorInstanceHandleInterface"), &Z_Registration_Info_UClass_UActorInstanceHandleInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorInstanceHandleInterface), 1825011747U) },
		{ Z_Construct_UClass_ALightWeightInstanceManager, ALightWeightInstanceManager::StaticClass, TEXT("ALightWeightInstanceManager"), &Z_Registration_Info_UClass_ALightWeightInstanceManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALightWeightInstanceManager), 763483808U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LightWeightInstanceManager_h_2476227323(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LightWeightInstanceManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LightWeightInstanceManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
