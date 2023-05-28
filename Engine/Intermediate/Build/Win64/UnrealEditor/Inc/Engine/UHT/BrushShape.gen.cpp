// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/BrushShape.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBrushShape() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ABrush();
	ENGINE_API UClass* Z_Construct_UClass_ABrushShape();
	ENGINE_API UClass* Z_Construct_UClass_ABrushShape_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ABrushShape::StaticRegisterNativesABrushShape()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABrushShape);
	UClass* Z_Construct_UClass_ABrushShape_NoRegister()
	{
		return ABrushShape::StaticClass();
	}
	struct Z_Construct_UClass_ABrushShape_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABrushShape_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABrush,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABrushShape_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A brush that acts as a template for geometry mode modifiers like \"Lathe\".\n */" },
		{ "HideCategories", "Object Collision Display Rendering Physics Input Blueprint" },
		{ "IncludePath", "Engine/BrushShape.h" },
		{ "ModuleRelativePath", "Classes/Engine/BrushShape.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "A brush that acts as a template for geometry mode modifiers like \"Lathe\"." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABrushShape_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABrushShape>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABrushShape_Statics::ClassParams = {
		&ABrushShape::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABrushShape_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABrushShape_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABrushShape()
	{
		if (!Z_Registration_Info_UClass_ABrushShape.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABrushShape.OuterSingleton, Z_Construct_UClass_ABrushShape_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABrushShape.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ABrushShape>()
	{
		return ABrushShape::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABrushShape);
	ABrushShape::~ABrushShape() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BrushShape_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BrushShape_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABrushShape, ABrushShape::StaticClass, TEXT("ABrushShape"), &Z_Registration_Info_UClass_ABrushShape, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABrushShape), 41855465U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BrushShape_h_3082112064(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BrushShape_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BrushShape_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
