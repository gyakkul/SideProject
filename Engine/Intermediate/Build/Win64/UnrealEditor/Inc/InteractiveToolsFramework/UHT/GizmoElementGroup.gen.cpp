// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseGizmos/GizmoElementGroup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGizmoElementGroup() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementBase_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementGroup();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementGroup_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementLineBase();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	void UGizmoElementGroup::StaticRegisterNativesUGizmoElementGroup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoElementGroup);
	UClass* Z_Construct_UClass_UGizmoElementGroup_NoRegister()
	{
		return UGizmoElementGroup::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoElementGroup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bConstantScale_MetaData[];
#endif
		static void NewProp_bConstantScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConstantScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHitOwner_MetaData[];
#endif
		static void NewProp_bHitOwner_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHitOwner;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Elements_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Elements_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Elements;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoElementGroup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGizmoElementLineBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementGroup_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Simple group object intended to be used as part of 3D Gizmos.\n * Contains multiple gizmo objects.\n */" },
		{ "IncludePath", "BaseGizmos/GizmoElementGroup.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementGroup.h" },
		{ "ToolTip", "Simple group object intended to be used as part of 3D Gizmos.\nContains multiple gizmo objects." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementGroup_Statics::NewProp_bConstantScale_MetaData[] = {
		{ "Comment", "// When true, maintains view-dependent constant scale for this gizmo object hierarchy\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementGroup.h" },
		{ "ToolTip", "When true, maintains view-dependent constant scale for this gizmo object hierarchy" },
	};
#endif
	void Z_Construct_UClass_UGizmoElementGroup_Statics::NewProp_bConstantScale_SetBit(void* Obj)
	{
		((UGizmoElementGroup*)Obj)->bConstantScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGizmoElementGroup_Statics::NewProp_bConstantScale = { "bConstantScale", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGizmoElementGroup), &Z_Construct_UClass_UGizmoElementGroup_Statics::NewProp_bConstantScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGizmoElementGroup_Statics::NewProp_bConstantScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementGroup_Statics::NewProp_bConstantScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementGroup_Statics::NewProp_bHitOwner_MetaData[] = {
		{ "Comment", "// When true, this group is treated as a single element such that when LineTrace is called, if any of its sub-elements is hit, \n// this group will be returned as the owner of the hit. This should be used when a group of elements should be treated as a single handle.\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementGroup.h" },
		{ "ToolTip", "When true, this group is treated as a single element such that when LineTrace is called, if any of its sub-elements is hit,\nthis group will be returned as the owner of the hit. This should be used when a group of elements should be treated as a single handle." },
	};
#endif
	void Z_Construct_UClass_UGizmoElementGroup_Statics::NewProp_bHitOwner_SetBit(void* Obj)
	{
		((UGizmoElementGroup*)Obj)->bHitOwner = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGizmoElementGroup_Statics::NewProp_bHitOwner = { "bHitOwner", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGizmoElementGroup), &Z_Construct_UClass_UGizmoElementGroup_Statics::NewProp_bHitOwner_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGizmoElementGroup_Statics::NewProp_bHitOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementGroup_Statics::NewProp_bHitOwner_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGizmoElementGroup_Statics::NewProp_Elements_Inner = { "Elements", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UGizmoElementBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementGroup_Statics::NewProp_Elements_MetaData[] = {
		{ "Comment", "// Gizmo elements within this group\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementGroup.h" },
		{ "ToolTip", "Gizmo elements within this group" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGizmoElementGroup_Statics::NewProp_Elements = { "Elements", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoElementGroup, Elements), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGizmoElementGroup_Statics::NewProp_Elements_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementGroup_Statics::NewProp_Elements_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoElementGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementGroup_Statics::NewProp_bConstantScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementGroup_Statics::NewProp_bHitOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementGroup_Statics::NewProp_Elements_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementGroup_Statics::NewProp_Elements,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoElementGroup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoElementGroup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoElementGroup_Statics::ClassParams = {
		&UGizmoElementGroup::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGizmoElementGroup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementGroup_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoElementGroup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementGroup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoElementGroup()
	{
		if (!Z_Registration_Info_UClass_UGizmoElementGroup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoElementGroup.OuterSingleton, Z_Construct_UClass_UGizmoElementGroup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGizmoElementGroup.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoElementGroup>()
	{
		return UGizmoElementGroup::StaticClass();
	}
	UGizmoElementGroup::UGizmoElementGroup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoElementGroup);
	UGizmoElementGroup::~UGizmoElementGroup() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementGroup_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementGroup_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGizmoElementGroup, UGizmoElementGroup::StaticClass, TEXT("UGizmoElementGroup"), &Z_Registration_Info_UClass_UGizmoElementGroup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoElementGroup), 1586087942U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementGroup_h_4152737511(TEXT("/Script/InteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementGroup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementGroup_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
