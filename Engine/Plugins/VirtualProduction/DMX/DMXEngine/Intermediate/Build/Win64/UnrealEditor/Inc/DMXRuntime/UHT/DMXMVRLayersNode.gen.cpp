// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MVR/Types/DMXMVRLayersNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXMVRLayersNode() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXMVRLayerNode_NoRegister();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXMVRLayersNode();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXMVRLayersNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DMXRuntime();
// End Cross Module References
	void UDMXMVRLayersNode::StaticRegisterNativesUDMXMVRLayersNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXMVRLayersNode);
	UClass* Z_Construct_UClass_UDMXMVRLayersNode_NoRegister()
	{
		return UDMXMVRLayersNode::StaticClass();
	}
	struct Z_Construct_UClass_UDMXMVRLayersNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LayerNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LayerNodes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXMVRLayersNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXMVRLayersNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** This node defines a list of layers inside the scene. The layer is a container of graphical objects defining a local coordinate system. */" },
		{ "IncludePath", "MVR/Types/DMXMVRLayersNode.h" },
		{ "ModuleRelativePath", "Public/MVR/Types/DMXMVRLayersNode.h" },
		{ "ToolTip", "This node defines a list of layers inside the scene. The layer is a container of graphical objects defining a local coordinate system." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDMXMVRLayersNode_Statics::NewProp_LayerNodes_Inner = { "LayerNodes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDMXMVRLayerNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXMVRLayersNode_Statics::NewProp_LayerNodes_MetaData[] = {
		{ "Comment", "/** A[n array of] layer representation[s]. */" },
		{ "ModuleRelativePath", "Public/MVR/Types/DMXMVRLayersNode.h" },
		{ "ToolTip", "A[n array of] layer representation[s]." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDMXMVRLayersNode_Statics::NewProp_LayerNodes = { "LayerNodes", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXMVRLayersNode, LayerNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDMXMVRLayersNode_Statics::NewProp_LayerNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXMVRLayersNode_Statics::NewProp_LayerNodes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXMVRLayersNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXMVRLayersNode_Statics::NewProp_LayerNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXMVRLayersNode_Statics::NewProp_LayerNodes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXMVRLayersNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXMVRLayersNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXMVRLayersNode_Statics::ClassParams = {
		&UDMXMVRLayersNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXMVRLayersNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXMVRLayersNode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXMVRLayersNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXMVRLayersNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXMVRLayersNode()
	{
		if (!Z_Registration_Info_UClass_UDMXMVRLayersNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXMVRLayersNode.OuterSingleton, Z_Construct_UClass_UDMXMVRLayersNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXMVRLayersNode.OuterSingleton;
	}
	template<> DMXRUNTIME_API UClass* StaticClass<UDMXMVRLayersNode>()
	{
		return UDMXMVRLayersNode::StaticClass();
	}
	UDMXMVRLayersNode::UDMXMVRLayersNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXMVRLayersNode);
	UDMXMVRLayersNode::~UDMXMVRLayersNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRLayersNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRLayersNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXMVRLayersNode, UDMXMVRLayersNode::StaticClass, TEXT("UDMXMVRLayersNode"), &Z_Registration_Info_UClass_UDMXMVRLayersNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXMVRLayersNode), 249003295U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRLayersNode_h_2871236481(TEXT("/Script/DMXRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRLayersNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRLayersNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
