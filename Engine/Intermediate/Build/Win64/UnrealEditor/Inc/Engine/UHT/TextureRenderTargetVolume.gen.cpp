// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/TextureRenderTargetVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureRenderTargetVolume() {}
// Cross Module References
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EPixelFormat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTargetVolume();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTargetVolume_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UTextureRenderTargetVolume::StaticRegisterNativesUTextureRenderTargetVolume()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextureRenderTargetVolume);
	UClass* Z_Construct_UClass_UTextureRenderTargetVolume_NoRegister()
	{
		return UTextureRenderTargetVolume::StaticClass();
	}
	struct Z_Construct_UClass_UTextureRenderTargetVolume_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SizeY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeZ_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SizeZ;
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
	UObject* (*const Z_Construct_UClass_UTextureRenderTargetVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTextureRenderTarget,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTargetVolume_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * TextureRenderTargetVolume\n *\n * Volume render target texture resource. This can be used as a target\n * for rendering as well as rendered as a regular Volume texture resource.\n *\n */" },
		{ "HideCategories", "Object Texture" },
		{ "IncludePath", "Engine/TextureRenderTargetVolume.h" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTargetVolume.h" },
		{ "ToolTip", "TextureRenderTargetVolume\n\nVolume render target texture resource. This can be used as a target\nfor rendering as well as rendered as a regular Volume texture resource." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_SizeX_MetaData[] = {
		{ "Category", "TextureRenderTargetVolume" },
		{ "Comment", "/** The width of the texture.\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTargetVolume.h" },
		{ "ToolTip", "The width of the texture." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010010000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureRenderTargetVolume, SizeX), METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_SizeX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_SizeX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_SizeY_MetaData[] = {
		{ "Category", "TextureRenderTargetVolume" },
		{ "Comment", "/** The height of the texture.\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTargetVolume.h" },
		{ "ToolTip", "The height of the texture." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010010000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureRenderTargetVolume, SizeY), METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_SizeY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_SizeY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_SizeZ_MetaData[] = {
		{ "Category", "TextureRenderTargetVolume" },
		{ "Comment", "/** The depth of the texture.\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTargetVolume.h" },
		{ "ToolTip", "The depth of the texture." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_SizeZ = { "SizeZ", nullptr, (EPropertyFlags)0x0010010000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureRenderTargetVolume, SizeZ), METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_SizeZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_SizeZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_ClearColor_MetaData[] = {
		{ "Comment", "/** the color the texture is cleared to */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTargetVolume.h" },
		{ "ToolTip", "the color the texture is cleared to" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_ClearColor = { "ClearColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureRenderTargetVolume, ClearColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_ClearColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_ClearColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_OverrideFormat_MetaData[] = {
		{ "Comment", "/** Normally the format is derived from bHDR, this allows code to set the format explicitly. */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTargetVolume.h" },
		{ "ToolTip", "Normally the format is derived from bHDR, this allows code to set the format explicitly." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_OverrideFormat = { "OverrideFormat", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureRenderTargetVolume, OverrideFormat), Z_Construct_UEnum_CoreUObject_EPixelFormat, METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_OverrideFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_OverrideFormat_MetaData)) }; // 2651536151
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_bHDR_MetaData[] = {
		{ "Category", "TextureRenderTargetVolume" },
		{ "Comment", "/** Whether to support storing HDR values, which requires more memory. */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTargetVolume.h" },
		{ "ToolTip", "Whether to support storing HDR values, which requires more memory." },
	};
#endif
	void Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_bHDR_SetBit(void* Obj)
	{
		((UTextureRenderTargetVolume*)Obj)->bHDR = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_bHDR = { "bHDR", nullptr, (EPropertyFlags)0x0010010000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTextureRenderTargetVolume), &Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_bHDR_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_bHDR_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_bHDR_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_bForceLinearGamma_MetaData[] = {
		{ "Comment", "/** True to force linear gamma space for this render target */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTargetVolume.h" },
		{ "ToolTip", "True to force linear gamma space for this render target" },
	};
#endif
	void Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_bForceLinearGamma_SetBit(void* Obj)
	{
		((UTextureRenderTargetVolume*)Obj)->bForceLinearGamma = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_bForceLinearGamma = { "bForceLinearGamma", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTextureRenderTargetVolume), &Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_bForceLinearGamma_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_bForceLinearGamma_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_bForceLinearGamma_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextureRenderTargetVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_SizeX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_SizeY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_SizeZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_ClearColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_OverrideFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_bHDR,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_bForceLinearGamma,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextureRenderTargetVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureRenderTargetVolume>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextureRenderTargetVolume_Statics::ClassParams = {
		&UTextureRenderTargetVolume::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTextureRenderTargetVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTargetVolume_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTargetVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTargetVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextureRenderTargetVolume()
	{
		if (!Z_Registration_Info_UClass_UTextureRenderTargetVolume.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextureRenderTargetVolume.OuterSingleton, Z_Construct_UClass_UTextureRenderTargetVolume_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTextureRenderTargetVolume.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UTextureRenderTargetVolume>()
	{
		return UTextureRenderTargetVolume::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureRenderTargetVolume);
	UTextureRenderTargetVolume::~UTextureRenderTargetVolume() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTargetVolume_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTargetVolume_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTextureRenderTargetVolume, UTextureRenderTargetVolume::StaticClass, TEXT("UTextureRenderTargetVolume"), &Z_Registration_Info_UClass_UTextureRenderTargetVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextureRenderTargetVolume), 2336607060U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTargetVolume_h_1718574255(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTargetVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTargetVolume_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
