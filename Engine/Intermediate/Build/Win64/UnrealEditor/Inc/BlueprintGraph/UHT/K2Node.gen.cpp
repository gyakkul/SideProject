// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_NoRegister();
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FOptionalPinFromProperty();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptionalPinFromProperty;
class UScriptStruct* FOptionalPinFromProperty::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptionalPinFromProperty.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptionalPinFromProperty.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptionalPinFromProperty, (UObject*)Z_Construct_UPackage__Script_BlueprintGraph(), TEXT("OptionalPinFromProperty"));
	}
	return Z_Registration_Info_UScriptStruct_OptionalPinFromProperty.OuterSingleton;
}
template<> BLUEPRINTGRAPH_API UScriptStruct* StaticStruct<FOptionalPinFromProperty>()
{
	return FOptionalPinFromProperty::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyFriendlyName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyFriendlyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyTooltip_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_PropertyTooltip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CategoryName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowPin_MetaData[];
#endif
		static void NewProp_bShowPin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowPin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanToggleVisibility_MetaData[];
#endif
		static void NewProp_bCanToggleVisibility_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanToggleVisibility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPropertyIsCustomized_MetaData[];
#endif
		static void NewProp_bPropertyIsCustomized_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPropertyIsCustomized;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasOverridePin_MetaData[];
#endif
		static void NewProp_bHasOverridePin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasOverridePin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsMarkedForAdvancedDisplay_MetaData[];
#endif
		static void NewProp_bIsMarkedForAdvancedDisplay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMarkedForAdvancedDisplay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsOverrideEnabled_MetaData[];
#endif
		static void NewProp_bIsOverrideEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOverrideEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSetValuePinVisible_MetaData[];
#endif
		static void NewProp_bIsSetValuePinVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSetValuePinVisible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsOverridePinVisible_MetaData[];
#endif
		static void NewProp_bIsOverridePinVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOverridePinVisible;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/K2Node.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptionalPinFromProperty>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_PropertyName_MetaData[] = {
		{ "Category", "OptionalPin" },
		{ "ModuleRelativePath", "Classes/K2Node.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOptionalPinFromProperty, PropertyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_PropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_PropertyName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_PropertyFriendlyName_MetaData[] = {
		{ "Category", "OptionalPin" },
		{ "ModuleRelativePath", "Classes/K2Node.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_PropertyFriendlyName = { "PropertyFriendlyName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOptionalPinFromProperty, PropertyFriendlyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_PropertyFriendlyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_PropertyFriendlyName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_PropertyTooltip_MetaData[] = {
		{ "Category", "OptionalPin" },
		{ "ModuleRelativePath", "Classes/K2Node.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_PropertyTooltip = { "PropertyTooltip", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOptionalPinFromProperty, PropertyTooltip), METADATA_PARAMS(Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_PropertyTooltip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_PropertyTooltip_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_CategoryName_MetaData[] = {
		{ "Category", "OptionalPin" },
		{ "ModuleRelativePath", "Classes/K2Node.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOptionalPinFromProperty, CategoryName), METADATA_PARAMS(Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_CategoryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_CategoryName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bShowPin_MetaData[] = {
		{ "Category", "OptionalPin" },
		{ "ModuleRelativePath", "Classes/K2Node.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bShowPin_SetBit(void* Obj)
	{
		((FOptionalPinFromProperty*)Obj)->bShowPin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bShowPin = { "bShowPin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FOptionalPinFromProperty), &Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bShowPin_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bShowPin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bShowPin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bCanToggleVisibility_MetaData[] = {
		{ "Category", "OptionalPin" },
		{ "ModuleRelativePath", "Classes/K2Node.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bCanToggleVisibility_SetBit(void* Obj)
	{
		((FOptionalPinFromProperty*)Obj)->bCanToggleVisibility = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bCanToggleVisibility = { "bCanToggleVisibility", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FOptionalPinFromProperty), &Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bCanToggleVisibility_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bCanToggleVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bCanToggleVisibility_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bPropertyIsCustomized_MetaData[] = {
		{ "Category", "OptionalPin" },
		{ "ModuleRelativePath", "Classes/K2Node.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bPropertyIsCustomized_SetBit(void* Obj)
	{
		((FOptionalPinFromProperty*)Obj)->bPropertyIsCustomized = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bPropertyIsCustomized = { "bPropertyIsCustomized", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FOptionalPinFromProperty), &Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bPropertyIsCustomized_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bPropertyIsCustomized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bPropertyIsCustomized_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bHasOverridePin_MetaData[] = {
		{ "Category", "OptionalPin" },
		{ "ModuleRelativePath", "Classes/K2Node.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bHasOverridePin_SetBit(void* Obj)
	{
		((FOptionalPinFromProperty*)Obj)->bHasOverridePin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bHasOverridePin = { "bHasOverridePin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FOptionalPinFromProperty), &Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bHasOverridePin_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bHasOverridePin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bHasOverridePin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bIsMarkedForAdvancedDisplay_MetaData[] = {
		{ "Category", "OptionalPin" },
		{ "ModuleRelativePath", "Classes/K2Node.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bIsMarkedForAdvancedDisplay_SetBit(void* Obj)
	{
		((FOptionalPinFromProperty*)Obj)->bIsMarkedForAdvancedDisplay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bIsMarkedForAdvancedDisplay = { "bIsMarkedForAdvancedDisplay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FOptionalPinFromProperty), &Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bIsMarkedForAdvancedDisplay_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bIsMarkedForAdvancedDisplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bIsMarkedForAdvancedDisplay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bIsOverrideEnabled_MetaData[] = {
		{ "Category", "OptionalPin" },
		{ "Comment", "/** TRUE if the override value is enabled for use */" },
		{ "ModuleRelativePath", "Classes/K2Node.h" },
		{ "ToolTip", "TRUE if the override value is enabled for use" },
	};
#endif
	void Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bIsOverrideEnabled_SetBit(void* Obj)
	{
		((FOptionalPinFromProperty*)Obj)->bIsOverrideEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bIsOverrideEnabled = { "bIsOverrideEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FOptionalPinFromProperty), &Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bIsOverrideEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bIsOverrideEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bIsOverrideEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bIsSetValuePinVisible_MetaData[] = {
		{ "Category", "OptionalPin" },
		{ "Comment", "/** TRUE if the override value should be set through this pin */" },
		{ "ModuleRelativePath", "Classes/K2Node.h" },
		{ "ToolTip", "TRUE if the override value should be set through this pin" },
	};
#endif
	void Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bIsSetValuePinVisible_SetBit(void* Obj)
	{
		((FOptionalPinFromProperty*)Obj)->bIsSetValuePinVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bIsSetValuePinVisible = { "bIsSetValuePinVisible", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FOptionalPinFromProperty), &Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bIsSetValuePinVisible_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bIsSetValuePinVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bIsSetValuePinVisible_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bIsOverridePinVisible_MetaData[] = {
		{ "Category", "OptionalPin" },
		{ "Comment", "/** TRUE if the override pin is visible */" },
		{ "ModuleRelativePath", "Classes/K2Node.h" },
		{ "ToolTip", "TRUE if the override pin is visible" },
	};
#endif
	void Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bIsOverridePinVisible_SetBit(void* Obj)
	{
		((FOptionalPinFromProperty*)Obj)->bIsOverridePinVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bIsOverridePinVisible = { "bIsOverridePinVisible", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FOptionalPinFromProperty), &Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bIsOverridePinVisible_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bIsOverridePinVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bIsOverridePinVisible_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_PropertyFriendlyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_PropertyTooltip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_CategoryName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bShowPin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bCanToggleVisibility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bPropertyIsCustomized,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bHasOverridePin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bIsMarkedForAdvancedDisplay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bIsOverrideEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bIsSetValuePinVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bIsOverridePinVisible,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
		nullptr,
		&NewStructOps,
		"OptionalPinFromProperty",
		sizeof(FOptionalPinFromProperty),
		alignof(FOptionalPinFromProperty),
		Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptionalPinFromProperty()
	{
		if (!Z_Registration_Info_UScriptStruct_OptionalPinFromProperty.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptionalPinFromProperty.InnerSingleton, Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OptionalPinFromProperty.InnerSingleton;
	}
	void UK2Node::StaticRegisterNativesUK2Node()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node);
	UClass* Z_Construct_UClass_UK2Node_NoRegister()
	{
		return UK2Node::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Abstract base class of all blueprint graph nodes.\n */" },
		{ "IncludePath", "K2Node.h" },
		{ "ModuleRelativePath", "Classes/K2Node.h" },
		{ "ToolTip", "Abstract base class of all blueprint graph nodes." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_Statics::ClassParams = {
		&UK2Node::StaticClass,
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
		0x000800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node()
	{
		if (!Z_Registration_Info_UClass_UK2Node.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node.OuterSingleton, Z_Construct_UClass_UK2Node_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node>()
	{
		return UK2Node::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node);
	UK2Node::~UK2Node() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UK2Node)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_h_Statics::ScriptStructInfo[] = {
		{ FOptionalPinFromProperty::StaticStruct, Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewStructOps, TEXT("OptionalPinFromProperty"), &Z_Registration_Info_UScriptStruct_OptionalPinFromProperty, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptionalPinFromProperty), 3358763809U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node, UK2Node::StaticClass, TEXT("UK2Node"), &Z_Registration_Info_UClass_UK2Node, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node), 2825424829U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_h_2743723449(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
