// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LayoutScripts/DMXPixelMappingLayoutScript.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXPixelMappingLayoutScript() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingLayoutScript();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingLayoutScript_NoRegister();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingOutputComponent_NoRegister();
	DMXPIXELMAPPINGRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXPixelMappingLayoutToken();
	UPackage* Z_Construct_UPackage__Script_DMXPixelMappingRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DMXPixelMappingLayoutToken;
class UScriptStruct* FDMXPixelMappingLayoutToken::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DMXPixelMappingLayoutToken.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DMXPixelMappingLayoutToken.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDMXPixelMappingLayoutToken, (UObject*)Z_Construct_UPackage__Script_DMXPixelMappingRuntime(), TEXT("DMXPixelMappingLayoutToken"));
	}
	return Z_Registration_Info_UScriptStruct_DMXPixelMappingLayoutToken.OuterSingleton;
}
template<> DMXPIXELMAPPINGRUNTIME_API UScriptStruct* StaticStruct<FDMXPixelMappingLayoutToken>()
{
	return FDMXPixelMappingLayoutToken::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDMXPixelMappingLayoutToken_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PositionX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PositionY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SizeX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SizeY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Component;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FixtureID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FixtureID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXPixelMappingLayoutToken_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** The position and size of a comoponent in a layout */" },
		{ "ModuleRelativePath", "Public/LayoutScripts/DMXPixelMappingLayoutScript.h" },
		{ "ToolTip", "The position and size of a comoponent in a layout" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDMXPixelMappingLayoutToken_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDMXPixelMappingLayoutToken>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXPixelMappingLayoutToken_Statics::NewProp_PositionX_MetaData[] = {
		{ "Category", "Layout Script" },
		{ "Comment", "/** The position of the component on the X-Axis */" },
		{ "ModuleRelativePath", "Public/LayoutScripts/DMXPixelMappingLayoutScript.h" },
		{ "ToolTip", "The position of the component on the X-Axis" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDMXPixelMappingLayoutToken_Statics::NewProp_PositionX = { "PositionX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXPixelMappingLayoutToken, PositionX), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXPixelMappingLayoutToken_Statics::NewProp_PositionX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXPixelMappingLayoutToken_Statics::NewProp_PositionX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXPixelMappingLayoutToken_Statics::NewProp_PositionY_MetaData[] = {
		{ "Category", "Layout Script" },
		{ "Comment", "/** The position of the component on the Y-Axis */" },
		{ "ModuleRelativePath", "Public/LayoutScripts/DMXPixelMappingLayoutScript.h" },
		{ "ToolTip", "The position of the component on the Y-Axis" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDMXPixelMappingLayoutToken_Statics::NewProp_PositionY = { "PositionY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXPixelMappingLayoutToken, PositionY), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXPixelMappingLayoutToken_Statics::NewProp_PositionY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXPixelMappingLayoutToken_Statics::NewProp_PositionY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXPixelMappingLayoutToken_Statics::NewProp_SizeX_MetaData[] = {
		{ "Category", "Layout Script" },
		{ "Comment", "/** The size of the component on the X-Axis */" },
		{ "ModuleRelativePath", "Public/LayoutScripts/DMXPixelMappingLayoutScript.h" },
		{ "ToolTip", "The size of the component on the X-Axis" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDMXPixelMappingLayoutToken_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXPixelMappingLayoutToken, SizeX), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXPixelMappingLayoutToken_Statics::NewProp_SizeX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXPixelMappingLayoutToken_Statics::NewProp_SizeX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXPixelMappingLayoutToken_Statics::NewProp_SizeY_MetaData[] = {
		{ "Category", "Layout Script" },
		{ "Comment", "/** The size of the component on the Y-Axis */" },
		{ "ModuleRelativePath", "Public/LayoutScripts/DMXPixelMappingLayoutScript.h" },
		{ "ToolTip", "The size of the component on the Y-Axis" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDMXPixelMappingLayoutToken_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXPixelMappingLayoutToken, SizeY), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXPixelMappingLayoutToken_Statics::NewProp_SizeY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXPixelMappingLayoutToken_Statics::NewProp_SizeY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXPixelMappingLayoutToken_Statics::NewProp_Component_MetaData[] = {
		{ "Category", "Pixel Mapping Layout" },
		{ "Comment", "/** The output component to which the token is applied */" },
		{ "ModuleRelativePath", "Public/LayoutScripts/DMXPixelMappingLayoutScript.h" },
		{ "ToolTip", "The output component to which the token is applied" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FDMXPixelMappingLayoutToken_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXPixelMappingLayoutToken, Component), Z_Construct_UClass_UDMXPixelMappingOutputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXPixelMappingLayoutToken_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXPixelMappingLayoutToken_Statics::NewProp_Component_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXPixelMappingLayoutToken_Statics::NewProp_FixtureID_MetaData[] = {
		{ "Category", "Layout Script" },
		{ "Comment", "/** The Fixture ID of the Component's Fixture Patch, or 0 if the component has no Fixture Patch, or the Fixture ID is not set. */" },
		{ "ModuleRelativePath", "Public/LayoutScripts/DMXPixelMappingLayoutScript.h" },
		{ "ToolTip", "The Fixture ID of the Component's Fixture Patch, or 0 if the component has no Fixture Patch, or the Fixture ID is not set." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDMXPixelMappingLayoutToken_Statics::NewProp_FixtureID = { "FixtureID", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXPixelMappingLayoutToken, FixtureID), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXPixelMappingLayoutToken_Statics::NewProp_FixtureID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXPixelMappingLayoutToken_Statics::NewProp_FixtureID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDMXPixelMappingLayoutToken_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXPixelMappingLayoutToken_Statics::NewProp_PositionX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXPixelMappingLayoutToken_Statics::NewProp_PositionY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXPixelMappingLayoutToken_Statics::NewProp_SizeX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXPixelMappingLayoutToken_Statics::NewProp_SizeY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXPixelMappingLayoutToken_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXPixelMappingLayoutToken_Statics::NewProp_FixtureID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDMXPixelMappingLayoutToken_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DMXPixelMappingRuntime,
		nullptr,
		&NewStructOps,
		"DMXPixelMappingLayoutToken",
		sizeof(FDMXPixelMappingLayoutToken),
		alignof(FDMXPixelMappingLayoutToken),
		Z_Construct_UScriptStruct_FDMXPixelMappingLayoutToken_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXPixelMappingLayoutToken_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXPixelMappingLayoutToken_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXPixelMappingLayoutToken_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDMXPixelMappingLayoutToken()
	{
		if (!Z_Registration_Info_UScriptStruct_DMXPixelMappingLayoutToken.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DMXPixelMappingLayoutToken.InnerSingleton, Z_Construct_UScriptStruct_FDMXPixelMappingLayoutToken_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DMXPixelMappingLayoutToken.InnerSingleton;
	}
	DEFINE_FUNCTION(UDMXPixelMappingLayoutScript::execLayout)
	{
		P_GET_TARRAY_REF(FDMXPixelMappingLayoutToken,Z_Param_Out_InTokens);
		P_GET_TARRAY_REF(FDMXPixelMappingLayoutToken,Z_Param_Out_OutTokens);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Layout_Implementation(Z_Param_Out_InTokens,Z_Param_Out_OutTokens);
		P_NATIVE_END;
	}
	struct DMXPixelMappingLayoutScript_eventLayout_Parms
	{
		TArray<FDMXPixelMappingLayoutToken> InTokens;
		TArray<FDMXPixelMappingLayoutToken> OutTokens;
	};
	static FName NAME_UDMXPixelMappingLayoutScript_Layout = FName(TEXT("Layout"));
	void UDMXPixelMappingLayoutScript::Layout(TArray<FDMXPixelMappingLayoutToken> const& InTokens, TArray<FDMXPixelMappingLayoutToken>& OutTokens)
	{
		DMXPixelMappingLayoutScript_eventLayout_Parms Parms;
		Parms.InTokens=InTokens;
		Parms.OutTokens=OutTokens;
		ProcessEvent(FindFunctionChecked(NAME_UDMXPixelMappingLayoutScript_Layout),&Parms);
		OutTokens=Parms.OutTokens;
	}
	void UDMXPixelMappingLayoutScript::StaticRegisterNativesUDMXPixelMappingLayoutScript()
	{
		UClass* Class = UDMXPixelMappingLayoutScript::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Layout", &UDMXPixelMappingLayoutScript::execLayout },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDMXPixelMappingLayoutScript_Layout_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTokens_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTokens_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InTokens;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutTokens_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutTokens;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXPixelMappingLayoutScript_Layout_Statics::NewProp_InTokens_Inner = { "InTokens", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDMXPixelMappingLayoutToken, METADATA_PARAMS(nullptr, 0) }; // 2587060578
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXPixelMappingLayoutScript_Layout_Statics::NewProp_InTokens_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDMXPixelMappingLayoutScript_Layout_Statics::NewProp_InTokens = { "InTokens", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXPixelMappingLayoutScript_eventLayout_Parms, InTokens), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDMXPixelMappingLayoutScript_Layout_Statics::NewProp_InTokens_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXPixelMappingLayoutScript_Layout_Statics::NewProp_InTokens_MetaData)) }; // 2587060578
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXPixelMappingLayoutScript_Layout_Statics::NewProp_OutTokens_Inner = { "OutTokens", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDMXPixelMappingLayoutToken, METADATA_PARAMS(nullptr, 0) }; // 2587060578
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDMXPixelMappingLayoutScript_Layout_Statics::NewProp_OutTokens = { "OutTokens", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXPixelMappingLayoutScript_eventLayout_Parms, OutTokens), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2587060578
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXPixelMappingLayoutScript_Layout_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXPixelMappingLayoutScript_Layout_Statics::NewProp_InTokens_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXPixelMappingLayoutScript_Layout_Statics::NewProp_InTokens,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXPixelMappingLayoutScript_Layout_Statics::NewProp_OutTokens_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXPixelMappingLayoutScript_Layout_Statics::NewProp_OutTokens,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXPixelMappingLayoutScript_Layout_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/**\n\x09 * Lays out children of the selection according to OutTokens. Tokens that are not returned remain unchanged.\n\x09 * Called when the script is loaded (unless set otherwise in editor) and when Properties were changed. \n\x09 * \n\x09 * @param InTokens\x09\x09The child components of the current selection, as layout tokens. \n\x09 * @param OutTokens\x09\x09The layoyut of a component.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LayoutScripts/DMXPixelMappingLayoutScript.h" },
		{ "ToolTip", "Lays out children of the selection according to OutTokens. Tokens that are not returned remain unchanged.\nCalled when the script is loaded (unless set otherwise in editor) and when Properties were changed.\n\n@param InTokens              The child components of the current selection, as layout tokens.\n@param OutTokens             The layoyut of a component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXPixelMappingLayoutScript_Layout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXPixelMappingLayoutScript, nullptr, "Layout", nullptr, nullptr, sizeof(DMXPixelMappingLayoutScript_eventLayout_Parms), Z_Construct_UFunction_UDMXPixelMappingLayoutScript_Layout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXPixelMappingLayoutScript_Layout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXPixelMappingLayoutScript_Layout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXPixelMappingLayoutScript_Layout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXPixelMappingLayoutScript_Layout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXPixelMappingLayoutScript_Layout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXPixelMappingLayoutScript);
	UClass* Z_Construct_UClass_UDMXPixelMappingLayoutScript_NoRegister()
	{
		return UDMXPixelMappingLayoutScript::StaticClass();
	}
	struct Z_Construct_UClass_UDMXPixelMappingLayoutScript_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumTokens_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumTokens;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentComponentPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParentComponentPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentComponentSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParentComponentSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextureSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXPixelMappingLayoutScript_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXPixelMappingRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDMXPixelMappingLayoutScript_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDMXPixelMappingLayoutScript_Layout, "Layout" }, // 4192000640
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingLayoutScript_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * Allows scripting of Pixel Mapping Component Layouts.\n * Override the Layout function to implement a layout. \n */" },
		{ "IncludePath", "LayoutScripts/DMXPixelMappingLayoutScript.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LayoutScripts/DMXPixelMappingLayoutScript.h" },
		{ "ToolTip", "Allows scripting of Pixel Mapping Component Layouts.\nOverride the Layout function to implement a layout." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingLayoutScript_Statics::NewProp_NumTokens_MetaData[] = {
		{ "Category", "Layout Script" },
		{ "Comment", "/** The number of tokens in the Layout. */" },
		{ "ModuleRelativePath", "Public/LayoutScripts/DMXPixelMappingLayoutScript.h" },
		{ "ToolTip", "The number of tokens in the Layout." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDMXPixelMappingLayoutScript_Statics::NewProp_NumTokens = { "NumTokens", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingLayoutScript, NumTokens), METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingLayoutScript_Statics::NewProp_NumTokens_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingLayoutScript_Statics::NewProp_NumTokens_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingLayoutScript_Statics::NewProp_ParentComponentPosition_MetaData[] = {
		{ "Category", "Layout Script" },
		{ "Comment", "/** The position of the parent component where the components that are being layouted reside in. */" },
		{ "ModuleRelativePath", "Public/LayoutScripts/DMXPixelMappingLayoutScript.h" },
		{ "ToolTip", "The position of the parent component where the components that are being layouted reside in." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXPixelMappingLayoutScript_Statics::NewProp_ParentComponentPosition = { "ParentComponentPosition", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingLayoutScript, ParentComponentPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingLayoutScript_Statics::NewProp_ParentComponentPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingLayoutScript_Statics::NewProp_ParentComponentPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingLayoutScript_Statics::NewProp_ParentComponentSize_MetaData[] = {
		{ "Category", "Layout Script" },
		{ "Comment", "/** The size of the parent component where the components that are being layouted reside in. */" },
		{ "ModuleRelativePath", "Public/LayoutScripts/DMXPixelMappingLayoutScript.h" },
		{ "ToolTip", "The size of the parent component where the components that are being layouted reside in." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXPixelMappingLayoutScript_Statics::NewProp_ParentComponentSize = { "ParentComponentSize", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingLayoutScript, ParentComponentSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingLayoutScript_Statics::NewProp_ParentComponentSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingLayoutScript_Statics::NewProp_ParentComponentSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingLayoutScript_Statics::NewProp_TextureSize_MetaData[] = {
		{ "Category", "Layout Script" },
		{ "Comment", "/** The size of the texture in the Pixel Mapping asset. */" },
		{ "ModuleRelativePath", "Public/LayoutScripts/DMXPixelMappingLayoutScript.h" },
		{ "ToolTip", "The size of the texture in the Pixel Mapping asset." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXPixelMappingLayoutScript_Statics::NewProp_TextureSize = { "TextureSize", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingLayoutScript, TextureSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingLayoutScript_Statics::NewProp_TextureSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingLayoutScript_Statics::NewProp_TextureSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXPixelMappingLayoutScript_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingLayoutScript_Statics::NewProp_NumTokens,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingLayoutScript_Statics::NewProp_ParentComponentPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingLayoutScript_Statics::NewProp_ParentComponentSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingLayoutScript_Statics::NewProp_TextureSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXPixelMappingLayoutScript_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXPixelMappingLayoutScript>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXPixelMappingLayoutScript_Statics::ClassParams = {
		&UDMXPixelMappingLayoutScript::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDMXPixelMappingLayoutScript_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingLayoutScript_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingLayoutScript_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingLayoutScript_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXPixelMappingLayoutScript()
	{
		if (!Z_Registration_Info_UClass_UDMXPixelMappingLayoutScript.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXPixelMappingLayoutScript.OuterSingleton, Z_Construct_UClass_UDMXPixelMappingLayoutScript_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXPixelMappingLayoutScript.OuterSingleton;
	}
	template<> DMXPIXELMAPPINGRUNTIME_API UClass* StaticClass<UDMXPixelMappingLayoutScript>()
	{
		return UDMXPixelMappingLayoutScript::StaticClass();
	}
	UDMXPixelMappingLayoutScript::UDMXPixelMappingLayoutScript(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXPixelMappingLayoutScript);
	UDMXPixelMappingLayoutScript::~UDMXPixelMappingLayoutScript() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_LayoutScripts_DMXPixelMappingLayoutScript_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_LayoutScripts_DMXPixelMappingLayoutScript_h_Statics::ScriptStructInfo[] = {
		{ FDMXPixelMappingLayoutToken::StaticStruct, Z_Construct_UScriptStruct_FDMXPixelMappingLayoutToken_Statics::NewStructOps, TEXT("DMXPixelMappingLayoutToken"), &Z_Registration_Info_UScriptStruct_DMXPixelMappingLayoutToken, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDMXPixelMappingLayoutToken), 2587060578U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_LayoutScripts_DMXPixelMappingLayoutScript_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXPixelMappingLayoutScript, UDMXPixelMappingLayoutScript::StaticClass, TEXT("UDMXPixelMappingLayoutScript"), &Z_Registration_Info_UClass_UDMXPixelMappingLayoutScript, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXPixelMappingLayoutScript), 2433914237U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_LayoutScripts_DMXPixelMappingLayoutScript_h_1300173669(TEXT("/Script/DMXPixelMappingRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_LayoutScripts_DMXPixelMappingLayoutScript_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_LayoutScripts_DMXPixelMappingLayoutScript_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_LayoutScripts_DMXPixelMappingLayoutScript_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_LayoutScripts_DMXPixelMappingLayoutScript_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
