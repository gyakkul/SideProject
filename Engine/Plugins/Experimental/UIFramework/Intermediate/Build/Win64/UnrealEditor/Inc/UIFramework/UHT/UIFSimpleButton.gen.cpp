// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/UIFSimpleButton.h"
#include "Types/MVVMEventField.h"
#include "Types/UIFEvents.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIFSimpleButton() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	MODELVIEWVIEWMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FMVVMEventField();
	UIFRAMEWORK_API UClass* Z_Construct_UClass_UUIFrameworkSimpleButton();
	UIFRAMEWORK_API UClass* Z_Construct_UClass_UUIFrameworkSimpleButton_NoRegister();
	UIFRAMEWORK_API UClass* Z_Construct_UClass_UUIFrameworkWidget();
	UIFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FUIFrameworkClickEventArgument();
	UPackage* Z_Construct_UPackage__Script_UIFramework();
// End Cross Module References
	DEFINE_FUNCTION(UUIFrameworkSimpleButton::execServerClick)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerClick_Implementation(Z_Param_PlayerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIFrameworkSimpleButton::execOnRep_Text)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Text();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIFrameworkSimpleButton::execOnClick)
	{
		P_GET_STRUCT(FMVVMEventField,Z_Param_Field);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClick(Z_Param_Field);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIFrameworkSimpleButton::execSetText)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetText(Z_Param_Value);
		P_NATIVE_END;
	}
	void UUIFrameworkSimpleButton::GetText_WrapperImpl(const void* Object, void* OutValue)
	{
		const UUIFrameworkSimpleButton* Obj = (const UUIFrameworkSimpleButton*)Object;
		FText& Result = *(FText*)OutValue;
		Result = (FText)Obj->GetText();
	}
	void UUIFrameworkSimpleButton::SetText_WrapperImpl(void* Object, const void* InValue)
	{
		UUIFrameworkSimpleButton* Obj = (UUIFrameworkSimpleButton*)Object;
		FText& Value = *(FText*)InValue;
		Obj->SetText(Value);
	}
	void UUIFrameworkSimpleButton::GetClickEvent_WrapperImpl(const void* Object, void* OutValue)
	{
		const UUIFrameworkSimpleButton* Obj = (const UUIFrameworkSimpleButton*)Object;
		FUIFrameworkClickEventArgument& Result = *(FUIFrameworkClickEventArgument*)OutValue;
		Result = (FUIFrameworkClickEventArgument)Obj->GetClickEvent();
	}
	struct UIFrameworkSimpleButton_eventServerClick_Parms
	{
		APlayerController* PlayerController;
	};
	static FName NAME_UUIFrameworkSimpleButton_ServerClick = FName(TEXT("ServerClick"));
	void UUIFrameworkSimpleButton::ServerClick(APlayerController* PlayerController)
	{
		UIFrameworkSimpleButton_eventServerClick_Parms Parms;
		Parms.PlayerController=PlayerController;
		ProcessEvent(FindFunctionChecked(NAME_UUIFrameworkSimpleButton_ServerClick),&Parms);
	}
	void UUIFrameworkSimpleButton::StaticRegisterNativesUUIFrameworkSimpleButton()
	{
		UClass* Class = UUIFrameworkSimpleButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnClick", &UUIFrameworkSimpleButton::execOnClick },
			{ "OnRep_Text", &UUIFrameworkSimpleButton::execOnRep_Text },
			{ "ServerClick", &UUIFrameworkSimpleButton::execServerClick },
			{ "SetText", &UUIFrameworkSimpleButton::execSetText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUIFrameworkSimpleButton_OnClick_Statics
	{
		struct UIFrameworkSimpleButton_eventOnClick_Parms
		{
			FMVVMEventField Field;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Field;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUIFrameworkSimpleButton_OnClick_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIFrameworkSimpleButton_eventOnClick_Parms, Field), Z_Construct_UScriptStruct_FMVVMEventField, METADATA_PARAMS(nullptr, 0) }; // 3612837647
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIFrameworkSimpleButton_OnClick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIFrameworkSimpleButton_OnClick_Statics::NewProp_Field,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIFrameworkSimpleButton_OnClick_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI Framework" },
		{ "ModuleRelativePath", "Public/Widgets/UIFSimpleButton.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIFrameworkSimpleButton_OnClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIFrameworkSimpleButton, nullptr, "OnClick", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUIFrameworkSimpleButton_OnClick_Statics::UIFrameworkSimpleButton_eventOnClick_Parms), Z_Construct_UFunction_UUIFrameworkSimpleButton_OnClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkSimpleButton_OnClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIFrameworkSimpleButton_OnClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkSimpleButton_OnClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIFrameworkSimpleButton_OnClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIFrameworkSimpleButton_OnClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIFrameworkSimpleButton_OnRep_Text_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIFrameworkSimpleButton_OnRep_Text_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/UIFSimpleButton.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIFrameworkSimpleButton_OnRep_Text_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIFrameworkSimpleButton, nullptr, "OnRep_Text", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIFrameworkSimpleButton_OnRep_Text_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkSimpleButton_OnRep_Text_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIFrameworkSimpleButton_OnRep_Text()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIFrameworkSimpleButton_OnRep_Text_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIFrameworkSimpleButton_ServerClick_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIFrameworkSimpleButton_ServerClick_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIFrameworkSimpleButton_eventServerClick_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIFrameworkSimpleButton_ServerClick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIFrameworkSimpleButton_ServerClick_Statics::NewProp_PlayerController,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIFrameworkSimpleButton_ServerClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/UIFSimpleButton.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIFrameworkSimpleButton_ServerClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIFrameworkSimpleButton, nullptr, "ServerClick", nullptr, nullptr, sizeof(UIFrameworkSimpleButton_eventServerClick_Parms), Z_Construct_UFunction_UUIFrameworkSimpleButton_ServerClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkSimpleButton_ServerClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIFrameworkSimpleButton_ServerClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkSimpleButton_ServerClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIFrameworkSimpleButton_ServerClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIFrameworkSimpleButton_ServerClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIFrameworkSimpleButton_SetText_Statics
	{
		struct UIFrameworkSimpleButton_eventSetText_Parms
		{
			FText Value;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UUIFrameworkSimpleButton_SetText_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIFrameworkSimpleButton_eventSetText_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIFrameworkSimpleButton_SetText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIFrameworkSimpleButton_SetText_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIFrameworkSimpleButton_SetText_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI Framework" },
		{ "ModuleRelativePath", "Public/Widgets/UIFSimpleButton.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIFrameworkSimpleButton_SetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIFrameworkSimpleButton, nullptr, "SetText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUIFrameworkSimpleButton_SetText_Statics::UIFrameworkSimpleButton_eventSetText_Parms), Z_Construct_UFunction_UUIFrameworkSimpleButton_SetText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkSimpleButton_SetText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIFrameworkSimpleButton_SetText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkSimpleButton_SetText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIFrameworkSimpleButton_SetText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIFrameworkSimpleButton_SetText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUIFrameworkSimpleButton);
	UClass* Z_Construct_UClass_UUIFrameworkSimpleButton_NoRegister()
	{
		return UUIFrameworkSimpleButton::StaticClass();
	}
	struct Z_Construct_UClass_UUIFrameworkSimpleButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClickEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClickEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUIFrameworkSimpleButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUIFrameworkWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UIFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUIFrameworkSimpleButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUIFrameworkSimpleButton_OnClick, "OnClick" }, // 3730505012
		{ &Z_Construct_UFunction_UUIFrameworkSimpleButton_OnRep_Text, "OnRep_Text" }, // 3988435612
		{ &Z_Construct_UFunction_UUIFrameworkSimpleButton_ServerClick, "ServerClick" }, // 4261694216
		{ &Z_Construct_UFunction_UUIFrameworkSimpleButton_SetText, "SetText" }, // 2874963750
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIFrameworkSimpleButton_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "DisplayName", "Simple Button UIFramework" },
		{ "IncludePath", "Widgets/UIFSimpleButton.h" },
		{ "ModuleRelativePath", "Public/Widgets/UIFSimpleButton.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIFrameworkSimpleButton_Statics::NewProp_Text_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "UI Framework" },
		{ "ModuleRelativePath", "Public/Widgets/UIFSimpleButton.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UUIFrameworkSimpleButton_Statics::NewProp_Text = { "Text", "OnRep_Text", (EPropertyFlags)0x0040000100000035, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UUIFrameworkSimpleButton::SetText_WrapperImpl, &UUIFrameworkSimpleButton::GetText_WrapperImpl, STRUCT_OFFSET(UUIFrameworkSimpleButton, Text), METADATA_PARAMS(Z_Construct_UClass_UUIFrameworkSimpleButton_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIFrameworkSimpleButton_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIFrameworkSimpleButton_Statics::NewProp_ClickEvent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "UI Framework" },
		{ "DisallowedViewAccess", "true" },
		{ "ModuleRelativePath", "Public/Widgets/UIFSimpleButton.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUIFrameworkSimpleButton_Statics::NewProp_ClickEvent = { "ClickEvent", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, &UUIFrameworkSimpleButton::GetClickEvent_WrapperImpl, STRUCT_OFFSET(UUIFrameworkSimpleButton, ClickEvent), Z_Construct_UScriptStruct_FUIFrameworkClickEventArgument, METADATA_PARAMS(Z_Construct_UClass_UUIFrameworkSimpleButton_Statics::NewProp_ClickEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIFrameworkSimpleButton_Statics::NewProp_ClickEvent_MetaData)) }; // 4252764634
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUIFrameworkSimpleButton_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIFrameworkSimpleButton_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIFrameworkSimpleButton_Statics::NewProp_ClickEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUIFrameworkSimpleButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUIFrameworkSimpleButton>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUIFrameworkSimpleButton_Statics::ClassParams = {
		&UUIFrameworkSimpleButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUIFrameworkSimpleButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUIFrameworkSimpleButton_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUIFrameworkSimpleButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUIFrameworkSimpleButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUIFrameworkSimpleButton()
	{
		if (!Z_Registration_Info_UClass_UUIFrameworkSimpleButton.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUIFrameworkSimpleButton.OuterSingleton, Z_Construct_UClass_UUIFrameworkSimpleButton_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUIFrameworkSimpleButton.OuterSingleton;
	}
	template<> UIFRAMEWORK_API UClass* StaticClass<UUIFrameworkSimpleButton>()
	{
		return UUIFrameworkSimpleButton::StaticClass();
	}

	void UUIFrameworkSimpleButton::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Text(TEXT("Text"));

		const bool bIsValid = true
			&& Name_Text == ClassReps[(int32)ENetFields_Private::Text].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UUIFrameworkSimpleButton"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUIFrameworkSimpleButton);
	UUIFrameworkSimpleButton::~UUIFrameworkSimpleButton() {}
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UUIFrameworkSimpleButton, Text)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UUIFrameworkSimpleButton, ClickEvent)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_BEGIN(UUIFrameworkSimpleButton)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UUIFrameworkSimpleButton, Text)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UUIFrameworkSimpleButton, ClickEvent)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_END(UUIFrameworkSimpleButton);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFSimpleButton_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFSimpleButton_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUIFrameworkSimpleButton, UUIFrameworkSimpleButton::StaticClass, TEXT("UUIFrameworkSimpleButton"), &Z_Registration_Info_UClass_UUIFrameworkSimpleButton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUIFrameworkSimpleButton), 2918844913U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFSimpleButton_h_2321918711(TEXT("/Script/UIFramework"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFSimpleButton_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFSimpleButton_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
