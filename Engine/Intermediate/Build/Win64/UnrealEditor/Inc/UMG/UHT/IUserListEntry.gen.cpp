// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blueprint/IUserListEntry.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIUserListEntry() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UMG_API UClass* Z_Construct_UClass_UListViewBase_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserListEntry();
	UMG_API UClass* Z_Construct_UClass_UUserListEntry_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserListEntryLibrary();
	UMG_API UClass* Z_Construct_UClass_UUserListEntryLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	struct UserListEntry_eventBP_OnItemExpansionChanged_Parms
	{
		bool bIsExpanded;
	};
	struct UserListEntry_eventBP_OnItemSelectionChanged_Parms
	{
		bool bIsSelected;
	};
	void IUserListEntry::BP_OnEntryReleased()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BP_OnEntryReleased instead.");
	}
	void IUserListEntry::BP_OnItemExpansionChanged(bool bIsExpanded)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BP_OnItemExpansionChanged instead.");
	}
	void IUserListEntry::BP_OnItemSelectionChanged(bool bIsSelected)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BP_OnItemSelectionChanged instead.");
	}
	void UUserListEntry::StaticRegisterNativesUUserListEntry()
	{
	}
	struct Z_Construct_UFunction_UUserListEntry_BP_OnEntryReleased_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserListEntry_BP_OnEntryReleased_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserListEntry" },
		{ "Comment", "/** Called when this entry is released from the owning table and no longer represents any list item */" },
		{ "DisplayName", "On Entry Released" },
		{ "ModuleRelativePath", "Public/Blueprint/IUserListEntry.h" },
		{ "ToolTip", "Called when this entry is released from the owning table and no longer represents any list item" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserListEntry_BP_OnEntryReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserListEntry, nullptr, "BP_OnEntryReleased", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserListEntry_BP_OnEntryReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserListEntry_BP_OnEntryReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserListEntry_BP_OnEntryReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserListEntry_BP_OnEntryReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserListEntry_BP_OnItemExpansionChanged_Statics
	{
		static void NewProp_bIsExpanded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsExpanded;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUserListEntry_BP_OnItemExpansionChanged_Statics::NewProp_bIsExpanded_SetBit(void* Obj)
	{
		((UserListEntry_eventBP_OnItemExpansionChanged_Parms*)Obj)->bIsExpanded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserListEntry_BP_OnItemExpansionChanged_Statics::NewProp_bIsExpanded = { "bIsExpanded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UserListEntry_eventBP_OnItemExpansionChanged_Parms), &Z_Construct_UFunction_UUserListEntry_BP_OnItemExpansionChanged_Statics::NewProp_bIsExpanded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserListEntry_BP_OnItemExpansionChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserListEntry_BP_OnItemExpansionChanged_Statics::NewProp_bIsExpanded,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserListEntry_BP_OnItemExpansionChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserListEntry" },
		{ "Comment", "/** Called when the expansion state of the item represented by this entry changes. Tree view entries only. */" },
		{ "DisplayName", "On Item Expansion Changed" },
		{ "ModuleRelativePath", "Public/Blueprint/IUserListEntry.h" },
		{ "ToolTip", "Called when the expansion state of the item represented by this entry changes. Tree view entries only." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserListEntry_BP_OnItemExpansionChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserListEntry, nullptr, "BP_OnItemExpansionChanged", nullptr, nullptr, sizeof(UserListEntry_eventBP_OnItemExpansionChanged_Parms), Z_Construct_UFunction_UUserListEntry_BP_OnItemExpansionChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserListEntry_BP_OnItemExpansionChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserListEntry_BP_OnItemExpansionChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserListEntry_BP_OnItemExpansionChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserListEntry_BP_OnItemExpansionChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserListEntry_BP_OnItemExpansionChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserListEntry_BP_OnItemSelectionChanged_Statics
	{
		static void NewProp_bIsSelected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSelected;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUserListEntry_BP_OnItemSelectionChanged_Statics::NewProp_bIsSelected_SetBit(void* Obj)
	{
		((UserListEntry_eventBP_OnItemSelectionChanged_Parms*)Obj)->bIsSelected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserListEntry_BP_OnItemSelectionChanged_Statics::NewProp_bIsSelected = { "bIsSelected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UserListEntry_eventBP_OnItemSelectionChanged_Parms), &Z_Construct_UFunction_UUserListEntry_BP_OnItemSelectionChanged_Statics::NewProp_bIsSelected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserListEntry_BP_OnItemSelectionChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserListEntry_BP_OnItemSelectionChanged_Statics::NewProp_bIsSelected,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserListEntry_BP_OnItemSelectionChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserListEntry" },
		{ "Comment", "/** Called when the selection state of the item represented by this entry changes. */" },
		{ "DisplayName", "On Item Selection Changed" },
		{ "ModuleRelativePath", "Public/Blueprint/IUserListEntry.h" },
		{ "ToolTip", "Called when the selection state of the item represented by this entry changes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserListEntry_BP_OnItemSelectionChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserListEntry, nullptr, "BP_OnItemSelectionChanged", nullptr, nullptr, sizeof(UserListEntry_eventBP_OnItemSelectionChanged_Parms), Z_Construct_UFunction_UUserListEntry_BP_OnItemSelectionChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserListEntry_BP_OnItemSelectionChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserListEntry_BP_OnItemSelectionChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserListEntry_BP_OnItemSelectionChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserListEntry_BP_OnItemSelectionChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserListEntry_BP_OnItemSelectionChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUserListEntry);
	UClass* Z_Construct_UClass_UUserListEntry_NoRegister()
	{
		return UUserListEntry::StaticClass();
	}
	struct Z_Construct_UClass_UUserListEntry_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUserListEntry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUserListEntry_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUserListEntry_BP_OnEntryReleased, "BP_OnEntryReleased" }, // 372831501
		{ &Z_Construct_UFunction_UUserListEntry_BP_OnItemExpansionChanged, "BP_OnItemExpansionChanged" }, // 2679947695
		{ &Z_Construct_UFunction_UUserListEntry_BP_OnItemSelectionChanged, "BP_OnItemSelectionChanged" }, // 3890684459
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserListEntry_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Blueprint/IUserListEntry.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUserListEntry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IUserListEntry>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUserListEntry_Statics::ClassParams = {
		&UUserListEntry::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUserListEntry_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUserListEntry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUserListEntry()
	{
		if (!Z_Registration_Info_UClass_UUserListEntry.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUserListEntry.OuterSingleton, Z_Construct_UClass_UUserListEntry_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUserListEntry.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UUserListEntry>()
	{
		return UUserListEntry::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUserListEntry);
	UUserListEntry::~UUserListEntry() {}
	static FName NAME_UUserListEntry_BP_OnEntryReleased = FName(TEXT("BP_OnEntryReleased"));
	void IUserListEntry::Execute_BP_OnEntryReleased(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUserListEntry::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UUserListEntry_BP_OnEntryReleased);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
	}
	static FName NAME_UUserListEntry_BP_OnItemExpansionChanged = FName(TEXT("BP_OnItemExpansionChanged"));
	void IUserListEntry::Execute_BP_OnItemExpansionChanged(UObject* O, bool bIsExpanded)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUserListEntry::StaticClass()));
		UserListEntry_eventBP_OnItemExpansionChanged_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UUserListEntry_BP_OnItemExpansionChanged);
		if (Func)
		{
			Parms.bIsExpanded=bIsExpanded;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_UUserListEntry_BP_OnItemSelectionChanged = FName(TEXT("BP_OnItemSelectionChanged"));
	void IUserListEntry::Execute_BP_OnItemSelectionChanged(UObject* O, bool bIsSelected)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUserListEntry::StaticClass()));
		UserListEntry_eventBP_OnItemSelectionChanged_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UUserListEntry_BP_OnItemSelectionChanged);
		if (Func)
		{
			Parms.bIsSelected=bIsSelected;
			O->ProcessEvent(Func, &Parms);
		}
	}
	DEFINE_FUNCTION(UUserListEntryLibrary::execGetOwningListView)
	{
		P_GET_TINTERFACE(IUserListEntry,Z_Param_UserListEntry);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UListViewBase**)Z_Param__Result=UUserListEntryLibrary::GetOwningListView(Z_Param_UserListEntry);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserListEntryLibrary::execIsListItemExpanded)
	{
		P_GET_TINTERFACE(IUserListEntry,Z_Param_UserListEntry);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUserListEntryLibrary::IsListItemExpanded(Z_Param_UserListEntry);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserListEntryLibrary::execIsListItemSelected)
	{
		P_GET_TINTERFACE(IUserListEntry,Z_Param_UserListEntry);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUserListEntryLibrary::IsListItemSelected(Z_Param_UserListEntry);
		P_NATIVE_END;
	}
	void UUserListEntryLibrary::StaticRegisterNativesUUserListEntryLibrary()
	{
		UClass* Class = UUserListEntryLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOwningListView", &UUserListEntryLibrary::execGetOwningListView },
			{ "IsListItemExpanded", &UUserListEntryLibrary::execIsListItemExpanded },
			{ "IsListItemSelected", &UUserListEntryLibrary::execIsListItemSelected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUserListEntryLibrary_GetOwningListView_Statics
	{
		struct UserListEntryLibrary_eventGetOwningListView_Parms
		{
			TScriptInterface<IUserListEntry> UserListEntry;
			UListViewBase* ReturnValue;
		};
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_UserListEntry;
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
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UUserListEntryLibrary_GetOwningListView_Statics::NewProp_UserListEntry = { "UserListEntry", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserListEntryLibrary_eventGetOwningListView_Parms, UserListEntry), Z_Construct_UClass_UUserListEntry_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserListEntryLibrary_GetOwningListView_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUserListEntryLibrary_GetOwningListView_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserListEntryLibrary_eventGetOwningListView_Parms, ReturnValue), Z_Construct_UClass_UListViewBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUserListEntryLibrary_GetOwningListView_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserListEntryLibrary_GetOwningListView_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserListEntryLibrary_GetOwningListView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserListEntryLibrary_GetOwningListView_Statics::NewProp_UserListEntry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserListEntryLibrary_GetOwningListView_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserListEntryLibrary_GetOwningListView_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserListEntry" },
		{ "Comment", "/** \n\x09 * Returns the list view that contains this entry.\n\x09 * @param UserListEntry Note: Visually not transmitted, but this defaults to \"self\". No need to hook up if calling internally.\n\x09 */" },
		{ "DefaultToSelf", "UserListEntry" },
		{ "ModuleRelativePath", "Public/Blueprint/IUserListEntry.h" },
		{ "ToolTip", "Returns the list view that contains this entry.\n@param UserListEntry Note: Visually not transmitted, but this defaults to \"self\". No need to hook up if calling internally." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserListEntryLibrary_GetOwningListView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserListEntryLibrary, nullptr, "GetOwningListView", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUserListEntryLibrary_GetOwningListView_Statics::UserListEntryLibrary_eventGetOwningListView_Parms), Z_Construct_UFunction_UUserListEntryLibrary_GetOwningListView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserListEntryLibrary_GetOwningListView_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserListEntryLibrary_GetOwningListView_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserListEntryLibrary_GetOwningListView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserListEntryLibrary_GetOwningListView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserListEntryLibrary_GetOwningListView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserListEntryLibrary_IsListItemExpanded_Statics
	{
		struct UserListEntryLibrary_eventIsListItemExpanded_Parms
		{
			TScriptInterface<IUserListEntry> UserListEntry;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_UserListEntry;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UUserListEntryLibrary_IsListItemExpanded_Statics::NewProp_UserListEntry = { "UserListEntry", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserListEntryLibrary_eventIsListItemExpanded_Parms, UserListEntry), Z_Construct_UClass_UUserListEntry_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUserListEntryLibrary_IsListItemExpanded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UserListEntryLibrary_eventIsListItemExpanded_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserListEntryLibrary_IsListItemExpanded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UserListEntryLibrary_eventIsListItemExpanded_Parms), &Z_Construct_UFunction_UUserListEntryLibrary_IsListItemExpanded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserListEntryLibrary_IsListItemExpanded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserListEntryLibrary_IsListItemExpanded_Statics::NewProp_UserListEntry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserListEntryLibrary_IsListItemExpanded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserListEntryLibrary_IsListItemExpanded_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserListEntry" },
		{ "Comment", "/** \n\x09 * Returns true if the item represented by this entry is currently expanded and showing its children. Tree view entries only.\n\x09 * @param UserListEntry Note: Visually not transmitted, but this defaults to \"self\". No need to hook up if calling internally.\n\x09 */" },
		{ "DefaultToSelf", "UserListEntry" },
		{ "ModuleRelativePath", "Public/Blueprint/IUserListEntry.h" },
		{ "ToolTip", "Returns true if the item represented by this entry is currently expanded and showing its children. Tree view entries only.\n@param UserListEntry Note: Visually not transmitted, but this defaults to \"self\". No need to hook up if calling internally." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserListEntryLibrary_IsListItemExpanded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserListEntryLibrary, nullptr, "IsListItemExpanded", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUserListEntryLibrary_IsListItemExpanded_Statics::UserListEntryLibrary_eventIsListItemExpanded_Parms), Z_Construct_UFunction_UUserListEntryLibrary_IsListItemExpanded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserListEntryLibrary_IsListItemExpanded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserListEntryLibrary_IsListItemExpanded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserListEntryLibrary_IsListItemExpanded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserListEntryLibrary_IsListItemExpanded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserListEntryLibrary_IsListItemExpanded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserListEntryLibrary_IsListItemSelected_Statics
	{
		struct UserListEntryLibrary_eventIsListItemSelected_Parms
		{
			TScriptInterface<IUserListEntry> UserListEntry;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_UserListEntry;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UUserListEntryLibrary_IsListItemSelected_Statics::NewProp_UserListEntry = { "UserListEntry", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserListEntryLibrary_eventIsListItemSelected_Parms, UserListEntry), Z_Construct_UClass_UUserListEntry_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUserListEntryLibrary_IsListItemSelected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UserListEntryLibrary_eventIsListItemSelected_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserListEntryLibrary_IsListItemSelected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UserListEntryLibrary_eventIsListItemSelected_Parms), &Z_Construct_UFunction_UUserListEntryLibrary_IsListItemSelected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserListEntryLibrary_IsListItemSelected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserListEntryLibrary_IsListItemSelected_Statics::NewProp_UserListEntry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserListEntryLibrary_IsListItemSelected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserListEntryLibrary_IsListItemSelected_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserListEntry" },
		{ "Comment", "/** \n\x09 * Returns true if the item represented by this entry is currently selected in the owning list view. \n\x09 * @param UserListEntry Note: Visually not transmitted, but this defaults to \"self\". No need to hook up if calling internally.\n\x09 */" },
		{ "DefaultToSelf", "UserListEntry" },
		{ "ModuleRelativePath", "Public/Blueprint/IUserListEntry.h" },
		{ "ToolTip", "Returns true if the item represented by this entry is currently selected in the owning list view.\n@param UserListEntry Note: Visually not transmitted, but this defaults to \"self\". No need to hook up if calling internally." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserListEntryLibrary_IsListItemSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserListEntryLibrary, nullptr, "IsListItemSelected", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUserListEntryLibrary_IsListItemSelected_Statics::UserListEntryLibrary_eventIsListItemSelected_Parms), Z_Construct_UFunction_UUserListEntryLibrary_IsListItemSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserListEntryLibrary_IsListItemSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserListEntryLibrary_IsListItemSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserListEntryLibrary_IsListItemSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserListEntryLibrary_IsListItemSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserListEntryLibrary_IsListItemSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUserListEntryLibrary);
	UClass* Z_Construct_UClass_UUserListEntryLibrary_NoRegister()
	{
		return UUserListEntryLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UUserListEntryLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUserListEntryLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUserListEntryLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUserListEntryLibrary_GetOwningListView, "GetOwningListView" }, // 2317616457
		{ &Z_Construct_UFunction_UUserListEntryLibrary_IsListItemExpanded, "IsListItemExpanded" }, // 2520606590
		{ &Z_Construct_UFunction_UUserListEntryLibrary_IsListItemSelected, "IsListItemSelected" }, // 2613779151
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserListEntryLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Static library to supply \"for free\" functionality to widgets that implement IUserListEntry */" },
		{ "IncludePath", "Blueprint/IUserListEntry.h" },
		{ "ModuleRelativePath", "Public/Blueprint/IUserListEntry.h" },
		{ "ToolTip", "Static library to supply \"for free\" functionality to widgets that implement IUserListEntry" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUserListEntryLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUserListEntryLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUserListEntryLibrary_Statics::ClassParams = {
		&UUserListEntryLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUserListEntryLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUserListEntryLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUserListEntryLibrary()
	{
		if (!Z_Registration_Info_UClass_UUserListEntryLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUserListEntryLibrary.OuterSingleton, Z_Construct_UClass_UUserListEntryLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUserListEntryLibrary.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UUserListEntryLibrary>()
	{
		return UUserListEntryLibrary::StaticClass();
	}
	UUserListEntryLibrary::UUserListEntryLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUserListEntryLibrary);
	UUserListEntryLibrary::~UUserListEntryLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUserListEntry, UUserListEntry::StaticClass, TEXT("UUserListEntry"), &Z_Registration_Info_UClass_UUserListEntry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUserListEntry), 220802946U) },
		{ Z_Construct_UClass_UUserListEntryLibrary, UUserListEntryLibrary::StaticClass, TEXT("UUserListEntryLibrary"), &Z_Registration_Info_UClass_UUserListEntryLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUserListEntryLibrary), 1245277827U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_1629501838(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
