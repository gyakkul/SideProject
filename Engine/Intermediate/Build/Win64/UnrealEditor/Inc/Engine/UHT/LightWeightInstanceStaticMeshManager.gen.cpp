// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/GameFramework/LightWeightInstanceStaticMeshManager.h"
#include "../../Source/Runtime/Engine/Classes/Engine/ActorInstanceHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightWeightInstanceStaticMeshManager() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ALightWeightInstanceManager();
	ENGINE_API UClass* Z_Construct_UClass_ALightWeightInstanceStaticMeshManager();
	ENGINE_API UClass* Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USMInstanceManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnActorReady__DelegateSignature();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorInstanceHandle();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Engine_OnActorReady__DelegateSignature_Statics
	{
		struct _Script_Engine_eventOnActorReady_Parms
		{
			FActorInstanceHandle InHandle;
			FActorInstanceHandle ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Engine_OnActorReady__DelegateSignature_Statics::NewProp_InHandle = { "InHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventOnActorReady_Parms, InHandle), Z_Construct_UScriptStruct_FActorInstanceHandle, METADATA_PARAMS(nullptr, 0) }; // 3551898001
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Engine_OnActorReady__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventOnActorReady_Parms, ReturnValue), Z_Construct_UScriptStruct_FActorInstanceHandle, METADATA_PARAMS(nullptr, 0) }; // 3551898001
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnActorReady__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnActorReady__DelegateSignature_Statics::NewProp_InHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnActorReady__DelegateSignature_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnActorReady__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/LightWeightInstanceStaticMeshManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnActorReady__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnActorReady__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Engine_OnActorReady__DelegateSignature_Statics::_Script_Engine_eventOnActorReady_Parms), Z_Construct_UDelegateFunction_Engine_OnActorReady__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnActorReady__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnActorReady__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnActorReady__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnActorReady__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnActorReady__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
FActorInstanceHandle FOnActorReady_DelegateWrapper(const FScriptDelegate& OnActorReady, FActorInstanceHandle InHandle)
{
	struct _Script_Engine_eventOnActorReady_Parms
	{
		FActorInstanceHandle InHandle;
		FActorInstanceHandle ReturnValue;
	};
	_Script_Engine_eventOnActorReady_Parms Parms;
	Parms.InHandle=InHandle;
	OnActorReady.ProcessDelegate<UObject>(&Parms);
	return Parms.ReturnValue;
}
	DEFINE_FUNCTION(ALightWeightInstanceStaticMeshManager::execOnRep_StaticMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_StaticMesh();
		P_NATIVE_END;
	}
	void ALightWeightInstanceStaticMeshManager::StaticRegisterNativesALightWeightInstanceStaticMeshManager()
	{
		UClass* Class = ALightWeightInstanceStaticMeshManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_StaticMesh", &ALightWeightInstanceStaticMeshManager::execOnRep_StaticMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALightWeightInstanceStaticMeshManager_OnRep_StaticMesh_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALightWeightInstanceStaticMeshManager_OnRep_StaticMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/LightWeightInstanceStaticMeshManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALightWeightInstanceStaticMeshManager_OnRep_StaticMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALightWeightInstanceStaticMeshManager, nullptr, "OnRep_StaticMesh", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALightWeightInstanceStaticMeshManager_OnRep_StaticMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightWeightInstanceStaticMeshManager_OnRep_StaticMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALightWeightInstanceStaticMeshManager_OnRep_StaticMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALightWeightInstanceStaticMeshManager_OnRep_StaticMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALightWeightInstanceStaticMeshManager);
	UClass* Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_NoRegister()
	{
		return ALightWeightInstanceStaticMeshManager::StaticClass();
	}
	struct Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstancedStaticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InstancedStaticMeshComponent;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RenderingIndicesToDataIndices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderingIndicesToDataIndices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RenderingIndicesToDataIndices;
		static const UECodeGen_Private::FIntPropertyParams NewProp_DataIndicesToRenderingIndices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataIndicesToRenderingIndices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataIndicesToRenderingIndices;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALightWeightInstanceManager,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALightWeightInstanceStaticMeshManager_OnRep_StaticMesh, "OnRep_StaticMesh" }, // 1493709804
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GameFramework/LightWeightInstanceStaticMeshManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/LightWeightInstanceStaticMeshManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Classes/GameFramework/LightWeightInstanceStaticMeshManager.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::NewProp_StaticMesh = { "StaticMesh", "OnRep_StaticMesh", (EPropertyFlags)0x0024080100000835, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALightWeightInstanceStaticMeshManager, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::NewProp_InstancedStaticMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BlueprintProtected", "true" },
		{ "Category", "Debug" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/LightWeightInstanceStaticMeshManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::NewProp_InstancedStaticMeshComponent = { "InstancedStaticMeshComponent", nullptr, (EPropertyFlags)0x00240c000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALightWeightInstanceStaticMeshManager, InstancedStaticMeshComponent), Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::NewProp_InstancedStaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::NewProp_InstancedStaticMeshComponent_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::NewProp_RenderingIndicesToDataIndices_Inner = { "RenderingIndicesToDataIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::NewProp_RenderingIndicesToDataIndices_MetaData[] = {
		{ "Comment", "// keep track of the relationship between our data and the rendering data stored in the instanced static mesh component\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/LightWeightInstanceStaticMeshManager.h" },
		{ "ToolTip", "keep track of the relationship between our data and the rendering data stored in the instanced static mesh component" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::NewProp_RenderingIndicesToDataIndices = { "RenderingIndicesToDataIndices", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALightWeightInstanceStaticMeshManager, RenderingIndicesToDataIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::NewProp_RenderingIndicesToDataIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::NewProp_RenderingIndicesToDataIndices_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::NewProp_DataIndicesToRenderingIndices_Inner = { "DataIndicesToRenderingIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::NewProp_DataIndicesToRenderingIndices_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/LightWeightInstanceStaticMeshManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::NewProp_DataIndicesToRenderingIndices = { "DataIndicesToRenderingIndices", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALightWeightInstanceStaticMeshManager, DataIndicesToRenderingIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::NewProp_DataIndicesToRenderingIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::NewProp_DataIndicesToRenderingIndices_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::NewProp_InstancedStaticMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::NewProp_RenderingIndicesToDataIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::NewProp_RenderingIndicesToDataIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::NewProp_DataIndicesToRenderingIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::NewProp_DataIndicesToRenderingIndices,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USMInstanceManager_NoRegister, (int32)VTABLE_OFFSET(ALightWeightInstanceStaticMeshManager, ISMInstanceManager), false },  // 399041778
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALightWeightInstanceStaticMeshManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::ClassParams = {
		&ALightWeightInstanceStaticMeshManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALightWeightInstanceStaticMeshManager()
	{
		if (!Z_Registration_Info_UClass_ALightWeightInstanceStaticMeshManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALightWeightInstanceStaticMeshManager.OuterSingleton, Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALightWeightInstanceStaticMeshManager.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ALightWeightInstanceStaticMeshManager>()
	{
		return ALightWeightInstanceStaticMeshManager::StaticClass();
	}

	void ALightWeightInstanceStaticMeshManager::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_StaticMesh(TEXT("StaticMesh"));
		static const FName Name_RenderingIndicesToDataIndices(TEXT("RenderingIndicesToDataIndices"));
		static const FName Name_DataIndicesToRenderingIndices(TEXT("DataIndicesToRenderingIndices"));

		const bool bIsValid = true
			&& Name_StaticMesh == ClassReps[(int32)ENetFields_Private::StaticMesh].Property->GetFName()
			&& Name_RenderingIndicesToDataIndices == ClassReps[(int32)ENetFields_Private::RenderingIndicesToDataIndices].Property->GetFName()
			&& Name_DataIndicesToRenderingIndices == ClassReps[(int32)ENetFields_Private::DataIndicesToRenderingIndices].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ALightWeightInstanceStaticMeshManager"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALightWeightInstanceStaticMeshManager);
	ALightWeightInstanceStaticMeshManager::~ALightWeightInstanceStaticMeshManager() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LightWeightInstanceStaticMeshManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LightWeightInstanceStaticMeshManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALightWeightInstanceStaticMeshManager, ALightWeightInstanceStaticMeshManager::StaticClass, TEXT("ALightWeightInstanceStaticMeshManager"), &Z_Registration_Info_UClass_ALightWeightInstanceStaticMeshManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALightWeightInstanceStaticMeshManager), 1265861874U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LightWeightInstanceStaticMeshManager_h_1568539902(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LightWeightInstanceStaticMeshManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LightWeightInstanceStaticMeshManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
