// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseGizmos/GizmoElementCone.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGizmoElementCone() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementBase();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementCone();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementCone_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	void UGizmoElementCone::StaticRegisterNativesUGizmoElementCone()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoElementCone);
	UClass* Z_Construct_UClass_UGizmoElementCone_NoRegister()
	{
		return UGizmoElementCone::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoElementCone_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
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
	UObject* (*const Z_Construct_UClass_UGizmoElementCone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGizmoElementBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementCone_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Simple object intended to be used as part of 3D Gizmos.\n * Draws a solid 3D cone based on parameters.\n */" },
		{ "IncludePath", "BaseGizmos/GizmoElementCone.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementCone.h" },
		{ "ToolTip", "Simple object intended to be used as part of 3D Gizmos.\nDraws a solid 3D cone based on parameters." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementCone_Statics::NewProp_Origin_MetaData[] = {
		{ "Comment", "// Cone tip location.\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementCone.h" },
		{ "ToolTip", "Cone tip location." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoElementCone_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoElementCone, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGizmoElementCone_Statics::NewProp_Origin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementCone_Statics::NewProp_Origin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementCone_Statics::NewProp_Direction_MetaData[] = {
		{ "Comment", "// Cone axis direction pointing from tip toward base of cone.\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementCone.h" },
		{ "ToolTip", "Cone axis direction pointing from tip toward base of cone." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoElementCone_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoElementCone, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGizmoElementCone_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementCone_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementCone_Statics::NewProp_Height_MetaData[] = {
		{ "Comment", "// Cone height.\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementCone.h" },
		{ "ToolTip", "Cone height." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoElementCone_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoElementCone, Height), METADATA_PARAMS(Z_Construct_UClass_UGizmoElementCone_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementCone_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementCone_Statics::NewProp_Radius_MetaData[] = {
		{ "Comment", "// Cone radius.\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementCone.h" },
		{ "ToolTip", "Cone radius." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoElementCone_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoElementCone, Radius), METADATA_PARAMS(Z_Construct_UClass_UGizmoElementCone_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementCone_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementCone_Statics::NewProp_NumSides_MetaData[] = {
		{ "Comment", "// Number of sides for tessellating cone.\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementCone.h" },
		{ "ToolTip", "Number of sides for tessellating cone." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGizmoElementCone_Statics::NewProp_NumSides = { "NumSides", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoElementCone, NumSides), METADATA_PARAMS(Z_Construct_UClass_UGizmoElementCone_Statics::NewProp_NumSides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementCone_Statics::NewProp_NumSides_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoElementCone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementCone_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementCone_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementCone_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementCone_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementCone_Statics::NewProp_NumSides,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoElementCone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoElementCone>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoElementCone_Statics::ClassParams = {
		&UGizmoElementCone::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGizmoElementCone_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementCone_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoElementCone_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementCone_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoElementCone()
	{
		if (!Z_Registration_Info_UClass_UGizmoElementCone.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoElementCone.OuterSingleton, Z_Construct_UClass_UGizmoElementCone_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGizmoElementCone.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoElementCone>()
	{
		return UGizmoElementCone::StaticClass();
	}
	UGizmoElementCone::UGizmoElementCone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoElementCone);
	UGizmoElementCone::~UGizmoElementCone() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementCone_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementCone_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGizmoElementCone, UGizmoElementCone::StaticClass, TEXT("UGizmoElementCone"), &Z_Registration_Info_UClass_UGizmoElementCone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoElementCone), 3560457557U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementCone_h_169051775(TEXT("/Script/InteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementCone_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementCone_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
