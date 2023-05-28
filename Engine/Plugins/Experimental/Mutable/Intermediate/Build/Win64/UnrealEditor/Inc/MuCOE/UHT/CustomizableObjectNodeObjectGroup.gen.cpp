// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuCOE/Nodes/CustomizableObjectNodeObjectGroup.h"
#include "../Public/MuCO/CustomizableObjectUIData.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectNodeObjectGroup() {}
// Cross Module References
	CUSTOMIZABLEOBJECT_API UEnum* Z_Construct_UEnum_CustomizableObject_ECustomizableObjectGroupType();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMutableParamUIMetadata();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNode();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeObjectGroup();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeObjectGroup_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectEditor();
// End Cross Module References
	void UCustomizableObjectNodeObjectGroup::StaticRegisterNativesUCustomizableObjectNodeObjectGroup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectNodeObjectGroup);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeObjectGroup_NoRegister()
	{
		return UCustomizableObjectNodeObjectGroup::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectNodeObjectGroup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GroupName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_GroupType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GroupType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamUIMetadata_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParamUIMetadata;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketPriority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SocketPriority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectNodeObjectGroup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizableObjectNode,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeObjectGroup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuCOE/Nodes/CustomizableObjectNodeObjectGroup.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObjectGroup.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeObjectGroup_Statics::NewProp_GroupName_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObjectGroup.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCustomizableObjectNodeObjectGroup_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeObjectGroup, GroupName), METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeObjectGroup_Statics::NewProp_GroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeObjectGroup_Statics::NewProp_GroupName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCustomizableObjectNodeObjectGroup_Statics::NewProp_GroupType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeObjectGroup_Statics::NewProp_GroupType_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObjectGroup.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCustomizableObjectNodeObjectGroup_Statics::NewProp_GroupType = { "GroupType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeObjectGroup, GroupType), Z_Construct_UEnum_CustomizableObject_ECustomizableObjectGroupType, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeObjectGroup_Statics::NewProp_GroupType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeObjectGroup_Statics::NewProp_GroupType_MetaData)) }; // 2934808786
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeObjectGroup_Statics::NewProp_ParamUIMetadata_MetaData[] = {
		{ "Category", "UI" },
		{ "DisplayName", "Parameter UI Metadata" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObjectGroup.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeObjectGroup_Statics::NewProp_ParamUIMetadata = { "ParamUIMetadata", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeObjectGroup, ParamUIMetadata), Z_Construct_UScriptStruct_FMutableParamUIMetadata, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeObjectGroup_Statics::NewProp_ParamUIMetadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeObjectGroup_Statics::NewProp_ParamUIMetadata_MetaData)) }; // 1713445463
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeObjectGroup_Statics::NewProp_SocketPriority_MetaData[] = {
		{ "Category", "MeshSockets" },
		{ "Comment", "// The sockets defined in meshes deriving from this node will inherit this socket priority. When in the generated merged mesh there\n// are clashes with socket names, the one with higher priority will be kept and the other discarded.\n" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObjectGroup.h" },
		{ "ToolTip", "The sockets defined in meshes deriving from this node will inherit this socket priority. When in the generated merged mesh there\nare clashes with socket names, the one with higher priority will be kept and the other discarded." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCustomizableObjectNodeObjectGroup_Statics::NewProp_SocketPriority = { "SocketPriority", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeObjectGroup, SocketPriority), METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeObjectGroup_Statics::NewProp_SocketPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeObjectGroup_Statics::NewProp_SocketPriority_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizableObjectNodeObjectGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeObjectGroup_Statics::NewProp_GroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeObjectGroup_Statics::NewProp_GroupType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeObjectGroup_Statics::NewProp_GroupType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeObjectGroup_Statics::NewProp_ParamUIMetadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeObjectGroup_Statics::NewProp_SocketPriority,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectNodeObjectGroup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectNodeObjectGroup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectNodeObjectGroup_Statics::ClassParams = {
		&UCustomizableObjectNodeObjectGroup::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomizableObjectNodeObjectGroup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeObjectGroup_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeObjectGroup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeObjectGroup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizableObjectNodeObjectGroup()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectNodeObjectGroup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectNodeObjectGroup.OuterSingleton, Z_Construct_UClass_UCustomizableObjectNodeObjectGroup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectNodeObjectGroup.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectNodeObjectGroup>()
	{
		return UCustomizableObjectNodeObjectGroup::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectNodeObjectGroup);
	UCustomizableObjectNodeObjectGroup::~UCustomizableObjectNodeObjectGroup() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UCustomizableObjectNodeObjectGroup)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeObjectGroup_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeObjectGroup_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableObjectNodeObjectGroup, UCustomizableObjectNodeObjectGroup::StaticClass, TEXT("UCustomizableObjectNodeObjectGroup"), &Z_Registration_Info_UClass_UCustomizableObjectNodeObjectGroup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectNodeObjectGroup), 1999075726U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeObjectGroup_h_2427523303(TEXT("/Script/CustomizableObjectEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeObjectGroup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeObjectGroup_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
