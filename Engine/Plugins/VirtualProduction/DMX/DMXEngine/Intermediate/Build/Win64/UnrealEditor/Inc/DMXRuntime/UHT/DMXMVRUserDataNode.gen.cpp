// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MVR/Types/DMXMVRUserDataNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXMVRUserDataNode() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXMVRUnrealEngineDataNode_NoRegister();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXMVRUserDataNode();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXMVRUserDataNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DMXRuntime();
// End Cross Module References
	void UDMXMVRUserDataNode::StaticRegisterNativesUDMXMVRUserDataNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXMVRUserDataNode);
	UClass* Z_Construct_UClass_UDMXMVRUserDataNode_NoRegister()
	{
		return UDMXMVRUserDataNode::StaticClass();
	}
	struct Z_Construct_UClass_UDMXMVRUserDataNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnrealEngineDataNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UnrealEngineDataNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXMVRUserDataNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXMVRUserDataNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** This node contains a collection of user data nodes defined and used by provider applications if required. */" },
		{ "IncludePath", "MVR/Types/DMXMVRUserDataNode.h" },
		{ "ModuleRelativePath", "Public/MVR/Types/DMXMVRUserDataNode.h" },
		{ "ToolTip", "This node contains a collection of user data nodes defined and used by provider applications if required." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXMVRUserDataNode_Statics::NewProp_UnrealEngineDataNode_MetaData[] = {
		{ "Comment", "/** UE Specific: The UE's proprietary data node */" },
		{ "ModuleRelativePath", "Public/MVR/Types/DMXMVRUserDataNode.h" },
		{ "ToolTip", "UE Specific: The UE's proprietary data node" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDMXMVRUserDataNode_Statics::NewProp_UnrealEngineDataNode = { "UnrealEngineDataNode", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXMVRUserDataNode, UnrealEngineDataNode), Z_Construct_UClass_UDMXMVRUnrealEngineDataNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDMXMVRUserDataNode_Statics::NewProp_UnrealEngineDataNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXMVRUserDataNode_Statics::NewProp_UnrealEngineDataNode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXMVRUserDataNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXMVRUserDataNode_Statics::NewProp_UnrealEngineDataNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXMVRUserDataNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXMVRUserDataNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXMVRUserDataNode_Statics::ClassParams = {
		&UDMXMVRUserDataNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXMVRUserDataNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXMVRUserDataNode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXMVRUserDataNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXMVRUserDataNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXMVRUserDataNode()
	{
		if (!Z_Registration_Info_UClass_UDMXMVRUserDataNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXMVRUserDataNode.OuterSingleton, Z_Construct_UClass_UDMXMVRUserDataNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXMVRUserDataNode.OuterSingleton;
	}
	template<> DMXRUNTIME_API UClass* StaticClass<UDMXMVRUserDataNode>()
	{
		return UDMXMVRUserDataNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXMVRUserDataNode);
	UDMXMVRUserDataNode::~UDMXMVRUserDataNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRUserDataNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRUserDataNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXMVRUserDataNode, UDMXMVRUserDataNode::StaticClass, TEXT("UDMXMVRUserDataNode"), &Z_Registration_Info_UClass_UDMXMVRUserDataNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXMVRUserDataNode), 2953373041U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRUserDataNode_h_775047197(TEXT("/Script/DMXRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRUserDataNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRUserDataNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
