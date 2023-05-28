// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolActivities/PolyEditActivityContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePolyEditActivityContext() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditActivityContext();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditActivityContext_NoRegister();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditCommonProperties_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPolygonSelectionMechanic_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MeshModelingTools();
// End Cross Module References
	void UPolyEditActivityContext::StaticRegisterNativesUPolyEditActivityContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPolyEditActivityContext);
	UClass* Z_Construct_UClass_UPolyEditActivityContext_NoRegister()
	{
		return UPolyEditActivityContext::StaticClass();
	}
	struct Z_Construct_UClass_UPolyEditActivityContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommonProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CommonProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Preview_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Preview;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionMechanic_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SelectionMechanic;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPolyEditActivityContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolyEditActivityContext_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ToolActivities/PolyEditActivityContext.h" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditActivityContext.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolyEditActivityContext_Statics::NewProp_CommonProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditActivityContext.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPolyEditActivityContext_Statics::NewProp_CommonProperties = { "CommonProperties", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPolyEditActivityContext, CommonProperties), Z_Construct_UClass_UPolyEditCommonProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPolyEditActivityContext_Statics::NewProp_CommonProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditActivityContext_Statics::NewProp_CommonProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolyEditActivityContext_Statics::NewProp_Preview_MetaData[] = {
		{ "Comment", "/**\n\x09 * The mesh stored in the preview is not authoritative. It may be altered in various ways as the \n\x09 * user previews potential changes, and may be reset back to CurrentMesh if an activity\n\x09 * is cancelled.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditActivityContext.h" },
		{ "ToolTip", "The mesh stored in the preview is not authoritative. It may be altered in various ways as the\nuser previews potential changes, and may be reset back to CurrentMesh if an activity\nis cancelled." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPolyEditActivityContext_Statics::NewProp_Preview = { "Preview", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPolyEditActivityContext, Preview), Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPolyEditActivityContext_Statics::NewProp_Preview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditActivityContext_Statics::NewProp_Preview_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolyEditActivityContext_Statics::NewProp_SelectionMechanic_MetaData[] = {
		{ "Comment", "/** \n\x09 * The activity may use the selection mechanic to get (or alter) the current selection, though\n\x09 * if selection is just being changed at the end of the activity, it should probably be done\n\x09 * through EmitCurrentMeshChangeAndUpdate so that it is lumped with the same undo transaction.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditActivityContext.h" },
		{ "ToolTip", "The activity may use the selection mechanic to get (or alter) the current selection, though\nif selection is just being changed at the end of the activity, it should probably be done\nthrough EmitCurrentMeshChangeAndUpdate so that it is lumped with the same undo transaction." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPolyEditActivityContext_Statics::NewProp_SelectionMechanic = { "SelectionMechanic", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPolyEditActivityContext, SelectionMechanic), Z_Construct_UClass_UPolygonSelectionMechanic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPolyEditActivityContext_Statics::NewProp_SelectionMechanic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditActivityContext_Statics::NewProp_SelectionMechanic_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPolyEditActivityContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditActivityContext_Statics::NewProp_CommonProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditActivityContext_Statics::NewProp_Preview,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditActivityContext_Statics::NewProp_SelectionMechanic,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPolyEditActivityContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPolyEditActivityContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPolyEditActivityContext_Statics::ClassParams = {
		&UPolyEditActivityContext::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPolyEditActivityContext_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditActivityContext_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPolyEditActivityContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditActivityContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPolyEditActivityContext()
	{
		if (!Z_Registration_Info_UClass_UPolyEditActivityContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPolyEditActivityContext.OuterSingleton, Z_Construct_UClass_UPolyEditActivityContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPolyEditActivityContext.OuterSingleton;
	}
	template<> MESHMODELINGTOOLS_API UClass* StaticClass<UPolyEditActivityContext>()
	{
		return UPolyEditActivityContext::StaticClass();
	}
	UPolyEditActivityContext::UPolyEditActivityContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPolyEditActivityContext);
	UPolyEditActivityContext::~UPolyEditActivityContext() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditActivityContext_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditActivityContext_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPolyEditActivityContext, UPolyEditActivityContext::StaticClass, TEXT("UPolyEditActivityContext"), &Z_Registration_Info_UClass_UPolyEditActivityContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPolyEditActivityContext), 3077965069U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditActivityContext_h_266568503(TEXT("/Script/MeshModelingTools"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditActivityContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditActivityContext_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
