// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataprepGeometrySelectionTransforms.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataprepGeometrySelectionTransforms() {}
// Cross Module References
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepSelectionTransform();
	DATAPREPGEOMETRYOPERATIONS_API UClass* Z_Construct_UClass_UDataprepOverlappingActorsSelectionTransform();
	DATAPREPGEOMETRYOPERATIONS_API UClass* Z_Construct_UClass_UDataprepOverlappingActorsSelectionTransform_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DataprepGeometryOperations();
// End Cross Module References
	void UDataprepOverlappingActorsSelectionTransform::StaticRegisterNativesUDataprepOverlappingActorsSelectionTransform()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataprepOverlappingActorsSelectionTransform);
	UClass* Z_Construct_UClass_UDataprepOverlappingActorsSelectionTransform_NoRegister()
	{
		return UDataprepOverlappingActorsSelectionTransform::StaticClass();
	}
	struct Z_Construct_UClass_UDataprepOverlappingActorsSelectionTransform_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JacketingAccuracy_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_JacketingAccuracy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSelectOverlapping_MetaData[];
#endif
		static void NewProp_bSelectOverlapping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectOverlapping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataprepOverlappingActorsSelectionTransform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataprepSelectionTransform,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepGeometryOperations,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepOverlappingActorsSelectionTransform_Statics::Class_MetaDataParams[] = {
		{ "Category", "SelectionTransform" },
		{ "DisplayName", "Select In Volume" },
		{ "IncludePath", "DataprepGeometrySelectionTransforms.h" },
		{ "ModuleRelativePath", "Private/DataprepGeometrySelectionTransforms.h" },
		{ "ToolTip", "Return all actors overlapping the selected actors" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepOverlappingActorsSelectionTransform_Statics::NewProp_JacketingAccuracy_MetaData[] = {
		{ "Category", "SelectionTransform" },
		{ "ClampMin", "0" },
		{ "Comment", "// Accuracy of the distance field approximation\n" },
		{ "ModuleRelativePath", "Private/DataprepGeometrySelectionTransforms.h" },
		{ "ToolTip", "Accuracy of the distance field approximation" },
		{ "UIMax", "100" },
		{ "UIMin", "0.1" },
		{ "Units", "cm" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDataprepOverlappingActorsSelectionTransform_Statics::NewProp_JacketingAccuracy = { "JacketingAccuracy", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepOverlappingActorsSelectionTransform, JacketingAccuracy), METADATA_PARAMS(Z_Construct_UClass_UDataprepOverlappingActorsSelectionTransform_Statics::NewProp_JacketingAccuracy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepOverlappingActorsSelectionTransform_Statics::NewProp_JacketingAccuracy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepOverlappingActorsSelectionTransform_Statics::NewProp_bSelectOverlapping_MetaData[] = {
		{ "Category", "SelectionTransform" },
		{ "Comment", "// If checked, select fully inside + overlapping actors. Else, select only actors that are fully inside.\n" },
		{ "ModuleRelativePath", "Private/DataprepGeometrySelectionTransforms.h" },
		{ "ToolTip", "If checked, select fully inside + overlapping actors. Else, select only actors that are fully inside." },
	};
#endif
	void Z_Construct_UClass_UDataprepOverlappingActorsSelectionTransform_Statics::NewProp_bSelectOverlapping_SetBit(void* Obj)
	{
		((UDataprepOverlappingActorsSelectionTransform*)Obj)->bSelectOverlapping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataprepOverlappingActorsSelectionTransform_Statics::NewProp_bSelectOverlapping = { "bSelectOverlapping", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDataprepOverlappingActorsSelectionTransform), &Z_Construct_UClass_UDataprepOverlappingActorsSelectionTransform_Statics::NewProp_bSelectOverlapping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDataprepOverlappingActorsSelectionTransform_Statics::NewProp_bSelectOverlapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepOverlappingActorsSelectionTransform_Statics::NewProp_bSelectOverlapping_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataprepOverlappingActorsSelectionTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepOverlappingActorsSelectionTransform_Statics::NewProp_JacketingAccuracy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepOverlappingActorsSelectionTransform_Statics::NewProp_bSelectOverlapping,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataprepOverlappingActorsSelectionTransform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataprepOverlappingActorsSelectionTransform>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataprepOverlappingActorsSelectionTransform_Statics::ClassParams = {
		&UDataprepOverlappingActorsSelectionTransform::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDataprepOverlappingActorsSelectionTransform_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepOverlappingActorsSelectionTransform_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataprepOverlappingActorsSelectionTransform_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepOverlappingActorsSelectionTransform_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataprepOverlappingActorsSelectionTransform()
	{
		if (!Z_Registration_Info_UClass_UDataprepOverlappingActorsSelectionTransform.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataprepOverlappingActorsSelectionTransform.OuterSingleton, Z_Construct_UClass_UDataprepOverlappingActorsSelectionTransform_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataprepOverlappingActorsSelectionTransform.OuterSingleton;
	}
	template<> DATAPREPGEOMETRYOPERATIONS_API UClass* StaticClass<UDataprepOverlappingActorsSelectionTransform>()
	{
		return UDataprepOverlappingActorsSelectionTransform::StaticClass();
	}
	UDataprepOverlappingActorsSelectionTransform::UDataprepOverlappingActorsSelectionTransform(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataprepOverlappingActorsSelectionTransform);
	UDataprepOverlappingActorsSelectionTransform::~UDataprepOverlappingActorsSelectionTransform() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DataprepGeometryOperations_Source_Private_DataprepGeometrySelectionTransforms_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DataprepGeometryOperations_Source_Private_DataprepGeometrySelectionTransforms_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataprepOverlappingActorsSelectionTransform, UDataprepOverlappingActorsSelectionTransform::StaticClass, TEXT("UDataprepOverlappingActorsSelectionTransform"), &Z_Registration_Info_UClass_UDataprepOverlappingActorsSelectionTransform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataprepOverlappingActorsSelectionTransform), 2781364416U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DataprepGeometryOperations_Source_Private_DataprepGeometrySelectionTransforms_h_1157879879(TEXT("/Script/DataprepGeometryOperations"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DataprepGeometryOperations_Source_Private_DataprepGeometrySelectionTransforms_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DataprepGeometryOperations_Source_Private_DataprepGeometrySelectionTransforms_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
