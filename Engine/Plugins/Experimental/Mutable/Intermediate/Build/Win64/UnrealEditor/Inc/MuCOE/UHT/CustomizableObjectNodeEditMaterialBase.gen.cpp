// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuCOE/Nodes/CustomizableObjectNodeEditMaterialBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectNodeEditMaterialBase() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableObject_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNode();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeEditMaterialBase();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeEditMaterialBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectEditor();
// End Cross Module References
	void UCustomizableObjectNodeEditMaterialBase::StaticRegisterNativesUCustomizableObjectNodeEditMaterialBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectNodeEditMaterialBase);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeEditMaterialBase_NoRegister()
	{
		return UCustomizableObjectNodeEditMaterialBase::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectNodeEditMaterialBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentLayoutIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ParentLayoutIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentMaterialObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParentMaterialObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentMaterialNodeId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParentMaterialNodeId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectNodeEditMaterialBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizableObjectNode,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeEditMaterialBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuCOE/Nodes/CustomizableObjectNodeEditMaterialBase.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeEditMaterialBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeEditMaterialBase_Statics::NewProp_ParentLayoutIndex_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "Comment", "/** Index of the layout to use to patch blocks. */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeEditMaterialBase.h" },
		{ "ToolTip", "Index of the layout to use to patch blocks." },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UCustomizableObjectNodeEditMaterialBase_Statics::NewProp_ParentLayoutIndex = { "ParentLayoutIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeEditMaterialBase, ParentLayoutIndex), METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeEditMaterialBase_Statics::NewProp_ParentLayoutIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeEditMaterialBase_Statics::NewProp_ParentLayoutIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeEditMaterialBase_Statics::NewProp_ParentMaterialObject_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeEditMaterialBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCustomizableObjectNodeEditMaterialBase_Statics::NewProp_ParentMaterialObject = { "ParentMaterialObject", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeEditMaterialBase, ParentMaterialObject), Z_Construct_UClass_UCustomizableObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeEditMaterialBase_Statics::NewProp_ParentMaterialObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeEditMaterialBase_Statics::NewProp_ParentMaterialObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeEditMaterialBase_Statics::NewProp_ParentMaterialNodeId_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeEditMaterialBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeEditMaterialBase_Statics::NewProp_ParentMaterialNodeId = { "ParentMaterialNodeId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeEditMaterialBase, ParentMaterialNodeId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeEditMaterialBase_Statics::NewProp_ParentMaterialNodeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeEditMaterialBase_Statics::NewProp_ParentMaterialNodeId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizableObjectNodeEditMaterialBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeEditMaterialBase_Statics::NewProp_ParentLayoutIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeEditMaterialBase_Statics::NewProp_ParentMaterialObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeEditMaterialBase_Statics::NewProp_ParentMaterialNodeId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectNodeEditMaterialBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectNodeEditMaterialBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectNodeEditMaterialBase_Statics::ClassParams = {
		&UCustomizableObjectNodeEditMaterialBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomizableObjectNodeEditMaterialBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeEditMaterialBase_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeEditMaterialBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeEditMaterialBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizableObjectNodeEditMaterialBase()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectNodeEditMaterialBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectNodeEditMaterialBase.OuterSingleton, Z_Construct_UClass_UCustomizableObjectNodeEditMaterialBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectNodeEditMaterialBase.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectNodeEditMaterialBase>()
	{
		return UCustomizableObjectNodeEditMaterialBase::StaticClass();
	}
	UCustomizableObjectNodeEditMaterialBase::UCustomizableObjectNodeEditMaterialBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectNodeEditMaterialBase);
	UCustomizableObjectNodeEditMaterialBase::~UCustomizableObjectNodeEditMaterialBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeEditMaterialBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeEditMaterialBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableObjectNodeEditMaterialBase, UCustomizableObjectNodeEditMaterialBase::StaticClass, TEXT("UCustomizableObjectNodeEditMaterialBase"), &Z_Registration_Info_UClass_UCustomizableObjectNodeEditMaterialBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectNodeEditMaterialBase), 3405597344U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeEditMaterialBase_h_3738533832(TEXT("/Script/CustomizableObjectEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeEditMaterialBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeEditMaterialBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
