// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoneProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoneProxy() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	SKELETONEDITOR_API UClass* Z_Construct_UClass_UBoneProxy();
	SKELETONEDITOR_API UClass* Z_Construct_UClass_UBoneProxy_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UDebugSkelMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SkeletonEditor();
// End Cross Module References
	void UBoneProxy::StaticRegisterNativesUBoneProxy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBoneProxy);
	UClass* Z_Construct_UClass_UBoneProxy_NoRegister()
	{
		return UBoneProxy::StaticClass();
	}
	struct Z_Construct_UClass_UBoneProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReferenceLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReferenceRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReferenceScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkelMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_SkelMeshComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBoneProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SkeletonEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoneProxy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Proxy object used to display/edit bone transforms */" },
		{ "IncludePath", "BoneProxy.h" },
		{ "ModuleRelativePath", "Public/BoneProxy.h" },
		{ "ToolTip", "Proxy object used to display/edit bone transforms" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoneProxy_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "Bone" },
		{ "Comment", "/** The name of the bone we have selected */" },
		{ "ModuleRelativePath", "Public/BoneProxy.h" },
		{ "ToolTip", "The name of the bone we have selected" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBoneProxy_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBoneProxy, BoneName), METADATA_PARAMS(Z_Construct_UClass_UBoneProxy_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoneProxy_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoneProxy_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "Transform" },
		{ "Comment", "/** Bone location */" },
		{ "ModuleRelativePath", "Public/BoneProxy.h" },
		{ "ToolTip", "Bone location" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBoneProxy_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBoneProxy, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UBoneProxy_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoneProxy_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoneProxy_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Transform" },
		{ "Comment", "/** Bone rotation */" },
		{ "ModuleRelativePath", "Public/BoneProxy.h" },
		{ "ToolTip", "Bone rotation" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBoneProxy_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBoneProxy, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UBoneProxy_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoneProxy_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoneProxy_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Transform" },
		{ "Comment", "/** Bone scale */" },
		{ "ModuleRelativePath", "Public/BoneProxy.h" },
		{ "ToolTip", "Bone scale" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBoneProxy_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBoneProxy, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UBoneProxy_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoneProxy_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoneProxy_Statics::NewProp_ReferenceLocation_MetaData[] = {
		{ "Category", "Reference Transform" },
		{ "Comment", "/** Bone reference location (local) */" },
		{ "ModuleRelativePath", "Public/BoneProxy.h" },
		{ "ToolTip", "Bone reference location (local)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBoneProxy_Statics::NewProp_ReferenceLocation = { "ReferenceLocation", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBoneProxy, ReferenceLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UBoneProxy_Statics::NewProp_ReferenceLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoneProxy_Statics::NewProp_ReferenceLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoneProxy_Statics::NewProp_ReferenceRotation_MetaData[] = {
		{ "Category", "Reference Transform" },
		{ "Comment", "/** Bone reference rotation (local) */" },
		{ "ModuleRelativePath", "Public/BoneProxy.h" },
		{ "ToolTip", "Bone reference rotation (local)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBoneProxy_Statics::NewProp_ReferenceRotation = { "ReferenceRotation", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBoneProxy, ReferenceRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UBoneProxy_Statics::NewProp_ReferenceRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoneProxy_Statics::NewProp_ReferenceRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoneProxy_Statics::NewProp_ReferenceScale_MetaData[] = {
		{ "Category", "Reference Transform" },
		{ "Comment", "/** Bone reference scale (local) */" },
		{ "ModuleRelativePath", "Public/BoneProxy.h" },
		{ "ToolTip", "Bone reference scale (local)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBoneProxy_Statics::NewProp_ReferenceScale = { "ReferenceScale", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBoneProxy, ReferenceScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UBoneProxy_Statics::NewProp_ReferenceScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoneProxy_Statics::NewProp_ReferenceScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoneProxy_Statics::NewProp_MeshLocation_MetaData[] = {
		{ "Category", "Mesh Relative Transform" },
		{ "Comment", "/** Mesh Location. Non zero when processing root motion */" },
		{ "ModuleRelativePath", "Public/BoneProxy.h" },
		{ "ToolTip", "Mesh Location. Non zero when processing root motion" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBoneProxy_Statics::NewProp_MeshLocation = { "MeshLocation", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBoneProxy, MeshLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UBoneProxy_Statics::NewProp_MeshLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoneProxy_Statics::NewProp_MeshLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoneProxy_Statics::NewProp_MeshRotation_MetaData[] = {
		{ "Category", "Mesh Relative Transform" },
		{ "Comment", "/** Mesh Rotation. Non zero when processing root motion */" },
		{ "ModuleRelativePath", "Public/BoneProxy.h" },
		{ "ToolTip", "Mesh Rotation. Non zero when processing root motion" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBoneProxy_Statics::NewProp_MeshRotation = { "MeshRotation", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBoneProxy, MeshRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UBoneProxy_Statics::NewProp_MeshRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoneProxy_Statics::NewProp_MeshRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoneProxy_Statics::NewProp_MeshScale_MetaData[] = {
		{ "Category", "Mesh Relative Transform" },
		{ "Comment", "/** Mesh Scale */" },
		{ "ModuleRelativePath", "Public/BoneProxy.h" },
		{ "ToolTip", "Mesh Scale" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBoneProxy_Statics::NewProp_MeshScale = { "MeshScale", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBoneProxy, MeshScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UBoneProxy_Statics::NewProp_MeshScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoneProxy_Statics::NewProp_MeshScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoneProxy_Statics::NewProp_SkelMeshComponent_MetaData[] = {
		{ "Comment", "/** The skeletal mesh component we glean our transform data from */" },
		{ "ModuleRelativePath", "Public/BoneProxy.h" },
		{ "ToolTip", "The skeletal mesh component we glean our transform data from" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UBoneProxy_Statics::NewProp_SkelMeshComponent = { "SkelMeshComponent", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBoneProxy, SkelMeshComponent), Z_Construct_UClass_UDebugSkelMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBoneProxy_Statics::NewProp_SkelMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoneProxy_Statics::NewProp_SkelMeshComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBoneProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoneProxy_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoneProxy_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoneProxy_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoneProxy_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoneProxy_Statics::NewProp_ReferenceLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoneProxy_Statics::NewProp_ReferenceRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoneProxy_Statics::NewProp_ReferenceScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoneProxy_Statics::NewProp_MeshLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoneProxy_Statics::NewProp_MeshRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoneProxy_Statics::NewProp_MeshScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoneProxy_Statics::NewProp_SkelMeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBoneProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBoneProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBoneProxy_Statics::ClassParams = {
		&UBoneProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBoneProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBoneProxy_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBoneProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBoneProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBoneProxy()
	{
		if (!Z_Registration_Info_UClass_UBoneProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBoneProxy.OuterSingleton, Z_Construct_UClass_UBoneProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBoneProxy.OuterSingleton;
	}
	template<> SKELETONEDITOR_API UClass* StaticClass<UBoneProxy>()
	{
		return UBoneProxy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBoneProxy);
	UBoneProxy::~UBoneProxy() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_SkeletonEditor_Public_BoneProxy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_SkeletonEditor_Public_BoneProxy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBoneProxy, UBoneProxy::StaticClass, TEXT("UBoneProxy"), &Z_Registration_Info_UClass_UBoneProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBoneProxy), 3472625217U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_SkeletonEditor_Public_BoneProxy_h_1158949447(TEXT("/Script/SkeletonEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_SkeletonEditor_Public_BoneProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_SkeletonEditor_Public_BoneProxy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
