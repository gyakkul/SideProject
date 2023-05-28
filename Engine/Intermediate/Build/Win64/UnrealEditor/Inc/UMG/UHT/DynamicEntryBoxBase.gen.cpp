// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/DynamicEntryBoxBase.h"
#include "Blueprint/UserWidgetPool.h"
#include "Components/RadialBoxSettings.h"
#include "Components/SlateWrapperTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDynamicEntryBoxBase() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
	UMG_API UClass* Z_Construct_UClass_UDynamicEntryBoxBase();
	UMG_API UClass* Z_Construct_UClass_UDynamicEntryBoxBase_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UMG_API UEnum* Z_Construct_UEnum_UMG_EDynamicBoxType();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FRadialBoxSettings();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FSlateChildSize();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FUserWidgetPool();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDynamicBoxType;
	static UEnum* EDynamicBoxType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDynamicBoxType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDynamicBoxType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UMG_EDynamicBoxType, (UObject*)Z_Construct_UPackage__Script_UMG(), TEXT("EDynamicBoxType"));
		}
		return Z_Registration_Info_UEnum_EDynamicBoxType.OuterSingleton;
	}
	template<> UMG_API UEnum* StaticEnum<EDynamicBoxType>()
	{
		return EDynamicBoxType_StaticEnum();
	}
	struct Z_Construct_UEnum_UMG_EDynamicBoxType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UMG_EDynamicBoxType_Statics::Enumerators[] = {
		{ "EDynamicBoxType::Horizontal", (int64)EDynamicBoxType::Horizontal },
		{ "EDynamicBoxType::Vertical", (int64)EDynamicBoxType::Vertical },
		{ "EDynamicBoxType::Wrap", (int64)EDynamicBoxType::Wrap },
		{ "EDynamicBoxType::VerticalWrap", (int64)EDynamicBoxType::VerticalWrap },
		{ "EDynamicBoxType::Radial", (int64)EDynamicBoxType::Radial },
		{ "EDynamicBoxType::Overlay", (int64)EDynamicBoxType::Overlay },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UMG_EDynamicBoxType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Horizontal.Name", "EDynamicBoxType::Horizontal" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBoxBase.h" },
		{ "Overlay.Name", "EDynamicBoxType::Overlay" },
		{ "Radial.Name", "EDynamicBoxType::Radial" },
		{ "Vertical.Name", "EDynamicBoxType::Vertical" },
		{ "VerticalWrap.Name", "EDynamicBoxType::VerticalWrap" },
		{ "Wrap.Name", "EDynamicBoxType::Wrap" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UMG_EDynamicBoxType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UMG,
		nullptr,
		"EDynamicBoxType",
		"EDynamicBoxType",
		Z_Construct_UEnum_UMG_EDynamicBoxType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UMG_EDynamicBoxType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UMG_EDynamicBoxType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UMG_EDynamicBoxType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UMG_EDynamicBoxType()
	{
		if (!Z_Registration_Info_UEnum_EDynamicBoxType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDynamicBoxType.InnerSingleton, Z_Construct_UEnum_UMG_EDynamicBoxType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDynamicBoxType.InnerSingleton;
	}
	DEFINE_FUNCTION(UDynamicEntryBoxBase::execSetRadialSettings)
	{
		P_GET_STRUCT_REF(FRadialBoxSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRadialSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDynamicEntryBoxBase::execSetEntrySpacing)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InEntrySpacing);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEntrySpacing(Z_Param_Out_InEntrySpacing);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDynamicEntryBoxBase::execGetNumEntries)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumEntries();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDynamicEntryBoxBase::execGetAllEntries)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UUserWidget*>*)Z_Param__Result=P_THIS->GetAllEntries();
		P_NATIVE_END;
	}
	void UDynamicEntryBoxBase::GetEntrySpacing_WrapperImpl(const void* Object, void* OutValue)
	{
		const UDynamicEntryBoxBase* Obj = (const UDynamicEntryBoxBase*)Object;
		FVector2D& Result = *(FVector2D*)OutValue;
		Result = (FVector2D)Obj->GetEntrySpacing();
	}
	void UDynamicEntryBoxBase::SetEntrySpacing_WrapperImpl(void* Object, const void* InValue)
	{
		UDynamicEntryBoxBase* Obj = (UDynamicEntryBoxBase*)Object;
		FVector2D& Value = *(FVector2D*)InValue;
		Obj->SetEntrySpacing(Value);
	}
	void UDynamicEntryBoxBase::GetEntryBoxType_WrapperImpl(const void* Object, void* OutValue)
	{
		const UDynamicEntryBoxBase* Obj = (const UDynamicEntryBoxBase*)Object;
		EDynamicBoxType& Result = *(EDynamicBoxType*)OutValue;
		Result = (EDynamicBoxType)Obj->GetBoxType();
	}
	void UDynamicEntryBoxBase::GetEntrySizeRule_WrapperImpl(const void* Object, void* OutValue)
	{
		const UDynamicEntryBoxBase* Obj = (const UDynamicEntryBoxBase*)Object;
		FSlateChildSize& Result = *(FSlateChildSize*)OutValue;
		Result = (FSlateChildSize)Obj->GetEntrySizeRule();
	}
	void UDynamicEntryBoxBase::GetEntryHorizontalAlignment_WrapperImpl(const void* Object, void* OutValue)
	{
		const UDynamicEntryBoxBase* Obj = (const UDynamicEntryBoxBase*)Object;
		EHorizontalAlignment& Result = *(EHorizontalAlignment*)OutValue;
		Result = (EHorizontalAlignment)Obj->GetEntryHorizontalAlignment();
	}
	void UDynamicEntryBoxBase::GetEntryVerticalAlignment_WrapperImpl(const void* Object, void* OutValue)
	{
		const UDynamicEntryBoxBase* Obj = (const UDynamicEntryBoxBase*)Object;
		EVerticalAlignment& Result = *(EVerticalAlignment*)OutValue;
		Result = (EVerticalAlignment)Obj->GetEntryVerticalAlignment();
	}
	void UDynamicEntryBoxBase::GetMaxElementSize_WrapperImpl(const void* Object, void* OutValue)
	{
		const UDynamicEntryBoxBase* Obj = (const UDynamicEntryBoxBase*)Object;
		int32& Result = *(int32*)OutValue;
		Result = (int32)Obj->GetMaxElementSize();
	}
	void UDynamicEntryBoxBase::GetRadialBoxSettings_WrapperImpl(const void* Object, void* OutValue)
	{
		const UDynamicEntryBoxBase* Obj = (const UDynamicEntryBoxBase*)Object;
		FRadialBoxSettings& Result = *(FRadialBoxSettings*)OutValue;
		Result = (FRadialBoxSettings)Obj->GetRadialBoxSettings();
	}
	void UDynamicEntryBoxBase::SetRadialBoxSettings_WrapperImpl(void* Object, const void* InValue)
	{
		UDynamicEntryBoxBase* Obj = (UDynamicEntryBoxBase*)Object;
		FRadialBoxSettings& Value = *(FRadialBoxSettings*)InValue;
		Obj->SetRadialSettings(Value);
	}
	void UDynamicEntryBoxBase::StaticRegisterNativesUDynamicEntryBoxBase()
	{
		UClass* Class = UDynamicEntryBoxBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllEntries", &UDynamicEntryBoxBase::execGetAllEntries },
			{ "GetNumEntries", &UDynamicEntryBoxBase::execGetNumEntries },
			{ "SetEntrySpacing", &UDynamicEntryBoxBase::execSetEntrySpacing },
			{ "SetRadialSettings", &UDynamicEntryBoxBase::execSetRadialSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDynamicEntryBoxBase_GetAllEntries_Statics
	{
		struct DynamicEntryBoxBase_eventGetAllEntries_Parms
		{
			TArray<UUserWidget*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDynamicEntryBoxBase_GetAllEntries_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicEntryBoxBase_GetAllEntries_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDynamicEntryBoxBase_GetAllEntries_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x001000800800058a, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicEntryBoxBase_eventGetAllEntries_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDynamicEntryBoxBase_GetAllEntries_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBoxBase_GetAllEntries_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicEntryBoxBase_GetAllEntries_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicEntryBoxBase_GetAllEntries_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicEntryBoxBase_GetAllEntries_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicEntryBoxBase_GetAllEntries_Statics::Function_MetaDataParams[] = {
		{ "Category", "DynamicEntryBox" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBoxBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicEntryBoxBase_GetAllEntries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicEntryBoxBase, nullptr, "GetAllEntries", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDynamicEntryBoxBase_GetAllEntries_Statics::DynamicEntryBoxBase_eventGetAllEntries_Parms), Z_Construct_UFunction_UDynamicEntryBoxBase_GetAllEntries_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBoxBase_GetAllEntries_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDynamicEntryBoxBase_GetAllEntries_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBoxBase_GetAllEntries_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDynamicEntryBoxBase_GetAllEntries()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDynamicEntryBoxBase_GetAllEntries_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDynamicEntryBoxBase_GetNumEntries_Statics
	{
		struct DynamicEntryBoxBase_eventGetNumEntries_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDynamicEntryBoxBase_GetNumEntries_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicEntryBoxBase_eventGetNumEntries_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicEntryBoxBase_GetNumEntries_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicEntryBoxBase_GetNumEntries_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicEntryBoxBase_GetNumEntries_Statics::Function_MetaDataParams[] = {
		{ "Category", "DynamicEntryBox" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBoxBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicEntryBoxBase_GetNumEntries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicEntryBoxBase, nullptr, "GetNumEntries", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDynamicEntryBoxBase_GetNumEntries_Statics::DynamicEntryBoxBase_eventGetNumEntries_Parms), Z_Construct_UFunction_UDynamicEntryBoxBase_GetNumEntries_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBoxBase_GetNumEntries_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDynamicEntryBoxBase_GetNumEntries_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBoxBase_GetNumEntries_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDynamicEntryBoxBase_GetNumEntries()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDynamicEntryBoxBase_GetNumEntries_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDynamicEntryBoxBase_SetEntrySpacing_Statics
	{
		struct DynamicEntryBoxBase_eventSetEntrySpacing_Parms
		{
			FVector2D InEntrySpacing;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InEntrySpacing_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InEntrySpacing;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicEntryBoxBase_SetEntrySpacing_Statics::NewProp_InEntrySpacing_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDynamicEntryBoxBase_SetEntrySpacing_Statics::NewProp_InEntrySpacing = { "InEntrySpacing", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicEntryBoxBase_eventSetEntrySpacing_Parms, InEntrySpacing), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UDynamicEntryBoxBase_SetEntrySpacing_Statics::NewProp_InEntrySpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBoxBase_SetEntrySpacing_Statics::NewProp_InEntrySpacing_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicEntryBoxBase_SetEntrySpacing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicEntryBoxBase_SetEntrySpacing_Statics::NewProp_InEntrySpacing,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicEntryBoxBase_SetEntrySpacing_Statics::Function_MetaDataParams[] = {
		{ "Category", "DynamicEntryBox" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBoxBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicEntryBoxBase_SetEntrySpacing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicEntryBoxBase, nullptr, "SetEntrySpacing", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDynamicEntryBoxBase_SetEntrySpacing_Statics::DynamicEntryBoxBase_eventSetEntrySpacing_Parms), Z_Construct_UFunction_UDynamicEntryBoxBase_SetEntrySpacing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBoxBase_SetEntrySpacing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDynamicEntryBoxBase_SetEntrySpacing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBoxBase_SetEntrySpacing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDynamicEntryBoxBase_SetEntrySpacing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDynamicEntryBoxBase_SetEntrySpacing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDynamicEntryBoxBase_SetRadialSettings_Statics
	{
		struct DynamicEntryBoxBase_eventSetRadialSettings_Parms
		{
			FRadialBoxSettings InSettings;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicEntryBoxBase_SetRadialSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDynamicEntryBoxBase_SetRadialSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicEntryBoxBase_eventSetRadialSettings_Parms, InSettings), Z_Construct_UScriptStruct_FRadialBoxSettings, METADATA_PARAMS(Z_Construct_UFunction_UDynamicEntryBoxBase_SetRadialSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBoxBase_SetRadialSettings_Statics::NewProp_InSettings_MetaData)) }; // 4156349531
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicEntryBoxBase_SetRadialSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicEntryBoxBase_SetRadialSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicEntryBoxBase_SetRadialSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "DynamicEntryBox" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBoxBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicEntryBoxBase_SetRadialSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicEntryBoxBase, nullptr, "SetRadialSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDynamicEntryBoxBase_SetRadialSettings_Statics::DynamicEntryBoxBase_eventSetRadialSettings_Parms), Z_Construct_UFunction_UDynamicEntryBoxBase_SetRadialSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBoxBase_SetRadialSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDynamicEntryBoxBase_SetRadialSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBoxBase_SetRadialSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDynamicEntryBoxBase_SetRadialSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDynamicEntryBoxBase_SetRadialSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDynamicEntryBoxBase);
	UClass* Z_Construct_UClass_UDynamicEntryBoxBase_NoRegister()
	{
		return UDynamicEntryBoxBase::StaticClass();
	}
	struct Z_Construct_UClass_UDynamicEntryBoxBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntrySpacing_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EntrySpacing;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpacingPattern_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpacingPattern_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpacingPattern;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EntryBoxType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntryBoxType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EntryBoxType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntrySizeRule_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EntrySizeRule;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntryHorizontalAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_EntryHorizontalAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntryVerticalAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_EntryVerticalAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxElementSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxElementSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RadialBoxSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RadialBoxSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntryWidgetPool_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EntryWidgetPool;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDynamicEntryBoxBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDynamicEntryBoxBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDynamicEntryBoxBase_GetAllEntries, "GetAllEntries" }, // 2065535007
		{ &Z_Construct_UFunction_UDynamicEntryBoxBase_GetNumEntries, "GetNumEntries" }, // 545932918
		{ &Z_Construct_UFunction_UDynamicEntryBoxBase_SetEntrySpacing, "SetEntrySpacing" }, // 1871746794
		{ &Z_Construct_UFunction_UDynamicEntryBoxBase_SetRadialSettings, "SetRadialSettings" }, // 4187579394
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicEntryBoxBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base for widgets that support a dynamic number of auto-generated entries at both design- and run-time.\n * Contains all functionality needed to create, construct, and cache an arbitrary number of entry widgets, but exposes no means of entry creation or removal\n * It's up to child classes to decide how they want to perform the population (some may do so entirely on their own without exposing a thing)\n *\n * @see UDynamicEntryBox for a ready-to-use version\n */" },
		{ "IncludePath", "Components/DynamicEntryBoxBase.h" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBoxBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base for widgets that support a dynamic number of auto-generated entries at both design- and run-time.\nContains all functionality needed to create, construct, and cache an arbitrary number of entry widgets, but exposes no means of entry creation or removal\nIt's up to child classes to decide how they want to perform the population (some may do so entirely on their own without exposing a thing)\n\n@see UDynamicEntryBox for a ready-to-use version" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntrySpacing_MetaData[] = {
		{ "BlueprintSetter", "SetEntrySpacing" },
		{ "Category", "EntryLayout" },
		{ "Comment", "/**\n\x09 * The padding to apply between entries in the box.\n\x09 * Note horizontal boxes only use the X and vertical boxes only use Y. Value is also ignored for the first entry in the box.\n\x09 * Wrap and Overlay types use both X and Y for spacing.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBoxBase.h" },
		{ "ToolTip", "The padding to apply between entries in the box.\nNote horizontal boxes only use the X and vertical boxes only use Y. Value is also ignored for the first entry in the box.\nWrap and Overlay types use both X and Y for spacing." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntrySpacing = { "EntrySpacing", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UDynamicEntryBoxBase::SetEntrySpacing_WrapperImpl, &UDynamicEntryBoxBase::GetEntrySpacing_WrapperImpl, STRUCT_OFFSET(UDynamicEntryBoxBase, EntrySpacing), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntrySpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntrySpacing_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_SpacingPattern_Inner = { "SpacingPattern", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_SpacingPattern_MetaData[] = {
		{ "Category", "EntryLayout" },
		{ "Comment", "/** The looping sequence of entry paddings to apply as entries are created. Overlay boxes only. Ignores EntrySpacing if not empty. */" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBoxBase.h" },
		{ "ToolTip", "The looping sequence of entry paddings to apply as entries are created. Overlay boxes only. Ignores EntrySpacing if not empty." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_SpacingPattern = { "SpacingPattern", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDynamicEntryBoxBase, SpacingPattern), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_SpacingPattern_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_SpacingPattern_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntryBoxType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntryBoxType_MetaData[] = {
		{ "Category", "DynamicEntryBox" },
		{ "Comment", "/** The type of box panel into which created entries are added. Some differences in functionality exist between each type. */" },
		{ "DesignerRebuild", "" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBoxBase.h" },
		{ "ToolTip", "The type of box panel into which created entries are added. Some differences in functionality exist between each type." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntryBoxType = { "EntryBoxType", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, &UDynamicEntryBoxBase::GetEntryBoxType_WrapperImpl, STRUCT_OFFSET(UDynamicEntryBoxBase, EntryBoxType), Z_Construct_UEnum_UMG_EDynamicBoxType, METADATA_PARAMS(Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntryBoxType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntryBoxType_MetaData)) }; // 604065428
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntrySizeRule_MetaData[] = {
		{ "Category", "EntryLayout" },
		{ "Comment", "/** Sizing rule to apply to generated entries. Horizontal/Vertical boxes only. */" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBoxBase.h" },
		{ "ToolTip", "Sizing rule to apply to generated entries. Horizontal/Vertical boxes only." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntrySizeRule = { "EntrySizeRule", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, &UDynamicEntryBoxBase::GetEntrySizeRule_WrapperImpl, STRUCT_OFFSET(UDynamicEntryBoxBase, EntrySizeRule), Z_Construct_UScriptStruct_FSlateChildSize, METADATA_PARAMS(Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntrySizeRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntrySizeRule_MetaData)) }; // 2981121082
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntryHorizontalAlignment_MetaData[] = {
		{ "Category", "EntryLayout" },
		{ "Comment", "/** Horizontal alignment of generated entries. Horizontal/Vertical/Wrap boxes only. */" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBoxBase.h" },
		{ "ToolTip", "Horizontal alignment of generated entries. Horizontal/Vertical/Wrap boxes only." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntryHorizontalAlignment = { "EntryHorizontalAlignment", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, &UDynamicEntryBoxBase::GetEntryHorizontalAlignment_WrapperImpl, STRUCT_OFFSET(UDynamicEntryBoxBase, EntryHorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntryHorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntryHorizontalAlignment_MetaData)) }; // 4247529014
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntryVerticalAlignment_MetaData[] = {
		{ "Category", "EntryLayout" },
		{ "Comment", "/** Vertical alignment of generated entries. Horizontal/Vertical/Wrap boxes only. */" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBoxBase.h" },
		{ "ToolTip", "Vertical alignment of generated entries. Horizontal/Vertical/Wrap boxes only." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntryVerticalAlignment = { "EntryVerticalAlignment", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, &UDynamicEntryBoxBase::GetEntryVerticalAlignment_WrapperImpl, STRUCT_OFFSET(UDynamicEntryBoxBase, EntryVerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntryVerticalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntryVerticalAlignment_MetaData)) }; // 1453904578
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_MaxElementSize_MetaData[] = {
		{ "Category", "EntryLayout" },
		{ "Comment", "/** The maximum size of each entry in the dominant axis of the box. Vertical/Horizontal boxes only. */" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBoxBase.h" },
		{ "ToolTip", "The maximum size of each entry in the dominant axis of the box. Vertical/Horizontal boxes only." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_MaxElementSize = { "MaxElementSize", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, &UDynamicEntryBoxBase::GetMaxElementSize_WrapperImpl, STRUCT_OFFSET(UDynamicEntryBoxBase, MaxElementSize), METADATA_PARAMS(Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_MaxElementSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_MaxElementSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_RadialBoxSettings_MetaData[] = {
		{ "BlueprintSetter", "SetRadialSettings" },
		{ "Category", "EntryLayout" },
		{ "Comment", "/** Settings only relevant to RadialBox */" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBoxBase.h" },
		{ "ToolTip", "Settings only relevant to RadialBox" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_RadialBoxSettings = { "RadialBoxSettings", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UDynamicEntryBoxBase::SetRadialBoxSettings_WrapperImpl, &UDynamicEntryBoxBase::GetRadialBoxSettings_WrapperImpl, STRUCT_OFFSET(UDynamicEntryBoxBase, RadialBoxSettings), Z_Construct_UScriptStruct_FRadialBoxSettings, METADATA_PARAMS(Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_RadialBoxSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_RadialBoxSettings_MetaData)) }; // 4156349531
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntryWidgetPool_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBoxBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntryWidgetPool = { "EntryWidgetPool", nullptr, (EPropertyFlags)0x0040008000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDynamicEntryBoxBase, EntryWidgetPool), Z_Construct_UScriptStruct_FUserWidgetPool, METADATA_PARAMS(Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntryWidgetPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntryWidgetPool_MetaData)) }; // 3158109562
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDynamicEntryBoxBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntrySpacing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_SpacingPattern_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_SpacingPattern,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntryBoxType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntryBoxType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntrySizeRule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntryHorizontalAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntryVerticalAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_MaxElementSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_RadialBoxSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicEntryBoxBase_Statics::NewProp_EntryWidgetPool,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDynamicEntryBoxBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDynamicEntryBoxBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDynamicEntryBoxBase_Statics::ClassParams = {
		&UDynamicEntryBoxBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDynamicEntryBoxBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicEntryBoxBase_Statics::PropPointers),
		0,
		0x00B000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDynamicEntryBoxBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicEntryBoxBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDynamicEntryBoxBase()
	{
		if (!Z_Registration_Info_UClass_UDynamicEntryBoxBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDynamicEntryBoxBase.OuterSingleton, Z_Construct_UClass_UDynamicEntryBoxBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDynamicEntryBoxBase.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UDynamicEntryBoxBase>()
	{
		return UDynamicEntryBoxBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDynamicEntryBoxBase);
	UDynamicEntryBoxBase::~UDynamicEntryBoxBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBoxBase_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBoxBase_h_Statics::EnumInfo[] = {
		{ EDynamicBoxType_StaticEnum, TEXT("EDynamicBoxType"), &Z_Registration_Info_UEnum_EDynamicBoxType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 604065428U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBoxBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDynamicEntryBoxBase, UDynamicEntryBoxBase::StaticClass, TEXT("UDynamicEntryBoxBase"), &Z_Registration_Info_UClass_UDynamicEntryBoxBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDynamicEntryBoxBase), 1522611774U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBoxBase_h_1219062416(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBoxBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBoxBase_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBoxBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBoxBase_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
