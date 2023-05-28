// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/HeightfieldMinMaxTextureMaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeightfieldMinMaxTextureMaterialExpression() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialSamplerType();
	UPackage* Z_Construct_UPackage__Script_VirtualHeightfieldMesh();
	VIRTUALHEIGHTFIELDMESH_API UClass* Z_Construct_UClass_UHeightfieldMinMaxTexture_NoRegister();
	VIRTUALHEIGHTFIELDMESH_API UClass* Z_Construct_UClass_UMaterialExpressionHeightfieldMinMaxTexture();
	VIRTUALHEIGHTFIELDMESH_API UClass* Z_Construct_UClass_UMaterialExpressionHeightfieldMinMaxTexture_NoRegister();
// End Cross Module References
	void UMaterialExpressionHeightfieldMinMaxTexture::StaticRegisterNativesUMaterialExpressionHeightfieldMinMaxTexture()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionHeightfieldMinMaxTexture);
	UClass* Z_Construct_UClass_UMaterialExpressionHeightfieldMinMaxTexture_NoRegister()
	{
		return UMaterialExpressionHeightfieldMinMaxTexture::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionHeightfieldMinMaxTexture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinMaxTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MinMaxTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SamplerType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SamplerType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionHeightfieldMinMaxTexture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_VirtualHeightfieldMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionHeightfieldMinMaxTexture_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Node which outputs a texture object contained in a UHeightfieldMinMaxTexture. */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "HeightfieldMinMaxTextureMaterialExpression.h" },
		{ "ModuleRelativePath", "Private/HeightfieldMinMaxTextureMaterialExpression.h" },
		{ "ToolTip", "Node which outputs a texture object contained in a UHeightfieldMinMaxTexture." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionHeightfieldMinMaxTexture_Statics::NewProp_MinMaxTexture_MetaData[] = {
		{ "Category", "MaterialExpressionTexture" },
		{ "ModuleRelativePath", "Private/HeightfieldMinMaxTextureMaterialExpression.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialExpressionHeightfieldMinMaxTexture_Statics::NewProp_MinMaxTexture = { "MinMaxTexture", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionHeightfieldMinMaxTexture, MinMaxTexture), Z_Construct_UClass_UHeightfieldMinMaxTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionHeightfieldMinMaxTexture_Statics::NewProp_MinMaxTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionHeightfieldMinMaxTexture_Statics::NewProp_MinMaxTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionHeightfieldMinMaxTexture_Statics::NewProp_SamplerType_MetaData[] = {
		{ "Category", "MaterialExpressionTexture" },
		{ "ModuleRelativePath", "Private/HeightfieldMinMaxTextureMaterialExpression.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionHeightfieldMinMaxTexture_Statics::NewProp_SamplerType = { "SamplerType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionHeightfieldMinMaxTexture, SamplerType), Z_Construct_UEnum_Engine_EMaterialSamplerType, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionHeightfieldMinMaxTexture_Statics::NewProp_SamplerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionHeightfieldMinMaxTexture_Statics::NewProp_SamplerType_MetaData)) }; // 4016891781
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionHeightfieldMinMaxTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionHeightfieldMinMaxTexture_Statics::NewProp_MinMaxTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionHeightfieldMinMaxTexture_Statics::NewProp_SamplerType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionHeightfieldMinMaxTexture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionHeightfieldMinMaxTexture>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionHeightfieldMinMaxTexture_Statics::ClassParams = {
		&UMaterialExpressionHeightfieldMinMaxTexture::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionHeightfieldMinMaxTexture_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionHeightfieldMinMaxTexture_Statics::PropPointers),
		0,
		0x000820B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionHeightfieldMinMaxTexture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionHeightfieldMinMaxTexture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionHeightfieldMinMaxTexture()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionHeightfieldMinMaxTexture.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionHeightfieldMinMaxTexture.OuterSingleton, Z_Construct_UClass_UMaterialExpressionHeightfieldMinMaxTexture_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionHeightfieldMinMaxTexture.OuterSingleton;
	}
	template<> VIRTUALHEIGHTFIELDMESH_API UClass* StaticClass<UMaterialExpressionHeightfieldMinMaxTexture>()
	{
		return UMaterialExpressionHeightfieldMinMaxTexture::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionHeightfieldMinMaxTexture);
	UMaterialExpressionHeightfieldMinMaxTexture::~UMaterialExpressionHeightfieldMinMaxTexture() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualHeightfieldMesh_Source_VirtualHeightfieldMesh_Private_HeightfieldMinMaxTextureMaterialExpression_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualHeightfieldMesh_Source_VirtualHeightfieldMesh_Private_HeightfieldMinMaxTextureMaterialExpression_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionHeightfieldMinMaxTexture, UMaterialExpressionHeightfieldMinMaxTexture::StaticClass, TEXT("UMaterialExpressionHeightfieldMinMaxTexture"), &Z_Registration_Info_UClass_UMaterialExpressionHeightfieldMinMaxTexture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionHeightfieldMinMaxTexture), 1198092219U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualHeightfieldMesh_Source_VirtualHeightfieldMesh_Private_HeightfieldMinMaxTextureMaterialExpression_h_32881145(TEXT("/Script/VirtualHeightfieldMesh"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualHeightfieldMesh_Source_VirtualHeightfieldMesh_Private_HeightfieldMinMaxTextureMaterialExpression_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualHeightfieldMesh_Source_VirtualHeightfieldMesh_Private_HeightfieldMinMaxTextureMaterialExpression_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
