// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UserToolBoxSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserToolBoxSubsystem() {}
// Cross Module References
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
	UPackage* Z_Construct_UPackage__Script_UserToolBoxCore();
	USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UUserToolBoxBaseTab_NoRegister();
	USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UUserToolboxSubsystem();
	USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UUserToolboxSubsystem_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUserToolboxSubsystem::execRefreshIcons)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshIcons();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserToolboxSubsystem::execPickAnIcon)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PickAnIcon(Z_Param_Out_OutValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserToolboxSubsystem::execRegisterTabData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterTabData();
		P_NATIVE_END;
	}
	void UUserToolboxSubsystem::StaticRegisterNativesUUserToolboxSubsystem()
	{
		UClass* Class = UUserToolboxSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PickAnIcon", &UUserToolboxSubsystem::execPickAnIcon },
			{ "RefreshIcons", &UUserToolboxSubsystem::execRefreshIcons },
			{ "RegisterTabData", &UUserToolboxSubsystem::execRegisterTabData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUserToolboxSubsystem_PickAnIcon_Statics
	{
		struct UserToolboxSubsystem_eventPickAnIcon_Parms
		{
			FString OutValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserToolboxSubsystem_PickAnIcon_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserToolboxSubsystem_eventPickAnIcon_Parms, OutValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUserToolboxSubsystem_PickAnIcon_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UserToolboxSubsystem_eventPickAnIcon_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserToolboxSubsystem_PickAnIcon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UserToolboxSubsystem_eventPickAnIcon_Parms), &Z_Construct_UFunction_UUserToolboxSubsystem_PickAnIcon_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserToolboxSubsystem_PickAnIcon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserToolboxSubsystem_PickAnIcon_Statics::NewProp_OutValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserToolboxSubsystem_PickAnIcon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserToolboxSubsystem_PickAnIcon_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Toolbox" },
		{ "ModuleRelativePath", "Public/UserToolBoxSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserToolboxSubsystem_PickAnIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserToolboxSubsystem, nullptr, "PickAnIcon", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUserToolboxSubsystem_PickAnIcon_Statics::UserToolboxSubsystem_eventPickAnIcon_Parms), Z_Construct_UFunction_UUserToolboxSubsystem_PickAnIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserToolboxSubsystem_PickAnIcon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserToolboxSubsystem_PickAnIcon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserToolboxSubsystem_PickAnIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserToolboxSubsystem_PickAnIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserToolboxSubsystem_PickAnIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserToolboxSubsystem_RefreshIcons_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserToolboxSubsystem_RefreshIcons_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Toolbox" },
		{ "ModuleRelativePath", "Public/UserToolBoxSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserToolboxSubsystem_RefreshIcons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserToolboxSubsystem, nullptr, "RefreshIcons", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserToolboxSubsystem_RefreshIcons_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserToolboxSubsystem_RefreshIcons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserToolboxSubsystem_RefreshIcons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserToolboxSubsystem_RefreshIcons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserToolboxSubsystem_RegisterTabData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserToolboxSubsystem_RegisterTabData_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Toolbox Subsystem" },
		{ "ModuleRelativePath", "Public/UserToolBoxSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserToolboxSubsystem_RegisterTabData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserToolboxSubsystem, nullptr, "RegisterTabData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserToolboxSubsystem_RegisterTabData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserToolboxSubsystem_RegisterTabData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserToolboxSubsystem_RegisterTabData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserToolboxSubsystem_RegisterTabData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUserToolboxSubsystem);
	UClass* Z_Construct_UClass_UUserToolboxSubsystem_NoRegister()
	{
		return UUserToolboxSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UUserToolboxSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RegisteredTabs_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_RegisteredTabs_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredTabs_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_RegisteredTabs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUserToolboxSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_UserToolBoxCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUserToolboxSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUserToolboxSubsystem_PickAnIcon, "PickAnIcon" }, // 2547393643
		{ &Z_Construct_UFunction_UUserToolboxSubsystem_RefreshIcons, "RefreshIcons" }, // 1380873618
		{ &Z_Construct_UFunction_UUserToolboxSubsystem_RegisterTabData, "RegisterTabData" }, // 991970547
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserToolboxSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UserToolBoxSubsystem.h" },
		{ "ModuleRelativePath", "Public/UserToolBoxSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUserToolboxSubsystem_Statics::NewProp_RegisteredTabs_ValueProp = { "RegisteredTabs", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UUserToolBoxBaseTab_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUserToolboxSubsystem_Statics::NewProp_RegisteredTabs_Key_KeyProp = { "RegisteredTabs_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserToolboxSubsystem_Statics::NewProp_RegisteredTabs_MetaData[] = {
		{ "ModuleRelativePath", "Public/UserToolBoxSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUserToolboxSubsystem_Statics::NewProp_RegisteredTabs = { "RegisteredTabs", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUserToolboxSubsystem, RegisteredTabs), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUserToolboxSubsystem_Statics::NewProp_RegisteredTabs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserToolboxSubsystem_Statics::NewProp_RegisteredTabs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUserToolboxSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserToolboxSubsystem_Statics::NewProp_RegisteredTabs_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserToolboxSubsystem_Statics::NewProp_RegisteredTabs_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserToolboxSubsystem_Statics::NewProp_RegisteredTabs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUserToolboxSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUserToolboxSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUserToolboxSubsystem_Statics::ClassParams = {
		&UUserToolboxSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUserToolboxSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUserToolboxSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUserToolboxSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUserToolboxSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUserToolboxSubsystem()
	{
		if (!Z_Registration_Info_UClass_UUserToolboxSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUserToolboxSubsystem.OuterSingleton, Z_Construct_UClass_UUserToolboxSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUserToolboxSubsystem.OuterSingleton;
	}
	template<> USERTOOLBOXCORE_API UClass* StaticClass<UUserToolboxSubsystem>()
	{
		return UUserToolboxSubsystem::StaticClass();
	}
	UUserToolboxSubsystem::UUserToolboxSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUserToolboxSubsystem);
	UUserToolboxSubsystem::~UUserToolboxSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UserToolBoxSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UserToolBoxSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUserToolboxSubsystem, UUserToolboxSubsystem::StaticClass, TEXT("UUserToolboxSubsystem"), &Z_Registration_Info_UClass_UUserToolboxSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUserToolboxSubsystem), 2038232347U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UserToolBoxSubsystem_h_914099022(TEXT("/Script/UserToolBoxCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UserToolBoxSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UserToolBoxSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
