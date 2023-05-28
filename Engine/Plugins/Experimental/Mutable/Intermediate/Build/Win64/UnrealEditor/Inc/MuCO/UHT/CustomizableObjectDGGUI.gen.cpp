// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/MuCO/CustomizableObjectDGGUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectDGGUI() {}
// Cross Module References
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableSkeletalComponent_NoRegister();
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UDGGUI();
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UDGGUI_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_CustomizableObject();
// End Cross Module References
	struct DGGUI_eventGetCustomizableSkeletalComponent_Parms
	{
		UCustomizableSkeletalComponent* ReturnValue;

		/** Constructor, initializes return property only **/
		DGGUI_eventGetCustomizableSkeletalComponent_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct DGGUI_eventSetCustomizableSkeletalComponent_Parms
	{
		UCustomizableSkeletalComponent* CustomizableSkeletalComponent;
	};
	static FName NAME_UDGGUI_GetCustomizableSkeletalComponent = FName(TEXT("GetCustomizableSkeletalComponent"));
	UCustomizableSkeletalComponent* UDGGUI::GetCustomizableSkeletalComponent()
	{
		DGGUI_eventGetCustomizableSkeletalComponent_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UDGGUI_GetCustomizableSkeletalComponent),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UDGGUI_SetCustomizableSkeletalComponent = FName(TEXT("SetCustomizableSkeletalComponent"));
	void UDGGUI::SetCustomizableSkeletalComponent(UCustomizableSkeletalComponent* CustomizableSkeletalComponent)
	{
		DGGUI_eventSetCustomizableSkeletalComponent_Parms Parms;
		Parms.CustomizableSkeletalComponent=CustomizableSkeletalComponent;
		ProcessEvent(FindFunctionChecked(NAME_UDGGUI_SetCustomizableSkeletalComponent),&Parms);
	}
	void UDGGUI::StaticRegisterNativesUDGGUI()
	{
	}
	struct Z_Construct_UFunction_UDGGUI_GetCustomizableSkeletalComponent_Statics
	{
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDGGUI_GetCustomizableSkeletalComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDGGUI_GetCustomizableSkeletalComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DGGUI_eventGetCustomizableSkeletalComponent_Parms, ReturnValue), Z_Construct_UClass_UCustomizableSkeletalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDGGUI_GetCustomizableSkeletalComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDGGUI_GetCustomizableSkeletalComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDGGUI_GetCustomizableSkeletalComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDGGUI_GetCustomizableSkeletalComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDGGUI_GetCustomizableSkeletalComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "DGGUI" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectDGGUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDGGUI_GetCustomizableSkeletalComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDGGUI, nullptr, "GetCustomizableSkeletalComponent", nullptr, nullptr, sizeof(DGGUI_eventGetCustomizableSkeletalComponent_Parms), Z_Construct_UFunction_UDGGUI_GetCustomizableSkeletalComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDGGUI_GetCustomizableSkeletalComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDGGUI_GetCustomizableSkeletalComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDGGUI_GetCustomizableSkeletalComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDGGUI_GetCustomizableSkeletalComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDGGUI_GetCustomizableSkeletalComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDGGUI_SetCustomizableSkeletalComponent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomizableSkeletalComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomizableSkeletalComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDGGUI_SetCustomizableSkeletalComponent_Statics::NewProp_CustomizableSkeletalComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDGGUI_SetCustomizableSkeletalComponent_Statics::NewProp_CustomizableSkeletalComponent = { "CustomizableSkeletalComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DGGUI_eventSetCustomizableSkeletalComponent_Parms, CustomizableSkeletalComponent), Z_Construct_UClass_UCustomizableSkeletalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDGGUI_SetCustomizableSkeletalComponent_Statics::NewProp_CustomizableSkeletalComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDGGUI_SetCustomizableSkeletalComponent_Statics::NewProp_CustomizableSkeletalComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDGGUI_SetCustomizableSkeletalComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDGGUI_SetCustomizableSkeletalComponent_Statics::NewProp_CustomizableSkeletalComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDGGUI_SetCustomizableSkeletalComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "DGGUI" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectDGGUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDGGUI_SetCustomizableSkeletalComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDGGUI, nullptr, "SetCustomizableSkeletalComponent", nullptr, nullptr, sizeof(DGGUI_eventSetCustomizableSkeletalComponent_Parms), Z_Construct_UFunction_UDGGUI_SetCustomizableSkeletalComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDGGUI_SetCustomizableSkeletalComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDGGUI_SetCustomizableSkeletalComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDGGUI_SetCustomizableSkeletalComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDGGUI_SetCustomizableSkeletalComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDGGUI_SetCustomizableSkeletalComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDGGUI);
	UClass* Z_Construct_UClass_UDGGUI_NoRegister()
	{
		return UDGGUI::StaticClass();
	}
	struct Z_Construct_UClass_UDGGUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDGGUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDGGUI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDGGUI_GetCustomizableSkeletalComponent, "GetCustomizableSkeletalComponent" }, // 1324775996
		{ &Z_Construct_UFunction_UDGGUI_SetCustomizableSkeletalComponent, "SetCustomizableSkeletalComponent" }, // 104442725
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDGGUI_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MuCO/CustomizableObjectDGGUI.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectDGGUI.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDGGUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDGGUI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDGGUI_Statics::ClassParams = {
		&UDGGUI::StaticClass,
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
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDGGUI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDGGUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDGGUI()
	{
		if (!Z_Registration_Info_UClass_UDGGUI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDGGUI.OuterSingleton, Z_Construct_UClass_UDGGUI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDGGUI.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECT_API UClass* StaticClass<UDGGUI>()
	{
		return UDGGUI::StaticClass();
	}
	UDGGUI::UDGGUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDGGUI);
	UDGGUI::~UDGGUI() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectDGGUI_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectDGGUI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDGGUI, UDGGUI::StaticClass, TEXT("UDGGUI"), &Z_Registration_Info_UClass_UDGGUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDGGUI), 2964386828U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectDGGUI_h_2109518801(TEXT("/Script/CustomizableObject"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectDGGUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectDGGUI_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
