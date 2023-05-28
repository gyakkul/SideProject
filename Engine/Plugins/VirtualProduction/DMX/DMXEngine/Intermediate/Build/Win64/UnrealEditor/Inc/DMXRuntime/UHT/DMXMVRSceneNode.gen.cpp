// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MVR/Types/DMXMVRSceneNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXMVRSceneNode() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXMVRLayersNode_NoRegister();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXMVRSceneNode();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXMVRSceneNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DMXRuntime();
// End Cross Module References
	void UDMXMVRSceneNode::StaticRegisterNativesUDMXMVRSceneNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXMVRSceneNode);
	UClass* Z_Construct_UClass_UDMXMVRSceneNode_NoRegister()
	{
		return UDMXMVRSceneNode::StaticClass();
	}
	struct Z_Construct_UClass_UDMXMVRSceneNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayersNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LayersNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXMVRSceneNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXMVRSceneNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This node contains information about the scene.\n *\n * UE Specific: Note, while properties follow the standard closely, only properties relevant to the Engine are implemented.\n */" },
		{ "IncludePath", "MVR/Types/DMXMVRSceneNode.h" },
		{ "ModuleRelativePath", "Public/MVR/Types/DMXMVRSceneNode.h" },
		{ "ToolTip", "This node contains information about the scene.\n\nUE Specific: Note, while properties follow the standard closely, only properties relevant to the Engine are implemented." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXMVRSceneNode_Statics::NewProp_LayersNode_MetaData[] = {
		{ "Comment", "/** This node defines a list of layers inside the scene. The layer is a container of graphical objects defining a local coordinate system. */" },
		{ "ModuleRelativePath", "Public/MVR/Types/DMXMVRSceneNode.h" },
		{ "ToolTip", "This node defines a list of layers inside the scene. The layer is a container of graphical objects defining a local coordinate system." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDMXMVRSceneNode_Statics::NewProp_LayersNode = { "LayersNode", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXMVRSceneNode, LayersNode), Z_Construct_UClass_UDMXMVRLayersNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDMXMVRSceneNode_Statics::NewProp_LayersNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXMVRSceneNode_Statics::NewProp_LayersNode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXMVRSceneNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXMVRSceneNode_Statics::NewProp_LayersNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXMVRSceneNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXMVRSceneNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXMVRSceneNode_Statics::ClassParams = {
		&UDMXMVRSceneNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXMVRSceneNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXMVRSceneNode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXMVRSceneNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXMVRSceneNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXMVRSceneNode()
	{
		if (!Z_Registration_Info_UClass_UDMXMVRSceneNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXMVRSceneNode.OuterSingleton, Z_Construct_UClass_UDMXMVRSceneNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXMVRSceneNode.OuterSingleton;
	}
	template<> DMXRUNTIME_API UClass* StaticClass<UDMXMVRSceneNode>()
	{
		return UDMXMVRSceneNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXMVRSceneNode);
	UDMXMVRSceneNode::~UDMXMVRSceneNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRSceneNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRSceneNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXMVRSceneNode, UDMXMVRSceneNode::StaticClass, TEXT("UDMXMVRSceneNode"), &Z_Registration_Info_UClass_UDMXMVRSceneNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXMVRSceneNode), 1775874612U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRSceneNode_h_2218002854(TEXT("/Script/DMXRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRSceneNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRSceneNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
