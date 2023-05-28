// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MVR/Types/DMXMVRChildListNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXMVRChildListNode() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXMVRChildListNode();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXMVRChildListNode_NoRegister();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXMVRParametricObjectNodeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DMXRuntime();
// End Cross Module References
	void UDMXMVRChildListNode::StaticRegisterNativesUDMXMVRChildListNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXMVRChildListNode);
	UClass* Z_Construct_UClass_UDMXMVRChildListNode_NoRegister()
	{
		return UDMXMVRChildListNode::StaticClass();
	}
	struct Z_Construct_UClass_UDMXMVRChildListNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParametricObjectNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParametricObjectNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ParametricObjectNodes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXMVRChildListNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXMVRChildListNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** This node defines a generic graphical object. */" },
		{ "IncludePath", "MVR/Types/DMXMVRChildListNode.h" },
		{ "ModuleRelativePath", "Public/MVR/Types/DMXMVRChildListNode.h" },
		{ "ToolTip", "This node defines a generic graphical object." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDMXMVRChildListNode_Statics::NewProp_ParametricObjectNodes_Inner = { "ParametricObjectNodes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDMXMVRParametricObjectNodeBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXMVRChildListNode_Statics::NewProp_ParametricObjectNodes_MetaData[] = {
		{ "Comment", "/** A list of geometrical representation objects that are part of the object. */" },
		{ "ModuleRelativePath", "Public/MVR/Types/DMXMVRChildListNode.h" },
		{ "ToolTip", "A list of geometrical representation objects that are part of the object." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDMXMVRChildListNode_Statics::NewProp_ParametricObjectNodes = { "ParametricObjectNodes", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXMVRChildListNode, ParametricObjectNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDMXMVRChildListNode_Statics::NewProp_ParametricObjectNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXMVRChildListNode_Statics::NewProp_ParametricObjectNodes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXMVRChildListNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXMVRChildListNode_Statics::NewProp_ParametricObjectNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXMVRChildListNode_Statics::NewProp_ParametricObjectNodes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXMVRChildListNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXMVRChildListNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXMVRChildListNode_Statics::ClassParams = {
		&UDMXMVRChildListNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXMVRChildListNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXMVRChildListNode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXMVRChildListNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXMVRChildListNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXMVRChildListNode()
	{
		if (!Z_Registration_Info_UClass_UDMXMVRChildListNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXMVRChildListNode.OuterSingleton, Z_Construct_UClass_UDMXMVRChildListNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXMVRChildListNode.OuterSingleton;
	}
	template<> DMXRUNTIME_API UClass* StaticClass<UDMXMVRChildListNode>()
	{
		return UDMXMVRChildListNode::StaticClass();
	}
	UDMXMVRChildListNode::UDMXMVRChildListNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXMVRChildListNode);
	UDMXMVRChildListNode::~UDMXMVRChildListNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRChildListNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRChildListNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXMVRChildListNode, UDMXMVRChildListNode::StaticClass, TEXT("UDMXMVRChildListNode"), &Z_Registration_Info_UClass_UDMXMVRChildListNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXMVRChildListNode), 2022051335U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRChildListNode_h_1088522686(TEXT("/Script/DMXRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRChildListNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRChildListNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
