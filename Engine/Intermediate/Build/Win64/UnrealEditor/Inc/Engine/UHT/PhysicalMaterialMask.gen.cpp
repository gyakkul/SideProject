// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialMask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicalMaterialMask() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterialMask();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterialMask_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureAddress();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UPhysicalMaterialMask::StaticRegisterNativesUPhysicalMaterialMask()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhysicalMaterialMask);
	UClass* Z_Construct_UClass_UPhysicalMaterialMask_NoRegister()
	{
		return UPhysicalMaterialMask::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicalMaterialMask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AssetImportData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaskTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MaskTexture;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVChannelIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UVChannelIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddressX_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AddressX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddressY_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AddressY;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicalMaterialMask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalMaterialMask_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Physical material masks are used to map multiple physical materials to a single rendering material\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "PhysicalMaterials/PhysicalMaterialMask.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/PhysicalMaterials/PhysicalMaterialMask.h" },
		{ "ToolTip", "Physical material masks are used to map multiple physical materials to a single rendering material" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalMaterialMask_Statics::NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/PhysicalMaterials/PhysicalMaterialMask.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPhysicalMaterialMask_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x00160008000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicalMaterialMask, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhysicalMaterialMask_Statics::NewProp_AssetImportData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterialMask_Statics::NewProp_AssetImportData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalMaterialMask_Statics::NewProp_MaskTexture_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "Comment", "/** Mask input texture, square aspect ratio recommended. Recognized mask colors include: white, black, red, green, yellow, cyan, turquoise, and magenta. */" },
		{ "ModuleRelativePath", "Classes/PhysicalMaterials/PhysicalMaterialMask.h" },
		{ "ToolTip", "Mask input texture, square aspect ratio recommended. Recognized mask colors include: white, black, red, green, yellow, cyan, turquoise, and magenta." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPhysicalMaterialMask_Statics::NewProp_MaskTexture = { "MaskTexture", nullptr, (EPropertyFlags)0x0014000800020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicalMaterialMask, MaskTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhysicalMaterialMask_Statics::NewProp_MaskTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterialMask_Statics::NewProp_MaskTexture_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalMaterialMask_Statics::NewProp_UVChannelIndex_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "Comment", "/** StaticMesh UV channel index to use when performing lookups with this mask. */" },
		{ "ModuleRelativePath", "Classes/PhysicalMaterials/PhysicalMaterialMask.h" },
		{ "ToolTip", "StaticMesh UV channel index to use when performing lookups with this mask." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPhysicalMaterialMask_Statics::NewProp_UVChannelIndex = { "UVChannelIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicalMaterialMask, UVChannelIndex), METADATA_PARAMS(Z_Construct_UClass_UPhysicalMaterialMask_Statics::NewProp_UVChannelIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterialMask_Statics::NewProp_UVChannelIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalMaterialMask_Statics::NewProp_AddressX_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "Comment", "/** The addressing mode to use for the X axis. */" },
		{ "DisplayName", "X-axis Tiling Method" },
		{ "ModuleRelativePath", "Classes/PhysicalMaterials/PhysicalMaterialMask.h" },
		{ "ToolTip", "The addressing mode to use for the X axis." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhysicalMaterialMask_Statics::NewProp_AddressX = { "AddressX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicalMaterialMask, AddressX), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(Z_Construct_UClass_UPhysicalMaterialMask_Statics::NewProp_AddressX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterialMask_Statics::NewProp_AddressX_MetaData)) }; // 1462649072
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalMaterialMask_Statics::NewProp_AddressY_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "Comment", "/** The addressing mode to use for the Y axis. */" },
		{ "DisplayName", "Y-axis Tiling Method" },
		{ "ModuleRelativePath", "Classes/PhysicalMaterials/PhysicalMaterialMask.h" },
		{ "ToolTip", "The addressing mode to use for the Y axis." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhysicalMaterialMask_Statics::NewProp_AddressY = { "AddressY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicalMaterialMask, AddressY), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(Z_Construct_UClass_UPhysicalMaterialMask_Statics::NewProp_AddressY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterialMask_Statics::NewProp_AddressY_MetaData)) }; // 1462649072
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicalMaterialMask_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterialMask_Statics::NewProp_AssetImportData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterialMask_Statics::NewProp_MaskTexture,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterialMask_Statics::NewProp_UVChannelIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterialMask_Statics::NewProp_AddressX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterialMask_Statics::NewProp_AddressY,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicalMaterialMask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicalMaterialMask>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhysicalMaterialMask_Statics::ClassParams = {
		&UPhysicalMaterialMask::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPhysicalMaterialMask_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterialMask_Statics::PropPointers),
		0,
		0x009020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPhysicalMaterialMask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterialMask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhysicalMaterialMask()
	{
		if (!Z_Registration_Info_UClass_UPhysicalMaterialMask.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhysicalMaterialMask.OuterSingleton, Z_Construct_UClass_UPhysicalMaterialMask_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPhysicalMaterialMask.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UPhysicalMaterialMask>()
	{
		return UPhysicalMaterialMask::StaticClass();
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicalMaterials_PhysicalMaterialMask_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicalMaterials_PhysicalMaterialMask_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPhysicalMaterialMask, UPhysicalMaterialMask::StaticClass, TEXT("UPhysicalMaterialMask"), &Z_Registration_Info_UClass_UPhysicalMaterialMask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhysicalMaterialMask), 1002245843U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicalMaterials_PhysicalMaterialMask_h_2814053506(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicalMaterials_PhysicalMaterialMask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicalMaterials_PhysicalMaterialMask_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
