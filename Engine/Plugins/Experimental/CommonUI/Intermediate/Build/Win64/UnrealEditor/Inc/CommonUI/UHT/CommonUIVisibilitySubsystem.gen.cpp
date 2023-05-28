// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUIVisibilitySubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/LocalPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonUIVisibilitySubsystem() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonUIVisibilitySubsystem();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonUIVisibilitySubsystem_NoRegister();
	COMMONUI_API UFunction* Z_Construct_UDelegateFunction_CommonUI_HardwareVisibilityTagsChangedDynamicEvent__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_ULocalPlayerSubsystem();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_CommonUI_HardwareVisibilityTagsChangedDynamicEvent__DelegateSignature_Statics
	{
		struct _Script_CommonUI_eventHardwareVisibilityTagsChangedDynamicEvent_Parms
		{
			UCommonUIVisibilitySubsystem* TagSubsystem;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TagSubsystem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CommonUI_HardwareVisibilityTagsChangedDynamicEvent__DelegateSignature_Statics::NewProp_TagSubsystem = { "TagSubsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_CommonUI_eventHardwareVisibilityTagsChangedDynamicEvent_Parms, TagSubsystem), Z_Construct_UClass_UCommonUIVisibilitySubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CommonUI_HardwareVisibilityTagsChangedDynamicEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CommonUI_HardwareVisibilityTagsChangedDynamicEvent__DelegateSignature_Statics::NewProp_TagSubsystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CommonUI_HardwareVisibilityTagsChangedDynamicEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonUIVisibilitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CommonUI_HardwareVisibilityTagsChangedDynamicEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CommonUI, nullptr, "HardwareVisibilityTagsChangedDynamicEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_CommonUI_HardwareVisibilityTagsChangedDynamicEvent__DelegateSignature_Statics::_Script_CommonUI_eventHardwareVisibilityTagsChangedDynamicEvent_Parms), Z_Construct_UDelegateFunction_CommonUI_HardwareVisibilityTagsChangedDynamicEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CommonUI_HardwareVisibilityTagsChangedDynamicEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CommonUI_HardwareVisibilityTagsChangedDynamicEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CommonUI_HardwareVisibilityTagsChangedDynamicEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CommonUI_HardwareVisibilityTagsChangedDynamicEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CommonUI_HardwareVisibilityTagsChangedDynamicEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FHardwareVisibilityTagsChangedDynamicEvent_DelegateWrapper(const FMulticastScriptDelegate& HardwareVisibilityTagsChangedDynamicEvent, UCommonUIVisibilitySubsystem* TagSubsystem)
{
	struct _Script_CommonUI_eventHardwareVisibilityTagsChangedDynamicEvent_Parms
	{
		UCommonUIVisibilitySubsystem* TagSubsystem;
	};
	_Script_CommonUI_eventHardwareVisibilityTagsChangedDynamicEvent_Parms Parms;
	Parms.TagSubsystem=TagSubsystem;
	HardwareVisibilityTagsChangedDynamicEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UCommonUIVisibilitySubsystem::StaticRegisterNativesUCommonUIVisibilitySubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonUIVisibilitySubsystem);
	UClass* Z_Construct_UClass_UCommonUIVisibilitySubsystem_NoRegister()
	{
		return UCommonUIVisibilitySubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UCommonUIVisibilitySubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonUIVisibilitySubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULocalPlayerSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUIVisibilitySubsystem_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "UI Visibility Subsystem" },
		{ "IncludePath", "CommonUIVisibilitySubsystem.h" },
		{ "ModuleRelativePath", "Public/CommonUIVisibilitySubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonUIVisibilitySubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonUIVisibilitySubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonUIVisibilitySubsystem_Statics::ClassParams = {
		&UCommonUIVisibilitySubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonUIVisibilitySubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUIVisibilitySubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonUIVisibilitySubsystem()
	{
		if (!Z_Registration_Info_UClass_UCommonUIVisibilitySubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonUIVisibilitySubsystem.OuterSingleton, Z_Construct_UClass_UCommonUIVisibilitySubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonUIVisibilitySubsystem.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonUIVisibilitySubsystem>()
	{
		return UCommonUIVisibilitySubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonUIVisibilitySubsystem);
	UCommonUIVisibilitySubsystem::~UCommonUIVisibilitySubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUIVisibilitySubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUIVisibilitySubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonUIVisibilitySubsystem, UCommonUIVisibilitySubsystem::StaticClass, TEXT("UCommonUIVisibilitySubsystem"), &Z_Registration_Info_UClass_UCommonUIVisibilitySubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonUIVisibilitySubsystem), 912305963U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUIVisibilitySubsystem_h_3232576868(TEXT("/Script/CommonUI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUIVisibilitySubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUIVisibilitySubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
