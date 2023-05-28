// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/ScaleBoxSlot.h"
#include "Layout/Margin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScaleBoxSlot() {}
// Cross Module References
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	UMG_API UClass* Z_Construct_UClass_UPanelSlot();
	UMG_API UClass* Z_Construct_UClass_UScaleBoxSlot();
	UMG_API UClass* Z_Construct_UClass_UScaleBoxSlot_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	DEFINE_FUNCTION(UScaleBoxSlot::execSetVerticalAlignment)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InVerticalAlignment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVerticalAlignment(EVerticalAlignment(Z_Param_InVerticalAlignment));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScaleBoxSlot::execSetHorizontalAlignment)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InHorizontalAlignment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHorizontalAlignment(EHorizontalAlignment(Z_Param_InHorizontalAlignment));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScaleBoxSlot::execSetPadding)
	{
		P_GET_STRUCT(FMargin,Z_Param_InPadding);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPadding(Z_Param_InPadding);
		P_NATIVE_END;
	}
	void UScaleBoxSlot::SetHorizontalAlignment_WrapperImpl(void* Object, const void* InValue)
	{
		UScaleBoxSlot* Obj = (UScaleBoxSlot*)Object;
		EHorizontalAlignment Value = (EHorizontalAlignment)*(uint8*)InValue;
		Obj->SetHorizontalAlignment(Value);
	}
	void UScaleBoxSlot::SetVerticalAlignment_WrapperImpl(void* Object, const void* InValue)
	{
		UScaleBoxSlot* Obj = (UScaleBoxSlot*)Object;
		EVerticalAlignment Value = (EVerticalAlignment)*(uint8*)InValue;
		Obj->SetVerticalAlignment(Value);
	}
	void UScaleBoxSlot::StaticRegisterNativesUScaleBoxSlot()
	{
		UClass* Class = UScaleBoxSlot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetHorizontalAlignment", &UScaleBoxSlot::execSetHorizontalAlignment },
			{ "SetPadding", &UScaleBoxSlot::execSetPadding },
			{ "SetVerticalAlignment", &UScaleBoxSlot::execSetVerticalAlignment },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UScaleBoxSlot_SetHorizontalAlignment_Statics
	{
		struct ScaleBoxSlot_eventSetHorizontalAlignment_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UScaleBoxSlot_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment = { "InHorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScaleBoxSlot_eventSetHorizontalAlignment_Parms, InHorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(nullptr, 0) }; // 4247529014
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScaleBoxSlot_SetHorizontalAlignment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScaleBoxSlot_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScaleBoxSlot_SetHorizontalAlignment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|ScaleBox Slot" },
		{ "ModuleRelativePath", "Public/Components/ScaleBoxSlot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScaleBoxSlot_SetHorizontalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScaleBoxSlot, nullptr, "SetHorizontalAlignment", nullptr, nullptr, sizeof(Z_Construct_UFunction_UScaleBoxSlot_SetHorizontalAlignment_Statics::ScaleBoxSlot_eventSetHorizontalAlignment_Parms), Z_Construct_UFunction_UScaleBoxSlot_SetHorizontalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScaleBoxSlot_SetHorizontalAlignment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScaleBoxSlot_SetHorizontalAlignment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScaleBoxSlot_SetHorizontalAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScaleBoxSlot_SetHorizontalAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScaleBoxSlot_SetHorizontalAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScaleBoxSlot_SetPadding_Statics
	{
		struct ScaleBoxSlot_eventSetPadding_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScaleBoxSlot_SetPadding_Statics::NewProp_InPadding = { "InPadding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScaleBoxSlot_eventSetPadding_Parms, InPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(nullptr, 0) }; // 2014822612
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScaleBoxSlot_SetPadding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScaleBoxSlot_SetPadding_Statics::NewProp_InPadding,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScaleBoxSlot_SetPadding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|ScaleBox Slot" },
		{ "DeprecatedFunction", "" },
		{ "DeprecatedMessage", "The function is deprecated - There is no padding on ScaleBox." },
		{ "ModuleRelativePath", "Public/Components/ScaleBoxSlot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScaleBoxSlot_SetPadding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScaleBoxSlot, nullptr, "SetPadding", nullptr, nullptr, sizeof(Z_Construct_UFunction_UScaleBoxSlot_SetPadding_Statics::ScaleBoxSlot_eventSetPadding_Parms), Z_Construct_UFunction_UScaleBoxSlot_SetPadding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScaleBoxSlot_SetPadding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScaleBoxSlot_SetPadding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScaleBoxSlot_SetPadding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScaleBoxSlot_SetPadding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScaleBoxSlot_SetPadding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScaleBoxSlot_SetVerticalAlignment_Statics
	{
		struct ScaleBoxSlot_eventSetVerticalAlignment_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UScaleBoxSlot_SetVerticalAlignment_Statics::NewProp_InVerticalAlignment = { "InVerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScaleBoxSlot_eventSetVerticalAlignment_Parms, InVerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(nullptr, 0) }; // 1453904578
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScaleBoxSlot_SetVerticalAlignment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScaleBoxSlot_SetVerticalAlignment_Statics::NewProp_InVerticalAlignment,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScaleBoxSlot_SetVerticalAlignment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|ScaleBox Slot" },
		{ "ModuleRelativePath", "Public/Components/ScaleBoxSlot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScaleBoxSlot_SetVerticalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScaleBoxSlot, nullptr, "SetVerticalAlignment", nullptr, nullptr, sizeof(Z_Construct_UFunction_UScaleBoxSlot_SetVerticalAlignment_Statics::ScaleBoxSlot_eventSetVerticalAlignment_Parms), Z_Construct_UFunction_UScaleBoxSlot_SetVerticalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScaleBoxSlot_SetVerticalAlignment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScaleBoxSlot_SetVerticalAlignment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScaleBoxSlot_SetVerticalAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScaleBoxSlot_SetVerticalAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScaleBoxSlot_SetVerticalAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScaleBoxSlot);
	UClass* Z_Construct_UClass_UScaleBoxSlot_NoRegister()
	{
		return UScaleBoxSlot::StaticClass();
	}
	struct Z_Construct_UClass_UScaleBoxSlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Padding;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_HorizontalAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerticalAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_VerticalAlignment;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScaleBoxSlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPanelSlot,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UScaleBoxSlot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UScaleBoxSlot_SetHorizontalAlignment, "SetHorizontalAlignment" }, // 497808441
		{ &Z_Construct_UFunction_UScaleBoxSlot_SetPadding, "SetPadding" }, // 3446552972
		{ &Z_Construct_UFunction_UScaleBoxSlot_SetVerticalAlignment, "SetVerticalAlignment" }, // 2334040539
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScaleBoxSlot_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** The Slot for the UScaleBoxSlot, contains the widget displayed in a button's single slot */" },
		{ "IncludePath", "Components/ScaleBoxSlot.h" },
		{ "ModuleRelativePath", "Public/Components/ScaleBoxSlot.h" },
		{ "ToolTip", "The Slot for the UScaleBoxSlot, contains the widget displayed in a button's single slot" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScaleBoxSlot_Statics::NewProp_Padding_MetaData[] = {
		{ "Comment", "/** The padding area between the slot and the content it contains. */" },
		{ "ModuleRelativePath", "Public/Components/ScaleBoxSlot.h" },
		{ "ToolTip", "The padding area between the slot and the content it contains." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UScaleBoxSlot_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UScaleBoxSlot, Padding_DEPRECATED), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UScaleBoxSlot_Statics::NewProp_Padding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScaleBoxSlot_Statics::NewProp_Padding_MetaData)) }; // 2014822612
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScaleBoxSlot_Statics::NewProp_HorizontalAlignment_MetaData[] = {
		{ "Category", "Layout|ScaleBox Slot" },
		{ "Comment", "/** The alignment of the object horizontally. */" },
		{ "ModuleRelativePath", "Public/Components/ScaleBoxSlot.h" },
		{ "ToolTip", "The alignment of the object horizontally." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UScaleBoxSlot_Statics::NewProp_HorizontalAlignment = { "HorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UScaleBoxSlot::SetHorizontalAlignment_WrapperImpl, nullptr, STRUCT_OFFSET(UScaleBoxSlot, HorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(Z_Construct_UClass_UScaleBoxSlot_Statics::NewProp_HorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScaleBoxSlot_Statics::NewProp_HorizontalAlignment_MetaData)) }; // 4247529014
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScaleBoxSlot_Statics::NewProp_VerticalAlignment_MetaData[] = {
		{ "Category", "Layout|ScaleBox Slot" },
		{ "Comment", "/** The alignment of the object vertically. */" },
		{ "ModuleRelativePath", "Public/Components/ScaleBoxSlot.h" },
		{ "ToolTip", "The alignment of the object vertically." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UScaleBoxSlot_Statics::NewProp_VerticalAlignment = { "VerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UScaleBoxSlot::SetVerticalAlignment_WrapperImpl, nullptr, STRUCT_OFFSET(UScaleBoxSlot, VerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(Z_Construct_UClass_UScaleBoxSlot_Statics::NewProp_VerticalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScaleBoxSlot_Statics::NewProp_VerticalAlignment_MetaData)) }; // 1453904578
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScaleBoxSlot_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScaleBoxSlot_Statics::NewProp_Padding,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScaleBoxSlot_Statics::NewProp_HorizontalAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScaleBoxSlot_Statics::NewProp_VerticalAlignment,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScaleBoxSlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScaleBoxSlot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UScaleBoxSlot_Statics::ClassParams = {
		&UScaleBoxSlot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UScaleBoxSlot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UScaleBoxSlot_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UScaleBoxSlot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScaleBoxSlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScaleBoxSlot()
	{
		if (!Z_Registration_Info_UClass_UScaleBoxSlot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScaleBoxSlot.OuterSingleton, Z_Construct_UClass_UScaleBoxSlot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UScaleBoxSlot.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UScaleBoxSlot>()
	{
		return UScaleBoxSlot::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScaleBoxSlot);
	UScaleBoxSlot::~UScaleBoxSlot() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ScaleBoxSlot_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ScaleBoxSlot_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UScaleBoxSlot, UScaleBoxSlot::StaticClass, TEXT("UScaleBoxSlot"), &Z_Registration_Info_UClass_UScaleBoxSlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScaleBoxSlot), 405077026U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ScaleBoxSlot_h_2578934048(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ScaleBoxSlot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ScaleBoxSlot_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
