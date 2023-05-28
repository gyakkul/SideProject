// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SwitchNode/VCamK2Node_SwitchOnWidgetConnections.h"
#include "Util/WidgetReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVCamK2Node_SwitchOnWidgetConnections() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_VCamBlueprintNodes();
	VCAMBLUEPRINTNODES_API UClass* Z_Construct_UClass_UVCamK2Node_SwitchConnectionSystemBase();
	VCAMBLUEPRINTNODES_API UClass* Z_Construct_UClass_UVCamK2Node_SwitchOnWidgetConnections();
	VCAMBLUEPRINTNODES_API UClass* Z_Construct_UClass_UVCamK2Node_SwitchOnWidgetConnections_NoRegister();
	VCAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FVCamChildWidgetReference();
// End Cross Module References
	void UVCamK2Node_SwitchOnWidgetConnections::StaticRegisterNativesUVCamK2Node_SwitchOnWidgetConnections()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVCamK2Node_SwitchOnWidgetConnections);
	UClass* Z_Construct_UClass_UVCamK2Node_SwitchOnWidgetConnections_NoRegister()
	{
		return UVCamK2Node_SwitchOnWidgetConnections::StaticClass();
	}
	struct Z_Construct_UClass_UVCamK2Node_SwitchOnWidgetConnections_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetWidget_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVCamK2Node_SwitchOnWidgetConnections_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVCamK2Node_SwitchConnectionSystemBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VCamBlueprintNodes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamK2Node_SwitchOnWidgetConnections_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SwitchNode/VCamK2Node_SwitchOnWidgetConnections.h" },
		{ "ModuleRelativePath", "Private/SwitchNode/VCamK2Node_SwitchOnWidgetConnections.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamK2Node_SwitchOnWidgetConnections_Statics::NewProp_TargetWidget_MetaData[] = {
		{ "Category", "PinOptions" },
		{ "Comment", "/** A child VCamWidget from which to generate the pins. If left None, this Blueprint's widget will be used. */" },
		{ "ModuleRelativePath", "Private/SwitchNode/VCamK2Node_SwitchOnWidgetConnections.h" },
		{ "ToolTip", "A child VCamWidget from which to generate the pins. If left None, this Blueprint's widget will be used." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVCamK2Node_SwitchOnWidgetConnections_Statics::NewProp_TargetWidget = { "TargetWidget", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVCamK2Node_SwitchOnWidgetConnections, TargetWidget), Z_Construct_UScriptStruct_FVCamChildWidgetReference, METADATA_PARAMS(Z_Construct_UClass_UVCamK2Node_SwitchOnWidgetConnections_Statics::NewProp_TargetWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamK2Node_SwitchOnWidgetConnections_Statics::NewProp_TargetWidget_MetaData)) }; // 2441531952
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVCamK2Node_SwitchOnWidgetConnections_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamK2Node_SwitchOnWidgetConnections_Statics::NewProp_TargetWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVCamK2Node_SwitchOnWidgetConnections_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVCamK2Node_SwitchOnWidgetConnections>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVCamK2Node_SwitchOnWidgetConnections_Statics::ClassParams = {
		&UVCamK2Node_SwitchOnWidgetConnections::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVCamK2Node_SwitchOnWidgetConnections_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVCamK2Node_SwitchOnWidgetConnections_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVCamK2Node_SwitchOnWidgetConnections_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamK2Node_SwitchOnWidgetConnections_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVCamK2Node_SwitchOnWidgetConnections()
	{
		if (!Z_Registration_Info_UClass_UVCamK2Node_SwitchOnWidgetConnections.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVCamK2Node_SwitchOnWidgetConnections.OuterSingleton, Z_Construct_UClass_UVCamK2Node_SwitchOnWidgetConnections_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVCamK2Node_SwitchOnWidgetConnections.OuterSingleton;
	}
	template<> VCAMBLUEPRINTNODES_API UClass* StaticClass<UVCamK2Node_SwitchOnWidgetConnections>()
	{
		return UVCamK2Node_SwitchOnWidgetConnections::StaticClass();
	}
	UVCamK2Node_SwitchOnWidgetConnections::UVCamK2Node_SwitchOnWidgetConnections() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVCamK2Node_SwitchOnWidgetConnections);
	UVCamK2Node_SwitchOnWidgetConnections::~UVCamK2Node_SwitchOnWidgetConnections() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamBlueprintNodes_Private_SwitchNode_VCamK2Node_SwitchOnWidgetConnections_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamBlueprintNodes_Private_SwitchNode_VCamK2Node_SwitchOnWidgetConnections_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVCamK2Node_SwitchOnWidgetConnections, UVCamK2Node_SwitchOnWidgetConnections::StaticClass, TEXT("UVCamK2Node_SwitchOnWidgetConnections"), &Z_Registration_Info_UClass_UVCamK2Node_SwitchOnWidgetConnections, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVCamK2Node_SwitchOnWidgetConnections), 179150676U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamBlueprintNodes_Private_SwitchNode_VCamK2Node_SwitchOnWidgetConnections_h_2522059917(TEXT("/Script/VCamBlueprintNodes"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamBlueprintNodes_Private_SwitchNode_VCamK2Node_SwitchOnWidgetConnections_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamBlueprintNodes_Private_SwitchNode_VCamK2Node_SwitchOnWidgetConnections_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
