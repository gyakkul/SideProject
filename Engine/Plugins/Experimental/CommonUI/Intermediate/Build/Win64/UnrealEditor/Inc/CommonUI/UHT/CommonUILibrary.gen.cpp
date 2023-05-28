// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUILibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonUILibrary() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonUILibrary();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonUILibrary_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References
	DEFINE_FUNCTION(UCommonUILibrary::execFindParentWidgetOfType)
	{
		P_GET_OBJECT(UWidget,Z_Param_StartingWidget);
		P_GET_OBJECT(UClass,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWidget**)Z_Param__Result=UCommonUILibrary::FindParentWidgetOfType(Z_Param_StartingWidget,Z_Param_Type);
		P_NATIVE_END;
	}
	void UCommonUILibrary::StaticRegisterNativesUCommonUILibrary()
	{
		UClass* Class = UCommonUILibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindParentWidgetOfType", &UCommonUILibrary::execFindParentWidgetOfType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonUILibrary_FindParentWidgetOfType_Statics
	{
		struct CommonUILibrary_eventFindParentWidgetOfType_Parms
		{
			UWidget* StartingWidget;
			TSubclassOf<UWidget>  Type;
			UWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartingWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StartingWidget;
		static const UECodeGen_Private::FClassPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonUILibrary_FindParentWidgetOfType_Statics::NewProp_StartingWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonUILibrary_FindParentWidgetOfType_Statics::NewProp_StartingWidget = { "StartingWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonUILibrary_eventFindParentWidgetOfType_Parms, StartingWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonUILibrary_FindParentWidgetOfType_Statics::NewProp_StartingWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUILibrary_FindParentWidgetOfType_Statics::NewProp_StartingWidget_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCommonUILibrary_FindParentWidgetOfType_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonUILibrary_eventFindParentWidgetOfType_Parms, Type), Z_Construct_UClass_UClass, Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonUILibrary_FindParentWidgetOfType_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonUILibrary_FindParentWidgetOfType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonUILibrary_eventFindParentWidgetOfType_Parms, ReturnValue), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonUILibrary_FindParentWidgetOfType_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUILibrary_FindParentWidgetOfType_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonUILibrary_FindParentWidgetOfType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUILibrary_FindParentWidgetOfType_Statics::NewProp_StartingWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUILibrary_FindParentWidgetOfType_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUILibrary_FindParentWidgetOfType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonUILibrary_FindParentWidgetOfType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common UI" },
		{ "Comment", "/**\n\x09 * Finds the first parent widget of the given type and returns it, or null if no parent could be found.\n\x09 */" },
		{ "DeterminesOutputType", "Type" },
		{ "ModuleRelativePath", "Public/CommonUILibrary.h" },
		{ "ToolTip", "Finds the first parent widget of the given type and returns it, or null if no parent could be found." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonUILibrary_FindParentWidgetOfType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonUILibrary, nullptr, "FindParentWidgetOfType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonUILibrary_FindParentWidgetOfType_Statics::CommonUILibrary_eventFindParentWidgetOfType_Parms), Z_Construct_UFunction_UCommonUILibrary_FindParentWidgetOfType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUILibrary_FindParentWidgetOfType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonUILibrary_FindParentWidgetOfType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUILibrary_FindParentWidgetOfType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonUILibrary_FindParentWidgetOfType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonUILibrary_FindParentWidgetOfType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonUILibrary);
	UClass* Z_Construct_UClass_UCommonUILibrary_NoRegister()
	{
		return UCommonUILibrary::StaticClass();
	}
	struct Z_Construct_UClass_UCommonUILibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonUILibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonUILibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonUILibrary_FindParentWidgetOfType, "FindParentWidgetOfType" }, // 3809910759
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUILibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CommonUILibrary.h" },
		{ "ModuleRelativePath", "Public/CommonUILibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonUILibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonUILibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonUILibrary_Statics::ClassParams = {
		&UCommonUILibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonUILibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUILibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonUILibrary()
	{
		if (!Z_Registration_Info_UClass_UCommonUILibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonUILibrary.OuterSingleton, Z_Construct_UClass_UCommonUILibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonUILibrary.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonUILibrary>()
	{
		return UCommonUILibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonUILibrary);
	UCommonUILibrary::~UCommonUILibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUILibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUILibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonUILibrary, UCommonUILibrary::StaticClass, TEXT("UCommonUILibrary"), &Z_Registration_Info_UClass_UCommonUILibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonUILibrary), 1986954119U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUILibrary_h_997370032(TEXT("/Script/CommonUI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUILibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUILibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
