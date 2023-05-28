// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XRCreativeToolset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXRCreativeToolset() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonButtonStyle_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonTextStyle_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_XRCreative();
	XRCREATIVE_API UClass* Z_Construct_UClass_AXRCreativeAvatar_NoRegister();
	XRCREATIVE_API UClass* Z_Construct_UClass_UXRCreativeBlueprintableTool();
	XRCREATIVE_API UClass* Z_Construct_UClass_UXRCreativeBlueprintableTool_NoRegister();
	XRCREATIVE_API UClass* Z_Construct_UClass_UXRCreativePalette();
	XRCREATIVE_API UClass* Z_Construct_UClass_UXRCreativePalette_NoRegister();
	XRCREATIVE_API UClass* Z_Construct_UClass_UXRCreativePaletteTab();
	XRCREATIVE_API UClass* Z_Construct_UClass_UXRCreativePaletteTab_NoRegister();
	XRCREATIVE_API UClass* Z_Construct_UClass_UXRCreativePaletteToolTab();
	XRCREATIVE_API UClass* Z_Construct_UClass_UXRCreativePaletteToolTab_NoRegister();
	XRCREATIVE_API UClass* Z_Construct_UClass_UXRCreativeStyle();
	XRCREATIVE_API UClass* Z_Construct_UClass_UXRCreativeStyle_NoRegister();
	XRCREATIVE_API UClass* Z_Construct_UClass_UXRCreativeTool();
	XRCREATIVE_API UClass* Z_Construct_UClass_UXRCreativeTool_NoRegister();
	XRCREATIVE_API UClass* Z_Construct_UClass_UXRCreativeToolset();
	XRCREATIVE_API UClass* Z_Construct_UClass_UXRCreativeToolset_NoRegister();
	XRCREATIVE_API UScriptStruct* Z_Construct_UScriptStruct_FXRCreativeToolEntry();
// End Cross Module References
	void UXRCreativePaletteTab::StaticRegisterNativesUXRCreativePaletteTab()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UXRCreativePaletteTab);
	UClass* Z_Construct_UClass_UXRCreativePaletteTab_NoRegister()
	{
		return UXRCreativePaletteTab::StaticClass();
	}
	struct Z_Construct_UClass_UXRCreativePaletteTab_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXRCreativePaletteTab_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonActivatableWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_XRCreative,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRCreativePaletteTab_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "XRCreativeToolset.h" },
		{ "ModuleRelativePath", "Public/XRCreativeToolset.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXRCreativePaletteTab_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXRCreativePaletteTab>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UXRCreativePaletteTab_Statics::ClassParams = {
		&UXRCreativePaletteTab::StaticClass,
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
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UXRCreativePaletteTab_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativePaletteTab_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXRCreativePaletteTab()
	{
		if (!Z_Registration_Info_UClass_UXRCreativePaletteTab.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UXRCreativePaletteTab.OuterSingleton, Z_Construct_UClass_UXRCreativePaletteTab_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UXRCreativePaletteTab.OuterSingleton;
	}
	template<> XRCREATIVE_API UClass* StaticClass<UXRCreativePaletteTab>()
	{
		return UXRCreativePaletteTab::StaticClass();
	}
	UXRCreativePaletteTab::UXRCreativePaletteTab(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXRCreativePaletteTab);
	UXRCreativePaletteTab::~UXRCreativePaletteTab() {}
	void UXRCreativePalette::StaticRegisterNativesUXRCreativePalette()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UXRCreativePalette);
	UClass* Z_Construct_UClass_UXRCreativePalette_NoRegister()
	{
		return UXRCreativePalette::StaticClass();
	}
	struct Z_Construct_UClass_UXRCreativePalette_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Tabs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tabs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tabs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Owner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXRCreativePalette_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_XRCreative,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRCreativePalette_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "XRCreativeToolset.h" },
		{ "ModuleRelativePath", "Public/XRCreativeToolset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UXRCreativePalette_Statics::NewProp_Tabs_Inner = { "Tabs", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UXRCreativePaletteTab_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRCreativePalette_Statics::NewProp_Tabs_MetaData[] = {
		{ "Category", "XR Creative" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/XRCreativeToolset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UXRCreativePalette_Statics::NewProp_Tabs = { "Tabs", nullptr, (EPropertyFlags)0x002408800000001c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UXRCreativePalette, Tabs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UXRCreativePalette_Statics::NewProp_Tabs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativePalette_Statics::NewProp_Tabs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRCreativePalette_Statics::NewProp_Owner_MetaData[] = {
		{ "Category", "XR Creative" },
		{ "ModuleRelativePath", "Public/XRCreativeToolset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UXRCreativePalette_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UXRCreativePalette, Owner), Z_Construct_UClass_AXRCreativeAvatar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UXRCreativePalette_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativePalette_Statics::NewProp_Owner_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UXRCreativePalette_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRCreativePalette_Statics::NewProp_Tabs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRCreativePalette_Statics::NewProp_Tabs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRCreativePalette_Statics::NewProp_Owner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXRCreativePalette_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXRCreativePalette>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UXRCreativePalette_Statics::ClassParams = {
		&UXRCreativePalette::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UXRCreativePalette_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativePalette_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UXRCreativePalette_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativePalette_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXRCreativePalette()
	{
		if (!Z_Registration_Info_UClass_UXRCreativePalette.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UXRCreativePalette.OuterSingleton, Z_Construct_UClass_UXRCreativePalette_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UXRCreativePalette.OuterSingleton;
	}
	template<> XRCREATIVE_API UClass* StaticClass<UXRCreativePalette>()
	{
		return UXRCreativePalette::StaticClass();
	}
	UXRCreativePalette::UXRCreativePalette(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXRCreativePalette);
	UXRCreativePalette::~UXRCreativePalette() {}
	DEFINE_FUNCTION(UXRCreativeTool::execGetPaletteTabClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<UXRCreativePaletteToolTab> *)Z_Param__Result=P_THIS->GetPaletteTabClass();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXRCreativeTool::execGetDisplayName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetDisplayName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXRCreativeTool::execGetToolName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetToolName();
		P_NATIVE_END;
	}
	void UXRCreativeTool::StaticRegisterNativesUXRCreativeTool()
	{
		UClass* Class = UXRCreativeTool::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDisplayName", &UXRCreativeTool::execGetDisplayName },
			{ "GetPaletteTabClass", &UXRCreativeTool::execGetPaletteTabClass },
			{ "GetToolName", &UXRCreativeTool::execGetToolName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UXRCreativeTool_GetDisplayName_Statics
	{
		struct XRCreativeTool_eventGetDisplayName_Parms
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
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UXRCreativeTool_GetDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(XRCreativeTool_eventGetDisplayName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXRCreativeTool_GetDisplayName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRCreativeTool_GetDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRCreativeTool_GetDisplayName_Statics::Function_MetaDataParams[] = {
		{ "Category", "XR Creative" },
		{ "ModuleRelativePath", "Public/XRCreativeToolset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXRCreativeTool_GetDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXRCreativeTool, nullptr, "GetDisplayName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UXRCreativeTool_GetDisplayName_Statics::XRCreativeTool_eventGetDisplayName_Parms), Z_Construct_UFunction_UXRCreativeTool_GetDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativeTool_GetDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXRCreativeTool_GetDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativeTool_GetDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXRCreativeTool_GetDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXRCreativeTool_GetDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXRCreativeTool_GetPaletteTabClass_Statics
	{
		struct XRCreativeTool_eventGetPaletteTabClass_Parms
		{
			TSubclassOf<UXRCreativePaletteToolTab>  ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UXRCreativeTool_GetPaletteTabClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(XRCreativeTool_eventGetPaletteTabClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UXRCreativePaletteToolTab_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXRCreativeTool_GetPaletteTabClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRCreativeTool_GetPaletteTabClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRCreativeTool_GetPaletteTabClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "XR Creative" },
		{ "ModuleRelativePath", "Public/XRCreativeToolset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXRCreativeTool_GetPaletteTabClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXRCreativeTool, nullptr, "GetPaletteTabClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UXRCreativeTool_GetPaletteTabClass_Statics::XRCreativeTool_eventGetPaletteTabClass_Parms), Z_Construct_UFunction_UXRCreativeTool_GetPaletteTabClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativeTool_GetPaletteTabClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXRCreativeTool_GetPaletteTabClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativeTool_GetPaletteTabClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXRCreativeTool_GetPaletteTabClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXRCreativeTool_GetPaletteTabClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXRCreativeTool_GetToolName_Statics
	{
		struct XRCreativeTool_eventGetToolName_Parms
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
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UXRCreativeTool_GetToolName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(XRCreativeTool_eventGetToolName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXRCreativeTool_GetToolName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRCreativeTool_GetToolName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRCreativeTool_GetToolName_Statics::Function_MetaDataParams[] = {
		{ "Category", "XR Creative" },
		{ "ModuleRelativePath", "Public/XRCreativeToolset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXRCreativeTool_GetToolName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXRCreativeTool, nullptr, "GetToolName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UXRCreativeTool_GetToolName_Statics::XRCreativeTool_eventGetToolName_Parms), Z_Construct_UFunction_UXRCreativeTool_GetToolName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativeTool_GetToolName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXRCreativeTool_GetToolName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativeTool_GetToolName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXRCreativeTool_GetToolName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXRCreativeTool_GetToolName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UXRCreativeTool);
	UClass* Z_Construct_UClass_UXRCreativeTool_NoRegister()
	{
		return UXRCreativeTool::StaticClass();
	}
	struct Z_Construct_UClass_UXRCreativeTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXRCreativeTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_XRCreative,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UXRCreativeTool_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UXRCreativeTool_GetDisplayName, "GetDisplayName" }, // 752265932
		{ &Z_Construct_UFunction_UXRCreativeTool_GetPaletteTabClass, "GetPaletteTabClass" }, // 1126905466
		{ &Z_Construct_UFunction_UXRCreativeTool_GetToolName, "GetToolName" }, // 4236766962
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRCreativeTool_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//////////////////////////////////////////////////////////////////////////\n" },
		{ "IncludePath", "XRCreativeToolset.h" },
		{ "ModuleRelativePath", "Public/XRCreativeToolset.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXRCreativeTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXRCreativeTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UXRCreativeTool_Statics::ClassParams = {
		&UXRCreativeTool::StaticClass,
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
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UXRCreativeTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativeTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXRCreativeTool()
	{
		if (!Z_Registration_Info_UClass_UXRCreativeTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UXRCreativeTool.OuterSingleton, Z_Construct_UClass_UXRCreativeTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UXRCreativeTool.OuterSingleton;
	}
	template<> XRCREATIVE_API UClass* StaticClass<UXRCreativeTool>()
	{
		return UXRCreativeTool::StaticClass();
	}
	UXRCreativeTool::UXRCreativeTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXRCreativeTool);
	UXRCreativeTool::~UXRCreativeTool() {}
	void UXRCreativeBlueprintableTool::StaticRegisterNativesUXRCreativeBlueprintableTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UXRCreativeBlueprintableTool);
	UClass* Z_Construct_UClass_UXRCreativeBlueprintableTool_NoRegister()
	{
		return UXRCreativeBlueprintableTool::StaticClass();
	}
	struct Z_Construct_UClass_UXRCreativeBlueprintableTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ToolName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PaletteTabClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PaletteTabClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolActor_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ToolActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolInputMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ToolInputMappingContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXRCreativeBlueprintableTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UXRCreativeTool,
		(UObject* (*)())Z_Construct_UPackage__Script_XRCreative,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRCreativeBlueprintableTool_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "XRCreativeToolset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/XRCreativeToolset.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRCreativeBlueprintableTool_Statics::NewProp_ToolName_MetaData[] = {
		{ "Category", "XR Creative" },
		{ "ModuleRelativePath", "Public/XRCreativeToolset.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UXRCreativeBlueprintableTool_Statics::NewProp_ToolName = { "ToolName", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UXRCreativeBlueprintableTool, ToolName), METADATA_PARAMS(Z_Construct_UClass_UXRCreativeBlueprintableTool_Statics::NewProp_ToolName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativeBlueprintableTool_Statics::NewProp_ToolName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRCreativeBlueprintableTool_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "XR Creative" },
		{ "ModuleRelativePath", "Public/XRCreativeToolset.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UXRCreativeBlueprintableTool_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UXRCreativeBlueprintableTool, DisplayName), METADATA_PARAMS(Z_Construct_UClass_UXRCreativeBlueprintableTool_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativeBlueprintableTool_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRCreativeBlueprintableTool_Statics::NewProp_PaletteTabClass_MetaData[] = {
		{ "Category", "XR Creative" },
		{ "ModuleRelativePath", "Public/XRCreativeToolset.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UXRCreativeBlueprintableTool_Statics::NewProp_PaletteTabClass = { "PaletteTabClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UXRCreativeBlueprintableTool, PaletteTabClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UXRCreativePaletteToolTab_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UXRCreativeBlueprintableTool_Statics::NewProp_PaletteTabClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativeBlueprintableTool_Statics::NewProp_PaletteTabClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRCreativeBlueprintableTool_Statics::NewProp_ToolActor_MetaData[] = {
		{ "Category", "XR Creative" },
		{ "ModuleRelativePath", "Public/XRCreativeToolset.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UXRCreativeBlueprintableTool_Statics::NewProp_ToolActor = { "ToolActor", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UXRCreativeBlueprintableTool, ToolActor), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UXRCreativeBlueprintableTool_Statics::NewProp_ToolActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativeBlueprintableTool_Statics::NewProp_ToolActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRCreativeBlueprintableTool_Statics::NewProp_ToolInputMappingContext_MetaData[] = {
		{ "Category", "XR Creative" },
		{ "ModuleRelativePath", "Public/XRCreativeToolset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UXRCreativeBlueprintableTool_Statics::NewProp_ToolInputMappingContext = { "ToolInputMappingContext", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UXRCreativeBlueprintableTool, ToolInputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UXRCreativeBlueprintableTool_Statics::NewProp_ToolInputMappingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativeBlueprintableTool_Statics::NewProp_ToolInputMappingContext_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UXRCreativeBlueprintableTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRCreativeBlueprintableTool_Statics::NewProp_ToolName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRCreativeBlueprintableTool_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRCreativeBlueprintableTool_Statics::NewProp_PaletteTabClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRCreativeBlueprintableTool_Statics::NewProp_ToolActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRCreativeBlueprintableTool_Statics::NewProp_ToolInputMappingContext,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXRCreativeBlueprintableTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXRCreativeBlueprintableTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UXRCreativeBlueprintableTool_Statics::ClassParams = {
		&UXRCreativeBlueprintableTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UXRCreativeBlueprintableTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativeBlueprintableTool_Statics::PropPointers),
		0,
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UXRCreativeBlueprintableTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativeBlueprintableTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXRCreativeBlueprintableTool()
	{
		if (!Z_Registration_Info_UClass_UXRCreativeBlueprintableTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UXRCreativeBlueprintableTool.OuterSingleton, Z_Construct_UClass_UXRCreativeBlueprintableTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UXRCreativeBlueprintableTool.OuterSingleton;
	}
	template<> XRCREATIVE_API UClass* StaticClass<UXRCreativeBlueprintableTool>()
	{
		return UXRCreativeBlueprintableTool::StaticClass();
	}
	UXRCreativeBlueprintableTool::UXRCreativeBlueprintableTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXRCreativeBlueprintableTool);
	UXRCreativeBlueprintableTool::~UXRCreativeBlueprintableTool() {}
	void UXRCreativePaletteToolTab::StaticRegisterNativesUXRCreativePaletteToolTab()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UXRCreativePaletteToolTab);
	UClass* Z_Construct_UClass_UXRCreativePaletteToolTab_NoRegister()
	{
		return UXRCreativePaletteToolTab::StaticClass();
	}
	struct Z_Construct_UClass_UXRCreativePaletteToolTab_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tool_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Tool;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXRCreativePaletteToolTab_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UXRCreativePaletteTab,
		(UObject* (*)())Z_Construct_UPackage__Script_XRCreative,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRCreativePaletteToolTab_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "XRCreativeToolset.h" },
		{ "ModuleRelativePath", "Public/XRCreativeToolset.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRCreativePaletteToolTab_Statics::NewProp_Tool_MetaData[] = {
		{ "Category", "XR Creative" },
		{ "ModuleRelativePath", "Public/XRCreativeToolset.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UXRCreativePaletteToolTab_Statics::NewProp_Tool = { "Tool", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UXRCreativePaletteToolTab, Tool), Z_Construct_UClass_UXRCreativeTool_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UXRCreativePaletteToolTab_Statics::NewProp_Tool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativePaletteToolTab_Statics::NewProp_Tool_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UXRCreativePaletteToolTab_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRCreativePaletteToolTab_Statics::NewProp_Tool,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXRCreativePaletteToolTab_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXRCreativePaletteToolTab>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UXRCreativePaletteToolTab_Statics::ClassParams = {
		&UXRCreativePaletteToolTab::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UXRCreativePaletteToolTab_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativePaletteToolTab_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UXRCreativePaletteToolTab_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativePaletteToolTab_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXRCreativePaletteToolTab()
	{
		if (!Z_Registration_Info_UClass_UXRCreativePaletteToolTab.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UXRCreativePaletteToolTab.OuterSingleton, Z_Construct_UClass_UXRCreativePaletteToolTab_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UXRCreativePaletteToolTab.OuterSingleton;
	}
	template<> XRCREATIVE_API UClass* StaticClass<UXRCreativePaletteToolTab>()
	{
		return UXRCreativePaletteToolTab::StaticClass();
	}
	UXRCreativePaletteToolTab::UXRCreativePaletteToolTab(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXRCreativePaletteToolTab);
	UXRCreativePaletteToolTab::~UXRCreativePaletteToolTab() {}
	void UXRCreativeStyle::StaticRegisterNativesUXRCreativeStyle()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UXRCreativeStyle);
	UClass* Z_Construct_UClass_UXRCreativeStyle_NoRegister()
	{
		return UXRCreativeStyle::StaticClass();
	}
	struct Z_Construct_UClass_UXRCreativeStyle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegularTextStyle_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_RegularTextStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoldTextStyle_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BoldTextStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItalicTextStyle_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ItalicTextStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegularButtonStyle_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_RegularButtonStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LargeButtonStyle_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_LargeButtonStyle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXRCreativeStyle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_XRCreative,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRCreativeStyle_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//////////////////////////////////////////////////////////////////////////\n" },
		{ "IncludePath", "XRCreativeToolset.h" },
		{ "ModuleRelativePath", "Public/XRCreativeToolset.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRCreativeStyle_Statics::NewProp_RegularTextStyle_MetaData[] = {
		{ "Category", "XR Creative" },
		{ "ModuleRelativePath", "Public/XRCreativeToolset.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UXRCreativeStyle_Statics::NewProp_RegularTextStyle = { "RegularTextStyle", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UXRCreativeStyle, RegularTextStyle), Z_Construct_UClass_UClass, Z_Construct_UClass_UCommonTextStyle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UXRCreativeStyle_Statics::NewProp_RegularTextStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativeStyle_Statics::NewProp_RegularTextStyle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRCreativeStyle_Statics::NewProp_BoldTextStyle_MetaData[] = {
		{ "Category", "XR Creative" },
		{ "ModuleRelativePath", "Public/XRCreativeToolset.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UXRCreativeStyle_Statics::NewProp_BoldTextStyle = { "BoldTextStyle", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UXRCreativeStyle, BoldTextStyle), Z_Construct_UClass_UClass, Z_Construct_UClass_UCommonTextStyle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UXRCreativeStyle_Statics::NewProp_BoldTextStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativeStyle_Statics::NewProp_BoldTextStyle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRCreativeStyle_Statics::NewProp_ItalicTextStyle_MetaData[] = {
		{ "Category", "XR Creative" },
		{ "ModuleRelativePath", "Public/XRCreativeToolset.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UXRCreativeStyle_Statics::NewProp_ItalicTextStyle = { "ItalicTextStyle", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UXRCreativeStyle, ItalicTextStyle), Z_Construct_UClass_UClass, Z_Construct_UClass_UCommonTextStyle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UXRCreativeStyle_Statics::NewProp_ItalicTextStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativeStyle_Statics::NewProp_ItalicTextStyle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRCreativeStyle_Statics::NewProp_RegularButtonStyle_MetaData[] = {
		{ "Category", "XR Creative" },
		{ "ModuleRelativePath", "Public/XRCreativeToolset.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UXRCreativeStyle_Statics::NewProp_RegularButtonStyle = { "RegularButtonStyle", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UXRCreativeStyle, RegularButtonStyle), Z_Construct_UClass_UClass, Z_Construct_UClass_UCommonButtonStyle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UXRCreativeStyle_Statics::NewProp_RegularButtonStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativeStyle_Statics::NewProp_RegularButtonStyle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRCreativeStyle_Statics::NewProp_LargeButtonStyle_MetaData[] = {
		{ "Category", "XR Creative" },
		{ "ModuleRelativePath", "Public/XRCreativeToolset.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UXRCreativeStyle_Statics::NewProp_LargeButtonStyle = { "LargeButtonStyle", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UXRCreativeStyle, LargeButtonStyle), Z_Construct_UClass_UClass, Z_Construct_UClass_UCommonButtonStyle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UXRCreativeStyle_Statics::NewProp_LargeButtonStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativeStyle_Statics::NewProp_LargeButtonStyle_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UXRCreativeStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRCreativeStyle_Statics::NewProp_RegularTextStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRCreativeStyle_Statics::NewProp_BoldTextStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRCreativeStyle_Statics::NewProp_ItalicTextStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRCreativeStyle_Statics::NewProp_RegularButtonStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRCreativeStyle_Statics::NewProp_LargeButtonStyle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXRCreativeStyle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXRCreativeStyle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UXRCreativeStyle_Statics::ClassParams = {
		&UXRCreativeStyle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UXRCreativeStyle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativeStyle_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UXRCreativeStyle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativeStyle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXRCreativeStyle()
	{
		if (!Z_Registration_Info_UClass_UXRCreativeStyle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UXRCreativeStyle.OuterSingleton, Z_Construct_UClass_UXRCreativeStyle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UXRCreativeStyle.OuterSingleton;
	}
	template<> XRCREATIVE_API UClass* StaticClass<UXRCreativeStyle>()
	{
		return UXRCreativeStyle::StaticClass();
	}
	UXRCreativeStyle::UXRCreativeStyle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXRCreativeStyle);
	UXRCreativeStyle::~UXRCreativeStyle() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_XRCreativeToolEntry;
class UScriptStruct* FXRCreativeToolEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_XRCreativeToolEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_XRCreativeToolEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FXRCreativeToolEntry, (UObject*)Z_Construct_UPackage__Script_XRCreative(), TEXT("XRCreativeToolEntry"));
	}
	return Z_Registration_Info_UScriptStruct_XRCreativeToolEntry.OuterSingleton;
}
template<> XRCREATIVE_API UScriptStruct* StaticStruct<FXRCreativeToolEntry>()
{
	return FXRCreativeToolEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FXRCreativeToolEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ToolClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolIcon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ToolIcon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXRCreativeToolEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/XRCreativeToolset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FXRCreativeToolEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FXRCreativeToolEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXRCreativeToolEntry_Statics::NewProp_ToolClass_MetaData[] = {
		{ "Category", "XR Creative" },
		{ "ModuleRelativePath", "Public/XRCreativeToolset.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FXRCreativeToolEntry_Statics::NewProp_ToolClass = { "ToolClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FXRCreativeToolEntry, ToolClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UXRCreativeTool_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FXRCreativeToolEntry_Statics::NewProp_ToolClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXRCreativeToolEntry_Statics::NewProp_ToolClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXRCreativeToolEntry_Statics::NewProp_ToolIcon_MetaData[] = {
		{ "Category", "XR Creative" },
		{ "ModuleRelativePath", "Public/XRCreativeToolset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FXRCreativeToolEntry_Statics::NewProp_ToolIcon = { "ToolIcon", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FXRCreativeToolEntry, ToolIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FXRCreativeToolEntry_Statics::NewProp_ToolIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXRCreativeToolEntry_Statics::NewProp_ToolIcon_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FXRCreativeToolEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRCreativeToolEntry_Statics::NewProp_ToolClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRCreativeToolEntry_Statics::NewProp_ToolIcon,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FXRCreativeToolEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_XRCreative,
		nullptr,
		&NewStructOps,
		"XRCreativeToolEntry",
		sizeof(FXRCreativeToolEntry),
		alignof(FXRCreativeToolEntry),
		Z_Construct_UScriptStruct_FXRCreativeToolEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXRCreativeToolEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FXRCreativeToolEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXRCreativeToolEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FXRCreativeToolEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_XRCreativeToolEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_XRCreativeToolEntry.InnerSingleton, Z_Construct_UScriptStruct_FXRCreativeToolEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_XRCreativeToolEntry.InnerSingleton;
	}
	void UXRCreativeToolset::StaticRegisterNativesUXRCreativeToolset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UXRCreativeToolset);
	UClass* Z_Construct_UClass_UXRCreativeToolset_NoRegister()
	{
		return UXRCreativeToolset::StaticClass();
	}
	struct Z_Construct_UClass_UXRCreativeToolset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Avatar_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Avatar;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tools_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tools_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tools;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Palette_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Palette;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Style_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Style;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXRCreativeToolset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_XRCreative,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRCreativeToolset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "XRCreativeToolset.h" },
		{ "ModuleRelativePath", "Public/XRCreativeToolset.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRCreativeToolset_Statics::NewProp_Avatar_MetaData[] = {
		{ "Category", "XR Creative" },
		{ "ModuleRelativePath", "Public/XRCreativeToolset.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UXRCreativeToolset_Statics::NewProp_Avatar = { "Avatar", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UXRCreativeToolset, Avatar), Z_Construct_UClass_UClass, Z_Construct_UClass_AXRCreativeAvatar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UXRCreativeToolset_Statics::NewProp_Avatar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativeToolset_Statics::NewProp_Avatar_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UXRCreativeToolset_Statics::NewProp_Tools_Inner = { "Tools", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FXRCreativeToolEntry, METADATA_PARAMS(nullptr, 0) }; // 1468094258
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRCreativeToolset_Statics::NewProp_Tools_MetaData[] = {
		{ "Category", "XR Creative" },
		{ "ModuleRelativePath", "Public/XRCreativeToolset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UXRCreativeToolset_Statics::NewProp_Tools = { "Tools", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UXRCreativeToolset, Tools), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UXRCreativeToolset_Statics::NewProp_Tools_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativeToolset_Statics::NewProp_Tools_MetaData)) }; // 1468094258
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRCreativeToolset_Statics::NewProp_Palette_MetaData[] = {
		{ "Category", "XR Creative" },
		{ "ModuleRelativePath", "Public/XRCreativeToolset.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UXRCreativeToolset_Statics::NewProp_Palette = { "Palette", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UXRCreativeToolset, Palette), Z_Construct_UClass_UClass, Z_Construct_UClass_UXRCreativePalette_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UXRCreativeToolset_Statics::NewProp_Palette_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativeToolset_Statics::NewProp_Palette_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRCreativeToolset_Statics::NewProp_Style_MetaData[] = {
		{ "Category", "XR Creative" },
		{ "ModuleRelativePath", "Public/XRCreativeToolset.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UXRCreativeToolset_Statics::NewProp_Style = { "Style", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UXRCreativeToolset, Style), Z_Construct_UClass_UXRCreativeStyle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UXRCreativeToolset_Statics::NewProp_Style_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativeToolset_Statics::NewProp_Style_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UXRCreativeToolset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRCreativeToolset_Statics::NewProp_Avatar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRCreativeToolset_Statics::NewProp_Tools_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRCreativeToolset_Statics::NewProp_Tools,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRCreativeToolset_Statics::NewProp_Palette,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRCreativeToolset_Statics::NewProp_Style,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXRCreativeToolset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXRCreativeToolset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UXRCreativeToolset_Statics::ClassParams = {
		&UXRCreativeToolset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UXRCreativeToolset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativeToolset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UXRCreativeToolset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativeToolset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXRCreativeToolset()
	{
		if (!Z_Registration_Info_UClass_UXRCreativeToolset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UXRCreativeToolset.OuterSingleton, Z_Construct_UClass_UXRCreativeToolset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UXRCreativeToolset.OuterSingleton;
	}
	template<> XRCREATIVE_API UClass* StaticClass<UXRCreativeToolset>()
	{
		return UXRCreativeToolset::StaticClass();
	}
	UXRCreativeToolset::UXRCreativeToolset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXRCreativeToolset);
	UXRCreativeToolset::~UXRCreativeToolset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeToolset_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeToolset_h_Statics::ScriptStructInfo[] = {
		{ FXRCreativeToolEntry::StaticStruct, Z_Construct_UScriptStruct_FXRCreativeToolEntry_Statics::NewStructOps, TEXT("XRCreativeToolEntry"), &Z_Registration_Info_UScriptStruct_XRCreativeToolEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FXRCreativeToolEntry), 1468094258U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeToolset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UXRCreativePaletteTab, UXRCreativePaletteTab::StaticClass, TEXT("UXRCreativePaletteTab"), &Z_Registration_Info_UClass_UXRCreativePaletteTab, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UXRCreativePaletteTab), 1347106047U) },
		{ Z_Construct_UClass_UXRCreativePalette, UXRCreativePalette::StaticClass, TEXT("UXRCreativePalette"), &Z_Registration_Info_UClass_UXRCreativePalette, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UXRCreativePalette), 4031077011U) },
		{ Z_Construct_UClass_UXRCreativeTool, UXRCreativeTool::StaticClass, TEXT("UXRCreativeTool"), &Z_Registration_Info_UClass_UXRCreativeTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UXRCreativeTool), 3725029227U) },
		{ Z_Construct_UClass_UXRCreativeBlueprintableTool, UXRCreativeBlueprintableTool::StaticClass, TEXT("UXRCreativeBlueprintableTool"), &Z_Registration_Info_UClass_UXRCreativeBlueprintableTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UXRCreativeBlueprintableTool), 3841204880U) },
		{ Z_Construct_UClass_UXRCreativePaletteToolTab, UXRCreativePaletteToolTab::StaticClass, TEXT("UXRCreativePaletteToolTab"), &Z_Registration_Info_UClass_UXRCreativePaletteToolTab, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UXRCreativePaletteToolTab), 1737985802U) },
		{ Z_Construct_UClass_UXRCreativeStyle, UXRCreativeStyle::StaticClass, TEXT("UXRCreativeStyle"), &Z_Registration_Info_UClass_UXRCreativeStyle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UXRCreativeStyle), 296841260U) },
		{ Z_Construct_UClass_UXRCreativeToolset, UXRCreativeToolset::StaticClass, TEXT("UXRCreativeToolset"), &Z_Registration_Info_UClass_UXRCreativeToolset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UXRCreativeToolset), 916501359U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeToolset_h_155176955(TEXT("/Script/XRCreative"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeToolset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeToolset_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeToolset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeToolset_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
