// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UTBBaseUICommand.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUTBBaseUICommand() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_UserToolBoxCore();
	USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UBaseCommandNativeUI();
	USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UBaseCommandNativeUI_NoRegister();
	USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UUTBBaseCommand_NoRegister();
	USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UUTBCommandUMGUI();
	USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UUTBCommandUMGUI_NoRegister();
	USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UUTBUICommand_NoRegister();
// End Cross Module References
	void UBaseCommandNativeUI::StaticRegisterNativesUBaseCommandNativeUI()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseCommandNativeUI);
	UClass* Z_Construct_UClass_UBaseCommandNativeUI_NoRegister()
	{
		return UBaseCommandNativeUI::StaticClass();
	}
	struct Z_Construct_UClass_UBaseCommandNativeUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyCommand_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MyCommand;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseCommandNativeUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UserToolBoxCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseCommandNativeUI_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//Native base class for Command UI Customization\n" },
		{ "IncludePath", "UTBBaseUICommand.h" },
		{ "ModuleRelativePath", "Public/UTBBaseUICommand.h" },
		{ "ToolTip", "Native base class for Command UI Customization" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseCommandNativeUI_Statics::NewProp_MyCommand_MetaData[] = {
		{ "ModuleRelativePath", "Public/UTBBaseUICommand.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBaseCommandNativeUI_Statics::NewProp_MyCommand = { "MyCommand", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseCommandNativeUI, MyCommand), Z_Construct_UClass_UUTBBaseCommand_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseCommandNativeUI_Statics::NewProp_MyCommand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCommandNativeUI_Statics::NewProp_MyCommand_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseCommandNativeUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCommandNativeUI_Statics::NewProp_MyCommand,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UBaseCommandNativeUI_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UUTBUICommand_NoRegister, (int32)VTABLE_OFFSET(UBaseCommandNativeUI, IUTBUICommand), false },  // 1942423675
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseCommandNativeUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseCommandNativeUI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseCommandNativeUI_Statics::ClassParams = {
		&UBaseCommandNativeUI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBaseCommandNativeUI_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCommandNativeUI_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseCommandNativeUI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCommandNativeUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseCommandNativeUI()
	{
		if (!Z_Registration_Info_UClass_UBaseCommandNativeUI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseCommandNativeUI.OuterSingleton, Z_Construct_UClass_UBaseCommandNativeUI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseCommandNativeUI.OuterSingleton;
	}
	template<> USERTOOLBOXCORE_API UClass* StaticClass<UBaseCommandNativeUI>()
	{
		return UBaseCommandNativeUI::StaticClass();
	}
	UBaseCommandNativeUI::UBaseCommandNativeUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseCommandNativeUI);
	UBaseCommandNativeUI::~UBaseCommandNativeUI() {}
	DEFINE_FUNCTION(UUTBCommandUMGUI::execExecuteCommand)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteCommand();
		P_NATIVE_END;
	}
	struct UTBCommandUMGUI_eventDoesSupportClass_Parms
	{
		TSubclassOf<UUTBBaseCommand>  ObjectClass;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		UTBCommandUMGUI_eventDoesSupportClass_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_UUTBCommandUMGUI_DoesSupportClass = FName(TEXT("DoesSupportClass"));
	bool UUTBCommandUMGUI::DoesSupportClass(TSubclassOf<UUTBBaseCommand>  ObjectClass)
	{
		UTBCommandUMGUI_eventDoesSupportClass_Parms Parms;
		Parms.ObjectClass=ObjectClass;
		ProcessEvent(FindFunctionChecked(NAME_UUTBCommandUMGUI_DoesSupportClass),&Parms);
		return !!Parms.ReturnValue;
	}
	void UUTBCommandUMGUI::StaticRegisterNativesUUTBCommandUMGUI()
	{
		UClass* Class = UUTBCommandUMGUI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteCommand", &UUTBCommandUMGUI::execExecuteCommand },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUTBCommandUMGUI_DoesSupportClass_Statics
	{
		static const UECodeGen_Private::FClassPropertyParams NewProp_ObjectClass;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUTBCommandUMGUI_DoesSupportClass_Statics::NewProp_ObjectClass = { "ObjectClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTBCommandUMGUI_eventDoesSupportClass_Parms, ObjectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUTBBaseCommand_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUTBCommandUMGUI_DoesSupportClass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UTBCommandUMGUI_eventDoesSupportClass_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUTBCommandUMGUI_DoesSupportClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTBCommandUMGUI_eventDoesSupportClass_Parms), &Z_Construct_UFunction_UUTBCommandUMGUI_DoesSupportClass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUTBCommandUMGUI_DoesSupportClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUTBCommandUMGUI_DoesSupportClass_Statics::NewProp_ObjectClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUTBCommandUMGUI_DoesSupportClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUTBCommandUMGUI_DoesSupportClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Command UI" },
		{ "ModuleRelativePath", "Public/UTBBaseUICommand.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUTBCommandUMGUI_DoesSupportClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUTBCommandUMGUI, nullptr, "DoesSupportClass", nullptr, nullptr, sizeof(UTBCommandUMGUI_eventDoesSupportClass_Parms), Z_Construct_UFunction_UUTBCommandUMGUI_DoesSupportClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUTBCommandUMGUI_DoesSupportClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUTBCommandUMGUI_DoesSupportClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUTBCommandUMGUI_DoesSupportClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUTBCommandUMGUI_DoesSupportClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUTBCommandUMGUI_DoesSupportClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUTBCommandUMGUI_ExecuteCommand_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUTBCommandUMGUI_ExecuteCommand_Statics::Function_MetaDataParams[] = {
		{ "Category", "Command UI" },
		{ "ModuleRelativePath", "Public/UTBBaseUICommand.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUTBCommandUMGUI_ExecuteCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUTBCommandUMGUI, nullptr, "ExecuteCommand", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUTBCommandUMGUI_ExecuteCommand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUTBCommandUMGUI_ExecuteCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUTBCommandUMGUI_ExecuteCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUTBCommandUMGUI_ExecuteCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUTBCommandUMGUI);
	UClass* Z_Construct_UClass_UUTBCommandUMGUI_NoRegister()
	{
		return UUTBCommandUMGUI::StaticClass();
	}
	struct Z_Construct_UClass_UUTBCommandUMGUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Command_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Command;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUTBCommandUMGUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UserToolBoxCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUTBCommandUMGUI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUTBCommandUMGUI_DoesSupportClass, "DoesSupportClass" }, // 1623622440
		{ &Z_Construct_UFunction_UUTBCommandUMGUI_ExecuteCommand, "ExecuteCommand" }, // 3196133518
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUTBCommandUMGUI_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UTBBaseUICommand.h" },
		{ "ModuleRelativePath", "Public/UTBBaseUICommand.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUTBCommandUMGUI_Statics::NewProp_Command_MetaData[] = {
		{ "Category", "Command UI" },
		{ "ModuleRelativePath", "Public/UTBBaseUICommand.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUTBCommandUMGUI_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUTBCommandUMGUI, Command), Z_Construct_UClass_UUTBBaseCommand_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUTBCommandUMGUI_Statics::NewProp_Command_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUTBCommandUMGUI_Statics::NewProp_Command_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUTBCommandUMGUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUTBCommandUMGUI_Statics::NewProp_Command,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UUTBCommandUMGUI_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UUTBUICommand_NoRegister, (int32)VTABLE_OFFSET(UUTBCommandUMGUI, IUTBUICommand), false },  // 1942423675
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUTBCommandUMGUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUTBCommandUMGUI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUTBCommandUMGUI_Statics::ClassParams = {
		&UUTBCommandUMGUI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUTBCommandUMGUI_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUTBCommandUMGUI_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUTBCommandUMGUI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUTBCommandUMGUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUTBCommandUMGUI()
	{
		if (!Z_Registration_Info_UClass_UUTBCommandUMGUI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUTBCommandUMGUI.OuterSingleton, Z_Construct_UClass_UUTBCommandUMGUI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUTBCommandUMGUI.OuterSingleton;
	}
	template<> USERTOOLBOXCORE_API UClass* StaticClass<UUTBCommandUMGUI>()
	{
		return UUTBCommandUMGUI::StaticClass();
	}
	UUTBCommandUMGUI::UUTBCommandUMGUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUTBCommandUMGUI);
	UUTBCommandUMGUI::~UUTBCommandUMGUI() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommand_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommand_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseCommandNativeUI, UBaseCommandNativeUI::StaticClass, TEXT("UBaseCommandNativeUI"), &Z_Registration_Info_UClass_UBaseCommandNativeUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseCommandNativeUI), 2968548607U) },
		{ Z_Construct_UClass_UUTBCommandUMGUI, UUTBCommandUMGUI::StaticClass, TEXT("UUTBCommandUMGUI"), &Z_Registration_Info_UClass_UUTBCommandUMGUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUTBCommandUMGUI), 1975952839U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommand_h_3772449111(TEXT("/Script/UserToolBoxCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommand_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommand_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
