// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphNode_AnimDynamics.h"
#include "BoneControllers/AnimNode_AnimDynamics.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_AnimDynamics() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_AnimDynamics();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_AnimDynamics_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AnimDynamics();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	void UAnimGraphNode_AnimDynamics::StaticRegisterNativesUAnimGraphNode_AnimDynamics()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_AnimDynamics);
	UClass* Z_Construct_UClass_UAnimGraphNode_AnimDynamics_NoRegister()
	{
		return UAnimGraphNode_AnimDynamics::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreviewLive_MetaData[];
#endif
		static void NewProp_bPreviewLive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreviewLive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowLinearLimits_MetaData[];
#endif
		static void NewProp_bShowLinearLimits_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowLinearLimits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowAngularLimits_MetaData[];
#endif
		static void NewProp_bShowAngularLimits_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowAngularLimits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowPlanarLimit_MetaData[];
#endif
		static void NewProp_bShowPlanarLimit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowPlanarLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowSphericalLimit_MetaData[];
#endif
		static void NewProp_bShowSphericalLimit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowSphericalLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowCollisionSpheres_MetaData[];
#endif
		static void NewProp_bShowCollisionSpheres_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowCollisionSpheres;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_AnimDynamics.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_AnimDynamics.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_AnimDynamics.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_AnimDynamics, Node), Z_Construct_UScriptStruct_FAnimNode_AnimDynamics, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_Node_MetaData)) }; // 1006801442
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bPreviewLive_MetaData[] = {
		{ "Category", "Preview" },
		{ "Comment", "/** Preview the live physics object on the mesh */" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_AnimDynamics.h" },
		{ "ToolTip", "Preview the live physics object on the mesh" },
	};
#endif
	void Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bPreviewLive_SetBit(void* Obj)
	{
		((UAnimGraphNode_AnimDynamics*)Obj)->bPreviewLive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bPreviewLive = { "bPreviewLive", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimGraphNode_AnimDynamics), &Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bPreviewLive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bPreviewLive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bPreviewLive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowLinearLimits_MetaData[] = {
		{ "Category", "Preview" },
		{ "Comment", "/** Show linear (prismatic) limits in the viewport */" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_AnimDynamics.h" },
		{ "ToolTip", "Show linear (prismatic) limits in the viewport" },
	};
#endif
	void Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowLinearLimits_SetBit(void* Obj)
	{
		((UAnimGraphNode_AnimDynamics*)Obj)->bShowLinearLimits = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowLinearLimits = { "bShowLinearLimits", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimGraphNode_AnimDynamics), &Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowLinearLimits_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowLinearLimits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowLinearLimits_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowAngularLimits_MetaData[] = {
		{ "Category", "Preview" },
		{ "Comment", "/** Show angular limit ranges in the viewport */" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_AnimDynamics.h" },
		{ "ToolTip", "Show angular limit ranges in the viewport" },
	};
#endif
	void Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowAngularLimits_SetBit(void* Obj)
	{
		((UAnimGraphNode_AnimDynamics*)Obj)->bShowAngularLimits = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowAngularLimits = { "bShowAngularLimits", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimGraphNode_AnimDynamics), &Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowAngularLimits_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowAngularLimits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowAngularLimits_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowPlanarLimit_MetaData[] = {
		{ "Category", "Preview" },
		{ "Comment", "/** Show planar limit info (actual plane, plane normal) in the viewport */" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_AnimDynamics.h" },
		{ "ToolTip", "Show planar limit info (actual plane, plane normal) in the viewport" },
	};
#endif
	void Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowPlanarLimit_SetBit(void* Obj)
	{
		((UAnimGraphNode_AnimDynamics*)Obj)->bShowPlanarLimit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowPlanarLimit = { "bShowPlanarLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimGraphNode_AnimDynamics), &Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowPlanarLimit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowPlanarLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowPlanarLimit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowSphericalLimit_MetaData[] = {
		{ "Category", "Preview" },
		{ "Comment", "/** Show spherical limits in the viewport (preview live only) */" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_AnimDynamics.h" },
		{ "ToolTip", "Show spherical limits in the viewport (preview live only)" },
	};
#endif
	void Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowSphericalLimit_SetBit(void* Obj)
	{
		((UAnimGraphNode_AnimDynamics*)Obj)->bShowSphericalLimit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowSphericalLimit = { "bShowSphericalLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimGraphNode_AnimDynamics), &Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowSphericalLimit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowSphericalLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowSphericalLimit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowCollisionSpheres_MetaData[] = {
		{ "Category", "Preview" },
		{ "Comment", "/** If planar limits are enabled and the collision mode isn't CoM, draw sphere collision sizes */" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_AnimDynamics.h" },
		{ "ToolTip", "If planar limits are enabled and the collision mode isn't CoM, draw sphere collision sizes" },
	};
#endif
	void Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowCollisionSpheres_SetBit(void* Obj)
	{
		((UAnimGraphNode_AnimDynamics*)Obj)->bShowCollisionSpheres = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowCollisionSpheres = { "bShowCollisionSpheres", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimGraphNode_AnimDynamics), &Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowCollisionSpheres_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowCollisionSpheres_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowCollisionSpheres_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bPreviewLive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowLinearLimits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowAngularLimits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowPlanarLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowSphericalLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowCollisionSpheres,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_AnimDynamics>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::ClassParams = {
		&UAnimGraphNode_AnimDynamics::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_AnimDynamics()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_AnimDynamics.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_AnimDynamics.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_AnimDynamics.OuterSingleton;
	}
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimGraphNode_AnimDynamics>()
	{
		return UAnimGraphNode_AnimDynamics::StaticClass();
	}
	UAnimGraphNode_AnimDynamics::UAnimGraphNode_AnimDynamics(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_AnimDynamics);
	UAnimGraphNode_AnimDynamics::~UAnimGraphNode_AnimDynamics() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimGraphNode_AnimDynamics)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_AnimDynamics_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_AnimDynamics_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_AnimDynamics, UAnimGraphNode_AnimDynamics::StaticClass, TEXT("UAnimGraphNode_AnimDynamics"), &Z_Registration_Info_UClass_UAnimGraphNode_AnimDynamics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_AnimDynamics), 3074024132U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_AnimDynamics_h_2086545247(TEXT("/Script/AnimGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_AnimDynamics_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_AnimDynamics_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
