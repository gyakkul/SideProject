// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Components/PostProcessComponent.h"
#include "../../Source/Runtime/Engine/Classes/Engine/Scene.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePostProcessComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlendableInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_PostProcessVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPostProcessComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPostProcessComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(UPostProcessComponent::execAddOrUpdateBlendable)
	{
		P_GET_TINTERFACE(IBlendableInterface,Z_Param_InBlendableObject);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InWeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddOrUpdateBlendable(Z_Param_InBlendableObject,Z_Param_InWeight);
		P_NATIVE_END;
	}
	void UPostProcessComponent::StaticRegisterNativesUPostProcessComponent()
	{
		UClass* Class = UPostProcessComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddOrUpdateBlendable", &UPostProcessComponent::execAddOrUpdateBlendable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPostProcessComponent_AddOrUpdateBlendable_Statics
	{
		struct PostProcessComponent_eventAddOrUpdateBlendable_Parms
		{
			TScriptInterface<IBlendableInterface> InBlendableObject;
			float InWeight;
		};
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_InBlendableObject;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InWeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UPostProcessComponent_AddOrUpdateBlendable_Statics::NewProp_InBlendableObject = { "InBlendableObject", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PostProcessComponent_eventAddOrUpdateBlendable_Parms, InBlendableObject), Z_Construct_UClass_UBlendableInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPostProcessComponent_AddOrUpdateBlendable_Statics::NewProp_InWeight = { "InWeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PostProcessComponent_eventAddOrUpdateBlendable_Parms, InWeight), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPostProcessComponent_AddOrUpdateBlendable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPostProcessComponent_AddOrUpdateBlendable_Statics::NewProp_InBlendableObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPostProcessComponent_AddOrUpdateBlendable_Statics::NewProp_InWeight,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPostProcessComponent_AddOrUpdateBlendable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Adds an Blendable (implements IBlendableInterface) to the array of Blendables (if it doesn't exist) and update the weight */" },
		{ "CPP_Default_InWeight", "1.000000" },
		{ "ModuleRelativePath", "Classes/Components/PostProcessComponent.h" },
		{ "ToolTip", "Adds an Blendable (implements IBlendableInterface) to the array of Blendables (if it doesn't exist) and update the weight" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPostProcessComponent_AddOrUpdateBlendable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPostProcessComponent, nullptr, "AddOrUpdateBlendable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPostProcessComponent_AddOrUpdateBlendable_Statics::PostProcessComponent_eventAddOrUpdateBlendable_Parms), Z_Construct_UFunction_UPostProcessComponent_AddOrUpdateBlendable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPostProcessComponent_AddOrUpdateBlendable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPostProcessComponent_AddOrUpdateBlendable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPostProcessComponent_AddOrUpdateBlendable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPostProcessComponent_AddOrUpdateBlendable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPostProcessComponent_AddOrUpdateBlendable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPostProcessComponent);
	UClass* Z_Construct_UClass_UPostProcessComponent_NoRegister()
	{
		return UPostProcessComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPostProcessComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUnbound_MetaData[];
#endif
		static void NewProp_bUnbound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUnbound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPostProcessComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPostProcessComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPostProcessComponent_AddOrUpdateBlendable, "AddOrUpdateBlendable" }, // 3074123924
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPostProcessComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/**\n *  PostProcessComponent. Enables Post process controls for blueprints.\n *\x09Will use a parent UShapeComponent to provide volume data if available.\n */" },
		{ "HideCategories", "Object Trigger PhysicsVolume" },
		{ "IncludePath", "Components/PostProcessComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/PostProcessComponent.h" },
		{ "ToolTip", "PostProcessComponent. Enables Post process controls for blueprints.\n   Will use a parent UShapeComponent to provide volume data if available." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "PostProcessVolume" },
		{ "Comment", "/** Post process settings to use for this volume. */" },
		{ "ModuleRelativePath", "Classes/Components/PostProcessComponent.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Post process settings to use for this volume." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPostProcessComponent, Settings), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_Settings_MetaData)) }; // 1889339962
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "PostProcessVolume" },
		{ "Comment", "/**\n\x09 * Priority of this volume. In the case of overlapping volumes the one with the highest priority\n\x09 * overrides the lower priority ones. The order is undefined if two or more overlapping volumes have the same priority.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/PostProcessComponent.h" },
		{ "ToolTip", "Priority of this volume. In the case of overlapping volumes the one with the highest priority\noverrides the lower priority ones. The order is undefined if two or more overlapping volumes have the same priority." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPostProcessComponent, Priority), METADATA_PARAMS(Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_BlendRadius_MetaData[] = {
		{ "Category", "PostProcessVolume" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** World space radius around the volume that is used for blending (only if not unbound).\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Components/PostProcessComponent.h" },
		{ "ToolTip", "World space radius around the volume that is used for blending (only if not unbound)." },
		{ "UIMax", "6000.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_BlendRadius = { "BlendRadius", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPostProcessComponent, BlendRadius), METADATA_PARAMS(Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_BlendRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_BlendRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_BlendWeight_MetaData[] = {
		{ "Category", "PostProcessVolume" },
		{ "Comment", "/** 0:no effect, 1:full effect */" },
		{ "ModuleRelativePath", "Classes/Components/PostProcessComponent.h" },
		{ "ToolTip", "0:no effect, 1:full effect" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_BlendWeight = { "BlendWeight", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPostProcessComponent, BlendWeight), METADATA_PARAMS(Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_BlendWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_BlendWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "PostProcessVolume" },
		{ "Comment", "/** Whether this volume is enabled or not.\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Components/PostProcessComponent.h" },
		{ "ToolTip", "Whether this volume is enabled or not." },
	};
#endif
	void Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((UPostProcessComponent*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UPostProcessComponent), &Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_bUnbound_MetaData[] = {
		{ "Category", "PostProcessVolume" },
		{ "Comment", "/** set this to false to use the parent shape component as volume bounds. True affects the whole world regardless.\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Components/PostProcessComponent.h" },
		{ "ToolTip", "set this to false to use the parent shape component as volume bounds. True affects the whole world regardless." },
	};
#endif
	void Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_bUnbound_SetBit(void* Obj)
	{
		((UPostProcessComponent*)Obj)->bUnbound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_bUnbound = { "bUnbound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UPostProcessComponent), &Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_bUnbound_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_bUnbound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_bUnbound_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPostProcessComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_BlendRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_BlendWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_bUnbound,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPostProcessComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_PostProcessVolume_NoRegister, (int32)VTABLE_OFFSET(UPostProcessComponent, IInterface_PostProcessVolume), false },  // 3885449434
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPostProcessComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPostProcessComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPostProcessComponent_Statics::ClassParams = {
		&UPostProcessComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPostProcessComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPostProcessComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A830A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPostProcessComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPostProcessComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPostProcessComponent()
	{
		if (!Z_Registration_Info_UClass_UPostProcessComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPostProcessComponent.OuterSingleton, Z_Construct_UClass_UPostProcessComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPostProcessComponent.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UPostProcessComponent>()
	{
		return UPostProcessComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPostProcessComponent);
	UPostProcessComponent::~UPostProcessComponent() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPostProcessComponent)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_PostProcessComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_PostProcessComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPostProcessComponent, UPostProcessComponent::StaticClass, TEXT("UPostProcessComponent"), &Z_Registration_Info_UClass_UPostProcessComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPostProcessComponent), 1586741405U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_PostProcessComponent_h_800612477(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_PostProcessComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_PostProcessComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
