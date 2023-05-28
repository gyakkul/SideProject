// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionBlendMaterialAttributes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionBlendMaterialAttributes() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialAttributeBlend();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialAttributesInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMaterialAttributeBlend;
	static UEnum* EMaterialAttributeBlend_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMaterialAttributeBlend.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMaterialAttributeBlend.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMaterialAttributeBlend, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMaterialAttributeBlend"));
		}
		return Z_Registration_Info_UEnum_EMaterialAttributeBlend.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMaterialAttributeBlend::Type>()
	{
		return EMaterialAttributeBlend_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EMaterialAttributeBlend_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EMaterialAttributeBlend_Statics::Enumerators[] = {
		{ "EMaterialAttributeBlend::Blend", (int64)EMaterialAttributeBlend::Blend },
		{ "EMaterialAttributeBlend::UseA", (int64)EMaterialAttributeBlend::UseA },
		{ "EMaterialAttributeBlend::UseB", (int64)EMaterialAttributeBlend::UseB },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EMaterialAttributeBlend_Statics::Enum_MetaDataParams[] = {
		{ "Blend.Name", "EMaterialAttributeBlend::Blend" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBlendMaterialAttributes.h" },
		{ "UseA.Name", "EMaterialAttributeBlend::UseA" },
		{ "UseB.Name", "EMaterialAttributeBlend::UseB" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMaterialAttributeBlend_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EMaterialAttributeBlend",
		"EMaterialAttributeBlend::Type",
		Z_Construct_UEnum_Engine_EMaterialAttributeBlend_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMaterialAttributeBlend_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EMaterialAttributeBlend_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMaterialAttributeBlend_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EMaterialAttributeBlend()
	{
		if (!Z_Registration_Info_UEnum_EMaterialAttributeBlend.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMaterialAttributeBlend.InnerSingleton, Z_Construct_UEnum_Engine_EMaterialAttributeBlend_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMaterialAttributeBlend.InnerSingleton;
	}
	void UMaterialExpressionBlendMaterialAttributes::StaticRegisterNativesUMaterialExpressionBlendMaterialAttributes()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionBlendMaterialAttributes);
	UClass* Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_NoRegister()
	{
		return UMaterialExpressionBlendMaterialAttributes::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Alpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PixelAttributeBlendType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_PixelAttributeBlendType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexAttributeBlendType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_VertexAttributeBlendType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionBlendMaterialAttributes.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBlendMaterialAttributes.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::NewProp_A_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBlendMaterialAttributes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionBlendMaterialAttributes, A), Z_Construct_UScriptStruct_FMaterialAttributesInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::NewProp_B_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBlendMaterialAttributes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionBlendMaterialAttributes, B), Z_Construct_UScriptStruct_FMaterialAttributesInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::NewProp_Alpha_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBlendMaterialAttributes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionBlendMaterialAttributes, Alpha), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::NewProp_Alpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::NewProp_PixelAttributeBlendType_MetaData[] = {
		{ "Category", "MaterialAttributes" },
		{ "Comment", "// Optionally skip blending attributes of this type.\n" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBlendMaterialAttributes.h" },
		{ "ToolTip", "Optionally skip blending attributes of this type." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::NewProp_PixelAttributeBlendType = { "PixelAttributeBlendType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionBlendMaterialAttributes, PixelAttributeBlendType), Z_Construct_UEnum_Engine_EMaterialAttributeBlend, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::NewProp_PixelAttributeBlendType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::NewProp_PixelAttributeBlendType_MetaData)) }; // 1368157101
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::NewProp_VertexAttributeBlendType_MetaData[] = {
		{ "Category", "MaterialAttributes" },
		{ "Comment", "// Optionally skip blending attributes of this type.\n" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBlendMaterialAttributes.h" },
		{ "ToolTip", "Optionally skip blending attributes of this type." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::NewProp_VertexAttributeBlendType = { "VertexAttributeBlendType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionBlendMaterialAttributes, VertexAttributeBlendType), Z_Construct_UEnum_Engine_EMaterialAttributeBlend, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::NewProp_VertexAttributeBlendType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::NewProp_VertexAttributeBlendType_MetaData)) }; // 1368157101
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::NewProp_Alpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::NewProp_PixelAttributeBlendType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::NewProp_VertexAttributeBlendType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionBlendMaterialAttributes>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::ClassParams = {
		&UMaterialExpressionBlendMaterialAttributes::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::PropPointers),
		0,
		0x000820B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionBlendMaterialAttributes.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionBlendMaterialAttributes.OuterSingleton, Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionBlendMaterialAttributes.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionBlendMaterialAttributes>()
	{
		return UMaterialExpressionBlendMaterialAttributes::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionBlendMaterialAttributes);
	UMaterialExpressionBlendMaterialAttributes::~UMaterialExpressionBlendMaterialAttributes() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBlendMaterialAttributes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBlendMaterialAttributes_h_Statics::EnumInfo[] = {
		{ EMaterialAttributeBlend_StaticEnum, TEXT("EMaterialAttributeBlend"), &Z_Registration_Info_UEnum_EMaterialAttributeBlend, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1368157101U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBlendMaterialAttributes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes, UMaterialExpressionBlendMaterialAttributes::StaticClass, TEXT("UMaterialExpressionBlendMaterialAttributes"), &Z_Registration_Info_UClass_UMaterialExpressionBlendMaterialAttributes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionBlendMaterialAttributes), 2889219127U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBlendMaterialAttributes_h_3766291873(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBlendMaterialAttributes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBlendMaterialAttributes_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBlendMaterialAttributes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBlendMaterialAttributes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
