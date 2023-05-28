// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Builders/CubeBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCubeBuilder() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UCubeBuilder();
	UNREALED_API UClass* Z_Construct_UClass_UCubeBuilder_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UEditorBrushBuilder();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UCubeBuilder::StaticRegisterNativesUCubeBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCubeBuilder);
	UClass* Z_Construct_UClass_UCubeBuilder_NoRegister()
	{
		return UCubeBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UCubeBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_X;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Y;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Z_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Z;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WallThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WallThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GroupName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hollow_MetaData[];
#endif
		static void NewProp_Hollow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Hollow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tessellated_MetaData[];
#endif
		static void NewProp_Tessellated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Tessellated;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCubeBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorBrushBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeBuilder_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "BrushSettings" },
		{ "DisplayName", "Box" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Builders/CubeBuilder.h" },
		{ "ModuleRelativePath", "Classes/Builders/CubeBuilder.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeBuilder_Statics::NewProp_X_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ClampMin", "0.000001" },
		{ "Comment", "/** The size of the cube in the X dimension */" },
		{ "ModuleRelativePath", "Classes/Builders/CubeBuilder.h" },
		{ "ToolTip", "The size of the cube in the X dimension" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCubeBuilder_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCubeBuilder, X), METADATA_PARAMS(Z_Construct_UClass_UCubeBuilder_Statics::NewProp_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCubeBuilder_Statics::NewProp_X_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeBuilder_Statics::NewProp_Y_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ClampMin", "0.000001" },
		{ "Comment", "/** The size of the cube in the Y dimension */" },
		{ "ModuleRelativePath", "Classes/Builders/CubeBuilder.h" },
		{ "ToolTip", "The size of the cube in the Y dimension" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCubeBuilder_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCubeBuilder, Y), METADATA_PARAMS(Z_Construct_UClass_UCubeBuilder_Statics::NewProp_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCubeBuilder_Statics::NewProp_Y_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeBuilder_Statics::NewProp_Z_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ClampMin", "0.000001" },
		{ "Comment", "/** The size of the cube in the Z dimension */" },
		{ "ModuleRelativePath", "Classes/Builders/CubeBuilder.h" },
		{ "ToolTip", "The size of the cube in the Z dimension" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCubeBuilder_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCubeBuilder, Z), METADATA_PARAMS(Z_Construct_UClass_UCubeBuilder_Statics::NewProp_Z_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCubeBuilder_Statics::NewProp_Z_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeBuilder_Statics::NewProp_WallThickness_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "Comment", "/** The thickness of the cube wall when hollow */" },
		{ "EditCondition", "Hollow" },
		{ "ModuleRelativePath", "Classes/Builders/CubeBuilder.h" },
		{ "ToolTip", "The thickness of the cube wall when hollow" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCubeBuilder_Statics::NewProp_WallThickness = { "WallThickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCubeBuilder, WallThickness), METADATA_PARAMS(Z_Construct_UClass_UCubeBuilder_Statics::NewProp_WallThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCubeBuilder_Statics::NewProp_WallThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeBuilder_Statics::NewProp_GroupName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Builders/CubeBuilder.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCubeBuilder_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCubeBuilder, GroupName), METADATA_PARAMS(Z_Construct_UClass_UCubeBuilder_Statics::NewProp_GroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCubeBuilder_Statics::NewProp_GroupName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeBuilder_Statics::NewProp_Hollow_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "Comment", "/** Whether this is a hollow or solid cube */" },
		{ "ModuleRelativePath", "Classes/Builders/CubeBuilder.h" },
		{ "ToolTip", "Whether this is a hollow or solid cube" },
	};
#endif
	void Z_Construct_UClass_UCubeBuilder_Statics::NewProp_Hollow_SetBit(void* Obj)
	{
		((UCubeBuilder*)Obj)->Hollow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCubeBuilder_Statics::NewProp_Hollow = { "Hollow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UCubeBuilder), &Z_Construct_UClass_UCubeBuilder_Statics::NewProp_Hollow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCubeBuilder_Statics::NewProp_Hollow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCubeBuilder_Statics::NewProp_Hollow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeBuilder_Statics::NewProp_Tessellated_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "Comment", "/** Whether extra internal faces should be generated for each cube face */" },
		{ "ModuleRelativePath", "Classes/Builders/CubeBuilder.h" },
		{ "ToolTip", "Whether extra internal faces should be generated for each cube face" },
	};
#endif
	void Z_Construct_UClass_UCubeBuilder_Statics::NewProp_Tessellated_SetBit(void* Obj)
	{
		((UCubeBuilder*)Obj)->Tessellated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCubeBuilder_Statics::NewProp_Tessellated = { "Tessellated", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UCubeBuilder), &Z_Construct_UClass_UCubeBuilder_Statics::NewProp_Tessellated_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCubeBuilder_Statics::NewProp_Tessellated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCubeBuilder_Statics::NewProp_Tessellated_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCubeBuilder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeBuilder_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeBuilder_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeBuilder_Statics::NewProp_Z,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeBuilder_Statics::NewProp_WallThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeBuilder_Statics::NewProp_GroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeBuilder_Statics::NewProp_Hollow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeBuilder_Statics::NewProp_Tessellated,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCubeBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCubeBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCubeBuilder_Statics::ClassParams = {
		&UCubeBuilder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCubeBuilder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCubeBuilder_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCubeBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCubeBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCubeBuilder()
	{
		if (!Z_Registration_Info_UClass_UCubeBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCubeBuilder.OuterSingleton, Z_Construct_UClass_UCubeBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCubeBuilder.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UCubeBuilder>()
	{
		return UCubeBuilder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCubeBuilder);
	UCubeBuilder::~UCubeBuilder() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Builders_CubeBuilder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Builders_CubeBuilder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCubeBuilder, UCubeBuilder::StaticClass, TEXT("UCubeBuilder"), &Z_Registration_Info_UClass_UCubeBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCubeBuilder), 2583029914U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Builders_CubeBuilder_h_253843048(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Builders_CubeBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Builders_CubeBuilder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
