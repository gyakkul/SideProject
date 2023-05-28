// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlPointMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlPointMeshComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	LANDSCAPE_API UClass* Z_Construct_UClass_UControlPointMeshComponent();
	LANDSCAPE_API UClass* Z_Construct_UClass_UControlPointMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References
	void UControlPointMeshComponent::StaticRegisterNativesUControlPointMeshComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlPointMeshComponent);
	UClass* Z_Construct_UClass_UControlPointMeshComponent_NoRegister()
	{
		return UControlPointMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UControlPointMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSelected_MetaData[];
#endif
		static void NewProp_bSelected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelected;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VirtualTextureMainPassMaxDrawDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VirtualTextureMainPassMaxDrawDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControlPointMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlPointMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "ControlPointMeshComponent.h" },
		{ "ModuleRelativePath", "Classes/ControlPointMeshComponent.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlPointMeshComponent_Statics::NewProp_bSelected_MetaData[] = {
		{ "ModuleRelativePath", "Classes/ControlPointMeshComponent.h" },
	};
#endif
	void Z_Construct_UClass_UControlPointMeshComponent_Statics::NewProp_bSelected_SetBit(void* Obj)
	{
		((UControlPointMeshComponent*)Obj)->bSelected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlPointMeshComponent_Statics::NewProp_bSelected = { "bSelected", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UControlPointMeshComponent), &Z_Construct_UClass_UControlPointMeshComponent_Statics::NewProp_bSelected_SetBit, METADATA_PARAMS(Z_Construct_UClass_UControlPointMeshComponent_Statics::NewProp_bSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlPointMeshComponent_Statics::NewProp_bSelected_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlPointMeshComponent_Statics::NewProp_VirtualTextureMainPassMaxDrawDistance_MetaData[] = {
		{ "Comment", "/** \n\x09 * The max draw distance to use in the main pass when also rendering to a runtime virtual texture. \n\x09 * This is only exposed to the user through the same setting on ULandscapeSplineControlPoint. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/ControlPointMeshComponent.h" },
		{ "ToolTip", "The max draw distance to use in the main pass when also rendering to a runtime virtual texture.\nThis is only exposed to the user through the same setting on ULandscapeSplineControlPoint." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UControlPointMeshComponent_Statics::NewProp_VirtualTextureMainPassMaxDrawDistance = { "VirtualTextureMainPassMaxDrawDistance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlPointMeshComponent, VirtualTextureMainPassMaxDrawDistance), METADATA_PARAMS(Z_Construct_UClass_UControlPointMeshComponent_Statics::NewProp_VirtualTextureMainPassMaxDrawDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlPointMeshComponent_Statics::NewProp_VirtualTextureMainPassMaxDrawDistance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UControlPointMeshComponent_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlPointMeshComponent_Statics::NewProp_bSelected,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlPointMeshComponent_Statics::NewProp_VirtualTextureMainPassMaxDrawDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControlPointMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlPointMeshComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlPointMeshComponent_Statics::ClassParams = {
		&UControlPointMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UControlPointMeshComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UControlPointMeshComponent_Statics::PropPointers),
		0,
		0x00A810A4u,
		METADATA_PARAMS(Z_Construct_UClass_UControlPointMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UControlPointMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UControlPointMeshComponent()
	{
		if (!Z_Registration_Info_UClass_UControlPointMeshComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlPointMeshComponent.OuterSingleton, Z_Construct_UClass_UControlPointMeshComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UControlPointMeshComponent.OuterSingleton;
	}
	template<> LANDSCAPE_API UClass* StaticClass<UControlPointMeshComponent>()
	{
		return UControlPointMeshComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlPointMeshComponent);
	UControlPointMeshComponent::~UControlPointMeshComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_ControlPointMeshComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_ControlPointMeshComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UControlPointMeshComponent, UControlPointMeshComponent::StaticClass, TEXT("UControlPointMeshComponent"), &Z_Registration_Info_UClass_UControlPointMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlPointMeshComponent), 2329770734U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_ControlPointMeshComponent_h_1832160103(TEXT("/Script/Landscape"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_ControlPointMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_ControlPointMeshComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
