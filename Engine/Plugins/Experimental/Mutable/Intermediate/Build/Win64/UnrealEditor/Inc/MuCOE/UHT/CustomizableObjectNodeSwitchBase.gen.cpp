// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuCOE/Nodes/CustomizableObjectNodeSwitchBase.h"
#include "../../Source/Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "MuCOE/Nodes/CustomizableObjectNode.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectNodeSwitchBase() {}
// Cross Module References
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNode();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeSwitchBase();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeSwitchBase_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FPostEditChangePropertyDelegateParameters();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphPinReference();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectEditor();
// End Cross Module References
	DEFINE_FUNCTION(UCustomizableObjectNodeSwitchBase::execEnumParameterPostEditChangeProperty)
	{
		P_GET_STRUCT_REF(FPostEditChangePropertyDelegateParameters,Z_Param_Out_Parameters);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnumParameterPostEditChangeProperty(Z_Param_Out_Parameters);
		P_NATIVE_END;
	}
	void UCustomizableObjectNodeSwitchBase::StaticRegisterNativesUCustomizableObjectNodeSwitchBase()
	{
		UClass* Class = UCustomizableObjectNodeSwitchBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnumParameterPostEditChangeProperty", &UCustomizableObjectNodeSwitchBase::execEnumParameterPostEditChangeProperty },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCustomizableObjectNodeSwitchBase_EnumParameterPostEditChangeProperty_Statics
	{
		struct CustomizableObjectNodeSwitchBase_eventEnumParameterPostEditChangeProperty_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomizableObjectNodeSwitchBase_EnumParameterPostEditChangeProperty_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectNodeSwitchBase_eventEnumParameterPostEditChangeProperty_Parms, Parameters), Z_Construct_UScriptStruct_FPostEditChangePropertyDelegateParameters, METADATA_PARAMS(nullptr, 0) }; // 3216778700
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectNodeSwitchBase_EnumParameterPostEditChangeProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectNodeSwitchBase_EnumParameterPostEditChangeProperty_Statics::NewProp_Parameters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectNodeSwitchBase_EnumParameterPostEditChangeProperty_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** NodeEnumParameter property changed callback function. Reconstructs the node. */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeSwitchBase.h" },
		{ "ToolTip", "NodeEnumParameter property changed callback function. Reconstructs the node." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectNodeSwitchBase_EnumParameterPostEditChangeProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectNodeSwitchBase, nullptr, "EnumParameterPostEditChangeProperty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectNodeSwitchBase_EnumParameterPostEditChangeProperty_Statics::CustomizableObjectNodeSwitchBase_eventEnumParameterPostEditChangeProperty_Parms), Z_Construct_UFunction_UCustomizableObjectNodeSwitchBase_EnumParameterPostEditChangeProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectNodeSwitchBase_EnumParameterPostEditChangeProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectNodeSwitchBase_EnumParameterPostEditChangeProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectNodeSwitchBase_EnumParameterPostEditChangeProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectNodeSwitchBase_EnumParameterPostEditChangeProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectNodeSwitchBase_EnumParameterPostEditChangeProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectNodeSwitchBase);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeSwitchBase_NoRegister()
	{
		return UCustomizableObjectNodeSwitchBase::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectNodeSwitchBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputPinReference_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputPinReference;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReloadingElementsNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReloadingElementsNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReloadingElementsNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwitchParameterPinReference_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SwitchParameterPinReference;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectNodeSwitchBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizableObjectNode,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCustomizableObjectNodeSwitchBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomizableObjectNodeSwitchBase_EnumParameterPostEditChangeProperty, "EnumParameterPostEditChangeProperty" }, // 2514357386
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeSwitchBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuCOE/Nodes/CustomizableObjectNodeSwitchBase.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeSwitchBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeSwitchBase_Statics::NewProp_OutputPinReference_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeSwitchBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeSwitchBase_Statics::NewProp_OutputPinReference = { "OutputPinReference", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeSwitchBase, OutputPinReference), Z_Construct_UScriptStruct_FEdGraphPinReference, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeSwitchBase_Statics::NewProp_OutputPinReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeSwitchBase_Statics::NewProp_OutputPinReference_MetaData)) }; // 1910659421
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCustomizableObjectNodeSwitchBase_Statics::NewProp_ReloadingElementsNames_Inner = { "ReloadingElementsNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeSwitchBase_Statics::NewProp_ReloadingElementsNames_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeSwitchBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObjectNodeSwitchBase_Statics::NewProp_ReloadingElementsNames = { "ReloadingElementsNames", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeSwitchBase, ReloadingElementsNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeSwitchBase_Statics::NewProp_ReloadingElementsNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeSwitchBase_Statics::NewProp_ReloadingElementsNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeSwitchBase_Statics::NewProp_SwitchParameterPinReference_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeSwitchBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeSwitchBase_Statics::NewProp_SwitchParameterPinReference = { "SwitchParameterPinReference", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeSwitchBase, SwitchParameterPinReference), Z_Construct_UScriptStruct_FEdGraphPinReference, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeSwitchBase_Statics::NewProp_SwitchParameterPinReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeSwitchBase_Statics::NewProp_SwitchParameterPinReference_MetaData)) }; // 1910659421
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizableObjectNodeSwitchBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeSwitchBase_Statics::NewProp_OutputPinReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeSwitchBase_Statics::NewProp_ReloadingElementsNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeSwitchBase_Statics::NewProp_ReloadingElementsNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeSwitchBase_Statics::NewProp_SwitchParameterPinReference,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectNodeSwitchBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectNodeSwitchBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectNodeSwitchBase_Statics::ClassParams = {
		&UCustomizableObjectNodeSwitchBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCustomizableObjectNodeSwitchBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeSwitchBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeSwitchBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeSwitchBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizableObjectNodeSwitchBase()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectNodeSwitchBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectNodeSwitchBase.OuterSingleton, Z_Construct_UClass_UCustomizableObjectNodeSwitchBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectNodeSwitchBase.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectNodeSwitchBase>()
	{
		return UCustomizableObjectNodeSwitchBase::StaticClass();
	}
	UCustomizableObjectNodeSwitchBase::UCustomizableObjectNodeSwitchBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectNodeSwitchBase);
	UCustomizableObjectNodeSwitchBase::~UCustomizableObjectNodeSwitchBase() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UCustomizableObjectNodeSwitchBase)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeSwitchBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeSwitchBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableObjectNodeSwitchBase, UCustomizableObjectNodeSwitchBase::StaticClass, TEXT("UCustomizableObjectNodeSwitchBase"), &Z_Registration_Info_UClass_UCustomizableObjectNodeSwitchBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectNodeSwitchBase), 3550971231U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeSwitchBase_h_1084346763(TEXT("/Script/CustomizableObjectEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeSwitchBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeSwitchBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
