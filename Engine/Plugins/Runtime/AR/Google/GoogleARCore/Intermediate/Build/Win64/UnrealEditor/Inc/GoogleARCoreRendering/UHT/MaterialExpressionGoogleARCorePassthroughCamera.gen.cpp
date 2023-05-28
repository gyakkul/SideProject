// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/MaterialExpressionGoogleARCorePassthroughCamera.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionGoogleARCorePassthroughCamera() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	GOOGLEARCORERENDERING_API UClass* Z_Construct_UClass_UDEPRECATED_MaterialExpressionGoogleARCorePassthroughCamera();
	GOOGLEARCORERENDERING_API UClass* Z_Construct_UClass_UDEPRECATED_MaterialExpressionGoogleARCorePassthroughCamera_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GoogleARCoreRendering();
// End Cross Module References
	void UDEPRECATED_MaterialExpressionGoogleARCorePassthroughCamera::StaticRegisterNativesUDEPRECATED_MaterialExpressionGoogleARCorePassthroughCamera()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_MaterialExpressionGoogleARCorePassthroughCamera);
	UClass* Z_Construct_UClass_UDEPRECATED_MaterialExpressionGoogleARCorePassthroughCamera_NoRegister()
	{
		return UDEPRECATED_MaterialExpressionGoogleARCorePassthroughCamera::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_MaterialExpressionGoogleARCorePassthroughCamera_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstCoordinate_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ConstCoordinate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_MaterialExpressionGoogleARCorePassthroughCamera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_GoogleARCoreRendering,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_MaterialExpressionGoogleARCorePassthroughCamera_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Implements a node sampling from the ARCore Passthrough external texture.\n*/" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "MaterialExpressionGoogleARCorePassthroughCamera.h" },
		{ "ModuleRelativePath", "Private/MaterialExpressionGoogleARCorePassthroughCamera.h" },
		{ "ToolTip", "Implements a node sampling from the ARCore Passthrough external texture." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_MaterialExpressionGoogleARCorePassthroughCamera_Statics::NewProp_Coordinates_MetaData[] = {
		{ "ModuleRelativePath", "Private/MaterialExpressionGoogleARCorePassthroughCamera.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstCoordinate' if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDEPRECATED_MaterialExpressionGoogleARCorePassthroughCamera_Statics::NewProp_Coordinates = { "Coordinates", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_MaterialExpressionGoogleARCorePassthroughCamera, Coordinates), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_MaterialExpressionGoogleARCorePassthroughCamera_Statics::NewProp_Coordinates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_MaterialExpressionGoogleARCorePassthroughCamera_Statics::NewProp_Coordinates_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_MaterialExpressionGoogleARCorePassthroughCamera_Statics::NewProp_ConstCoordinate_MetaData[] = {
		{ "Category", "UMaterialExpressionGoogleARCorePassthroughCamera" },
		{ "Comment", "/** only used if Coordinates are not hooked up. */" },
		{ "ModuleRelativePath", "Private/MaterialExpressionGoogleARCorePassthroughCamera.h" },
		{ "ToolTip", "only used if Coordinates are not hooked up." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UDEPRECATED_MaterialExpressionGoogleARCorePassthroughCamera_Statics::NewProp_ConstCoordinate = { "ConstCoordinate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_MaterialExpressionGoogleARCorePassthroughCamera, ConstCoordinate), METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_MaterialExpressionGoogleARCorePassthroughCamera_Statics::NewProp_ConstCoordinate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_MaterialExpressionGoogleARCorePassthroughCamera_Statics::NewProp_ConstCoordinate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEPRECATED_MaterialExpressionGoogleARCorePassthroughCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_MaterialExpressionGoogleARCorePassthroughCamera_Statics::NewProp_Coordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_MaterialExpressionGoogleARCorePassthroughCamera_Statics::NewProp_ConstCoordinate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_MaterialExpressionGoogleARCorePassthroughCamera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_MaterialExpressionGoogleARCorePassthroughCamera>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_MaterialExpressionGoogleARCorePassthroughCamera_Statics::ClassParams = {
		&UDEPRECATED_MaterialExpressionGoogleARCorePassthroughCamera::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDEPRECATED_MaterialExpressionGoogleARCorePassthroughCamera_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_MaterialExpressionGoogleARCorePassthroughCamera_Statics::PropPointers),
		0,
		0x021022B0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_MaterialExpressionGoogleARCorePassthroughCamera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_MaterialExpressionGoogleARCorePassthroughCamera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_MaterialExpressionGoogleARCorePassthroughCamera()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_MaterialExpressionGoogleARCorePassthroughCamera.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_MaterialExpressionGoogleARCorePassthroughCamera.OuterSingleton, Z_Construct_UClass_UDEPRECATED_MaterialExpressionGoogleARCorePassthroughCamera_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_MaterialExpressionGoogleARCorePassthroughCamera.OuterSingleton;
	}
	template<> GOOGLEARCORERENDERING_API UClass* StaticClass<UDEPRECATED_MaterialExpressionGoogleARCorePassthroughCamera>()
	{
		return UDEPRECATED_MaterialExpressionGoogleARCorePassthroughCamera::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_MaterialExpressionGoogleARCorePassthroughCamera);
	UDEPRECATED_MaterialExpressionGoogleARCorePassthroughCamera::~UDEPRECATED_MaterialExpressionGoogleARCorePassthroughCamera() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreRendering_Private_MaterialExpressionGoogleARCorePassthroughCamera_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreRendering_Private_MaterialExpressionGoogleARCorePassthroughCamera_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_MaterialExpressionGoogleARCorePassthroughCamera, UDEPRECATED_MaterialExpressionGoogleARCorePassthroughCamera::StaticClass, TEXT("UDEPRECATED_MaterialExpressionGoogleARCorePassthroughCamera"), &Z_Registration_Info_UClass_UDEPRECATED_MaterialExpressionGoogleARCorePassthroughCamera, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_MaterialExpressionGoogleARCorePassthroughCamera), 1616242947U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreRendering_Private_MaterialExpressionGoogleARCorePassthroughCamera_h_4276066758(TEXT("/Script/GoogleARCoreRendering"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreRendering_Private_MaterialExpressionGoogleARCorePassthroughCamera_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreRendering_Private_MaterialExpressionGoogleARCorePassthroughCamera_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
