// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseGizmos/GizmoElementArc.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGizmoElementArc() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementArc();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementArc_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementCircleBase();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	void UGizmoElementArc::StaticRegisterNativesUGizmoElementArc()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoElementArc);
	UClass* Z_Construct_UClass_UGizmoElementArc_NoRegister()
	{
		return UGizmoElementArc::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoElementArc_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InnerRadius_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_InnerRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoElementArc_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGizmoElementCircleBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementArc_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Simple object intended to be used as part of 3D Gizmos.\n * Draws a thick arc based on parameters.\n */" },
		{ "IncludePath", "BaseGizmos/GizmoElementArc.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementArc.h" },
		{ "ToolTip", "Simple object intended to be used as part of 3D Gizmos.\nDraws a thick arc based on parameters." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementArc_Statics::NewProp_InnerRadius_MetaData[] = {
		{ "Comment", "// Arc inner radius.\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementArc.h" },
		{ "ToolTip", "Arc inner radius." },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UGizmoElementArc_Statics::NewProp_InnerRadius = { "InnerRadius", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoElementArc, InnerRadius), METADATA_PARAMS(Z_Construct_UClass_UGizmoElementArc_Statics::NewProp_InnerRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementArc_Statics::NewProp_InnerRadius_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoElementArc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementArc_Statics::NewProp_InnerRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoElementArc_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoElementArc>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoElementArc_Statics::ClassParams = {
		&UGizmoElementArc::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGizmoElementArc_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementArc_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoElementArc_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementArc_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoElementArc()
	{
		if (!Z_Registration_Info_UClass_UGizmoElementArc.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoElementArc.OuterSingleton, Z_Construct_UClass_UGizmoElementArc_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGizmoElementArc.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoElementArc>()
	{
		return UGizmoElementArc::StaticClass();
	}
	UGizmoElementArc::UGizmoElementArc(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoElementArc);
	UGizmoElementArc::~UGizmoElementArc() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementArc_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementArc_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGizmoElementArc, UGizmoElementArc::StaticClass, TEXT("UGizmoElementArc"), &Z_Registration_Info_UClass_UGizmoElementArc, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoElementArc), 1275579715U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementArc_h_1984439925(TEXT("/Script/InteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementArc_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementArc_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
