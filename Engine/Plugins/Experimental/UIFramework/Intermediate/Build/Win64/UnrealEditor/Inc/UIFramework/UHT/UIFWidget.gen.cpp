// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UIFWidget.h"
#include "Types/UIFParentWidget.h"
#include "Types/UIFWidgetId.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIFWidget() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	MODELVIEWVIEWMODEL_API UClass* Z_Construct_UClass_UMVVMViewModelBase();
	UIFRAMEWORK_API UClass* Z_Construct_UClass_UUIFrameworkWidget();
	UIFRAMEWORK_API UClass* Z_Construct_UClass_UUIFrameworkWidget_NoRegister();
	UIFRAMEWORK_API UClass* Z_Construct_UClass_UUIFrameworkWidgetWrapperInterface();
	UIFRAMEWORK_API UClass* Z_Construct_UClass_UUIFrameworkWidgetWrapperInterface_NoRegister();
	UIFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FUIFrameworkParentWidget();
	UIFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FUIFrameworkWidgetId();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
	UPackage* Z_Construct_UPackage__Script_UIFramework();
// End Cross Module References
	void UUIFrameworkWidgetWrapperInterface::StaticRegisterNativesUUIFrameworkWidgetWrapperInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUIFrameworkWidgetWrapperInterface);
	UClass* Z_Construct_UClass_UUIFrameworkWidgetWrapperInterface_NoRegister()
	{
		return UUIFrameworkWidgetWrapperInterface::StaticClass();
	}
	struct Z_Construct_UClass_UUIFrameworkWidgetWrapperInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUIFrameworkWidgetWrapperInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_UIFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIFrameworkWidgetWrapperInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIFWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUIFrameworkWidgetWrapperInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IUIFrameworkWidgetWrapperInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUIFrameworkWidgetWrapperInterface_Statics::ClassParams = {
		&UUIFrameworkWidgetWrapperInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUIFrameworkWidgetWrapperInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUIFrameworkWidgetWrapperInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUIFrameworkWidgetWrapperInterface()
	{
		if (!Z_Registration_Info_UClass_UUIFrameworkWidgetWrapperInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUIFrameworkWidgetWrapperInterface.OuterSingleton, Z_Construct_UClass_UUIFrameworkWidgetWrapperInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUIFrameworkWidgetWrapperInterface.OuterSingleton;
	}
	template<> UIFRAMEWORK_API UClass* StaticClass<UUIFrameworkWidgetWrapperInterface>()
	{
		return UUIFrameworkWidgetWrapperInterface::StaticClass();
	}
	UUIFrameworkWidgetWrapperInterface::UUIFrameworkWidgetWrapperInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUIFrameworkWidgetWrapperInterface);
	UUIFrameworkWidgetWrapperInterface::~UUIFrameworkWidgetWrapperInterface() {}
	DEFINE_FUNCTION(UUIFrameworkWidget::execOnRep_Visibility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Visibility();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIFrameworkWidget::execOnRep_IsEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsEnabled();
		P_NATIVE_END;
	}
	void UUIFrameworkWidget::GetbIsEnabled_WrapperImpl(const void* Object, void* OutValue)
	{
		const UUIFrameworkWidget* Obj = (const UUIFrameworkWidget*)Object;
		bool& Result = *(bool*)OutValue;
		Result = (bool)Obj->IsEnabled();
	}
	void UUIFrameworkWidget::SetbIsEnabled_WrapperImpl(void* Object, const void* InValue)
	{
		UUIFrameworkWidget* Obj = (UUIFrameworkWidget*)Object;
		bool& Value = *(bool*)InValue;
		Obj->SetEnabled(Value);
	}
	void UUIFrameworkWidget::GetVisibility_WrapperImpl(const void* Object, void* OutValue)
	{
		const UUIFrameworkWidget* Obj = (const UUIFrameworkWidget*)Object;
		ESlateVisibility& Result = *(ESlateVisibility*)OutValue;
		Result = (ESlateVisibility)Obj->GetVisibility();
	}
	void UUIFrameworkWidget::SetVisibility_WrapperImpl(void* Object, const void* InValue)
	{
		UUIFrameworkWidget* Obj = (UUIFrameworkWidget*)Object;
		ESlateVisibility& Value = *(ESlateVisibility*)InValue;
		Obj->SetVisibility(Value);
	}
	void UUIFrameworkWidget::StaticRegisterNativesUUIFrameworkWidget()
	{
		UClass* Class = UUIFrameworkWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_IsEnabled", &UUIFrameworkWidget::execOnRep_IsEnabled },
			{ "OnRep_Visibility", &UUIFrameworkWidget::execOnRep_Visibility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUIFrameworkWidget_OnRep_IsEnabled_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIFrameworkWidget_OnRep_IsEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIFWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIFrameworkWidget_OnRep_IsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIFrameworkWidget, nullptr, "OnRep_IsEnabled", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIFrameworkWidget_OnRep_IsEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkWidget_OnRep_IsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIFrameworkWidget_OnRep_IsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIFrameworkWidget_OnRep_IsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIFrameworkWidget_OnRep_Visibility_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIFrameworkWidget_OnRep_Visibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIFWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIFrameworkWidget_OnRep_Visibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIFrameworkWidget, nullptr, "OnRep_Visibility", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIFrameworkWidget_OnRep_Visibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkWidget_OnRep_Visibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIFrameworkWidget_OnRep_Visibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIFrameworkWidget_OnRep_Visibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUIFrameworkWidget);
	UClass* Z_Construct_UClass_UUIFrameworkWidget_NoRegister()
	{
		return UUIFrameworkWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUIFrameworkWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[];
#endif
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Visibility_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Visibility_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Visibility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_WidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Wrapper_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_Wrapper;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AuthorityParent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AuthorityParent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalUMGWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LocalUMGWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUIFrameworkWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMVVMViewModelBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UIFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUIFrameworkWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUIFrameworkWidget_OnRep_IsEnabled, "OnRep_IsEnabled" }, // 2864362158
		{ &Z_Construct_UFunction_UUIFrameworkWidget_OnRep_Visibility, "OnRep_Visibility" }, // 4144446006
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIFrameworkWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UIFWidget.h" },
		{ "ModuleRelativePath", "Public/UIFWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIFrameworkWidget_Statics::NewProp_bIsEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "UI Framework" },
		{ "ModuleRelativePath", "Public/UIFWidget.h" },
	};
#endif
	void Z_Construct_UClass_UUIFrameworkWidget_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((UUIFrameworkWidget*)Obj)->bIsEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUIFrameworkWidget_Statics::NewProp_bIsEnabled = { "bIsEnabled", "OnRep_IsEnabled", (EPropertyFlags)0x0040000100000024, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UUIFrameworkWidget::SetbIsEnabled_WrapperImpl, &UUIFrameworkWidget::GetbIsEnabled_WrapperImpl, sizeof(bool), sizeof(UUIFrameworkWidget), &Z_Construct_UClass_UUIFrameworkWidget_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUIFrameworkWidget_Statics::NewProp_bIsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIFrameworkWidget_Statics::NewProp_bIsEnabled_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUIFrameworkWidget_Statics::NewProp_Visibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIFrameworkWidget_Statics::NewProp_Visibility_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "UI Framework" },
		{ "ModuleRelativePath", "Public/UIFWidget.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUIFrameworkWidget_Statics::NewProp_Visibility = { "Visibility", "OnRep_Visibility", (EPropertyFlags)0x0040000100000024, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UUIFrameworkWidget::SetVisibility_WrapperImpl, &UUIFrameworkWidget::GetVisibility_WrapperImpl, STRUCT_OFFSET(UUIFrameworkWidget, Visibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(Z_Construct_UClass_UUIFrameworkWidget_Statics::NewProp_Visibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIFrameworkWidget_Statics::NewProp_Visibility_MetaData)) }; // 2244982430
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIFrameworkWidget_Statics::NewProp_WidgetClass_MetaData[] = {
		{ "Category", "UI Framework" },
		{ "ModuleRelativePath", "Public/UIFWidget.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UUIFrameworkWidget_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0024080000010035, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUIFrameworkWidget, WidgetClass), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUIFrameworkWidget_Statics::NewProp_WidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIFrameworkWidget_Statics::NewProp_WidgetClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIFrameworkWidget_Statics::NewProp_Id_MetaData[] = {
		{ "Comment", "//~ Authority and Local\n" },
		{ "ModuleRelativePath", "Public/UIFWidget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUIFrameworkWidget_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0040000000202020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUIFrameworkWidget, Id), Z_Construct_UScriptStruct_FUIFrameworkWidgetId, METADATA_PARAMS(Z_Construct_UClass_UUIFrameworkWidget_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIFrameworkWidget_Statics::NewProp_Id_MetaData)) }; // 4193507828
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIFrameworkWidget_Statics::NewProp_Wrapper_MetaData[] = {
		{ "Comment", "//~ Authority\n" },
		{ "ModuleRelativePath", "Public/UIFWidget.h" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UUIFrameworkWidget_Statics::NewProp_Wrapper = { "Wrapper", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUIFrameworkWidget, Wrapper), Z_Construct_UClass_UUIFrameworkWidgetWrapperInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUIFrameworkWidget_Statics::NewProp_Wrapper_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIFrameworkWidget_Statics::NewProp_Wrapper_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIFrameworkWidget_Statics::NewProp_AuthorityParent_MetaData[] = {
		{ "Comment", "//~ AuthorityOnly\n" },
		{ "ModuleRelativePath", "Public/UIFWidget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUIFrameworkWidget_Statics::NewProp_AuthorityParent = { "AuthorityParent", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUIFrameworkWidget, AuthorityParent), Z_Construct_UScriptStruct_FUIFrameworkParentWidget, METADATA_PARAMS(Z_Construct_UClass_UUIFrameworkWidget_Statics::NewProp_AuthorityParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIFrameworkWidget_Statics::NewProp_AuthorityParent_MetaData)) }; // 2258153769
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIFrameworkWidget_Statics::NewProp_LocalUMGWidget_MetaData[] = {
		{ "Comment", "//~ LocalOnly\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UIFWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUIFrameworkWidget_Statics::NewProp_LocalUMGWidget = { "LocalUMGWidget", nullptr, (EPropertyFlags)0x0044000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUIFrameworkWidget, LocalUMGWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUIFrameworkWidget_Statics::NewProp_LocalUMGWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIFrameworkWidget_Statics::NewProp_LocalUMGWidget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUIFrameworkWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIFrameworkWidget_Statics::NewProp_bIsEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIFrameworkWidget_Statics::NewProp_Visibility_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIFrameworkWidget_Statics::NewProp_Visibility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIFrameworkWidget_Statics::NewProp_WidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIFrameworkWidget_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIFrameworkWidget_Statics::NewProp_Wrapper,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIFrameworkWidget_Statics::NewProp_AuthorityParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIFrameworkWidget_Statics::NewProp_LocalUMGWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUIFrameworkWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUIFrameworkWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUIFrameworkWidget_Statics::ClassParams = {
		&UUIFrameworkWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUIFrameworkWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUIFrameworkWidget_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUIFrameworkWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUIFrameworkWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUIFrameworkWidget()
	{
		if (!Z_Registration_Info_UClass_UUIFrameworkWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUIFrameworkWidget.OuterSingleton, Z_Construct_UClass_UUIFrameworkWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUIFrameworkWidget.OuterSingleton;
	}
	template<> UIFRAMEWORK_API UClass* StaticClass<UUIFrameworkWidget>()
	{
		return UUIFrameworkWidget::StaticClass();
	}

	void UUIFrameworkWidget::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bIsEnabled(TEXT("bIsEnabled"));
		static const FName Name_Visibility(TEXT("Visibility"));
		static const FName Name_WidgetClass(TEXT("WidgetClass"));
		static const FName Name_Id(TEXT("Id"));

		const bool bIsValid = true
			&& Name_bIsEnabled == ClassReps[(int32)ENetFields_Private::bIsEnabled].Property->GetFName()
			&& Name_Visibility == ClassReps[(int32)ENetFields_Private::Visibility].Property->GetFName()
			&& Name_WidgetClass == ClassReps[(int32)ENetFields_Private::WidgetClass].Property->GetFName()
			&& Name_Id == ClassReps[(int32)ENetFields_Private::Id].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UUIFrameworkWidget"));
	}
	UUIFrameworkWidget::UUIFrameworkWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUIFrameworkWidget);
	UUIFrameworkWidget::~UUIFrameworkWidget() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUIFrameworkWidgetWrapperInterface, UUIFrameworkWidgetWrapperInterface::StaticClass, TEXT("UUIFrameworkWidgetWrapperInterface"), &Z_Registration_Info_UClass_UUIFrameworkWidgetWrapperInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUIFrameworkWidgetWrapperInterface), 52413659U) },
		{ Z_Construct_UClass_UUIFrameworkWidget, UUIFrameworkWidget::StaticClass, TEXT("UUIFrameworkWidget"), &Z_Registration_Info_UClass_UUIFrameworkWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUIFrameworkWidget), 1886655848U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_3764025543(TEXT("/Script/UIFramework"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
