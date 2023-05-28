// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/PostProcessVolume.h"
#include "../../Source/Runtime/Engine/Classes/Engine/Scene.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePostProcessVolume() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APostProcessVolume();
	ENGINE_API UClass* Z_Construct_UClass_APostProcessVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	ENGINE_API UClass* Z_Construct_UClass_UBlendableInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_PostProcessVolume_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(APostProcessVolume::execAddOrUpdateBlendable)
	{
		P_GET_TINTERFACE(IBlendableInterface,Z_Param_InBlendableObject);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InWeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddOrUpdateBlendable(Z_Param_InBlendableObject,Z_Param_InWeight);
		P_NATIVE_END;
	}
	void APostProcessVolume::StaticRegisterNativesAPostProcessVolume()
	{
		UClass* Class = APostProcessVolume::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddOrUpdateBlendable", &APostProcessVolume::execAddOrUpdateBlendable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APostProcessVolume_AddOrUpdateBlendable_Statics
	{
		struct PostProcessVolume_eventAddOrUpdateBlendable_Parms
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
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_APostProcessVolume_AddOrUpdateBlendable_Statics::NewProp_InBlendableObject = { "InBlendableObject", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PostProcessVolume_eventAddOrUpdateBlendable_Parms, InBlendableObject), Z_Construct_UClass_UBlendableInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APostProcessVolume_AddOrUpdateBlendable_Statics::NewProp_InWeight = { "InWeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PostProcessVolume_eventAddOrUpdateBlendable_Parms, InWeight), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APostProcessVolume_AddOrUpdateBlendable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APostProcessVolume_AddOrUpdateBlendable_Statics::NewProp_InBlendableObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APostProcessVolume_AddOrUpdateBlendable_Statics::NewProp_InWeight,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APostProcessVolume_AddOrUpdateBlendable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Adds an Blendable (implements IBlendableInterface) to the array of Blendables (if it doesn't exist) and update the weight */" },
		{ "CPP_Default_InWeight", "1.000000" },
		{ "ModuleRelativePath", "Classes/Engine/PostProcessVolume.h" },
		{ "ToolTip", "Adds an Blendable (implements IBlendableInterface) to the array of Blendables (if it doesn't exist) and update the weight" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APostProcessVolume_AddOrUpdateBlendable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APostProcessVolume, nullptr, "AddOrUpdateBlendable", nullptr, nullptr, sizeof(Z_Construct_UFunction_APostProcessVolume_AddOrUpdateBlendable_Statics::PostProcessVolume_eventAddOrUpdateBlendable_Parms), Z_Construct_UFunction_APostProcessVolume_AddOrUpdateBlendable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APostProcessVolume_AddOrUpdateBlendable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APostProcessVolume_AddOrUpdateBlendable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APostProcessVolume_AddOrUpdateBlendable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APostProcessVolume_AddOrUpdateBlendable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APostProcessVolume_AddOrUpdateBlendable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APostProcessVolume);
	UClass* Z_Construct_UClass_APostProcessVolume_NoRegister()
	{
		return APostProcessVolume::StaticClass();
	}
	struct Z_Construct_UClass_APostProcessVolume_Statics
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
	UObject* (*const Z_Construct_UClass_APostProcessVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APostProcessVolume_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APostProcessVolume_AddOrUpdateBlendable, "AddOrUpdateBlendable" }, // 1091145881
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APostProcessVolume_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "PostProcessVolume" },
		{ "Comment", "// for FPostprocessSettings\n" },
		{ "HideCategories", "Advanced Collision Volume Brush Attachment Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "Engine/PostProcessVolume.h" },
		{ "ModuleRelativePath", "Classes/Engine/PostProcessVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "for FPostprocessSettings" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APostProcessVolume_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "PostProcessVolumeSettings" },
		{ "Comment", "/** Post process settings to use for this volume. */" },
		{ "ModuleRelativePath", "Classes/Engine/PostProcessVolume.h" },
		{ "ShowPostProcessCategories", "" },
		{ "ToolTip", "Post process settings to use for this volume." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APostProcessVolume_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APostProcessVolume, Settings), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(Z_Construct_UClass_APostProcessVolume_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APostProcessVolume_Statics::NewProp_Settings_MetaData)) }; // 1889339962
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APostProcessVolume_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "PostProcessVolumeSettings" },
		{ "Comment", "/**\n\x09 * Priority of this volume. In the case of overlapping volumes the one with the highest priority\n\x09 * overrides the lower priority ones. The order is undefined if two or more overlapping volumes have the same priority.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/PostProcessVolume.h" },
		{ "ToolTip", "Priority of this volume. In the case of overlapping volumes the one with the highest priority\noverrides the lower priority ones. The order is undefined if two or more overlapping volumes have the same priority." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APostProcessVolume_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APostProcessVolume, Priority), METADATA_PARAMS(Z_Construct_UClass_APostProcessVolume_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APostProcessVolume_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APostProcessVolume_Statics::NewProp_BlendRadius_MetaData[] = {
		{ "Category", "PostProcessVolumeSettings" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** World space radius around the volume that is used for blending (only if not unbound).\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/PostProcessVolume.h" },
		{ "ToolTip", "World space radius around the volume that is used for blending (only if not unbound)." },
		{ "UIMax", "6000.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APostProcessVolume_Statics::NewProp_BlendRadius = { "BlendRadius", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APostProcessVolume, BlendRadius), METADATA_PARAMS(Z_Construct_UClass_APostProcessVolume_Statics::NewProp_BlendRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APostProcessVolume_Statics::NewProp_BlendRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APostProcessVolume_Statics::NewProp_BlendWeight_MetaData[] = {
		{ "Category", "PostProcessVolumeSettings" },
		{ "Comment", "/** 0:no effect, 1:full effect */" },
		{ "ModuleRelativePath", "Classes/Engine/PostProcessVolume.h" },
		{ "ToolTip", "0:no effect, 1:full effect" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APostProcessVolume_Statics::NewProp_BlendWeight = { "BlendWeight", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APostProcessVolume, BlendWeight), METADATA_PARAMS(Z_Construct_UClass_APostProcessVolume_Statics::NewProp_BlendWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APostProcessVolume_Statics::NewProp_BlendWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APostProcessVolume_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "PostProcessVolumeSettings" },
		{ "Comment", "/** Whether this volume is enabled or not.\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/PostProcessVolume.h" },
		{ "ToolTip", "Whether this volume is enabled or not." },
	};
#endif
	void Z_Construct_UClass_APostProcessVolume_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((APostProcessVolume*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APostProcessVolume_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(APostProcessVolume), &Z_Construct_UClass_APostProcessVolume_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_APostProcessVolume_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APostProcessVolume_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APostProcessVolume_Statics::NewProp_bUnbound_MetaData[] = {
		{ "Category", "PostProcessVolumeSettings" },
		{ "Comment", "/** Whether this volume covers the whole world, or just the area inside its bounds.\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "DisplayName", "Infinite Extent (Unbound)" },
		{ "ModuleRelativePath", "Classes/Engine/PostProcessVolume.h" },
		{ "ToolTip", "Whether this volume covers the whole world, or just the area inside its bounds." },
	};
#endif
	void Z_Construct_UClass_APostProcessVolume_Statics::NewProp_bUnbound_SetBit(void* Obj)
	{
		((APostProcessVolume*)Obj)->bUnbound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APostProcessVolume_Statics::NewProp_bUnbound = { "bUnbound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(APostProcessVolume), &Z_Construct_UClass_APostProcessVolume_Statics::NewProp_bUnbound_SetBit, METADATA_PARAMS(Z_Construct_UClass_APostProcessVolume_Statics::NewProp_bUnbound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APostProcessVolume_Statics::NewProp_bUnbound_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APostProcessVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APostProcessVolume_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APostProcessVolume_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APostProcessVolume_Statics::NewProp_BlendRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APostProcessVolume_Statics::NewProp_BlendWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APostProcessVolume_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APostProcessVolume_Statics::NewProp_bUnbound,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APostProcessVolume_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_PostProcessVolume_NoRegister, (int32)VTABLE_OFFSET(APostProcessVolume, IInterface_PostProcessVolume), false },  // 3885449434
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APostProcessVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APostProcessVolume>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APostProcessVolume_Statics::ClassParams = {
		&APostProcessVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APostProcessVolume_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APostProcessVolume_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APostProcessVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APostProcessVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APostProcessVolume()
	{
		if (!Z_Registration_Info_UClass_APostProcessVolume.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APostProcessVolume.OuterSingleton, Z_Construct_UClass_APostProcessVolume_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APostProcessVolume.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<APostProcessVolume>()
	{
		return APostProcessVolume::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APostProcessVolume);
	APostProcessVolume::~APostProcessVolume() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(APostProcessVolume)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PostProcessVolume_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PostProcessVolume_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APostProcessVolume, APostProcessVolume::StaticClass, TEXT("APostProcessVolume"), &Z_Registration_Info_UClass_APostProcessVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APostProcessVolume), 684424294U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PostProcessVolume_h_910833785(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PostProcessVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PostProcessVolume_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
