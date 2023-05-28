// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/Texture2DArray.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTexture2DArray() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTexture();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2DArray();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2DArray_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureAddress();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UTexture2DArray::StaticRegisterNativesUTexture2DArray()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTexture2DArray);
	UClass* Z_Construct_UClass_UTexture2DArray_NoRegister()
	{
		return UTexture2DArray::StaticClass();
	}
	struct Z_Construct_UClass_UTexture2DArray_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddressX_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AddressX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddressY_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AddressY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddressZ_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AddressZ;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceTextures_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceTextures_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SourceTextures;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSourceGeneratedFromSourceTexturesArray_MetaData[];
#endif
		static void NewProp_bSourceGeneratedFromSourceTexturesArray_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSourceGeneratedFromSourceTexturesArray;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTexture2DArray_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTexture,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture2DArray_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Engine/Texture2DArray.h" },
		{ "ModuleRelativePath", "Classes/Engine/Texture2DArray.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture2DArray_Statics::NewProp_AddressX_MetaData[] = {
		{ "Category", "Source2D" },
		{ "Comment", "/** The addressing mode to use for the X axis.*/" },
		{ "DisplayName", "Address X" },
		{ "ModuleRelativePath", "Classes/Engine/Texture2DArray.h" },
		{ "ToolTip", "The addressing mode to use for the X axis." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTexture2DArray_Statics::NewProp_AddressX = { "AddressX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTexture2DArray, AddressX), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(Z_Construct_UClass_UTexture2DArray_Statics::NewProp_AddressX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture2DArray_Statics::NewProp_AddressX_MetaData)) }; // 1462649072
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture2DArray_Statics::NewProp_AddressY_MetaData[] = {
		{ "Category", "Source2D" },
		{ "Comment", "/** The addressing mode to use for the Y axis.*/" },
		{ "DisplayName", "Address Y" },
		{ "ModuleRelativePath", "Classes/Engine/Texture2DArray.h" },
		{ "ToolTip", "The addressing mode to use for the Y axis." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTexture2DArray_Statics::NewProp_AddressY = { "AddressY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTexture2DArray, AddressY), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(Z_Construct_UClass_UTexture2DArray_Statics::NewProp_AddressY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture2DArray_Statics::NewProp_AddressY_MetaData)) }; // 1462649072
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture2DArray_Statics::NewProp_AddressZ_MetaData[] = {
		{ "Category", "Source2D" },
		{ "Comment", "/** The addressing mode to use for the Z axis.*/" },
		{ "DisplayName", "Address Z" },
		{ "ModuleRelativePath", "Classes/Engine/Texture2DArray.h" },
		{ "ToolTip", "The addressing mode to use for the Z axis." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTexture2DArray_Statics::NewProp_AddressZ = { "AddressZ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTexture2DArray, AddressZ), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(Z_Construct_UClass_UTexture2DArray_Statics::NewProp_AddressZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture2DArray_Statics::NewProp_AddressZ_MetaData)) }; // 1462649072
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTexture2DArray_Statics::NewProp_SourceTextures_Inner = { "SourceTextures", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture2DArray_Statics::NewProp_SourceTextures_MetaData[] = {
		{ "Category", "Source2D" },
		{ "Comment", "/** Add Textures*/" },
		{ "DisplayName", "Source Textures" },
		{ "EditCondition", "bSourceGeneratedFromSourceTexturesArray" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Texture2DArray.h" },
		{ "ToolTip", "Add Textures" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTexture2DArray_Statics::NewProp_SourceTextures = { "SourceTextures", nullptr, (EPropertyFlags)0x0014000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTexture2DArray, SourceTextures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTexture2DArray_Statics::NewProp_SourceTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture2DArray_Statics::NewProp_SourceTextures_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture2DArray_Statics::NewProp_bSourceGeneratedFromSourceTexturesArray_MetaData[] = {
		{ "Comment", "/** \n\x09* Is set to true if the source texture was generated from the SourceTextures array\n\x09* (which is not always the case, i.e. the source texture could be imported from a DDS file containing multiple slices).\n\x09* This transient property is used to control access to the SourceTextures array from UI using EditCondition mechanism\n\x09* (as any operation with the SourceTextures array would invalidate the originally imported source texture).\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/Texture2DArray.h" },
		{ "ToolTip", "Is set to true if the source texture was generated from the SourceTextures array\n(which is not always the case, i.e. the source texture could be imported from a DDS file containing multiple slices).\nThis transient property is used to control access to the SourceTextures array from UI using EditCondition mechanism\n(as any operation with the SourceTextures array would invalidate the originally imported source texture)." },
	};
#endif
	void Z_Construct_UClass_UTexture2DArray_Statics::NewProp_bSourceGeneratedFromSourceTexturesArray_SetBit(void* Obj)
	{
		((UTexture2DArray*)Obj)->bSourceGeneratedFromSourceTexturesArray = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture2DArray_Statics::NewProp_bSourceGeneratedFromSourceTexturesArray = { "bSourceGeneratedFromSourceTexturesArray", nullptr, (EPropertyFlags)0x0090000800002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTexture2DArray), &Z_Construct_UClass_UTexture2DArray_Statics::NewProp_bSourceGeneratedFromSourceTexturesArray_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTexture2DArray_Statics::NewProp_bSourceGeneratedFromSourceTexturesArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture2DArray_Statics::NewProp_bSourceGeneratedFromSourceTexturesArray_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTexture2DArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture2DArray_Statics::NewProp_AddressX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture2DArray_Statics::NewProp_AddressY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture2DArray_Statics::NewProp_AddressZ,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture2DArray_Statics::NewProp_SourceTextures_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture2DArray_Statics::NewProp_SourceTextures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture2DArray_Statics::NewProp_bSourceGeneratedFromSourceTexturesArray,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTexture2DArray_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTexture2DArray>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTexture2DArray_Statics::ClassParams = {
		&UTexture2DArray::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTexture2DArray_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTexture2DArray_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTexture2DArray_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture2DArray_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTexture2DArray()
	{
		if (!Z_Registration_Info_UClass_UTexture2DArray.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTexture2DArray.OuterSingleton, Z_Construct_UClass_UTexture2DArray_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTexture2DArray.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UTexture2DArray>()
	{
		return UTexture2DArray::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTexture2DArray);
	UTexture2DArray::~UTexture2DArray() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UTexture2DArray)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2DArray_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2DArray_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTexture2DArray, UTexture2DArray::StaticClass, TEXT("UTexture2DArray"), &Z_Registration_Info_UClass_UTexture2DArray, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTexture2DArray), 2285153482U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2DArray_h_1004563593(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2DArray_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2DArray_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
