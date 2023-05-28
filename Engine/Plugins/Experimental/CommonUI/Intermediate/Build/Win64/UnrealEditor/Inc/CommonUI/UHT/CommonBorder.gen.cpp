// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonBorder.h"
#include "Layout/Margin.h"
#include "Styling/SlateBrush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonBorder() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonBorder();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonBorder_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonBorderStyle();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonBorderStyle_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	UMG_API UClass* Z_Construct_UClass_UBorder();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References
	DEFINE_FUNCTION(UCommonBorderStyle::execGetBackgroundBrush)
	{
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_Brush);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetBackgroundBrush(Z_Param_Out_Brush);
		P_NATIVE_END;
	}
	void UCommonBorderStyle::StaticRegisterNativesUCommonBorderStyle()
	{
		UClass* Class = UCommonBorderStyle::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBackgroundBrush", &UCommonBorderStyle::execGetBackgroundBrush },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonBorderStyle_GetBackgroundBrush_Statics
	{
		struct CommonBorderStyle_eventGetBackgroundBrush_Parms
		{
			FSlateBrush Brush;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Brush;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonBorderStyle_GetBackgroundBrush_Statics::NewProp_Brush = { "Brush", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonBorderStyle_eventGetBackgroundBrush_Parms, Brush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(nullptr, 0) }; // 4256420591
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonBorderStyle_GetBackgroundBrush_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonBorderStyle_GetBackgroundBrush_Statics::NewProp_Brush,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonBorderStyle_GetBackgroundBrush_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Border Style|Getters" },
		{ "ModuleRelativePath", "Public/CommonBorder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonBorderStyle_GetBackgroundBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonBorderStyle, nullptr, "GetBackgroundBrush", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonBorderStyle_GetBackgroundBrush_Statics::CommonBorderStyle_eventGetBackgroundBrush_Parms), Z_Construct_UFunction_UCommonBorderStyle_GetBackgroundBrush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonBorderStyle_GetBackgroundBrush_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonBorderStyle_GetBackgroundBrush_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonBorderStyle_GetBackgroundBrush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonBorderStyle_GetBackgroundBrush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonBorderStyle_GetBackgroundBrush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonBorderStyle);
	UClass* Z_Construct_UClass_UCommonBorderStyle_NoRegister()
	{
		return UCommonBorderStyle::StaticClass();
	}
	struct Z_Construct_UClass_UCommonBorderStyle_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Background_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Background;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonBorderStyle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonBorderStyle_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonBorderStyle_GetBackgroundBrush, "GetBackgroundBrush" }, // 1928185859
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonBorderStyle_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Common UI" },
		{ "ClassGroupNames", "UI" },
		{ "Comment", "/* \n * ---- All properties must be EditDefaultsOnly, BlueprintReadOnly !!! -----\n * We return the CDO to blueprints, so we cannot allow any changes (blueprint doesn't support const variables)\n */" },
		{ "IncludePath", "CommonBorder.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonBorder.h" },
		{ "ToolTip", "* ---- All properties must be EditDefaultsOnly, BlueprintReadOnly !!! -----\n* We return the CDO to blueprints, so we cannot allow any changes (blueprint doesn't support const variables)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonBorderStyle_Statics::NewProp_Background_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** The brush for the background of the border */" },
		{ "ModuleRelativePath", "Public/CommonBorder.h" },
		{ "ToolTip", "The brush for the background of the border" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonBorderStyle_Statics::NewProp_Background = { "Background", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonBorderStyle, Background), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UCommonBorderStyle_Statics::NewProp_Background_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonBorderStyle_Statics::NewProp_Background_MetaData)) }; // 4256420591
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonBorderStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonBorderStyle_Statics::NewProp_Background,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonBorderStyle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonBorderStyle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonBorderStyle_Statics::ClassParams = {
		&UCommonBorderStyle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCommonBorderStyle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonBorderStyle_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonBorderStyle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonBorderStyle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonBorderStyle()
	{
		if (!Z_Registration_Info_UClass_UCommonBorderStyle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonBorderStyle.OuterSingleton, Z_Construct_UClass_UCommonBorderStyle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonBorderStyle.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonBorderStyle>()
	{
		return UCommonBorderStyle::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonBorderStyle);
	UCommonBorderStyle::~UCommonBorderStyle() {}
	DEFINE_FUNCTION(UCommonBorder::execSetStyle)
	{
		P_GET_OBJECT(UClass,Z_Param_InStyle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStyle(Z_Param_InStyle);
		P_NATIVE_END;
	}
	void UCommonBorder::StaticRegisterNativesUCommonBorder()
	{
		UClass* Class = UCommonBorder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetStyle", &UCommonBorder::execSetStyle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonBorder_SetStyle_Statics
	{
		struct CommonBorder_eventSetStyle_Parms
		{
			TSubclassOf<UCommonBorderStyle>  InStyle;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_InStyle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCommonBorder_SetStyle_Statics::NewProp_InStyle = { "InStyle", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonBorder_eventSetStyle_Parms, InStyle), Z_Construct_UClass_UClass, Z_Construct_UClass_UCommonBorderStyle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonBorder_SetStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonBorder_SetStyle_Statics::NewProp_InStyle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonBorder_SetStyle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Border" },
		{ "ModuleRelativePath", "Public/CommonBorder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonBorder_SetStyle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonBorder, nullptr, "SetStyle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonBorder_SetStyle_Statics::CommonBorder_eventSetStyle_Parms), Z_Construct_UFunction_UCommonBorder_SetStyle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonBorder_SetStyle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonBorder_SetStyle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonBorder_SetStyle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonBorder_SetStyle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonBorder_SetStyle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonBorder);
	UClass* Z_Construct_UClass_UCommonBorder_NoRegister()
	{
		return UCommonBorder::StaticClass();
	}
	struct Z_Construct_UClass_UCommonBorder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Style_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Style;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReducePaddingBySafezone_MetaData[];
#endif
		static void NewProp_bReducePaddingBySafezone_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReducePaddingBySafezone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MinimumPadding;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStyleNoLongerNeedsConversion_MetaData[];
#endif
		static void NewProp_bStyleNoLongerNeedsConversion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStyleNoLongerNeedsConversion;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonBorder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBorder,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonBorder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonBorder_SetStyle, "SetStyle" }, // 65680119
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonBorder_Statics::Class_MetaDataParams[] = {
		{ "Category", "Common UI" },
		{ "ClassGroupNames", "UI" },
		{ "Comment", "/**\n * Uses the border style template defined in CommonUI project settings by default\n */" },
		{ "DisplayName", "Common Border" },
		{ "IncludePath", "CommonBorder.h" },
		{ "ModuleRelativePath", "Public/CommonBorder.h" },
		{ "ToolTip", "Uses the border style template defined in CommonUI project settings by default" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonBorder_Statics::NewProp_Style_MetaData[] = {
		{ "Category", "Common Border" },
		{ "Comment", "/** References the border style to use */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/CommonBorder.h" },
		{ "ToolTip", "References the border style to use" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCommonBorder_Statics::NewProp_Style = { "Style", nullptr, (EPropertyFlags)0x0015000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonBorder, Style), Z_Construct_UClass_UClass, Z_Construct_UClass_UCommonBorderStyle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonBorder_Statics::NewProp_Style_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonBorder_Statics::NewProp_Style_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonBorder_Statics::NewProp_bReducePaddingBySafezone_MetaData[] = {
		{ "Category", "Common Border" },
		{ "Comment", "/** Turning this on will cause the safe zone size to be removed from this borders content padding down to the minimum specified */" },
		{ "ModuleRelativePath", "Public/CommonBorder.h" },
		{ "ToolTip", "Turning this on will cause the safe zone size to be removed from this borders content padding down to the minimum specified" },
	};
#endif
	void Z_Construct_UClass_UCommonBorder_Statics::NewProp_bReducePaddingBySafezone_SetBit(void* Obj)
	{
		((UCommonBorder*)Obj)->bReducePaddingBySafezone = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonBorder_Statics::NewProp_bReducePaddingBySafezone = { "bReducePaddingBySafezone", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCommonBorder), &Z_Construct_UClass_UCommonBorder_Statics::NewProp_bReducePaddingBySafezone_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonBorder_Statics::NewProp_bReducePaddingBySafezone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonBorder_Statics::NewProp_bReducePaddingBySafezone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonBorder_Statics::NewProp_MinimumPadding_MetaData[] = {
		{ "Category", "Common Border" },
		{ "Comment", "/** The minimum padding we will reduce to when the safezone grows */" },
		{ "EditCondition", "bReducePaddingBySafezone" },
		{ "ModuleRelativePath", "Public/CommonBorder.h" },
		{ "ToolTip", "The minimum padding we will reduce to when the safezone grows" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonBorder_Statics::NewProp_MinimumPadding = { "MinimumPadding", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonBorder, MinimumPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UCommonBorder_Statics::NewProp_MinimumPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonBorder_Statics::NewProp_MinimumPadding_MetaData)) }; // 2014822612
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonBorder_Statics::NewProp_bStyleNoLongerNeedsConversion_MetaData[] = {
		{ "Comment", "/** Used to track widgets that were created before changing the default style pointer to null */" },
		{ "ModuleRelativePath", "Public/CommonBorder.h" },
		{ "ToolTip", "Used to track widgets that were created before changing the default style pointer to null" },
	};
#endif
	void Z_Construct_UClass_UCommonBorder_Statics::NewProp_bStyleNoLongerNeedsConversion_SetBit(void* Obj)
	{
		((UCommonBorder*)Obj)->bStyleNoLongerNeedsConversion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonBorder_Statics::NewProp_bStyleNoLongerNeedsConversion = { "bStyleNoLongerNeedsConversion", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCommonBorder), &Z_Construct_UClass_UCommonBorder_Statics::NewProp_bStyleNoLongerNeedsConversion_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonBorder_Statics::NewProp_bStyleNoLongerNeedsConversion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonBorder_Statics::NewProp_bStyleNoLongerNeedsConversion_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonBorder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonBorder_Statics::NewProp_Style,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonBorder_Statics::NewProp_bReducePaddingBySafezone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonBorder_Statics::NewProp_MinimumPadding,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonBorder_Statics::NewProp_bStyleNoLongerNeedsConversion,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonBorder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonBorder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonBorder_Statics::ClassParams = {
		&UCommonBorder::StaticClass,
		"CommonUI",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCommonBorder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonBorder_Statics::PropPointers),
		0,
		0x00B000A2u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonBorder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonBorder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonBorder()
	{
		if (!Z_Registration_Info_UClass_UCommonBorder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonBorder.OuterSingleton, Z_Construct_UClass_UCommonBorder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonBorder.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonBorder>()
	{
		return UCommonBorder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonBorder);
	UCommonBorder::~UCommonBorder() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonBorder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonBorder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonBorderStyle, UCommonBorderStyle::StaticClass, TEXT("UCommonBorderStyle"), &Z_Registration_Info_UClass_UCommonBorderStyle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonBorderStyle), 2267207181U) },
		{ Z_Construct_UClass_UCommonBorder, UCommonBorder::StaticClass, TEXT("UCommonBorder"), &Z_Registration_Info_UClass_UCommonBorder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonBorder), 3737831474U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonBorder_h_1169087141(TEXT("/Script/CommonUI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonBorder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonBorder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
