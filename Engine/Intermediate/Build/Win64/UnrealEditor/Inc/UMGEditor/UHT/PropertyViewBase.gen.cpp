// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/Components/PropertyViewBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePropertyViewBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UMGEDITOR_API UClass* Z_Construct_UClass_UPropertyViewBase();
	UMGEDITOR_API UClass* Z_Construct_UClass_UPropertyViewBase_NoRegister();
	UMGEDITOR_API UFunction* Z_Construct_UDelegateFunction_UMGEditor_OnPropertyValueChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UMGEditor();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UMGEditor_OnPropertyValueChanged__DelegateSignature_Statics
	{
		struct _Script_UMGEditor_eventOnPropertyValueChanged_Parms
		{
			FName PropertyName;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_UMGEditor_OnPropertyValueChanged__DelegateSignature_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_UMGEditor_eventOnPropertyValueChanged_Parms, PropertyName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMGEditor_OnPropertyValueChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMGEditor_OnPropertyValueChanged__DelegateSignature_Statics::NewProp_PropertyName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMGEditor_OnPropertyValueChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Sets a delegate called when the property value changes */" },
		{ "ModuleRelativePath", "Public/Components/PropertyViewBase.h" },
		{ "ToolTip", "Sets a delegate called when the property value changes" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMGEditor_OnPropertyValueChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMGEditor, nullptr, "OnPropertyValueChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UMGEditor_OnPropertyValueChanged__DelegateSignature_Statics::_Script_UMGEditor_eventOnPropertyValueChanged_Parms), Z_Construct_UDelegateFunction_UMGEditor_OnPropertyValueChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMGEditor_OnPropertyValueChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMGEditor_OnPropertyValueChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMGEditor_OnPropertyValueChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMGEditor_OnPropertyValueChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMGEditor_OnPropertyValueChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnPropertyValueChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPropertyValueChanged, FName PropertyName)
{
	struct _Script_UMGEditor_eventOnPropertyValueChanged_Parms
	{
		FName PropertyName;
	};
	_Script_UMGEditor_eventOnPropertyValueChanged_Parms Parms;
	Parms.PropertyName=PropertyName;
	OnPropertyValueChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UPropertyViewBase::execSetObject)
	{
		P_GET_OBJECT(UObject,Z_Param_NewObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetObject(Z_Param_NewObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPropertyViewBase::execGetObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetObject();
		P_NATIVE_END;
	}
	void UPropertyViewBase::StaticRegisterNativesUPropertyViewBase()
	{
		UClass* Class = UPropertyViewBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetObject", &UPropertyViewBase::execGetObject },
			{ "SetObject", &UPropertyViewBase::execSetObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPropertyViewBase_GetObject_Statics
	{
		struct PropertyViewBase_eventGetObject_Parms
		{
			UObject* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPropertyViewBase_GetObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PropertyViewBase_eventGetObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPropertyViewBase_GetObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPropertyViewBase_GetObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPropertyViewBase_GetObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "View" },
		{ "ModuleRelativePath", "Public/Components/PropertyViewBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPropertyViewBase_GetObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPropertyViewBase, nullptr, "GetObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPropertyViewBase_GetObject_Statics::PropertyViewBase_eventGetObject_Parms), Z_Construct_UFunction_UPropertyViewBase_GetObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyViewBase_GetObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPropertyViewBase_GetObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyViewBase_GetObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPropertyViewBase_GetObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPropertyViewBase_GetObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPropertyViewBase_SetObject_Statics
	{
		struct PropertyViewBase_eventSetObject_Parms
		{
			UObject* NewObject;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPropertyViewBase_SetObject_Statics::NewProp_NewObject = { "NewObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PropertyViewBase_eventSetObject_Parms, NewObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPropertyViewBase_SetObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPropertyViewBase_SetObject_Statics::NewProp_NewObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPropertyViewBase_SetObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "View" },
		{ "ModuleRelativePath", "Public/Components/PropertyViewBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPropertyViewBase_SetObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPropertyViewBase, nullptr, "SetObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPropertyViewBase_SetObject_Statics::PropertyViewBase_eventSetObject_Parms), Z_Construct_UFunction_UPropertyViewBase_SetObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyViewBase_SetObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPropertyViewBase_SetObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyViewBase_SetObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPropertyViewBase_SetObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPropertyViewBase_SetObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPropertyViewBase);
	UClass* Z_Construct_UClass_UPropertyViewBase_NoRegister()
	{
		return UPropertyViewBase::StaticClass();
	}
	struct Z_Construct_UClass_UPropertyViewBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Object;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoftObjectPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SoftObjectPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoLoadAsset_MetaData[];
#endif
		static void NewProp_bAutoLoadAsset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoLoadAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPropertyChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPropertyChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPropertyViewBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMGEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPropertyViewBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPropertyViewBase_GetObject, "GetObject" }, // 3753286538
		{ &Z_Construct_UFunction_UPropertyViewBase_SetObject, "SetObject" }, // 4224538099
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyViewBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base of property view allows you to display the value of an object properties.\n */" },
		{ "IncludePath", "Components/PropertyViewBase.h" },
		{ "ModuleRelativePath", "Public/Components/PropertyViewBase.h" },
		{ "ToolTip", "Base of property view allows you to display the value of an object properties." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyViewBase_Statics::NewProp_Object_MetaData[] = {
		{ "Comment", "/** The object to view. */" },
		{ "DisplayName", "Object" },
		{ "ModuleRelativePath", "Public/Components/PropertyViewBase.h" },
		{ "ToolTip", "The object to view." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPropertyViewBase_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPropertyViewBase, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPropertyViewBase_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyViewBase_Statics::NewProp_Object_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyViewBase_Statics::NewProp_SoftObjectPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/PropertyViewBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPropertyViewBase_Statics::NewProp_SoftObjectPath = { "SoftObjectPath", nullptr, (EPropertyFlags)0x0020080020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPropertyViewBase, SoftObjectPath_DEPRECATED), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UPropertyViewBase_Statics::NewProp_SoftObjectPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyViewBase_Statics::NewProp_SoftObjectPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyViewBase_Statics::NewProp_bAutoLoadAsset_MetaData[] = {
		{ "Category", "View" },
		{ "Comment", "/** Load the object (if it's an asset) when the widget is created. */" },
		{ "ModuleRelativePath", "Public/Components/PropertyViewBase.h" },
		{ "ToolTip", "Load the object (if it's an asset) when the widget is created." },
	};
#endif
	void Z_Construct_UClass_UPropertyViewBase_Statics::NewProp_bAutoLoadAsset_SetBit(void* Obj)
	{
		((UPropertyViewBase*)Obj)->bAutoLoadAsset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPropertyViewBase_Statics::NewProp_bAutoLoadAsset = { "bAutoLoadAsset", nullptr, (EPropertyFlags)0x00200c0000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPropertyViewBase), &Z_Construct_UClass_UPropertyViewBase_Statics::NewProp_bAutoLoadAsset_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPropertyViewBase_Statics::NewProp_bAutoLoadAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyViewBase_Statics::NewProp_bAutoLoadAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyViewBase_Statics::NewProp_OnPropertyChanged_MetaData[] = {
		{ "Category", "View|Event" },
		{ "Comment", "/** Sets a delegate called when the property value changes */" },
		{ "ModuleRelativePath", "Public/Components/PropertyViewBase.h" },
		{ "ToolTip", "Sets a delegate called when the property value changes" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPropertyViewBase_Statics::NewProp_OnPropertyChanged = { "OnPropertyChanged", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPropertyViewBase, OnPropertyChanged), Z_Construct_UDelegateFunction_UMGEditor_OnPropertyValueChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPropertyViewBase_Statics::NewProp_OnPropertyChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyViewBase_Statics::NewProp_OnPropertyChanged_MetaData)) }; // 3220305150
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPropertyViewBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyViewBase_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyViewBase_Statics::NewProp_SoftObjectPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyViewBase_Statics::NewProp_bAutoLoadAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyViewBase_Statics::NewProp_OnPropertyChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPropertyViewBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPropertyViewBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPropertyViewBase_Statics::ClassParams = {
		&UPropertyViewBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPropertyViewBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyViewBase_Statics::PropPointers),
		0,
		0x00B000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPropertyViewBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyViewBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPropertyViewBase()
	{
		if (!Z_Registration_Info_UClass_UPropertyViewBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPropertyViewBase.OuterSingleton, Z_Construct_UClass_UPropertyViewBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPropertyViewBase.OuterSingleton;
	}
	template<> UMGEDITOR_API UClass* StaticClass<UPropertyViewBase>()
	{
		return UPropertyViewBase::StaticClass();
	}
	UPropertyViewBase::UPropertyViewBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPropertyViewBase);
	UPropertyViewBase::~UPropertyViewBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_Components_PropertyViewBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_Components_PropertyViewBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPropertyViewBase, UPropertyViewBase::StaticClass, TEXT("UPropertyViewBase"), &Z_Registration_Info_UClass_UPropertyViewBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPropertyViewBase), 4175542697U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_Components_PropertyViewBase_h_2539562125(TEXT("/Script/UMGEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_Components_PropertyViewBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_Components_PropertyViewBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
