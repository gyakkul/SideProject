// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/TextureRenderTargetCube.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureRenderTargetCube() {}
// Cross Module References
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EPixelFormat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTargetCube();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTargetCube_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UTextureRenderTargetCube::StaticRegisterNativesUTextureRenderTargetCube()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextureRenderTargetCube);
	UClass* Z_Construct_UClass_UTextureRenderTargetCube_NoRegister()
	{
		return UTextureRenderTargetCube::StaticClass();
	}
	struct Z_Construct_UClass_UTextureRenderTargetCube_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SizeX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClearColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClearColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideFormat_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_OverrideFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHDR_MetaData[];
#endif
		static void NewProp_bHDR_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHDR;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceLinearGamma_MetaData[];
#endif
		static void NewProp_bForceLinearGamma_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceLinearGamma;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextureRenderTargetCube_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTextureRenderTarget,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTargetCube_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * TextureRenderTargetCube\n *\n * Cube render target texture resource. This can be used as a target\n * for rendering as well as rendered as a regular cube texture resource.\n *\n */" },
		{ "HideCategories", "Object Texture" },
		{ "IncludePath", "Engine/TextureRenderTargetCube.h" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTargetCube.h" },
		{ "ToolTip", "TextureRenderTargetCube\n\nCube render target texture resource. This can be used as a target\nfor rendering as well as rendered as a regular cube texture resource." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTargetCube_Statics::NewProp_SizeX_MetaData[] = {
		{ "Category", "TextureRenderTargetCube" },
		{ "Comment", "/** The width of the texture.\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTargetCube.h" },
		{ "ToolTip", "The width of the texture." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTextureRenderTargetCube_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010010000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureRenderTargetCube, SizeX), METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTargetCube_Statics::NewProp_SizeX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTargetCube_Statics::NewProp_SizeX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTargetCube_Statics::NewProp_ClearColor_MetaData[] = {
		{ "Comment", "/** the color the texture is cleared to */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTargetCube.h" },
		{ "ToolTip", "the color the texture is cleared to" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTextureRenderTargetCube_Statics::NewProp_ClearColor = { "ClearColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureRenderTargetCube, ClearColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTargetCube_Statics::NewProp_ClearColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTargetCube_Statics::NewProp_ClearColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTargetCube_Statics::NewProp_OverrideFormat_MetaData[] = {
		{ "Comment", "/** Normally the format is derived from bHDR, this allows code to set the format explicitly. */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTargetCube.h" },
		{ "ToolTip", "Normally the format is derived from bHDR, this allows code to set the format explicitly." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureRenderTargetCube_Statics::NewProp_OverrideFormat = { "OverrideFormat", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureRenderTargetCube, OverrideFormat), Z_Construct_UEnum_CoreUObject_EPixelFormat, METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTargetCube_Statics::NewProp_OverrideFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTargetCube_Statics::NewProp_OverrideFormat_MetaData)) }; // 2651536151
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTargetCube_Statics::NewProp_bHDR_MetaData[] = {
		{ "Category", "TextureRenderTargetCube" },
		{ "Comment", "/** Whether to support storing HDR values, which requires more memory. */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTargetCube.h" },
		{ "ToolTip", "Whether to support storing HDR values, which requires more memory." },
	};
#endif
	void Z_Construct_UClass_UTextureRenderTargetCube_Statics::NewProp_bHDR_SetBit(void* Obj)
	{
		((UTextureRenderTargetCube*)Obj)->bHDR = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureRenderTargetCube_Statics::NewProp_bHDR = { "bHDR", nullptr, (EPropertyFlags)0x0010010000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTextureRenderTargetCube), &Z_Construct_UClass_UTextureRenderTargetCube_Statics::NewProp_bHDR_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTargetCube_Statics::NewProp_bHDR_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTargetCube_Statics::NewProp_bHDR_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTargetCube_Statics::NewProp_bForceLinearGamma_MetaData[] = {
		{ "Comment", "/** True to force linear gamma space for this render target */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTargetCube.h" },
		{ "ToolTip", "True to force linear gamma space for this render target" },
	};
#endif
	void Z_Construct_UClass_UTextureRenderTargetCube_Statics::NewProp_bForceLinearGamma_SetBit(void* Obj)
	{
		((UTextureRenderTargetCube*)Obj)->bForceLinearGamma = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureRenderTargetCube_Statics::NewProp_bForceLinearGamma = { "bForceLinearGamma", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTextureRenderTargetCube), &Z_Construct_UClass_UTextureRenderTargetCube_Statics::NewProp_bForceLinearGamma_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTargetCube_Statics::NewProp_bForceLinearGamma_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTargetCube_Statics::NewProp_bForceLinearGamma_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextureRenderTargetCube_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTargetCube_Statics::NewProp_SizeX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTargetCube_Statics::NewProp_ClearColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTargetCube_Statics::NewProp_OverrideFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTargetCube_Statics::NewProp_bHDR,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTargetCube_Statics::NewProp_bForceLinearGamma,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextureRenderTargetCube_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureRenderTargetCube>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextureRenderTargetCube_Statics::ClassParams = {
		&UTextureRenderTargetCube::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTextureRenderTargetCube_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTargetCube_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTargetCube_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTargetCube_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextureRenderTargetCube()
	{
		if (!Z_Registration_Info_UClass_UTextureRenderTargetCube.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextureRenderTargetCube.OuterSingleton, Z_Construct_UClass_UTextureRenderTargetCube_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTextureRenderTargetCube.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UTextureRenderTargetCube>()
	{
		return UTextureRenderTargetCube::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureRenderTargetCube);
	UTextureRenderTargetCube::~UTextureRenderTargetCube() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTargetCube_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTargetCube_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTextureRenderTargetCube, UTextureRenderTargetCube::StaticClass, TEXT("UTextureRenderTargetCube"), &Z_Registration_Info_UClass_UTextureRenderTargetCube, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextureRenderTargetCube), 2292958754U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTargetCube_h_4207095343(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTargetCube_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTargetCube_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
