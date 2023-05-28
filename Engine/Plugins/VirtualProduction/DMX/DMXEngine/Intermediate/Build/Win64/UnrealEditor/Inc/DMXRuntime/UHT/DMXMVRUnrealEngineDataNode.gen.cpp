// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MVR/Types/DMXMVRUnrealEngineDataNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXMVRUnrealEngineDataNode() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXMVRUnrealEngineDataNode();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXMVRUnrealEngineDataNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DMXRuntime();
// End Cross Module References
	void UDMXMVRUnrealEngineDataNode::StaticRegisterNativesUDMXMVRUnrealEngineDataNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXMVRUnrealEngineDataNode);
	UClass* Z_Construct_UClass_UDMXMVRUnrealEngineDataNode_NoRegister()
	{
		return UDMXMVRUnrealEngineDataNode::StaticClass();
	}
	struct Z_Construct_UClass_UDMXMVRUnrealEngineDataNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXMVRUnrealEngineDataNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXMVRUnrealEngineDataNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * This node contains a collection of data specified by the provider application.\n * UE sepecific: Used to add UE specific meta data\n */" },
		{ "IncludePath", "MVR/Types/DMXMVRUnrealEngineDataNode.h" },
		{ "ModuleRelativePath", "Public/MVR/Types/DMXMVRUnrealEngineDataNode.h" },
		{ "ToolTip", "This node contains a collection of data specified by the provider application.\nUE sepecific: Used to add UE specific meta data" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXMVRUnrealEngineDataNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXMVRUnrealEngineDataNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXMVRUnrealEngineDataNode_Statics::ClassParams = {
		&UDMXMVRUnrealEngineDataNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXMVRUnrealEngineDataNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXMVRUnrealEngineDataNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXMVRUnrealEngineDataNode()
	{
		if (!Z_Registration_Info_UClass_UDMXMVRUnrealEngineDataNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXMVRUnrealEngineDataNode.OuterSingleton, Z_Construct_UClass_UDMXMVRUnrealEngineDataNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXMVRUnrealEngineDataNode.OuterSingleton;
	}
	template<> DMXRUNTIME_API UClass* StaticClass<UDMXMVRUnrealEngineDataNode>()
	{
		return UDMXMVRUnrealEngineDataNode::StaticClass();
	}
	UDMXMVRUnrealEngineDataNode::UDMXMVRUnrealEngineDataNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXMVRUnrealEngineDataNode);
	UDMXMVRUnrealEngineDataNode::~UDMXMVRUnrealEngineDataNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRUnrealEngineDataNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRUnrealEngineDataNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXMVRUnrealEngineDataNode, UDMXMVRUnrealEngineDataNode::StaticClass, TEXT("UDMXMVRUnrealEngineDataNode"), &Z_Registration_Info_UClass_UDMXMVRUnrealEngineDataNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXMVRUnrealEngineDataNode), 2020937871U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRUnrealEngineDataNode_h_1140641461(TEXT("/Script/DMXRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRUnrealEngineDataNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRUnrealEngineDataNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
