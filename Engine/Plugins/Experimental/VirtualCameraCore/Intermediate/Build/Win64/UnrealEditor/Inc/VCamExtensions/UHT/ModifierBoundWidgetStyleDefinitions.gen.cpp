// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Styling/ModifierBoundWidgetStyleDefinitions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModifierBoundWidgetStyleDefinitions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_VCamExtensions();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamModifier_NoRegister();
	VCAMEXTENSIONS_API UClass* Z_Construct_UClass_UModifierBoundWidgetStyleDefinitions();
	VCAMEXTENSIONS_API UClass* Z_Construct_UClass_UModifierBoundWidgetStyleDefinitions_NoRegister();
	VCAMEXTENSIONS_API UClass* Z_Construct_UClass_UWidgetStyleData_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UModifierBoundWidgetStyleDefinitions::execGetStyleForNameByClass)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Category);
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWidgetStyleData**)Z_Param__Result=P_THIS->GetStyleForNameByClass(Z_Param_Category,Z_Param_Class);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModifierBoundWidgetStyleDefinitions::execGetStyleForConnectionPointByClass)
	{
		P_GET_OBJECT(UVCamModifier,Z_Param_Modifier);
		P_GET_PROPERTY(FNameProperty,Z_Param_ConnectionPoint);
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWidgetStyleData**)Z_Param__Result=P_THIS->GetStyleForConnectionPointByClass(Z_Param_Modifier,Z_Param_ConnectionPoint,Z_Param_Class);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModifierBoundWidgetStyleDefinitions::execGetStyleForModifierByClass)
	{
		P_GET_OBJECT(UVCamModifier,Z_Param_Modifier);
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWidgetStyleData**)Z_Param__Result=P_THIS->GetStyleForModifierByClass(Z_Param_Modifier,Z_Param_Class);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModifierBoundWidgetStyleDefinitions::execGetStylesForName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Category);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UWidgetStyleData*>*)Z_Param__Result=P_THIS->GetStylesForName_Implementation(Z_Param_Category);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModifierBoundWidgetStyleDefinitions::execGetStylesForConnectionPoint)
	{
		P_GET_OBJECT(UVCamModifier,Z_Param_Modifier);
		P_GET_PROPERTY(FNameProperty,Z_Param_ConnectionPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UWidgetStyleData*>*)Z_Param__Result=P_THIS->GetStylesForConnectionPoint_Implementation(Z_Param_Modifier,Z_Param_ConnectionPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModifierBoundWidgetStyleDefinitions::execGetStylesForModifier)
	{
		P_GET_OBJECT(UVCamModifier,Z_Param_Modifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UWidgetStyleData*>*)Z_Param__Result=P_THIS->GetStylesForModifier_Implementation(Z_Param_Modifier);
		P_NATIVE_END;
	}
	struct ModifierBoundWidgetStyleDefinitions_eventGetStylesForConnectionPoint_Parms
	{
		UVCamModifier* Modifier;
		FName ConnectionPoint;
		TArray<UWidgetStyleData*> ReturnValue;
	};
	struct ModifierBoundWidgetStyleDefinitions_eventGetStylesForModifier_Parms
	{
		UVCamModifier* Modifier;
		TArray<UWidgetStyleData*> ReturnValue;
	};
	struct ModifierBoundWidgetStyleDefinitions_eventGetStylesForName_Parms
	{
		FName Category;
		TArray<UWidgetStyleData*> ReturnValue;
	};
	static FName NAME_UModifierBoundWidgetStyleDefinitions_GetStylesForConnectionPoint = FName(TEXT("GetStylesForConnectionPoint"));
	TArray<UWidgetStyleData*> UModifierBoundWidgetStyleDefinitions::GetStylesForConnectionPoint(UVCamModifier* Modifier, FName ConnectionPoint) const
	{
		ModifierBoundWidgetStyleDefinitions_eventGetStylesForConnectionPoint_Parms Parms;
		Parms.Modifier=Modifier;
		Parms.ConnectionPoint=ConnectionPoint;
		const_cast<UModifierBoundWidgetStyleDefinitions*>(this)->ProcessEvent(FindFunctionChecked(NAME_UModifierBoundWidgetStyleDefinitions_GetStylesForConnectionPoint),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UModifierBoundWidgetStyleDefinitions_GetStylesForModifier = FName(TEXT("GetStylesForModifier"));
	TArray<UWidgetStyleData*> UModifierBoundWidgetStyleDefinitions::GetStylesForModifier(UVCamModifier* Modifier) const
	{
		ModifierBoundWidgetStyleDefinitions_eventGetStylesForModifier_Parms Parms;
		Parms.Modifier=Modifier;
		const_cast<UModifierBoundWidgetStyleDefinitions*>(this)->ProcessEvent(FindFunctionChecked(NAME_UModifierBoundWidgetStyleDefinitions_GetStylesForModifier),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UModifierBoundWidgetStyleDefinitions_GetStylesForName = FName(TEXT("GetStylesForName"));
	TArray<UWidgetStyleData*> UModifierBoundWidgetStyleDefinitions::GetStylesForName(FName Category) const
	{
		ModifierBoundWidgetStyleDefinitions_eventGetStylesForName_Parms Parms;
		Parms.Category=Category;
		const_cast<UModifierBoundWidgetStyleDefinitions*>(this)->ProcessEvent(FindFunctionChecked(NAME_UModifierBoundWidgetStyleDefinitions_GetStylesForName),&Parms);
		return Parms.ReturnValue;
	}
	void UModifierBoundWidgetStyleDefinitions::StaticRegisterNativesUModifierBoundWidgetStyleDefinitions()
	{
		UClass* Class = UModifierBoundWidgetStyleDefinitions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetStyleForConnectionPointByClass", &UModifierBoundWidgetStyleDefinitions::execGetStyleForConnectionPointByClass },
			{ "GetStyleForModifierByClass", &UModifierBoundWidgetStyleDefinitions::execGetStyleForModifierByClass },
			{ "GetStyleForNameByClass", &UModifierBoundWidgetStyleDefinitions::execGetStyleForNameByClass },
			{ "GetStylesForConnectionPoint", &UModifierBoundWidgetStyleDefinitions::execGetStylesForConnectionPoint },
			{ "GetStylesForModifier", &UModifierBoundWidgetStyleDefinitions::execGetStylesForModifier },
			{ "GetStylesForName", &UModifierBoundWidgetStyleDefinitions::execGetStylesForName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStyleForConnectionPointByClass_Statics
	{
		struct ModifierBoundWidgetStyleDefinitions_eventGetStyleForConnectionPointByClass_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStyleForConnectionPointByClass_Statics::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModifierBoundWidgetStyleDefinitions_eventGetStyleForConnectionPointByClass_Parms, Modifier), Z_Construct_UClass_UVCamModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStyleForConnectionPointByClass_Statics::NewProp_ConnectionPoint = { "ConnectionPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModifierBoundWidgetStyleDefinitions_eventGetStyleForConnectionPointByClass_Parms, ConnectionPoint), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStyleForConnectionPointByClass_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModifierBoundWidgetStyleDefinitions_eventGetStyleForConnectionPointByClass_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UWidgetStyleData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStyleForConnectionPointByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModifierBoundWidgetStyleDefinitions_eventGetStyleForConnectionPointByClass_Parms, ReturnValue), Z_Construct_UClass_UWidgetStyleData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStyleForConnectionPointByClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStyleForConnectionPointByClass_Statics::NewProp_Modifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStyleForConnectionPointByClass_Statics::NewProp_ConnectionPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStyleForConnectionPointByClass_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStyleForConnectionPointByClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStyleForConnectionPointByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera" },
		{ "DeterminesOutputType", "Class" },
		{ "ModuleRelativePath", "Public/Styling/ModifierBoundWidgetStyleDefinitions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStyleForConnectionPointByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModifierBoundWidgetStyleDefinitions, nullptr, "GetStyleForConnectionPointByClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStyleForConnectionPointByClass_Statics::ModifierBoundWidgetStyleDefinitions_eventGetStyleForConnectionPointByClass_Parms), Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStyleForConnectionPointByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStyleForConnectionPointByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStyleForConnectionPointByClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStyleForConnectionPointByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStyleForConnectionPointByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStyleForConnectionPointByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStyleForModifierByClass_Statics
	{
		struct ModifierBoundWidgetStyleDefinitions_eventGetStyleForModifierByClass_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStyleForModifierByClass_Statics::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModifierBoundWidgetStyleDefinitions_eventGetStyleForModifierByClass_Parms, Modifier), Z_Construct_UClass_UVCamModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStyleForModifierByClass_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModifierBoundWidgetStyleDefinitions_eventGetStyleForModifierByClass_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UWidgetStyleData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStyleForModifierByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModifierBoundWidgetStyleDefinitions_eventGetStyleForModifierByClass_Parms, ReturnValue), Z_Construct_UClass_UWidgetStyleData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStyleForModifierByClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStyleForModifierByClass_Statics::NewProp_Modifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStyleForModifierByClass_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStyleForModifierByClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStyleForModifierByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera" },
		{ "DeterminesOutputType", "Class" },
		{ "ModuleRelativePath", "Public/Styling/ModifierBoundWidgetStyleDefinitions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStyleForModifierByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModifierBoundWidgetStyleDefinitions, nullptr, "GetStyleForModifierByClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStyleForModifierByClass_Statics::ModifierBoundWidgetStyleDefinitions_eventGetStyleForModifierByClass_Parms), Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStyleForModifierByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStyleForModifierByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStyleForModifierByClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStyleForModifierByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStyleForModifierByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStyleForModifierByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStyleForNameByClass_Statics
	{
		struct ModifierBoundWidgetStyleDefinitions_eventGetStyleForNameByClass_Parms
		{
			FName Category;
			TSubclassOf<UWidgetStyleData>  Class;
			UWidgetStyleData* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Category;
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStyleForNameByClass_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModifierBoundWidgetStyleDefinitions_eventGetStyleForNameByClass_Parms, Category), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStyleForNameByClass_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModifierBoundWidgetStyleDefinitions_eventGetStyleForNameByClass_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UWidgetStyleData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStyleForNameByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModifierBoundWidgetStyleDefinitions_eventGetStyleForNameByClass_Parms, ReturnValue), Z_Construct_UClass_UWidgetStyleData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStyleForNameByClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStyleForNameByClass_Statics::NewProp_Category,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStyleForNameByClass_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStyleForNameByClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStyleForNameByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera" },
		{ "DeterminesOutputType", "Class" },
		{ "ModuleRelativePath", "Public/Styling/ModifierBoundWidgetStyleDefinitions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStyleForNameByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModifierBoundWidgetStyleDefinitions, nullptr, "GetStyleForNameByClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStyleForNameByClass_Statics::ModifierBoundWidgetStyleDefinitions_eventGetStyleForNameByClass_Parms), Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStyleForNameByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStyleForNameByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStyleForNameByClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStyleForNameByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStyleForNameByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStyleForNameByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStylesForConnectionPoint_Statics
	{
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStylesForConnectionPoint_Statics::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModifierBoundWidgetStyleDefinitions_eventGetStylesForConnectionPoint_Parms, Modifier), Z_Construct_UClass_UVCamModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStylesForConnectionPoint_Statics::NewProp_ConnectionPoint = { "ConnectionPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModifierBoundWidgetStyleDefinitions_eventGetStylesForConnectionPoint_Parms, ConnectionPoint), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStylesForConnectionPoint_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UWidgetStyleData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStylesForConnectionPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModifierBoundWidgetStyleDefinitions_eventGetStylesForConnectionPoint_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStylesForConnectionPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStylesForConnectionPoint_Statics::NewProp_Modifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStylesForConnectionPoint_Statics::NewProp_ConnectionPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStylesForConnectionPoint_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStylesForConnectionPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStylesForConnectionPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera" },
		{ "Comment", "/** Retrieves all meta data that is associated for a given modifier and a sub-category name. */" },
		{ "ModuleRelativePath", "Public/Styling/ModifierBoundWidgetStyleDefinitions.h" },
		{ "ToolTip", "Retrieves all meta data that is associated for a given modifier and a sub-category name." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStylesForConnectionPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModifierBoundWidgetStyleDefinitions, nullptr, "GetStylesForConnectionPoint", nullptr, nullptr, sizeof(ModifierBoundWidgetStyleDefinitions_eventGetStylesForConnectionPoint_Parms), Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStylesForConnectionPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStylesForConnectionPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStylesForConnectionPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStylesForConnectionPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStylesForConnectionPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStylesForConnectionPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStylesForModifier_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Modifier;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStylesForModifier_Statics::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModifierBoundWidgetStyleDefinitions_eventGetStylesForModifier_Parms, Modifier), Z_Construct_UClass_UVCamModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStylesForModifier_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UWidgetStyleData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStylesForModifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModifierBoundWidgetStyleDefinitions_eventGetStylesForModifier_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStylesForModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStylesForModifier_Statics::NewProp_Modifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStylesForModifier_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStylesForModifier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStylesForModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera" },
		{ "Comment", "/** Retrieves all meta data that is associated for a given modifier. */" },
		{ "ModuleRelativePath", "Public/Styling/ModifierBoundWidgetStyleDefinitions.h" },
		{ "ToolTip", "Retrieves all meta data that is associated for a given modifier." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStylesForModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModifierBoundWidgetStyleDefinitions, nullptr, "GetStylesForModifier", nullptr, nullptr, sizeof(ModifierBoundWidgetStyleDefinitions_eventGetStylesForModifier_Parms), Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStylesForModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStylesForModifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStylesForModifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStylesForModifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStylesForModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStylesForModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStylesForName_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_Category;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStylesForName_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModifierBoundWidgetStyleDefinitions_eventGetStylesForName_Parms, Category), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStylesForName_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UWidgetStyleData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStylesForName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModifierBoundWidgetStyleDefinitions_eventGetStylesForName_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStylesForName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStylesForName_Statics::NewProp_Category,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStylesForName_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStylesForName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStylesForName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera" },
		{ "Comment", "/** Retrieves all meta data that is associated with a given a category name; this data is not associated with any kind of modifier. */" },
		{ "ModuleRelativePath", "Public/Styling/ModifierBoundWidgetStyleDefinitions.h" },
		{ "ToolTip", "Retrieves all meta data that is associated with a given a category name; this data is not associated with any kind of modifier." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStylesForName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModifierBoundWidgetStyleDefinitions, nullptr, "GetStylesForName", nullptr, nullptr, sizeof(ModifierBoundWidgetStyleDefinitions_eventGetStylesForName_Parms), Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStylesForName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStylesForName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStylesForName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStylesForName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStylesForName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStylesForName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModifierBoundWidgetStyleDefinitions);
	UClass* Z_Construct_UClass_UModifierBoundWidgetStyleDefinitions_NoRegister()
	{
		return UModifierBoundWidgetStyleDefinitions::StaticClass();
	}
	struct Z_Construct_UClass_UModifierBoundWidgetStyleDefinitions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UModifierBoundWidgetStyleDefinitions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VCamExtensions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UModifierBoundWidgetStyleDefinitions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStyleForConnectionPointByClass, "GetStyleForConnectionPointByClass" }, // 3174049643
		{ &Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStyleForModifierByClass, "GetStyleForModifierByClass" }, // 976913492
		{ &Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStyleForNameByClass, "GetStyleForNameByClass" }, // 1672496395
		{ &Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStylesForConnectionPoint, "GetStylesForConnectionPoint" }, // 759813711
		{ &Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStylesForModifier, "GetStylesForModifier" }, // 647926772
		{ &Z_Construct_UFunction_UModifierBoundWidgetStyleDefinitions_GetStylesForName, "GetStylesForName" }, // 46257323
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModifierBoundWidgetStyleDefinitions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Associates information with modifiers and their connection points.\n * You can use it to retrieve custom information assigned to a modifier and / or its connections,\n * such as what icon a button representing that widget should have.\n */" },
		{ "IncludePath", "Styling/ModifierBoundWidgetStyleDefinitions.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Styling/ModifierBoundWidgetStyleDefinitions.h" },
		{ "ToolTip", "Associates information with modifiers and their connection points.\nYou can use it to retrieve custom information assigned to a modifier and / or its connections,\nsuch as what icon a button representing that widget should have." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UModifierBoundWidgetStyleDefinitions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModifierBoundWidgetStyleDefinitions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UModifierBoundWidgetStyleDefinitions_Statics::ClassParams = {
		&UModifierBoundWidgetStyleDefinitions::StaticClass,
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
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UModifierBoundWidgetStyleDefinitions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UModifierBoundWidgetStyleDefinitions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UModifierBoundWidgetStyleDefinitions()
	{
		if (!Z_Registration_Info_UClass_UModifierBoundWidgetStyleDefinitions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModifierBoundWidgetStyleDefinitions.OuterSingleton, Z_Construct_UClass_UModifierBoundWidgetStyleDefinitions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UModifierBoundWidgetStyleDefinitions.OuterSingleton;
	}
	template<> VCAMEXTENSIONS_API UClass* StaticClass<UModifierBoundWidgetStyleDefinitions>()
	{
		return UModifierBoundWidgetStyleDefinitions::StaticClass();
	}
	UModifierBoundWidgetStyleDefinitions::UModifierBoundWidgetStyleDefinitions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UModifierBoundWidgetStyleDefinitions);
	UModifierBoundWidgetStyleDefinitions::~UModifierBoundWidgetStyleDefinitions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_ModifierBoundWidgetStyleDefinitions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_ModifierBoundWidgetStyleDefinitions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UModifierBoundWidgetStyleDefinitions, UModifierBoundWidgetStyleDefinitions::StaticClass, TEXT("UModifierBoundWidgetStyleDefinitions"), &Z_Registration_Info_UClass_UModifierBoundWidgetStyleDefinitions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModifierBoundWidgetStyleDefinitions), 2986507045U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_ModifierBoundWidgetStyleDefinitions_h_3764532(TEXT("/Script/VCamExtensions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_ModifierBoundWidgetStyleDefinitions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_ModifierBoundWidgetStyleDefinitions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
