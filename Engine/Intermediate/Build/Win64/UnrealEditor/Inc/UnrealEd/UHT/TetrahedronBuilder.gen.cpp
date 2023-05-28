// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Builders/TetrahedronBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTetrahedronBuilder() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UEditorBrushBuilder();
	UNREALED_API UClass* Z_Construct_UClass_UTetrahedronBuilder();
	UNREALED_API UClass* Z_Construct_UClass_UTetrahedronBuilder_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UTetrahedronBuilder::StaticRegisterNativesUTetrahedronBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTetrahedronBuilder);
	UClass* Z_Construct_UClass_UTetrahedronBuilder_NoRegister()
	{
		return UTetrahedronBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UTetrahedronBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereExtrapolation_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SphereExtrapolation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GroupName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTetrahedronBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorBrushBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTetrahedronBuilder_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "BrushSettings" },
		{ "DisplayName", "Sphere" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Builders/TetrahedronBuilder.h" },
		{ "ModuleRelativePath", "Classes/Builders/TetrahedronBuilder.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTetrahedronBuilder_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ClampMin", "0.000001" },
		{ "Comment", "/** The radius of this sphere */" },
		{ "ModuleRelativePath", "Classes/Builders/TetrahedronBuilder.h" },
		{ "ToolTip", "The radius of this sphere" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetrahedronBuilder_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTetrahedronBuilder, Radius), METADATA_PARAMS(Z_Construct_UClass_UTetrahedronBuilder_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTetrahedronBuilder_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTetrahedronBuilder_Statics::NewProp_SphereExtrapolation_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ClampMax", "5" },
		{ "ClampMin", "1" },
		{ "Comment", "/** How many iterations this sphere uses to tessellate its geometry */" },
		{ "DisplayName", "Tessellation" },
		{ "ModuleRelativePath", "Classes/Builders/TetrahedronBuilder.h" },
		{ "ToolTip", "How many iterations this sphere uses to tessellate its geometry" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTetrahedronBuilder_Statics::NewProp_SphereExtrapolation = { "SphereExtrapolation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTetrahedronBuilder, SphereExtrapolation), METADATA_PARAMS(Z_Construct_UClass_UTetrahedronBuilder_Statics::NewProp_SphereExtrapolation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTetrahedronBuilder_Statics::NewProp_SphereExtrapolation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTetrahedronBuilder_Statics::NewProp_GroupName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Builders/TetrahedronBuilder.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTetrahedronBuilder_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTetrahedronBuilder, GroupName), METADATA_PARAMS(Z_Construct_UClass_UTetrahedronBuilder_Statics::NewProp_GroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTetrahedronBuilder_Statics::NewProp_GroupName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTetrahedronBuilder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetrahedronBuilder_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetrahedronBuilder_Statics::NewProp_SphereExtrapolation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetrahedronBuilder_Statics::NewProp_GroupName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTetrahedronBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTetrahedronBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTetrahedronBuilder_Statics::ClassParams = {
		&UTetrahedronBuilder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTetrahedronBuilder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTetrahedronBuilder_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTetrahedronBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTetrahedronBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTetrahedronBuilder()
	{
		if (!Z_Registration_Info_UClass_UTetrahedronBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTetrahedronBuilder.OuterSingleton, Z_Construct_UClass_UTetrahedronBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTetrahedronBuilder.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UTetrahedronBuilder>()
	{
		return UTetrahedronBuilder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTetrahedronBuilder);
	UTetrahedronBuilder::~UTetrahedronBuilder() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Builders_TetrahedronBuilder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Builders_TetrahedronBuilder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTetrahedronBuilder, UTetrahedronBuilder::StaticClass, TEXT("UTetrahedronBuilder"), &Z_Registration_Info_UClass_UTetrahedronBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTetrahedronBuilder), 793845475U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Builders_TetrahedronBuilder_h_621408180(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Builders_TetrahedronBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Builders_TetrahedronBuilder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
