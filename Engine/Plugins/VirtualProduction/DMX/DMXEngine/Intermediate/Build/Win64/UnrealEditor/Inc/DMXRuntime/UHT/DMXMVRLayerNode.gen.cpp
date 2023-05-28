// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MVR/Types/DMXMVRLayerNode.h"
#include "DMXOptionalTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXMVRLayerNode() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXMVRChildListNode_NoRegister();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXMVRLayerNode();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXMVRLayerNode_NoRegister();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXOptionalString();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXOptionalTransform();
	UPackage* Z_Construct_UPackage__Script_DMXRuntime();
// End Cross Module References
	void UDMXMVRLayerNode::StaticRegisterNativesUDMXMVRLayerNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXMVRLayerNode);
	UClass* Z_Construct_UClass_UDMXMVRLayerNode_NoRegister()
	{
		return UDMXMVRLayerNode::StaticClass();
	}
	struct Z_Construct_UClass_UDMXMVRLayerNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UUID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UUID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Matrix_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Matrix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildListNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ChildListNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXMVRLayerNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXMVRLayerNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A Layer node in the Layers Node of a Scene. */" },
		{ "IncludePath", "MVR/Types/DMXMVRLayerNode.h" },
		{ "ModuleRelativePath", "Public/MVR/Types/DMXMVRLayerNode.h" },
		{ "ToolTip", "A Layer node in the Layers Node of a Scene." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXMVRLayerNode_Statics::NewProp_UUID_MetaData[] = {
		{ "Comment", "/** The unique identifier of the object. */" },
		{ "ModuleRelativePath", "Public/MVR/Types/DMXMVRLayerNode.h" },
		{ "ToolTip", "The unique identifier of the object." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXMVRLayerNode_Statics::NewProp_UUID = { "UUID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXMVRLayerNode, UUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UDMXMVRLayerNode_Statics::NewProp_UUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXMVRLayerNode_Statics::NewProp_UUID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXMVRLayerNode_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "/** The name of the object */" },
		{ "ModuleRelativePath", "Public/MVR/Types/DMXMVRLayerNode.h" },
		{ "ToolTip", "The name of the object" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXMVRLayerNode_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXMVRLayerNode, Name), Z_Construct_UScriptStruct_FDMXOptionalString, METADATA_PARAMS(Z_Construct_UClass_UDMXMVRLayerNode_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXMVRLayerNode_Statics::NewProp_Name_MetaData)) }; // 1641884156
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXMVRLayerNode_Statics::NewProp_Matrix_MetaData[] = {
		{ "Comment", "/**\n\x09 * The transformation matrix that defines the location and orientation of this the layer inside its global coordinate space. \n\x09 * This effectively defines local coordinate space for the objects inside. The Matrix of the Layer is only allowed to have an elevation, but no rotation.\n\x09 * \n\x09 * UE specific: Note, we do not use an FVector since the standard clearly specifies a transformation matrix, even tho it also forbids any rotation.\n\x09 * While it makes the code more readable and future proof, the user of this struct is responsible to follow the standard directly.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MVR/Types/DMXMVRLayerNode.h" },
		{ "ToolTip", "The transformation matrix that defines the location and orientation of this the layer inside its global coordinate space.\nThis effectively defines local coordinate space for the objects inside. The Matrix of the Layer is only allowed to have an elevation, but no rotation.\n\nUE specific: Note, we do not use an FVector since the standard clearly specifies a transformation matrix, even tho it also forbids any rotation.\nWhile it makes the code more readable and future proof, the user of this struct is responsible to follow the standard directly." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXMVRLayerNode_Statics::NewProp_Matrix = { "Matrix", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXMVRLayerNode, Matrix), Z_Construct_UScriptStruct_FDMXOptionalTransform, METADATA_PARAMS(Z_Construct_UClass_UDMXMVRLayerNode_Statics::NewProp_Matrix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXMVRLayerNode_Statics::NewProp_Matrix_MetaData)) }; // 897329876
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXMVRLayerNode_Statics::NewProp_ChildListNode_MetaData[] = {
		{ "Comment", "/** A list of graphic objects that are part of the group. */" },
		{ "ModuleRelativePath", "Public/MVR/Types/DMXMVRLayerNode.h" },
		{ "ToolTip", "A list of graphic objects that are part of the group." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDMXMVRLayerNode_Statics::NewProp_ChildListNode = { "ChildListNode", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXMVRLayerNode, ChildListNode), Z_Construct_UClass_UDMXMVRChildListNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDMXMVRLayerNode_Statics::NewProp_ChildListNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXMVRLayerNode_Statics::NewProp_ChildListNode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXMVRLayerNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXMVRLayerNode_Statics::NewProp_UUID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXMVRLayerNode_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXMVRLayerNode_Statics::NewProp_Matrix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXMVRLayerNode_Statics::NewProp_ChildListNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXMVRLayerNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXMVRLayerNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXMVRLayerNode_Statics::ClassParams = {
		&UDMXMVRLayerNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXMVRLayerNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXMVRLayerNode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXMVRLayerNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXMVRLayerNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXMVRLayerNode()
	{
		if (!Z_Registration_Info_UClass_UDMXMVRLayerNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXMVRLayerNode.OuterSingleton, Z_Construct_UClass_UDMXMVRLayerNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXMVRLayerNode.OuterSingleton;
	}
	template<> DMXRUNTIME_API UClass* StaticClass<UDMXMVRLayerNode>()
	{
		return UDMXMVRLayerNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXMVRLayerNode);
	UDMXMVRLayerNode::~UDMXMVRLayerNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRLayerNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRLayerNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXMVRLayerNode, UDMXMVRLayerNode::StaticClass, TEXT("UDMXMVRLayerNode"), &Z_Registration_Info_UClass_UDMXMVRLayerNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXMVRLayerNode), 1913976623U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRLayerNode_h_527996121(TEXT("/Script/DMXRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRLayerNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRLayerNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
