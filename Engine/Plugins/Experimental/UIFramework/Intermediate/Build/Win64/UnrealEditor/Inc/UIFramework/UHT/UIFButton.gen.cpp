// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/UIFButton.h"
#include "Types/UIFSlotBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIFButton() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	UIFRAMEWORK_API UClass* Z_Construct_UClass_UUIFrameworkButton();
	UIFRAMEWORK_API UClass* Z_Construct_UClass_UUIFrameworkButton_NoRegister();
	UIFRAMEWORK_API UClass* Z_Construct_UClass_UUIFrameworkWidget();
	UIFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FUIFrameworkSimpleSlot();
	UPackage* Z_Construct_UPackage__Script_UIFramework();
// End Cross Module References
	DEFINE_FUNCTION(UUIFrameworkButton::execOnRep_Slot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Slot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIFrameworkButton::execServerClick)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerClick_Implementation(Z_Param_PlayerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIFrameworkButton::execHandleClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIFrameworkButton::execGetContent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUIFrameworkSimpleSlot*)Z_Param__Result=P_THIS->GetContent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIFrameworkButton::execSetContent)
	{
		P_GET_STRUCT(FUIFrameworkSimpleSlot,Z_Param_Content);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetContent(Z_Param_Content);
		P_NATIVE_END;
	}
	struct UIFrameworkButton_eventServerClick_Parms
	{
		APlayerController* PlayerController;
	};
	static FName NAME_UUIFrameworkButton_ServerClick = FName(TEXT("ServerClick"));
	void UUIFrameworkButton::ServerClick(APlayerController* PlayerController)
	{
		UIFrameworkButton_eventServerClick_Parms Parms;
		Parms.PlayerController=PlayerController;
		ProcessEvent(FindFunctionChecked(NAME_UUIFrameworkButton_ServerClick),&Parms);
	}
	void UUIFrameworkButton::StaticRegisterNativesUUIFrameworkButton()
	{
		UClass* Class = UUIFrameworkButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetContent", &UUIFrameworkButton::execGetContent },
			{ "HandleClick", &UUIFrameworkButton::execHandleClick },
			{ "OnRep_Slot", &UUIFrameworkButton::execOnRep_Slot },
			{ "ServerClick", &UUIFrameworkButton::execServerClick },
			{ "SetContent", &UUIFrameworkButton::execSetContent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUIFrameworkButton_GetContent_Statics
	{
		struct UIFrameworkButton_eventGetContent_Parms
		{
			FUIFrameworkSimpleSlot ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUIFrameworkButton_GetContent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIFrameworkButton_eventGetContent_Parms, ReturnValue), Z_Construct_UScriptStruct_FUIFrameworkSimpleSlot, METADATA_PARAMS(nullptr, 0) }; // 3252238948
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIFrameworkButton_GetContent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIFrameworkButton_GetContent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIFrameworkButton_GetContent_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI Framework" },
		{ "ModuleRelativePath", "Public/Widgets/UIFButton.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIFrameworkButton_GetContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIFrameworkButton, nullptr, "GetContent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUIFrameworkButton_GetContent_Statics::UIFrameworkButton_eventGetContent_Parms), Z_Construct_UFunction_UUIFrameworkButton_GetContent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkButton_GetContent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIFrameworkButton_GetContent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkButton_GetContent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIFrameworkButton_GetContent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIFrameworkButton_GetContent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIFrameworkButton_HandleClick_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIFrameworkButton_HandleClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/UIFButton.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIFrameworkButton_HandleClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIFrameworkButton, nullptr, "HandleClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIFrameworkButton_HandleClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkButton_HandleClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIFrameworkButton_HandleClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIFrameworkButton_HandleClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIFrameworkButton_OnRep_Slot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIFrameworkButton_OnRep_Slot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/UIFButton.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIFrameworkButton_OnRep_Slot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIFrameworkButton, nullptr, "OnRep_Slot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIFrameworkButton_OnRep_Slot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkButton_OnRep_Slot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIFrameworkButton_OnRep_Slot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIFrameworkButton_OnRep_Slot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIFrameworkButton_ServerClick_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIFrameworkButton_ServerClick_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIFrameworkButton_eventServerClick_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIFrameworkButton_ServerClick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIFrameworkButton_ServerClick_Statics::NewProp_PlayerController,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIFrameworkButton_ServerClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/UIFButton.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIFrameworkButton_ServerClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIFrameworkButton, nullptr, "ServerClick", nullptr, nullptr, sizeof(UIFrameworkButton_eventServerClick_Parms), Z_Construct_UFunction_UUIFrameworkButton_ServerClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkButton_ServerClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIFrameworkButton_ServerClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkButton_ServerClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIFrameworkButton_ServerClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIFrameworkButton_ServerClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIFrameworkButton_SetContent_Statics
	{
		struct UIFrameworkButton_eventSetContent_Parms
		{
			FUIFrameworkSimpleSlot Content;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Content;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUIFrameworkButton_SetContent_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIFrameworkButton_eventSetContent_Parms, Content), Z_Construct_UScriptStruct_FUIFrameworkSimpleSlot, METADATA_PARAMS(nullptr, 0) }; // 3252238948
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIFrameworkButton_SetContent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIFrameworkButton_SetContent_Statics::NewProp_Content,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIFrameworkButton_SetContent_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI Framework" },
		{ "ModuleRelativePath", "Public/Widgets/UIFButton.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIFrameworkButton_SetContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIFrameworkButton, nullptr, "SetContent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUIFrameworkButton_SetContent_Statics::UIFrameworkButton_eventSetContent_Parms), Z_Construct_UFunction_UUIFrameworkButton_SetContent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkButton_SetContent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIFrameworkButton_SetContent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkButton_SetContent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIFrameworkButton_SetContent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIFrameworkButton_SetContent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUIFrameworkButton);
	UClass* Z_Construct_UClass_UUIFrameworkButton_NoRegister()
	{
		return UUIFrameworkButton::StaticClass();
	}
	struct Z_Construct_UClass_UUIFrameworkButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Slot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUIFrameworkButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUIFrameworkWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UIFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUIFrameworkButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUIFrameworkButton_GetContent, "GetContent" }, // 2466403089
		{ &Z_Construct_UFunction_UUIFrameworkButton_HandleClick, "HandleClick" }, // 402253106
		{ &Z_Construct_UFunction_UUIFrameworkButton_OnRep_Slot, "OnRep_Slot" }, // 735679572
		{ &Z_Construct_UFunction_UUIFrameworkButton_ServerClick, "ServerClick" }, // 3993192238
		{ &Z_Construct_UFunction_UUIFrameworkButton_SetContent, "SetContent" }, // 3804850683
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIFrameworkButton_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "DisplayName", "Button UIFramework" },
		{ "IncludePath", "Widgets/UIFButton.h" },
		{ "ModuleRelativePath", "Public/Widgets/UIFButton.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIFrameworkButton_Statics::NewProp_Slot_MetaData[] = {
		{ "Comment", "/*ExposeOnSpawn, */" },
		{ "ModuleRelativePath", "Public/Widgets/UIFButton.h" },
		{ "ToolTip", "ExposeOnSpawn," },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUIFrameworkButton_Statics::NewProp_Slot = { "Slot", "OnRep_Slot", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUIFrameworkButton, Slot), Z_Construct_UScriptStruct_FUIFrameworkSimpleSlot, METADATA_PARAMS(Z_Construct_UClass_UUIFrameworkButton_Statics::NewProp_Slot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIFrameworkButton_Statics::NewProp_Slot_MetaData)) }; // 3252238948
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUIFrameworkButton_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIFrameworkButton_Statics::NewProp_Slot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUIFrameworkButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUIFrameworkButton>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUIFrameworkButton_Statics::ClassParams = {
		&UUIFrameworkButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUIFrameworkButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUIFrameworkButton_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUIFrameworkButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUIFrameworkButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUIFrameworkButton()
	{
		if (!Z_Registration_Info_UClass_UUIFrameworkButton.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUIFrameworkButton.OuterSingleton, Z_Construct_UClass_UUIFrameworkButton_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUIFrameworkButton.OuterSingleton;
	}
	template<> UIFRAMEWORK_API UClass* StaticClass<UUIFrameworkButton>()
	{
		return UUIFrameworkButton::StaticClass();
	}

	void UUIFrameworkButton::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Slot(TEXT("Slot"));

		const bool bIsValid = true
			&& Name_Slot == ClassReps[(int32)ENetFields_Private::Slot].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UUIFrameworkButton"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUIFrameworkButton);
	UUIFrameworkButton::~UUIFrameworkButton() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUIFrameworkButton, UUIFrameworkButton::StaticClass, TEXT("UUIFrameworkButton"), &Z_Registration_Info_UClass_UUIFrameworkButton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUIFrameworkButton), 149885201U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_2520951139(TEXT("/Script/UIFramework"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
