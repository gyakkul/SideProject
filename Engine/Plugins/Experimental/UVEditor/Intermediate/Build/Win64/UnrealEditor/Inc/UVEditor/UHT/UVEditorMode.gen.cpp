// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UVEditorMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUVEditorMode() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UToolTarget_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UEdMode();
	UPackage* Z_Construct_UPackage__Script_UVEditor();
	UVEDITOR_API UClass* Z_Construct_UClass_UUVEditorBackgroundPreview_NoRegister();
	UVEDITOR_API UClass* Z_Construct_UClass_UUVEditorGridProperties();
	UVEDITOR_API UClass* Z_Construct_UClass_UUVEditorGridProperties_NoRegister();
	UVEDITOR_API UClass* Z_Construct_UClass_UUVEditorMode();
	UVEDITOR_API UClass* Z_Construct_UClass_UUVEditorMode_NoRegister();
	UVEDITOR_API UClass* Z_Construct_UClass_UUVEditorUDIMProperties();
	UVEDITOR_API UClass* Z_Construct_UClass_UUVEditorUDIMProperties_NoRegister();
	UVEDITOR_API UEnum* Z_Construct_UEnum_UVEditor_EUVEditorModeActions();
	UVEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FUDIMSpecifier();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorToolMeshInput_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVToolAction_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVToolSelectionAPI_NoRegister();
// End Cross Module References
	void UUVEditorGridProperties::StaticRegisterNativesUUVEditorGridProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVEditorGridProperties);
	UClass* Z_Construct_UClass_UUVEditorGridProperties_NoRegister()
	{
		return UUVEditorGridProperties::StaticClass();
	}
	struct Z_Construct_UClass_UUVEditorGridProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawGrid_MetaData[];
#endif
		static void NewProp_bDrawGrid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawGrid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawRulers_MetaData[];
#endif
		static void NewProp_bDrawRulers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawRulers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVEditorGridProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorGridProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Visualization settings for the UUVEditorMode's Grid\n */" },
		{ "IncludePath", "UVEditorMode.h" },
		{ "ModuleRelativePath", "Public/UVEditorMode.h" },
		{ "ToolTip", "Visualization settings for the UUVEditorMode's Grid" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorGridProperties_Statics::NewProp_bDrawGrid_MetaData[] = {
		{ "Category", "Grid & Guides" },
		{ "Comment", "/** Should the grid be shown?*/" },
		{ "DisplayName", "Display Grid" },
		{ "ModuleRelativePath", "Public/UVEditorMode.h" },
		{ "ToolTip", "Should the grid be shown?" },
	};
#endif
	void Z_Construct_UClass_UUVEditorGridProperties_Statics::NewProp_bDrawGrid_SetBit(void* Obj)
	{
		((UUVEditorGridProperties*)Obj)->bDrawGrid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUVEditorGridProperties_Statics::NewProp_bDrawGrid = { "bDrawGrid", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUVEditorGridProperties), &Z_Construct_UClass_UUVEditorGridProperties_Statics::NewProp_bDrawGrid_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUVEditorGridProperties_Statics::NewProp_bDrawGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorGridProperties_Statics::NewProp_bDrawGrid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorGridProperties_Statics::NewProp_bDrawRulers_MetaData[] = {
		{ "Category", "Grid & Guides" },
		{ "Comment", "/** Should the grid rulers be shown?*/" },
		{ "DisplayName", "Display Rulers" },
		{ "ModuleRelativePath", "Public/UVEditorMode.h" },
		{ "ToolTip", "Should the grid rulers be shown?" },
	};
#endif
	void Z_Construct_UClass_UUVEditorGridProperties_Statics::NewProp_bDrawRulers_SetBit(void* Obj)
	{
		((UUVEditorGridProperties*)Obj)->bDrawRulers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUVEditorGridProperties_Statics::NewProp_bDrawRulers = { "bDrawRulers", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUVEditorGridProperties), &Z_Construct_UClass_UUVEditorGridProperties_Statics::NewProp_bDrawRulers_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUVEditorGridProperties_Statics::NewProp_bDrawRulers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorGridProperties_Statics::NewProp_bDrawRulers_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUVEditorGridProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorGridProperties_Statics::NewProp_bDrawGrid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorGridProperties_Statics::NewProp_bDrawRulers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVEditorGridProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVEditorGridProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVEditorGridProperties_Statics::ClassParams = {
		&UUVEditorGridProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUVEditorGridProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorGridProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UUVEditorGridProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorGridProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVEditorGridProperties()
	{
		if (!Z_Registration_Info_UClass_UUVEditorGridProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVEditorGridProperties.OuterSingleton, Z_Construct_UClass_UUVEditorGridProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVEditorGridProperties.OuterSingleton;
	}
	template<> UVEDITOR_API UClass* StaticClass<UUVEditorGridProperties>()
	{
		return UUVEditorGridProperties::StaticClass();
	}
	UUVEditorGridProperties::UUVEditorGridProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVEditorGridProperties);
	UUVEditorGridProperties::~UUVEditorGridProperties() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UDIMSpecifier;
class UScriptStruct* FUDIMSpecifier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UDIMSpecifier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UDIMSpecifier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUDIMSpecifier, (UObject*)Z_Construct_UPackage__Script_UVEditor(), TEXT("UDIMSpecifier"));
	}
	return Z_Registration_Info_UScriptStruct_UDIMSpecifier.OuterSingleton;
}
template<> UVEDITOR_API UScriptStruct* StaticStruct<FUDIMSpecifier>()
{
	return FUDIMSpecifier::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUDIMSpecifier_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UDIM_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UDIM;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UCoord_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UCoord;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VCoord_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VCoord;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUDIMSpecifier_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UVEditorMode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUDIMSpecifier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUDIMSpecifier>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUDIMSpecifier_Statics::NewProp_UDIM_MetaData[] = {
		{ "Category", "UDIM" },
		{ "ClampMin", "1001" },
		{ "ModuleRelativePath", "Public/UVEditorMode.h" },
		{ "UIMin", "1001" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUDIMSpecifier_Statics::NewProp_UDIM = { "UDIM", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUDIMSpecifier, UDIM), METADATA_PARAMS(Z_Construct_UScriptStruct_FUDIMSpecifier_Statics::NewProp_UDIM_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUDIMSpecifier_Statics::NewProp_UDIM_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUDIMSpecifier_Statics::NewProp_UCoord_MetaData[] = {
		{ "Category", "UDIM" },
		{ "DisplayName", "Block U Offset" },
		{ "ModuleRelativePath", "Public/UVEditorMode.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUDIMSpecifier_Statics::NewProp_UCoord = { "UCoord", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUDIMSpecifier, UCoord), METADATA_PARAMS(Z_Construct_UScriptStruct_FUDIMSpecifier_Statics::NewProp_UCoord_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUDIMSpecifier_Statics::NewProp_UCoord_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUDIMSpecifier_Statics::NewProp_VCoord_MetaData[] = {
		{ "Category", "UDIM" },
		{ "DisplayName", "Block V Offset" },
		{ "ModuleRelativePath", "Public/UVEditorMode.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUDIMSpecifier_Statics::NewProp_VCoord = { "VCoord", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUDIMSpecifier, VCoord), METADATA_PARAMS(Z_Construct_UScriptStruct_FUDIMSpecifier_Statics::NewProp_VCoord_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUDIMSpecifier_Statics::NewProp_VCoord_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUDIMSpecifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUDIMSpecifier_Statics::NewProp_UDIM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUDIMSpecifier_Statics::NewProp_UCoord,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUDIMSpecifier_Statics::NewProp_VCoord,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUDIMSpecifier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditor,
		nullptr,
		&NewStructOps,
		"UDIMSpecifier",
		sizeof(FUDIMSpecifier),
		alignof(FUDIMSpecifier),
		Z_Construct_UScriptStruct_FUDIMSpecifier_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUDIMSpecifier_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUDIMSpecifier_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUDIMSpecifier_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUDIMSpecifier()
	{
		if (!Z_Registration_Info_UScriptStruct_UDIMSpecifier.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UDIMSpecifier.InnerSingleton, Z_Construct_UScriptStruct_FUDIMSpecifier_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UDIMSpecifier.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUVEditorModeActions;
	static UEnum* EUVEditorModeActions_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUVEditorModeActions.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUVEditorModeActions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UVEditor_EUVEditorModeActions, (UObject*)Z_Construct_UPackage__Script_UVEditor(), TEXT("EUVEditorModeActions"));
		}
		return Z_Registration_Info_UEnum_EUVEditorModeActions.OuterSingleton;
	}
	template<> UVEDITOR_API UEnum* StaticEnum<EUVEditorModeActions>()
	{
		return EUVEditorModeActions_StaticEnum();
	}
	struct Z_Construct_UEnum_UVEditor_EUVEditorModeActions_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UVEditor_EUVEditorModeActions_Statics::Enumerators[] = {
		{ "EUVEditorModeActions::NoAction", (int64)EUVEditorModeActions::NoAction },
		{ "EUVEditorModeActions::ConfigureUDIMsFromAsset", (int64)EUVEditorModeActions::ConfigureUDIMsFromAsset },
		{ "EUVEditorModeActions::ConfigureUDIMsFromTexture", (int64)EUVEditorModeActions::ConfigureUDIMsFromTexture },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UVEditor_EUVEditorModeActions_Statics::Enum_MetaDataParams[] = {
		{ "ConfigureUDIMsFromAsset.Name", "EUVEditorModeActions::ConfigureUDIMsFromAsset" },
		{ "ConfigureUDIMsFromTexture.Name", "EUVEditorModeActions::ConfigureUDIMsFromTexture" },
		{ "ModuleRelativePath", "Public/UVEditorMode.h" },
		{ "NoAction.Name", "EUVEditorModeActions::NoAction" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UVEditor_EUVEditorModeActions_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UVEditor,
		nullptr,
		"EUVEditorModeActions",
		"EUVEditorModeActions",
		Z_Construct_UEnum_UVEditor_EUVEditorModeActions_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UVEditor_EUVEditorModeActions_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UVEditor_EUVEditorModeActions_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UVEditor_EUVEditorModeActions_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UVEditor_EUVEditorModeActions()
	{
		if (!Z_Registration_Info_UEnum_EUVEditorModeActions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUVEditorModeActions.InnerSingleton, Z_Construct_UEnum_UVEditor_EUVEditorModeActions_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUVEditorModeActions.InnerSingleton;
	}
	DEFINE_FUNCTION(UUVEditorUDIMProperties::execSetUDIMsFromTexture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUDIMsFromTexture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUVEditorUDIMProperties::execSetUDIMsFromAsset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUDIMsFromAsset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUVEditorUDIMProperties::execAssetByIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AssetByIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUVEditorUDIMProperties::execGetAssetNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetAssetNames();
		P_NATIVE_END;
	}
	void UUVEditorUDIMProperties::StaticRegisterNativesUUVEditorUDIMProperties()
	{
		UClass* Class = UUVEditorUDIMProperties::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AssetByIndex", &UUVEditorUDIMProperties::execAssetByIndex },
			{ "GetAssetNames", &UUVEditorUDIMProperties::execGetAssetNames },
			{ "SetUDIMsFromAsset", &UUVEditorUDIMProperties::execSetUDIMsFromAsset },
			{ "SetUDIMsFromTexture", &UUVEditorUDIMProperties::execSetUDIMsFromTexture },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUVEditorUDIMProperties_AssetByIndex_Statics
	{
		struct UVEditorUDIMProperties_eventAssetByIndex_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUVEditorUDIMProperties_AssetByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVEditorUDIMProperties_eventAssetByIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUVEditorUDIMProperties_AssetByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUVEditorUDIMProperties_AssetByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUVEditorUDIMProperties_AssetByIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UVEditorMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUVEditorUDIMProperties_AssetByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUVEditorUDIMProperties, nullptr, "AssetByIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUVEditorUDIMProperties_AssetByIndex_Statics::UVEditorUDIMProperties_eventAssetByIndex_Parms), Z_Construct_UFunction_UUVEditorUDIMProperties_AssetByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUVEditorUDIMProperties_AssetByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUVEditorUDIMProperties_AssetByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUVEditorUDIMProperties_AssetByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUVEditorUDIMProperties_AssetByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUVEditorUDIMProperties_AssetByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUVEditorUDIMProperties_GetAssetNames_Statics
	{
		struct UVEditorUDIMProperties_eventGetAssetNames_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUVEditorUDIMProperties_GetAssetNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUVEditorUDIMProperties_GetAssetNames_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUVEditorUDIMProperties_GetAssetNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVEditorUDIMProperties_eventGetAssetNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UUVEditorUDIMProperties_GetAssetNames_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUVEditorUDIMProperties_GetAssetNames_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUVEditorUDIMProperties_GetAssetNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUVEditorUDIMProperties_GetAssetNames_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUVEditorUDIMProperties_GetAssetNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUVEditorUDIMProperties_GetAssetNames_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UVEditorMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUVEditorUDIMProperties_GetAssetNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUVEditorUDIMProperties, nullptr, "GetAssetNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUVEditorUDIMProperties_GetAssetNames_Statics::UVEditorUDIMProperties_eventGetAssetNames_Parms), Z_Construct_UFunction_UUVEditorUDIMProperties_GetAssetNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUVEditorUDIMProperties_GetAssetNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUVEditorUDIMProperties_GetAssetNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUVEditorUDIMProperties_GetAssetNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUVEditorUDIMProperties_GetAssetNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUVEditorUDIMProperties_GetAssetNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUVEditorUDIMProperties_SetUDIMsFromAsset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUVEditorUDIMProperties_SetUDIMsFromAsset_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "UDIM" },
		{ "Comment", "/** Set UDIM Layout from selected asset's UVs */" },
		{ "ModuleRelativePath", "Public/UVEditorMode.h" },
		{ "ToolTip", "Set UDIM Layout from selected asset's UVs" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUVEditorUDIMProperties_SetUDIMsFromAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUVEditorUDIMProperties, nullptr, "SetUDIMsFromAsset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUVEditorUDIMProperties_SetUDIMsFromAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUVEditorUDIMProperties_SetUDIMsFromAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUVEditorUDIMProperties_SetUDIMsFromAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUVEditorUDIMProperties_SetUDIMsFromAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUVEditorUDIMProperties_SetUDIMsFromTexture_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUVEditorUDIMProperties_SetUDIMsFromTexture_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "UDIM" },
		{ "Comment", "/** Set UDIM Layout from selected texture asset */" },
		{ "ModuleRelativePath", "Public/UVEditorMode.h" },
		{ "ToolTip", "Set UDIM Layout from selected texture asset" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUVEditorUDIMProperties_SetUDIMsFromTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUVEditorUDIMProperties, nullptr, "SetUDIMsFromTexture", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUVEditorUDIMProperties_SetUDIMsFromTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUVEditorUDIMProperties_SetUDIMsFromTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUVEditorUDIMProperties_SetUDIMsFromTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUVEditorUDIMProperties_SetUDIMsFromTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVEditorUDIMProperties);
	UClass* Z_Construct_UClass_UUVEditorUDIMProperties_NoRegister()
	{
		return UUVEditorUDIMProperties::StaticClass();
	}
	struct Z_Construct_UClass_UUVEditorUDIMProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UDIMSourceAsset_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UDIMSourceAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UDIMSourceTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UDIMSourceTexture;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveUDIMs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveUDIMs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveUDIMs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVEditorUDIMProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUVEditorUDIMProperties_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUVEditorUDIMProperties_AssetByIndex, "AssetByIndex" }, // 831199427
		{ &Z_Construct_UFunction_UUVEditorUDIMProperties_GetAssetNames, "GetAssetNames" }, // 376038180
		{ &Z_Construct_UFunction_UUVEditorUDIMProperties_SetUDIMsFromAsset, "SetUDIMsFromAsset" }, // 2186311093
		{ &Z_Construct_UFunction_UUVEditorUDIMProperties_SetUDIMsFromTexture, "SetUDIMsFromTexture" }, // 1595855914
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorUDIMProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for UDIMs in the UVEditor\n */" },
		{ "IncludePath", "UVEditorMode.h" },
		{ "ModuleRelativePath", "Public/UVEditorMode.h" },
		{ "ToolTip", "Settings for UDIMs in the UVEditor" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorUDIMProperties_Statics::NewProp_UDIMSourceAsset_MetaData[] = {
		{ "Category", "UDIM" },
		{ "DisplayName", "UDIM Source Mesh" },
		{ "GetOptions", "GetAssetNames" },
		{ "ModuleRelativePath", "Public/UVEditorMode.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUVEditorUDIMProperties_Statics::NewProp_UDIMSourceAsset = { "UDIMSourceAsset", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorUDIMProperties, UDIMSourceAsset), METADATA_PARAMS(Z_Construct_UClass_UUVEditorUDIMProperties_Statics::NewProp_UDIMSourceAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorUDIMProperties_Statics::NewProp_UDIMSourceAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorUDIMProperties_Statics::NewProp_UDIMSourceTexture_MetaData[] = {
		{ "Category", "UDIM" },
		{ "Comment", "/** Texture asset to source UDIM information from */" },
		{ "ModuleRelativePath", "Public/UVEditorMode.h" },
		{ "ToolTip", "Texture asset to source UDIM information from" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVEditorUDIMProperties_Statics::NewProp_UDIMSourceTexture = { "UDIMSourceTexture", nullptr, (EPropertyFlags)0x0014000000002001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorUDIMProperties, UDIMSourceTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVEditorUDIMProperties_Statics::NewProp_UDIMSourceTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorUDIMProperties_Statics::NewProp_UDIMSourceTexture_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUVEditorUDIMProperties_Statics::NewProp_ActiveUDIMs_Inner = { "ActiveUDIMs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FUDIMSpecifier, METADATA_PARAMS(nullptr, 0) }; // 1413956426
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorUDIMProperties_Statics::NewProp_ActiveUDIMs_MetaData[] = {
		{ "Category", "UDIM" },
		{ "Comment", "/** Currently active UDIM set */" },
		{ "ModuleRelativePath", "Public/UVEditorMode.h" },
		{ "TitleProperty", "UDIM" },
		{ "ToolTip", "Currently active UDIM set" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUVEditorUDIMProperties_Statics::NewProp_ActiveUDIMs = { "ActiveUDIMs", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorUDIMProperties, ActiveUDIMs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUVEditorUDIMProperties_Statics::NewProp_ActiveUDIMs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorUDIMProperties_Statics::NewProp_ActiveUDIMs_MetaData)) }; // 1413956426
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUVEditorUDIMProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorUDIMProperties_Statics::NewProp_UDIMSourceAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorUDIMProperties_Statics::NewProp_UDIMSourceTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorUDIMProperties_Statics::NewProp_ActiveUDIMs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorUDIMProperties_Statics::NewProp_ActiveUDIMs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVEditorUDIMProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVEditorUDIMProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVEditorUDIMProperties_Statics::ClassParams = {
		&UUVEditorUDIMProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUVEditorUDIMProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorUDIMProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UUVEditorUDIMProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorUDIMProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVEditorUDIMProperties()
	{
		if (!Z_Registration_Info_UClass_UUVEditorUDIMProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVEditorUDIMProperties.OuterSingleton, Z_Construct_UClass_UUVEditorUDIMProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVEditorUDIMProperties.OuterSingleton;
	}
	template<> UVEDITOR_API UClass* StaticClass<UUVEditorUDIMProperties>()
	{
		return UUVEditorUDIMProperties::StaticClass();
	}
	UUVEditorUDIMProperties::UUVEditorUDIMProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVEditorUDIMProperties);
	UUVEditorUDIMProperties::~UUVEditorUDIMProperties() {}
	void UUVEditorMode::StaticRegisterNativesUUVEditorMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVEditorMode);
	UClass* Z_Construct_UClass_UUVEditorMode_NoRegister()
	{
		return UUVEditorMode::StaticClass();
	}
	struct Z_Construct_UClass_UUVEditorMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundVisualization_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BackgroundVisualization;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVEditorGridProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UVEditorGridProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVEditorUDIMProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UVEditorUDIMProperties;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RegisteredActions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredActions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RegisteredActions;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OriginalObjectsToEdit_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalObjectsToEdit_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OriginalObjectsToEdit;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ToolTargets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolTargets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ToolTargets;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ToolInputObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolInputObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ToolInputObjects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LivePreviewWorld_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LivePreviewWorld;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionAPI_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SelectionAPI;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PropertyObjectsToTick_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyObjectsToTick_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertyObjectsToTick;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVEditorMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdMode,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The UV editor mode is the mode used in the UV asset editor. It holds most of the inter-tool state.\n * We put things in a mode instead of directly into the asset editor in case we want to someday use the mode\n * in multiple asset editors.\n */" },
		{ "IncludePath", "UVEditorMode.h" },
		{ "ModuleRelativePath", "Public/UVEditorMode.h" },
		{ "ToolTip", "The UV editor mode is the mode used in the UV asset editor. It holds most of the inter-tool state.\nWe put things in a mode instead of directly into the asset editor in case we want to someday use the mode\nin multiple asset editors." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorMode_Statics::NewProp_BackgroundVisualization_MetaData[] = {
		{ "Comment", "// Holds the background visualiztion\n" },
		{ "ModuleRelativePath", "Public/UVEditorMode.h" },
		{ "ToolTip", "Holds the background visualiztion" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVEditorMode_Statics::NewProp_BackgroundVisualization = { "BackgroundVisualization", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorMode, BackgroundVisualization), Z_Construct_UClass_UUVEditorBackgroundPreview_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVEditorMode_Statics::NewProp_BackgroundVisualization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorMode_Statics::NewProp_BackgroundVisualization_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorMode_Statics::NewProp_UVEditorGridProperties_MetaData[] = {
		{ "Comment", "// Hold a settings object to configure the grid\n" },
		{ "ModuleRelativePath", "Public/UVEditorMode.h" },
		{ "ToolTip", "Hold a settings object to configure the grid" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVEditorMode_Statics::NewProp_UVEditorGridProperties = { "UVEditorGridProperties", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorMode, UVEditorGridProperties), Z_Construct_UClass_UUVEditorGridProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVEditorMode_Statics::NewProp_UVEditorGridProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorMode_Statics::NewProp_UVEditorGridProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorMode_Statics::NewProp_UVEditorUDIMProperties_MetaData[] = {
		{ "Comment", "// Hold a settings object to configure the UDIMs\n" },
		{ "ModuleRelativePath", "Public/UVEditorMode.h" },
		{ "ToolTip", "Hold a settings object to configure the UDIMs" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVEditorMode_Statics::NewProp_UVEditorUDIMProperties = { "UVEditorUDIMProperties", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorMode, UVEditorUDIMProperties), Z_Construct_UClass_UUVEditorUDIMProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVEditorMode_Statics::NewProp_UVEditorUDIMProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorMode_Statics::NewProp_UVEditorUDIMProperties_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVEditorMode_Statics::NewProp_RegisteredActions_Inner = { "RegisteredActions", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UUVToolAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorMode_Statics::NewProp_RegisteredActions_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVEditorMode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUVEditorMode_Statics::NewProp_RegisteredActions = { "RegisteredActions", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorMode, RegisteredActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUVEditorMode_Statics::NewProp_RegisteredActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorMode_Statics::NewProp_RegisteredActions_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVEditorMode_Statics::NewProp_OriginalObjectsToEdit_Inner = { "OriginalObjectsToEdit", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorMode_Statics::NewProp_OriginalObjectsToEdit_MetaData[] = {
		{ "Comment", "/**\n\x09 * Stores original input objects, for instance UStaticMesh pointers. AssetIDs on tool input \n\x09 * objects are indices into this array (and ones that are 1:1 with it)\n\x09 */" },
		{ "ModuleRelativePath", "Public/UVEditorMode.h" },
		{ "ToolTip", "Stores original input objects, for instance UStaticMesh pointers. AssetIDs on tool input\nobjects are indices into this array (and ones that are 1:1 with it)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUVEditorMode_Statics::NewProp_OriginalObjectsToEdit = { "OriginalObjectsToEdit", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorMode, OriginalObjectsToEdit), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUVEditorMode_Statics::NewProp_OriginalObjectsToEdit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorMode_Statics::NewProp_OriginalObjectsToEdit_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVEditorMode_Statics::NewProp_ToolTargets_Inner = { "ToolTargets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UToolTarget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorMode_Statics::NewProp_ToolTargets_MetaData[] = {
		{ "Comment", "/**\n\x09 * Tool targets created from OriginalObjectsToEdit (and 1:1 with that array) that provide\n\x09 * us with dynamic meshes whose UV layers we unwrap.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UVEditorMode.h" },
		{ "ToolTip", "Tool targets created from OriginalObjectsToEdit (and 1:1 with that array) that provide\nus with dynamic meshes whose UV layers we unwrap." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUVEditorMode_Statics::NewProp_ToolTargets = { "ToolTargets", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorMode, ToolTargets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUVEditorMode_Statics::NewProp_ToolTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorMode_Statics::NewProp_ToolTargets_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVEditorMode_Statics::NewProp_ToolInputObjects_Inner = { "ToolInputObjects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UUVEditorToolMeshInput_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorMode_Statics::NewProp_ToolInputObjects_MetaData[] = {
		{ "Comment", "/**\n\x09 * Input objects we give to the tools, one per displayed UV layer. This includes pointers\n\x09 * to the applied meshes, but also contains the unwrapped mesh and preview. These should\n\x09 * not be assumed to be the same length as the asset arrays in case we someday do not\n\x09 * display exactly a single layer per asset.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UVEditorMode.h" },
		{ "ToolTip", "Input objects we give to the tools, one per displayed UV layer. This includes pointers\nto the applied meshes, but also contains the unwrapped mesh and preview. These should\nnot be assumed to be the same length as the asset arrays in case we someday do not\ndisplay exactly a single layer per asset." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUVEditorMode_Statics::NewProp_ToolInputObjects = { "ToolInputObjects", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorMode, ToolInputObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUVEditorMode_Statics::NewProp_ToolInputObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorMode_Statics::NewProp_ToolInputObjects_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorMode_Statics::NewProp_LivePreviewWorld_MetaData[] = {
		{ "Comment", "// Here largely for convenience to avoid having to pass it around functions.\n" },
		{ "ModuleRelativePath", "Public/UVEditorMode.h" },
		{ "ToolTip", "Here largely for convenience to avoid having to pass it around functions." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVEditorMode_Statics::NewProp_LivePreviewWorld = { "LivePreviewWorld", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorMode, LivePreviewWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVEditorMode_Statics::NewProp_LivePreviewWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorMode_Statics::NewProp_LivePreviewWorld_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorMode_Statics::NewProp_SelectionAPI_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVEditorMode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVEditorMode_Statics::NewProp_SelectionAPI = { "SelectionAPI", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorMode, SelectionAPI), Z_Construct_UClass_UUVToolSelectionAPI_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVEditorMode_Statics::NewProp_SelectionAPI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorMode_Statics::NewProp_SelectionAPI_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVEditorMode_Statics::NewProp_PropertyObjectsToTick_Inner = { "PropertyObjectsToTick", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UInteractiveToolPropertySet_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorMode_Statics::NewProp_PropertyObjectsToTick_MetaData[] = {
		{ "Comment", "/**\n\x09 * Mode-level property objects (visible or not) that get ticked.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UVEditorMode.h" },
		{ "ToolTip", "Mode-level property objects (visible or not) that get ticked." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUVEditorMode_Statics::NewProp_PropertyObjectsToTick = { "PropertyObjectsToTick", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorMode, PropertyObjectsToTick), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUVEditorMode_Statics::NewProp_PropertyObjectsToTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorMode_Statics::NewProp_PropertyObjectsToTick_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUVEditorMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorMode_Statics::NewProp_BackgroundVisualization,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorMode_Statics::NewProp_UVEditorGridProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorMode_Statics::NewProp_UVEditorUDIMProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorMode_Statics::NewProp_RegisteredActions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorMode_Statics::NewProp_RegisteredActions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorMode_Statics::NewProp_OriginalObjectsToEdit_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorMode_Statics::NewProp_OriginalObjectsToEdit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorMode_Statics::NewProp_ToolTargets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorMode_Statics::NewProp_ToolTargets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorMode_Statics::NewProp_ToolInputObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorMode_Statics::NewProp_ToolInputObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorMode_Statics::NewProp_LivePreviewWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorMode_Statics::NewProp_SelectionAPI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorMode_Statics::NewProp_PropertyObjectsToTick_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorMode_Statics::NewProp_PropertyObjectsToTick,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVEditorMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVEditorMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVEditorMode_Statics::ClassParams = {
		&UUVEditorMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUVEditorMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorMode_Statics::PropPointers),
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UUVEditorMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVEditorMode()
	{
		if (!Z_Registration_Info_UClass_UUVEditorMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVEditorMode.OuterSingleton, Z_Construct_UClass_UUVEditorMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVEditorMode.OuterSingleton;
	}
	template<> UVEDITOR_API UClass* StaticClass<UUVEditorMode>()
	{
		return UUVEditorMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVEditorMode);
	UUVEditorMode::~UUVEditorMode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditor_Public_UVEditorMode_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditor_Public_UVEditorMode_h_Statics::EnumInfo[] = {
		{ EUVEditorModeActions_StaticEnum, TEXT("EUVEditorModeActions"), &Z_Registration_Info_UEnum_EUVEditorModeActions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 87336930U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditor_Public_UVEditorMode_h_Statics::ScriptStructInfo[] = {
		{ FUDIMSpecifier::StaticStruct, Z_Construct_UScriptStruct_FUDIMSpecifier_Statics::NewStructOps, TEXT("UDIMSpecifier"), &Z_Registration_Info_UScriptStruct_UDIMSpecifier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUDIMSpecifier), 1413956426U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditor_Public_UVEditorMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUVEditorGridProperties, UUVEditorGridProperties::StaticClass, TEXT("UUVEditorGridProperties"), &Z_Registration_Info_UClass_UUVEditorGridProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVEditorGridProperties), 676201815U) },
		{ Z_Construct_UClass_UUVEditorUDIMProperties, UUVEditorUDIMProperties::StaticClass, TEXT("UUVEditorUDIMProperties"), &Z_Registration_Info_UClass_UUVEditorUDIMProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVEditorUDIMProperties), 204434595U) },
		{ Z_Construct_UClass_UUVEditorMode, UUVEditorMode::StaticClass, TEXT("UUVEditorMode"), &Z_Registration_Info_UClass_UUVEditorMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVEditorMode), 2744002256U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditor_Public_UVEditorMode_h_1897554047(TEXT("/Script/UVEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditor_Public_UVEditorMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditor_Public_UVEditorMode_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditor_Public_UVEditorMode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditor_Public_UVEditorMode_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditor_Public_UVEditorMode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditor_Public_UVEditorMode_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
