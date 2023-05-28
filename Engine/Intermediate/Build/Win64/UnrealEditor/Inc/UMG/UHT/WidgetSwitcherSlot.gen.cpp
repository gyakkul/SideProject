// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/WidgetSwitcherSlot.h"
#include "Layout/Margin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetSwitcherSlot() {}
// Cross Module References
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	UMG_API UClass* Z_Construct_UClass_UPanelSlot();
	UMG_API UClass* Z_Construct_UClass_UWidgetSwitcherSlot();
	UMG_API UClass* Z_Construct_UClass_UWidgetSwitcherSlot_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	DEFINE_FUNCTION(UWidgetSwitcherSlot::execSetVerticalAlignment)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InVerticalAlignment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVerticalAlignment(EVerticalAlignment(Z_Param_InVerticalAlignment));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetSwitcherSlot::execSetHorizontalAlignment)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InHorizontalAlignment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHorizontalAlignment(EHorizontalAlignment(Z_Param_InHorizontalAlignment));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetSwitcherSlot::execSetPadding)
	{
		P_GET_STRUCT(FMargin,Z_Param_InPadding);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPadding(Z_Param_InPadding);
		P_NATIVE_END;
	}
	void UWidgetSwitcherSlot::SetPadding_WrapperImpl(void* Object, const void* InValue)
	{
		UWidgetSwitcherSlot* Obj = (UWidgetSwitcherSlot*)Object;
		FMargin& Value = *(FMargin*)InValue;
		Obj->SetPadding(Value);
	}
	void UWidgetSwitcherSlot::SetHorizontalAlignment_WrapperImpl(void* Object, const void* InValue)
	{
		UWidgetSwitcherSlot* Obj = (UWidgetSwitcherSlot*)Object;
		EHorizontalAlignment Value = (EHorizontalAlignment)*(uint8*)InValue;
		Obj->SetHorizontalAlignment(Value);
	}
	void UWidgetSwitcherSlot::SetVerticalAlignment_WrapperImpl(void* Object, const void* InValue)
	{
		UWidgetSwitcherSlot* Obj = (UWidgetSwitcherSlot*)Object;
		EVerticalAlignment Value = (EVerticalAlignment)*(uint8*)InValue;
		Obj->SetVerticalAlignment(Value);
	}
	void UWidgetSwitcherSlot::StaticRegisterNativesUWidgetSwitcherSlot()
	{
		UClass* Class = UWidgetSwitcherSlot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetHorizontalAlignment", &UWidgetSwitcherSlot::execSetHorizontalAlignment },
			{ "SetPadding", &UWidgetSwitcherSlot::execSetPadding },
			{ "SetVerticalAlignment", &UWidgetSwitcherSlot::execSetVerticalAlignment },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWidgetSwitcherSlot_SetHorizontalAlignment_Statics
	{
		struct WidgetSwitcherSlot_eventSetHorizontalAlignment_Parms
		{
			TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InHorizontalAlignment;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWidgetSwitcherSlot_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment = { "InHorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WidgetSwitcherSlot_eventSetHorizontalAlignment_Parms, InHorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(nullptr, 0) }; // 4247529014
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetSwitcherSlot_SetHorizontalAlignment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetSwitcherSlot_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetSwitcherSlot_SetHorizontalAlignment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Widget Switcher Slot" },
		{ "ModuleRelativePath", "Public/Components/WidgetSwitcherSlot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetSwitcherSlot_SetHorizontalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetSwitcherSlot, nullptr, "SetHorizontalAlignment", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidgetSwitcherSlot_SetHorizontalAlignment_Statics::WidgetSwitcherSlot_eventSetHorizontalAlignment_Parms), Z_Construct_UFunction_UWidgetSwitcherSlot_SetHorizontalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcherSlot_SetHorizontalAlignment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetSwitcherSlot_SetHorizontalAlignment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcherSlot_SetHorizontalAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetSwitcherSlot_SetHorizontalAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetSwitcherSlot_SetHorizontalAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetSwitcherSlot_SetPadding_Statics
	{
		struct WidgetSwitcherSlot_eventSetPadding_Parms
		{
			FMargin InPadding;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPadding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetSwitcherSlot_SetPadding_Statics::NewProp_InPadding = { "InPadding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WidgetSwitcherSlot_eventSetPadding_Parms, InPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(nullptr, 0) }; // 2014822612
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetSwitcherSlot_SetPadding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetSwitcherSlot_SetPadding_Statics::NewProp_InPadding,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetSwitcherSlot_SetPadding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Widget Switcher Slot" },
		{ "ModuleRelativePath", "Public/Components/WidgetSwitcherSlot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetSwitcherSlot_SetPadding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetSwitcherSlot, nullptr, "SetPadding", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidgetSwitcherSlot_SetPadding_Statics::WidgetSwitcherSlot_eventSetPadding_Parms), Z_Construct_UFunction_UWidgetSwitcherSlot_SetPadding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcherSlot_SetPadding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetSwitcherSlot_SetPadding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcherSlot_SetPadding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetSwitcherSlot_SetPadding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetSwitcherSlot_SetPadding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetSwitcherSlot_SetVerticalAlignment_Statics
	{
		struct WidgetSwitcherSlot_eventSetVerticalAlignment_Parms
		{
			TEnumAsByte<EVerticalAlignment> InVerticalAlignment;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InVerticalAlignment;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWidgetSwitcherSlot_SetVerticalAlignment_Statics::NewProp_InVerticalAlignment = { "InVerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WidgetSwitcherSlot_eventSetVerticalAlignment_Parms, InVerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(nullptr, 0) }; // 1453904578
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetSwitcherSlot_SetVerticalAlignment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetSwitcherSlot_SetVerticalAlignment_Statics::NewProp_InVerticalAlignment,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetSwitcherSlot_SetVerticalAlignment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Widget Switcher Slot" },
		{ "ModuleRelativePath", "Public/Components/WidgetSwitcherSlot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetSwitcherSlot_SetVerticalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetSwitcherSlot, nullptr, "SetVerticalAlignment", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidgetSwitcherSlot_SetVerticalAlignment_Statics::WidgetSwitcherSlot_eventSetVerticalAlignment_Parms), Z_Construct_UFunction_UWidgetSwitcherSlot_SetVerticalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcherSlot_SetVerticalAlignment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetSwitcherSlot_SetVerticalAlignment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcherSlot_SetVerticalAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetSwitcherSlot_SetVerticalAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetSwitcherSlot_SetVerticalAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetSwitcherSlot);
	UClass* Z_Construct_UClass_UWidgetSwitcherSlot_NoRegister()
	{
		return UWidgetSwitcherSlot::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetSwitcherSlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Padding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_HorizontalAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerticalAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_VerticalAlignment;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetSwitcherSlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPanelSlot,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWidgetSwitcherSlot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWidgetSwitcherSlot_SetHorizontalAlignment, "SetHorizontalAlignment" }, // 3126848933
		{ &Z_Construct_UFunction_UWidgetSwitcherSlot_SetPadding, "SetPadding" }, // 156867561
		{ &Z_Construct_UFunction_UWidgetSwitcherSlot_SetVerticalAlignment, "SetVerticalAlignment" }, // 1259407455
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetSwitcherSlot_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** The Slot for the UWidgetSwitcher, contains the widget that is flowed vertically */" },
		{ "IncludePath", "Components/WidgetSwitcherSlot.h" },
		{ "ModuleRelativePath", "Public/Components/WidgetSwitcherSlot.h" },
		{ "ToolTip", "The Slot for the UWidgetSwitcher, contains the widget that is flowed vertically" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetSwitcherSlot_Statics::NewProp_Padding_MetaData[] = {
		{ "BlueprintSetter", "SetPadding" },
		{ "Category", "Layout|Widget Switcher Slot" },
		{ "Comment", "/** The padding area between the slot and the content it contains. */" },
		{ "ModuleRelativePath", "Public/Components/WidgetSwitcherSlot.h" },
		{ "ToolTip", "The padding area between the slot and the content it contains." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidgetSwitcherSlot_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UWidgetSwitcherSlot::SetPadding_WrapperImpl, nullptr, STRUCT_OFFSET(UWidgetSwitcherSlot, Padding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UWidgetSwitcherSlot_Statics::NewProp_Padding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetSwitcherSlot_Statics::NewProp_Padding_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetSwitcherSlot_Statics::NewProp_HorizontalAlignment_MetaData[] = {
		{ "BlueprintSetter", "SetHorizontalAlignment" },
		{ "Category", "Layout|Widget Switcher Slot" },
		{ "Comment", "/** The alignment of the object horizontally. */" },
		{ "ModuleRelativePath", "Public/Components/WidgetSwitcherSlot.h" },
		{ "ToolTip", "The alignment of the object horizontally." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWidgetSwitcherSlot_Statics::NewProp_HorizontalAlignment = { "HorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UWidgetSwitcherSlot::SetHorizontalAlignment_WrapperImpl, nullptr, STRUCT_OFFSET(UWidgetSwitcherSlot, HorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(Z_Construct_UClass_UWidgetSwitcherSlot_Statics::NewProp_HorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetSwitcherSlot_Statics::NewProp_HorizontalAlignment_MetaData)) }; // 4247529014
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetSwitcherSlot_Statics::NewProp_VerticalAlignment_MetaData[] = {
		{ "BlueprintSetter", "SetVerticalAlignment" },
		{ "Category", "Layout|Widget Switcher Slot" },
		{ "Comment", "/** The alignment of the object vertically. */" },
		{ "ModuleRelativePath", "Public/Components/WidgetSwitcherSlot.h" },
		{ "ToolTip", "The alignment of the object vertically." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWidgetSwitcherSlot_Statics::NewProp_VerticalAlignment = { "VerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UWidgetSwitcherSlot::SetVerticalAlignment_WrapperImpl, nullptr, STRUCT_OFFSET(UWidgetSwitcherSlot, VerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(Z_Construct_UClass_UWidgetSwitcherSlot_Statics::NewProp_VerticalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetSwitcherSlot_Statics::NewProp_VerticalAlignment_MetaData)) }; // 1453904578
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidgetSwitcherSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetSwitcherSlot_Statics::NewProp_Padding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetSwitcherSlot_Statics::NewProp_HorizontalAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetSwitcherSlot_Statics::NewProp_VerticalAlignment,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetSwitcherSlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetSwitcherSlot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetSwitcherSlot_Statics::ClassParams = {
		&UWidgetSwitcherSlot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWidgetSwitcherSlot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetSwitcherSlot_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWidgetSwitcherSlot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetSwitcherSlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidgetSwitcherSlot()
	{
		if (!Z_Registration_Info_UClass_UWidgetSwitcherSlot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetSwitcherSlot.OuterSingleton, Z_Construct_UClass_UWidgetSwitcherSlot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWidgetSwitcherSlot.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UWidgetSwitcherSlot>()
	{
		return UWidgetSwitcherSlot::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetSwitcherSlot);
	UWidgetSwitcherSlot::~UWidgetSwitcherSlot() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcherSlot_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcherSlot_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetSwitcherSlot, UWidgetSwitcherSlot::StaticClass, TEXT("UWidgetSwitcherSlot"), &Z_Registration_Info_UClass_UWidgetSwitcherSlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetSwitcherSlot), 2017038200U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcherSlot_h_737513686(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcherSlot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcherSlot_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
