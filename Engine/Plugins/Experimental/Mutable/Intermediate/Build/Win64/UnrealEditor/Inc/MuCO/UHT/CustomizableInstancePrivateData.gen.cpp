// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/MuCO/CustomizableInstancePrivateData.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableInstancePrivateData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableInstancePrivateData();
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableInstancePrivateData_NoRegister();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableInstanceComponentData();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGeneratedMaterial();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGeneratedTexture();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FParameterDecorations();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FReferencedPhysicsAssets();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FReferencedSkeletons();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	UPackage* Z_Construct_UPackage__Script_CustomizableObject();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeneratedTexture;
class UScriptStruct* FGeneratedTexture::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeneratedTexture.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeneratedTexture.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeneratedTexture, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("GeneratedTexture"));
	}
	return Z_Registration_Info_UScriptStruct_GeneratedTexture.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<FGeneratedTexture>()
{
	return FGeneratedTexture::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeneratedTexture_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeneratedTexture_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MuCO/CustomizableInstancePrivateData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeneratedTexture_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeneratedTexture>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeneratedTexture_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "ModuleRelativePath", "Private/MuCO/CustomizableInstancePrivateData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeneratedTexture_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeneratedTexture, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeneratedTexture_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedTexture_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeneratedTexture_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "ModuleRelativePath", "Private/MuCO/CustomizableInstancePrivateData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGeneratedTexture_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeneratedTexture, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeneratedTexture_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedTexture_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeneratedTexture_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "ModuleRelativePath", "Private/MuCO/CustomizableInstancePrivateData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGeneratedTexture_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeneratedTexture, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeneratedTexture_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedTexture_Statics::NewProp_Texture_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeneratedTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedTexture_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedTexture_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedTexture_Statics::NewProp_Texture,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeneratedTexture_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
		nullptr,
		&NewStructOps,
		"GeneratedTexture",
		sizeof(FGeneratedTexture),
		alignof(FGeneratedTexture),
		Z_Construct_UScriptStruct_FGeneratedTexture_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedTexture_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeneratedTexture_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedTexture_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeneratedTexture()
	{
		if (!Z_Registration_Info_UScriptStruct_GeneratedTexture.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeneratedTexture.InnerSingleton, Z_Construct_UScriptStruct_FGeneratedTexture_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeneratedTexture.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeneratedMaterial;
class UScriptStruct* FGeneratedMaterial::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeneratedMaterial.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeneratedMaterial.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeneratedMaterial, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("GeneratedMaterial"));
	}
	return Z_Registration_Info_UScriptStruct_GeneratedMaterial.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<FGeneratedMaterial>()
{
	return FGeneratedMaterial::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeneratedMaterial_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Textures_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Textures_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Textures;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeneratedMaterial_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MuCO/CustomizableInstancePrivateData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeneratedMaterial_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeneratedMaterial>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeneratedMaterial_Statics::NewProp_Textures_Inner = { "Textures", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGeneratedTexture, METADATA_PARAMS(nullptr, 0) }; // 1557985824
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeneratedMaterial_Statics::NewProp_Textures_MetaData[] = {
		{ "Category", "CustomizedMaterial" },
		{ "ModuleRelativePath", "Private/MuCO/CustomizableInstancePrivateData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGeneratedMaterial_Statics::NewProp_Textures = { "Textures", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeneratedMaterial, Textures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeneratedMaterial_Statics::NewProp_Textures_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedMaterial_Statics::NewProp_Textures_MetaData)) }; // 1557985824
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeneratedMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedMaterial_Statics::NewProp_Textures_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedMaterial_Statics::NewProp_Textures,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeneratedMaterial_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
		nullptr,
		&NewStructOps,
		"GeneratedMaterial",
		sizeof(FGeneratedMaterial),
		alignof(FGeneratedMaterial),
		Z_Construct_UScriptStruct_FGeneratedMaterial_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedMaterial_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeneratedMaterial_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedMaterial_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeneratedMaterial()
	{
		if (!Z_Registration_Info_UScriptStruct_GeneratedMaterial.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeneratedMaterial.InnerSingleton, Z_Construct_UScriptStruct_FGeneratedMaterial_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeneratedMaterial.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ParameterDecorations;
class UScriptStruct* FParameterDecorations::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ParameterDecorations.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ParameterDecorations.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FParameterDecorations, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("ParameterDecorations"));
	}
	return Z_Registration_Info_UScriptStruct_ParameterDecorations.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<FParameterDecorations>()
{
	return FParameterDecorations::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FParameterDecorations_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Images_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Images_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Images;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterDecorations_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Unreal-side data for the parameter decorations.\n" },
		{ "ModuleRelativePath", "Private/MuCO/CustomizableInstancePrivateData.h" },
		{ "ToolTip", "Unreal-side data for the parameter decorations." },
	};
#endif
	void* Z_Construct_UScriptStruct_FParameterDecorations_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParameterDecorations>();
	}
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FParameterDecorations_Statics::NewProp_Images_Inner = { "Images", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterDecorations_Statics::NewProp_Images_MetaData[] = {
		{ "ModuleRelativePath", "Private/MuCO/CustomizableInstancePrivateData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FParameterDecorations_Statics::NewProp_Images = { "Images", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FParameterDecorations, Images), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterDecorations_Statics::NewProp_Images_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterDecorations_Statics::NewProp_Images_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FParameterDecorations_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterDecorations_Statics::NewProp_Images_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterDecorations_Statics::NewProp_Images,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParameterDecorations_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
		nullptr,
		&NewStructOps,
		"ParameterDecorations",
		sizeof(FParameterDecorations),
		alignof(FParameterDecorations),
		Z_Construct_UScriptStruct_FParameterDecorations_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterDecorations_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterDecorations_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterDecorations_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FParameterDecorations()
	{
		if (!Z_Registration_Info_UScriptStruct_ParameterDecorations.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ParameterDecorations.InnerSingleton, Z_Construct_UScriptStruct_FParameterDecorations_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ParameterDecorations.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ReferencedPhysicsAssets;
class UScriptStruct* FReferencedPhysicsAssets::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ReferencedPhysicsAssets.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ReferencedPhysicsAssets.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FReferencedPhysicsAssets, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("ReferencedPhysicsAssets"));
	}
	return Z_Registration_Info_UScriptStruct_ReferencedPhysicsAssets.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<FReferencedPhysicsAssets>()
{
	return FReferencedPhysicsAssets::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FReferencedPhysicsAssets_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PhysicsAssetsToMerge_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsAssetsToMerge_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PhysicsAssetsToMerge;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReferencedPhysicsAssets_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MuCO/CustomizableInstancePrivateData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FReferencedPhysicsAssets_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReferencedPhysicsAssets>();
	}
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FReferencedPhysicsAssets_Statics::NewProp_PhysicsAssetsToMerge_Inner = { "PhysicsAssetsToMerge", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReferencedPhysicsAssets_Statics::NewProp_PhysicsAssetsToMerge_MetaData[] = {
		{ "ModuleRelativePath", "Private/MuCO/CustomizableInstancePrivateData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FReferencedPhysicsAssets_Statics::NewProp_PhysicsAssetsToMerge = { "PhysicsAssetsToMerge", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FReferencedPhysicsAssets, PhysicsAssetsToMerge), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FReferencedPhysicsAssets_Statics::NewProp_PhysicsAssetsToMerge_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReferencedPhysicsAssets_Statics::NewProp_PhysicsAssetsToMerge_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReferencedPhysicsAssets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReferencedPhysicsAssets_Statics::NewProp_PhysicsAssetsToMerge_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReferencedPhysicsAssets_Statics::NewProp_PhysicsAssetsToMerge,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReferencedPhysicsAssets_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
		nullptr,
		&NewStructOps,
		"ReferencedPhysicsAssets",
		sizeof(FReferencedPhysicsAssets),
		alignof(FReferencedPhysicsAssets),
		Z_Construct_UScriptStruct_FReferencedPhysicsAssets_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReferencedPhysicsAssets_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FReferencedPhysicsAssets_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReferencedPhysicsAssets_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FReferencedPhysicsAssets()
	{
		if (!Z_Registration_Info_UScriptStruct_ReferencedPhysicsAssets.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ReferencedPhysicsAssets.InnerSingleton, Z_Construct_UScriptStruct_FReferencedPhysicsAssets_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ReferencedPhysicsAssets.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ReferencedSkeletons;
class UScriptStruct* FReferencedSkeletons::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ReferencedSkeletons.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ReferencedSkeletons.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FReferencedSkeletons, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("ReferencedSkeletons"));
	}
	return Z_Registration_Info_UScriptStruct_ReferencedSkeletons.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<FReferencedSkeletons>()
{
	return FReferencedSkeletons::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FReferencedSkeletons_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FIntPropertyParams NewProp_SkeletonsToLoad_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletonsToLoad_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SkeletonsToLoad;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SkeletonsToMerge_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletonsToMerge_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SkeletonsToMerge;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReferencedSkeletons_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MuCO/CustomizableInstancePrivateData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FReferencedSkeletons_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReferencedSkeletons>();
	}
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FReferencedSkeletons_Statics::NewProp_SkeletonsToLoad_Inner = { "SkeletonsToLoad", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReferencedSkeletons_Statics::NewProp_SkeletonsToLoad_MetaData[] = {
		{ "ModuleRelativePath", "Private/MuCO/CustomizableInstancePrivateData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FReferencedSkeletons_Statics::NewProp_SkeletonsToLoad = { "SkeletonsToLoad", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FReferencedSkeletons, SkeletonsToLoad), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FReferencedSkeletons_Statics::NewProp_SkeletonsToLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReferencedSkeletons_Statics::NewProp_SkeletonsToLoad_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FReferencedSkeletons_Statics::NewProp_SkeletonsToMerge_Inner = { "SkeletonsToMerge", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReferencedSkeletons_Statics::NewProp_SkeletonsToMerge_MetaData[] = {
		{ "ModuleRelativePath", "Private/MuCO/CustomizableInstancePrivateData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FReferencedSkeletons_Statics::NewProp_SkeletonsToMerge = { "SkeletonsToMerge", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FReferencedSkeletons, SkeletonsToMerge), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FReferencedSkeletons_Statics::NewProp_SkeletonsToMerge_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReferencedSkeletons_Statics::NewProp_SkeletonsToMerge_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReferencedSkeletons_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReferencedSkeletons_Statics::NewProp_SkeletonsToLoad_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReferencedSkeletons_Statics::NewProp_SkeletonsToLoad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReferencedSkeletons_Statics::NewProp_SkeletonsToMerge_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReferencedSkeletons_Statics::NewProp_SkeletonsToMerge,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReferencedSkeletons_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
		nullptr,
		&NewStructOps,
		"ReferencedSkeletons",
		sizeof(FReferencedSkeletons),
		alignof(FReferencedSkeletons),
		Z_Construct_UScriptStruct_FReferencedSkeletons_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReferencedSkeletons_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FReferencedSkeletons_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReferencedSkeletons_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FReferencedSkeletons()
	{
		if (!Z_Registration_Info_UScriptStruct_ReferencedSkeletons.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ReferencedSkeletons.InnerSingleton, Z_Construct_UScriptStruct_FReferencedSkeletons_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ReferencedSkeletons.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomizableInstanceComponentData;
class UScriptStruct* FCustomizableInstanceComponentData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomizableInstanceComponentData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomizableInstanceComponentData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizableInstanceComponentData, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("CustomizableInstanceComponentData"));
	}
	return Z_Registration_Info_UScriptStruct_CustomizableInstanceComponentData.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<FCustomizableInstanceComponentData>()
{
	return FCustomizableInstanceComponentData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_AnimSlotToBP_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AnimSlotToBP_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimSlotToBP_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_AnimSlotToBP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Skeletons_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Skeletons;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsAssets_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PhysicsAssets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MuCO/CustomizableInstancePrivateData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizableInstanceComponentData>();
	}
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics::NewProp_AnimSlotToBP_ValueProp = { "AnimSlotToBP", nullptr, (EPropertyFlags)0x0004000000020001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics::NewProp_AnimSlotToBP_Key_KeyProp = { "AnimSlotToBP_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics::NewProp_AnimSlotToBP_MetaData[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "Comment", "// AnimBP data gathered for a component from its constituent meshes\n" },
		{ "ModuleRelativePath", "Private/MuCO/CustomizableInstancePrivateData.h" },
		{ "ToolTip", "AnimBP data gathered for a component from its constituent meshes" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics::NewProp_AnimSlotToBP = { "AnimSlotToBP", nullptr, (EPropertyFlags)0x0014000000022041, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableInstanceComponentData, AnimSlotToBP), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics::NewProp_AnimSlotToBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics::NewProp_AnimSlotToBP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics::NewProp_Skeletons_MetaData[] = {
		{ "Comment", "/** Skeletons required by the current generated instance. Skeletons to be loaded and merged.*/" },
		{ "ModuleRelativePath", "Private/MuCO/CustomizableInstancePrivateData.h" },
		{ "ToolTip", "Skeletons required by the current generated instance. Skeletons to be loaded and merged." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics::NewProp_Skeletons = { "Skeletons", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableInstanceComponentData, Skeletons), Z_Construct_UScriptStruct_FReferencedSkeletons, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics::NewProp_Skeletons_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics::NewProp_Skeletons_MetaData)) }; // 2574130651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics::NewProp_PhysicsAssets_MetaData[] = {
		{ "Comment", "/** PhysicsAssets required by the current generated instance. PhysicsAssets to be loaded and merged.*/" },
		{ "ModuleRelativePath", "Private/MuCO/CustomizableInstancePrivateData.h" },
		{ "ToolTip", "PhysicsAssets required by the current generated instance. PhysicsAssets to be loaded and merged." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics::NewProp_PhysicsAssets = { "PhysicsAssets", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableInstanceComponentData, PhysicsAssets), Z_Construct_UScriptStruct_FReferencedPhysicsAssets, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics::NewProp_PhysicsAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics::NewProp_PhysicsAssets_MetaData)) }; // 3773699642
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics::NewProp_AnimSlotToBP_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics::NewProp_AnimSlotToBP_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics::NewProp_AnimSlotToBP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics::NewProp_Skeletons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics::NewProp_PhysicsAssets,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
		nullptr,
		&NewStructOps,
		"CustomizableInstanceComponentData",
		sizeof(FCustomizableInstanceComponentData),
		alignof(FCustomizableInstanceComponentData),
		Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomizableInstanceComponentData()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomizableInstanceComponentData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomizableInstanceComponentData.InnerSingleton, Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomizableInstanceComponentData.InnerSingleton;
	}
	void UCustomizableInstancePrivateData::StaticRegisterNativesUCustomizableInstancePrivateData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableInstancePrivateData);
	UClass* Z_Construct_UClass_UCustomizableInstancePrivateData_NoRegister()
	{
		return UCustomizableInstancePrivateData::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableInstancePrivateData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GeneratedMaterials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GeneratedMaterials;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GeneratedTextures_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedTextures_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GeneratedTextures;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterDecorations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterDecorations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ParameterDecorations;
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_TextureReuseCache_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_TextureReuseCache_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureReuseCache_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_TextureReuseCache;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentsData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentsData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ComponentsData;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ReferencedMaterials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferencedMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReferencedMaterials;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ClothingPhysicsAssets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClothingPhysicsAssets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ClothingPhysicsAssets;
		static const UECodeGen_Private::FClassPropertyParams NewProp_GatheredAnimBPs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GatheredAnimBPs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GatheredAnimBPs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimBPGameplayTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimBPGameplayTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuCO/CustomizableInstancePrivateData.h" },
		{ "ModuleRelativePath", "Private/MuCO/CustomizableInstancePrivateData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_GeneratedMaterials_Inner = { "GeneratedMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGeneratedMaterial, METADATA_PARAMS(nullptr, 0) }; // 4170907895
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_GeneratedMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Private/MuCO/CustomizableInstancePrivateData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_GeneratedMaterials = { "GeneratedMaterials", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableInstancePrivateData, GeneratedMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_GeneratedMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_GeneratedMaterials_MetaData)) }; // 4170907895
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_GeneratedTextures_Inner = { "GeneratedTextures", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGeneratedTexture, METADATA_PARAMS(nullptr, 0) }; // 1557985824
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_GeneratedTextures_MetaData[] = {
		{ "ModuleRelativePath", "Private/MuCO/CustomizableInstancePrivateData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_GeneratedTextures = { "GeneratedTextures", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableInstancePrivateData, GeneratedTextures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_GeneratedTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_GeneratedTextures_MetaData)) }; // 1557985824
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_ParameterDecorations_Inner = { "ParameterDecorations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FParameterDecorations, METADATA_PARAMS(nullptr, 0) }; // 1107727057
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_ParameterDecorations_MetaData[] = {
		{ "Comment", "// Parameter decoration unreal-side data if generated.\n" },
		{ "ModuleRelativePath", "Private/MuCO/CustomizableInstancePrivateData.h" },
		{ "ToolTip", "Parameter decoration unreal-side data if generated." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_ParameterDecorations = { "ParameterDecorations", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableInstancePrivateData, ParameterDecorations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_ParameterDecorations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_ParameterDecorations_MetaData)) }; // 1107727057
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_TextureReuseCache_ValueProp = { "TextureReuseCache", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_TextureReuseCache_Key_KeyProp = { "TextureReuseCache_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_TextureReuseCache_MetaData[] = {
		{ "Comment", "// If Texture reuse is enabled, stores which texture is being used in a particular <LODIndex, ComponentIndex, MeshSurfaceIndex, image>\n// \\TODO: Create a key based on a struct instead of generating strings dynamically.\n" },
		{ "ModuleRelativePath", "Private/MuCO/CustomizableInstancePrivateData.h" },
		{ "ToolTip", "If Texture reuse is enabled, stores which texture is being used in a particular <LODIndex, ComponentIndex, MeshSurfaceIndex, image>\n\\TODO: Create a key based on a struct instead of generating strings dynamically." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_TextureReuseCache = { "TextureReuseCache", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableInstancePrivateData, TextureReuseCache), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_TextureReuseCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_TextureReuseCache_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_ComponentsData_Inner = { "ComponentsData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCustomizableInstanceComponentData, METADATA_PARAMS(nullptr, 0) }; // 430511798
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_ComponentsData_MetaData[] = {
		{ "ModuleRelativePath", "Private/MuCO/CustomizableInstancePrivateData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_ComponentsData = { "ComponentsData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableInstancePrivateData, ComponentsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_ComponentsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_ComponentsData_MetaData)) }; // 430511798
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_ReferencedMaterials_Inner = { "ReferencedMaterials", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_ReferencedMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Private/MuCO/CustomizableInstancePrivateData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_ReferencedMaterials = { "ReferencedMaterials", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableInstancePrivateData, ReferencedMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_ReferencedMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_ReferencedMaterials_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_ClothingPhysicsAssets_Inner = { "ClothingPhysicsAssets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_ClothingPhysicsAssets_MetaData[] = {
		{ "ModuleRelativePath", "Private/MuCO/CustomizableInstancePrivateData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_ClothingPhysicsAssets = { "ClothingPhysicsAssets", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableInstancePrivateData, ClothingPhysicsAssets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_ClothingPhysicsAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_ClothingPhysicsAssets_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_GatheredAnimBPs_Inner = { "GatheredAnimBPs", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_GatheredAnimBPs_MetaData[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "Comment", "// To keep loaded AnimBPs referenced and prevent GC\n" },
		{ "ModuleRelativePath", "Private/MuCO/CustomizableInstancePrivateData.h" },
		{ "ToolTip", "To keep loaded AnimBPs referenced and prevent GC" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_GatheredAnimBPs = { "GatheredAnimBPs", nullptr, (EPropertyFlags)0x0014000000022041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableInstancePrivateData, GatheredAnimBPs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_GatheredAnimBPs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_GatheredAnimBPs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_AnimBPGameplayTags_MetaData[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "ModuleRelativePath", "Private/MuCO/CustomizableInstancePrivateData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_AnimBPGameplayTags = { "AnimBPGameplayTags", nullptr, (EPropertyFlags)0x0010000000022041, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableInstancePrivateData, AnimBPGameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_AnimBPGameplayTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_AnimBPGameplayTags_MetaData)) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_GeneratedMaterials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_GeneratedMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_GeneratedTextures_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_GeneratedTextures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_ParameterDecorations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_ParameterDecorations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_TextureReuseCache_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_TextureReuseCache_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_TextureReuseCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_ComponentsData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_ComponentsData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_ReferencedMaterials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_ReferencedMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_ClothingPhysicsAssets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_ClothingPhysicsAssets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_GatheredAnimBPs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_GatheredAnimBPs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_AnimBPGameplayTags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableInstancePrivateData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::ClassParams = {
		&UCustomizableInstancePrivateData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizableInstancePrivateData()
	{
		if (!Z_Registration_Info_UClass_UCustomizableInstancePrivateData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableInstancePrivateData.OuterSingleton, Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableInstancePrivateData.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECT_API UClass* StaticClass<UCustomizableInstancePrivateData>()
	{
		return UCustomizableInstancePrivateData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableInstancePrivateData);
	UCustomizableInstancePrivateData::~UCustomizableInstancePrivateData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Private_MuCO_CustomizableInstancePrivateData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Private_MuCO_CustomizableInstancePrivateData_h_Statics::ScriptStructInfo[] = {
		{ FGeneratedTexture::StaticStruct, Z_Construct_UScriptStruct_FGeneratedTexture_Statics::NewStructOps, TEXT("GeneratedTexture"), &Z_Registration_Info_UScriptStruct_GeneratedTexture, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeneratedTexture), 1557985824U) },
		{ FGeneratedMaterial::StaticStruct, Z_Construct_UScriptStruct_FGeneratedMaterial_Statics::NewStructOps, TEXT("GeneratedMaterial"), &Z_Registration_Info_UScriptStruct_GeneratedMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeneratedMaterial), 4170907895U) },
		{ FParameterDecorations::StaticStruct, Z_Construct_UScriptStruct_FParameterDecorations_Statics::NewStructOps, TEXT("ParameterDecorations"), &Z_Registration_Info_UScriptStruct_ParameterDecorations, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FParameterDecorations), 1107727057U) },
		{ FReferencedPhysicsAssets::StaticStruct, Z_Construct_UScriptStruct_FReferencedPhysicsAssets_Statics::NewStructOps, TEXT("ReferencedPhysicsAssets"), &Z_Registration_Info_UScriptStruct_ReferencedPhysicsAssets, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FReferencedPhysicsAssets), 3773699642U) },
		{ FReferencedSkeletons::StaticStruct, Z_Construct_UScriptStruct_FReferencedSkeletons_Statics::NewStructOps, TEXT("ReferencedSkeletons"), &Z_Registration_Info_UScriptStruct_ReferencedSkeletons, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FReferencedSkeletons), 2574130651U) },
		{ FCustomizableInstanceComponentData::StaticStruct, Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics::NewStructOps, TEXT("CustomizableInstanceComponentData"), &Z_Registration_Info_UScriptStruct_CustomizableInstanceComponentData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomizableInstanceComponentData), 430511798U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Private_MuCO_CustomizableInstancePrivateData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableInstancePrivateData, UCustomizableInstancePrivateData::StaticClass, TEXT("UCustomizableInstancePrivateData"), &Z_Registration_Info_UClass_UCustomizableInstancePrivateData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableInstancePrivateData), 838234359U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Private_MuCO_CustomizableInstancePrivateData_h_2919827242(TEXT("/Script/CustomizableObject"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Private_MuCO_CustomizableInstancePrivateData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Private_MuCO_CustomizableInstancePrivateData_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Private_MuCO_CustomizableInstancePrivateData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Private_MuCO_CustomizableInstancePrivateData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
