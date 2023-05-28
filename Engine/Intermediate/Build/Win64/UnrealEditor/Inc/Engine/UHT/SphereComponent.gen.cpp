// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Components/SphereComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSphereComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UShapeComponent();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(USphereComponent::execGetShapeScale)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetShapeScale();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USphereComponent::execGetUnscaledSphereRadius)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetUnscaledSphereRadius();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USphereComponent::execGetScaledSphereRadius)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetScaledSphereRadius();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USphereComponent::execSetSphereRadius)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InSphereRadius);
		P_GET_UBOOL(Z_Param_bUpdateOverlaps);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSphereRadius(Z_Param_InSphereRadius,Z_Param_bUpdateOverlaps);
		P_NATIVE_END;
	}
	void USphereComponent::StaticRegisterNativesUSphereComponent()
	{
		UClass* Class = USphereComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetScaledSphereRadius", &USphereComponent::execGetScaledSphereRadius },
			{ "GetShapeScale", &USphereComponent::execGetShapeScale },
			{ "GetUnscaledSphereRadius", &USphereComponent::execGetUnscaledSphereRadius },
			{ "SetSphereRadius", &USphereComponent::execSetSphereRadius },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USphereComponent_GetScaledSphereRadius_Statics
	{
		struct SphereComponent_eventGetScaledSphereRadius_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USphereComponent_GetScaledSphereRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SphereComponent_eventGetScaledSphereRadius_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USphereComponent_GetScaledSphereRadius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USphereComponent_GetScaledSphereRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USphereComponent_GetScaledSphereRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Sphere" },
		{ "Comment", "// @return the radius of the sphere, with component scale applied.\n" },
		{ "ModuleRelativePath", "Classes/Components/SphereComponent.h" },
		{ "ToolTip", "@return the radius of the sphere, with component scale applied." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USphereComponent_GetScaledSphereRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USphereComponent, nullptr, "GetScaledSphereRadius", nullptr, nullptr, sizeof(Z_Construct_UFunction_USphereComponent_GetScaledSphereRadius_Statics::SphereComponent_eventGetScaledSphereRadius_Parms), Z_Construct_UFunction_USphereComponent_GetScaledSphereRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USphereComponent_GetScaledSphereRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USphereComponent_GetScaledSphereRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USphereComponent_GetScaledSphereRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USphereComponent_GetScaledSphereRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USphereComponent_GetScaledSphereRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USphereComponent_GetShapeScale_Statics
	{
		struct SphereComponent_eventGetShapeScale_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USphereComponent_GetShapeScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SphereComponent_eventGetShapeScale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USphereComponent_GetShapeScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USphereComponent_GetShapeScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USphereComponent_GetShapeScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Sphere" },
		{ "Comment", "// Get the scale used by this shape. This is a uniform scale that is the minimum of any non-uniform scaling.\n// @return the scale used by this shape.\n" },
		{ "ModuleRelativePath", "Classes/Components/SphereComponent.h" },
		{ "ToolTip", "Get the scale used by this shape. This is a uniform scale that is the minimum of any non-uniform scaling.\n@return the scale used by this shape." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USphereComponent_GetShapeScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USphereComponent, nullptr, "GetShapeScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_USphereComponent_GetShapeScale_Statics::SphereComponent_eventGetShapeScale_Parms), Z_Construct_UFunction_USphereComponent_GetShapeScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USphereComponent_GetShapeScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USphereComponent_GetShapeScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USphereComponent_GetShapeScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USphereComponent_GetShapeScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USphereComponent_GetShapeScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USphereComponent_GetUnscaledSphereRadius_Statics
	{
		struct SphereComponent_eventGetUnscaledSphereRadius_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USphereComponent_GetUnscaledSphereRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SphereComponent_eventGetUnscaledSphereRadius_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USphereComponent_GetUnscaledSphereRadius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USphereComponent_GetUnscaledSphereRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USphereComponent_GetUnscaledSphereRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Sphere" },
		{ "Comment", "// @return the radius of the sphere, ignoring component scale.\n" },
		{ "ModuleRelativePath", "Classes/Components/SphereComponent.h" },
		{ "ToolTip", "@return the radius of the sphere, ignoring component scale." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USphereComponent_GetUnscaledSphereRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USphereComponent, nullptr, "GetUnscaledSphereRadius", nullptr, nullptr, sizeof(Z_Construct_UFunction_USphereComponent_GetUnscaledSphereRadius_Statics::SphereComponent_eventGetUnscaledSphereRadius_Parms), Z_Construct_UFunction_USphereComponent_GetUnscaledSphereRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USphereComponent_GetUnscaledSphereRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USphereComponent_GetUnscaledSphereRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USphereComponent_GetUnscaledSphereRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USphereComponent_GetUnscaledSphereRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USphereComponent_GetUnscaledSphereRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USphereComponent_SetSphereRadius_Statics
	{
		struct SphereComponent_eventSetSphereRadius_Parms
		{
			float InSphereRadius;
			bool bUpdateOverlaps;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InSphereRadius;
		static void NewProp_bUpdateOverlaps_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateOverlaps;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USphereComponent_SetSphereRadius_Statics::NewProp_InSphereRadius = { "InSphereRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SphereComponent_eventSetSphereRadius_Parms, InSphereRadius), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USphereComponent_SetSphereRadius_Statics::NewProp_bUpdateOverlaps_SetBit(void* Obj)
	{
		((SphereComponent_eventSetSphereRadius_Parms*)Obj)->bUpdateOverlaps = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USphereComponent_SetSphereRadius_Statics::NewProp_bUpdateOverlaps = { "bUpdateOverlaps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SphereComponent_eventSetSphereRadius_Parms), &Z_Construct_UFunction_USphereComponent_SetSphereRadius_Statics::NewProp_bUpdateOverlaps_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USphereComponent_SetSphereRadius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USphereComponent_SetSphereRadius_Statics::NewProp_InSphereRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USphereComponent_SetSphereRadius_Statics::NewProp_bUpdateOverlaps,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USphereComponent_SetSphereRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Sphere" },
		{ "Comment", "/**\n\x09 * Change the sphere radius. This is the unscaled radius, before component scale is applied.\n\x09 * @param\x09InSphereRadius: the new sphere radius\n\x09 * @param\x09""bUpdateOverlaps: if true and this shape is registered and collides, updates touching array for owner actor.\n\x09 */" },
		{ "CPP_Default_bUpdateOverlaps", "true" },
		{ "ModuleRelativePath", "Classes/Components/SphereComponent.h" },
		{ "ToolTip", "Change the sphere radius. This is the unscaled radius, before component scale is applied.\n@param       InSphereRadius: the new sphere radius\n@param       bUpdateOverlaps: if true and this shape is registered and collides, updates touching array for owner actor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USphereComponent_SetSphereRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USphereComponent, nullptr, "SetSphereRadius", nullptr, nullptr, sizeof(Z_Construct_UFunction_USphereComponent_SetSphereRadius_Statics::SphereComponent_eventSetSphereRadius_Parms), Z_Construct_UFunction_USphereComponent_SetSphereRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USphereComponent_SetSphereRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USphereComponent_SetSphereRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USphereComponent_SetSphereRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USphereComponent_SetSphereRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USphereComponent_SetSphereRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USphereComponent);
	UClass* Z_Construct_UClass_USphereComponent_NoRegister()
	{
		return USphereComponent::StaticClass();
	}
	struct Z_Construct_UClass_USphereComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SphereRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USphereComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UShapeComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USphereComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USphereComponent_GetScaledSphereRadius, "GetScaledSphereRadius" }, // 106275605
		{ &Z_Construct_UFunction_USphereComponent_GetShapeScale, "GetShapeScale" }, // 1891554240
		{ &Z_Construct_UFunction_USphereComponent_GetUnscaledSphereRadius, "GetUnscaledSphereRadius" }, // 3234198897
		{ &Z_Construct_UFunction_USphereComponent_SetSphereRadius, "SetSphereRadius" }, // 1275786487
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USphereComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Collision" },
		{ "Comment", "/** \n * A sphere generally used for simple collision. Bounds are rendered as lines in the editor.\n */" },
		{ "DisplayName", "Sphere Collision" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "Components/SphereComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/SphereComponent.h" },
		{ "ToolTip", "A sphere generally used for simple collision. Bounds are rendered as lines in the editor." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USphereComponent_Statics::NewProp_SphereRadius_MetaData[] = {
		{ "Category", "Shape" },
		{ "Comment", "/** The radius of the sphere **/" },
		{ "ModuleRelativePath", "Classes/Components/SphereComponent.h" },
		{ "ToolTip", "The radius of the sphere *" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USphereComponent_Statics::NewProp_SphereRadius = { "SphereRadius", nullptr, (EPropertyFlags)0x002008000000001d, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USphereComponent, SphereRadius), METADATA_PARAMS(Z_Construct_UClass_USphereComponent_Statics::NewProp_SphereRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USphereComponent_Statics::NewProp_SphereRadius_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USphereComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USphereComponent_Statics::NewProp_SphereRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USphereComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USphereComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USphereComponent_Statics::ClassParams = {
		&USphereComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USphereComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USphereComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_USphereComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USphereComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USphereComponent()
	{
		if (!Z_Registration_Info_UClass_USphereComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USphereComponent.OuterSingleton, Z_Construct_UClass_USphereComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USphereComponent.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USphereComponent>()
	{
		return USphereComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USphereComponent);
	USphereComponent::~USphereComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SphereComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SphereComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USphereComponent, USphereComponent::StaticClass, TEXT("USphereComponent"), &Z_Registration_Info_UClass_USphereComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USphereComponent), 253546640U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SphereComponent_h_1241891385(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SphereComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SphereComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
