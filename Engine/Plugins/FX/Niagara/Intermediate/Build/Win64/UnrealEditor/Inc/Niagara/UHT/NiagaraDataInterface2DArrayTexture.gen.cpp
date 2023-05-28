// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/NiagaraDataInterface2DArrayTexture.h"
#include "../Public/NiagaraCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterface2DArrayTexture() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface2DArrayTexture();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface2DArrayTexture_NoRegister();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUserParameterBinding();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UNiagaraDataInterface2DArrayTexture::StaticRegisterNativesUNiagaraDataInterface2DArrayTexture()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterface2DArrayTexture);
	UClass* Z_Construct_UClass_UNiagaraDataInterface2DArrayTexture_NoRegister()
	{
		return UNiagaraDataInterface2DArrayTexture::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterface2DArrayTexture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Texture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureUserParameter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextureUserParameter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterface2DArrayTexture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterface2DArrayTexture_Statics::Class_MetaDataParams[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** Data Interface allowing sampling of a texture */" },
		{ "DisplayName", "2D Array Texture Sample" },
		{ "IncludePath", "NiagaraDataInterface2DArrayTexture.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterface2DArrayTexture.h" },
		{ "ToolTip", "Data Interface allowing sampling of a texture" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterface2DArrayTexture_Statics::NewProp_Texture_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.Texture2DArray,/Script/Engine.TextureRenderTarget2DArray" },
		{ "Category", "Texture" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterface2DArrayTexture.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraDataInterface2DArrayTexture_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterface2DArrayTexture, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterface2DArrayTexture_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterface2DArrayTexture_Statics::NewProp_Texture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterface2DArrayTexture_Statics::NewProp_TextureUserParameter_MetaData[] = {
		{ "Category", "Texture" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterface2DArrayTexture.h" },
		{ "ToolTip", "When valid the user parameter is used as the texture rather than the one on the data interface" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterface2DArrayTexture_Statics::NewProp_TextureUserParameter = { "TextureUserParameter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterface2DArrayTexture, TextureUserParameter), Z_Construct_UScriptStruct_FNiagaraUserParameterBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterface2DArrayTexture_Statics::NewProp_TextureUserParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterface2DArrayTexture_Statics::NewProp_TextureUserParameter_MetaData)) }; // 1724214256
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterface2DArrayTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterface2DArrayTexture_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterface2DArrayTexture_Statics::NewProp_TextureUserParameter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterface2DArrayTexture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterface2DArrayTexture>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterface2DArrayTexture_Statics::ClassParams = {
		&UNiagaraDataInterface2DArrayTexture::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterface2DArrayTexture_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterface2DArrayTexture_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterface2DArrayTexture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterface2DArrayTexture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterface2DArrayTexture()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataInterface2DArrayTexture.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterface2DArrayTexture.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterface2DArrayTexture_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataInterface2DArrayTexture.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterface2DArrayTexture>()
	{
		return UNiagaraDataInterface2DArrayTexture::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterface2DArrayTexture);
	UNiagaraDataInterface2DArrayTexture::~UNiagaraDataInterface2DArrayTexture() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterface2DArrayTexture_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterface2DArrayTexture_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterface2DArrayTexture, UNiagaraDataInterface2DArrayTexture::StaticClass, TEXT("UNiagaraDataInterface2DArrayTexture"), &Z_Registration_Info_UClass_UNiagaraDataInterface2DArrayTexture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterface2DArrayTexture), 2218820657U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterface2DArrayTexture_h_3292576795(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterface2DArrayTexture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterface2DArrayTexture_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
