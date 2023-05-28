// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Input/CommonBoundActionButton.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonBoundActionButton() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonBoundActionButton();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonBoundActionButton_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonBoundActionButtonInterface_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonButtonBase();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonTextBlock_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References
	static FName NAME_UCommonBoundActionButton_OnUpdateInputAction = FName(TEXT("OnUpdateInputAction"));
	void UCommonBoundActionButton::OnUpdateInputAction()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCommonBoundActionButton_OnUpdateInputAction),NULL);
	}
	void UCommonBoundActionButton::StaticRegisterNativesUCommonBoundActionButton()
	{
	}
	struct Z_Construct_UFunction_UCommonBoundActionButton_OnUpdateInputAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonBoundActionButton_OnUpdateInputAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Bound Action" },
		{ "ModuleRelativePath", "Public/Input/CommonBoundActionButton.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonBoundActionButton_OnUpdateInputAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonBoundActionButton, nullptr, "OnUpdateInputAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonBoundActionButton_OnUpdateInputAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonBoundActionButton_OnUpdateInputAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonBoundActionButton_OnUpdateInputAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonBoundActionButton_OnUpdateInputAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonBoundActionButton);
	UClass* Z_Construct_UClass_UCommonBoundActionButton_NoRegister()
	{
		return UCommonBoundActionButton::StaticClass();
	}
	struct Z_Construct_UClass_UCommonBoundActionButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_ActionName_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Text_ActionName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonBoundActionButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonButtonBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonBoundActionButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonBoundActionButton_OnUpdateInputAction, "OnUpdateInputAction" }, // 1939105687
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonBoundActionButton_Statics::Class_MetaDataParams[] = {
		{ "DisableNativeTick", "" },
		{ "IncludePath", "Input/CommonBoundActionButton.h" },
		{ "ModuleRelativePath", "Public/Input/CommonBoundActionButton.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonBoundActionButton_Statics::NewProp_Text_ActionName_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Text Block" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Input/CommonBoundActionButton.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCommonBoundActionButton_Statics::NewProp_Text_ActionName = { "Text_ActionName", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonBoundActionButton, Text_ActionName), Z_Construct_UClass_UCommonTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonBoundActionButton_Statics::NewProp_Text_ActionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonBoundActionButton_Statics::NewProp_Text_ActionName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonBoundActionButton_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonBoundActionButton_Statics::NewProp_Text_ActionName,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCommonBoundActionButton_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UCommonBoundActionButtonInterface_NoRegister, (int32)VTABLE_OFFSET(UCommonBoundActionButton, ICommonBoundActionButtonInterface), false },  // 4134790934
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonBoundActionButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonBoundActionButton>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonBoundActionButton_Statics::ClassParams = {
		&UCommonBoundActionButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCommonBoundActionButton_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonBoundActionButton_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonBoundActionButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonBoundActionButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonBoundActionButton()
	{
		if (!Z_Registration_Info_UClass_UCommonBoundActionButton.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonBoundActionButton.OuterSingleton, Z_Construct_UClass_UCommonBoundActionButton_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonBoundActionButton.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonBoundActionButton>()
	{
		return UCommonBoundActionButton::StaticClass();
	}
	UCommonBoundActionButton::UCommonBoundActionButton(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonBoundActionButton);
	UCommonBoundActionButton::~UCommonBoundActionButton() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Input_CommonBoundActionButton_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Input_CommonBoundActionButton_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonBoundActionButton, UCommonBoundActionButton::StaticClass, TEXT("UCommonBoundActionButton"), &Z_Registration_Info_UClass_UCommonBoundActionButton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonBoundActionButton), 606787559U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Input_CommonBoundActionButton_h_4187456889(TEXT("/Script/CommonUI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Input_CommonBoundActionButton_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Input_CommonBoundActionButton_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
