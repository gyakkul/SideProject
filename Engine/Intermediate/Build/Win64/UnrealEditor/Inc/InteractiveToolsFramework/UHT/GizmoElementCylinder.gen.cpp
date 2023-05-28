// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseGizmos/GizmoElementCylinder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGizmoElementCylinder() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementBase();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementCylinder();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementCylinder_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	void UGizmoElementCylinder::StaticRegisterNativesUGizmoElementCylinder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoElementCylinder);
	UClass* Z_Construct_UClass_UGizmoElementCylinder_NoRegister()
	{
		return UGizmoElementCylinder::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoElementCylinder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Base_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Base;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumSides_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumSides;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoElementCylinder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGizmoElementBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementCylinder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Simple object intended to be used as part of 3D Gizmos.\n * Draws a solid 3D cylinder based on parameters.\n */" },
		{ "IncludePath", "BaseGizmos/GizmoElementCylinder.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementCylinder.h" },
		{ "ToolTip", "Simple object intended to be used as part of 3D Gizmos.\nDraws a solid 3D cylinder based on parameters." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementCylinder_Statics::NewProp_Base_MetaData[] = {
		{ "Comment", "// Location of center of cylinder's base circle.\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementCylinder.h" },
		{ "ToolTip", "Location of center of cylinder's base circle." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoElementCylinder_Statics::NewProp_Base = { "Base", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoElementCylinder, Base), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGizmoElementCylinder_Statics::NewProp_Base_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementCylinder_Statics::NewProp_Base_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementCylinder_Statics::NewProp_Direction_MetaData[] = {
		{ "Comment", "// Cylinder axis direction.\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementCylinder.h" },
		{ "ToolTip", "Cylinder axis direction." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoElementCylinder_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoElementCylinder, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGizmoElementCylinder_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementCylinder_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementCylinder_Statics::NewProp_Height_MetaData[] = {
		{ "Comment", "// Cylinder height.\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementCylinder.h" },
		{ "ToolTip", "Cylinder height." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoElementCylinder_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoElementCylinder, Height), METADATA_PARAMS(Z_Construct_UClass_UGizmoElementCylinder_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementCylinder_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementCylinder_Statics::NewProp_Radius_MetaData[] = {
		{ "Comment", "// Cylinder radius.\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementCylinder.h" },
		{ "ToolTip", "Cylinder radius." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoElementCylinder_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoElementCylinder, Radius), METADATA_PARAMS(Z_Construct_UClass_UGizmoElementCylinder_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementCylinder_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementCylinder_Statics::NewProp_NumSides_MetaData[] = {
		{ "Comment", "// Number of sides for tessellating cylinder.\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementCylinder.h" },
		{ "ToolTip", "Number of sides for tessellating cylinder." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGizmoElementCylinder_Statics::NewProp_NumSides = { "NumSides", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoElementCylinder, NumSides), METADATA_PARAMS(Z_Construct_UClass_UGizmoElementCylinder_Statics::NewProp_NumSides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementCylinder_Statics::NewProp_NumSides_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoElementCylinder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementCylinder_Statics::NewProp_Base,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementCylinder_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementCylinder_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementCylinder_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementCylinder_Statics::NewProp_NumSides,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoElementCylinder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoElementCylinder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoElementCylinder_Statics::ClassParams = {
		&UGizmoElementCylinder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGizmoElementCylinder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementCylinder_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoElementCylinder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementCylinder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoElementCylinder()
	{
		if (!Z_Registration_Info_UClass_UGizmoElementCylinder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoElementCylinder.OuterSingleton, Z_Construct_UClass_UGizmoElementCylinder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGizmoElementCylinder.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoElementCylinder>()
	{
		return UGizmoElementCylinder::StaticClass();
	}
	UGizmoElementCylinder::UGizmoElementCylinder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoElementCylinder);
	UGizmoElementCylinder::~UGizmoElementCylinder() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementCylinder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementCylinder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGizmoElementCylinder, UGizmoElementCylinder::StaticClass, TEXT("UGizmoElementCylinder"), &Z_Registration_Info_UClass_UGizmoElementCylinder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoElementCylinder), 993148166U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementCylinder_h_947002658(TEXT("/Script/InteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementCylinder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementCylinder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
