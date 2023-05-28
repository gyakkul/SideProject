// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuCO/CustomizableSkeletalComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableSkeletalComponent() {}
// Cross Module References
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableObjectInstance_NoRegister();
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableSkeletalComponent();
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableSkeletalComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_CustomizableObject();
// End Cross Module References
	DEFINE_FUNCTION(UCustomizableSkeletalComponent::execUpdateSkeletalMeshAsync)
	{
		P_GET_UBOOL(Z_Param_bNeverSkipUpdate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSkeletalMeshAsync(Z_Param_bNeverSkipUpdate);
		P_NATIVE_END;
	}
	void UCustomizableSkeletalComponent::StaticRegisterNativesUCustomizableSkeletalComponent()
	{
		UClass* Class = UCustomizableSkeletalComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateSkeletalMeshAsync", &UCustomizableSkeletalComponent::execUpdateSkeletalMeshAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCustomizableSkeletalComponent_UpdateSkeletalMeshAsync_Statics
	{
		struct CustomizableSkeletalComponent_eventUpdateSkeletalMeshAsync_Parms
		{
			bool bNeverSkipUpdate;
		};
		static void NewProp_bNeverSkipUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeverSkipUpdate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCustomizableSkeletalComponent_UpdateSkeletalMeshAsync_Statics::NewProp_bNeverSkipUpdate_SetBit(void* Obj)
	{
		((CustomizableSkeletalComponent_eventUpdateSkeletalMeshAsync_Parms*)Obj)->bNeverSkipUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomizableSkeletalComponent_UpdateSkeletalMeshAsync_Statics::NewProp_bNeverSkipUpdate = { "bNeverSkipUpdate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CustomizableSkeletalComponent_eventUpdateSkeletalMeshAsync_Parms), &Z_Construct_UFunction_UCustomizableSkeletalComponent_UpdateSkeletalMeshAsync_Statics::NewProp_bNeverSkipUpdate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableSkeletalComponent_UpdateSkeletalMeshAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableSkeletalComponent_UpdateSkeletalMeshAsync_Statics::NewProp_bNeverSkipUpdate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableSkeletalComponent_UpdateSkeletalMeshAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObject" },
		{ "CPP_Default_bNeverSkipUpdate", "false" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableSkeletalComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableSkeletalComponent_UpdateSkeletalMeshAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableSkeletalComponent, nullptr, "UpdateSkeletalMeshAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableSkeletalComponent_UpdateSkeletalMeshAsync_Statics::CustomizableSkeletalComponent_eventUpdateSkeletalMeshAsync_Parms), Z_Construct_UFunction_UCustomizableSkeletalComponent_UpdateSkeletalMeshAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableSkeletalComponent_UpdateSkeletalMeshAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableSkeletalComponent_UpdateSkeletalMeshAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableSkeletalComponent_UpdateSkeletalMeshAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableSkeletalComponent_UpdateSkeletalMeshAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableSkeletalComponent_UpdateSkeletalMeshAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableSkeletalComponent);
	UClass* Z_Construct_UClass_UCustomizableSkeletalComponent_NoRegister()
	{
		return UCustomizableSkeletalComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableSkeletalComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkippedLastRenderTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SkippedLastRenderTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomizableObjectInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CustomizableObjectInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ComponentIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableSkeletalComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCustomizableSkeletalComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomizableSkeletalComponent_UpdateSkeletalMeshAsync, "UpdateSkeletalMeshAsync" }, // 3750758792
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableSkeletalComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "CustomizableObject" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "MuCO/CustomizableSkeletalComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableSkeletalComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableSkeletalComponent_Statics::NewProp_SkippedLastRenderTime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableSkeletalComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomizableSkeletalComponent_Statics::NewProp_SkippedLastRenderTime = { "SkippedLastRenderTime", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableSkeletalComponent, SkippedLastRenderTime), METADATA_PARAMS(Z_Construct_UClass_UCustomizableSkeletalComponent_Statics::NewProp_SkippedLastRenderTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableSkeletalComponent_Statics::NewProp_SkippedLastRenderTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableSkeletalComponent_Statics::NewProp_CustomizableObjectInstance_MetaData[] = {
		{ "Category", "CustomizableSkeletalMesh" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableSkeletalComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCustomizableSkeletalComponent_Statics::NewProp_CustomizableObjectInstance = { "CustomizableObjectInstance", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableSkeletalComponent, CustomizableObjectInstance), Z_Construct_UClass_UCustomizableObjectInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCustomizableSkeletalComponent_Statics::NewProp_CustomizableObjectInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableSkeletalComponent_Statics::NewProp_CustomizableObjectInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableSkeletalComponent_Statics::NewProp_ComponentIndex_MetaData[] = {
		{ "Category", "CustomizableSkeletalMesh" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableSkeletalComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCustomizableSkeletalComponent_Statics::NewProp_ComponentIndex = { "ComponentIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableSkeletalComponent, ComponentIndex), METADATA_PARAMS(Z_Construct_UClass_UCustomizableSkeletalComponent_Statics::NewProp_ComponentIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableSkeletalComponent_Statics::NewProp_ComponentIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizableSkeletalComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableSkeletalComponent_Statics::NewProp_SkippedLastRenderTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableSkeletalComponent_Statics::NewProp_CustomizableObjectInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableSkeletalComponent_Statics::NewProp_ComponentIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableSkeletalComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableSkeletalComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableSkeletalComponent_Statics::ClassParams = {
		&UCustomizableSkeletalComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCustomizableSkeletalComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableSkeletalComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomizableSkeletalComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableSkeletalComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizableSkeletalComponent()
	{
		if (!Z_Registration_Info_UClass_UCustomizableSkeletalComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableSkeletalComponent.OuterSingleton, Z_Construct_UClass_UCustomizableSkeletalComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableSkeletalComponent.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECT_API UClass* StaticClass<UCustomizableSkeletalComponent>()
	{
		return UCustomizableSkeletalComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableSkeletalComponent);
	UCustomizableSkeletalComponent::~UCustomizableSkeletalComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableSkeletalComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableSkeletalComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableSkeletalComponent, UCustomizableSkeletalComponent::StaticClass, TEXT("UCustomizableSkeletalComponent"), &Z_Registration_Info_UClass_UCustomizableSkeletalComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableSkeletalComponent), 299858598U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableSkeletalComponent_h_3864871639(TEXT("/Script/CustomizableObject"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableSkeletalComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableSkeletalComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
