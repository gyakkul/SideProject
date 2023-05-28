// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuCOE/Nodes/CustomizableObjectNodeMeshReshape.h"
#include "MuCOE/Nodes/CustomizableObjectNodeMeshReshapeCommon.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectNodeMeshReshape() {}
// Cross Module References
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNode();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeMeshReshape();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UEnum* Z_Construct_UEnum_CustomizableObjectEditor_EBoneDeformSelectionMethod();
	CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMeshReshapeBoneReference();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectEditor();
// End Cross Module References
	void UCustomizableObjectNodeMeshReshape::StaticRegisterNativesUCustomizableObjectNodeMeshReshape()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectNodeMeshReshape);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_NoRegister()
	{
		return UCustomizableObjectNodeMeshReshape::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReshapeSkeleton_MetaData[];
#endif
		static void NewProp_bReshapeSkeleton_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReshapeSkeleton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReshapePhysicsVolumes_MetaData[];
#endif
		static void NewProp_bReshapePhysicsVolumes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReshapePhysicsVolumes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRigidParts_MetaData[];
#endif
		static void NewProp_bEnableRigidParts_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRigidParts;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SelectionMethod;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BonesToDeform_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BonesToDeform_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BonesToDeform;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PhysicsSelectionMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsSelectionMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PhysicsSelectionMethod;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PhysicsBodiesToDeform_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsBodiesToDeform_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PhysicsBodiesToDeform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDeformAllBones_MetaData[];
#endif
		static void NewProp_bDeformAllBones_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeformAllBones;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDeformAllPhysicsBodies_MetaData[];
#endif
		static void NewProp_bDeformAllPhysicsBodies_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeformAllPhysicsBodies;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizableObjectNode,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuCOE/Nodes/CustomizableObjectNodeMeshReshape.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMeshReshape.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bReshapeSkeleton_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "Comment", "/** Enable the deformation of the skeleton of the base mesh. */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMeshReshape.h" },
		{ "ToolTip", "Enable the deformation of the skeleton of the base mesh." },
	};
#endif
	void Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bReshapeSkeleton_SetBit(void* Obj)
	{
		((UCustomizableObjectNodeMeshReshape*)Obj)->bReshapeSkeleton = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bReshapeSkeleton = { "bReshapeSkeleton", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCustomizableObjectNodeMeshReshape), &Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bReshapeSkeleton_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bReshapeSkeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bReshapeSkeleton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bReshapePhysicsVolumes_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "Comment", "/** Enable the deformation of physics volumes of the base mesh */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMeshReshape.h" },
		{ "ToolTip", "Enable the deformation of physics volumes of the base mesh" },
	};
#endif
	void Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bReshapePhysicsVolumes_SetBit(void* Obj)
	{
		((UCustomizableObjectNodeMeshReshape*)Obj)->bReshapePhysicsVolumes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bReshapePhysicsVolumes = { "bReshapePhysicsVolumes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCustomizableObjectNodeMeshReshape), &Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bReshapePhysicsVolumes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bReshapePhysicsVolumes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bReshapePhysicsVolumes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bEnableRigidParts_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "Comment", "/** Enable rigid parts base mesh. */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMeshReshape.h" },
		{ "ToolTip", "Enable rigid parts base mesh." },
	};
#endif
	void Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bEnableRigidParts_SetBit(void* Obj)
	{
		((UCustomizableObjectNodeMeshReshape*)Obj)->bEnableRigidParts = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bEnableRigidParts = { "bEnableRigidParts", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCustomizableObjectNodeMeshReshape), &Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bEnableRigidParts_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bEnableRigidParts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bEnableRigidParts_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_SelectionMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_SelectionMethod_MetaData[] = {
		{ "Category", "ReshapeBones" },
		{ "Comment", "/** Bone Reshape Selection Method */" },
		{ "EditCondition", "bReshapeSkeleton" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMeshReshape.h" },
		{ "ToolTip", "Bone Reshape Selection Method" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_SelectionMethod = { "SelectionMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeMeshReshape, SelectionMethod), Z_Construct_UEnum_CustomizableObjectEditor_EBoneDeformSelectionMethod, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_SelectionMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_SelectionMethod_MetaData)) }; // 675266881
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_BonesToDeform_Inner = { "BonesToDeform", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMeshReshapeBoneReference, METADATA_PARAMS(nullptr, 0) }; // 850209549
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_BonesToDeform_MetaData[] = {
		{ "Category", "ReshapeBones" },
		{ "Comment", "/** Array with selected bones that will be deformed */" },
		{ "EditCondition", "bReshapeSkeleton && (SelectionMethod == EBoneDeformSelectionMethod::ONLY_SELECTED || SelectionMethod == EBoneDeformSelectionMethod::ALL_BUT_SELECTED)" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMeshReshape.h" },
		{ "ToolTip", "Array with selected bones that will be deformed" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_BonesToDeform = { "BonesToDeform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeMeshReshape, BonesToDeform), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_BonesToDeform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_BonesToDeform_MetaData)) }; // 850209549
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_PhysicsSelectionMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_PhysicsSelectionMethod_MetaData[] = {
		{ "Category", "ReshapePhysics" },
		{ "DisplayName", "Selection Method" },
		{ "EditCondition", "bReshapePhysicsVolumes" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMeshReshape.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_PhysicsSelectionMethod = { "PhysicsSelectionMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeMeshReshape, PhysicsSelectionMethod), Z_Construct_UEnum_CustomizableObjectEditor_EBoneDeformSelectionMethod, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_PhysicsSelectionMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_PhysicsSelectionMethod_MetaData)) }; // 675266881
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_PhysicsBodiesToDeform_Inner = { "PhysicsBodiesToDeform", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMeshReshapeBoneReference, METADATA_PARAMS(nullptr, 0) }; // 850209549
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_PhysicsBodiesToDeform_MetaData[] = {
		{ "Category", "ReshapePhysics" },
		{ "Comment", "/** Array with bones with physics bodies that will be deformed */" },
		{ "EditCondition", "bReshapePhysicsVolumes && (PhysicsSelectionMethod == EBoneDeformSelectionMethod::ONLY_SELECTED || PhysicsSelectionMethod == EBoneDeformSelectionMethod::ALL_BUT_SELECTED)" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMeshReshape.h" },
		{ "ToolTip", "Array with bones with physics bodies that will be deformed" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_PhysicsBodiesToDeform = { "PhysicsBodiesToDeform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeMeshReshape, PhysicsBodiesToDeform), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_PhysicsBodiesToDeform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_PhysicsBodiesToDeform_MetaData)) }; // 850209549
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bDeformAllBones_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMeshReshape.h" },
	};
#endif
	void Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bDeformAllBones_SetBit(void* Obj)
	{
		((UCustomizableObjectNodeMeshReshape*)Obj)->bDeformAllBones_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bDeformAllBones = { "bDeformAllBones", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCustomizableObjectNodeMeshReshape), &Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bDeformAllBones_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bDeformAllBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bDeformAllBones_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bDeformAllPhysicsBodies_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMeshReshape.h" },
	};
#endif
	void Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bDeformAllPhysicsBodies_SetBit(void* Obj)
	{
		((UCustomizableObjectNodeMeshReshape*)Obj)->bDeformAllPhysicsBodies_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bDeformAllPhysicsBodies = { "bDeformAllPhysicsBodies", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCustomizableObjectNodeMeshReshape), &Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bDeformAllPhysicsBodies_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bDeformAllPhysicsBodies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bDeformAllPhysicsBodies_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bReshapeSkeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bReshapePhysicsVolumes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bEnableRigidParts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_SelectionMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_SelectionMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_BonesToDeform_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_BonesToDeform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_PhysicsSelectionMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_PhysicsSelectionMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_PhysicsBodiesToDeform_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_PhysicsBodiesToDeform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bDeformAllBones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bDeformAllPhysicsBodies,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectNodeMeshReshape>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::ClassParams = {
		&UCustomizableObjectNodeMeshReshape::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizableObjectNodeMeshReshape()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectNodeMeshReshape.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectNodeMeshReshape.OuterSingleton, Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectNodeMeshReshape.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectNodeMeshReshape>()
	{
		return UCustomizableObjectNodeMeshReshape::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectNodeMeshReshape);
	UCustomizableObjectNodeMeshReshape::~UCustomizableObjectNodeMeshReshape() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UCustomizableObjectNodeMeshReshape)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshReshape_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshReshape_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableObjectNodeMeshReshape, UCustomizableObjectNodeMeshReshape::StaticClass, TEXT("UCustomizableObjectNodeMeshReshape"), &Z_Registration_Info_UClass_UCustomizableObjectNodeMeshReshape, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectNodeMeshReshape), 2064221207U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshReshape_h_4267730646(TEXT("/Script/CustomizableObjectEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshReshape_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshReshape_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
