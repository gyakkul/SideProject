// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/MenuAnchor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMenuAnchor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EMenuPlacement();
	UMG_API UClass* Z_Construct_UClass_UContentWidget();
	UMG_API UClass* Z_Construct_UClass_UMenuAnchor();
	UMG_API UClass* Z_Construct_UClass_UMenuAnchor_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMenuAnchor_GetUserWidget__DelegateSignature();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnMenuOpenChangedEvent__DelegateSignature();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetWidget__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UMG_OnMenuOpenChangedEvent__DelegateSignature_Statics
	{
		struct _Script_UMG_eventOnMenuOpenChangedEvent_Parms
		{
			bool bIsOpen;
		};
		static void NewProp_bIsOpen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOpen;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_UMG_OnMenuOpenChangedEvent__DelegateSignature_Statics::NewProp_bIsOpen_SetBit(void* Obj)
	{
		((_Script_UMG_eventOnMenuOpenChangedEvent_Parms*)Obj)->bIsOpen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UMG_OnMenuOpenChangedEvent__DelegateSignature_Statics::NewProp_bIsOpen = { "bIsOpen", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_UMG_eventOnMenuOpenChangedEvent_Parms), &Z_Construct_UDelegateFunction_UMG_OnMenuOpenChangedEvent__DelegateSignature_Statics::NewProp_bIsOpen_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMG_OnMenuOpenChangedEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnMenuOpenChangedEvent__DelegateSignature_Statics::NewProp_bIsOpen,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMG_OnMenuOpenChangedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/MenuAnchor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_OnMenuOpenChangedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, nullptr, "OnMenuOpenChangedEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UMG_OnMenuOpenChangedEvent__DelegateSignature_Statics::_Script_UMG_eventOnMenuOpenChangedEvent_Parms), Z_Construct_UDelegateFunction_UMG_OnMenuOpenChangedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnMenuOpenChangedEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMG_OnMenuOpenChangedEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnMenuOpenChangedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMG_OnMenuOpenChangedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMG_OnMenuOpenChangedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMenuOpenChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnMenuOpenChangedEvent, bool bIsOpen)
{
	struct _Script_UMG_eventOnMenuOpenChangedEvent_Parms
	{
		bool bIsOpen;
	};
	_Script_UMG_eventOnMenuOpenChangedEvent_Parms Parms;
	Parms.bIsOpen=bIsOpen ? true : false;
	OnMenuOpenChangedEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UMenuAnchor_GetUserWidget__DelegateSignature_Statics
	{
		struct MenuAnchor_eventGetUserWidget_Parms
		{
			UUserWidget* ReturnValue;
		};
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMenuAnchor_GetUserWidget__DelegateSignature_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UMenuAnchor_GetUserWidget__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MenuAnchor_eventGetUserWidget_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMenuAnchor_GetUserWidget__DelegateSignature_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMenuAnchor_GetUserWidget__DelegateSignature_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMenuAnchor_GetUserWidget__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMenuAnchor_GetUserWidget__DelegateSignature_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMenuAnchor_GetUserWidget__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/MenuAnchor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMenuAnchor_GetUserWidget__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuAnchor, nullptr, "GetUserWidget__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UMenuAnchor_GetUserWidget__DelegateSignature_Statics::MenuAnchor_eventGetUserWidget_Parms), Z_Construct_UDelegateFunction_UMenuAnchor_GetUserWidget__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMenuAnchor_GetUserWidget__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMenuAnchor_GetUserWidget__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMenuAnchor_GetUserWidget__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMenuAnchor_GetUserWidget__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMenuAnchor_GetUserWidget__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
UUserWidget* UMenuAnchor::FGetUserWidget_DelegateWrapper(const FScriptDelegate& GetUserWidget)
{
	struct MenuAnchor_eventGetUserWidget_Parms
	{
		UUserWidget* ReturnValue;

		/** Constructor, initializes return property only **/
		MenuAnchor_eventGetUserWidget_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	MenuAnchor_eventGetUserWidget_Parms Parms;
	GetUserWidget.ProcessDelegate<UObject>(&Parms);
	return Parms.ReturnValue;
}
	DEFINE_FUNCTION(UMenuAnchor::execHasOpenSubMenus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasOpenSubMenus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMenuAnchor::execGetMenuPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetMenuPosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMenuAnchor::execShouldOpenDueToClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldOpenDueToClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMenuAnchor::execIsOpen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOpen();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMenuAnchor::execClose)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Close();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMenuAnchor::execOpen)
	{
		P_GET_UBOOL(Z_Param_bFocusMenu);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Open(Z_Param_bFocusMenu);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMenuAnchor::execToggleOpen)
	{
		P_GET_UBOOL(Z_Param_bFocusOnOpen);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleOpen(Z_Param_bFocusOnOpen);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMenuAnchor::execFitInWindow)
	{
		P_GET_UBOOL(Z_Param_bFit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FitInWindow(Z_Param_bFit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMenuAnchor::execSetPlacement)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InPlacement);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlacement(EMenuPlacement(Z_Param_InPlacement));
		P_NATIVE_END;
	}
	void UMenuAnchor::GetPlacement_WrapperImpl(const void* Object, void* OutValue)
	{
		const UMenuAnchor* Obj = (const UMenuAnchor*)Object;
		EMenuPlacement& Result = *(EMenuPlacement*)OutValue;
		Result = (EMenuPlacement)Obj->GetPlacement();
	}
	void UMenuAnchor::SetPlacement_WrapperImpl(void* Object, const void* InValue)
	{
		UMenuAnchor* Obj = (UMenuAnchor*)Object;
		EMenuPlacement Value = (EMenuPlacement)*(uint8*)InValue;
		Obj->SetPlacement(Value);
	}
	void UMenuAnchor::GetbFitInWindow_WrapperImpl(const void* Object, void* OutValue)
	{
		const UMenuAnchor* Obj = (const UMenuAnchor*)Object;
		bool& Result = *(bool*)OutValue;
		Result = (bool)Obj->IsFitInWindow();
	}
	void UMenuAnchor::SetbFitInWindow_WrapperImpl(void* Object, const void* InValue)
	{
		UMenuAnchor* Obj = (UMenuAnchor*)Object;
		bool& Value = *(bool*)InValue;
		Obj->FitInWindow(Value);
	}
	void UMenuAnchor::GetShouldDeferPaintingAfterWindowContent_WrapperImpl(const void* Object, void* OutValue)
	{
		const UMenuAnchor* Obj = (const UMenuAnchor*)Object;
		bool& Result = *(bool*)OutValue;
		Result = (bool)Obj->IsDeferPaintingAfterWindowContent();
	}
	void UMenuAnchor::GetUseApplicationMenuStack_WrapperImpl(const void* Object, void* OutValue)
	{
		const UMenuAnchor* Obj = (const UMenuAnchor*)Object;
		bool& Result = *(bool*)OutValue;
		Result = (bool)Obj->IsUseApplicationMenuStack();
	}
	void UMenuAnchor::StaticRegisterNativesUMenuAnchor()
	{
		UClass* Class = UMenuAnchor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Close", &UMenuAnchor::execClose },
			{ "FitInWindow", &UMenuAnchor::execFitInWindow },
			{ "GetMenuPosition", &UMenuAnchor::execGetMenuPosition },
			{ "HasOpenSubMenus", &UMenuAnchor::execHasOpenSubMenus },
			{ "IsOpen", &UMenuAnchor::execIsOpen },
			{ "Open", &UMenuAnchor::execOpen },
			{ "SetPlacement", &UMenuAnchor::execSetPlacement },
			{ "ShouldOpenDueToClick", &UMenuAnchor::execShouldOpenDueToClick },
			{ "ToggleOpen", &UMenuAnchor::execToggleOpen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMenuAnchor_Close_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMenuAnchor_Close_Statics::Function_MetaDataParams[] = {
		{ "Category", "Menu Anchor" },
		{ "Comment", "/** Closes the menu if it is currently open. */" },
		{ "ModuleRelativePath", "Public/Components/MenuAnchor.h" },
		{ "ToolTip", "Closes the menu if it is currently open." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuAnchor_Close_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuAnchor, nullptr, "Close", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMenuAnchor_Close_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuAnchor_Close_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMenuAnchor_Close()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenuAnchor_Close_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMenuAnchor_FitInWindow_Statics
	{
		struct MenuAnchor_eventFitInWindow_Parms
		{
			bool bFit;
		};
		static void NewProp_bFit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMenuAnchor_FitInWindow_Statics::NewProp_bFit_SetBit(void* Obj)
	{
		((MenuAnchor_eventFitInWindow_Parms*)Obj)->bFit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMenuAnchor_FitInWindow_Statics::NewProp_bFit = { "bFit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MenuAnchor_eventFitInWindow_Parms), &Z_Construct_UFunction_UMenuAnchor_FitInWindow_Statics::NewProp_bFit_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMenuAnchor_FitInWindow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuAnchor_FitInWindow_Statics::NewProp_bFit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMenuAnchor_FitInWindow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Menu Anchor" },
		{ "ModuleRelativePath", "Public/Components/MenuAnchor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuAnchor_FitInWindow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuAnchor, nullptr, "FitInWindow", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMenuAnchor_FitInWindow_Statics::MenuAnchor_eventFitInWindow_Parms), Z_Construct_UFunction_UMenuAnchor_FitInWindow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuAnchor_FitInWindow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMenuAnchor_FitInWindow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuAnchor_FitInWindow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMenuAnchor_FitInWindow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenuAnchor_FitInWindow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMenuAnchor_GetMenuPosition_Statics
	{
		struct MenuAnchor_eventGetMenuPosition_Parms
		{
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMenuAnchor_GetMenuPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MenuAnchor_eventGetMenuPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMenuAnchor_GetMenuPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuAnchor_GetMenuPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMenuAnchor_GetMenuPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Menu Anchor" },
		{ "Comment", "/** Returns the current menu position */" },
		{ "ModuleRelativePath", "Public/Components/MenuAnchor.h" },
		{ "ToolTip", "Returns the current menu position" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuAnchor_GetMenuPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuAnchor, nullptr, "GetMenuPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMenuAnchor_GetMenuPosition_Statics::MenuAnchor_eventGetMenuPosition_Parms), Z_Construct_UFunction_UMenuAnchor_GetMenuPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuAnchor_GetMenuPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMenuAnchor_GetMenuPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuAnchor_GetMenuPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMenuAnchor_GetMenuPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenuAnchor_GetMenuPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMenuAnchor_HasOpenSubMenus_Statics
	{
		struct MenuAnchor_eventHasOpenSubMenus_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMenuAnchor_HasOpenSubMenus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MenuAnchor_eventHasOpenSubMenus_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMenuAnchor_HasOpenSubMenus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MenuAnchor_eventHasOpenSubMenus_Parms), &Z_Construct_UFunction_UMenuAnchor_HasOpenSubMenus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMenuAnchor_HasOpenSubMenus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuAnchor_HasOpenSubMenus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMenuAnchor_HasOpenSubMenus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Menu Anchor" },
		{ "Comment", "/** Returns whether this menu has open submenus */" },
		{ "ModuleRelativePath", "Public/Components/MenuAnchor.h" },
		{ "ToolTip", "Returns whether this menu has open submenus" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuAnchor_HasOpenSubMenus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuAnchor, nullptr, "HasOpenSubMenus", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMenuAnchor_HasOpenSubMenus_Statics::MenuAnchor_eventHasOpenSubMenus_Parms), Z_Construct_UFunction_UMenuAnchor_HasOpenSubMenus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuAnchor_HasOpenSubMenus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMenuAnchor_HasOpenSubMenus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuAnchor_HasOpenSubMenus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMenuAnchor_HasOpenSubMenus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenuAnchor_HasOpenSubMenus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMenuAnchor_IsOpen_Statics
	{
		struct MenuAnchor_eventIsOpen_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMenuAnchor_IsOpen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MenuAnchor_eventIsOpen_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMenuAnchor_IsOpen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MenuAnchor_eventIsOpen_Parms), &Z_Construct_UFunction_UMenuAnchor_IsOpen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMenuAnchor_IsOpen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuAnchor_IsOpen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMenuAnchor_IsOpen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Menu Anchor" },
		{ "Comment", "/** Returns true if the popup is open; false otherwise. */" },
		{ "ModuleRelativePath", "Public/Components/MenuAnchor.h" },
		{ "ToolTip", "Returns true if the popup is open; false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuAnchor_IsOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuAnchor, nullptr, "IsOpen", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMenuAnchor_IsOpen_Statics::MenuAnchor_eventIsOpen_Parms), Z_Construct_UFunction_UMenuAnchor_IsOpen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuAnchor_IsOpen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMenuAnchor_IsOpen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuAnchor_IsOpen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMenuAnchor_IsOpen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenuAnchor_IsOpen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMenuAnchor_Open_Statics
	{
		struct MenuAnchor_eventOpen_Parms
		{
			bool bFocusMenu;
		};
		static void NewProp_bFocusMenu_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFocusMenu;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMenuAnchor_Open_Statics::NewProp_bFocusMenu_SetBit(void* Obj)
	{
		((MenuAnchor_eventOpen_Parms*)Obj)->bFocusMenu = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMenuAnchor_Open_Statics::NewProp_bFocusMenu = { "bFocusMenu", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MenuAnchor_eventOpen_Parms), &Z_Construct_UFunction_UMenuAnchor_Open_Statics::NewProp_bFocusMenu_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMenuAnchor_Open_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuAnchor_Open_Statics::NewProp_bFocusMenu,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMenuAnchor_Open_Statics::Function_MetaDataParams[] = {
		{ "Category", "Menu Anchor" },
		{ "Comment", "/** Opens the menu if it is not already open */" },
		{ "ModuleRelativePath", "Public/Components/MenuAnchor.h" },
		{ "ToolTip", "Opens the menu if it is not already open" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuAnchor_Open_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuAnchor, nullptr, "Open", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMenuAnchor_Open_Statics::MenuAnchor_eventOpen_Parms), Z_Construct_UFunction_UMenuAnchor_Open_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuAnchor_Open_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMenuAnchor_Open_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuAnchor_Open_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMenuAnchor_Open()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenuAnchor_Open_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMenuAnchor_SetPlacement_Statics
	{
		struct MenuAnchor_eventSetPlacement_Parms
		{
			TEnumAsByte<EMenuPlacement> InPlacement;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InPlacement;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMenuAnchor_SetPlacement_Statics::NewProp_InPlacement = { "InPlacement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MenuAnchor_eventSetPlacement_Parms, InPlacement), Z_Construct_UEnum_SlateCore_EMenuPlacement, METADATA_PARAMS(nullptr, 0) }; // 1455066231
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMenuAnchor_SetPlacement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuAnchor_SetPlacement_Statics::NewProp_InPlacement,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMenuAnchor_SetPlacement_Statics::Function_MetaDataParams[] = {
		{ "Category", "Menu Anchor" },
		{ "Comment", "//TODO UMG Add Set MenuClass\n" },
		{ "ModuleRelativePath", "Public/Components/MenuAnchor.h" },
		{ "ToolTip", "TODO UMG Add Set MenuClass" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuAnchor_SetPlacement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuAnchor, nullptr, "SetPlacement", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMenuAnchor_SetPlacement_Statics::MenuAnchor_eventSetPlacement_Parms), Z_Construct_UFunction_UMenuAnchor_SetPlacement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuAnchor_SetPlacement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMenuAnchor_SetPlacement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuAnchor_SetPlacement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMenuAnchor_SetPlacement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenuAnchor_SetPlacement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMenuAnchor_ShouldOpenDueToClick_Statics
	{
		struct MenuAnchor_eventShouldOpenDueToClick_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMenuAnchor_ShouldOpenDueToClick_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MenuAnchor_eventShouldOpenDueToClick_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMenuAnchor_ShouldOpenDueToClick_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MenuAnchor_eventShouldOpenDueToClick_Parms), &Z_Construct_UFunction_UMenuAnchor_ShouldOpenDueToClick_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMenuAnchor_ShouldOpenDueToClick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuAnchor_ShouldOpenDueToClick_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMenuAnchor_ShouldOpenDueToClick_Statics::Function_MetaDataParams[] = {
		{ "Category", "Menu Anchor" },
		{ "Comment", "/**\n\x09 * Returns true if we should open the menu due to a click. Sometimes we should not, if\n\x09 * the same MouseDownEvent that just closed the menu is about to re-open it because it \n\x09 * happens to land on the button.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/MenuAnchor.h" },
		{ "ToolTip", "Returns true if we should open the menu due to a click. Sometimes we should not, if\nthe same MouseDownEvent that just closed the menu is about to re-open it because it\nhappens to land on the button." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuAnchor_ShouldOpenDueToClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuAnchor, nullptr, "ShouldOpenDueToClick", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMenuAnchor_ShouldOpenDueToClick_Statics::MenuAnchor_eventShouldOpenDueToClick_Parms), Z_Construct_UFunction_UMenuAnchor_ShouldOpenDueToClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuAnchor_ShouldOpenDueToClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMenuAnchor_ShouldOpenDueToClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuAnchor_ShouldOpenDueToClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMenuAnchor_ShouldOpenDueToClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenuAnchor_ShouldOpenDueToClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMenuAnchor_ToggleOpen_Statics
	{
		struct MenuAnchor_eventToggleOpen_Parms
		{
			bool bFocusOnOpen;
		};
		static void NewProp_bFocusOnOpen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFocusOnOpen;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMenuAnchor_ToggleOpen_Statics::NewProp_bFocusOnOpen_SetBit(void* Obj)
	{
		((MenuAnchor_eventToggleOpen_Parms*)Obj)->bFocusOnOpen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMenuAnchor_ToggleOpen_Statics::NewProp_bFocusOnOpen = { "bFocusOnOpen", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MenuAnchor_eventToggleOpen_Parms), &Z_Construct_UFunction_UMenuAnchor_ToggleOpen_Statics::NewProp_bFocusOnOpen_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMenuAnchor_ToggleOpen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuAnchor_ToggleOpen_Statics::NewProp_bFocusOnOpen,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMenuAnchor_ToggleOpen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Menu Anchor" },
		{ "Comment", "/**\n\x09 * Toggles the menus open state.\n\x09 *\n\x09 * @param bFocusOnOpen  Should we focus the popup as soon as it opens?\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/MenuAnchor.h" },
		{ "ToolTip", "Toggles the menus open state.\n\n@param bFocusOnOpen  Should we focus the popup as soon as it opens?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuAnchor_ToggleOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuAnchor, nullptr, "ToggleOpen", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMenuAnchor_ToggleOpen_Statics::MenuAnchor_eventToggleOpen_Parms), Z_Construct_UFunction_UMenuAnchor_ToggleOpen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuAnchor_ToggleOpen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMenuAnchor_ToggleOpen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuAnchor_ToggleOpen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMenuAnchor_ToggleOpen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenuAnchor_ToggleOpen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMenuAnchor);
	UClass* Z_Construct_UClass_UMenuAnchor_NoRegister()
	{
		return UMenuAnchor::StaticClass();
	}
	struct Z_Construct_UClass_UMenuAnchor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MenuClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_MenuClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnGetMenuContentEvent_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnGetMenuContentEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnGetUserMenuContentEvent_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnGetUserMenuContentEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Placement_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Placement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFitInWindow_MetaData[];
#endif
		static void NewProp_bFitInWindow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFitInWindow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShouldDeferPaintingAfterWindowContent_MetaData[];
#endif
		static void NewProp_ShouldDeferPaintingAfterWindowContent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldDeferPaintingAfterWindowContent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseApplicationMenuStack_MetaData[];
#endif
		static void NewProp_UseApplicationMenuStack_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseApplicationMenuStack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMenuOpenChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMenuOpenChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMenuAnchor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UContentWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMenuAnchor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMenuAnchor_Close, "Close" }, // 183770871
		{ &Z_Construct_UFunction_UMenuAnchor_FitInWindow, "FitInWindow" }, // 571776334
		{ &Z_Construct_UFunction_UMenuAnchor_GetMenuPosition, "GetMenuPosition" }, // 3738259996
		{ &Z_Construct_UDelegateFunction_UMenuAnchor_GetUserWidget__DelegateSignature, "GetUserWidget__DelegateSignature" }, // 1572217308
		{ &Z_Construct_UFunction_UMenuAnchor_HasOpenSubMenus, "HasOpenSubMenus" }, // 3061664472
		{ &Z_Construct_UFunction_UMenuAnchor_IsOpen, "IsOpen" }, // 1593324087
		{ &Z_Construct_UFunction_UMenuAnchor_Open, "Open" }, // 964726638
		{ &Z_Construct_UFunction_UMenuAnchor_SetPlacement, "SetPlacement" }, // 879466893
		{ &Z_Construct_UFunction_UMenuAnchor_ShouldOpenDueToClick, "ShouldOpenDueToClick" }, // 1402691121
		{ &Z_Construct_UFunction_UMenuAnchor_ToggleOpen, "ToggleOpen" }, // 4291814541
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenuAnchor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The Menu Anchor allows you to specify an location that a popup menu should be anchored to, \n * and should be summoned from.\n * * Single Child\n * * Popup\n */" },
		{ "IncludePath", "Components/MenuAnchor.h" },
		{ "ModuleRelativePath", "Public/Components/MenuAnchor.h" },
		{ "ToolTip", "The Menu Anchor allows you to specify an location that a popup menu should be anchored to,\nand should be summoned from.\n* Single Child\n* Popup" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenuAnchor_Statics::NewProp_MenuClass_MetaData[] = {
		{ "Category", "Menu Anchor" },
		{ "Comment", "/**\n\x09 * The widget class to spawn when the menu is required.  Creates the widget freshly each time.  \n\x09 * If you want to customize the creation of the popup, you should bind a function to OnGetMenuContentEvent \n\x09 * instead.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/MenuAnchor.h" },
		{ "ToolTip", "The widget class to spawn when the menu is required.  Creates the widget freshly each time.\nIf you want to customize the creation of the popup, you should bind a function to OnGetMenuContentEvent\ninstead." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMenuAnchor_Statics::NewProp_MenuClass = { "MenuClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMenuAnchor, MenuClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMenuAnchor_Statics::NewProp_MenuClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMenuAnchor_Statics::NewProp_MenuClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenuAnchor_Statics::NewProp_OnGetMenuContentEvent_MetaData[] = {
		{ "Category", "Events" },
		{ "DeprecationMessage", "4.26. Use OnGetUserMenuContentEvent instead, you may need to make the previous binding return an User Widget." },
		{ "ModuleRelativePath", "Public/Components/MenuAnchor.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UMenuAnchor_Statics::NewProp_OnGetMenuContentEvent = { "OnGetMenuContentEvent", nullptr, (EPropertyFlags)0x0010000000080001, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMenuAnchor, OnGetMenuContentEvent), Z_Construct_UDelegateFunction_UWidget_GetWidget__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMenuAnchor_Statics::NewProp_OnGetMenuContentEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMenuAnchor_Statics::NewProp_OnGetMenuContentEvent_MetaData)) }; // 2161261687
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenuAnchor_Statics::NewProp_OnGetUserMenuContentEvent_MetaData[] = {
		{ "Category", "Events" },
		{ "Comment", "/** Called when the menu content is requested to allow a more customized handling over what to display */" },
		{ "ModuleRelativePath", "Public/Components/MenuAnchor.h" },
		{ "ToolTip", "Called when the menu content is requested to allow a more customized handling over what to display" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UMenuAnchor_Statics::NewProp_OnGetUserMenuContentEvent = { "OnGetUserMenuContentEvent", nullptr, (EPropertyFlags)0x0010000000080001, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMenuAnchor, OnGetUserMenuContentEvent), Z_Construct_UDelegateFunction_UMenuAnchor_GetUserWidget__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMenuAnchor_Statics::NewProp_OnGetUserMenuContentEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMenuAnchor_Statics::NewProp_OnGetUserMenuContentEvent_MetaData)) }; // 1572217308
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenuAnchor_Statics::NewProp_Placement_MetaData[] = {
		{ "BlueprintSetter", "SetPlacement" },
		{ "Category", "Menu Anchor" },
		{ "Comment", "/** The placement location of the summoned widget. */" },
		{ "ModuleRelativePath", "Public/Components/MenuAnchor.h" },
		{ "ToolTip", "The placement location of the summoned widget." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMenuAnchor_Statics::NewProp_Placement = { "Placement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UMenuAnchor::SetPlacement_WrapperImpl, &UMenuAnchor::GetPlacement_WrapperImpl, STRUCT_OFFSET(UMenuAnchor, Placement), Z_Construct_UEnum_SlateCore_EMenuPlacement, METADATA_PARAMS(Z_Construct_UClass_UMenuAnchor_Statics::NewProp_Placement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMenuAnchor_Statics::NewProp_Placement_MetaData)) }; // 1455066231
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenuAnchor_Statics::NewProp_bFitInWindow_MetaData[] = {
		{ "BlueprintSetter", "FitInWindow" },
		{ "Category", "Menu Anchor" },
		{ "Comment", "/** Should the menu anchor attempt to fit the menu inside the window. */" },
		{ "ModuleRelativePath", "Public/Components/MenuAnchor.h" },
		{ "ScriptName", "ShouldFitInWindow" },
		{ "ToolTip", "Should the menu anchor attempt to fit the menu inside the window." },
	};
#endif
	void Z_Construct_UClass_UMenuAnchor_Statics::NewProp_bFitInWindow_SetBit(void* Obj)
	{
		((UMenuAnchor*)Obj)->bFitInWindow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMenuAnchor_Statics::NewProp_bFitInWindow = { "bFitInWindow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UMenuAnchor::SetbFitInWindow_WrapperImpl, &UMenuAnchor::GetbFitInWindow_WrapperImpl, sizeof(bool), sizeof(UMenuAnchor), &Z_Construct_UClass_UMenuAnchor_Statics::NewProp_bFitInWindow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMenuAnchor_Statics::NewProp_bFitInWindow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMenuAnchor_Statics::NewProp_bFitInWindow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenuAnchor_Statics::NewProp_ShouldDeferPaintingAfterWindowContent_MetaData[] = {
		{ "Category", "Menu Anchor" },
		{ "ModuleRelativePath", "Public/Components/MenuAnchor.h" },
	};
#endif
	void Z_Construct_UClass_UMenuAnchor_Statics::NewProp_ShouldDeferPaintingAfterWindowContent_SetBit(void* Obj)
	{
		((UMenuAnchor*)Obj)->ShouldDeferPaintingAfterWindowContent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMenuAnchor_Statics::NewProp_ShouldDeferPaintingAfterWindowContent = { "ShouldDeferPaintingAfterWindowContent", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, &UMenuAnchor::GetShouldDeferPaintingAfterWindowContent_WrapperImpl, sizeof(bool), sizeof(UMenuAnchor), &Z_Construct_UClass_UMenuAnchor_Statics::NewProp_ShouldDeferPaintingAfterWindowContent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMenuAnchor_Statics::NewProp_ShouldDeferPaintingAfterWindowContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMenuAnchor_Statics::NewProp_ShouldDeferPaintingAfterWindowContent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenuAnchor_Statics::NewProp_UseApplicationMenuStack_MetaData[] = {
		{ "Category", "Menu Anchor" },
		{ "Comment", "/** Does this menu behave like a normal stacked menu? Set it to false to control the menu's lifetime yourself. */" },
		{ "ModuleRelativePath", "Public/Components/MenuAnchor.h" },
		{ "ToolTip", "Does this menu behave like a normal stacked menu? Set it to false to control the menu's lifetime yourself." },
	};
#endif
	void Z_Construct_UClass_UMenuAnchor_Statics::NewProp_UseApplicationMenuStack_SetBit(void* Obj)
	{
		((UMenuAnchor*)Obj)->UseApplicationMenuStack = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMenuAnchor_Statics::NewProp_UseApplicationMenuStack = { "UseApplicationMenuStack", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, &UMenuAnchor::GetUseApplicationMenuStack_WrapperImpl, sizeof(bool), sizeof(UMenuAnchor), &Z_Construct_UClass_UMenuAnchor_Statics::NewProp_UseApplicationMenuStack_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMenuAnchor_Statics::NewProp_UseApplicationMenuStack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMenuAnchor_Statics::NewProp_UseApplicationMenuStack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenuAnchor_Statics::NewProp_OnMenuOpenChanged_MetaData[] = {
		{ "Category", "Menu Anchor|Event" },
		{ "Comment", "/** Called when the opened state of the menu changes */" },
		{ "ModuleRelativePath", "Public/Components/MenuAnchor.h" },
		{ "ToolTip", "Called when the opened state of the menu changes" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMenuAnchor_Statics::NewProp_OnMenuOpenChanged = { "OnMenuOpenChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMenuAnchor, OnMenuOpenChanged), Z_Construct_UDelegateFunction_UMG_OnMenuOpenChangedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMenuAnchor_Statics::NewProp_OnMenuOpenChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMenuAnchor_Statics::NewProp_OnMenuOpenChanged_MetaData)) }; // 2083067397
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMenuAnchor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuAnchor_Statics::NewProp_MenuClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuAnchor_Statics::NewProp_OnGetMenuContentEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuAnchor_Statics::NewProp_OnGetUserMenuContentEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuAnchor_Statics::NewProp_Placement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuAnchor_Statics::NewProp_bFitInWindow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuAnchor_Statics::NewProp_ShouldDeferPaintingAfterWindowContent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuAnchor_Statics::NewProp_UseApplicationMenuStack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuAnchor_Statics::NewProp_OnMenuOpenChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMenuAnchor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMenuAnchor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMenuAnchor_Statics::ClassParams = {
		&UMenuAnchor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMenuAnchor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMenuAnchor_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMenuAnchor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMenuAnchor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMenuAnchor()
	{
		if (!Z_Registration_Info_UClass_UMenuAnchor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMenuAnchor.OuterSingleton, Z_Construct_UClass_UMenuAnchor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMenuAnchor.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UMenuAnchor>()
	{
		return UMenuAnchor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMenuAnchor);
	UMenuAnchor::~UMenuAnchor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_MenuAnchor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_MenuAnchor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMenuAnchor, UMenuAnchor::StaticClass, TEXT("UMenuAnchor"), &Z_Registration_Info_UClass_UMenuAnchor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMenuAnchor), 3660825607U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_MenuAnchor_h_640508533(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_MenuAnchor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_MenuAnchor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
