// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/ComboBox.h"
#include "Styling/SlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboBox() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FScrollBarStyle();
	UMG_API UClass* Z_Construct_UClass_UComboBox();
	UMG_API UClass* Z_Construct_UClass_UComboBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GenerateWidgetForObject__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	void UComboBox::StaticRegisterNativesUComboBox()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComboBox);
	UClass* Z_Construct_UClass_UComboBox_NoRegister()
	{
		return UComboBox::StaticClass();
	}
	struct Z_Construct_UClass_UComboBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScrollBarStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScrollBarStyle;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Items_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnGenerateWidgetEvent_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnGenerateWidgetEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsFocusable_MetaData[];
#endif
		static void NewProp_bIsFocusable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFocusable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComboBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboBox_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The combobox allows you to display a list of options to the user in a dropdown menu for them to select one.\n */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "DisplayName", "ComboBox (Object)" },
		{ "IncludePath", "Components/ComboBox.h" },
		{ "ModuleRelativePath", "Public/Components/ComboBox.h" },
		{ "ToolTip", "The combobox allows you to display a list of options to the user in a dropdown menu for them to select one." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboBox_Statics::NewProp_ScrollBarStyle_MetaData[] = {
		{ "Category", "Style" },
		{ "ModuleRelativePath", "Public/Components/ComboBox.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComboBox_Statics::NewProp_ScrollBarStyle = { "ScrollBarStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComboBox, ScrollBarStyle), Z_Construct_UScriptStruct_FScrollBarStyle, METADATA_PARAMS(Z_Construct_UClass_UComboBox_Statics::NewProp_ScrollBarStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComboBox_Statics::NewProp_ScrollBarStyle_MetaData)) }; // 2161279079
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComboBox_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboBox_Statics::NewProp_Items_MetaData[] = {
		{ "Category", "Content" },
		{ "Comment", "/** The list of items to be displayed on the combobox. */" },
		{ "ModuleRelativePath", "Public/Components/ComboBox.h" },
		{ "ToolTip", "The list of items to be displayed on the combobox." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UComboBox_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComboBox, Items), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UComboBox_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComboBox_Statics::NewProp_Items_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboBox_Statics::NewProp_OnGenerateWidgetEvent_MetaData[] = {
		{ "Category", "Events" },
		{ "Comment", "/** Called when the widget is needed for the item. */" },
		{ "IsBindableEvent", "True" },
		{ "ModuleRelativePath", "Public/Components/ComboBox.h" },
		{ "ToolTip", "Called when the widget is needed for the item." },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UComboBox_Statics::NewProp_OnGenerateWidgetEvent = { "OnGenerateWidgetEvent", nullptr, (EPropertyFlags)0x0010000000080001, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComboBox, OnGenerateWidgetEvent), Z_Construct_UDelegateFunction_UWidget_GenerateWidgetForObject__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UComboBox_Statics::NewProp_OnGenerateWidgetEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComboBox_Statics::NewProp_OnGenerateWidgetEvent_MetaData)) }; // 436446435
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboBox_Statics::NewProp_bIsFocusable_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Components/ComboBox.h" },
	};
#endif
	void Z_Construct_UClass_UComboBox_Statics::NewProp_bIsFocusable_SetBit(void* Obj)
	{
		((UComboBox*)Obj)->bIsFocusable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UComboBox_Statics::NewProp_bIsFocusable = { "bIsFocusable", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UComboBox), &Z_Construct_UClass_UComboBox_Statics::NewProp_bIsFocusable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UComboBox_Statics::NewProp_bIsFocusable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComboBox_Statics::NewProp_bIsFocusable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComboBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBox_Statics::NewProp_ScrollBarStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBox_Statics::NewProp_Items_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBox_Statics::NewProp_Items,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBox_Statics::NewProp_OnGenerateWidgetEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBox_Statics::NewProp_bIsFocusable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComboBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComboBox>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComboBox_Statics::ClassParams = {
		&UComboBox::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UComboBox_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UComboBox_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UComboBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComboBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComboBox()
	{
		if (!Z_Registration_Info_UClass_UComboBox.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComboBox.OuterSingleton, Z_Construct_UClass_UComboBox_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComboBox.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UComboBox>()
	{
		return UComboBox::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComboBox);
	UComboBox::~UComboBox() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ComboBox_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ComboBox_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComboBox, UComboBox::StaticClass, TEXT("UComboBox"), &Z_Registration_Info_UClass_UComboBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComboBox), 3384951108U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ComboBox_h_3288416620(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ComboBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ComboBox_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
