// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Builders/ConeBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConeBuilder() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UConeBuilder();
	UNREALED_API UClass* Z_Construct_UClass_UConeBuilder_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UEditorBrushBuilder();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UConeBuilder::StaticRegisterNativesUConeBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConeBuilder);
	UClass* Z_Construct_UClass_UConeBuilder_NoRegister()
	{
		return UConeBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UConeBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Z_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Z;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapZ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CapZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OuterRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OuterRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InnerRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InnerRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sides_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Sides;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GroupName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlignToSide_MetaData[];
#endif
		static void NewProp_AlignToSide_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AlignToSide;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hollow_MetaData[];
#endif
		static void NewProp_Hollow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Hollow;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConeBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorBrushBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConeBuilder_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "BrushSettings" },
		{ "DisplayName", "Cone" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Builders/ConeBuilder.h" },
		{ "ModuleRelativePath", "Classes/Builders/ConeBuilder.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConeBuilder_Statics::NewProp_Z_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ClampMin", "0.000001" },
		{ "Comment", "/** Distance from base to tip of cone */" },
		{ "ModuleRelativePath", "Classes/Builders/ConeBuilder.h" },
		{ "ToolTip", "Distance from base to tip of cone" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UConeBuilder_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConeBuilder, Z), METADATA_PARAMS(Z_Construct_UClass_UConeBuilder_Statics::NewProp_Z_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConeBuilder_Statics::NewProp_Z_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConeBuilder_Statics::NewProp_CapZ_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "Comment", "/** Distance from base to the tip of inner cone (when hollow) */" },
		{ "EditCondition", "Hollow" },
		{ "ModuleRelativePath", "Classes/Builders/ConeBuilder.h" },
		{ "ToolTip", "Distance from base to the tip of inner cone (when hollow)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UConeBuilder_Statics::NewProp_CapZ = { "CapZ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConeBuilder, CapZ), METADATA_PARAMS(Z_Construct_UClass_UConeBuilder_Statics::NewProp_CapZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConeBuilder_Statics::NewProp_CapZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConeBuilder_Statics::NewProp_OuterRadius_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ClampMin", "0.000001" },
		{ "Comment", "/** Radius of cone */" },
		{ "ModuleRelativePath", "Classes/Builders/ConeBuilder.h" },
		{ "ToolTip", "Radius of cone" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UConeBuilder_Statics::NewProp_OuterRadius = { "OuterRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConeBuilder, OuterRadius), METADATA_PARAMS(Z_Construct_UClass_UConeBuilder_Statics::NewProp_OuterRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConeBuilder_Statics::NewProp_OuterRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConeBuilder_Statics::NewProp_InnerRadius_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "Comment", "/** Radius of inner cone (when hollow) */" },
		{ "EditCondition", "Hollow" },
		{ "ModuleRelativePath", "Classes/Builders/ConeBuilder.h" },
		{ "ToolTip", "Radius of inner cone (when hollow)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UConeBuilder_Statics::NewProp_InnerRadius = { "InnerRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConeBuilder, InnerRadius), METADATA_PARAMS(Z_Construct_UClass_UConeBuilder_Statics::NewProp_InnerRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConeBuilder_Statics::NewProp_InnerRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConeBuilder_Statics::NewProp_Sides_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ClampMax", "500" },
		{ "ClampMin", "3" },
		{ "Comment", "/** How many sides this cone should have */" },
		{ "ModuleRelativePath", "Classes/Builders/ConeBuilder.h" },
		{ "ToolTip", "How many sides this cone should have" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UConeBuilder_Statics::NewProp_Sides = { "Sides", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConeBuilder, Sides), METADATA_PARAMS(Z_Construct_UClass_UConeBuilder_Statics::NewProp_Sides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConeBuilder_Statics::NewProp_Sides_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConeBuilder_Statics::NewProp_GroupName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Builders/ConeBuilder.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UConeBuilder_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConeBuilder, GroupName), METADATA_PARAMS(Z_Construct_UClass_UConeBuilder_Statics::NewProp_GroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConeBuilder_Statics::NewProp_GroupName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConeBuilder_Statics::NewProp_AlignToSide_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "Comment", "/** Whether to align the brush to a face */" },
		{ "ModuleRelativePath", "Classes/Builders/ConeBuilder.h" },
		{ "ToolTip", "Whether to align the brush to a face" },
	};
#endif
	void Z_Construct_UClass_UConeBuilder_Statics::NewProp_AlignToSide_SetBit(void* Obj)
	{
		((UConeBuilder*)Obj)->AlignToSide = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConeBuilder_Statics::NewProp_AlignToSide = { "AlignToSide", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UConeBuilder), &Z_Construct_UClass_UConeBuilder_Statics::NewProp_AlignToSide_SetBit, METADATA_PARAMS(Z_Construct_UClass_UConeBuilder_Statics::NewProp_AlignToSide_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConeBuilder_Statics::NewProp_AlignToSide_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConeBuilder_Statics::NewProp_Hollow_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "Comment", "/** Whether this is a hollow or solid cone */" },
		{ "ModuleRelativePath", "Classes/Builders/ConeBuilder.h" },
		{ "ToolTip", "Whether this is a hollow or solid cone" },
	};
#endif
	void Z_Construct_UClass_UConeBuilder_Statics::NewProp_Hollow_SetBit(void* Obj)
	{
		((UConeBuilder*)Obj)->Hollow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConeBuilder_Statics::NewProp_Hollow = { "Hollow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UConeBuilder), &Z_Construct_UClass_UConeBuilder_Statics::NewProp_Hollow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UConeBuilder_Statics::NewProp_Hollow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConeBuilder_Statics::NewProp_Hollow_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConeBuilder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConeBuilder_Statics::NewProp_Z,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConeBuilder_Statics::NewProp_CapZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConeBuilder_Statics::NewProp_OuterRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConeBuilder_Statics::NewProp_InnerRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConeBuilder_Statics::NewProp_Sides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConeBuilder_Statics::NewProp_GroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConeBuilder_Statics::NewProp_AlignToSide,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConeBuilder_Statics::NewProp_Hollow,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConeBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConeBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConeBuilder_Statics::ClassParams = {
		&UConeBuilder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UConeBuilder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UConeBuilder_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UConeBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConeBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConeBuilder()
	{
		if (!Z_Registration_Info_UClass_UConeBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConeBuilder.OuterSingleton, Z_Construct_UClass_UConeBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConeBuilder.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UConeBuilder>()
	{
		return UConeBuilder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConeBuilder);
	UConeBuilder::~UConeBuilder() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Builders_ConeBuilder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Builders_ConeBuilder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UConeBuilder, UConeBuilder::StaticClass, TEXT("UConeBuilder"), &Z_Registration_Info_UClass_UConeBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConeBuilder), 2162333231U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Builders_ConeBuilder_h_3136326758(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Builders_ConeBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Builders_ConeBuilder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
