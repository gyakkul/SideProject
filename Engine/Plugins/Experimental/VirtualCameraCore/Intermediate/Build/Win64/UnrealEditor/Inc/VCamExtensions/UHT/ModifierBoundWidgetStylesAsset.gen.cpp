// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Styling/ModifierBoundWidgetStylesAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModifierBoundWidgetStylesAsset() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_VCamExtensions();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamModifier_NoRegister();
	VCAMEXTENSIONS_API UClass* Z_Construct_UClass_UModifierBoundWidgetStyleDefinitions_NoRegister();
	VCAMEXTENSIONS_API UClass* Z_Construct_UClass_UModifierBoundWidgetStylesAsset();
	VCAMEXTENSIONS_API UClass* Z_Construct_UClass_UModifierBoundWidgetStylesAsset_NoRegister();
	VCAMEXTENSIONS_API UClass* Z_Construct_UClass_UWidgetStyleData_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UModifierBoundWidgetStylesAsset::execGetStyleForNameByClass)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWidgetStyleData**)Z_Param__Result=P_THIS->GetStyleForNameByClass(Z_Param_Name,Z_Param_Class);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModifierBoundWidgetStylesAsset::execGetStyleForConnectionPointByClass)
	{
		P_GET_OBJECT(UVCamModifier,Z_Param_Modifier);
		P_GET_PROPERTY(FNameProperty,Z_Param_ConnectionPoint);
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWidgetStyleData**)Z_Param__Result=P_THIS->GetStyleForConnectionPointByClass(Z_Param_Modifier,Z_Param_ConnectionPoint,Z_Param_Class);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModifierBoundWidgetStylesAsset::execGetStyleForModifierByClass)
	{
		P_GET_OBJECT(UVCamModifier,Z_Param_Modifier);
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWidgetStyleData**)Z_Param__Result=P_THIS->GetStyleForModifierByClass(Z_Param_Modifier,Z_Param_Class);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModifierBoundWidgetStylesAsset::execGetStylesForName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Category);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UWidgetStyleData*>*)Z_Param__Result=P_THIS->GetStylesForName(Z_Param_Category);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModifierBoundWidgetStylesAsset::execGetStylesForConnectionPoint)
	{
		P_GET_OBJECT(UVCamModifier,Z_Param_Modifier);
		P_GET_PROPERTY(FNameProperty,Z_Param_ConnectionPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UWidgetStyleData*>*)Z_Param__Result=P_THIS->GetStylesForConnectionPoint(Z_Param_Modifier,Z_Param_ConnectionPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModifierBoundWidgetStylesAsset::execGetStylesForModifier)
	{
		P_GET_OBJECT(UVCamModifier,Z_Param_Modifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UWidgetStyleData*>*)Z_Param__Result=P_THIS->GetStylesForModifier(Z_Param_Modifier);
		P_NATIVE_END;
	}
	void UModifierBoundWidgetStylesAsset::StaticRegisterNativesUModifierBoundWidgetStylesAsset()
	{
		UClass* Class = UModifierBoundWidgetStylesAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetStyleForConnectionPointByClass", &UModifierBoundWidgetStylesAsset::execGetStyleForConnectionPointByClass },
			{ "GetStyleForModifierByClass", &UModifierBoundWidgetStylesAsset::execGetStyleForModifierByClass },
			{ "GetStyleForNameByClass", &UModifierBoundWidgetStylesAsset::execGetStyleForNameByClass },
			{ "GetStylesForConnectionPoint", &UModifierBoundWidgetStylesAsset::execGetStylesForConnectionPoint },
			{ "GetStylesForModifier", &UModifierBoundWidgetStylesAsset::execGetStylesForModifier },
			{ "GetStylesForName", &UModifierBoundWidgetStylesAsset::execGetStylesForName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStyleForConnectionPointByClass_Statics
	{
		struct ModifierBoundWidgetStylesAsset_eventGetStyleForConnectionPointByClass_Parms
		{
			UVCamModifier* Modifier;
			FName ConnectionPoint;
			TSubclassOf<UWidgetStyleData>  Class;
			UWidgetStyleData* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Modifier;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ConnectionPoint;
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStyleForConnectionPointByClass_Statics::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModifierBoundWidgetStylesAsset_eventGetStyleForConnectionPointByClass_Parms, Modifier), Z_Construct_UClass_UVCamModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStyleForConnectionPointByClass_Statics::NewProp_ConnectionPoint = { "ConnectionPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModifierBoundWidgetStylesAsset_eventGetStyleForConnectionPointByClass_Parms, ConnectionPoint), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStyleForConnectionPointByClass_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModifierBoundWidgetStylesAsset_eventGetStyleForConnectionPointByClass_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UWidgetStyleData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStyleForConnectionPointByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModifierBoundWidgetStylesAsset_eventGetStyleForConnectionPointByClass_Parms, ReturnValue), Z_Construct_UClass_UWidgetStyleData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStyleForConnectionPointByClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStyleForConnectionPointByClass_Statics::NewProp_Modifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStyleForConnectionPointByClass_Statics::NewProp_ConnectionPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStyleForConnectionPointByClass_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStyleForConnectionPointByClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStyleForConnectionPointByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera" },
		{ "DeterminesOutputType", "Class" },
		{ "ModuleRelativePath", "Public/Styling/ModifierBoundWidgetStylesAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStyleForConnectionPointByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModifierBoundWidgetStylesAsset, nullptr, "GetStyleForConnectionPointByClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStyleForConnectionPointByClass_Statics::ModifierBoundWidgetStylesAsset_eventGetStyleForConnectionPointByClass_Parms), Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStyleForConnectionPointByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStyleForConnectionPointByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStyleForConnectionPointByClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStyleForConnectionPointByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStyleForConnectionPointByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStyleForConnectionPointByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStyleForModifierByClass_Statics
	{
		struct ModifierBoundWidgetStylesAsset_eventGetStyleForModifierByClass_Parms
		{
			UVCamModifier* Modifier;
			TSubclassOf<UWidgetStyleData>  Class;
			UWidgetStyleData* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Modifier;
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStyleForModifierByClass_Statics::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModifierBoundWidgetStylesAsset_eventGetStyleForModifierByClass_Parms, Modifier), Z_Construct_UClass_UVCamModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStyleForModifierByClass_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModifierBoundWidgetStylesAsset_eventGetStyleForModifierByClass_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UWidgetStyleData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStyleForModifierByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModifierBoundWidgetStylesAsset_eventGetStyleForModifierByClass_Parms, ReturnValue), Z_Construct_UClass_UWidgetStyleData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStyleForModifierByClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStyleForModifierByClass_Statics::NewProp_Modifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStyleForModifierByClass_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStyleForModifierByClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStyleForModifierByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera" },
		{ "DeterminesOutputType", "Class" },
		{ "ModuleRelativePath", "Public/Styling/ModifierBoundWidgetStylesAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStyleForModifierByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModifierBoundWidgetStylesAsset, nullptr, "GetStyleForModifierByClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStyleForModifierByClass_Statics::ModifierBoundWidgetStylesAsset_eventGetStyleForModifierByClass_Parms), Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStyleForModifierByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStyleForModifierByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStyleForModifierByClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStyleForModifierByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStyleForModifierByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStyleForModifierByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStyleForNameByClass_Statics
	{
		struct ModifierBoundWidgetStylesAsset_eventGetStyleForNameByClass_Parms
		{
			FName Name;
			TSubclassOf<UWidgetStyleData>  Class;
			UWidgetStyleData* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStyleForNameByClass_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModifierBoundWidgetStylesAsset_eventGetStyleForNameByClass_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStyleForNameByClass_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModifierBoundWidgetStylesAsset_eventGetStyleForNameByClass_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UWidgetStyleData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStyleForNameByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModifierBoundWidgetStylesAsset_eventGetStyleForNameByClass_Parms, ReturnValue), Z_Construct_UClass_UWidgetStyleData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStyleForNameByClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStyleForNameByClass_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStyleForNameByClass_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStyleForNameByClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStyleForNameByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera" },
		{ "DeterminesOutputType", "Class" },
		{ "ModuleRelativePath", "Public/Styling/ModifierBoundWidgetStylesAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStyleForNameByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModifierBoundWidgetStylesAsset, nullptr, "GetStyleForNameByClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStyleForNameByClass_Statics::ModifierBoundWidgetStylesAsset_eventGetStyleForNameByClass_Parms), Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStyleForNameByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStyleForNameByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStyleForNameByClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStyleForNameByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStyleForNameByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStyleForNameByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStylesForConnectionPoint_Statics
	{
		struct ModifierBoundWidgetStylesAsset_eventGetStylesForConnectionPoint_Parms
		{
			UVCamModifier* Modifier;
			FName ConnectionPoint;
			TArray<UWidgetStyleData*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Modifier;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ConnectionPoint;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStylesForConnectionPoint_Statics::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModifierBoundWidgetStylesAsset_eventGetStylesForConnectionPoint_Parms, Modifier), Z_Construct_UClass_UVCamModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStylesForConnectionPoint_Statics::NewProp_ConnectionPoint = { "ConnectionPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModifierBoundWidgetStylesAsset_eventGetStylesForConnectionPoint_Parms, ConnectionPoint), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStylesForConnectionPoint_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UWidgetStyleData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStylesForConnectionPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModifierBoundWidgetStylesAsset_eventGetStylesForConnectionPoint_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStylesForConnectionPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStylesForConnectionPoint_Statics::NewProp_Modifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStylesForConnectionPoint_Statics::NewProp_ConnectionPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStylesForConnectionPoint_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStylesForConnectionPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStylesForConnectionPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera" },
		{ "Comment", "/** Retrieves all meta data that is associated for a given modifier and a sub-category name. */" },
		{ "ModuleRelativePath", "Public/Styling/ModifierBoundWidgetStylesAsset.h" },
		{ "ToolTip", "Retrieves all meta data that is associated for a given modifier and a sub-category name." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStylesForConnectionPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModifierBoundWidgetStylesAsset, nullptr, "GetStylesForConnectionPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStylesForConnectionPoint_Statics::ModifierBoundWidgetStylesAsset_eventGetStylesForConnectionPoint_Parms), Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStylesForConnectionPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStylesForConnectionPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStylesForConnectionPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStylesForConnectionPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStylesForConnectionPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStylesForConnectionPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStylesForModifier_Statics
	{
		struct ModifierBoundWidgetStylesAsset_eventGetStylesForModifier_Parms
		{
			UVCamModifier* Modifier;
			TArray<UWidgetStyleData*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Modifier;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStylesForModifier_Statics::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModifierBoundWidgetStylesAsset_eventGetStylesForModifier_Parms, Modifier), Z_Construct_UClass_UVCamModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStylesForModifier_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UWidgetStyleData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStylesForModifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModifierBoundWidgetStylesAsset_eventGetStylesForModifier_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStylesForModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStylesForModifier_Statics::NewProp_Modifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStylesForModifier_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStylesForModifier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStylesForModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera" },
		{ "Comment", "/** Retrieves all meta data that is associated for a given modifier. */" },
		{ "ModuleRelativePath", "Public/Styling/ModifierBoundWidgetStylesAsset.h" },
		{ "ToolTip", "Retrieves all meta data that is associated for a given modifier." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStylesForModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModifierBoundWidgetStylesAsset, nullptr, "GetStylesForModifier", nullptr, nullptr, sizeof(Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStylesForModifier_Statics::ModifierBoundWidgetStylesAsset_eventGetStylesForModifier_Parms), Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStylesForModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStylesForModifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStylesForModifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStylesForModifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStylesForModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStylesForModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStylesForName_Statics
	{
		struct ModifierBoundWidgetStylesAsset_eventGetStylesForName_Parms
		{
			FName Category;
			TArray<UWidgetStyleData*> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Category;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStylesForName_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModifierBoundWidgetStylesAsset_eventGetStylesForName_Parms, Category), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStylesForName_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UWidgetStyleData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStylesForName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModifierBoundWidgetStylesAsset_eventGetStylesForName_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStylesForName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStylesForName_Statics::NewProp_Category,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStylesForName_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStylesForName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStylesForName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera" },
		{ "Comment", "/** Retrieves all meta data that is associated with a given a category name; this data is not associated with any kind of modifier. */" },
		{ "ModuleRelativePath", "Public/Styling/ModifierBoundWidgetStylesAsset.h" },
		{ "ToolTip", "Retrieves all meta data that is associated with a given a category name; this data is not associated with any kind of modifier." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStylesForName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModifierBoundWidgetStylesAsset, nullptr, "GetStylesForName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStylesForName_Statics::ModifierBoundWidgetStylesAsset_eventGetStylesForName_Parms), Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStylesForName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStylesForName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStylesForName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStylesForName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStylesForName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStylesForName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModifierBoundWidgetStylesAsset);
	UClass* Z_Construct_UClass_UModifierBoundWidgetStylesAsset_NoRegister()
	{
		return UModifierBoundWidgetStylesAsset::StaticClass();
	}
	struct Z_Construct_UClass_UModifierBoundWidgetStylesAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rules_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Rules;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UModifierBoundWidgetStylesAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VCamExtensions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UModifierBoundWidgetStylesAsset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStyleForConnectionPointByClass, "GetStyleForConnectionPointByClass" }, // 566795877
		{ &Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStyleForModifierByClass, "GetStyleForModifierByClass" }, // 308399161
		{ &Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStyleForNameByClass, "GetStyleForNameByClass" }, // 1940885875
		{ &Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStylesForConnectionPoint, "GetStylesForConnectionPoint" }, // 3150554599
		{ &Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStylesForModifier, "GetStylesForModifier" }, // 1668612473
		{ &Z_Construct_UFunction_UModifierBoundWidgetStylesAsset_GetStylesForName, "GetStylesForName" }, // 3006281273
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModifierBoundWidgetStylesAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * An asset intended to be referenced by Slate widgets.\n * \n * For example, you can retrieve custom style info assigned to a modifier and / or its connections,\n * such as what icon a button representing that widget should have.\n */" },
		{ "IncludePath", "Styling/ModifierBoundWidgetStylesAsset.h" },
		{ "ModuleRelativePath", "Public/Styling/ModifierBoundWidgetStylesAsset.h" },
		{ "ToolTip", "An asset intended to be referenced by Slate widgets.\n\nFor example, you can retrieve custom style info assigned to a modifier and / or its connections,\nsuch as what icon a button representing that widget should have." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModifierBoundWidgetStylesAsset_Statics::NewProp_Rules_MetaData[] = {
		{ "Category", "Virtual Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Styling/ModifierBoundWidgetStylesAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UModifierBoundWidgetStylesAsset_Statics::NewProp_Rules = { "Rules", nullptr, (EPropertyFlags)0x001600000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UModifierBoundWidgetStylesAsset, Rules), Z_Construct_UClass_UModifierBoundWidgetStyleDefinitions_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UModifierBoundWidgetStylesAsset_Statics::NewProp_Rules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModifierBoundWidgetStylesAsset_Statics::NewProp_Rules_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModifierBoundWidgetStylesAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModifierBoundWidgetStylesAsset_Statics::NewProp_Rules,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UModifierBoundWidgetStylesAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModifierBoundWidgetStylesAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UModifierBoundWidgetStylesAsset_Statics::ClassParams = {
		&UModifierBoundWidgetStylesAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UModifierBoundWidgetStylesAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UModifierBoundWidgetStylesAsset_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UModifierBoundWidgetStylesAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UModifierBoundWidgetStylesAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UModifierBoundWidgetStylesAsset()
	{
		if (!Z_Registration_Info_UClass_UModifierBoundWidgetStylesAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModifierBoundWidgetStylesAsset.OuterSingleton, Z_Construct_UClass_UModifierBoundWidgetStylesAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UModifierBoundWidgetStylesAsset.OuterSingleton;
	}
	template<> VCAMEXTENSIONS_API UClass* StaticClass<UModifierBoundWidgetStylesAsset>()
	{
		return UModifierBoundWidgetStylesAsset::StaticClass();
	}
	UModifierBoundWidgetStylesAsset::UModifierBoundWidgetStylesAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UModifierBoundWidgetStylesAsset);
	UModifierBoundWidgetStylesAsset::~UModifierBoundWidgetStylesAsset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_ModifierBoundWidgetStylesAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_ModifierBoundWidgetStylesAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UModifierBoundWidgetStylesAsset, UModifierBoundWidgetStylesAsset::StaticClass, TEXT("UModifierBoundWidgetStylesAsset"), &Z_Registration_Info_UClass_UModifierBoundWidgetStylesAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModifierBoundWidgetStylesAsset), 1272503733U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_ModifierBoundWidgetStylesAsset_h_2355011994(TEXT("/Script/VCamExtensions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_ModifierBoundWidgetStylesAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_ModifierBoundWidgetStylesAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
