// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/Texture2dFactoryNew.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTexture2dFactoryNew() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UNREALED_API UClass* Z_Construct_UClass_UTexture2DFactoryNew();
	UNREALED_API UClass* Z_Construct_UClass_UTexture2DFactoryNew_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UTexture2DFactoryNew::StaticRegisterNativesUTexture2DFactoryNew()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTexture2DFactoryNew);
	UClass* Z_Construct_UClass_UTexture2DFactoryNew_NoRegister()
	{
		return UTexture2DFactoryNew::StaticClass();
	}
	struct Z_Construct_UClass_UTexture2DFactoryNew_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTexture2DFactoryNew_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture2DFactoryNew_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/Texture2dFactoryNew.h" },
		{ "ModuleRelativePath", "Classes/Factories/Texture2dFactoryNew.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture2DFactoryNew_Statics::NewProp_Width_MetaData[] = {
		{ "Comment", "/** width of new texture */" },
		{ "ModuleRelativePath", "Classes/Factories/Texture2dFactoryNew.h" },
		{ "ToolTip", "width of new texture" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTexture2DFactoryNew_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTexture2DFactoryNew, Width), METADATA_PARAMS(Z_Construct_UClass_UTexture2DFactoryNew_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture2DFactoryNew_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture2DFactoryNew_Statics::NewProp_Height_MetaData[] = {
		{ "Comment", "/** height of new texture */" },
		{ "ModuleRelativePath", "Classes/Factories/Texture2dFactoryNew.h" },
		{ "ToolTip", "height of new texture" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTexture2DFactoryNew_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTexture2DFactoryNew, Height), METADATA_PARAMS(Z_Construct_UClass_UTexture2DFactoryNew_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture2DFactoryNew_Statics::NewProp_Height_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTexture2DFactoryNew_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture2DFactoryNew_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture2DFactoryNew_Statics::NewProp_Height,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTexture2DFactoryNew_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTexture2DFactoryNew>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTexture2DFactoryNew_Statics::ClassParams = {
		&UTexture2DFactoryNew::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTexture2DFactoryNew_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTexture2DFactoryNew_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTexture2DFactoryNew_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture2DFactoryNew_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTexture2DFactoryNew()
	{
		if (!Z_Registration_Info_UClass_UTexture2DFactoryNew.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTexture2DFactoryNew.OuterSingleton, Z_Construct_UClass_UTexture2DFactoryNew_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTexture2DFactoryNew.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UTexture2DFactoryNew>()
	{
		return UTexture2DFactoryNew::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTexture2DFactoryNew);
	UTexture2DFactoryNew::~UTexture2DFactoryNew() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Texture2dFactoryNew_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Texture2dFactoryNew_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTexture2DFactoryNew, UTexture2DFactoryNew::StaticClass, TEXT("UTexture2DFactoryNew"), &Z_Registration_Info_UClass_UTexture2DFactoryNew, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTexture2DFactoryNew), 3918880923U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Texture2dFactoryNew_h_1427185626(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Texture2dFactoryNew_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Texture2dFactoryNew_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
