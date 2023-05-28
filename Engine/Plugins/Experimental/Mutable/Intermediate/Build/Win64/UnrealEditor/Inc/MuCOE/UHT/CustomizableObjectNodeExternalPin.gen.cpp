// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuCOE/Nodes/CustomizableObjectNodeExternalPin.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectNodeExternalPin() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableObject_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNode();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeExternalPin();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeExternalPin_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeRemapPinsByName();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeRemapPinsCustomExternalPin();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeRemapPinsCustomExternalPin_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectEditor();
// End Cross Module References
	void UCustomizableObjectNodeRemapPinsCustomExternalPin::StaticRegisterNativesUCustomizableObjectNodeRemapPinsCustomExternalPin()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectNodeRemapPinsCustomExternalPin);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeRemapPinsCustomExternalPin_NoRegister()
	{
		return UCustomizableObjectNodeRemapPinsCustomExternalPin::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectNodeRemapPinsCustomExternalPin_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectNodeRemapPinsCustomExternalPin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizableObjectNodeRemapPinsByName,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeRemapPinsCustomExternalPin_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Custom remap pins by name action.\n *\n * If the node can not find the exposed pin, set the external pin as deprecated.\n */" },
		{ "IncludePath", "MuCOE/Nodes/CustomizableObjectNodeExternalPin.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeExternalPin.h" },
		{ "ToolTip", "Custom remap pins by name action.\n\nIf the node can not find the exposed pin, set the external pin as deprecated." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectNodeRemapPinsCustomExternalPin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectNodeRemapPinsCustomExternalPin>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectNodeRemapPinsCustomExternalPin_Statics::ClassParams = {
		&UCustomizableObjectNodeRemapPinsCustomExternalPin::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeRemapPinsCustomExternalPin_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeRemapPinsCustomExternalPin_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizableObjectNodeRemapPinsCustomExternalPin()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectNodeRemapPinsCustomExternalPin.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectNodeRemapPinsCustomExternalPin.OuterSingleton, Z_Construct_UClass_UCustomizableObjectNodeRemapPinsCustomExternalPin_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectNodeRemapPinsCustomExternalPin.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectNodeRemapPinsCustomExternalPin>()
	{
		return UCustomizableObjectNodeRemapPinsCustomExternalPin::StaticClass();
	}
	UCustomizableObjectNodeRemapPinsCustomExternalPin::UCustomizableObjectNodeRemapPinsCustomExternalPin(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectNodeRemapPinsCustomExternalPin);
	UCustomizableObjectNodeRemapPinsCustomExternalPin::~UCustomizableObjectNodeRemapPinsCustomExternalPin() {}
	void UCustomizableObjectNodeExternalPin::StaticRegisterNativesUCustomizableObjectNodeExternalPin()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectNodeExternalPin);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeExternalPin_NoRegister()
	{
		return UCustomizableObjectNodeExternalPin::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectNodeExternalPin_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinType_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PinType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ExternalObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalObjectNodeId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalObjectNodeId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectNodeExternalPin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizableObjectNode,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeExternalPin_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuCOE/Nodes/CustomizableObjectNodeExternalPin.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeExternalPin.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeExternalPin_Statics::NewProp_PinType_MetaData[] = {
		{ "Comment", "// This is actually PinCategory\n" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeExternalPin.h" },
		{ "ToolTip", "This is actually PinCategory" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCustomizableObjectNodeExternalPin_Statics::NewProp_PinType = { "PinType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeExternalPin, PinType), METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeExternalPin_Statics::NewProp_PinType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeExternalPin_Statics::NewProp_PinType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeExternalPin_Statics::NewProp_ExternalObject_MetaData[] = {
		{ "Comment", "/** External Customizable Object which the linked Node Expose Pin belong to. */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeExternalPin.h" },
		{ "ToolTip", "External Customizable Object which the linked Node Expose Pin belong to." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCustomizableObjectNodeExternalPin_Statics::NewProp_ExternalObject = { "ExternalObject", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeExternalPin, ExternalObject), Z_Construct_UClass_UCustomizableObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeExternalPin_Statics::NewProp_ExternalObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeExternalPin_Statics::NewProp_ExternalObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeExternalPin_Statics::NewProp_ExternalObjectNodeId_MetaData[] = {
		{ "Comment", "/** Linked Node Expose Pin node guid. */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeExternalPin.h" },
		{ "ToolTip", "Linked Node Expose Pin node guid." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeExternalPin_Statics::NewProp_ExternalObjectNodeId = { "ExternalObjectNodeId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeExternalPin, ExternalObjectNodeId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeExternalPin_Statics::NewProp_ExternalObjectNodeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeExternalPin_Statics::NewProp_ExternalObjectNodeId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizableObjectNodeExternalPin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeExternalPin_Statics::NewProp_PinType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeExternalPin_Statics::NewProp_ExternalObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeExternalPin_Statics::NewProp_ExternalObjectNodeId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectNodeExternalPin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectNodeExternalPin>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectNodeExternalPin_Statics::ClassParams = {
		&UCustomizableObjectNodeExternalPin::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomizableObjectNodeExternalPin_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeExternalPin_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeExternalPin_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeExternalPin_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizableObjectNodeExternalPin()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectNodeExternalPin.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectNodeExternalPin.OuterSingleton, Z_Construct_UClass_UCustomizableObjectNodeExternalPin_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectNodeExternalPin.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectNodeExternalPin>()
	{
		return UCustomizableObjectNodeExternalPin::StaticClass();
	}
	UCustomizableObjectNodeExternalPin::UCustomizableObjectNodeExternalPin(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectNodeExternalPin);
	UCustomizableObjectNodeExternalPin::~UCustomizableObjectNodeExternalPin() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UCustomizableObjectNodeExternalPin)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeExternalPin_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeExternalPin_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableObjectNodeRemapPinsCustomExternalPin, UCustomizableObjectNodeRemapPinsCustomExternalPin::StaticClass, TEXT("UCustomizableObjectNodeRemapPinsCustomExternalPin"), &Z_Registration_Info_UClass_UCustomizableObjectNodeRemapPinsCustomExternalPin, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectNodeRemapPinsCustomExternalPin), 1106846938U) },
		{ Z_Construct_UClass_UCustomizableObjectNodeExternalPin, UCustomizableObjectNodeExternalPin::StaticClass, TEXT("UCustomizableObjectNodeExternalPin"), &Z_Registration_Info_UClass_UCustomizableObjectNodeExternalPin, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectNodeExternalPin), 2204757859U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeExternalPin_h_1145077040(TEXT("/Script/CustomizableObjectEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeExternalPin_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeExternalPin_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
