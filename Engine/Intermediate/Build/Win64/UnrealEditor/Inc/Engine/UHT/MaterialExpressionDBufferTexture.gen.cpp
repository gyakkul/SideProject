// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionDBufferTexture.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionDBufferTexture() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDBufferTexture();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDBufferTexture_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDBufferTextureId();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDBufferTextureId;
	static UEnum* EDBufferTextureId_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDBufferTextureId.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDBufferTextureId.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EDBufferTextureId, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EDBufferTextureId"));
		}
		return Z_Registration_Info_UEnum_EDBufferTextureId.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EDBufferTextureId>()
	{
		return EDBufferTextureId_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EDBufferTextureId_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EDBufferTextureId_Statics::Enumerators[] = {
		{ "DBT_A", (int64)DBT_A },
		{ "DBT_B", (int64)DBT_B },
		{ "DBT_C", (int64)DBT_C },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EDBufferTextureId_Statics::Enum_MetaDataParams[] = {
		{ "DBT_A.Comment", "/** DBuffer A (Base Color). RGB is pre-multiplied by alpha. A is one minus alpha. */" },
		{ "DBT_A.DisplayName", "DBufferA (BaseColor)" },
		{ "DBT_A.Name", "DBT_A" },
		{ "DBT_A.ToolTip", "DBuffer A (Base Color). RGB is pre-multiplied by alpha. A is one minus alpha." },
		{ "DBT_B.Comment", "/** DBuffer B (World Normal). RGB is pre-multiplied by alpha. A is one minus alpha. */" },
		{ "DBT_B.DisplayName", "DBufferB (WorldNormal)" },
		{ "DBT_B.Name", "DBT_B" },
		{ "DBT_B.ToolTip", "DBuffer B (World Normal). RGB is pre-multiplied by alpha. A is one minus alpha." },
		{ "DBT_C.Comment", "/** DBuffer C (Roughness). R is Roughness, G is Metallic, B is Specular,  all pre-multiplied by alpha. A is one minus alpha. */" },
		{ "DBT_C.DisplayName", "DBufferC (Roughness)" },
		{ "DBT_C.Name", "DBT_C" },
		{ "DBT_C.ToolTip", "DBuffer C (Roughness). R is Roughness, G is Metallic, B is Specular,  all pre-multiplied by alpha. A is one minus alpha." },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDBufferTexture.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EDBufferTextureId_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EDBufferTextureId",
		"EDBufferTextureId",
		Z_Construct_UEnum_Engine_EDBufferTextureId_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EDBufferTextureId_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EDBufferTextureId_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EDBufferTextureId_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EDBufferTextureId()
	{
		if (!Z_Registration_Info_UEnum_EDBufferTextureId.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDBufferTextureId.InnerSingleton, Z_Construct_UEnum_Engine_EDBufferTextureId_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDBufferTextureId.InnerSingleton;
	}
	void UMaterialExpressionDBufferTexture::StaticRegisterNativesUMaterialExpressionDBufferTexture()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionDBufferTexture);
	UClass* Z_Construct_UClass_UMaterialExpressionDBufferTexture_NoRegister()
	{
		return UMaterialExpressionDBufferTexture::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionDBufferTexture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Coordinates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Coordinates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DBufferTextureId_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DBufferTextureId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionDBufferTexture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionDBufferTexture_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionDBufferTexture.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDBufferTexture.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionDBufferTexture_Statics::NewProp_Coordinates_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDBufferTexture.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Ignored if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionDBufferTexture_Statics::NewProp_Coordinates = { "Coordinates", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionDBufferTexture, Coordinates), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionDBufferTexture_Statics::NewProp_Coordinates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDBufferTexture_Statics::NewProp_Coordinates_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionDBufferTexture_Statics::NewProp_DBufferTextureId_MetaData[] = {
		{ "Category", "UMaterialExpressionDBufferTexture" },
		{ "Comment", "/** Which DBuffer texture we want to make a lookup into. */" },
		{ "DisplayName", "DBuffer Texture" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDBufferTexture.h" },
		{ "ToolTip", "Which DBuffer texture we want to make a lookup into." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionDBufferTexture_Statics::NewProp_DBufferTextureId = { "DBufferTextureId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionDBufferTexture, DBufferTextureId), Z_Construct_UEnum_Engine_EDBufferTextureId, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionDBufferTexture_Statics::NewProp_DBufferTextureId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDBufferTexture_Statics::NewProp_DBufferTextureId_MetaData)) }; // 988122939
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionDBufferTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDBufferTexture_Statics::NewProp_Coordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDBufferTexture_Statics::NewProp_DBufferTextureId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionDBufferTexture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionDBufferTexture>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionDBufferTexture_Statics::ClassParams = {
		&UMaterialExpressionDBufferTexture::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionDBufferTexture_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDBufferTexture_Statics::PropPointers),
		0,
		0x000020B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionDBufferTexture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDBufferTexture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionDBufferTexture()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionDBufferTexture.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionDBufferTexture.OuterSingleton, Z_Construct_UClass_UMaterialExpressionDBufferTexture_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionDBufferTexture.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionDBufferTexture>()
	{
		return UMaterialExpressionDBufferTexture::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionDBufferTexture);
	UMaterialExpressionDBufferTexture::~UMaterialExpressionDBufferTexture() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDBufferTexture_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDBufferTexture_h_Statics::EnumInfo[] = {
		{ EDBufferTextureId_StaticEnum, TEXT("EDBufferTextureId"), &Z_Registration_Info_UEnum_EDBufferTextureId, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 988122939U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDBufferTexture_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionDBufferTexture, UMaterialExpressionDBufferTexture::StaticClass, TEXT("UMaterialExpressionDBufferTexture"), &Z_Registration_Info_UClass_UMaterialExpressionDBufferTexture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionDBufferTexture), 1055567824U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDBufferTexture_h_929832976(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDBufferTexture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDBufferTexture_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDBufferTexture_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDBufferTexture_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
