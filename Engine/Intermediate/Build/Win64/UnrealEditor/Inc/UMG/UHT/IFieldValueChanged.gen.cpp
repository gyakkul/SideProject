// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FieldNotification/IFieldValueChanged.h"
#include "FieldNotification/FieldId.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIFieldValueChanged() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UNotifyFieldValueChanged();
	UMG_API UClass* Z_Construct_UClass_UNotifyFieldValueChanged_NoRegister();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_FieldValueChangedDynamicDelegate__DelegateSignature();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FFieldNotificationId();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UMG_FieldValueChangedDynamicDelegate__DelegateSignature_Statics
	{
		struct _Script_UMG_eventFieldValueChangedDynamicDelegate_Parms
		{
			UObject* Object;
			FFieldNotificationId Field;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Field;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UMG_FieldValueChangedDynamicDelegate__DelegateSignature_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_UMG_eventFieldValueChangedDynamicDelegate_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UMG_FieldValueChangedDynamicDelegate__DelegateSignature_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_UMG_eventFieldValueChangedDynamicDelegate_Parms, Field), Z_Construct_UScriptStruct_FFieldNotificationId, METADATA_PARAMS(nullptr, 0) }; // 2908908415
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMG_FieldValueChangedDynamicDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_FieldValueChangedDynamicDelegate__DelegateSignature_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_FieldValueChangedDynamicDelegate__DelegateSignature_Statics::NewProp_Field,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMG_FieldValueChangedDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FieldNotification/IFieldValueChanged.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_FieldValueChangedDynamicDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, nullptr, "FieldValueChangedDynamicDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UMG_FieldValueChangedDynamicDelegate__DelegateSignature_Statics::_Script_UMG_eventFieldValueChangedDynamicDelegate_Parms), Z_Construct_UDelegateFunction_UMG_FieldValueChangedDynamicDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_FieldValueChangedDynamicDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMG_FieldValueChangedDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_FieldValueChangedDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMG_FieldValueChangedDynamicDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMG_FieldValueChangedDynamicDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FFieldValueChangedDynamicDelegate_DelegateWrapper(const FScriptDelegate& FieldValueChangedDynamicDelegate, UObject* Object, FFieldNotificationId Field)
{
	struct _Script_UMG_eventFieldValueChangedDynamicDelegate_Parms
	{
		UObject* Object;
		FFieldNotificationId Field;
	};
	_Script_UMG_eventFieldValueChangedDynamicDelegate_Parms Parms;
	Parms.Object=Object;
	Parms.Field=Field;
	FieldValueChangedDynamicDelegate.ProcessDelegate<UObject>(&Parms);
}
	void UNotifyFieldValueChanged::StaticRegisterNativesUNotifyFieldValueChanged()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNotifyFieldValueChanged);
	UClass* Z_Construct_UClass_UNotifyFieldValueChanged_NoRegister()
	{
		return UNotifyFieldValueChanged::StaticClass();
	}
	struct Z_Construct_UClass_UNotifyFieldValueChanged_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNotifyFieldValueChanged_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNotifyFieldValueChanged_Statics::Class_MetaDataParams[] = {
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/FieldNotification/IFieldValueChanged.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNotifyFieldValueChanged_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INotifyFieldValueChanged>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNotifyFieldValueChanged_Statics::ClassParams = {
		&UNotifyFieldValueChanged::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNotifyFieldValueChanged_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNotifyFieldValueChanged_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNotifyFieldValueChanged()
	{
		if (!Z_Registration_Info_UClass_UNotifyFieldValueChanged.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNotifyFieldValueChanged.OuterSingleton, Z_Construct_UClass_UNotifyFieldValueChanged_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNotifyFieldValueChanged.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UNotifyFieldValueChanged>()
	{
		return UNotifyFieldValueChanged::StaticClass();
	}
	UNotifyFieldValueChanged::UNotifyFieldValueChanged(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNotifyFieldValueChanged);
	UNotifyFieldValueChanged::~UNotifyFieldValueChanged() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_FieldNotification_IFieldValueChanged_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_FieldNotification_IFieldValueChanged_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNotifyFieldValueChanged, UNotifyFieldValueChanged::StaticClass, TEXT("UNotifyFieldValueChanged"), &Z_Registration_Info_UClass_UNotifyFieldValueChanged, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNotifyFieldValueChanged), 3258936285U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_FieldNotification_IFieldValueChanged_h_2054076966(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_FieldNotification_IFieldValueChanged_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_FieldNotification_IFieldValueChanged_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
