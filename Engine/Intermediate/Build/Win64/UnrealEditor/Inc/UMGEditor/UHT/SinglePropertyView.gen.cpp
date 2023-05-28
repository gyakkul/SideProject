// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/Components/SinglePropertyView.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSinglePropertyView() {}
// Cross Module References
	UMGEDITOR_API UClass* Z_Construct_UClass_UPropertyViewBase();
	UMGEDITOR_API UClass* Z_Construct_UClass_USinglePropertyView();
	UMGEDITOR_API UClass* Z_Construct_UClass_USinglePropertyView_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UMGEditor();
// End Cross Module References
	DEFINE_FUNCTION(USinglePropertyView::execSetNameOverride)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_NewPropertyName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNameOverride(Z_Param_NewPropertyName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USinglePropertyView::execGetNameOverride)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetNameOverride();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USinglePropertyView::execSetPropertyName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_NewPropertyName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPropertyName(Z_Param_NewPropertyName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USinglePropertyView::execGetPropertyName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetPropertyName();
		P_NATIVE_END;
	}
	void USinglePropertyView::StaticRegisterNativesUSinglePropertyView()
	{
		UClass* Class = USinglePropertyView::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNameOverride", &USinglePropertyView::execGetNameOverride },
			{ "GetPropertyName", &USinglePropertyView::execGetPropertyName },
			{ "SetNameOverride", &USinglePropertyView::execSetNameOverride },
			{ "SetPropertyName", &USinglePropertyView::execSetPropertyName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USinglePropertyView_GetNameOverride_Statics
	{
		struct SinglePropertyView_eventGetNameOverride_Parms
		{
			FText ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USinglePropertyView_GetNameOverride_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SinglePropertyView_eventGetNameOverride_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USinglePropertyView_GetNameOverride_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USinglePropertyView_GetNameOverride_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USinglePropertyView_GetNameOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "View" },
		{ "ModuleRelativePath", "Public/Components/SinglePropertyView.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USinglePropertyView_GetNameOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USinglePropertyView, nullptr, "GetNameOverride", nullptr, nullptr, sizeof(Z_Construct_UFunction_USinglePropertyView_GetNameOverride_Statics::SinglePropertyView_eventGetNameOverride_Parms), Z_Construct_UFunction_USinglePropertyView_GetNameOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USinglePropertyView_GetNameOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USinglePropertyView_GetNameOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USinglePropertyView_GetNameOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USinglePropertyView_GetNameOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USinglePropertyView_GetNameOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USinglePropertyView_GetPropertyName_Statics
	{
		struct SinglePropertyView_eventGetPropertyName_Parms
		{
			FName ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USinglePropertyView_GetPropertyName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SinglePropertyView_eventGetPropertyName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USinglePropertyView_GetPropertyName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USinglePropertyView_GetPropertyName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USinglePropertyView_GetPropertyName_Statics::Function_MetaDataParams[] = {
		{ "Category", "View" },
		{ "ModuleRelativePath", "Public/Components/SinglePropertyView.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USinglePropertyView_GetPropertyName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USinglePropertyView, nullptr, "GetPropertyName", nullptr, nullptr, sizeof(Z_Construct_UFunction_USinglePropertyView_GetPropertyName_Statics::SinglePropertyView_eventGetPropertyName_Parms), Z_Construct_UFunction_USinglePropertyView_GetPropertyName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USinglePropertyView_GetPropertyName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USinglePropertyView_GetPropertyName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USinglePropertyView_GetPropertyName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USinglePropertyView_GetPropertyName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USinglePropertyView_GetPropertyName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USinglePropertyView_SetNameOverride_Statics
	{
		struct SinglePropertyView_eventSetNameOverride_Parms
		{
			FText NewPropertyName;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_NewPropertyName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USinglePropertyView_SetNameOverride_Statics::NewProp_NewPropertyName = { "NewPropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SinglePropertyView_eventSetNameOverride_Parms, NewPropertyName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USinglePropertyView_SetNameOverride_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USinglePropertyView_SetNameOverride_Statics::NewProp_NewPropertyName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USinglePropertyView_SetNameOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "View" },
		{ "ModuleRelativePath", "Public/Components/SinglePropertyView.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USinglePropertyView_SetNameOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USinglePropertyView, nullptr, "SetNameOverride", nullptr, nullptr, sizeof(Z_Construct_UFunction_USinglePropertyView_SetNameOverride_Statics::SinglePropertyView_eventSetNameOverride_Parms), Z_Construct_UFunction_USinglePropertyView_SetNameOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USinglePropertyView_SetNameOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USinglePropertyView_SetNameOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USinglePropertyView_SetNameOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USinglePropertyView_SetNameOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USinglePropertyView_SetNameOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USinglePropertyView_SetPropertyName_Statics
	{
		struct SinglePropertyView_eventSetPropertyName_Parms
		{
			FName NewPropertyName;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewPropertyName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USinglePropertyView_SetPropertyName_Statics::NewProp_NewPropertyName = { "NewPropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SinglePropertyView_eventSetPropertyName_Parms, NewPropertyName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USinglePropertyView_SetPropertyName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USinglePropertyView_SetPropertyName_Statics::NewProp_NewPropertyName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USinglePropertyView_SetPropertyName_Statics::Function_MetaDataParams[] = {
		{ "Category", "View" },
		{ "ModuleRelativePath", "Public/Components/SinglePropertyView.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USinglePropertyView_SetPropertyName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USinglePropertyView, nullptr, "SetPropertyName", nullptr, nullptr, sizeof(Z_Construct_UFunction_USinglePropertyView_SetPropertyName_Statics::SinglePropertyView_eventSetPropertyName_Parms), Z_Construct_UFunction_USinglePropertyView_SetPropertyName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USinglePropertyView_SetPropertyName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USinglePropertyView_SetPropertyName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USinglePropertyView_SetPropertyName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USinglePropertyView_SetPropertyName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USinglePropertyView_SetPropertyName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USinglePropertyView);
	UClass* Z_Construct_UClass_USinglePropertyView_NoRegister()
	{
		return USinglePropertyView::StaticClass();
	}
	struct Z_Construct_UClass_USinglePropertyView_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NameOverride_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_NameOverride;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USinglePropertyView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPropertyViewBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UMGEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USinglePropertyView_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USinglePropertyView_GetNameOverride, "GetNameOverride" }, // 3028079745
		{ &Z_Construct_UFunction_USinglePropertyView_GetPropertyName, "GetPropertyName" }, // 2051536702
		{ &Z_Construct_UFunction_USinglePropertyView_SetNameOverride, "SetNameOverride" }, // 3104972743
		{ &Z_Construct_UFunction_USinglePropertyView_SetPropertyName, "SetPropertyName" }, // 960489337
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USinglePropertyView_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The single property view allows you to display the value of an object's property.\n */" },
		{ "IncludePath", "Components/SinglePropertyView.h" },
		{ "ModuleRelativePath", "Public/Components/SinglePropertyView.h" },
		{ "ToolTip", "The single property view allows you to display the value of an object's property." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USinglePropertyView_Statics::NewProp_PropertyName_MetaData[] = {
		{ "Category", "View" },
		{ "Comment", "/** The name of the property to display. */" },
		{ "ModuleRelativePath", "Public/Components/SinglePropertyView.h" },
		{ "ToolTip", "The name of the property to display." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USinglePropertyView_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USinglePropertyView, PropertyName), METADATA_PARAMS(Z_Construct_UClass_USinglePropertyView_Statics::NewProp_PropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USinglePropertyView_Statics::NewProp_PropertyName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USinglePropertyView_Statics::NewProp_NameOverride_MetaData[] = {
		{ "Category", "View" },
		{ "Comment", "/** Override for the property name that will be displayed instead of the property name. */" },
		{ "ModuleRelativePath", "Public/Components/SinglePropertyView.h" },
		{ "ToolTip", "Override for the property name that will be displayed instead of the property name." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_USinglePropertyView_Statics::NewProp_NameOverride = { "NameOverride", nullptr, (EPropertyFlags)0x0040040000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USinglePropertyView, NameOverride), METADATA_PARAMS(Z_Construct_UClass_USinglePropertyView_Statics::NewProp_NameOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USinglePropertyView_Statics::NewProp_NameOverride_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USinglePropertyView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USinglePropertyView_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USinglePropertyView_Statics::NewProp_NameOverride,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USinglePropertyView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USinglePropertyView>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USinglePropertyView_Statics::ClassParams = {
		&USinglePropertyView::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USinglePropertyView_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USinglePropertyView_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USinglePropertyView_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USinglePropertyView_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USinglePropertyView()
	{
		if (!Z_Registration_Info_UClass_USinglePropertyView.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USinglePropertyView.OuterSingleton, Z_Construct_UClass_USinglePropertyView_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USinglePropertyView.OuterSingleton;
	}
	template<> UMGEDITOR_API UClass* StaticClass<USinglePropertyView>()
	{
		return USinglePropertyView::StaticClass();
	}
	USinglePropertyView::USinglePropertyView(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USinglePropertyView);
	USinglePropertyView::~USinglePropertyView() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_Components_SinglePropertyView_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_Components_SinglePropertyView_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USinglePropertyView, USinglePropertyView::StaticClass, TEXT("USinglePropertyView"), &Z_Registration_Info_UClass_USinglePropertyView, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USinglePropertyView), 2223931020U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_Components_SinglePropertyView_h_3941155701(TEXT("/Script/UMGEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_Components_SinglePropertyView_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_Components_SinglePropertyView_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
