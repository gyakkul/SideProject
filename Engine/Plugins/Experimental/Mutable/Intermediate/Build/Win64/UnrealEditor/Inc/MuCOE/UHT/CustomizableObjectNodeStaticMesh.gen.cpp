// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuCOE/Nodes/CustomizableObjectNodeStaticMesh.h"
#include "../../Source/Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectNodeStaticMesh() {}
// Cross Module References
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeMesh();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeStaticMesh();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeStaticMesh_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshLOD();
	CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshMaterial();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphPin_Deprecated_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphPinReference();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomizableObjectNodeStaticMeshMaterial;
class UScriptStruct* FCustomizableObjectNodeStaticMeshMaterial::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomizableObjectNodeStaticMeshMaterial.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomizableObjectNodeStaticMeshMaterial.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshMaterial, (UObject*)Z_Construct_UPackage__Script_CustomizableObjectEditor(), TEXT("CustomizableObjectNodeStaticMeshMaterial"));
	}
	return Z_Registration_Info_UScriptStruct_CustomizableObjectNodeStaticMeshMaterial.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* StaticStruct<FCustomizableObjectNodeStaticMeshMaterial>()
{
	return FCustomizableObjectNodeStaticMeshMaterial::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshMaterial_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshPin_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MeshPin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayoutPin_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LayoutPin;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ImagePins_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImagePins_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ImagePins;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshPinRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshPinRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayoutPinRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LayoutPinRef;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImagePinsRef_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImagePinsRef_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ImagePinsRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshMaterial_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeStaticMesh.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshMaterial_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizableObjectNodeStaticMeshMaterial>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshMaterial_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeStaticMesh.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshMaterial_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectNodeStaticMeshMaterial, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshMaterial_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshMaterial_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshMaterial_Statics::NewProp_MeshPin_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeStaticMesh.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshMaterial_Statics::NewProp_MeshPin = { "MeshPin", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectNodeStaticMeshMaterial, MeshPin), Z_Construct_UClass_UEdGraphPin_Deprecated_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshMaterial_Statics::NewProp_MeshPin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshMaterial_Statics::NewProp_MeshPin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshMaterial_Statics::NewProp_LayoutPin_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeStaticMesh.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshMaterial_Statics::NewProp_LayoutPin = { "LayoutPin", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectNodeStaticMeshMaterial, LayoutPin), Z_Construct_UClass_UEdGraphPin_Deprecated_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshMaterial_Statics::NewProp_LayoutPin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshMaterial_Statics::NewProp_LayoutPin_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshMaterial_Statics::NewProp_ImagePins_Inner = { "ImagePins", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UEdGraphPin_Deprecated_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshMaterial_Statics::NewProp_ImagePins_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeStaticMesh.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshMaterial_Statics::NewProp_ImagePins = { "ImagePins", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectNodeStaticMeshMaterial, ImagePins), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshMaterial_Statics::NewProp_ImagePins_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshMaterial_Statics::NewProp_ImagePins_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshMaterial_Statics::NewProp_MeshPinRef_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeStaticMesh.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshMaterial_Statics::NewProp_MeshPinRef = { "MeshPinRef", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectNodeStaticMeshMaterial, MeshPinRef), Z_Construct_UScriptStruct_FEdGraphPinReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshMaterial_Statics::NewProp_MeshPinRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshMaterial_Statics::NewProp_MeshPinRef_MetaData)) }; // 1910659421
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshMaterial_Statics::NewProp_LayoutPinRef_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeStaticMesh.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshMaterial_Statics::NewProp_LayoutPinRef = { "LayoutPinRef", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectNodeStaticMeshMaterial, LayoutPinRef), Z_Construct_UScriptStruct_FEdGraphPinReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshMaterial_Statics::NewProp_LayoutPinRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshMaterial_Statics::NewProp_LayoutPinRef_MetaData)) }; // 1910659421
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshMaterial_Statics::NewProp_ImagePinsRef_Inner = { "ImagePinsRef", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FEdGraphPinReference, METADATA_PARAMS(nullptr, 0) }; // 1910659421
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshMaterial_Statics::NewProp_ImagePinsRef_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeStaticMesh.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshMaterial_Statics::NewProp_ImagePinsRef = { "ImagePinsRef", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectNodeStaticMeshMaterial, ImagePinsRef), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshMaterial_Statics::NewProp_ImagePinsRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshMaterial_Statics::NewProp_ImagePinsRef_MetaData)) }; // 1910659421
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshMaterial_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshMaterial_Statics::NewProp_MeshPin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshMaterial_Statics::NewProp_LayoutPin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshMaterial_Statics::NewProp_ImagePins_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshMaterial_Statics::NewProp_ImagePins,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshMaterial_Statics::NewProp_MeshPinRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshMaterial_Statics::NewProp_LayoutPinRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshMaterial_Statics::NewProp_ImagePinsRef_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshMaterial_Statics::NewProp_ImagePinsRef,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshMaterial_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
		nullptr,
		&NewStructOps,
		"CustomizableObjectNodeStaticMeshMaterial",
		sizeof(FCustomizableObjectNodeStaticMeshMaterial),
		alignof(FCustomizableObjectNodeStaticMeshMaterial),
		Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshMaterial_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshMaterial_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshMaterial_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshMaterial_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshMaterial()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomizableObjectNodeStaticMeshMaterial.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomizableObjectNodeStaticMeshMaterial.InnerSingleton, Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshMaterial_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomizableObjectNodeStaticMeshMaterial.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomizableObjectNodeStaticMeshLOD;
class UScriptStruct* FCustomizableObjectNodeStaticMeshLOD::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomizableObjectNodeStaticMeshLOD.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomizableObjectNodeStaticMeshLOD.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshLOD, (UObject*)Z_Construct_UPackage__Script_CustomizableObjectEditor(), TEXT("CustomizableObjectNodeStaticMeshLOD"));
	}
	return Z_Registration_Info_UScriptStruct_CustomizableObjectNodeStaticMeshLOD.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* StaticStruct<FCustomizableObjectNodeStaticMeshLOD>()
{
	return FCustomizableObjectNodeStaticMeshLOD::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshLOD_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Materials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshLOD_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeStaticMesh.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshLOD_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizableObjectNodeStaticMeshLOD>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshLOD_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshMaterial, METADATA_PARAMS(nullptr, 0) }; // 2666609352
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshLOD_Statics::NewProp_Materials_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeStaticMesh.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshLOD_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectNodeStaticMeshLOD, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshLOD_Statics::NewProp_Materials_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshLOD_Statics::NewProp_Materials_MetaData)) }; // 2666609352
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshLOD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshLOD_Statics::NewProp_Materials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshLOD_Statics::NewProp_Materials,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshLOD_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
		nullptr,
		&NewStructOps,
		"CustomizableObjectNodeStaticMeshLOD",
		sizeof(FCustomizableObjectNodeStaticMeshLOD),
		alignof(FCustomizableObjectNodeStaticMeshLOD),
		Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshLOD_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshLOD_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshLOD_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshLOD_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshLOD()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomizableObjectNodeStaticMeshLOD.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomizableObjectNodeStaticMeshLOD.InnerSingleton, Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshLOD_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomizableObjectNodeStaticMeshLOD.InnerSingleton;
	}
	void UCustomizableObjectNodeStaticMesh::StaticRegisterNativesUCustomizableObjectNodeStaticMesh()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectNodeStaticMesh);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeStaticMesh_NoRegister()
	{
		return UCustomizableObjectNodeStaticMesh::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectNodeStaticMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LODs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LODs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultPin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectNodeStaticMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizableObjectNodeMesh,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeStaticMesh_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuCOE/Nodes/CustomizableObjectNodeStaticMesh.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeStaticMesh.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeStaticMesh_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeStaticMesh.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCustomizableObjectNodeStaticMesh_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeStaticMesh, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeStaticMesh_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeStaticMesh_Statics::NewProp_StaticMesh_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeStaticMesh_Statics::NewProp_LODs_Inner = { "LODs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshLOD, METADATA_PARAMS(nullptr, 0) }; // 1422646469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeStaticMesh_Statics::NewProp_LODs_MetaData[] = {
		{ "Comment", "/** Images */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeStaticMesh.h" },
		{ "ToolTip", "Images" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObjectNodeStaticMesh_Statics::NewProp_LODs = { "LODs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeStaticMesh, LODs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeStaticMesh_Statics::NewProp_LODs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeStaticMesh_Statics::NewProp_LODs_MetaData)) }; // 1422646469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeStaticMesh_Statics::NewProp_DefaultPin_MetaData[] = {
		{ "Comment", "/** Default pin when there is no mesh. */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeStaticMesh.h" },
		{ "ToolTip", "Default pin when there is no mesh." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeStaticMesh_Statics::NewProp_DefaultPin = { "DefaultPin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeStaticMesh, DefaultPin), Z_Construct_UScriptStruct_FEdGraphPinReference, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeStaticMesh_Statics::NewProp_DefaultPin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeStaticMesh_Statics::NewProp_DefaultPin_MetaData)) }; // 1910659421
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizableObjectNodeStaticMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeStaticMesh_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeStaticMesh_Statics::NewProp_LODs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeStaticMesh_Statics::NewProp_LODs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeStaticMesh_Statics::NewProp_DefaultPin,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectNodeStaticMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectNodeStaticMesh>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectNodeStaticMesh_Statics::ClassParams = {
		&UCustomizableObjectNodeStaticMesh::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomizableObjectNodeStaticMesh_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeStaticMesh_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeStaticMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeStaticMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizableObjectNodeStaticMesh()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectNodeStaticMesh.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectNodeStaticMesh.OuterSingleton, Z_Construct_UClass_UCustomizableObjectNodeStaticMesh_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectNodeStaticMesh.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectNodeStaticMesh>()
	{
		return UCustomizableObjectNodeStaticMesh::StaticClass();
	}
	UCustomizableObjectNodeStaticMesh::UCustomizableObjectNodeStaticMesh(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectNodeStaticMesh);
	UCustomizableObjectNodeStaticMesh::~UCustomizableObjectNodeStaticMesh() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UCustomizableObjectNodeStaticMesh)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeStaticMesh_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeStaticMesh_h_Statics::ScriptStructInfo[] = {
		{ FCustomizableObjectNodeStaticMeshMaterial::StaticStruct, Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshMaterial_Statics::NewStructOps, TEXT("CustomizableObjectNodeStaticMeshMaterial"), &Z_Registration_Info_UScriptStruct_CustomizableObjectNodeStaticMeshMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomizableObjectNodeStaticMeshMaterial), 2666609352U) },
		{ FCustomizableObjectNodeStaticMeshLOD::StaticStruct, Z_Construct_UScriptStruct_FCustomizableObjectNodeStaticMeshLOD_Statics::NewStructOps, TEXT("CustomizableObjectNodeStaticMeshLOD"), &Z_Registration_Info_UScriptStruct_CustomizableObjectNodeStaticMeshLOD, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomizableObjectNodeStaticMeshLOD), 1422646469U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeStaticMesh_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableObjectNodeStaticMesh, UCustomizableObjectNodeStaticMesh::StaticClass, TEXT("UCustomizableObjectNodeStaticMesh"), &Z_Registration_Info_UClass_UCustomizableObjectNodeStaticMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectNodeStaticMesh), 320410030U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeStaticMesh_h_306818619(TEXT("/Script/CustomizableObjectEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeStaticMesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeStaticMesh_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeStaticMesh_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeStaticMesh_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
