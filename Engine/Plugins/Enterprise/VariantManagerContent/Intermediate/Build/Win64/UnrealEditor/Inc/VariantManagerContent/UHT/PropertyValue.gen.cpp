// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PropertyValue.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePropertyValue() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VariantManagerContent();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UPropertyValue();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UPropertyValue_NoRegister();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UPropertyValueTransform();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UPropertyValueTransform_NoRegister();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UPropertyValueVisibility();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UPropertyValueVisibility_NoRegister();
	VARIANTMANAGERCONTENT_API UEnum* Z_Construct_UEnum_VariantManagerContent_EPropertyValueCategory();
	VARIANTMANAGERCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FCapturedPropSegment();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPropertyValueCategory;
	static UEnum* EPropertyValueCategory_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPropertyValueCategory.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPropertyValueCategory.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VariantManagerContent_EPropertyValueCategory, (UObject*)Z_Construct_UPackage__Script_VariantManagerContent(), TEXT("EPropertyValueCategory"));
		}
		return Z_Registration_Info_UEnum_EPropertyValueCategory.OuterSingleton;
	}
	template<> VARIANTMANAGERCONTENT_API UEnum* StaticEnum<EPropertyValueCategory>()
	{
		return EPropertyValueCategory_StaticEnum();
	}
	struct Z_Construct_UEnum_VariantManagerContent_EPropertyValueCategory_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VariantManagerContent_EPropertyValueCategory_Statics::Enumerators[] = {
		{ "EPropertyValueCategory::Undefined", (int64)EPropertyValueCategory::Undefined },
		{ "EPropertyValueCategory::Generic", (int64)EPropertyValueCategory::Generic },
		{ "EPropertyValueCategory::RelativeLocation", (int64)EPropertyValueCategory::RelativeLocation },
		{ "EPropertyValueCategory::RelativeRotation", (int64)EPropertyValueCategory::RelativeRotation },
		{ "EPropertyValueCategory::RelativeScale3D", (int64)EPropertyValueCategory::RelativeScale3D },
		{ "EPropertyValueCategory::Visibility", (int64)EPropertyValueCategory::Visibility },
		{ "EPropertyValueCategory::Material", (int64)EPropertyValueCategory::Material },
		{ "EPropertyValueCategory::Color", (int64)EPropertyValueCategory::Color },
		{ "EPropertyValueCategory::Option", (int64)EPropertyValueCategory::Option },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VariantManagerContent_EPropertyValueCategory_Statics::Enum_MetaDataParams[] = {
		{ "Color.Name", "EPropertyValueCategory::Color" },
		{ "Generic.Name", "EPropertyValueCategory::Generic" },
		{ "Material.Name", "EPropertyValueCategory::Material" },
		{ "ModuleRelativePath", "Public/PropertyValue.h" },
		{ "Option.Name", "EPropertyValueCategory::Option" },
		{ "RelativeLocation.Name", "EPropertyValueCategory::RelativeLocation" },
		{ "RelativeRotation.Name", "EPropertyValueCategory::RelativeRotation" },
		{ "RelativeScale3D.Name", "EPropertyValueCategory::RelativeScale3D" },
		{ "Undefined.Name", "EPropertyValueCategory::Undefined" },
		{ "Visibility.Name", "EPropertyValueCategory::Visibility" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VariantManagerContent_EPropertyValueCategory_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VariantManagerContent,
		nullptr,
		"EPropertyValueCategory",
		"EPropertyValueCategory",
		Z_Construct_UEnum_VariantManagerContent_EPropertyValueCategory_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VariantManagerContent_EPropertyValueCategory_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VariantManagerContent_EPropertyValueCategory_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VariantManagerContent_EPropertyValueCategory_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VariantManagerContent_EPropertyValueCategory()
	{
		if (!Z_Registration_Info_UEnum_EPropertyValueCategory.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPropertyValueCategory.InnerSingleton, Z_Construct_UEnum_VariantManagerContent_EPropertyValueCategory_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPropertyValueCategory.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CapturedPropSegment;
class UScriptStruct* FCapturedPropSegment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CapturedPropSegment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CapturedPropSegment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCapturedPropSegment, (UObject*)Z_Construct_UPackage__Script_VariantManagerContent(), TEXT("CapturedPropSegment"));
	}
	return Z_Registration_Info_UScriptStruct_CapturedPropSegment.OuterSingleton;
}
template<> VARIANTMANAGERCONTENT_API UScriptStruct* StaticStruct<FCapturedPropSegment>()
{
	return FCapturedPropSegment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCapturedPropSegment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PropertyIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ComponentName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCapturedPropSegment_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Describes one link in a full property path\n// For array properties, a link might be the outer (e.g. AttachChildren, -1, None)\n// while also it may be an inner (e.g. AttachChildren, 2, Cube)\n// Doing this allows us to resolve components regardless of their order, which\n// is important for handling component reordering and transient components (e.g.\n// runtime billboard components, etc)\n" },
		{ "ModuleRelativePath", "Public/PropertyValue.h" },
		{ "ToolTip", "Describes one link in a full property path\nFor array properties, a link might be the outer (e.g. AttachChildren, -1, None)\nwhile also it may be an inner (e.g. AttachChildren, 2, Cube)\nDoing this allows us to resolve components regardless of their order, which\nis important for handling component reordering and transient components (e.g.\nruntime billboard components, etc)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCapturedPropSegment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCapturedPropSegment>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCapturedPropSegment_Statics::NewProp_PropertyName_MetaData[] = {
		{ "ModuleRelativePath", "Public/PropertyValue.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCapturedPropSegment_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCapturedPropSegment, PropertyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCapturedPropSegment_Statics::NewProp_PropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapturedPropSegment_Statics::NewProp_PropertyName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCapturedPropSegment_Statics::NewProp_PropertyIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/PropertyValue.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCapturedPropSegment_Statics::NewProp_PropertyIndex = { "PropertyIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCapturedPropSegment, PropertyIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FCapturedPropSegment_Statics::NewProp_PropertyIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapturedPropSegment_Statics::NewProp_PropertyIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCapturedPropSegment_Statics::NewProp_ComponentName_MetaData[] = {
		{ "ModuleRelativePath", "Public/PropertyValue.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCapturedPropSegment_Statics::NewProp_ComponentName = { "ComponentName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCapturedPropSegment, ComponentName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCapturedPropSegment_Statics::NewProp_ComponentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapturedPropSegment_Statics::NewProp_ComponentName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCapturedPropSegment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCapturedPropSegment_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCapturedPropSegment_Statics::NewProp_PropertyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCapturedPropSegment_Statics::NewProp_ComponentName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCapturedPropSegment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VariantManagerContent,
		nullptr,
		&NewStructOps,
		"CapturedPropSegment",
		sizeof(FCapturedPropSegment),
		alignof(FCapturedPropSegment),
		Z_Construct_UScriptStruct_FCapturedPropSegment_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapturedPropSegment_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCapturedPropSegment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapturedPropSegment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCapturedPropSegment()
	{
		if (!Z_Registration_Info_UScriptStruct_CapturedPropSegment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CapturedPropSegment.InnerSingleton, Z_Construct_UScriptStruct_FCapturedPropSegment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CapturedPropSegment.InnerSingleton;
	}
	DEFINE_FUNCTION(UPropertyValue::execHasRecordedData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasRecordedData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPropertyValue::execGetFullDisplayString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetFullDisplayString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPropertyValue::execGetPropertyTooltip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetPropertyTooltip();
		P_NATIVE_END;
	}
	void UPropertyValue::StaticRegisterNativesUPropertyValue()
	{
		UClass* Class = UPropertyValue::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFullDisplayString", &UPropertyValue::execGetFullDisplayString },
			{ "GetPropertyTooltip", &UPropertyValue::execGetPropertyTooltip },
			{ "HasRecordedData", &UPropertyValue::execHasRecordedData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPropertyValue_GetFullDisplayString_Statics
	{
		struct PropertyValue_eventGetFullDisplayString_Parms
		{
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPropertyValue_GetFullDisplayString_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPropertyValue_GetFullDisplayString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PropertyValue_eventGetFullDisplayString_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UPropertyValue_GetFullDisplayString_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyValue_GetFullDisplayString_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPropertyValue_GetFullDisplayString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPropertyValue_GetFullDisplayString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPropertyValue_GetFullDisplayString_Statics::Function_MetaDataParams[] = {
		{ "Category", "PropertyValue" },
		{ "ModuleRelativePath", "Public/PropertyValue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPropertyValue_GetFullDisplayString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPropertyValue, nullptr, "GetFullDisplayString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPropertyValue_GetFullDisplayString_Statics::PropertyValue_eventGetFullDisplayString_Parms), Z_Construct_UFunction_UPropertyValue_GetFullDisplayString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyValue_GetFullDisplayString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPropertyValue_GetFullDisplayString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyValue_GetFullDisplayString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPropertyValue_GetFullDisplayString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPropertyValue_GetFullDisplayString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPropertyValue_GetPropertyTooltip_Statics
	{
		struct PropertyValue_eventGetPropertyTooltip_Parms
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
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UPropertyValue_GetPropertyTooltip_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PropertyValue_eventGetPropertyTooltip_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPropertyValue_GetPropertyTooltip_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPropertyValue_GetPropertyTooltip_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPropertyValue_GetPropertyTooltip_Statics::Function_MetaDataParams[] = {
		{ "Category", "PropertyValue" },
		{ "ModuleRelativePath", "Public/PropertyValue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPropertyValue_GetPropertyTooltip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPropertyValue, nullptr, "GetPropertyTooltip", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPropertyValue_GetPropertyTooltip_Statics::PropertyValue_eventGetPropertyTooltip_Parms), Z_Construct_UFunction_UPropertyValue_GetPropertyTooltip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyValue_GetPropertyTooltip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPropertyValue_GetPropertyTooltip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyValue_GetPropertyTooltip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPropertyValue_GetPropertyTooltip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPropertyValue_GetPropertyTooltip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPropertyValue_HasRecordedData_Statics
	{
		struct PropertyValue_eventHasRecordedData_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPropertyValue_HasRecordedData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PropertyValue_eventHasRecordedData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPropertyValue_HasRecordedData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PropertyValue_eventHasRecordedData_Parms), &Z_Construct_UFunction_UPropertyValue_HasRecordedData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPropertyValue_HasRecordedData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPropertyValue_HasRecordedData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPropertyValue_HasRecordedData_Statics::Function_MetaDataParams[] = {
		{ "Category", "PropertyValue" },
		{ "ModuleRelativePath", "Public/PropertyValue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPropertyValue_HasRecordedData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPropertyValue, nullptr, "HasRecordedData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPropertyValue_HasRecordedData_Statics::PropertyValue_eventHasRecordedData_Parms), Z_Construct_UFunction_UPropertyValue_HasRecordedData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyValue_HasRecordedData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPropertyValue_HasRecordedData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyValue_HasRecordedData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPropertyValue_HasRecordedData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPropertyValue_HasRecordedData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPropertyValue);
	UClass* Z_Construct_UClass_UPropertyValue_NoRegister()
	{
		return UPropertyValue::StaticClass();
	}
	struct Z_Construct_UClass_UPropertyValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFieldPathPropertyParams NewProp_Properties_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Properties;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PropertyIndices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyIndices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertyIndices;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CapturedPropSegments_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapturedPropSegments_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CapturedPropSegments;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FullDisplayString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FullDisplayString;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertySetterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertySetterName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertySetterParameterDefaults_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertySetterParameterDefaults_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertySetterParameterDefaults_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PropertySetterParameterDefaults;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasRecordedData_MetaData[];
#endif
		static void NewProp_bHasRecordedData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasRecordedData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeafPropertyClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_LeafPropertyClass;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ValueBytes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueBytes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ValueBytes;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PropCategory_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropCategory_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PropCategory;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayOrder_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_DisplayOrder;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPropertyValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VariantManagerContent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPropertyValue_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPropertyValue_GetFullDisplayString, "GetFullDisplayString" }, // 2820887900
		{ &Z_Construct_UFunction_UPropertyValue_GetPropertyTooltip, "GetPropertyTooltip" }, // 3377254353
		{ &Z_Construct_UFunction_UPropertyValue_HasRecordedData, "HasRecordedData" }, // 179183028
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyValue_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PropertyValue.h" },
		{ "ModuleRelativePath", "Public/PropertyValue.h" },
	};
#endif
	const UECodeGen_Private::FFieldPathPropertyParams Z_Construct_UClass_UPropertyValue_Statics::NewProp_Properties_Inner = { "Properties", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, &FProperty::StaticClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyValue_Statics::NewProp_Properties_MetaData[] = {
		{ "Comment", "// Properties were previously stored like this. Use CapturedPropSegments from now on, which stores\n// properties by name instead. It is much safer, as we can't guarantee these pointers will be valid\n// if they point at other packages (will depend on package load order, etc).\n" },
		{ "ModuleRelativePath", "Public/PropertyValue.h" },
		{ "ToolTip", "Properties were previously stored like this. Use CapturedPropSegments from now on, which stores\nproperties by name instead. It is much safer, as we can't guarantee these pointers will be valid\nif they point at other packages (will depend on package load order, etc)." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPropertyValue_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0020080020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPropertyValue, Properties_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPropertyValue_Statics::NewProp_Properties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyValue_Statics::NewProp_Properties_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPropertyValue_Statics::NewProp_PropertyIndices_Inner = { "PropertyIndices", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyValue_Statics::NewProp_PropertyIndices_MetaData[] = {
		{ "ModuleRelativePath", "Public/PropertyValue.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPropertyValue_Statics::NewProp_PropertyIndices = { "PropertyIndices", nullptr, (EPropertyFlags)0x0020080020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPropertyValue, PropertyIndices_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPropertyValue_Statics::NewProp_PropertyIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyValue_Statics::NewProp_PropertyIndices_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPropertyValue_Statics::NewProp_CapturedPropSegments_Inner = { "CapturedPropSegments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCapturedPropSegment, METADATA_PARAMS(nullptr, 0) }; // 566931631
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyValue_Statics::NewProp_CapturedPropSegments_MetaData[] = {
		{ "ModuleRelativePath", "Public/PropertyValue.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPropertyValue_Statics::NewProp_CapturedPropSegments = { "CapturedPropSegments", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPropertyValue, CapturedPropSegments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPropertyValue_Statics::NewProp_CapturedPropSegments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyValue_Statics::NewProp_CapturedPropSegments_MetaData)) }; // 566931631
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyValue_Statics::NewProp_FullDisplayString_MetaData[] = {
		{ "ModuleRelativePath", "Public/PropertyValue.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPropertyValue_Statics::NewProp_FullDisplayString = { "FullDisplayString", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPropertyValue, FullDisplayString), METADATA_PARAMS(Z_Construct_UClass_UPropertyValue_Statics::NewProp_FullDisplayString_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyValue_Statics::NewProp_FullDisplayString_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyValue_Statics::NewProp_PropertySetterName_MetaData[] = {
		{ "ModuleRelativePath", "Public/PropertyValue.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPropertyValue_Statics::NewProp_PropertySetterName = { "PropertySetterName", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPropertyValue, PropertySetterName), METADATA_PARAMS(Z_Construct_UClass_UPropertyValue_Statics::NewProp_PropertySetterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyValue_Statics::NewProp_PropertySetterName_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPropertyValue_Statics::NewProp_PropertySetterParameterDefaults_ValueProp = { "PropertySetterParameterDefaults", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPropertyValue_Statics::NewProp_PropertySetterParameterDefaults_Key_KeyProp = { "PropertySetterParameterDefaults_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyValue_Statics::NewProp_PropertySetterParameterDefaults_MetaData[] = {
		{ "ModuleRelativePath", "Public/PropertyValue.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPropertyValue_Statics::NewProp_PropertySetterParameterDefaults = { "PropertySetterParameterDefaults", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPropertyValue, PropertySetterParameterDefaults), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPropertyValue_Statics::NewProp_PropertySetterParameterDefaults_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyValue_Statics::NewProp_PropertySetterParameterDefaults_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyValue_Statics::NewProp_bHasRecordedData_MetaData[] = {
		{ "ModuleRelativePath", "Public/PropertyValue.h" },
	};
#endif
	void Z_Construct_UClass_UPropertyValue_Statics::NewProp_bHasRecordedData_SetBit(void* Obj)
	{
		((UPropertyValue*)Obj)->bHasRecordedData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPropertyValue_Statics::NewProp_bHasRecordedData = { "bHasRecordedData", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPropertyValue), &Z_Construct_UClass_UPropertyValue_Statics::NewProp_bHasRecordedData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPropertyValue_Statics::NewProp_bHasRecordedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyValue_Statics::NewProp_bHasRecordedData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyValue_Statics::NewProp_LeafPropertyClass_MetaData[] = {
		{ "Comment", "// We use these mainly to know how to serialize/deserialize the values of properties that need special care\n// (e.g. UObjectProperties, name properties, text properties, etc)\n" },
		{ "ModuleRelativePath", "Public/PropertyValue.h" },
		{ "ToolTip", "We use these mainly to know how to serialize/deserialize the values of properties that need special care\n(e.g. UObjectProperties, name properties, text properties, etc)" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UClass_UPropertyValue_Statics::NewProp_LeafPropertyClass = { "LeafPropertyClass", nullptr, (EPropertyFlags)0x0024080020000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPropertyValue, LeafPropertyClass_DEPRECATED), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPropertyValue_Statics::NewProp_LeafPropertyClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyValue_Statics::NewProp_LeafPropertyClass_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPropertyValue_Statics::NewProp_ValueBytes_Inner = { "ValueBytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyValue_Statics::NewProp_ValueBytes_MetaData[] = {
		{ "ModuleRelativePath", "Public/PropertyValue.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPropertyValue_Statics::NewProp_ValueBytes = { "ValueBytes", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPropertyValue, ValueBytes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPropertyValue_Statics::NewProp_ValueBytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyValue_Statics::NewProp_ValueBytes_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPropertyValue_Statics::NewProp_PropCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyValue_Statics::NewProp_PropCategory_MetaData[] = {
		{ "ModuleRelativePath", "Public/PropertyValue.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPropertyValue_Statics::NewProp_PropCategory = { "PropCategory", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPropertyValue, PropCategory), Z_Construct_UEnum_VariantManagerContent_EPropertyValueCategory, METADATA_PARAMS(Z_Construct_UClass_UPropertyValue_Statics::NewProp_PropCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyValue_Statics::NewProp_PropCategory_MetaData)) }; // 3588310662
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyValue_Statics::NewProp_DisplayOrder_MetaData[] = {
		{ "ModuleRelativePath", "Public/PropertyValue.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UPropertyValue_Statics::NewProp_DisplayOrder = { "DisplayOrder", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPropertyValue, DisplayOrder), METADATA_PARAMS(Z_Construct_UClass_UPropertyValue_Statics::NewProp_DisplayOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyValue_Statics::NewProp_DisplayOrder_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPropertyValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyValue_Statics::NewProp_Properties_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyValue_Statics::NewProp_Properties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyValue_Statics::NewProp_PropertyIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyValue_Statics::NewProp_PropertyIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyValue_Statics::NewProp_CapturedPropSegments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyValue_Statics::NewProp_CapturedPropSegments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyValue_Statics::NewProp_FullDisplayString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyValue_Statics::NewProp_PropertySetterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyValue_Statics::NewProp_PropertySetterParameterDefaults_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyValue_Statics::NewProp_PropertySetterParameterDefaults_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyValue_Statics::NewProp_PropertySetterParameterDefaults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyValue_Statics::NewProp_bHasRecordedData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyValue_Statics::NewProp_LeafPropertyClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyValue_Statics::NewProp_ValueBytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyValue_Statics::NewProp_ValueBytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyValue_Statics::NewProp_PropCategory_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyValue_Statics::NewProp_PropCategory,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyValue_Statics::NewProp_DisplayOrder,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPropertyValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPropertyValue>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPropertyValue_Statics::ClassParams = {
		&UPropertyValue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPropertyValue_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyValue_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPropertyValue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPropertyValue()
	{
		if (!Z_Registration_Info_UClass_UPropertyValue.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPropertyValue.OuterSingleton, Z_Construct_UClass_UPropertyValue_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPropertyValue.OuterSingleton;
	}
	template<> VARIANTMANAGERCONTENT_API UClass* StaticClass<UPropertyValue>()
	{
		return UPropertyValue::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPropertyValue);
	UPropertyValue::~UPropertyValue() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPropertyValue)
	void UPropertyValueTransform::StaticRegisterNativesUPropertyValueTransform()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPropertyValueTransform);
	UClass* Z_Construct_UClass_UPropertyValueTransform_NoRegister()
	{
		return UPropertyValueTransform::StaticClass();
	}
	struct Z_Construct_UClass_UPropertyValueTransform_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPropertyValueTransform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPropertyValue,
		(UObject* (*)())Z_Construct_UPackage__Script_VariantManagerContent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyValueTransform_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Deprecated: Only here for backwards compatibility with 4.21\n" },
		{ "IncludePath", "PropertyValue.h" },
		{ "ModuleRelativePath", "Public/PropertyValue.h" },
		{ "ToolTip", "Deprecated: Only here for backwards compatibility with 4.21" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPropertyValueTransform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPropertyValueTransform>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPropertyValueTransform_Statics::ClassParams = {
		&UPropertyValueTransform::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPropertyValueTransform_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyValueTransform_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPropertyValueTransform()
	{
		if (!Z_Registration_Info_UClass_UPropertyValueTransform.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPropertyValueTransform.OuterSingleton, Z_Construct_UClass_UPropertyValueTransform_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPropertyValueTransform.OuterSingleton;
	}
	template<> VARIANTMANAGERCONTENT_API UClass* StaticClass<UPropertyValueTransform>()
	{
		return UPropertyValueTransform::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPropertyValueTransform);
	UPropertyValueTransform::~UPropertyValueTransform() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPropertyValueTransform)
	void UPropertyValueVisibility::StaticRegisterNativesUPropertyValueVisibility()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPropertyValueVisibility);
	UClass* Z_Construct_UClass_UPropertyValueVisibility_NoRegister()
	{
		return UPropertyValueVisibility::StaticClass();
	}
	struct Z_Construct_UClass_UPropertyValueVisibility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPropertyValueVisibility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPropertyValue,
		(UObject* (*)())Z_Construct_UPackage__Script_VariantManagerContent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyValueVisibility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Deprecated: Only here for backwards compatibility\n" },
		{ "IncludePath", "PropertyValue.h" },
		{ "ModuleRelativePath", "Public/PropertyValue.h" },
		{ "ToolTip", "Deprecated: Only here for backwards compatibility" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPropertyValueVisibility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPropertyValueVisibility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPropertyValueVisibility_Statics::ClassParams = {
		&UPropertyValueVisibility::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPropertyValueVisibility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyValueVisibility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPropertyValueVisibility()
	{
		if (!Z_Registration_Info_UClass_UPropertyValueVisibility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPropertyValueVisibility.OuterSingleton, Z_Construct_UClass_UPropertyValueVisibility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPropertyValueVisibility.OuterSingleton;
	}
	template<> VARIANTMANAGERCONTENT_API UClass* StaticClass<UPropertyValueVisibility>()
	{
		return UPropertyValueVisibility::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPropertyValueVisibility);
	UPropertyValueVisibility::~UPropertyValueVisibility() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPropertyValueVisibility)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_Statics::EnumInfo[] = {
		{ EPropertyValueCategory_StaticEnum, TEXT("EPropertyValueCategory"), &Z_Registration_Info_UEnum_EPropertyValueCategory, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3588310662U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_Statics::ScriptStructInfo[] = {
		{ FCapturedPropSegment::StaticStruct, Z_Construct_UScriptStruct_FCapturedPropSegment_Statics::NewStructOps, TEXT("CapturedPropSegment"), &Z_Registration_Info_UScriptStruct_CapturedPropSegment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCapturedPropSegment), 566931631U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPropertyValue, UPropertyValue::StaticClass, TEXT("UPropertyValue"), &Z_Registration_Info_UClass_UPropertyValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPropertyValue), 4014890160U) },
		{ Z_Construct_UClass_UPropertyValueTransform, UPropertyValueTransform::StaticClass, TEXT("UPropertyValueTransform"), &Z_Registration_Info_UClass_UPropertyValueTransform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPropertyValueTransform), 769328803U) },
		{ Z_Construct_UClass_UPropertyValueVisibility, UPropertyValueVisibility::StaticClass, TEXT("UPropertyValueVisibility"), &Z_Registration_Info_UClass_UPropertyValueVisibility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPropertyValueVisibility), 879101830U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_1658095744(TEXT("/Script/VariantManagerContent"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
