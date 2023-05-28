// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MVR/Types/DMXMVRGroupObjectNode.h"
#include "DMXOptionalTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXMVRGroupObjectNode() {}
// Cross Module References
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXMVRChildListNode_NoRegister();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXMVRGroupObjectNode();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXMVRGroupObjectNode_NoRegister();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXMVRParametricObjectNodeBase();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXOptionalString();
	UPackage* Z_Construct_UPackage__Script_DMXRuntime();
// End Cross Module References
	void UDMXMVRGroupObjectNode::StaticRegisterNativesUDMXMVRGroupObjectNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXMVRGroupObjectNode);
	UClass* Z_Construct_UClass_UDMXMVRGroupObjectNode_NoRegister()
	{
		return UDMXMVRGroupObjectNode::StaticClass();
	}
	struct Z_Construct_UClass_UDMXMVRGroupObjectNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildListNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ChildListNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXMVRGroupObjectNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDMXMVRParametricObjectNodeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXMVRGroupObjectNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** This node defines logical group of objects. The child objects are located inside a local coordinate system. */" },
		{ "IncludePath", "MVR/Types/DMXMVRGroupObjectNode.h" },
		{ "ModuleRelativePath", "Public/MVR/Types/DMXMVRGroupObjectNode.h" },
		{ "ToolTip", "This node defines logical group of objects. The child objects are located inside a local coordinate system." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXMVRGroupObjectNode_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "/**\n\x09 * The name of the GroupObject \n\x09 */" },
		{ "ModuleRelativePath", "Public/MVR/Types/DMXMVRGroupObjectNode.h" },
		{ "ToolTip", "The name of the GroupObject" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXMVRGroupObjectNode_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXMVRGroupObjectNode, Name), Z_Construct_UScriptStruct_FDMXOptionalString, METADATA_PARAMS(Z_Construct_UClass_UDMXMVRGroupObjectNode_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXMVRGroupObjectNode_Statics::NewProp_Name_MetaData)) }; // 1641884156
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXMVRGroupObjectNode_Statics::NewProp_ChildListNode_MetaData[] = {
		{ "Comment", "/** A list of graphic objects that are part of the group. */" },
		{ "ModuleRelativePath", "Public/MVR/Types/DMXMVRGroupObjectNode.h" },
		{ "ToolTip", "A list of graphic objects that are part of the group." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDMXMVRGroupObjectNode_Statics::NewProp_ChildListNode = { "ChildListNode", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXMVRGroupObjectNode, ChildListNode), Z_Construct_UClass_UDMXMVRChildListNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDMXMVRGroupObjectNode_Statics::NewProp_ChildListNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXMVRGroupObjectNode_Statics::NewProp_ChildListNode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXMVRGroupObjectNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXMVRGroupObjectNode_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXMVRGroupObjectNode_Statics::NewProp_ChildListNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXMVRGroupObjectNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXMVRGroupObjectNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXMVRGroupObjectNode_Statics::ClassParams = {
		&UDMXMVRGroupObjectNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXMVRGroupObjectNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXMVRGroupObjectNode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXMVRGroupObjectNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXMVRGroupObjectNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXMVRGroupObjectNode()
	{
		if (!Z_Registration_Info_UClass_UDMXMVRGroupObjectNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXMVRGroupObjectNode.OuterSingleton, Z_Construct_UClass_UDMXMVRGroupObjectNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXMVRGroupObjectNode.OuterSingleton;
	}
	template<> DMXRUNTIME_API UClass* StaticClass<UDMXMVRGroupObjectNode>()
	{
		return UDMXMVRGroupObjectNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXMVRGroupObjectNode);
	UDMXMVRGroupObjectNode::~UDMXMVRGroupObjectNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRGroupObjectNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRGroupObjectNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXMVRGroupObjectNode, UDMXMVRGroupObjectNode::StaticClass, TEXT("UDMXMVRGroupObjectNode"), &Z_Registration_Info_UClass_UDMXMVRGroupObjectNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXMVRGroupObjectNode), 3967258240U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRGroupObjectNode_h_1165024821(TEXT("/Script/DMXRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRGroupObjectNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRGroupObjectNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
