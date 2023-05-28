// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/VerticalBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVerticalBox() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UPanelWidget();
	UMG_API UClass* Z_Construct_UClass_UVerticalBox();
	UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UVerticalBoxSlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	DEFINE_FUNCTION(UVerticalBox::execAddChildToVerticalBox)
	{
		P_GET_OBJECT(UWidget,Z_Param_Content);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVerticalBoxSlot**)Z_Param__Result=P_THIS->AddChildToVerticalBox(Z_Param_Content);
		P_NATIVE_END;
	}
	void UVerticalBox::StaticRegisterNativesUVerticalBox()
	{
		UClass* Class = UVerticalBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddChildToVerticalBox", &UVerticalBox::execAddChildToVerticalBox },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVerticalBox_AddChildToVerticalBox_Statics
	{
		struct VerticalBox_eventAddChildToVerticalBox_Parms
		{
			UWidget* Content;
			UVerticalBoxSlot* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Content;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVerticalBox_AddChildToVerticalBox_Statics::NewProp_Content_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVerticalBox_AddChildToVerticalBox_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VerticalBox_eventAddChildToVerticalBox_Parms, Content), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVerticalBox_AddChildToVerticalBox_Statics::NewProp_Content_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVerticalBox_AddChildToVerticalBox_Statics::NewProp_Content_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVerticalBox_AddChildToVerticalBox_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVerticalBox_AddChildToVerticalBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VerticalBox_eventAddChildToVerticalBox_Parms, ReturnValue), Z_Construct_UClass_UVerticalBoxSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVerticalBox_AddChildToVerticalBox_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVerticalBox_AddChildToVerticalBox_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVerticalBox_AddChildToVerticalBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVerticalBox_AddChildToVerticalBox_Statics::NewProp_Content,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVerticalBox_AddChildToVerticalBox_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVerticalBox_AddChildToVerticalBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "Panel" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/VerticalBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVerticalBox_AddChildToVerticalBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVerticalBox, nullptr, "AddChildToVerticalBox", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVerticalBox_AddChildToVerticalBox_Statics::VerticalBox_eventAddChildToVerticalBox_Parms), Z_Construct_UFunction_UVerticalBox_AddChildToVerticalBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVerticalBox_AddChildToVerticalBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVerticalBox_AddChildToVerticalBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVerticalBox_AddChildToVerticalBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVerticalBox_AddChildToVerticalBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVerticalBox_AddChildToVerticalBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVerticalBox);
	UClass* Z_Construct_UClass_UVerticalBox_NoRegister()
	{
		return UVerticalBox::StaticClass();
	}
	struct Z_Construct_UClass_UVerticalBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVerticalBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPanelWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVerticalBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVerticalBox_AddChildToVerticalBox, "AddChildToVerticalBox" }, // 892275834
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVerticalBox_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A vertical box widget is a layout panel allowing child widgets to be automatically laid out\n * vertically.\n *\n * * Many Children\n * * Flows Vertical\n */" },
		{ "IncludePath", "Components/VerticalBox.h" },
		{ "ModuleRelativePath", "Public/Components/VerticalBox.h" },
		{ "ShortTooltip", "A layout panel for automatically laying child widgets out vertically" },
		{ "ToolTip", "A vertical box widget is a layout panel allowing child widgets to be automatically laid out\nvertically.\n\n* Many Children\n* Flows Vertical" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVerticalBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVerticalBox>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVerticalBox_Statics::ClassParams = {
		&UVerticalBox::StaticClass,
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
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVerticalBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVerticalBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVerticalBox()
	{
		if (!Z_Registration_Info_UClass_UVerticalBox.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVerticalBox.OuterSingleton, Z_Construct_UClass_UVerticalBox_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVerticalBox.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UVerticalBox>()
	{
		return UVerticalBox::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVerticalBox);
	UVerticalBox::~UVerticalBox() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBox_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBox_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVerticalBox, UVerticalBox::StaticClass, TEXT("UVerticalBox"), &Z_Registration_Info_UClass_UVerticalBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVerticalBox), 2580004637U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBox_h_1901056358(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBox_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
