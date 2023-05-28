// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MVR/Types/DMXMVRRootNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXMVRRootNode() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXMVRRootNode();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXMVRRootNode_NoRegister();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXMVRSceneNode_NoRegister();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXMVRUserDataNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DMXRuntime();
// End Cross Module References
	void UDMXMVRRootNode::StaticRegisterNativesUDMXMVRRootNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXMVRRootNode);
	UClass* Z_Construct_UClass_UDMXMVRRootNode_NoRegister()
	{
		return UDMXMVRRootNode::StaticClass();
	}
	struct Z_Construct_UClass_UDMXMVRRootNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserDataNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UserDataNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SceneNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXMVRRootNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXMVRRootNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * The root node of an MVR General Scene Description as typically held in an MVR's GeneralSceneDescription.xml. \n * \n * UE specific: Note, while properties follow the standard closely, only children relevant to the Engine are implemented.\n */" },
		{ "IncludePath", "MVR/Types/DMXMVRRootNode.h" },
		{ "ModuleRelativePath", "Public/MVR/Types/DMXMVRRootNode.h" },
		{ "ToolTip", "The root node of an MVR General Scene Description as typically held in an MVR's GeneralSceneDescription.xml.\n\nUE specific: Note, while properties follow the standard closely, only children relevant to the Engine are implemented." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXMVRRootNode_Statics::NewProp_UserDataNode_MetaData[] = {
		{ "Comment", "/** This node contains a collection of user data nodes defined and used by provider applications if required. */" },
		{ "ModuleRelativePath", "Public/MVR/Types/DMXMVRRootNode.h" },
		{ "ToolTip", "This node contains a collection of user data nodes defined and used by provider applications if required." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDMXMVRRootNode_Statics::NewProp_UserDataNode = { "UserDataNode", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXMVRRootNode, UserDataNode), Z_Construct_UClass_UDMXMVRUserDataNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDMXMVRRootNode_Statics::NewProp_UserDataNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXMVRRootNode_Statics::NewProp_UserDataNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXMVRRootNode_Statics::NewProp_SceneNode_MetaData[] = {
		{ "Comment", "/** This node contains information about the scene. */" },
		{ "ModuleRelativePath", "Public/MVR/Types/DMXMVRRootNode.h" },
		{ "ToolTip", "This node contains information about the scene." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDMXMVRRootNode_Statics::NewProp_SceneNode = { "SceneNode", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXMVRRootNode, SceneNode), Z_Construct_UClass_UDMXMVRSceneNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDMXMVRRootNode_Statics::NewProp_SceneNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXMVRRootNode_Statics::NewProp_SceneNode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXMVRRootNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXMVRRootNode_Statics::NewProp_UserDataNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXMVRRootNode_Statics::NewProp_SceneNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXMVRRootNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXMVRRootNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXMVRRootNode_Statics::ClassParams = {
		&UDMXMVRRootNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXMVRRootNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXMVRRootNode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXMVRRootNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXMVRRootNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXMVRRootNode()
	{
		if (!Z_Registration_Info_UClass_UDMXMVRRootNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXMVRRootNode.OuterSingleton, Z_Construct_UClass_UDMXMVRRootNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXMVRRootNode.OuterSingleton;
	}
	template<> DMXRUNTIME_API UClass* StaticClass<UDMXMVRRootNode>()
	{
		return UDMXMVRRootNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXMVRRootNode);
	UDMXMVRRootNode::~UDMXMVRRootNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRRootNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRRootNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXMVRRootNode, UDMXMVRRootNode::StaticClass, TEXT("UDMXMVRRootNode"), &Z_Registration_Info_UClass_UDMXMVRRootNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXMVRRootNode), 66654536U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRRootNode_h_631190428(TEXT("/Script/DMXRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRRootNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRRootNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
