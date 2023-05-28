// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseGizmos/GizmoElementTorus.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGizmoElementTorus() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementCircleBase();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementTorus();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementTorus_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	void UGizmoElementTorus::StaticRegisterNativesUGizmoElementTorus()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoElementTorus);
	UClass* Z_Construct_UClass_UGizmoElementTorus_NoRegister()
	{
		return UGizmoElementTorus::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoElementTorus_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InnerRadius_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_InnerRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumInnerSlices_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumInnerSlices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEndCaps_MetaData[];
#endif
		static void NewProp_bEndCaps_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEndCaps;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoElementTorus_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGizmoElementCircleBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementTorus_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Simple object intended to be used as part of 3D Gizmos.\n * Draws a torus based on parameters.\n * \n * Note: the LineTrace method does not perform a true ray-torus intersection!\n * See comment above LineTrace method below for details of how this intersection is approximated.\n */" },
		{ "IncludePath", "BaseGizmos/GizmoElementTorus.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementTorus.h" },
		{ "ToolTip", "Simple object intended to be used as part of 3D Gizmos.\nDraws a torus based on parameters.\n\nNote: the LineTrace method does not perform a true ray-torus intersection!\nSee comment above LineTrace method below for details of how this intersection is approximated." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementTorus_Statics::NewProp_InnerRadius_MetaData[] = {
		{ "Comment", "// Torus inner radius.\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementTorus.h" },
		{ "ToolTip", "Torus inner radius." },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UGizmoElementTorus_Statics::NewProp_InnerRadius = { "InnerRadius", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoElementTorus, InnerRadius), METADATA_PARAMS(Z_Construct_UClass_UGizmoElementTorus_Statics::NewProp_InnerRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementTorus_Statics::NewProp_InnerRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementTorus_Statics::NewProp_NumInnerSlices_MetaData[] = {
		{ "Comment", "// Number of slices to render in each torus segment.\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementTorus.h" },
		{ "ToolTip", "Number of slices to render in each torus segment." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGizmoElementTorus_Statics::NewProp_NumInnerSlices = { "NumInnerSlices", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoElementTorus, NumInnerSlices), METADATA_PARAMS(Z_Construct_UClass_UGizmoElementTorus_Statics::NewProp_NumInnerSlices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementTorus_Statics::NewProp_NumInnerSlices_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementTorus_Statics::NewProp_bEndCaps_MetaData[] = {
		{ "Comment", "// Whether to render end caps on a partial torus.\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementTorus.h" },
		{ "ToolTip", "Whether to render end caps on a partial torus." },
	};
#endif
	void Z_Construct_UClass_UGizmoElementTorus_Statics::NewProp_bEndCaps_SetBit(void* Obj)
	{
		((UGizmoElementTorus*)Obj)->bEndCaps = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGizmoElementTorus_Statics::NewProp_bEndCaps = { "bEndCaps", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGizmoElementTorus), &Z_Construct_UClass_UGizmoElementTorus_Statics::NewProp_bEndCaps_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGizmoElementTorus_Statics::NewProp_bEndCaps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementTorus_Statics::NewProp_bEndCaps_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoElementTorus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementTorus_Statics::NewProp_InnerRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementTorus_Statics::NewProp_NumInnerSlices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementTorus_Statics::NewProp_bEndCaps,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoElementTorus_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoElementTorus>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoElementTorus_Statics::ClassParams = {
		&UGizmoElementTorus::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGizmoElementTorus_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementTorus_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoElementTorus_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementTorus_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoElementTorus()
	{
		if (!Z_Registration_Info_UClass_UGizmoElementTorus.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoElementTorus.OuterSingleton, Z_Construct_UClass_UGizmoElementTorus_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGizmoElementTorus.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoElementTorus>()
	{
		return UGizmoElementTorus::StaticClass();
	}
	UGizmoElementTorus::UGizmoElementTorus(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoElementTorus);
	UGizmoElementTorus::~UGizmoElementTorus() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementTorus_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementTorus_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGizmoElementTorus, UGizmoElementTorus::StaticClass, TEXT("UGizmoElementTorus"), &Z_Registration_Info_UClass_UGizmoElementTorus, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoElementTorus), 1773755439U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementTorus_h_193935112(TEXT("/Script/InteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementTorus_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementTorus_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
