// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuCOE/Nodes/CustomizableObjectNode.h"
#include "../../Source/Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectNode() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNode();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNode_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodePinData();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodePinData_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UFunction* Z_Construct_UDelegateFunction_CustomizableObjectEditor_PostEditChangePropertyDelegate__DelegateSignature();
	CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FPostEditChangePropertyDelegateParameters();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphPinReference();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectEditor();
// End Cross Module References
	void UCustomizableObjectNodePinData::StaticRegisterNativesUCustomizableObjectNodePinData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectNodePinData);
	UClass* Z_Construct_UClass_UCustomizableObjectNodePinData_NoRegister()
	{
		return UCustomizableObjectNodePinData::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectNodePinData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectNodePinData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodePinData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Abstract base class for all pin data. */" },
		{ "IncludePath", "MuCOE/Nodes/CustomizableObjectNode.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNode.h" },
		{ "ToolTip", "Abstract base class for all pin data." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectNodePinData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectNodePinData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectNodePinData_Statics::ClassParams = {
		&UCustomizableObjectNodePinData::StaticClass,
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
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodePinData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodePinData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizableObjectNodePinData()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectNodePinData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectNodePinData.OuterSingleton, Z_Construct_UClass_UCustomizableObjectNodePinData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectNodePinData.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectNodePinData>()
	{
		return UCustomizableObjectNodePinData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectNodePinData);
	UCustomizableObjectNodePinData::~UCustomizableObjectNodePinData() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PostEditChangePropertyDelegateParameters;
class UScriptStruct* FPostEditChangePropertyDelegateParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PostEditChangePropertyDelegateParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PostEditChangePropertyDelegateParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPostEditChangePropertyDelegateParameters, (UObject*)Z_Construct_UPackage__Script_CustomizableObjectEditor(), TEXT("PostEditChangePropertyDelegateParameters"));
	}
	return Z_Registration_Info_UScriptStruct_PostEditChangePropertyDelegateParameters.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* StaticStruct<FPostEditChangePropertyDelegateParameters>()
{
	return FPostEditChangePropertyDelegateParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPostEditChangePropertyDelegateParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostEditChangePropertyDelegateParameters_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Encapsulation of parameters for the FPostEditChangePropertyDelegate delegate function.\n *\n * The delegate requires the function being a UFUNCTION which requires all parameters to be UCLASS, USTRUC or UENUM.\n */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNode.h" },
		{ "ToolTip", "Encapsulation of parameters for the FPostEditChangePropertyDelegate delegate function.\n\nThe delegate requires the function being a UFUNCTION which requires all parameters to be UCLASS, USTRUC or UENUM." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPostEditChangePropertyDelegateParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPostEditChangePropertyDelegateParameters>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPostEditChangePropertyDelegateParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
		nullptr,
		&NewStructOps,
		"PostEditChangePropertyDelegateParameters",
		sizeof(FPostEditChangePropertyDelegateParameters),
		alignof(FPostEditChangePropertyDelegateParameters),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPostEditChangePropertyDelegateParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostEditChangePropertyDelegateParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPostEditChangePropertyDelegateParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_PostEditChangePropertyDelegateParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PostEditChangePropertyDelegateParameters.InnerSingleton, Z_Construct_UScriptStruct_FPostEditChangePropertyDelegateParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PostEditChangePropertyDelegateParameters.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_CustomizableObjectEditor_PostEditChangePropertyDelegate__DelegateSignature_Statics
	{
		struct _Script_CustomizableObjectEditor_eventPostEditChangePropertyDelegate_Parms
		{
			FPostEditChangePropertyDelegateParameters Parameters;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_CustomizableObjectEditor_PostEditChangePropertyDelegate__DelegateSignature_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_CustomizableObjectEditor_eventPostEditChangePropertyDelegate_Parms, Parameters), Z_Construct_UScriptStruct_FPostEditChangePropertyDelegateParameters, METADATA_PARAMS(nullptr, 0) }; // 3216778700
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CustomizableObjectEditor_PostEditChangePropertyDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CustomizableObjectEditor_PostEditChangePropertyDelegate__DelegateSignature_Statics::NewProp_Parameters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CustomizableObjectEditor_PostEditChangePropertyDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CustomizableObjectEditor_PostEditChangePropertyDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CustomizableObjectEditor, nullptr, "PostEditChangePropertyDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_CustomizableObjectEditor_PostEditChangePropertyDelegate__DelegateSignature_Statics::_Script_CustomizableObjectEditor_eventPostEditChangePropertyDelegate_Parms), Z_Construct_UDelegateFunction_CustomizableObjectEditor_PostEditChangePropertyDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CustomizableObjectEditor_PostEditChangePropertyDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CustomizableObjectEditor_PostEditChangePropertyDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CustomizableObjectEditor_PostEditChangePropertyDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CustomizableObjectEditor_PostEditChangePropertyDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CustomizableObjectEditor_PostEditChangePropertyDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FPostEditChangePropertyDelegate_DelegateWrapper(const FMulticastScriptDelegate& PostEditChangePropertyDelegate, FPostEditChangePropertyDelegateParameters& Parameters)
{
	struct _Script_CustomizableObjectEditor_eventPostEditChangePropertyDelegate_Parms
	{
		FPostEditChangePropertyDelegateParameters Parameters;
	};
	_Script_CustomizableObjectEditor_eventPostEditChangePropertyDelegate_Parms Parms;
	Parms.Parameters=Parameters;
	PostEditChangePropertyDelegate.ProcessMulticastDelegate<UObject>(&Parms);
	Parameters=Parms.Parameters;
}
	void UCustomizableObjectNode::StaticRegisterNativesUCustomizableObjectNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectNode);
	UClass* Z_Construct_UClass_UCustomizableObjectNode_NoRegister()
	{
		return UCustomizableObjectNode::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostEditChangePropertyDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_PostEditChangePropertyDelegate;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PinsDataId_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PinsDataId_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinsDataId_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PinsDataId;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PinsData_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PinsData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinsData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PinsData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Base class of all Customizable Object nodes.\n * \n * The Customizable Object node system is build on top of the following premises. To avoid breaking this system, these premise must be hold!\n * \n * PREMISES:\n * 1. A node can only be modified when a node is reconstructed (i.e., inside the ReconstructNode, AllocateDefaultPins functions). Exceptionally, a pin can also be created inside the BeginConstruct.\n *    We consider that a node has been modified if one of the following things happen:\n *        - Creation, destruction and modification of pins.\n *        - Modification of any data that would modify any pin.\n */" },
		{ "IncludePath", "MuCOE/Nodes/CustomizableObjectNode.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNode.h" },
		{ "ToolTip", "Base class of all Customizable Object nodes.\n\nThe Customizable Object node system is build on top of the following premises. To avoid breaking this system, these premise must be hold!\n\nPREMISES:\n1. A node can only be modified when a node is reconstructed (i.e., inside the ReconstructNode, AllocateDefaultPins functions). Exceptionally, a pin can also be created inside the BeginConstruct.\n  We consider that a node has been modified if one of the following things happen:\n      - Creation, destruction and modification of pins.\n      - Modification of any data that would modify any pin." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNode_Statics::NewProp_PostEditChangePropertyDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNode.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCustomizableObjectNode_Statics::NewProp_PostEditChangePropertyDelegate = { "PostEditChangePropertyDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNode, PostEditChangePropertyDelegate), Z_Construct_UDelegateFunction_CustomizableObjectEditor_PostEditChangePropertyDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNode_Statics::NewProp_PostEditChangePropertyDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNode_Statics::NewProp_PostEditChangePropertyDelegate_MetaData)) }; // 2805020980
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCustomizableObjectNode_Statics::NewProp_PinsDataId_ValueProp = { "PinsDataId", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UCustomizableObjectNodePinData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNode_Statics::NewProp_PinsDataId_Key_KeyProp = { "PinsDataId_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNode_Statics::NewProp_PinsDataId_MetaData[] = {
		{ "Comment", "/** Data attached to a given pin. Not all pins contain data.\n\x09 * Data must be eliminated once the pins is removed. This is done automatically on CustomRemovePin.\n\x09 * Do not use RemovePin since it will not remove the data. */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNode.h" },
		{ "ToolTip", "Data attached to a given pin. Not all pins contain data.\nData must be eliminated once the pins is removed. This is done automatically on CustomRemovePin.\nDo not use RemovePin since it will not remove the data." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCustomizableObjectNode_Statics::NewProp_PinsDataId = { "PinsDataId", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNode, PinsDataId), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNode_Statics::NewProp_PinsDataId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNode_Statics::NewProp_PinsDataId_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCustomizableObjectNode_Statics::NewProp_PinsData_ValueProp = { "PinsData", nullptr, (EPropertyFlags)0x0004000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UCustomizableObjectNodePinData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNode_Statics::NewProp_PinsData_Key_KeyProp = { "PinsData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FEdGraphPinReference, METADATA_PARAMS(nullptr, 0) }; // 1910659421
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNode_Statics::NewProp_PinsData_MetaData[] = {
		{ "Comment", "// Deprectated properties\n" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNode.h" },
		{ "ToolTip", "Deprectated properties" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCustomizableObjectNode_Statics::NewProp_PinsData = { "PinsData", nullptr, (EPropertyFlags)0x0044000020000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNode, PinsData_DEPRECATED), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNode_Statics::NewProp_PinsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNode_Statics::NewProp_PinsData_MetaData)) }; // 1910659421
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizableObjectNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNode_Statics::NewProp_PostEditChangePropertyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNode_Statics::NewProp_PinsDataId_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNode_Statics::NewProp_PinsDataId_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNode_Statics::NewProp_PinsDataId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNode_Statics::NewProp_PinsData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNode_Statics::NewProp_PinsData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNode_Statics::NewProp_PinsData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectNode_Statics::ClassParams = {
		&UCustomizableObjectNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomizableObjectNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNode_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizableObjectNode()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectNode.OuterSingleton, Z_Construct_UClass_UCustomizableObjectNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectNode.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectNode>()
	{
		return UCustomizableObjectNode::StaticClass();
	}
	UCustomizableObjectNode::UCustomizableObjectNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectNode);
	UCustomizableObjectNode::~UCustomizableObjectNode() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UCustomizableObjectNode)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNode_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNode_h_Statics::ScriptStructInfo[] = {
		{ FPostEditChangePropertyDelegateParameters::StaticStruct, Z_Construct_UScriptStruct_FPostEditChangePropertyDelegateParameters_Statics::NewStructOps, TEXT("PostEditChangePropertyDelegateParameters"), &Z_Registration_Info_UScriptStruct_PostEditChangePropertyDelegateParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPostEditChangePropertyDelegateParameters), 3216778700U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableObjectNodePinData, UCustomizableObjectNodePinData::StaticClass, TEXT("UCustomizableObjectNodePinData"), &Z_Registration_Info_UClass_UCustomizableObjectNodePinData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectNodePinData), 1423682047U) },
		{ Z_Construct_UClass_UCustomizableObjectNode, UCustomizableObjectNode::StaticClass, TEXT("UCustomizableObjectNode"), &Z_Registration_Info_UClass_UCustomizableObjectNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectNode), 3252593570U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNode_h_344947181(TEXT("/Script/CustomizableObjectEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNode_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNode_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
