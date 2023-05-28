// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectElements/DatasmithUObjectElements.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithUObjectElements() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	DATASMITHCORE_API UEnum* Z_Construct_UEnum_DatasmithCore_EDatasmithColorSpace();
	DATASMITHCORE_API UEnum* Z_Construct_UEnum_DatasmithCore_EDatasmithKeyValuePropertyType();
	DATASMITHCORE_API UEnum* Z_Construct_UEnum_DatasmithCore_EDatasmithPropertyCategory();
	DATASMITHCORE_API UEnum* Z_Construct_UEnum_DatasmithCore_EDatasmithTextureMode();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithActorBindingElement();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithActorBindingElement_NoRegister();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithActorElement();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithActorElement_NoRegister();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithBaseMaterialElement();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithBaseMaterialElement_NoRegister();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithBasePropertyCaptureElement();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithBasePropertyCaptureElement_NoRegister();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithCameraActorElement();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithCameraActorElement_NoRegister();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithCustomActorElement();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithCustomActorElement_NoRegister();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithKeyValueProperty();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithKeyValueProperty_NoRegister();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithLevelVariantSetsElement();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithLevelVariantSetsElement_NoRegister();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithLightActorElement();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithLightActorElement_NoRegister();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithMaterialIDElement();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithMaterialIDElement_NoRegister();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithMeshActorElement();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithMeshActorElement_NoRegister();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithMeshElement();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithMeshElement_NoRegister();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithMetaDataElement();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithMetaDataElement_NoRegister();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithObjectElement();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithObjectElement_NoRegister();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithObjectPropertyCaptureElement();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithObjectPropertyCaptureElement_NoRegister();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithPostProcessElement();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithPostProcessElement_NoRegister();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithPropertyCaptureElement();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithPropertyCaptureElement_NoRegister();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithTextureElement();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithTextureElement_NoRegister();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithVariantElement();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithVariantElement_NoRegister();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithVariantSetElement();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithVariantSetElement_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DatasmithImporter();
// End Cross Module References
	DEFINE_FUNCTION(UDatasmithObjectElement::execIsElementValid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsElementValid();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithObjectElement::execSetLabel)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InLabel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLabel(Z_Param_InLabel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithObjectElement::execGetLabel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetLabel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithObjectElement::execGetElementName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetElementName();
		P_NATIVE_END;
	}
	void UDatasmithObjectElement::StaticRegisterNativesUDatasmithObjectElement()
	{
		UClass* Class = UDatasmithObjectElement::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetElementName", &UDatasmithObjectElement::execGetElementName },
			{ "GetLabel", &UDatasmithObjectElement::execGetLabel },
			{ "IsElementValid", &UDatasmithObjectElement::execIsElementValid },
			{ "SetLabel", &UDatasmithObjectElement::execSetLabel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDatasmithObjectElement_GetElementName_Statics
	{
		struct DatasmithObjectElement_eventGetElementName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithObjectElement_GetElementName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithObjectElement_eventGetElementName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithObjectElement_GetElementName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithObjectElement_GetElementName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithObjectElement_GetElementName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Gets the element name */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Gets the element name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithObjectElement_GetElementName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithObjectElement, nullptr, "GetElementName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithObjectElement_GetElementName_Statics::DatasmithObjectElement_eventGetElementName_Parms), Z_Construct_UFunction_UDatasmithObjectElement_GetElementName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithObjectElement_GetElementName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithObjectElement_GetElementName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithObjectElement_GetElementName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithObjectElement_GetElementName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithObjectElement_GetElementName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithObjectElement_GetLabel_Statics
	{
		struct DatasmithObjectElement_eventGetLabel_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithObjectElement_GetLabel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithObjectElement_eventGetLabel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithObjectElement_GetLabel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithObjectElement_GetLabel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithObjectElement_GetLabel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Gets the element label used in the UI */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Gets the element label used in the UI" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithObjectElement_GetLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithObjectElement, nullptr, "GetLabel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithObjectElement_GetLabel_Statics::DatasmithObjectElement_eventGetLabel_Parms), Z_Construct_UFunction_UDatasmithObjectElement_GetLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithObjectElement_GetLabel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithObjectElement_GetLabel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithObjectElement_GetLabel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithObjectElement_GetLabel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithObjectElement_GetLabel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithObjectElement_IsElementValid_Statics
	{
		struct DatasmithObjectElement_eventIsElementValid_Parms
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
	void Z_Construct_UFunction_UDatasmithObjectElement_IsElementValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DatasmithObjectElement_eventIsElementValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDatasmithObjectElement_IsElementValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DatasmithObjectElement_eventIsElementValid_Parms), &Z_Construct_UFunction_UDatasmithObjectElement_IsElementValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithObjectElement_IsElementValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithObjectElement_IsElementValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithObjectElement_IsElementValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Is the Element still valid for the Datasmith Scene */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Is the Element still valid for the Datasmith Scene" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithObjectElement_IsElementValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithObjectElement, nullptr, "IsElementValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithObjectElement_IsElementValid_Statics::DatasmithObjectElement_eventIsElementValid_Parms), Z_Construct_UFunction_UDatasmithObjectElement_IsElementValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithObjectElement_IsElementValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithObjectElement_IsElementValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithObjectElement_IsElementValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithObjectElement_IsElementValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithObjectElement_IsElementValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithObjectElement_SetLabel_Statics
	{
		struct DatasmithObjectElement_eventSetLabel_Parms
		{
			FString InLabel;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLabel_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InLabel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithObjectElement_SetLabel_Statics::NewProp_InLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithObjectElement_SetLabel_Statics::NewProp_InLabel = { "InLabel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithObjectElement_eventSetLabel_Parms, InLabel), METADATA_PARAMS(Z_Construct_UFunction_UDatasmithObjectElement_SetLabel_Statics::NewProp_InLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithObjectElement_SetLabel_Statics::NewProp_InLabel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithObjectElement_SetLabel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithObjectElement_SetLabel_Statics::NewProp_InLabel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithObjectElement_SetLabel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Sets the element label used in the UI */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Sets the element label used in the UI" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithObjectElement_SetLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithObjectElement, nullptr, "SetLabel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithObjectElement_SetLabel_Statics::DatasmithObjectElement_eventSetLabel_Parms), Z_Construct_UFunction_UDatasmithObjectElement_SetLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithObjectElement_SetLabel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithObjectElement_SetLabel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithObjectElement_SetLabel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithObjectElement_SetLabel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithObjectElement_SetLabel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithObjectElement);
	UClass* Z_Construct_UClass_UDatasmithObjectElement_NoRegister()
	{
		return UDatasmithObjectElement::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithObjectElement_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithObjectElement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithImporter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDatasmithObjectElement_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDatasmithObjectElement_GetElementName, "GetElementName" }, // 1334947582
		{ &Z_Construct_UFunction_UDatasmithObjectElement_GetLabel, "GetLabel" }, // 653624031
		{ &Z_Construct_UFunction_UDatasmithObjectElement_IsElementValid, "IsElementValid" }, // 1766895346
		{ &Z_Construct_UFunction_UDatasmithObjectElement_SetLabel, "SetLabel" }, // 3788124292
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithObjectElement_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * UDatasmithObjectElement\n */" },
		{ "IncludePath", "ObjectElements/DatasmithUObjectElements.h" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "* UDatasmithObjectElement" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithObjectElement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithObjectElement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithObjectElement_Statics::ClassParams = {
		&UDatasmithObjectElement::StaticClass,
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
		0x001000A9u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithObjectElement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithObjectElement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithObjectElement()
	{
		if (!Z_Registration_Info_UClass_UDatasmithObjectElement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithObjectElement.OuterSingleton, Z_Construct_UClass_UDatasmithObjectElement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithObjectElement.OuterSingleton;
	}
	template<> DATASMITHIMPORTER_API UClass* StaticClass<UDatasmithObjectElement>()
	{
		return UDatasmithObjectElement::StaticClass();
	}
	UDatasmithObjectElement::UDatasmithObjectElement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithObjectElement);
	UDatasmithObjectElement::~UDatasmithObjectElement() {}
	DEFINE_FUNCTION(UDatasmithKeyValueProperty::execSetValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetValue(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithKeyValueProperty::execGetValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithKeyValueProperty::execSetPropertyType)
	{
		P_GET_ENUM(EDatasmithKeyValuePropertyType,Z_Param_InType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPropertyType(EDatasmithKeyValuePropertyType(Z_Param_InType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithKeyValueProperty::execGetPropertyType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EDatasmithKeyValuePropertyType*)Z_Param__Result=P_THIS->GetPropertyType();
		P_NATIVE_END;
	}
	void UDatasmithKeyValueProperty::StaticRegisterNativesUDatasmithKeyValueProperty()
	{
		UClass* Class = UDatasmithKeyValueProperty::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPropertyType", &UDatasmithKeyValueProperty::execGetPropertyType },
			{ "GetValue", &UDatasmithKeyValueProperty::execGetValue },
			{ "SetPropertyType", &UDatasmithKeyValueProperty::execSetPropertyType },
			{ "SetValue", &UDatasmithKeyValueProperty::execSetValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDatasmithKeyValueProperty_GetPropertyType_Statics
	{
		struct DatasmithKeyValueProperty_eventGetPropertyType_Parms
		{
			EDatasmithKeyValuePropertyType ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDatasmithKeyValueProperty_GetPropertyType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDatasmithKeyValueProperty_GetPropertyType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithKeyValueProperty_eventGetPropertyType_Parms, ReturnValue), Z_Construct_UEnum_DatasmithCore_EDatasmithKeyValuePropertyType, METADATA_PARAMS(nullptr, 0) }; // 2944519063
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithKeyValueProperty_GetPropertyType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithKeyValueProperty_GetPropertyType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithKeyValueProperty_GetPropertyType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithKeyValueProperty_GetPropertyType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Get the type of this property */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get the type of this property" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithKeyValueProperty_GetPropertyType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithKeyValueProperty, nullptr, "GetPropertyType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithKeyValueProperty_GetPropertyType_Statics::DatasmithKeyValueProperty_eventGetPropertyType_Parms), Z_Construct_UFunction_UDatasmithKeyValueProperty_GetPropertyType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithKeyValueProperty_GetPropertyType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithKeyValueProperty_GetPropertyType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithKeyValueProperty_GetPropertyType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithKeyValueProperty_GetPropertyType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithKeyValueProperty_GetPropertyType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithKeyValueProperty_GetValue_Statics
	{
		struct DatasmithKeyValueProperty_eventGetValue_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithKeyValueProperty_GetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithKeyValueProperty_eventGetValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithKeyValueProperty_GetValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithKeyValueProperty_GetValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithKeyValueProperty_GetValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Get the value of this property */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get the value of this property" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithKeyValueProperty_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithKeyValueProperty, nullptr, "GetValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithKeyValueProperty_GetValue_Statics::DatasmithKeyValueProperty_eventGetValue_Parms), Z_Construct_UFunction_UDatasmithKeyValueProperty_GetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithKeyValueProperty_GetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithKeyValueProperty_GetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithKeyValueProperty_GetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithKeyValueProperty_GetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithKeyValueProperty_GetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithKeyValueProperty_SetPropertyType_Statics
	{
		struct DatasmithKeyValueProperty_eventSetPropertyType_Parms
		{
			EDatasmithKeyValuePropertyType InType;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDatasmithKeyValueProperty_SetPropertyType_Statics::NewProp_InType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDatasmithKeyValueProperty_SetPropertyType_Statics::NewProp_InType = { "InType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithKeyValueProperty_eventSetPropertyType_Parms, InType), Z_Construct_UEnum_DatasmithCore_EDatasmithKeyValuePropertyType, METADATA_PARAMS(nullptr, 0) }; // 2944519063
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithKeyValueProperty_SetPropertyType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithKeyValueProperty_SetPropertyType_Statics::NewProp_InType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithKeyValueProperty_SetPropertyType_Statics::NewProp_InType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithKeyValueProperty_SetPropertyType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Set the type of this property */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Set the type of this property" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithKeyValueProperty_SetPropertyType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithKeyValueProperty, nullptr, "SetPropertyType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithKeyValueProperty_SetPropertyType_Statics::DatasmithKeyValueProperty_eventSetPropertyType_Parms), Z_Construct_UFunction_UDatasmithKeyValueProperty_SetPropertyType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithKeyValueProperty_SetPropertyType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithKeyValueProperty_SetPropertyType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithKeyValueProperty_SetPropertyType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithKeyValueProperty_SetPropertyType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithKeyValueProperty_SetPropertyType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithKeyValueProperty_SetValue_Statics
	{
		struct DatasmithKeyValueProperty_eventSetValue_Parms
		{
			FString Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithKeyValueProperty_SetValue_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithKeyValueProperty_SetValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithKeyValueProperty_eventSetValue_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UDatasmithKeyValueProperty_SetValue_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithKeyValueProperty_SetValue_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithKeyValueProperty_SetValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithKeyValueProperty_SetValue_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithKeyValueProperty_SetValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Sets the value of this property */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Sets the value of this property" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithKeyValueProperty_SetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithKeyValueProperty, nullptr, "SetValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithKeyValueProperty_SetValue_Statics::DatasmithKeyValueProperty_eventSetValue_Parms), Z_Construct_UFunction_UDatasmithKeyValueProperty_SetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithKeyValueProperty_SetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithKeyValueProperty_SetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithKeyValueProperty_SetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithKeyValueProperty_SetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithKeyValueProperty_SetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithKeyValueProperty);
	UClass* Z_Construct_UClass_UDatasmithKeyValueProperty_NoRegister()
	{
		return UDatasmithKeyValueProperty::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithKeyValueProperty_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithKeyValueProperty_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithObjectElement,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithImporter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDatasmithKeyValueProperty_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDatasmithKeyValueProperty_GetPropertyType, "GetPropertyType" }, // 2719150588
		{ &Z_Construct_UFunction_UDatasmithKeyValueProperty_GetValue, "GetValue" }, // 4264404857
		{ &Z_Construct_UFunction_UDatasmithKeyValueProperty_SetPropertyType, "SetPropertyType" }, // 1995196894
		{ &Z_Construct_UFunction_UDatasmithKeyValueProperty_SetValue, "SetValue" }, // 3037167943
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithKeyValueProperty_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UDatasmithKeyValueProperty\n */" },
		{ "IncludePath", "ObjectElements/DatasmithUObjectElements.h" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "UDatasmithKeyValueProperty" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithKeyValueProperty_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithKeyValueProperty>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithKeyValueProperty_Statics::ClassParams = {
		&UDatasmithKeyValueProperty::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithKeyValueProperty_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithKeyValueProperty_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithKeyValueProperty()
	{
		if (!Z_Registration_Info_UClass_UDatasmithKeyValueProperty.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithKeyValueProperty.OuterSingleton, Z_Construct_UClass_UDatasmithKeyValueProperty_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithKeyValueProperty.OuterSingleton;
	}
	template<> DATASMITHIMPORTER_API UClass* StaticClass<UDatasmithKeyValueProperty>()
	{
		return UDatasmithKeyValueProperty::StaticClass();
	}
	UDatasmithKeyValueProperty::UDatasmithKeyValueProperty(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithKeyValueProperty);
	UDatasmithKeyValueProperty::~UDatasmithKeyValueProperty() {}
	DEFINE_FUNCTION(UDatasmithActorElement::execSetVisibility)
	{
		P_GET_UBOOL(Z_Param_bInVisibility);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisibility(Z_Param_bInVisibility);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithActorElement::execGetVisibility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetVisibility();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithActorElement::execRemoveChild)
	{
		P_GET_OBJECT(UDatasmithActorElement,Z_Param_InChild);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveChild(Z_Param_InChild);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithActorElement::execGetChildren)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UDatasmithActorElement*>*)Z_Param__Result=P_THIS->GetChildren();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithActorElement::execGetChildrenCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetChildrenCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithActorElement::execAddChild)
	{
		P_GET_OBJECT(UDatasmithActorElement,Z_Param_InChild);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddChild(Z_Param_InChild);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithActorElement::execSetTags)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_InTags);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTags(Z_Param_Out_InTags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithActorElement::execGetTags)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetTags();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithActorElement::execSetLayer)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InLayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLayer(Z_Param_InLayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithActorElement::execGetLayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetLayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithActorElement::execSetRotation)
	{
		P_GET_STRUCT(FQuat,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRotation(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithActorElement::execGetRotation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=P_THIS->GetRotation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithActorElement::execSetScale)
	{
		P_GET_STRUCT(FVector,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScale(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithActorElement::execGetScale)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetScale();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithActorElement::execSetTranslation)
	{
		P_GET_STRUCT(FVector,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTranslation(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithActorElement::execGetTranslation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetTranslation();
		P_NATIVE_END;
	}
	void UDatasmithActorElement::StaticRegisterNativesUDatasmithActorElement()
	{
		UClass* Class = UDatasmithActorElement::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddChild", &UDatasmithActorElement::execAddChild },
			{ "GetChildren", &UDatasmithActorElement::execGetChildren },
			{ "GetChildrenCount", &UDatasmithActorElement::execGetChildrenCount },
			{ "GetLayer", &UDatasmithActorElement::execGetLayer },
			{ "GetRotation", &UDatasmithActorElement::execGetRotation },
			{ "GetScale", &UDatasmithActorElement::execGetScale },
			{ "GetTags", &UDatasmithActorElement::execGetTags },
			{ "GetTranslation", &UDatasmithActorElement::execGetTranslation },
			{ "GetVisibility", &UDatasmithActorElement::execGetVisibility },
			{ "RemoveChild", &UDatasmithActorElement::execRemoveChild },
			{ "SetLayer", &UDatasmithActorElement::execSetLayer },
			{ "SetRotation", &UDatasmithActorElement::execSetRotation },
			{ "SetScale", &UDatasmithActorElement::execSetScale },
			{ "SetTags", &UDatasmithActorElement::execSetTags },
			{ "SetTranslation", &UDatasmithActorElement::execSetTranslation },
			{ "SetVisibility", &UDatasmithActorElement::execSetVisibility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDatasmithActorElement_AddChild_Statics
	{
		struct DatasmithActorElement_eventAddChild_Parms
		{
			UDatasmithActorElement* InChild;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InChild;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithActorElement_AddChild_Statics::NewProp_InChild = { "InChild", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithActorElement_eventAddChild_Parms, InChild), Z_Construct_UClass_UDatasmithActorElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithActorElement_AddChild_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithActorElement_AddChild_Statics::NewProp_InChild,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithActorElement_AddChild_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Adds a child to the Actor Element*/" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Adds a child to the Actor Element" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithActorElement_AddChild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithActorElement, nullptr, "AddChild", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithActorElement_AddChild_Statics::DatasmithActorElement_eventAddChild_Parms), Z_Construct_UFunction_UDatasmithActorElement_AddChild_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithActorElement_AddChild_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithActorElement_AddChild_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithActorElement_AddChild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithActorElement_AddChild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithActorElement_AddChild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithActorElement_GetChildren_Statics
	{
		struct DatasmithActorElement_eventGetChildren_Parms
		{
			TArray<UDatasmithActorElement*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithActorElement_GetChildren_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDatasmithActorElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDatasmithActorElement_GetChildren_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithActorElement_eventGetChildren_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithActorElement_GetChildren_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithActorElement_GetChildren_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithActorElement_GetChildren_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithActorElement_GetChildren_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Get the children of the mesh actor. Use AddChild -or- RemoveChild to modify the actor's children */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get the children of the mesh actor. Use AddChild -or- RemoveChild to modify the actor's children" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithActorElement_GetChildren_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithActorElement, nullptr, "GetChildren", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithActorElement_GetChildren_Statics::DatasmithActorElement_eventGetChildren_Parms), Z_Construct_UFunction_UDatasmithActorElement_GetChildren_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithActorElement_GetChildren_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithActorElement_GetChildren_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithActorElement_GetChildren_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithActorElement_GetChildren()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithActorElement_GetChildren_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithActorElement_GetChildrenCount_Statics
	{
		struct DatasmithActorElement_eventGetChildrenCount_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDatasmithActorElement_GetChildrenCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithActorElement_eventGetChildrenCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithActorElement_GetChildrenCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithActorElement_GetChildrenCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithActorElement_GetChildrenCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Get the number of children on this actor */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get the number of children on this actor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithActorElement_GetChildrenCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithActorElement, nullptr, "GetChildrenCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithActorElement_GetChildrenCount_Statics::DatasmithActorElement_eventGetChildrenCount_Parms), Z_Construct_UFunction_UDatasmithActorElement_GetChildrenCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithActorElement_GetChildrenCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithActorElement_GetChildrenCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithActorElement_GetChildrenCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithActorElement_GetChildrenCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithActorElement_GetChildrenCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithActorElement_GetLayer_Statics
	{
		struct DatasmithActorElement_eventGetLayer_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithActorElement_GetLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithActorElement_eventGetLayer_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithActorElement_GetLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithActorElement_GetLayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithActorElement_GetLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Get the the name of the layer that contains this entity */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get the the name of the layer that contains this entity" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithActorElement_GetLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithActorElement, nullptr, "GetLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithActorElement_GetLayer_Statics::DatasmithActorElement_eventGetLayer_Parms), Z_Construct_UFunction_UDatasmithActorElement_GetLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithActorElement_GetLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithActorElement_GetLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithActorElement_GetLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithActorElement_GetLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithActorElement_GetLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithActorElement_GetRotation_Statics
	{
		struct DatasmithActorElement_eventGetRotation_Parms
		{
			FQuat ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDatasmithActorElement_GetRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithActorElement_eventGetRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithActorElement_GetRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithActorElement_GetRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithActorElement_GetRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Get rotation (in quaternion format) of this entity */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get rotation (in quaternion format) of this entity" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithActorElement_GetRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithActorElement, nullptr, "GetRotation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithActorElement_GetRotation_Statics::DatasmithActorElement_eventGetRotation_Parms), Z_Construct_UFunction_UDatasmithActorElement_GetRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithActorElement_GetRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithActorElement_GetRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithActorElement_GetRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithActorElement_GetRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithActorElement_GetRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithActorElement_GetScale_Statics
	{
		struct DatasmithActorElement_eventGetScale_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDatasmithActorElement_GetScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithActorElement_eventGetScale_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithActorElement_GetScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithActorElement_GetScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithActorElement_GetScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Get absolute scale of this entity */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get absolute scale of this entity" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithActorElement_GetScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithActorElement, nullptr, "GetScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithActorElement_GetScale_Statics::DatasmithActorElement_eventGetScale_Parms), Z_Construct_UFunction_UDatasmithActorElement_GetScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithActorElement_GetScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithActorElement_GetScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithActorElement_GetScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithActorElement_GetScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithActorElement_GetScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithActorElement_GetTags_Statics
	{
		struct DatasmithActorElement_eventGetTags_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithActorElement_GetTags_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDatasmithActorElement_GetTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithActorElement_eventGetTags_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithActorElement_GetTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithActorElement_GetTags_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithActorElement_GetTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithActorElement_GetTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Get the tags of an Actor element */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get the tags of an Actor element" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithActorElement_GetTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithActorElement, nullptr, "GetTags", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithActorElement_GetTags_Statics::DatasmithActorElement_eventGetTags_Parms), Z_Construct_UFunction_UDatasmithActorElement_GetTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithActorElement_GetTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithActorElement_GetTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithActorElement_GetTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithActorElement_GetTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithActorElement_GetTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithActorElement_GetTranslation_Statics
	{
		struct DatasmithActorElement_eventGetTranslation_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDatasmithActorElement_GetTranslation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithActorElement_eventGetTranslation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithActorElement_GetTranslation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithActorElement_GetTranslation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithActorElement_GetTranslation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Get absolute translation of this entity */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get absolute translation of this entity" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithActorElement_GetTranslation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithActorElement, nullptr, "GetTranslation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithActorElement_GetTranslation_Statics::DatasmithActorElement_eventGetTranslation_Parms), Z_Construct_UFunction_UDatasmithActorElement_GetTranslation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithActorElement_GetTranslation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithActorElement_GetTranslation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithActorElement_GetTranslation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithActorElement_GetTranslation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithActorElement_GetTranslation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithActorElement_GetVisibility_Statics
	{
		struct DatasmithActorElement_eventGetVisibility_Parms
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
	void Z_Construct_UFunction_UDatasmithActorElement_GetVisibility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DatasmithActorElement_eventGetVisibility_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDatasmithActorElement_GetVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DatasmithActorElement_eventGetVisibility_Parms), &Z_Construct_UFunction_UDatasmithActorElement_GetVisibility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithActorElement_GetVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithActorElement_GetVisibility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithActorElement_GetVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Get the actor's visibility */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get the actor's visibility" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithActorElement_GetVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithActorElement, nullptr, "GetVisibility", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithActorElement_GetVisibility_Statics::DatasmithActorElement_eventGetVisibility_Parms), Z_Construct_UFunction_UDatasmithActorElement_GetVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithActorElement_GetVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithActorElement_GetVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithActorElement_GetVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithActorElement_GetVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithActorElement_GetVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithActorElement_RemoveChild_Statics
	{
		struct DatasmithActorElement_eventRemoveChild_Parms
		{
			UDatasmithActorElement* InChild;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InChild;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithActorElement_RemoveChild_Statics::NewProp_InChild = { "InChild", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithActorElement_eventRemoveChild_Parms, InChild), Z_Construct_UClass_UDatasmithActorElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithActorElement_RemoveChild_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithActorElement_RemoveChild_Statics::NewProp_InChild,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithActorElement_RemoveChild_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Remove a new child from the Actor Element */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Remove a new child from the Actor Element" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithActorElement_RemoveChild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithActorElement, nullptr, "RemoveChild", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithActorElement_RemoveChild_Statics::DatasmithActorElement_eventRemoveChild_Parms), Z_Construct_UFunction_UDatasmithActorElement_RemoveChild_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithActorElement_RemoveChild_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithActorElement_RemoveChild_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithActorElement_RemoveChild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithActorElement_RemoveChild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithActorElement_RemoveChild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithActorElement_SetLayer_Statics
	{
		struct DatasmithActorElement_eventSetLayer_Parms
		{
			FString InLayer;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLayer_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InLayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithActorElement_SetLayer_Statics::NewProp_InLayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithActorElement_SetLayer_Statics::NewProp_InLayer = { "InLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithActorElement_eventSetLayer_Parms, InLayer), METADATA_PARAMS(Z_Construct_UFunction_UDatasmithActorElement_SetLayer_Statics::NewProp_InLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithActorElement_SetLayer_Statics::NewProp_InLayer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithActorElement_SetLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithActorElement_SetLayer_Statics::NewProp_InLayer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithActorElement_SetLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Set the the the layer that contains this entity, layer will be auto-created from its name */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Set the the the layer that contains this entity, layer will be auto-created from its name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithActorElement_SetLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithActorElement, nullptr, "SetLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithActorElement_SetLayer_Statics::DatasmithActorElement_eventSetLayer_Parms), Z_Construct_UFunction_UDatasmithActorElement_SetLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithActorElement_SetLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithActorElement_SetLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithActorElement_SetLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithActorElement_SetLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithActorElement_SetLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithActorElement_SetRotation_Statics
	{
		struct DatasmithActorElement_eventSetRotation_Parms
		{
			FQuat Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDatasmithActorElement_SetRotation_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithActorElement_eventSetRotation_Parms, Value), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithActorElement_SetRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithActorElement_SetRotation_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithActorElement_SetRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Set rotation (in quaternion format) of this entity */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Set rotation (in quaternion format) of this entity" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithActorElement_SetRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithActorElement, nullptr, "SetRotation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithActorElement_SetRotation_Statics::DatasmithActorElement_eventSetRotation_Parms), Z_Construct_UFunction_UDatasmithActorElement_SetRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithActorElement_SetRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithActorElement_SetRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithActorElement_SetRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithActorElement_SetRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithActorElement_SetRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithActorElement_SetScale_Statics
	{
		struct DatasmithActorElement_eventSetScale_Parms
		{
			FVector Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDatasmithActorElement_SetScale_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithActorElement_eventSetScale_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithActorElement_SetScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithActorElement_SetScale_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithActorElement_SetScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Set absolute scale of this entity */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Set absolute scale of this entity" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithActorElement_SetScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithActorElement, nullptr, "SetScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithActorElement_SetScale_Statics::DatasmithActorElement_eventSetScale_Parms), Z_Construct_UFunction_UDatasmithActorElement_SetScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithActorElement_SetScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithActorElement_SetScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithActorElement_SetScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithActorElement_SetScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithActorElement_SetScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithActorElement_SetTags_Statics
	{
		struct DatasmithActorElement_eventSetTags_Parms
		{
			TArray<FString> InTags;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_InTags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithActorElement_SetTags_Statics::NewProp_InTags_Inner = { "InTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithActorElement_SetTags_Statics::NewProp_InTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDatasmithActorElement_SetTags_Statics::NewProp_InTags = { "InTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithActorElement_eventSetTags_Parms, InTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithActorElement_SetTags_Statics::NewProp_InTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithActorElement_SetTags_Statics::NewProp_InTags_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithActorElement_SetTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithActorElement_SetTags_Statics::NewProp_InTags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithActorElement_SetTags_Statics::NewProp_InTags,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithActorElement_SetTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Set the tags of an Actor element */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Set the tags of an Actor element" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithActorElement_SetTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithActorElement, nullptr, "SetTags", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithActorElement_SetTags_Statics::DatasmithActorElement_eventSetTags_Parms), Z_Construct_UFunction_UDatasmithActorElement_SetTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithActorElement_SetTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithActorElement_SetTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithActorElement_SetTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithActorElement_SetTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithActorElement_SetTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithActorElement_SetTranslation_Statics
	{
		struct DatasmithActorElement_eventSetTranslation_Parms
		{
			FVector Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDatasmithActorElement_SetTranslation_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithActorElement_eventSetTranslation_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithActorElement_SetTranslation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithActorElement_SetTranslation_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithActorElement_SetTranslation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Set absolute translation of this entity */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Set absolute translation of this entity" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithActorElement_SetTranslation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithActorElement, nullptr, "SetTranslation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithActorElement_SetTranslation_Statics::DatasmithActorElement_eventSetTranslation_Parms), Z_Construct_UFunction_UDatasmithActorElement_SetTranslation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithActorElement_SetTranslation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithActorElement_SetTranslation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithActorElement_SetTranslation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithActorElement_SetTranslation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithActorElement_SetTranslation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithActorElement_SetVisibility_Statics
	{
		struct DatasmithActorElement_eventSetVisibility_Parms
		{
			bool bInVisibility;
		};
		static void NewProp_bInVisibility_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInVisibility;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDatasmithActorElement_SetVisibility_Statics::NewProp_bInVisibility_SetBit(void* Obj)
	{
		((DatasmithActorElement_eventSetVisibility_Parms*)Obj)->bInVisibility = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDatasmithActorElement_SetVisibility_Statics::NewProp_bInVisibility = { "bInVisibility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DatasmithActorElement_eventSetVisibility_Parms), &Z_Construct_UFunction_UDatasmithActorElement_SetVisibility_Statics::NewProp_bInVisibility_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithActorElement_SetVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithActorElement_SetVisibility_Statics::NewProp_bInVisibility,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithActorElement_SetVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Set the actor's visibility */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Set the actor's visibility" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithActorElement_SetVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithActorElement, nullptr, "SetVisibility", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithActorElement_SetVisibility_Statics::DatasmithActorElement_eventSetVisibility_Parms), Z_Construct_UFunction_UDatasmithActorElement_SetVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithActorElement_SetVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithActorElement_SetVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithActorElement_SetVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithActorElement_SetVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithActorElement_SetVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithActorElement);
	UClass* Z_Construct_UClass_UDatasmithActorElement_NoRegister()
	{
		return UDatasmithActorElement::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithActorElement_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithActorElement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithObjectElement,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithImporter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDatasmithActorElement_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDatasmithActorElement_AddChild, "AddChild" }, // 1946400331
		{ &Z_Construct_UFunction_UDatasmithActorElement_GetChildren, "GetChildren" }, // 2816753470
		{ &Z_Construct_UFunction_UDatasmithActorElement_GetChildrenCount, "GetChildrenCount" }, // 271657722
		{ &Z_Construct_UFunction_UDatasmithActorElement_GetLayer, "GetLayer" }, // 1274496425
		{ &Z_Construct_UFunction_UDatasmithActorElement_GetRotation, "GetRotation" }, // 1216918668
		{ &Z_Construct_UFunction_UDatasmithActorElement_GetScale, "GetScale" }, // 3841776433
		{ &Z_Construct_UFunction_UDatasmithActorElement_GetTags, "GetTags" }, // 824485993
		{ &Z_Construct_UFunction_UDatasmithActorElement_GetTranslation, "GetTranslation" }, // 3170406503
		{ &Z_Construct_UFunction_UDatasmithActorElement_GetVisibility, "GetVisibility" }, // 1808274886
		{ &Z_Construct_UFunction_UDatasmithActorElement_RemoveChild, "RemoveChild" }, // 1545327926
		{ &Z_Construct_UFunction_UDatasmithActorElement_SetLayer, "SetLayer" }, // 585327626
		{ &Z_Construct_UFunction_UDatasmithActorElement_SetRotation, "SetRotation" }, // 2500066459
		{ &Z_Construct_UFunction_UDatasmithActorElement_SetScale, "SetScale" }, // 2940221544
		{ &Z_Construct_UFunction_UDatasmithActorElement_SetTags, "SetTags" }, // 2084821986
		{ &Z_Construct_UFunction_UDatasmithActorElement_SetTranslation, "SetTranslation" }, // 2466669070
		{ &Z_Construct_UFunction_UDatasmithActorElement_SetVisibility, "SetVisibility" }, // 3843346695
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithActorElement_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * UDatasmithActorElement\n */" },
		{ "IncludePath", "ObjectElements/DatasmithUObjectElements.h" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "* UDatasmithActorElement" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithActorElement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithActorElement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithActorElement_Statics::ClassParams = {
		&UDatasmithActorElement::StaticClass,
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
		0x001000A9u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithActorElement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithActorElement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithActorElement()
	{
		if (!Z_Registration_Info_UClass_UDatasmithActorElement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithActorElement.OuterSingleton, Z_Construct_UClass_UDatasmithActorElement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithActorElement.OuterSingleton;
	}
	template<> DATASMITHIMPORTER_API UClass* StaticClass<UDatasmithActorElement>()
	{
		return UDatasmithActorElement::StaticClass();
	}
	UDatasmithActorElement::UDatasmithActorElement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithActorElement);
	UDatasmithActorElement::~UDatasmithActorElement() {}
	DEFINE_FUNCTION(UDatasmithMeshElement::execGetMaterial)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetMaterial(Z_Param_SlotId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithMeshElement::execSetMaterial)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MaterialName);
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaterial(Z_Param_MaterialName,Z_Param_SlotId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithMeshElement::execSetLightmapSourceUV)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_UVChannel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLightmapSourceUV(Z_Param_UVChannel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithMeshElement::execGetLightmapSourceUV)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLightmapSourceUV();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithMeshElement::execSetLightmapCoordinateIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_UVChannel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLightmapCoordinateIndex(Z_Param_UVChannel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithMeshElement::execGetLightmapCoordinateIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLightmapCoordinateIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithMeshElement::execGetLightMapArea)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetLightMapArea();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithMeshElement::execGetBoundingBoxSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetBoundingBoxSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithMeshElement::execGetBoundingBoxDepth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetBoundingBoxDepth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithMeshElement::execGetBoundingBoxHeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetBoundingBoxHeight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithMeshElement::execGetBoundingBoxWidth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetBoundingBoxWidth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithMeshElement::execGetFile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetFile();
		P_NATIVE_END;
	}
	void UDatasmithMeshElement::StaticRegisterNativesUDatasmithMeshElement()
	{
		UClass* Class = UDatasmithMeshElement::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBoundingBoxDepth", &UDatasmithMeshElement::execGetBoundingBoxDepth },
			{ "GetBoundingBoxHeight", &UDatasmithMeshElement::execGetBoundingBoxHeight },
			{ "GetBoundingBoxSize", &UDatasmithMeshElement::execGetBoundingBoxSize },
			{ "GetBoundingBoxWidth", &UDatasmithMeshElement::execGetBoundingBoxWidth },
			{ "GetFile", &UDatasmithMeshElement::execGetFile },
			{ "GetLightMapArea", &UDatasmithMeshElement::execGetLightMapArea },
			{ "GetLightmapCoordinateIndex", &UDatasmithMeshElement::execGetLightmapCoordinateIndex },
			{ "GetLightmapSourceUV", &UDatasmithMeshElement::execGetLightmapSourceUV },
			{ "GetMaterial", &UDatasmithMeshElement::execGetMaterial },
			{ "SetLightmapCoordinateIndex", &UDatasmithMeshElement::execSetLightmapCoordinateIndex },
			{ "SetLightmapSourceUV", &UDatasmithMeshElement::execSetLightmapSourceUV },
			{ "SetMaterial", &UDatasmithMeshElement::execSetMaterial },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDatasmithMeshElement_GetBoundingBoxDepth_Statics
	{
		struct DatasmithMeshElement_eventGetBoundingBoxDepth_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDatasmithMeshElement_GetBoundingBoxDepth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithMeshElement_eventGetBoundingBoxDepth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithMeshElement_GetBoundingBoxDepth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithMeshElement_GetBoundingBoxDepth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithMeshElement_GetBoundingBoxDepth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Get the bounding box depth */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get the bounding box depth" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithMeshElement_GetBoundingBoxDepth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithMeshElement, nullptr, "GetBoundingBoxDepth", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithMeshElement_GetBoundingBoxDepth_Statics::DatasmithMeshElement_eventGetBoundingBoxDepth_Parms), Z_Construct_UFunction_UDatasmithMeshElement_GetBoundingBoxDepth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithMeshElement_GetBoundingBoxDepth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithMeshElement_GetBoundingBoxDepth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithMeshElement_GetBoundingBoxDepth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithMeshElement_GetBoundingBoxDepth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithMeshElement_GetBoundingBoxDepth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithMeshElement_GetBoundingBoxHeight_Statics
	{
		struct DatasmithMeshElement_eventGetBoundingBoxHeight_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDatasmithMeshElement_GetBoundingBoxHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithMeshElement_eventGetBoundingBoxHeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithMeshElement_GetBoundingBoxHeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithMeshElement_GetBoundingBoxHeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithMeshElement_GetBoundingBoxHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Get the bounding box height */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get the bounding box height" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithMeshElement_GetBoundingBoxHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithMeshElement, nullptr, "GetBoundingBoxHeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithMeshElement_GetBoundingBoxHeight_Statics::DatasmithMeshElement_eventGetBoundingBoxHeight_Parms), Z_Construct_UFunction_UDatasmithMeshElement_GetBoundingBoxHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithMeshElement_GetBoundingBoxHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithMeshElement_GetBoundingBoxHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithMeshElement_GetBoundingBoxHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithMeshElement_GetBoundingBoxHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithMeshElement_GetBoundingBoxHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithMeshElement_GetBoundingBoxSize_Statics
	{
		struct DatasmithMeshElement_eventGetBoundingBoxSize_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDatasmithMeshElement_GetBoundingBoxSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithMeshElement_eventGetBoundingBoxSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithMeshElement_GetBoundingBoxSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithMeshElement_GetBoundingBoxSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithMeshElement_GetBoundingBoxSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Get the bounding box represented by a Vector. X is Width, Y is Height, Z is Depth. */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get the bounding box represented by a Vector. X is Width, Y is Height, Z is Depth." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithMeshElement_GetBoundingBoxSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithMeshElement, nullptr, "GetBoundingBoxSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithMeshElement_GetBoundingBoxSize_Statics::DatasmithMeshElement_eventGetBoundingBoxSize_Parms), Z_Construct_UFunction_UDatasmithMeshElement_GetBoundingBoxSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithMeshElement_GetBoundingBoxSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithMeshElement_GetBoundingBoxSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithMeshElement_GetBoundingBoxSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithMeshElement_GetBoundingBoxSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithMeshElement_GetBoundingBoxSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithMeshElement_GetBoundingBoxWidth_Statics
	{
		struct DatasmithMeshElement_eventGetBoundingBoxWidth_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDatasmithMeshElement_GetBoundingBoxWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithMeshElement_eventGetBoundingBoxWidth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithMeshElement_GetBoundingBoxWidth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithMeshElement_GetBoundingBoxWidth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithMeshElement_GetBoundingBoxWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Get the bounding box width */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get the bounding box width" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithMeshElement_GetBoundingBoxWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithMeshElement, nullptr, "GetBoundingBoxWidth", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithMeshElement_GetBoundingBoxWidth_Statics::DatasmithMeshElement_eventGetBoundingBoxWidth_Parms), Z_Construct_UFunction_UDatasmithMeshElement_GetBoundingBoxWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithMeshElement_GetBoundingBoxWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithMeshElement_GetBoundingBoxWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithMeshElement_GetBoundingBoxWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithMeshElement_GetBoundingBoxWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithMeshElement_GetBoundingBoxWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithMeshElement_GetFile_Statics
	{
		struct DatasmithMeshElement_eventGetFile_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithMeshElement_GetFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithMeshElement_eventGetFile_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithMeshElement_GetFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithMeshElement_GetFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithMeshElement_GetFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Get the output filename, it can be absolute or relative to the scene file */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get the output filename, it can be absolute or relative to the scene file" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithMeshElement_GetFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithMeshElement, nullptr, "GetFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithMeshElement_GetFile_Statics::DatasmithMeshElement_eventGetFile_Parms), Z_Construct_UFunction_UDatasmithMeshElement_GetFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithMeshElement_GetFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithMeshElement_GetFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithMeshElement_GetFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithMeshElement_GetFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithMeshElement_GetFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithMeshElement_GetLightMapArea_Statics
	{
		struct DatasmithMeshElement_eventGetLightMapArea_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDatasmithMeshElement_GetLightMapArea_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithMeshElement_eventGetLightMapArea_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithMeshElement_GetLightMapArea_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithMeshElement_GetLightMapArea_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithMeshElement_GetLightMapArea_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Get the total surface area */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get the total surface area" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithMeshElement_GetLightMapArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithMeshElement, nullptr, "GetLightMapArea", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithMeshElement_GetLightMapArea_Statics::DatasmithMeshElement_eventGetLightMapArea_Parms), Z_Construct_UFunction_UDatasmithMeshElement_GetLightMapArea_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithMeshElement_GetLightMapArea_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithMeshElement_GetLightMapArea_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithMeshElement_GetLightMapArea_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithMeshElement_GetLightMapArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithMeshElement_GetLightMapArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithMeshElement_GetLightmapCoordinateIndex_Statics
	{
		struct DatasmithMeshElement_eventGetLightmapCoordinateIndex_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDatasmithMeshElement_GetLightmapCoordinateIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithMeshElement_eventGetLightmapCoordinateIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithMeshElement_GetLightmapCoordinateIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithMeshElement_GetLightmapCoordinateIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithMeshElement_GetLightmapCoordinateIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Get the UV channel that will be used for the lightmap */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get the UV channel that will be used for the lightmap" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithMeshElement_GetLightmapCoordinateIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithMeshElement, nullptr, "GetLightmapCoordinateIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithMeshElement_GetLightmapCoordinateIndex_Statics::DatasmithMeshElement_eventGetLightmapCoordinateIndex_Parms), Z_Construct_UFunction_UDatasmithMeshElement_GetLightmapCoordinateIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithMeshElement_GetLightmapCoordinateIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithMeshElement_GetLightmapCoordinateIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithMeshElement_GetLightmapCoordinateIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithMeshElement_GetLightmapCoordinateIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithMeshElement_GetLightmapCoordinateIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithMeshElement_GetLightmapSourceUV_Statics
	{
		struct DatasmithMeshElement_eventGetLightmapSourceUV_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDatasmithMeshElement_GetLightmapSourceUV_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithMeshElement_eventGetLightmapSourceUV_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithMeshElement_GetLightmapSourceUV_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithMeshElement_GetLightmapSourceUV_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithMeshElement_GetLightmapSourceUV_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Get the source UV channel that will be used at import to generate the lightmap UVs */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get the source UV channel that will be used at import to generate the lightmap UVs" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithMeshElement_GetLightmapSourceUV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithMeshElement, nullptr, "GetLightmapSourceUV", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithMeshElement_GetLightmapSourceUV_Statics::DatasmithMeshElement_eventGetLightmapSourceUV_Parms), Z_Construct_UFunction_UDatasmithMeshElement_GetLightmapSourceUV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithMeshElement_GetLightmapSourceUV_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithMeshElement_GetLightmapSourceUV_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithMeshElement_GetLightmapSourceUV_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithMeshElement_GetLightmapSourceUV()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithMeshElement_GetLightmapSourceUV_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithMeshElement_GetMaterial_Statics
	{
		struct DatasmithMeshElement_eventGetMaterial_Parms
		{
			int32 SlotId;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SlotId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDatasmithMeshElement_GetMaterial_Statics::NewProp_SlotId = { "SlotId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithMeshElement_eventGetMaterial_Parms, SlotId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithMeshElement_GetMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithMeshElement_eventGetMaterial_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithMeshElement_GetMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithMeshElement_GetMaterial_Statics::NewProp_SlotId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithMeshElement_GetMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithMeshElement_GetMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Get the material name in the material slot SlotId */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get the material name in the material slot SlotId" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithMeshElement_GetMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithMeshElement, nullptr, "GetMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithMeshElement_GetMaterial_Statics::DatasmithMeshElement_eventGetMaterial_Parms), Z_Construct_UFunction_UDatasmithMeshElement_GetMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithMeshElement_GetMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithMeshElement_GetMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithMeshElement_GetMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithMeshElement_GetMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithMeshElement_GetMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithMeshElement_SetLightmapCoordinateIndex_Statics
	{
		struct DatasmithMeshElement_eventSetLightmapCoordinateIndex_Parms
		{
			int32 UVChannel;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_UVChannel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDatasmithMeshElement_SetLightmapCoordinateIndex_Statics::NewProp_UVChannel = { "UVChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithMeshElement_eventSetLightmapCoordinateIndex_Parms, UVChannel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithMeshElement_SetLightmapCoordinateIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithMeshElement_SetLightmapCoordinateIndex_Statics::NewProp_UVChannel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithMeshElement_SetLightmapCoordinateIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/**\n\x09 * Set the UV channel that will be used for the lightmap\n\x09 * Note: If the lightmap coordinate index is something greater than -1 it will make the importer skip the lightmap generation\n\x09 */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Set the UV channel that will be used for the lightmap\nNote: If the lightmap coordinate index is something greater than -1 it will make the importer skip the lightmap generation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithMeshElement_SetLightmapCoordinateIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithMeshElement, nullptr, "SetLightmapCoordinateIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithMeshElement_SetLightmapCoordinateIndex_Statics::DatasmithMeshElement_eventSetLightmapCoordinateIndex_Parms), Z_Construct_UFunction_UDatasmithMeshElement_SetLightmapCoordinateIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithMeshElement_SetLightmapCoordinateIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithMeshElement_SetLightmapCoordinateIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithMeshElement_SetLightmapCoordinateIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithMeshElement_SetLightmapCoordinateIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithMeshElement_SetLightmapCoordinateIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithMeshElement_SetLightmapSourceUV_Statics
	{
		struct DatasmithMeshElement_eventSetLightmapSourceUV_Parms
		{
			int32 UVChannel;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_UVChannel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDatasmithMeshElement_SetLightmapSourceUV_Statics::NewProp_UVChannel = { "UVChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithMeshElement_eventSetLightmapSourceUV_Parms, UVChannel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithMeshElement_SetLightmapSourceUV_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithMeshElement_SetLightmapSourceUV_Statics::NewProp_UVChannel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithMeshElement_SetLightmapSourceUV_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Set the source UV channel that will be used at import to generate the lightmap UVs */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Set the source UV channel that will be used at import to generate the lightmap UVs" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithMeshElement_SetLightmapSourceUV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithMeshElement, nullptr, "SetLightmapSourceUV", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithMeshElement_SetLightmapSourceUV_Statics::DatasmithMeshElement_eventSetLightmapSourceUV_Parms), Z_Construct_UFunction_UDatasmithMeshElement_SetLightmapSourceUV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithMeshElement_SetLightmapSourceUV_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithMeshElement_SetLightmapSourceUV_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithMeshElement_SetLightmapSourceUV_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithMeshElement_SetLightmapSourceUV()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithMeshElement_SetLightmapSourceUV_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithMeshElement_SetMaterial_Statics
	{
		struct DatasmithMeshElement_eventSetMaterial_Parms
		{
			FString MaterialName;
			int32 SlotId;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MaterialName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SlotId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithMeshElement_SetMaterial_Statics::NewProp_MaterialName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithMeshElement_SetMaterial_Statics::NewProp_MaterialName = { "MaterialName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithMeshElement_eventSetMaterial_Parms, MaterialName), METADATA_PARAMS(Z_Construct_UFunction_UDatasmithMeshElement_SetMaterial_Statics::NewProp_MaterialName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithMeshElement_SetMaterial_Statics::NewProp_MaterialName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDatasmithMeshElement_SetMaterial_Statics::NewProp_SlotId = { "SlotId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithMeshElement_eventSetMaterial_Parms, SlotId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithMeshElement_SetMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithMeshElement_SetMaterial_Statics::NewProp_MaterialName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithMeshElement_SetMaterial_Statics::NewProp_SlotId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithMeshElement_SetMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Set the material name to associate with slot SlotId */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Set the material name to associate with slot SlotId" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithMeshElement_SetMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithMeshElement, nullptr, "SetMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithMeshElement_SetMaterial_Statics::DatasmithMeshElement_eventSetMaterial_Parms), Z_Construct_UFunction_UDatasmithMeshElement_SetMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithMeshElement_SetMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithMeshElement_SetMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithMeshElement_SetMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithMeshElement_SetMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithMeshElement_SetMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithMeshElement);
	UClass* Z_Construct_UClass_UDatasmithMeshElement_NoRegister()
	{
		return UDatasmithMeshElement::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithMeshElement_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithMeshElement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithObjectElement,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithImporter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDatasmithMeshElement_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDatasmithMeshElement_GetBoundingBoxDepth, "GetBoundingBoxDepth" }, // 2802115039
		{ &Z_Construct_UFunction_UDatasmithMeshElement_GetBoundingBoxHeight, "GetBoundingBoxHeight" }, // 1800997083
		{ &Z_Construct_UFunction_UDatasmithMeshElement_GetBoundingBoxSize, "GetBoundingBoxSize" }, // 1586209116
		{ &Z_Construct_UFunction_UDatasmithMeshElement_GetBoundingBoxWidth, "GetBoundingBoxWidth" }, // 867773389
		{ &Z_Construct_UFunction_UDatasmithMeshElement_GetFile, "GetFile" }, // 716257937
		{ &Z_Construct_UFunction_UDatasmithMeshElement_GetLightMapArea, "GetLightMapArea" }, // 1864260823
		{ &Z_Construct_UFunction_UDatasmithMeshElement_GetLightmapCoordinateIndex, "GetLightmapCoordinateIndex" }, // 4148786562
		{ &Z_Construct_UFunction_UDatasmithMeshElement_GetLightmapSourceUV, "GetLightmapSourceUV" }, // 4242491503
		{ &Z_Construct_UFunction_UDatasmithMeshElement_GetMaterial, "GetMaterial" }, // 3486668469
		{ &Z_Construct_UFunction_UDatasmithMeshElement_SetLightmapCoordinateIndex, "SetLightmapCoordinateIndex" }, // 777297690
		{ &Z_Construct_UFunction_UDatasmithMeshElement_SetLightmapSourceUV, "SetLightmapSourceUV" }, // 111558030
		{ &Z_Construct_UFunction_UDatasmithMeshElement_SetMaterial, "SetMaterial" }, // 1689486153
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithMeshElement_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UDatasmithMeshElement defines an actual geometry.\n */" },
		{ "IncludePath", "ObjectElements/DatasmithUObjectElements.h" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "UDatasmithMeshElement defines an actual geometry." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithMeshElement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithMeshElement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithMeshElement_Statics::ClassParams = {
		&UDatasmithMeshElement::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithMeshElement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithMeshElement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithMeshElement()
	{
		if (!Z_Registration_Info_UClass_UDatasmithMeshElement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithMeshElement.OuterSingleton, Z_Construct_UClass_UDatasmithMeshElement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithMeshElement.OuterSingleton;
	}
	template<> DATASMITHIMPORTER_API UClass* StaticClass<UDatasmithMeshElement>()
	{
		return UDatasmithMeshElement::StaticClass();
	}
	UDatasmithMeshElement::UDatasmithMeshElement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithMeshElement);
	UDatasmithMeshElement::~UDatasmithMeshElement() {}
	DEFINE_FUNCTION(UDatasmithMeshActorElement::execGetBoundingBoxSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetBoundingBoxSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithMeshActorElement::execGetMeshElement)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDatasmithMeshElement**)Z_Param__Result=P_THIS->GetMeshElement();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithMeshActorElement::execSetStaticMeshPathName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InStaticMeshName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStaticMeshPathName(Z_Param_InStaticMeshName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithMeshActorElement::execGetStaticMeshPathName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetStaticMeshPathName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithMeshActorElement::execRemoveMaterialOverride)
	{
		P_GET_OBJECT(UDatasmithMaterialIDElement,Z_Param_Material);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveMaterialOverride(Z_Param_Material);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithMeshActorElement::execGetMaterials)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UDatasmithMaterialIDElement*>*)Z_Param__Result=P_THIS->GetMaterials();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithMeshActorElement::execGetMaterialOverridesCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaterialOverridesCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithMeshActorElement::execAddMaterialOverride)
	{
		P_GET_OBJECT(UDatasmithMaterialIDElement,Z_Param_Material);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddMaterialOverride(Z_Param_Material);
		P_NATIVE_END;
	}
	void UDatasmithMeshActorElement::StaticRegisterNativesUDatasmithMeshActorElement()
	{
		UClass* Class = UDatasmithMeshActorElement::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddMaterialOverride", &UDatasmithMeshActorElement::execAddMaterialOverride },
			{ "GetBoundingBoxSize", &UDatasmithMeshActorElement::execGetBoundingBoxSize },
			{ "GetMaterialOverridesCount", &UDatasmithMeshActorElement::execGetMaterialOverridesCount },
			{ "GetMaterials", &UDatasmithMeshActorElement::execGetMaterials },
			{ "GetMeshElement", &UDatasmithMeshActorElement::execGetMeshElement },
			{ "GetStaticMeshPathName", &UDatasmithMeshActorElement::execGetStaticMeshPathName },
			{ "RemoveMaterialOverride", &UDatasmithMeshActorElement::execRemoveMaterialOverride },
			{ "SetStaticMeshPathName", &UDatasmithMeshActorElement::execSetStaticMeshPathName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDatasmithMeshActorElement_AddMaterialOverride_Statics
	{
		struct DatasmithMeshActorElement_eventAddMaterialOverride_Parms
		{
			UDatasmithMaterialIDElement* Material;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithMeshActorElement_AddMaterialOverride_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithMeshActorElement_eventAddMaterialOverride_Parms, Material), Z_Construct_UClass_UDatasmithMaterialIDElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithMeshActorElement_AddMaterialOverride_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithMeshActorElement_AddMaterialOverride_Statics::NewProp_Material,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithMeshActorElement_AddMaterialOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Adds a new material to the Actor Element */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Adds a new material to the Actor Element" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithMeshActorElement_AddMaterialOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithMeshActorElement, nullptr, "AddMaterialOverride", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithMeshActorElement_AddMaterialOverride_Statics::DatasmithMeshActorElement_eventAddMaterialOverride_Parms), Z_Construct_UFunction_UDatasmithMeshActorElement_AddMaterialOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithMeshActorElement_AddMaterialOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithMeshActorElement_AddMaterialOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithMeshActorElement_AddMaterialOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithMeshActorElement_AddMaterialOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithMeshActorElement_AddMaterialOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithMeshActorElement_GetBoundingBoxSize_Statics
	{
		struct DatasmithMeshActorElement_eventGetBoundingBoxSize_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDatasmithMeshActorElement_GetBoundingBoxSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithMeshActorElement_eventGetBoundingBoxSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithMeshActorElement_GetBoundingBoxSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithMeshActorElement_GetBoundingBoxSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithMeshActorElement_GetBoundingBoxSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/**\n\x09 * Get the Bounding Box of the Actor as a Vector. X is Width, Y is Height, Z is Depth.\n\x09 * The value will are taken from the MeshElement and are factored by the Actor Scale.\n\x09 * Bounding Box size can only be calculated if the Mesh can be found.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get the Bounding Box of the Actor as a Vector. X is Width, Y is Height, Z is Depth.\nThe value will are taken from the MeshElement and are factored by the Actor Scale.\nBounding Box size can only be calculated if the Mesh can be found." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithMeshActorElement_GetBoundingBoxSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithMeshActorElement, nullptr, "GetBoundingBoxSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithMeshActorElement_GetBoundingBoxSize_Statics::DatasmithMeshActorElement_eventGetBoundingBoxSize_Parms), Z_Construct_UFunction_UDatasmithMeshActorElement_GetBoundingBoxSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithMeshActorElement_GetBoundingBoxSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithMeshActorElement_GetBoundingBoxSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithMeshActorElement_GetBoundingBoxSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithMeshActorElement_GetBoundingBoxSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithMeshActorElement_GetBoundingBoxSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithMeshActorElement_GetMaterialOverridesCount_Statics
	{
		struct DatasmithMeshActorElement_eventGetMaterialOverridesCount_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDatasmithMeshActorElement_GetMaterialOverridesCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithMeshActorElement_eventGetMaterialOverridesCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithMeshActorElement_GetMaterialOverridesCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithMeshActorElement_GetMaterialOverridesCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithMeshActorElement_GetMaterialOverridesCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Get the amount of materials on this mesh */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get the amount of materials on this mesh" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithMeshActorElement_GetMaterialOverridesCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithMeshActorElement, nullptr, "GetMaterialOverridesCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithMeshActorElement_GetMaterialOverridesCount_Statics::DatasmithMeshActorElement_eventGetMaterialOverridesCount_Parms), Z_Construct_UFunction_UDatasmithMeshActorElement_GetMaterialOverridesCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithMeshActorElement_GetMaterialOverridesCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithMeshActorElement_GetMaterialOverridesCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithMeshActorElement_GetMaterialOverridesCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithMeshActorElement_GetMaterialOverridesCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithMeshActorElement_GetMaterialOverridesCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithMeshActorElement_GetMaterials_Statics
	{
		struct DatasmithMeshActorElement_eventGetMaterials_Parms
		{
			TArray<UDatasmithMaterialIDElement*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithMeshActorElement_GetMaterials_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDatasmithMaterialIDElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDatasmithMeshActorElement_GetMaterials_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithMeshActorElement_eventGetMaterials_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithMeshActorElement_GetMaterials_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithMeshActorElement_GetMaterials_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithMeshActorElement_GetMaterials_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithMeshActorElement_GetMaterials_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Get the i-th material of this actor */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get the i-th material of this actor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithMeshActorElement_GetMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithMeshActorElement, nullptr, "GetMaterials", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithMeshActorElement_GetMaterials_Statics::DatasmithMeshActorElement_eventGetMaterials_Parms), Z_Construct_UFunction_UDatasmithMeshActorElement_GetMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithMeshActorElement_GetMaterials_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithMeshActorElement_GetMaterials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithMeshActorElement_GetMaterials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithMeshActorElement_GetMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithMeshActorElement_GetMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithMeshActorElement_GetMeshElement_Statics
	{
		struct DatasmithMeshActorElement_eventGetMeshElement_Parms
		{
			UDatasmithMeshElement* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithMeshActorElement_GetMeshElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithMeshActorElement_eventGetMeshElement_Parms, ReturnValue), Z_Construct_UClass_UDatasmithMeshElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithMeshActorElement_GetMeshElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithMeshActorElement_GetMeshElement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithMeshActorElement_GetMeshElement_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Get the Datasmith MeshElement associated with the actor. The Mesh can be a direct reference to an Unreal Mesh. If it's the case it will return an invalid MeshElement. */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get the Datasmith MeshElement associated with the actor. The Mesh can be a direct reference to an Unreal Mesh. If it's the case it will return an invalid MeshElement." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithMeshActorElement_GetMeshElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithMeshActorElement, nullptr, "GetMeshElement", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithMeshActorElement_GetMeshElement_Statics::DatasmithMeshActorElement_eventGetMeshElement_Parms), Z_Construct_UFunction_UDatasmithMeshActorElement_GetMeshElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithMeshActorElement_GetMeshElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithMeshActorElement_GetMeshElement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithMeshActorElement_GetMeshElement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithMeshActorElement_GetMeshElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithMeshActorElement_GetMeshElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithMeshActorElement_GetStaticMeshPathName_Statics
	{
		struct DatasmithMeshActorElement_eventGetStaticMeshPathName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithMeshActorElement_GetStaticMeshPathName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithMeshActorElement_eventGetStaticMeshPathName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithMeshActorElement_GetStaticMeshPathName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithMeshActorElement_GetStaticMeshPathName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithMeshActorElement_GetStaticMeshPathName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Get the path name of the StaticMesh associated with the actor */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get the path name of the StaticMesh associated with the actor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithMeshActorElement_GetStaticMeshPathName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithMeshActorElement, nullptr, "GetStaticMeshPathName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithMeshActorElement_GetStaticMeshPathName_Statics::DatasmithMeshActorElement_eventGetStaticMeshPathName_Parms), Z_Construct_UFunction_UDatasmithMeshActorElement_GetStaticMeshPathName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithMeshActorElement_GetStaticMeshPathName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithMeshActorElement_GetStaticMeshPathName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithMeshActorElement_GetStaticMeshPathName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithMeshActorElement_GetStaticMeshPathName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithMeshActorElement_GetStaticMeshPathName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithMeshActorElement_RemoveMaterialOverride_Statics
	{
		struct DatasmithMeshActorElement_eventRemoveMaterialOverride_Parms
		{
			UDatasmithMaterialIDElement* Material;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithMeshActorElement_RemoveMaterialOverride_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithMeshActorElement_eventRemoveMaterialOverride_Parms, Material), Z_Construct_UClass_UDatasmithMaterialIDElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithMeshActorElement_RemoveMaterialOverride_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithMeshActorElement_RemoveMaterialOverride_Statics::NewProp_Material,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithMeshActorElement_RemoveMaterialOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Get the amount of materials on this mesh */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get the amount of materials on this mesh" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithMeshActorElement_RemoveMaterialOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithMeshActorElement, nullptr, "RemoveMaterialOverride", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithMeshActorElement_RemoveMaterialOverride_Statics::DatasmithMeshActorElement_eventRemoveMaterialOverride_Parms), Z_Construct_UFunction_UDatasmithMeshActorElement_RemoveMaterialOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithMeshActorElement_RemoveMaterialOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithMeshActorElement_RemoveMaterialOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithMeshActorElement_RemoveMaterialOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithMeshActorElement_RemoveMaterialOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithMeshActorElement_RemoveMaterialOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithMeshActorElement_SetStaticMeshPathName_Statics
	{
		struct DatasmithMeshActorElement_eventSetStaticMeshPathName_Parms
		{
			FString InStaticMeshName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InStaticMeshName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InStaticMeshName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithMeshActorElement_SetStaticMeshPathName_Statics::NewProp_InStaticMeshName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithMeshActorElement_SetStaticMeshPathName_Statics::NewProp_InStaticMeshName = { "InStaticMeshName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithMeshActorElement_eventSetStaticMeshPathName_Parms, InStaticMeshName), METADATA_PARAMS(Z_Construct_UFunction_UDatasmithMeshActorElement_SetStaticMeshPathName_Statics::NewProp_InStaticMeshName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithMeshActorElement_SetStaticMeshPathName_Statics::NewProp_InStaticMeshName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithMeshActorElement_SetStaticMeshPathName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithMeshActorElement_SetStaticMeshPathName_Statics::NewProp_InStaticMeshName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithMeshActorElement_SetStaticMeshPathName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/**\n\x09 * Set the path name of the StaticMesh that the actor is using\n\x09 * It can be either a package path to refer to an existing mesh or a mesh name to refer to a MeshElement in the DatasmithScene\n\x09 */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Set the path name of the StaticMesh that the actor is using\nIt can be either a package path to refer to an existing mesh or a mesh name to refer to a MeshElement in the DatasmithScene" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithMeshActorElement_SetStaticMeshPathName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithMeshActorElement, nullptr, "SetStaticMeshPathName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithMeshActorElement_SetStaticMeshPathName_Statics::DatasmithMeshActorElement_eventSetStaticMeshPathName_Parms), Z_Construct_UFunction_UDatasmithMeshActorElement_SetStaticMeshPathName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithMeshActorElement_SetStaticMeshPathName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithMeshActorElement_SetStaticMeshPathName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithMeshActorElement_SetStaticMeshPathName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithMeshActorElement_SetStaticMeshPathName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithMeshActorElement_SetStaticMeshPathName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithMeshActorElement);
	UClass* Z_Construct_UClass_UDatasmithMeshActorElement_NoRegister()
	{
		return UDatasmithMeshActorElement::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithMeshActorElement_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithMeshActorElement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithActorElement,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithImporter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDatasmithMeshActorElement_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDatasmithMeshActorElement_AddMaterialOverride, "AddMaterialOverride" }, // 2099028991
		{ &Z_Construct_UFunction_UDatasmithMeshActorElement_GetBoundingBoxSize, "GetBoundingBoxSize" }, // 644898436
		{ &Z_Construct_UFunction_UDatasmithMeshActorElement_GetMaterialOverridesCount, "GetMaterialOverridesCount" }, // 3236881443
		{ &Z_Construct_UFunction_UDatasmithMeshActorElement_GetMaterials, "GetMaterials" }, // 2745464913
		{ &Z_Construct_UFunction_UDatasmithMeshActorElement_GetMeshElement, "GetMeshElement" }, // 913458383
		{ &Z_Construct_UFunction_UDatasmithMeshActorElement_GetStaticMeshPathName, "GetStaticMeshPathName" }, // 1822598511
		{ &Z_Construct_UFunction_UDatasmithMeshActorElement_RemoveMaterialOverride, "RemoveMaterialOverride" }, // 4164304013
		{ &Z_Construct_UFunction_UDatasmithMeshActorElement_SetStaticMeshPathName, "SetStaticMeshPathName" }, // 416817007
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithMeshActorElement_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * UDatasmithMeshActorElement\n */" },
		{ "IncludePath", "ObjectElements/DatasmithUObjectElements.h" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "* UDatasmithMeshActorElement" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithMeshActorElement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithMeshActorElement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithMeshActorElement_Statics::ClassParams = {
		&UDatasmithMeshActorElement::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithMeshActorElement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithMeshActorElement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithMeshActorElement()
	{
		if (!Z_Registration_Info_UClass_UDatasmithMeshActorElement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithMeshActorElement.OuterSingleton, Z_Construct_UClass_UDatasmithMeshActorElement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithMeshActorElement.OuterSingleton;
	}
	template<> DATASMITHIMPORTER_API UClass* StaticClass<UDatasmithMeshActorElement>()
	{
		return UDatasmithMeshActorElement::StaticClass();
	}
	UDatasmithMeshActorElement::UDatasmithMeshActorElement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithMeshActorElement);
	UDatasmithMeshActorElement::~UDatasmithMeshActorElement() {}
	DEFINE_FUNCTION(UDatasmithLightActorElement::execSetUseIesBrightness)
	{
		P_GET_UBOOL(Z_Param_bUseIesBrightness);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUseIesBrightness(Z_Param_bUseIesBrightness);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithLightActorElement::execGetUseIesBrightness)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetUseIesBrightness();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithLightActorElement::execSetIesBrightnessScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_IesBrightnessScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIesBrightnessScale(Z_Param_IesBrightnessScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithLightActorElement::execGetIesBrightnessScale)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetIesBrightnessScale();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithLightActorElement::execSetUseIes)
	{
		P_GET_UBOOL(Z_Param_bUseIes);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUseIes(Z_Param_bUseIes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithLightActorElement::execGetUseIes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetUseIes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithLightActorElement::execSetIesFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_IesFile);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIesFile(Z_Param_IesFile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithLightActorElement::execGetIesFile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetIesFile();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithLightActorElement::execSetUseTemperature)
	{
		P_GET_UBOOL(Z_Param_bUseTemperature);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUseTemperature(Z_Param_bUseTemperature);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithLightActorElement::execGetUseTemperature)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetUseTemperature();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithLightActorElement::execSetTemperature)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Temperature);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTemperature(Z_Param_Temperature);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithLightActorElement::execGetTemperature)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTemperature();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithLightActorElement::execSetColor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_Color);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetColor(Z_Param_Color);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithLightActorElement::execGetColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetColor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithLightActorElement::execSetIntensity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Intensity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIntensity(Z_Param_Intensity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithLightActorElement::execGetIntensity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetIntensity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithLightActorElement::execSetEnabled)
	{
		P_GET_UBOOL(Z_Param_bIsEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnabled(Z_Param_bIsEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithLightActorElement::execIsEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEnabled();
		P_NATIVE_END;
	}
	void UDatasmithLightActorElement::StaticRegisterNativesUDatasmithLightActorElement()
	{
		UClass* Class = UDatasmithLightActorElement::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetColor", &UDatasmithLightActorElement::execGetColor },
			{ "GetIesBrightnessScale", &UDatasmithLightActorElement::execGetIesBrightnessScale },
			{ "GetIesFile", &UDatasmithLightActorElement::execGetIesFile },
			{ "GetIntensity", &UDatasmithLightActorElement::execGetIntensity },
			{ "GetTemperature", &UDatasmithLightActorElement::execGetTemperature },
			{ "GetUseIes", &UDatasmithLightActorElement::execGetUseIes },
			{ "GetUseIesBrightness", &UDatasmithLightActorElement::execGetUseIesBrightness },
			{ "GetUseTemperature", &UDatasmithLightActorElement::execGetUseTemperature },
			{ "IsEnabled", &UDatasmithLightActorElement::execIsEnabled },
			{ "SetColor", &UDatasmithLightActorElement::execSetColor },
			{ "SetEnabled", &UDatasmithLightActorElement::execSetEnabled },
			{ "SetIesBrightnessScale", &UDatasmithLightActorElement::execSetIesBrightnessScale },
			{ "SetIesFile", &UDatasmithLightActorElement::execSetIesFile },
			{ "SetIntensity", &UDatasmithLightActorElement::execSetIntensity },
			{ "SetTemperature", &UDatasmithLightActorElement::execSetTemperature },
			{ "SetUseIes", &UDatasmithLightActorElement::execSetUseIes },
			{ "SetUseIesBrightness", &UDatasmithLightActorElement::execSetUseIesBrightness },
			{ "SetUseTemperature", &UDatasmithLightActorElement::execSetUseTemperature },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDatasmithLightActorElement_GetColor_Statics
	{
		struct DatasmithLightActorElement_eventGetColor_Parms
		{
			FLinearColor ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDatasmithLightActorElement_GetColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithLightActorElement_eventGetColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithLightActorElement_GetColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithLightActorElement_GetColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithLightActorElement_GetColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Get light color on linear mode */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get light color on linear mode" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithLightActorElement_GetColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithLightActorElement, nullptr, "GetColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithLightActorElement_GetColor_Statics::DatasmithLightActorElement_eventGetColor_Parms), Z_Construct_UFunction_UDatasmithLightActorElement_GetColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithLightActorElement_GetColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithLightActorElement_GetColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithLightActorElement_GetColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithLightActorElement_GetColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithLightActorElement_GetColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithLightActorElement_GetIesBrightnessScale_Statics
	{
		struct DatasmithLightActorElement_eventGetIesBrightnessScale_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDatasmithLightActorElement_GetIesBrightnessScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithLightActorElement_eventGetIesBrightnessScale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithLightActorElement_GetIesBrightnessScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithLightActorElement_GetIesBrightnessScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithLightActorElement_GetIesBrightnessScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Get the Ies brightness multiplier */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get the Ies brightness multiplier" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithLightActorElement_GetIesBrightnessScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithLightActorElement, nullptr, "GetIesBrightnessScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithLightActorElement_GetIesBrightnessScale_Statics::DatasmithLightActorElement_eventGetIesBrightnessScale_Parms), Z_Construct_UFunction_UDatasmithLightActorElement_GetIesBrightnessScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithLightActorElement_GetIesBrightnessScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithLightActorElement_GetIesBrightnessScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithLightActorElement_GetIesBrightnessScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithLightActorElement_GetIesBrightnessScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithLightActorElement_GetIesBrightnessScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithLightActorElement_GetIesFile_Statics
	{
		struct DatasmithLightActorElement_eventGetIesFile_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithLightActorElement_GetIesFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithLightActorElement_eventGetIesFile_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithLightActorElement_GetIesFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithLightActorElement_GetIesFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithLightActorElement_GetIesFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Get the path of the Ies definition file */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get the path of the Ies definition file" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithLightActorElement_GetIesFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithLightActorElement, nullptr, "GetIesFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithLightActorElement_GetIesFile_Statics::DatasmithLightActorElement_eventGetIesFile_Parms), Z_Construct_UFunction_UDatasmithLightActorElement_GetIesFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithLightActorElement_GetIesFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithLightActorElement_GetIesFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithLightActorElement_GetIesFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithLightActorElement_GetIesFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithLightActorElement_GetIesFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithLightActorElement_GetIntensity_Statics
	{
		struct DatasmithLightActorElement_eventGetIntensity_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDatasmithLightActorElement_GetIntensity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithLightActorElement_eventGetIntensity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithLightActorElement_GetIntensity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithLightActorElement_GetIntensity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithLightActorElement_GetIntensity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Get light intensity */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get light intensity" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithLightActorElement_GetIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithLightActorElement, nullptr, "GetIntensity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithLightActorElement_GetIntensity_Statics::DatasmithLightActorElement_eventGetIntensity_Parms), Z_Construct_UFunction_UDatasmithLightActorElement_GetIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithLightActorElement_GetIntensity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithLightActorElement_GetIntensity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithLightActorElement_GetIntensity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithLightActorElement_GetIntensity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithLightActorElement_GetIntensity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithLightActorElement_GetTemperature_Statics
	{
		struct DatasmithLightActorElement_eventGetTemperature_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDatasmithLightActorElement_GetTemperature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithLightActorElement_eventGetTemperature_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithLightActorElement_GetTemperature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithLightActorElement_GetTemperature_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithLightActorElement_GetTemperature_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Get the light temperature in Kelvin */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get the light temperature in Kelvin" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithLightActorElement_GetTemperature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithLightActorElement, nullptr, "GetTemperature", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithLightActorElement_GetTemperature_Statics::DatasmithLightActorElement_eventGetTemperature_Parms), Z_Construct_UFunction_UDatasmithLightActorElement_GetTemperature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithLightActorElement_GetTemperature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithLightActorElement_GetTemperature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithLightActorElement_GetTemperature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithLightActorElement_GetTemperature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithLightActorElement_GetTemperature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithLightActorElement_GetUseIes_Statics
	{
		struct DatasmithLightActorElement_eventGetUseIes_Parms
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
	void Z_Construct_UFunction_UDatasmithLightActorElement_GetUseIes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DatasmithLightActorElement_eventGetUseIes_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDatasmithLightActorElement_GetUseIes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DatasmithLightActorElement_eventGetUseIes_Parms), &Z_Construct_UFunction_UDatasmithLightActorElement_GetUseIes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithLightActorElement_GetUseIes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithLightActorElement_GetUseIes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithLightActorElement_GetUseIes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Set if this light is controlled by Ies definition file */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Set if this light is controlled by Ies definition file" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithLightActorElement_GetUseIes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithLightActorElement, nullptr, "GetUseIes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithLightActorElement_GetUseIes_Statics::DatasmithLightActorElement_eventGetUseIes_Parms), Z_Construct_UFunction_UDatasmithLightActorElement_GetUseIes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithLightActorElement_GetUseIes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithLightActorElement_GetUseIes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithLightActorElement_GetUseIes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithLightActorElement_GetUseIes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithLightActorElement_GetUseIes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithLightActorElement_GetUseIesBrightness_Statics
	{
		struct DatasmithLightActorElement_eventGetUseIesBrightness_Parms
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
	void Z_Construct_UFunction_UDatasmithLightActorElement_GetUseIesBrightness_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DatasmithLightActorElement_eventGetUseIesBrightness_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDatasmithLightActorElement_GetUseIesBrightness_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DatasmithLightActorElement_eventGetUseIesBrightness_Parms), &Z_Construct_UFunction_UDatasmithLightActorElement_GetUseIesBrightness_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithLightActorElement_GetUseIesBrightness_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithLightActorElement_GetUseIesBrightness_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithLightActorElement_GetUseIesBrightness_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Get if the emissive amount of the ies is controlled by the brightness scale */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get if the emissive amount of the ies is controlled by the brightness scale" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithLightActorElement_GetUseIesBrightness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithLightActorElement, nullptr, "GetUseIesBrightness", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithLightActorElement_GetUseIesBrightness_Statics::DatasmithLightActorElement_eventGetUseIesBrightness_Parms), Z_Construct_UFunction_UDatasmithLightActorElement_GetUseIesBrightness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithLightActorElement_GetUseIesBrightness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithLightActorElement_GetUseIesBrightness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithLightActorElement_GetUseIesBrightness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithLightActorElement_GetUseIesBrightness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithLightActorElement_GetUseIesBrightness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithLightActorElement_GetUseTemperature_Statics
	{
		struct DatasmithLightActorElement_eventGetUseTemperature_Parms
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
	void Z_Construct_UFunction_UDatasmithLightActorElement_GetUseTemperature_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DatasmithLightActorElement_eventGetUseTemperature_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDatasmithLightActorElement_GetUseTemperature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DatasmithLightActorElement_eventGetUseTemperature_Parms), &Z_Construct_UFunction_UDatasmithLightActorElement_GetUseTemperature_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithLightActorElement_GetUseTemperature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithLightActorElement_GetUseTemperature_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithLightActorElement_GetUseTemperature_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Get if the light color is controlled by temperature */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get if the light color is controlled by temperature" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithLightActorElement_GetUseTemperature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithLightActorElement, nullptr, "GetUseTemperature", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithLightActorElement_GetUseTemperature_Statics::DatasmithLightActorElement_eventGetUseTemperature_Parms), Z_Construct_UFunction_UDatasmithLightActorElement_GetUseTemperature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithLightActorElement_GetUseTemperature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithLightActorElement_GetUseTemperature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithLightActorElement_GetUseTemperature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithLightActorElement_GetUseTemperature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithLightActorElement_GetUseTemperature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithLightActorElement_IsEnabled_Statics
	{
		struct DatasmithLightActorElement_eventIsEnabled_Parms
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
	void Z_Construct_UFunction_UDatasmithLightActorElement_IsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DatasmithLightActorElement_eventIsEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDatasmithLightActorElement_IsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DatasmithLightActorElement_eventIsEnabled_Parms), &Z_Construct_UFunction_UDatasmithLightActorElement_IsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithLightActorElement_IsEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithLightActorElement_IsEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithLightActorElement_IsEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Return true on light enabled, false otherwise */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Return true on light enabled, false otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithLightActorElement_IsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithLightActorElement, nullptr, "IsEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithLightActorElement_IsEnabled_Statics::DatasmithLightActorElement_eventIsEnabled_Parms), Z_Construct_UFunction_UDatasmithLightActorElement_IsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithLightActorElement_IsEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithLightActorElement_IsEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithLightActorElement_IsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithLightActorElement_IsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithLightActorElement_IsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithLightActorElement_SetColor_Statics
	{
		struct DatasmithLightActorElement_eventSetColor_Parms
		{
			FLinearColor Color;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDatasmithLightActorElement_SetColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithLightActorElement_eventSetColor_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithLightActorElement_SetColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithLightActorElement_SetColor_Statics::NewProp_Color,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithLightActorElement_SetColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Set light color on linear mode */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Set light color on linear mode" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithLightActorElement_SetColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithLightActorElement, nullptr, "SetColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithLightActorElement_SetColor_Statics::DatasmithLightActorElement_eventSetColor_Parms), Z_Construct_UFunction_UDatasmithLightActorElement_SetColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithLightActorElement_SetColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithLightActorElement_SetColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithLightActorElement_SetColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithLightActorElement_SetColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithLightActorElement_SetColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithLightActorElement_SetEnabled_Statics
	{
		struct DatasmithLightActorElement_eventSetEnabled_Parms
		{
			bool bIsEnabled;
		};
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDatasmithLightActorElement_SetEnabled_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((DatasmithLightActorElement_eventSetEnabled_Parms*)Obj)->bIsEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDatasmithLightActorElement_SetEnabled_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DatasmithLightActorElement_eventSetEnabled_Parms), &Z_Construct_UFunction_UDatasmithLightActorElement_SetEnabled_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithLightActorElement_SetEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithLightActorElement_SetEnabled_Statics::NewProp_bIsEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithLightActorElement_SetEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Set enable property of the light */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Set enable property of the light" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithLightActorElement_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithLightActorElement, nullptr, "SetEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithLightActorElement_SetEnabled_Statics::DatasmithLightActorElement_eventSetEnabled_Parms), Z_Construct_UFunction_UDatasmithLightActorElement_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithLightActorElement_SetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithLightActorElement_SetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithLightActorElement_SetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithLightActorElement_SetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithLightActorElement_SetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithLightActorElement_SetIesBrightnessScale_Statics
	{
		struct DatasmithLightActorElement_eventSetIesBrightnessScale_Parms
		{
			float IesBrightnessScale;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IesBrightnessScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDatasmithLightActorElement_SetIesBrightnessScale_Statics::NewProp_IesBrightnessScale = { "IesBrightnessScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithLightActorElement_eventSetIesBrightnessScale_Parms, IesBrightnessScale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithLightActorElement_SetIesBrightnessScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithLightActorElement_SetIesBrightnessScale_Statics::NewProp_IesBrightnessScale,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithLightActorElement_SetIesBrightnessScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Set the Ies brightness multiplier */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Set the Ies brightness multiplier" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithLightActorElement_SetIesBrightnessScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithLightActorElement, nullptr, "SetIesBrightnessScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithLightActorElement_SetIesBrightnessScale_Statics::DatasmithLightActorElement_eventSetIesBrightnessScale_Parms), Z_Construct_UFunction_UDatasmithLightActorElement_SetIesBrightnessScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithLightActorElement_SetIesBrightnessScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithLightActorElement_SetIesBrightnessScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithLightActorElement_SetIesBrightnessScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithLightActorElement_SetIesBrightnessScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithLightActorElement_SetIesBrightnessScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithLightActorElement_SetIesFile_Statics
	{
		struct DatasmithLightActorElement_eventSetIesFile_Parms
		{
			FString IesFile;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IesFile_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_IesFile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithLightActorElement_SetIesFile_Statics::NewProp_IesFile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithLightActorElement_SetIesFile_Statics::NewProp_IesFile = { "IesFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithLightActorElement_eventSetIesFile_Parms, IesFile), METADATA_PARAMS(Z_Construct_UFunction_UDatasmithLightActorElement_SetIesFile_Statics::NewProp_IesFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithLightActorElement_SetIesFile_Statics::NewProp_IesFile_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithLightActorElement_SetIesFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithLightActorElement_SetIesFile_Statics::NewProp_IesFile,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithLightActorElement_SetIesFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Set the path of the Ies definition file */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Set the path of the Ies definition file" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithLightActorElement_SetIesFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithLightActorElement, nullptr, "SetIesFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithLightActorElement_SetIesFile_Statics::DatasmithLightActorElement_eventSetIesFile_Parms), Z_Construct_UFunction_UDatasmithLightActorElement_SetIesFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithLightActorElement_SetIesFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithLightActorElement_SetIesFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithLightActorElement_SetIesFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithLightActorElement_SetIesFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithLightActorElement_SetIesFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithLightActorElement_SetIntensity_Statics
	{
		struct DatasmithLightActorElement_eventSetIntensity_Parms
		{
			float Intensity;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Intensity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDatasmithLightActorElement_SetIntensity_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithLightActorElement_eventSetIntensity_Parms, Intensity), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithLightActorElement_SetIntensity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithLightActorElement_SetIntensity_Statics::NewProp_Intensity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithLightActorElement_SetIntensity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Set light intensity */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Set light intensity" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithLightActorElement_SetIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithLightActorElement, nullptr, "SetIntensity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithLightActorElement_SetIntensity_Statics::DatasmithLightActorElement_eventSetIntensity_Parms), Z_Construct_UFunction_UDatasmithLightActorElement_SetIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithLightActorElement_SetIntensity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithLightActorElement_SetIntensity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithLightActorElement_SetIntensity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithLightActorElement_SetIntensity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithLightActorElement_SetIntensity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithLightActorElement_SetTemperature_Statics
	{
		struct DatasmithLightActorElement_eventSetTemperature_Parms
		{
			float Temperature;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Temperature;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDatasmithLightActorElement_SetTemperature_Statics::NewProp_Temperature = { "Temperature", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithLightActorElement_eventSetTemperature_Parms, Temperature), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithLightActorElement_SetTemperature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithLightActorElement_SetTemperature_Statics::NewProp_Temperature,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithLightActorElement_SetTemperature_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Set the light temperature in Kelvin */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Set the light temperature in Kelvin" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithLightActorElement_SetTemperature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithLightActorElement, nullptr, "SetTemperature", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithLightActorElement_SetTemperature_Statics::DatasmithLightActorElement_eventSetTemperature_Parms), Z_Construct_UFunction_UDatasmithLightActorElement_SetTemperature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithLightActorElement_SetTemperature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithLightActorElement_SetTemperature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithLightActorElement_SetTemperature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithLightActorElement_SetTemperature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithLightActorElement_SetTemperature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithLightActorElement_SetUseIes_Statics
	{
		struct DatasmithLightActorElement_eventSetUseIes_Parms
		{
			bool bUseIes;
		};
		static void NewProp_bUseIes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseIes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDatasmithLightActorElement_SetUseIes_Statics::NewProp_bUseIes_SetBit(void* Obj)
	{
		((DatasmithLightActorElement_eventSetUseIes_Parms*)Obj)->bUseIes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDatasmithLightActorElement_SetUseIes_Statics::NewProp_bUseIes = { "bUseIes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DatasmithLightActorElement_eventSetUseIes_Parms), &Z_Construct_UFunction_UDatasmithLightActorElement_SetUseIes_Statics::NewProp_bUseIes_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithLightActorElement_SetUseIes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithLightActorElement_SetUseIes_Statics::NewProp_bUseIes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithLightActorElement_SetUseIes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Get if this light is controlled by Ies definition file */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get if this light is controlled by Ies definition file" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithLightActorElement_SetUseIes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithLightActorElement, nullptr, "SetUseIes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithLightActorElement_SetUseIes_Statics::DatasmithLightActorElement_eventSetUseIes_Parms), Z_Construct_UFunction_UDatasmithLightActorElement_SetUseIes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithLightActorElement_SetUseIes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithLightActorElement_SetUseIes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithLightActorElement_SetUseIes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithLightActorElement_SetUseIes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithLightActorElement_SetUseIes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithLightActorElement_SetUseIesBrightness_Statics
	{
		struct DatasmithLightActorElement_eventSetUseIesBrightness_Parms
		{
			bool bUseIesBrightness;
		};
		static void NewProp_bUseIesBrightness_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseIesBrightness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDatasmithLightActorElement_SetUseIesBrightness_Statics::NewProp_bUseIesBrightness_SetBit(void* Obj)
	{
		((DatasmithLightActorElement_eventSetUseIesBrightness_Parms*)Obj)->bUseIesBrightness = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDatasmithLightActorElement_SetUseIesBrightness_Statics::NewProp_bUseIesBrightness = { "bUseIesBrightness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DatasmithLightActorElement_eventSetUseIesBrightness_Parms), &Z_Construct_UFunction_UDatasmithLightActorElement_SetUseIesBrightness_Statics::NewProp_bUseIesBrightness_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithLightActorElement_SetUseIesBrightness_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithLightActorElement_SetUseIesBrightness_Statics::NewProp_bUseIesBrightness,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithLightActorElement_SetUseIesBrightness_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Set if the emissive amount of the ies is controlled by the brightness scale */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Set if the emissive amount of the ies is controlled by the brightness scale" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithLightActorElement_SetUseIesBrightness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithLightActorElement, nullptr, "SetUseIesBrightness", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithLightActorElement_SetUseIesBrightness_Statics::DatasmithLightActorElement_eventSetUseIesBrightness_Parms), Z_Construct_UFunction_UDatasmithLightActorElement_SetUseIesBrightness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithLightActorElement_SetUseIesBrightness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithLightActorElement_SetUseIesBrightness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithLightActorElement_SetUseIesBrightness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithLightActorElement_SetUseIesBrightness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithLightActorElement_SetUseIesBrightness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithLightActorElement_SetUseTemperature_Statics
	{
		struct DatasmithLightActorElement_eventSetUseTemperature_Parms
		{
			bool bUseTemperature;
		};
		static void NewProp_bUseTemperature_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseTemperature;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDatasmithLightActorElement_SetUseTemperature_Statics::NewProp_bUseTemperature_SetBit(void* Obj)
	{
		((DatasmithLightActorElement_eventSetUseTemperature_Parms*)Obj)->bUseTemperature = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDatasmithLightActorElement_SetUseTemperature_Statics::NewProp_bUseTemperature = { "bUseTemperature", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DatasmithLightActorElement_eventSetUseTemperature_Parms), &Z_Construct_UFunction_UDatasmithLightActorElement_SetUseTemperature_Statics::NewProp_bUseTemperature_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithLightActorElement_SetUseTemperature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithLightActorElement_SetUseTemperature_Statics::NewProp_bUseTemperature,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithLightActorElement_SetUseTemperature_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Set if the light color is controlled by temperature */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Set if the light color is controlled by temperature" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithLightActorElement_SetUseTemperature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithLightActorElement, nullptr, "SetUseTemperature", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithLightActorElement_SetUseTemperature_Statics::DatasmithLightActorElement_eventSetUseTemperature_Parms), Z_Construct_UFunction_UDatasmithLightActorElement_SetUseTemperature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithLightActorElement_SetUseTemperature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithLightActorElement_SetUseTemperature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithLightActorElement_SetUseTemperature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithLightActorElement_SetUseTemperature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithLightActorElement_SetUseTemperature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithLightActorElement);
	UClass* Z_Construct_UClass_UDatasmithLightActorElement_NoRegister()
	{
		return UDatasmithLightActorElement::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithLightActorElement_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithLightActorElement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithActorElement,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithImporter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDatasmithLightActorElement_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDatasmithLightActorElement_GetColor, "GetColor" }, // 3101160333
		{ &Z_Construct_UFunction_UDatasmithLightActorElement_GetIesBrightnessScale, "GetIesBrightnessScale" }, // 2577046579
		{ &Z_Construct_UFunction_UDatasmithLightActorElement_GetIesFile, "GetIesFile" }, // 2094044040
		{ &Z_Construct_UFunction_UDatasmithLightActorElement_GetIntensity, "GetIntensity" }, // 3430750040
		{ &Z_Construct_UFunction_UDatasmithLightActorElement_GetTemperature, "GetTemperature" }, // 2719806816
		{ &Z_Construct_UFunction_UDatasmithLightActorElement_GetUseIes, "GetUseIes" }, // 976629347
		{ &Z_Construct_UFunction_UDatasmithLightActorElement_GetUseIesBrightness, "GetUseIesBrightness" }, // 3144161973
		{ &Z_Construct_UFunction_UDatasmithLightActorElement_GetUseTemperature, "GetUseTemperature" }, // 610747939
		{ &Z_Construct_UFunction_UDatasmithLightActorElement_IsEnabled, "IsEnabled" }, // 4257702492
		{ &Z_Construct_UFunction_UDatasmithLightActorElement_SetColor, "SetColor" }, // 2340117977
		{ &Z_Construct_UFunction_UDatasmithLightActorElement_SetEnabled, "SetEnabled" }, // 3835352711
		{ &Z_Construct_UFunction_UDatasmithLightActorElement_SetIesBrightnessScale, "SetIesBrightnessScale" }, // 2564453759
		{ &Z_Construct_UFunction_UDatasmithLightActorElement_SetIesFile, "SetIesFile" }, // 3784499863
		{ &Z_Construct_UFunction_UDatasmithLightActorElement_SetIntensity, "SetIntensity" }, // 1209365479
		{ &Z_Construct_UFunction_UDatasmithLightActorElement_SetTemperature, "SetTemperature" }, // 3182006248
		{ &Z_Construct_UFunction_UDatasmithLightActorElement_SetUseIes, "SetUseIes" }, // 1309600794
		{ &Z_Construct_UFunction_UDatasmithLightActorElement_SetUseIesBrightness, "SetUseIesBrightness" }, // 1425499794
		{ &Z_Construct_UFunction_UDatasmithLightActorElement_SetUseTemperature, "SetUseTemperature" }, // 2600745234
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithLightActorElement_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * UDatasmithLightActorElement\n */" },
		{ "IncludePath", "ObjectElements/DatasmithUObjectElements.h" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "* UDatasmithLightActorElement" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithLightActorElement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithLightActorElement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithLightActorElement_Statics::ClassParams = {
		&UDatasmithLightActorElement::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithLightActorElement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithLightActorElement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithLightActorElement()
	{
		if (!Z_Registration_Info_UClass_UDatasmithLightActorElement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithLightActorElement.OuterSingleton, Z_Construct_UClass_UDatasmithLightActorElement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithLightActorElement.OuterSingleton;
	}
	template<> DATASMITHIMPORTER_API UClass* StaticClass<UDatasmithLightActorElement>()
	{
		return UDatasmithLightActorElement::StaticClass();
	}
	UDatasmithLightActorElement::UDatasmithLightActorElement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithLightActorElement);
	UDatasmithLightActorElement::~UDatasmithLightActorElement() {}
	DEFINE_FUNCTION(UDatasmithCameraActorElement::execSetLookAtAllowRoll)
	{
		P_GET_UBOOL(Z_Param_bAllow);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLookAtAllowRoll(Z_Param_bAllow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithCameraActorElement::execGetLookAtAllowRoll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetLookAtAllowRoll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithCameraActorElement::execSetLookAtActor)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ActorPathName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLookAtActor(Z_Param_ActorPathName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithCameraActorElement::execGetLookAtActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetLookAtActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithCameraActorElement::execGetPostProcess)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDatasmithPostProcessElement**)Z_Param__Result=P_THIS->GetPostProcess();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithCameraActorElement::execSetFocalLength)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_FocalLength);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFocalLength(Z_Param_FocalLength);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithCameraActorElement::execGetFocalLength)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFocalLength();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithCameraActorElement::execSetFStop)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_FStop);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFStop(Z_Param_FStop);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithCameraActorElement::execGetFStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFStop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithCameraActorElement::execSetFocusDistance)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_FocusDistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFocusDistance(Z_Param_FocusDistance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithCameraActorElement::execGetFocusDistance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFocusDistance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithCameraActorElement::execSetSensorAspectRatio)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_SensorAspectRatio);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSensorAspectRatio(Z_Param_SensorAspectRatio);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithCameraActorElement::execGetSensorAspectRatio)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSensorAspectRatio();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithCameraActorElement::execSetSensorWidth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_SensorWidth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSensorWidth(Z_Param_SensorWidth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithCameraActorElement::execGetSensorWidth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSensorWidth();
		P_NATIVE_END;
	}
	void UDatasmithCameraActorElement::StaticRegisterNativesUDatasmithCameraActorElement()
	{
		UClass* Class = UDatasmithCameraActorElement::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFocalLength", &UDatasmithCameraActorElement::execGetFocalLength },
			{ "GetFocusDistance", &UDatasmithCameraActorElement::execGetFocusDistance },
			{ "GetFStop", &UDatasmithCameraActorElement::execGetFStop },
			{ "GetLookAtActor", &UDatasmithCameraActorElement::execGetLookAtActor },
			{ "GetLookAtAllowRoll", &UDatasmithCameraActorElement::execGetLookAtAllowRoll },
			{ "GetPostProcess", &UDatasmithCameraActorElement::execGetPostProcess },
			{ "GetSensorAspectRatio", &UDatasmithCameraActorElement::execGetSensorAspectRatio },
			{ "GetSensorWidth", &UDatasmithCameraActorElement::execGetSensorWidth },
			{ "SetFocalLength", &UDatasmithCameraActorElement::execSetFocalLength },
			{ "SetFocusDistance", &UDatasmithCameraActorElement::execSetFocusDistance },
			{ "SetFStop", &UDatasmithCameraActorElement::execSetFStop },
			{ "SetLookAtActor", &UDatasmithCameraActorElement::execSetLookAtActor },
			{ "SetLookAtAllowRoll", &UDatasmithCameraActorElement::execSetLookAtAllowRoll },
			{ "SetSensorAspectRatio", &UDatasmithCameraActorElement::execSetSensorAspectRatio },
			{ "SetSensorWidth", &UDatasmithCameraActorElement::execSetSensorWidth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDatasmithCameraActorElement_GetFocalLength_Statics
	{
		struct DatasmithCameraActorElement_eventGetFocalLength_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDatasmithCameraActorElement_GetFocalLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithCameraActorElement_eventGetFocalLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithCameraActorElement_GetFocalLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithCameraActorElement_GetFocalLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithCameraActorElement_GetFocalLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Get camera focal length in millimeters */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get camera focal length in millimeters" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithCameraActorElement_GetFocalLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithCameraActorElement, nullptr, "GetFocalLength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithCameraActorElement_GetFocalLength_Statics::DatasmithCameraActorElement_eventGetFocalLength_Parms), Z_Construct_UFunction_UDatasmithCameraActorElement_GetFocalLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithCameraActorElement_GetFocalLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithCameraActorElement_GetFocalLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithCameraActorElement_GetFocalLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithCameraActorElement_GetFocalLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithCameraActorElement_GetFocalLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithCameraActorElement_GetFocusDistance_Statics
	{
		struct DatasmithCameraActorElement_eventGetFocusDistance_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDatasmithCameraActorElement_GetFocusDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithCameraActorElement_eventGetFocusDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithCameraActorElement_GetFocusDistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithCameraActorElement_GetFocusDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithCameraActorElement_GetFocusDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Get camera focus distance in centimeters */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get camera focus distance in centimeters" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithCameraActorElement_GetFocusDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithCameraActorElement, nullptr, "GetFocusDistance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithCameraActorElement_GetFocusDistance_Statics::DatasmithCameraActorElement_eventGetFocusDistance_Parms), Z_Construct_UFunction_UDatasmithCameraActorElement_GetFocusDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithCameraActorElement_GetFocusDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithCameraActorElement_GetFocusDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithCameraActorElement_GetFocusDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithCameraActorElement_GetFocusDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithCameraActorElement_GetFocusDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithCameraActorElement_GetFStop_Statics
	{
		struct DatasmithCameraActorElement_eventGetFStop_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDatasmithCameraActorElement_GetFStop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithCameraActorElement_eventGetFStop_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithCameraActorElement_GetFStop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithCameraActorElement_GetFStop_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithCameraActorElement_GetFStop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Get camera FStop also known as FNumber */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get camera FStop also known as FNumber" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithCameraActorElement_GetFStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithCameraActorElement, nullptr, "GetFStop", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithCameraActorElement_GetFStop_Statics::DatasmithCameraActorElement_eventGetFStop_Parms), Z_Construct_UFunction_UDatasmithCameraActorElement_GetFStop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithCameraActorElement_GetFStop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithCameraActorElement_GetFStop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithCameraActorElement_GetFStop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithCameraActorElement_GetFStop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithCameraActorElement_GetFStop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithCameraActorElement_GetLookAtActor_Statics
	{
		struct DatasmithCameraActorElement_eventGetLookAtActor_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithCameraActorElement_GetLookAtActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithCameraActorElement_eventGetLookAtActor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithCameraActorElement_GetLookAtActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithCameraActorElement_GetLookAtActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithCameraActorElement_GetLookAtActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Get camera look at actor name */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get camera look at actor name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithCameraActorElement_GetLookAtActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithCameraActorElement, nullptr, "GetLookAtActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithCameraActorElement_GetLookAtActor_Statics::DatasmithCameraActorElement_eventGetLookAtActor_Parms), Z_Construct_UFunction_UDatasmithCameraActorElement_GetLookAtActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithCameraActorElement_GetLookAtActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithCameraActorElement_GetLookAtActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithCameraActorElement_GetLookAtActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithCameraActorElement_GetLookAtActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithCameraActorElement_GetLookAtActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithCameraActorElement_GetLookAtAllowRoll_Statics
	{
		struct DatasmithCameraActorElement_eventGetLookAtAllowRoll_Parms
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
	void Z_Construct_UFunction_UDatasmithCameraActorElement_GetLookAtAllowRoll_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DatasmithCameraActorElement_eventGetLookAtAllowRoll_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDatasmithCameraActorElement_GetLookAtAllowRoll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DatasmithCameraActorElement_eventGetLookAtAllowRoll_Parms), &Z_Construct_UFunction_UDatasmithCameraActorElement_GetLookAtAllowRoll_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithCameraActorElement_GetLookAtAllowRoll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithCameraActorElement_GetLookAtAllowRoll_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithCameraActorElement_GetLookAtAllowRoll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Get camera look at allow roll state */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get camera look at allow roll state" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithCameraActorElement_GetLookAtAllowRoll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithCameraActorElement, nullptr, "GetLookAtAllowRoll", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithCameraActorElement_GetLookAtAllowRoll_Statics::DatasmithCameraActorElement_eventGetLookAtAllowRoll_Parms), Z_Construct_UFunction_UDatasmithCameraActorElement_GetLookAtAllowRoll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithCameraActorElement_GetLookAtAllowRoll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithCameraActorElement_GetLookAtAllowRoll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithCameraActorElement_GetLookAtAllowRoll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithCameraActorElement_GetLookAtAllowRoll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithCameraActorElement_GetLookAtAllowRoll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithCameraActorElement_GetPostProcess_Statics
	{
		struct DatasmithCameraActorElement_eventGetPostProcess_Parms
		{
			UDatasmithPostProcessElement* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithCameraActorElement_GetPostProcess_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithCameraActorElement_eventGetPostProcess_Parms, ReturnValue), Z_Construct_UClass_UDatasmithPostProcessElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithCameraActorElement_GetPostProcess_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithCameraActorElement_GetPostProcess_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithCameraActorElement_GetPostProcess_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Get camera's postprocess */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get camera's postprocess" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithCameraActorElement_GetPostProcess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithCameraActorElement, nullptr, "GetPostProcess", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithCameraActorElement_GetPostProcess_Statics::DatasmithCameraActorElement_eventGetPostProcess_Parms), Z_Construct_UFunction_UDatasmithCameraActorElement_GetPostProcess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithCameraActorElement_GetPostProcess_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithCameraActorElement_GetPostProcess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithCameraActorElement_GetPostProcess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithCameraActorElement_GetPostProcess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithCameraActorElement_GetPostProcess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithCameraActorElement_GetSensorAspectRatio_Statics
	{
		struct DatasmithCameraActorElement_eventGetSensorAspectRatio_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDatasmithCameraActorElement_GetSensorAspectRatio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithCameraActorElement_eventGetSensorAspectRatio_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithCameraActorElement_GetSensorAspectRatio_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithCameraActorElement_GetSensorAspectRatio_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithCameraActorElement_GetSensorAspectRatio_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Get framebuffer aspect ratio (width/height) */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get framebuffer aspect ratio (width/height)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithCameraActorElement_GetSensorAspectRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithCameraActorElement, nullptr, "GetSensorAspectRatio", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithCameraActorElement_GetSensorAspectRatio_Statics::DatasmithCameraActorElement_eventGetSensorAspectRatio_Parms), Z_Construct_UFunction_UDatasmithCameraActorElement_GetSensorAspectRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithCameraActorElement_GetSensorAspectRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithCameraActorElement_GetSensorAspectRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithCameraActorElement_GetSensorAspectRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithCameraActorElement_GetSensorAspectRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithCameraActorElement_GetSensorAspectRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithCameraActorElement_GetSensorWidth_Statics
	{
		struct DatasmithCameraActorElement_eventGetSensorWidth_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDatasmithCameraActorElement_GetSensorWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithCameraActorElement_eventGetSensorWidth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithCameraActorElement_GetSensorWidth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithCameraActorElement_GetSensorWidth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithCameraActorElement_GetSensorWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Get camera sensor width in millimeters */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get camera sensor width in millimeters" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithCameraActorElement_GetSensorWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithCameraActorElement, nullptr, "GetSensorWidth", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithCameraActorElement_GetSensorWidth_Statics::DatasmithCameraActorElement_eventGetSensorWidth_Parms), Z_Construct_UFunction_UDatasmithCameraActorElement_GetSensorWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithCameraActorElement_GetSensorWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithCameraActorElement_GetSensorWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithCameraActorElement_GetSensorWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithCameraActorElement_GetSensorWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithCameraActorElement_GetSensorWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithCameraActorElement_SetFocalLength_Statics
	{
		struct DatasmithCameraActorElement_eventSetFocalLength_Parms
		{
			float FocalLength;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FocalLength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDatasmithCameraActorElement_SetFocalLength_Statics::NewProp_FocalLength = { "FocalLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithCameraActorElement_eventSetFocalLength_Parms, FocalLength), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithCameraActorElement_SetFocalLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithCameraActorElement_SetFocalLength_Statics::NewProp_FocalLength,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithCameraActorElement_SetFocalLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Set camera focal length in millimeters */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Set camera focal length in millimeters" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithCameraActorElement_SetFocalLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithCameraActorElement, nullptr, "SetFocalLength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithCameraActorElement_SetFocalLength_Statics::DatasmithCameraActorElement_eventSetFocalLength_Parms), Z_Construct_UFunction_UDatasmithCameraActorElement_SetFocalLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithCameraActorElement_SetFocalLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithCameraActorElement_SetFocalLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithCameraActorElement_SetFocalLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithCameraActorElement_SetFocalLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithCameraActorElement_SetFocalLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithCameraActorElement_SetFocusDistance_Statics
	{
		struct DatasmithCameraActorElement_eventSetFocusDistance_Parms
		{
			float FocusDistance;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FocusDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDatasmithCameraActorElement_SetFocusDistance_Statics::NewProp_FocusDistance = { "FocusDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithCameraActorElement_eventSetFocusDistance_Parms, FocusDistance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithCameraActorElement_SetFocusDistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithCameraActorElement_SetFocusDistance_Statics::NewProp_FocusDistance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithCameraActorElement_SetFocusDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Set camera focus distance in centimeters */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Set camera focus distance in centimeters" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithCameraActorElement_SetFocusDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithCameraActorElement, nullptr, "SetFocusDistance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithCameraActorElement_SetFocusDistance_Statics::DatasmithCameraActorElement_eventSetFocusDistance_Parms), Z_Construct_UFunction_UDatasmithCameraActorElement_SetFocusDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithCameraActorElement_SetFocusDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithCameraActorElement_SetFocusDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithCameraActorElement_SetFocusDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithCameraActorElement_SetFocusDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithCameraActorElement_SetFocusDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithCameraActorElement_SetFStop_Statics
	{
		struct DatasmithCameraActorElement_eventSetFStop_Parms
		{
			float FStop;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FStop;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDatasmithCameraActorElement_SetFStop_Statics::NewProp_FStop = { "FStop", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithCameraActorElement_eventSetFStop_Parms, FStop), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithCameraActorElement_SetFStop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithCameraActorElement_SetFStop_Statics::NewProp_FStop,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithCameraActorElement_SetFStop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Set camera FStop also known as FNumber */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Set camera FStop also known as FNumber" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithCameraActorElement_SetFStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithCameraActorElement, nullptr, "SetFStop", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithCameraActorElement_SetFStop_Statics::DatasmithCameraActorElement_eventSetFStop_Parms), Z_Construct_UFunction_UDatasmithCameraActorElement_SetFStop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithCameraActorElement_SetFStop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithCameraActorElement_SetFStop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithCameraActorElement_SetFStop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithCameraActorElement_SetFStop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithCameraActorElement_SetFStop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithCameraActorElement_SetLookAtActor_Statics
	{
		struct DatasmithCameraActorElement_eventSetLookAtActor_Parms
		{
			FString ActorPathName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorPathName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ActorPathName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithCameraActorElement_SetLookAtActor_Statics::NewProp_ActorPathName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithCameraActorElement_SetLookAtActor_Statics::NewProp_ActorPathName = { "ActorPathName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithCameraActorElement_eventSetLookAtActor_Parms, ActorPathName), METADATA_PARAMS(Z_Construct_UFunction_UDatasmithCameraActorElement_SetLookAtActor_Statics::NewProp_ActorPathName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithCameraActorElement_SetLookAtActor_Statics::NewProp_ActorPathName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithCameraActorElement_SetLookAtActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithCameraActorElement_SetLookAtActor_Statics::NewProp_ActorPathName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithCameraActorElement_SetLookAtActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Set camera look at actor name */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Set camera look at actor name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithCameraActorElement_SetLookAtActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithCameraActorElement, nullptr, "SetLookAtActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithCameraActorElement_SetLookAtActor_Statics::DatasmithCameraActorElement_eventSetLookAtActor_Parms), Z_Construct_UFunction_UDatasmithCameraActorElement_SetLookAtActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithCameraActorElement_SetLookAtActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithCameraActorElement_SetLookAtActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithCameraActorElement_SetLookAtActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithCameraActorElement_SetLookAtActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithCameraActorElement_SetLookAtActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithCameraActorElement_SetLookAtAllowRoll_Statics
	{
		struct DatasmithCameraActorElement_eventSetLookAtAllowRoll_Parms
		{
			bool bAllow;
		};
		static void NewProp_bAllow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllow;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDatasmithCameraActorElement_SetLookAtAllowRoll_Statics::NewProp_bAllow_SetBit(void* Obj)
	{
		((DatasmithCameraActorElement_eventSetLookAtAllowRoll_Parms*)Obj)->bAllow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDatasmithCameraActorElement_SetLookAtAllowRoll_Statics::NewProp_bAllow = { "bAllow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DatasmithCameraActorElement_eventSetLookAtAllowRoll_Parms), &Z_Construct_UFunction_UDatasmithCameraActorElement_SetLookAtAllowRoll_Statics::NewProp_bAllow_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithCameraActorElement_SetLookAtAllowRoll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithCameraActorElement_SetLookAtAllowRoll_Statics::NewProp_bAllow,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithCameraActorElement_SetLookAtAllowRoll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Set camera look at allow roll state */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Set camera look at allow roll state" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithCameraActorElement_SetLookAtAllowRoll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithCameraActorElement, nullptr, "SetLookAtAllowRoll", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithCameraActorElement_SetLookAtAllowRoll_Statics::DatasmithCameraActorElement_eventSetLookAtAllowRoll_Parms), Z_Construct_UFunction_UDatasmithCameraActorElement_SetLookAtAllowRoll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithCameraActorElement_SetLookAtAllowRoll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithCameraActorElement_SetLookAtAllowRoll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithCameraActorElement_SetLookAtAllowRoll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithCameraActorElement_SetLookAtAllowRoll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithCameraActorElement_SetLookAtAllowRoll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithCameraActorElement_SetSensorAspectRatio_Statics
	{
		struct DatasmithCameraActorElement_eventSetSensorAspectRatio_Parms
		{
			float SensorAspectRatio;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SensorAspectRatio;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDatasmithCameraActorElement_SetSensorAspectRatio_Statics::NewProp_SensorAspectRatio = { "SensorAspectRatio", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithCameraActorElement_eventSetSensorAspectRatio_Parms, SensorAspectRatio), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithCameraActorElement_SetSensorAspectRatio_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithCameraActorElement_SetSensorAspectRatio_Statics::NewProp_SensorAspectRatio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithCameraActorElement_SetSensorAspectRatio_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Set framebuffer aspect ratio (width/height) */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Set framebuffer aspect ratio (width/height)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithCameraActorElement_SetSensorAspectRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithCameraActorElement, nullptr, "SetSensorAspectRatio", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithCameraActorElement_SetSensorAspectRatio_Statics::DatasmithCameraActorElement_eventSetSensorAspectRatio_Parms), Z_Construct_UFunction_UDatasmithCameraActorElement_SetSensorAspectRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithCameraActorElement_SetSensorAspectRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithCameraActorElement_SetSensorAspectRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithCameraActorElement_SetSensorAspectRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithCameraActorElement_SetSensorAspectRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithCameraActorElement_SetSensorAspectRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithCameraActorElement_SetSensorWidth_Statics
	{
		struct DatasmithCameraActorElement_eventSetSensorWidth_Parms
		{
			float SensorWidth;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SensorWidth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDatasmithCameraActorElement_SetSensorWidth_Statics::NewProp_SensorWidth = { "SensorWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithCameraActorElement_eventSetSensorWidth_Parms, SensorWidth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithCameraActorElement_SetSensorWidth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithCameraActorElement_SetSensorWidth_Statics::NewProp_SensorWidth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithCameraActorElement_SetSensorWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Set camera sensor width in millimeters */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Set camera sensor width in millimeters" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithCameraActorElement_SetSensorWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithCameraActorElement, nullptr, "SetSensorWidth", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithCameraActorElement_SetSensorWidth_Statics::DatasmithCameraActorElement_eventSetSensorWidth_Parms), Z_Construct_UFunction_UDatasmithCameraActorElement_SetSensorWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithCameraActorElement_SetSensorWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithCameraActorElement_SetSensorWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithCameraActorElement_SetSensorWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithCameraActorElement_SetSensorWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithCameraActorElement_SetSensorWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithCameraActorElement);
	UClass* Z_Construct_UClass_UDatasmithCameraActorElement_NoRegister()
	{
		return UDatasmithCameraActorElement::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithCameraActorElement_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithCameraActorElement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithActorElement,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithImporter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDatasmithCameraActorElement_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDatasmithCameraActorElement_GetFocalLength, "GetFocalLength" }, // 2098169409
		{ &Z_Construct_UFunction_UDatasmithCameraActorElement_GetFocusDistance, "GetFocusDistance" }, // 2586511187
		{ &Z_Construct_UFunction_UDatasmithCameraActorElement_GetFStop, "GetFStop" }, // 378052165
		{ &Z_Construct_UFunction_UDatasmithCameraActorElement_GetLookAtActor, "GetLookAtActor" }, // 854211991
		{ &Z_Construct_UFunction_UDatasmithCameraActorElement_GetLookAtAllowRoll, "GetLookAtAllowRoll" }, // 2595869305
		{ &Z_Construct_UFunction_UDatasmithCameraActorElement_GetPostProcess, "GetPostProcess" }, // 123488791
		{ &Z_Construct_UFunction_UDatasmithCameraActorElement_GetSensorAspectRatio, "GetSensorAspectRatio" }, // 2538672405
		{ &Z_Construct_UFunction_UDatasmithCameraActorElement_GetSensorWidth, "GetSensorWidth" }, // 161710066
		{ &Z_Construct_UFunction_UDatasmithCameraActorElement_SetFocalLength, "SetFocalLength" }, // 2378421666
		{ &Z_Construct_UFunction_UDatasmithCameraActorElement_SetFocusDistance, "SetFocusDistance" }, // 4049857108
		{ &Z_Construct_UFunction_UDatasmithCameraActorElement_SetFStop, "SetFStop" }, // 769762914
		{ &Z_Construct_UFunction_UDatasmithCameraActorElement_SetLookAtActor, "SetLookAtActor" }, // 133643713
		{ &Z_Construct_UFunction_UDatasmithCameraActorElement_SetLookAtAllowRoll, "SetLookAtAllowRoll" }, // 2297563529
		{ &Z_Construct_UFunction_UDatasmithCameraActorElement_SetSensorAspectRatio, "SetSensorAspectRatio" }, // 3074922353
		{ &Z_Construct_UFunction_UDatasmithCameraActorElement_SetSensorWidth, "SetSensorWidth" }, // 2706388688
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithCameraActorElement_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * UDatasmithCameraActorElement\n */" },
		{ "IncludePath", "ObjectElements/DatasmithUObjectElements.h" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "* UDatasmithCameraActorElement" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithCameraActorElement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithCameraActorElement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithCameraActorElement_Statics::ClassParams = {
		&UDatasmithCameraActorElement::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithCameraActorElement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithCameraActorElement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithCameraActorElement()
	{
		if (!Z_Registration_Info_UClass_UDatasmithCameraActorElement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithCameraActorElement.OuterSingleton, Z_Construct_UClass_UDatasmithCameraActorElement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithCameraActorElement.OuterSingleton;
	}
	template<> DATASMITHIMPORTER_API UClass* StaticClass<UDatasmithCameraActorElement>()
	{
		return UDatasmithCameraActorElement::StaticClass();
	}
	UDatasmithCameraActorElement::UDatasmithCameraActorElement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithCameraActorElement);
	UDatasmithCameraActorElement::~UDatasmithCameraActorElement() {}
	DEFINE_FUNCTION(UDatasmithCustomActorElement::execRemoveProperty)
	{
		P_GET_OBJECT(UDatasmithKeyValueProperty,Z_Param_Property);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveProperty(Z_Param_Property);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithCustomActorElement::execAddProperty)
	{
		P_GET_OBJECT(UDatasmithKeyValueProperty,Z_Param_Property);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddProperty(Z_Param_Property);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithCustomActorElement::execGetPropertyByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDatasmithKeyValueProperty**)Z_Param__Result=P_THIS->GetPropertyByName(Z_Param_InName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithCustomActorElement::execGetProperty)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_i);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDatasmithKeyValueProperty**)Z_Param__Result=P_THIS->GetProperty(Z_Param_i);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithCustomActorElement::execGetPropertiesCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPropertiesCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithCustomActorElement::execSetClassOrPathName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InPathName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetClassOrPathName(Z_Param_InPathName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithCustomActorElement::execGetClassOrPathName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetClassOrPathName();
		P_NATIVE_END;
	}
	void UDatasmithCustomActorElement::StaticRegisterNativesUDatasmithCustomActorElement()
	{
		UClass* Class = UDatasmithCustomActorElement::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddProperty", &UDatasmithCustomActorElement::execAddProperty },
			{ "GetClassOrPathName", &UDatasmithCustomActorElement::execGetClassOrPathName },
			{ "GetPropertiesCount", &UDatasmithCustomActorElement::execGetPropertiesCount },
			{ "GetProperty", &UDatasmithCustomActorElement::execGetProperty },
			{ "GetPropertyByName", &UDatasmithCustomActorElement::execGetPropertyByName },
			{ "RemoveProperty", &UDatasmithCustomActorElement::execRemoveProperty },
			{ "SetClassOrPathName", &UDatasmithCustomActorElement::execSetClassOrPathName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDatasmithCustomActorElement_AddProperty_Statics
	{
		struct DatasmithCustomActorElement_eventAddProperty_Parms
		{
			UDatasmithKeyValueProperty* Property;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Property;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithCustomActorElement_AddProperty_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithCustomActorElement_eventAddProperty_Parms, Property), Z_Construct_UClass_UDatasmithKeyValueProperty_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithCustomActorElement_AddProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithCustomActorElement_AddProperty_Statics::NewProp_Property,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithCustomActorElement_AddProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Add a property to this blueprint actor*/" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Add a property to this blueprint actor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithCustomActorElement_AddProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithCustomActorElement, nullptr, "AddProperty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithCustomActorElement_AddProperty_Statics::DatasmithCustomActorElement_eventAddProperty_Parms), Z_Construct_UFunction_UDatasmithCustomActorElement_AddProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithCustomActorElement_AddProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithCustomActorElement_AddProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithCustomActorElement_AddProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithCustomActorElement_AddProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithCustomActorElement_AddProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithCustomActorElement_GetClassOrPathName_Statics
	{
		struct DatasmithCustomActorElement_eventGetClassOrPathName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithCustomActorElement_GetClassOrPathName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithCustomActorElement_eventGetClassOrPathName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithCustomActorElement_GetClassOrPathName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithCustomActorElement_GetClassOrPathName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithCustomActorElement_GetClassOrPathName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** The blueprint to instantiate. */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "The blueprint to instantiate." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithCustomActorElement_GetClassOrPathName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithCustomActorElement, nullptr, "GetClassOrPathName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithCustomActorElement_GetClassOrPathName_Statics::DatasmithCustomActorElement_eventGetClassOrPathName_Parms), Z_Construct_UFunction_UDatasmithCustomActorElement_GetClassOrPathName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithCustomActorElement_GetClassOrPathName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithCustomActorElement_GetClassOrPathName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithCustomActorElement_GetClassOrPathName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithCustomActorElement_GetClassOrPathName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithCustomActorElement_GetClassOrPathName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithCustomActorElement_GetPropertiesCount_Statics
	{
		struct DatasmithCustomActorElement_eventGetPropertiesCount_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDatasmithCustomActorElement_GetPropertiesCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithCustomActorElement_eventGetPropertiesCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithCustomActorElement_GetPropertiesCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithCustomActorElement_GetPropertiesCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithCustomActorElement_GetPropertiesCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Get the total amount of properties in this blueprint actor */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get the total amount of properties in this blueprint actor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithCustomActorElement_GetPropertiesCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithCustomActorElement, nullptr, "GetPropertiesCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithCustomActorElement_GetPropertiesCount_Statics::DatasmithCustomActorElement_eventGetPropertiesCount_Parms), Z_Construct_UFunction_UDatasmithCustomActorElement_GetPropertiesCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithCustomActorElement_GetPropertiesCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithCustomActorElement_GetPropertiesCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithCustomActorElement_GetPropertiesCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithCustomActorElement_GetPropertiesCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithCustomActorElement_GetPropertiesCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithCustomActorElement_GetProperty_Statics
	{
		struct DatasmithCustomActorElement_eventGetProperty_Parms
		{
			int32 i;
			UDatasmithKeyValueProperty* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_i;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDatasmithCustomActorElement_GetProperty_Statics::NewProp_i = { "i", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithCustomActorElement_eventGetProperty_Parms, i), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithCustomActorElement_GetProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithCustomActorElement_eventGetProperty_Parms, ReturnValue), Z_Construct_UClass_UDatasmithKeyValueProperty_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithCustomActorElement_GetProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithCustomActorElement_GetProperty_Statics::NewProp_i,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithCustomActorElement_GetProperty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithCustomActorElement_GetProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Get the property i-th of this blueprint actor */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get the property i-th of this blueprint actor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithCustomActorElement_GetProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithCustomActorElement, nullptr, "GetProperty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithCustomActorElement_GetProperty_Statics::DatasmithCustomActorElement_eventGetProperty_Parms), Z_Construct_UFunction_UDatasmithCustomActorElement_GetProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithCustomActorElement_GetProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithCustomActorElement_GetProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithCustomActorElement_GetProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithCustomActorElement_GetProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithCustomActorElement_GetProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithCustomActorElement_GetPropertyByName_Statics
	{
		struct DatasmithCustomActorElement_eventGetPropertyByName_Parms
		{
			FString InName;
			UDatasmithKeyValueProperty* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithCustomActorElement_GetPropertyByName_Statics::NewProp_InName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithCustomActorElement_GetPropertyByName_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithCustomActorElement_eventGetPropertyByName_Parms, InName), METADATA_PARAMS(Z_Construct_UFunction_UDatasmithCustomActorElement_GetPropertyByName_Statics::NewProp_InName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithCustomActorElement_GetPropertyByName_Statics::NewProp_InName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithCustomActorElement_GetPropertyByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithCustomActorElement_eventGetPropertyByName_Parms, ReturnValue), Z_Construct_UClass_UDatasmithKeyValueProperty_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithCustomActorElement_GetPropertyByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithCustomActorElement_GetPropertyByName_Statics::NewProp_InName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithCustomActorElement_GetPropertyByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithCustomActorElement_GetPropertyByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Get a property by its name if it exists */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get a property by its name if it exists" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithCustomActorElement_GetPropertyByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithCustomActorElement, nullptr, "GetPropertyByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithCustomActorElement_GetPropertyByName_Statics::DatasmithCustomActorElement_eventGetPropertyByName_Parms), Z_Construct_UFunction_UDatasmithCustomActorElement_GetPropertyByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithCustomActorElement_GetPropertyByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithCustomActorElement_GetPropertyByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithCustomActorElement_GetPropertyByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithCustomActorElement_GetPropertyByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithCustomActorElement_GetPropertyByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithCustomActorElement_RemoveProperty_Statics
	{
		struct DatasmithCustomActorElement_eventRemoveProperty_Parms
		{
			UDatasmithKeyValueProperty* Property;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Property;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithCustomActorElement_RemoveProperty_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithCustomActorElement_eventRemoveProperty_Parms, Property), Z_Construct_UClass_UDatasmithKeyValueProperty_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithCustomActorElement_RemoveProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithCustomActorElement_RemoveProperty_Statics::NewProp_Property,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithCustomActorElement_RemoveProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Removes a property from this blueprint actor, doesn't preserve ordering */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Removes a property from this blueprint actor, doesn't preserve ordering" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithCustomActorElement_RemoveProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithCustomActorElement, nullptr, "RemoveProperty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithCustomActorElement_RemoveProperty_Statics::DatasmithCustomActorElement_eventRemoveProperty_Parms), Z_Construct_UFunction_UDatasmithCustomActorElement_RemoveProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithCustomActorElement_RemoveProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithCustomActorElement_RemoveProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithCustomActorElement_RemoveProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithCustomActorElement_RemoveProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithCustomActorElement_RemoveProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithCustomActorElement_SetClassOrPathName_Statics
	{
		struct DatasmithCustomActorElement_eventSetClassOrPathName_Parms
		{
			FString InPathName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPathName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InPathName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithCustomActorElement_SetClassOrPathName_Statics::NewProp_InPathName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithCustomActorElement_SetClassOrPathName_Statics::NewProp_InPathName = { "InPathName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithCustomActorElement_eventSetClassOrPathName_Parms, InPathName), METADATA_PARAMS(Z_Construct_UFunction_UDatasmithCustomActorElement_SetClassOrPathName_Statics::NewProp_InPathName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithCustomActorElement_SetClassOrPathName_Statics::NewProp_InPathName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithCustomActorElement_SetClassOrPathName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithCustomActorElement_SetClassOrPathName_Statics::NewProp_InPathName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithCustomActorElement_SetClassOrPathName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithCustomActorElement_SetClassOrPathName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithCustomActorElement, nullptr, "SetClassOrPathName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithCustomActorElement_SetClassOrPathName_Statics::DatasmithCustomActorElement_eventSetClassOrPathName_Parms), Z_Construct_UFunction_UDatasmithCustomActorElement_SetClassOrPathName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithCustomActorElement_SetClassOrPathName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithCustomActorElement_SetClassOrPathName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithCustomActorElement_SetClassOrPathName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithCustomActorElement_SetClassOrPathName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithCustomActorElement_SetClassOrPathName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithCustomActorElement);
	UClass* Z_Construct_UClass_UDatasmithCustomActorElement_NoRegister()
	{
		return UDatasmithCustomActorElement::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithCustomActorElement_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithCustomActorElement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithActorElement,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithImporter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDatasmithCustomActorElement_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDatasmithCustomActorElement_AddProperty, "AddProperty" }, // 1067797699
		{ &Z_Construct_UFunction_UDatasmithCustomActorElement_GetClassOrPathName, "GetClassOrPathName" }, // 878933450
		{ &Z_Construct_UFunction_UDatasmithCustomActorElement_GetPropertiesCount, "GetPropertiesCount" }, // 1672292748
		{ &Z_Construct_UFunction_UDatasmithCustomActorElement_GetProperty, "GetProperty" }, // 4270257033
		{ &Z_Construct_UFunction_UDatasmithCustomActorElement_GetPropertyByName, "GetPropertyByName" }, // 3077539680
		{ &Z_Construct_UFunction_UDatasmithCustomActorElement_RemoveProperty, "RemoveProperty" }, // 473305267
		{ &Z_Construct_UFunction_UDatasmithCustomActorElement_SetClassOrPathName, "SetClassOrPathName" }, // 2436397236
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithCustomActorElement_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UDatasmithCustomActorElement\n */" },
		{ "IncludePath", "ObjectElements/DatasmithUObjectElements.h" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "UDatasmithCustomActorElement" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithCustomActorElement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithCustomActorElement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithCustomActorElement_Statics::ClassParams = {
		&UDatasmithCustomActorElement::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithCustomActorElement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithCustomActorElement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithCustomActorElement()
	{
		if (!Z_Registration_Info_UClass_UDatasmithCustomActorElement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithCustomActorElement.OuterSingleton, Z_Construct_UClass_UDatasmithCustomActorElement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithCustomActorElement.OuterSingleton;
	}
	template<> DATASMITHIMPORTER_API UClass* StaticClass<UDatasmithCustomActorElement>()
	{
		return UDatasmithCustomActorElement::StaticClass();
	}
	UDatasmithCustomActorElement::UDatasmithCustomActorElement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithCustomActorElement);
	UDatasmithCustomActorElement::~UDatasmithCustomActorElement() {}
	void UDatasmithBaseMaterialElement::StaticRegisterNativesUDatasmithBaseMaterialElement()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithBaseMaterialElement);
	UClass* Z_Construct_UClass_UDatasmithBaseMaterialElement_NoRegister()
	{
		return UDatasmithBaseMaterialElement::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithBaseMaterialElement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithBaseMaterialElement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithObjectElement,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithImporter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithBaseMaterialElement_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UDatasmithBaseMaterialElement\n */" },
		{ "IncludePath", "ObjectElements/DatasmithUObjectElements.h" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "UDatasmithBaseMaterialElement" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithBaseMaterialElement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithBaseMaterialElement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithBaseMaterialElement_Statics::ClassParams = {
		&UDatasmithBaseMaterialElement::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithBaseMaterialElement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithBaseMaterialElement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithBaseMaterialElement()
	{
		if (!Z_Registration_Info_UClass_UDatasmithBaseMaterialElement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithBaseMaterialElement.OuterSingleton, Z_Construct_UClass_UDatasmithBaseMaterialElement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithBaseMaterialElement.OuterSingleton;
	}
	template<> DATASMITHIMPORTER_API UClass* StaticClass<UDatasmithBaseMaterialElement>()
	{
		return UDatasmithBaseMaterialElement::StaticClass();
	}
	UDatasmithBaseMaterialElement::UDatasmithBaseMaterialElement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithBaseMaterialElement);
	UDatasmithBaseMaterialElement::~UDatasmithBaseMaterialElement() {}
	DEFINE_FUNCTION(UDatasmithMaterialIDElement::execGetId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetId();
		P_NATIVE_END;
	}
	void UDatasmithMaterialIDElement::StaticRegisterNativesUDatasmithMaterialIDElement()
	{
		UClass* Class = UDatasmithMaterialIDElement::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetId", &UDatasmithMaterialIDElement::execGetId },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDatasmithMaterialIDElement_GetId_Statics
	{
		struct DatasmithMaterialIDElement_eventGetId_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDatasmithMaterialIDElement_GetId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithMaterialIDElement_eventGetId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithMaterialIDElement_GetId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithMaterialIDElement_GetId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithMaterialIDElement_GetId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithMaterialIDElement_GetId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithMaterialIDElement, nullptr, "GetId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithMaterialIDElement_GetId_Statics::DatasmithMaterialIDElement_eventGetId_Parms), Z_Construct_UFunction_UDatasmithMaterialIDElement_GetId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithMaterialIDElement_GetId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithMaterialIDElement_GetId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithMaterialIDElement_GetId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithMaterialIDElement_GetId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithMaterialIDElement_GetId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithMaterialIDElement);
	UClass* Z_Construct_UClass_UDatasmithMaterialIDElement_NoRegister()
	{
		return UDatasmithMaterialIDElement::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithMaterialIDElement_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithMaterialIDElement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithObjectElement,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithImporter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDatasmithMaterialIDElement_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDatasmithMaterialIDElement_GetId, "GetId" }, // 3816883743
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithMaterialIDElement_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UDatasmithMaterialIDElement\n */" },
		{ "IncludePath", "ObjectElements/DatasmithUObjectElements.h" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "UDatasmithMaterialIDElement" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithMaterialIDElement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithMaterialIDElement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithMaterialIDElement_Statics::ClassParams = {
		&UDatasmithMaterialIDElement::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithMaterialIDElement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithMaterialIDElement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithMaterialIDElement()
	{
		if (!Z_Registration_Info_UClass_UDatasmithMaterialIDElement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithMaterialIDElement.OuterSingleton, Z_Construct_UClass_UDatasmithMaterialIDElement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithMaterialIDElement.OuterSingleton;
	}
	template<> DATASMITHIMPORTER_API UClass* StaticClass<UDatasmithMaterialIDElement>()
	{
		return UDatasmithMaterialIDElement::StaticClass();
	}
	UDatasmithMaterialIDElement::UDatasmithMaterialIDElement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithMaterialIDElement);
	UDatasmithMaterialIDElement::~UDatasmithMaterialIDElement() {}
	DEFINE_FUNCTION(UDatasmithPostProcessElement::execSetCameraShutterSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_CameraShutterSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCameraShutterSpeed(Z_Param_CameraShutterSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithPostProcessElement::execGetCameraShutterSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCameraShutterSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithPostProcessElement::execSetCameraISO)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_CameraISO);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCameraISO(Z_Param_CameraISO);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithPostProcessElement::execGetCameraISO)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCameraISO();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithPostProcessElement::execSetSaturation)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Saturation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSaturation(Z_Param_Saturation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithPostProcessElement::execGetSaturation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSaturation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithPostProcessElement::execSetMotionBlur)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_MotionBlur);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMotionBlur(Z_Param_MotionBlur);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithPostProcessElement::execGetMotionBlur)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMotionBlur();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithPostProcessElement::execSetDof)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Dof);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDof(Z_Param_Dof);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithPostProcessElement::execGetDof)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDof();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithPostProcessElement::execSetVignette)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Vignette);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVignette(Z_Param_Vignette);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithPostProcessElement::execGetVignette)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetVignette();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithPostProcessElement::execSetColorFilter)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_ColorFilter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetColorFilter(Z_Param_ColorFilter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithPostProcessElement::execGetColorFilter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetColorFilter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithPostProcessElement::execSetTemperature)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Temperature);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTemperature(Z_Param_Temperature);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithPostProcessElement::execGetTemperature)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTemperature();
		P_NATIVE_END;
	}
	void UDatasmithPostProcessElement::StaticRegisterNativesUDatasmithPostProcessElement()
	{
		UClass* Class = UDatasmithPostProcessElement::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCameraISO", &UDatasmithPostProcessElement::execGetCameraISO },
			{ "GetCameraShutterSpeed", &UDatasmithPostProcessElement::execGetCameraShutterSpeed },
			{ "GetColorFilter", &UDatasmithPostProcessElement::execGetColorFilter },
			{ "GetDof", &UDatasmithPostProcessElement::execGetDof },
			{ "GetMotionBlur", &UDatasmithPostProcessElement::execGetMotionBlur },
			{ "GetSaturation", &UDatasmithPostProcessElement::execGetSaturation },
			{ "GetTemperature", &UDatasmithPostProcessElement::execGetTemperature },
			{ "GetVignette", &UDatasmithPostProcessElement::execGetVignette },
			{ "SetCameraISO", &UDatasmithPostProcessElement::execSetCameraISO },
			{ "SetCameraShutterSpeed", &UDatasmithPostProcessElement::execSetCameraShutterSpeed },
			{ "SetColorFilter", &UDatasmithPostProcessElement::execSetColorFilter },
			{ "SetDof", &UDatasmithPostProcessElement::execSetDof },
			{ "SetMotionBlur", &UDatasmithPostProcessElement::execSetMotionBlur },
			{ "SetSaturation", &UDatasmithPostProcessElement::execSetSaturation },
			{ "SetTemperature", &UDatasmithPostProcessElement::execSetTemperature },
			{ "SetVignette", &UDatasmithPostProcessElement::execSetVignette },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDatasmithPostProcessElement_GetCameraISO_Statics
	{
		struct DatasmithPostProcessElement_eventGetCameraISO_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDatasmithPostProcessElement_GetCameraISO_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithPostProcessElement_eventGetCameraISO_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithPostProcessElement_GetCameraISO_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithPostProcessElement_GetCameraISO_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithPostProcessElement_GetCameraISO_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Get camera ISO */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get camera ISO" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithPostProcessElement_GetCameraISO_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithPostProcessElement, nullptr, "GetCameraISO", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithPostProcessElement_GetCameraISO_Statics::DatasmithPostProcessElement_eventGetCameraISO_Parms), Z_Construct_UFunction_UDatasmithPostProcessElement_GetCameraISO_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPostProcessElement_GetCameraISO_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithPostProcessElement_GetCameraISO_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPostProcessElement_GetCameraISO_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithPostProcessElement_GetCameraISO()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithPostProcessElement_GetCameraISO_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithPostProcessElement_GetCameraShutterSpeed_Statics
	{
		struct DatasmithPostProcessElement_eventGetCameraShutterSpeed_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDatasmithPostProcessElement_GetCameraShutterSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithPostProcessElement_eventGetCameraShutterSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithPostProcessElement_GetCameraShutterSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithPostProcessElement_GetCameraShutterSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithPostProcessElement_GetCameraShutterSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Get camera shutter speed in 1/seconds (ie: 60 = 1/60s) */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get camera shutter speed in 1/seconds (ie: 60 = 1/60s)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithPostProcessElement_GetCameraShutterSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithPostProcessElement, nullptr, "GetCameraShutterSpeed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithPostProcessElement_GetCameraShutterSpeed_Statics::DatasmithPostProcessElement_eventGetCameraShutterSpeed_Parms), Z_Construct_UFunction_UDatasmithPostProcessElement_GetCameraShutterSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPostProcessElement_GetCameraShutterSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithPostProcessElement_GetCameraShutterSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPostProcessElement_GetCameraShutterSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithPostProcessElement_GetCameraShutterSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithPostProcessElement_GetCameraShutterSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithPostProcessElement_GetColorFilter_Statics
	{
		struct DatasmithPostProcessElement_eventGetColorFilter_Parms
		{
			FLinearColor ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDatasmithPostProcessElement_GetColorFilter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithPostProcessElement_eventGetColorFilter_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithPostProcessElement_GetColorFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithPostProcessElement_GetColorFilter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithPostProcessElement_GetColorFilter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Set color filter in linear color scale */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Set color filter in linear color scale" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithPostProcessElement_GetColorFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithPostProcessElement, nullptr, "GetColorFilter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithPostProcessElement_GetColorFilter_Statics::DatasmithPostProcessElement_eventGetColorFilter_Parms), Z_Construct_UFunction_UDatasmithPostProcessElement_GetColorFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPostProcessElement_GetColorFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithPostProcessElement_GetColorFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPostProcessElement_GetColorFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithPostProcessElement_GetColorFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithPostProcessElement_GetColorFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithPostProcessElement_GetDof_Statics
	{
		struct DatasmithPostProcessElement_eventGetDof_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDatasmithPostProcessElement_GetDof_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithPostProcessElement_eventGetDof_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithPostProcessElement_GetDof_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithPostProcessElement_GetDof_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithPostProcessElement_GetDof_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Get depth of field multiplier */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get depth of field multiplier" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithPostProcessElement_GetDof_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithPostProcessElement, nullptr, "GetDof", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithPostProcessElement_GetDof_Statics::DatasmithPostProcessElement_eventGetDof_Parms), Z_Construct_UFunction_UDatasmithPostProcessElement_GetDof_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPostProcessElement_GetDof_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithPostProcessElement_GetDof_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPostProcessElement_GetDof_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithPostProcessElement_GetDof()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithPostProcessElement_GetDof_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithPostProcessElement_GetMotionBlur_Statics
	{
		struct DatasmithPostProcessElement_eventGetMotionBlur_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDatasmithPostProcessElement_GetMotionBlur_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithPostProcessElement_eventGetMotionBlur_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithPostProcessElement_GetMotionBlur_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithPostProcessElement_GetMotionBlur_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithPostProcessElement_GetMotionBlur_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Get motion blur multiplier */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get motion blur multiplier" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithPostProcessElement_GetMotionBlur_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithPostProcessElement, nullptr, "GetMotionBlur", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithPostProcessElement_GetMotionBlur_Statics::DatasmithPostProcessElement_eventGetMotionBlur_Parms), Z_Construct_UFunction_UDatasmithPostProcessElement_GetMotionBlur_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPostProcessElement_GetMotionBlur_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithPostProcessElement_GetMotionBlur_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPostProcessElement_GetMotionBlur_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithPostProcessElement_GetMotionBlur()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithPostProcessElement_GetMotionBlur_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithPostProcessElement_GetSaturation_Statics
	{
		struct DatasmithPostProcessElement_eventGetSaturation_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDatasmithPostProcessElement_GetSaturation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithPostProcessElement_eventGetSaturation_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithPostProcessElement_GetSaturation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithPostProcessElement_GetSaturation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithPostProcessElement_GetSaturation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Get color saturation */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get color saturation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithPostProcessElement_GetSaturation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithPostProcessElement, nullptr, "GetSaturation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithPostProcessElement_GetSaturation_Statics::DatasmithPostProcessElement_eventGetSaturation_Parms), Z_Construct_UFunction_UDatasmithPostProcessElement_GetSaturation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPostProcessElement_GetSaturation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithPostProcessElement_GetSaturation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPostProcessElement_GetSaturation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithPostProcessElement_GetSaturation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithPostProcessElement_GetSaturation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithPostProcessElement_GetTemperature_Statics
	{
		struct DatasmithPostProcessElement_eventGetTemperature_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDatasmithPostProcessElement_GetTemperature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithPostProcessElement_eventGetTemperature_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithPostProcessElement_GetTemperature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithPostProcessElement_GetTemperature_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithPostProcessElement_GetTemperature_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Get color filter temperature in Kelvin */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get color filter temperature in Kelvin" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithPostProcessElement_GetTemperature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithPostProcessElement, nullptr, "GetTemperature", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithPostProcessElement_GetTemperature_Statics::DatasmithPostProcessElement_eventGetTemperature_Parms), Z_Construct_UFunction_UDatasmithPostProcessElement_GetTemperature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPostProcessElement_GetTemperature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithPostProcessElement_GetTemperature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPostProcessElement_GetTemperature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithPostProcessElement_GetTemperature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithPostProcessElement_GetTemperature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithPostProcessElement_GetVignette_Statics
	{
		struct DatasmithPostProcessElement_eventGetVignette_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDatasmithPostProcessElement_GetVignette_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithPostProcessElement_eventGetVignette_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithPostProcessElement_GetVignette_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithPostProcessElement_GetVignette_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithPostProcessElement_GetVignette_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Get vignette amount */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get vignette amount" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithPostProcessElement_GetVignette_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithPostProcessElement, nullptr, "GetVignette", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithPostProcessElement_GetVignette_Statics::DatasmithPostProcessElement_eventGetVignette_Parms), Z_Construct_UFunction_UDatasmithPostProcessElement_GetVignette_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPostProcessElement_GetVignette_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithPostProcessElement_GetVignette_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPostProcessElement_GetVignette_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithPostProcessElement_GetVignette()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithPostProcessElement_GetVignette_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithPostProcessElement_SetCameraISO_Statics
	{
		struct DatasmithPostProcessElement_eventSetCameraISO_Parms
		{
			float CameraISO;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraISO;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDatasmithPostProcessElement_SetCameraISO_Statics::NewProp_CameraISO = { "CameraISO", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithPostProcessElement_eventSetCameraISO_Parms, CameraISO), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithPostProcessElement_SetCameraISO_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithPostProcessElement_SetCameraISO_Statics::NewProp_CameraISO,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithPostProcessElement_SetCameraISO_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Set camera ISO */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Set camera ISO" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithPostProcessElement_SetCameraISO_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithPostProcessElement, nullptr, "SetCameraISO", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithPostProcessElement_SetCameraISO_Statics::DatasmithPostProcessElement_eventSetCameraISO_Parms), Z_Construct_UFunction_UDatasmithPostProcessElement_SetCameraISO_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPostProcessElement_SetCameraISO_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithPostProcessElement_SetCameraISO_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPostProcessElement_SetCameraISO_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithPostProcessElement_SetCameraISO()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithPostProcessElement_SetCameraISO_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithPostProcessElement_SetCameraShutterSpeed_Statics
	{
		struct DatasmithPostProcessElement_eventSetCameraShutterSpeed_Parms
		{
			float CameraShutterSpeed;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraShutterSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDatasmithPostProcessElement_SetCameraShutterSpeed_Statics::NewProp_CameraShutterSpeed = { "CameraShutterSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithPostProcessElement_eventSetCameraShutterSpeed_Parms, CameraShutterSpeed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithPostProcessElement_SetCameraShutterSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithPostProcessElement_SetCameraShutterSpeed_Statics::NewProp_CameraShutterSpeed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithPostProcessElement_SetCameraShutterSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Set camera shutter speed in 1/seconds (ie: 60 = 1/60s) */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Set camera shutter speed in 1/seconds (ie: 60 = 1/60s)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithPostProcessElement_SetCameraShutterSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithPostProcessElement, nullptr, "SetCameraShutterSpeed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithPostProcessElement_SetCameraShutterSpeed_Statics::DatasmithPostProcessElement_eventSetCameraShutterSpeed_Parms), Z_Construct_UFunction_UDatasmithPostProcessElement_SetCameraShutterSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPostProcessElement_SetCameraShutterSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithPostProcessElement_SetCameraShutterSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPostProcessElement_SetCameraShutterSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithPostProcessElement_SetCameraShutterSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithPostProcessElement_SetCameraShutterSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithPostProcessElement_SetColorFilter_Statics
	{
		struct DatasmithPostProcessElement_eventSetColorFilter_Parms
		{
			FLinearColor ColorFilter;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorFilter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDatasmithPostProcessElement_SetColorFilter_Statics::NewProp_ColorFilter = { "ColorFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithPostProcessElement_eventSetColorFilter_Parms, ColorFilter), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithPostProcessElement_SetColorFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithPostProcessElement_SetColorFilter_Statics::NewProp_ColorFilter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithPostProcessElement_SetColorFilter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Get color filter in linear color scale */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get color filter in linear color scale" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithPostProcessElement_SetColorFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithPostProcessElement, nullptr, "SetColorFilter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithPostProcessElement_SetColorFilter_Statics::DatasmithPostProcessElement_eventSetColorFilter_Parms), Z_Construct_UFunction_UDatasmithPostProcessElement_SetColorFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPostProcessElement_SetColorFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithPostProcessElement_SetColorFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPostProcessElement_SetColorFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithPostProcessElement_SetColorFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithPostProcessElement_SetColorFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithPostProcessElement_SetDof_Statics
	{
		struct DatasmithPostProcessElement_eventSetDof_Parms
		{
			float Dof;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Dof;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDatasmithPostProcessElement_SetDof_Statics::NewProp_Dof = { "Dof", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithPostProcessElement_eventSetDof_Parms, Dof), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithPostProcessElement_SetDof_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithPostProcessElement_SetDof_Statics::NewProp_Dof,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithPostProcessElement_SetDof_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Set depth of field multiplier */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Set depth of field multiplier" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithPostProcessElement_SetDof_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithPostProcessElement, nullptr, "SetDof", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithPostProcessElement_SetDof_Statics::DatasmithPostProcessElement_eventSetDof_Parms), Z_Construct_UFunction_UDatasmithPostProcessElement_SetDof_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPostProcessElement_SetDof_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithPostProcessElement_SetDof_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPostProcessElement_SetDof_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithPostProcessElement_SetDof()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithPostProcessElement_SetDof_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithPostProcessElement_SetMotionBlur_Statics
	{
		struct DatasmithPostProcessElement_eventSetMotionBlur_Parms
		{
			float MotionBlur;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MotionBlur;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDatasmithPostProcessElement_SetMotionBlur_Statics::NewProp_MotionBlur = { "MotionBlur", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithPostProcessElement_eventSetMotionBlur_Parms, MotionBlur), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithPostProcessElement_SetMotionBlur_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithPostProcessElement_SetMotionBlur_Statics::NewProp_MotionBlur,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithPostProcessElement_SetMotionBlur_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Set motion blur multiplier */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Set motion blur multiplier" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithPostProcessElement_SetMotionBlur_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithPostProcessElement, nullptr, "SetMotionBlur", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithPostProcessElement_SetMotionBlur_Statics::DatasmithPostProcessElement_eventSetMotionBlur_Parms), Z_Construct_UFunction_UDatasmithPostProcessElement_SetMotionBlur_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPostProcessElement_SetMotionBlur_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithPostProcessElement_SetMotionBlur_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPostProcessElement_SetMotionBlur_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithPostProcessElement_SetMotionBlur()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithPostProcessElement_SetMotionBlur_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithPostProcessElement_SetSaturation_Statics
	{
		struct DatasmithPostProcessElement_eventSetSaturation_Parms
		{
			float Saturation;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Saturation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDatasmithPostProcessElement_SetSaturation_Statics::NewProp_Saturation = { "Saturation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithPostProcessElement_eventSetSaturation_Parms, Saturation), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithPostProcessElement_SetSaturation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithPostProcessElement_SetSaturation_Statics::NewProp_Saturation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithPostProcessElement_SetSaturation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Set color saturation */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Set color saturation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithPostProcessElement_SetSaturation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithPostProcessElement, nullptr, "SetSaturation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithPostProcessElement_SetSaturation_Statics::DatasmithPostProcessElement_eventSetSaturation_Parms), Z_Construct_UFunction_UDatasmithPostProcessElement_SetSaturation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPostProcessElement_SetSaturation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithPostProcessElement_SetSaturation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPostProcessElement_SetSaturation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithPostProcessElement_SetSaturation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithPostProcessElement_SetSaturation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithPostProcessElement_SetTemperature_Statics
	{
		struct DatasmithPostProcessElement_eventSetTemperature_Parms
		{
			float Temperature;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Temperature;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDatasmithPostProcessElement_SetTemperature_Statics::NewProp_Temperature = { "Temperature", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithPostProcessElement_eventSetTemperature_Parms, Temperature), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithPostProcessElement_SetTemperature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithPostProcessElement_SetTemperature_Statics::NewProp_Temperature,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithPostProcessElement_SetTemperature_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Set color filter temperature in Kelvin */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Set color filter temperature in Kelvin" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithPostProcessElement_SetTemperature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithPostProcessElement, nullptr, "SetTemperature", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithPostProcessElement_SetTemperature_Statics::DatasmithPostProcessElement_eventSetTemperature_Parms), Z_Construct_UFunction_UDatasmithPostProcessElement_SetTemperature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPostProcessElement_SetTemperature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithPostProcessElement_SetTemperature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPostProcessElement_SetTemperature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithPostProcessElement_SetTemperature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithPostProcessElement_SetTemperature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithPostProcessElement_SetVignette_Statics
	{
		struct DatasmithPostProcessElement_eventSetVignette_Parms
		{
			float Vignette;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Vignette;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDatasmithPostProcessElement_SetVignette_Statics::NewProp_Vignette = { "Vignette", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithPostProcessElement_eventSetVignette_Parms, Vignette), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithPostProcessElement_SetVignette_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithPostProcessElement_SetVignette_Statics::NewProp_Vignette,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithPostProcessElement_SetVignette_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Set vignette amount */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Set vignette amount" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithPostProcessElement_SetVignette_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithPostProcessElement, nullptr, "SetVignette", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithPostProcessElement_SetVignette_Statics::DatasmithPostProcessElement_eventSetVignette_Parms), Z_Construct_UFunction_UDatasmithPostProcessElement_SetVignette_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPostProcessElement_SetVignette_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithPostProcessElement_SetVignette_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPostProcessElement_SetVignette_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithPostProcessElement_SetVignette()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithPostProcessElement_SetVignette_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithPostProcessElement);
	UClass* Z_Construct_UClass_UDatasmithPostProcessElement_NoRegister()
	{
		return UDatasmithPostProcessElement::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithPostProcessElement_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithPostProcessElement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithObjectElement,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithImporter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDatasmithPostProcessElement_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDatasmithPostProcessElement_GetCameraISO, "GetCameraISO" }, // 3060761029
		{ &Z_Construct_UFunction_UDatasmithPostProcessElement_GetCameraShutterSpeed, "GetCameraShutterSpeed" }, // 17140288
		{ &Z_Construct_UFunction_UDatasmithPostProcessElement_GetColorFilter, "GetColorFilter" }, // 3017945508
		{ &Z_Construct_UFunction_UDatasmithPostProcessElement_GetDof, "GetDof" }, // 1126661723
		{ &Z_Construct_UFunction_UDatasmithPostProcessElement_GetMotionBlur, "GetMotionBlur" }, // 2234739929
		{ &Z_Construct_UFunction_UDatasmithPostProcessElement_GetSaturation, "GetSaturation" }, // 1706950344
		{ &Z_Construct_UFunction_UDatasmithPostProcessElement_GetTemperature, "GetTemperature" }, // 1086683956
		{ &Z_Construct_UFunction_UDatasmithPostProcessElement_GetVignette, "GetVignette" }, // 3271647344
		{ &Z_Construct_UFunction_UDatasmithPostProcessElement_SetCameraISO, "SetCameraISO" }, // 1237940471
		{ &Z_Construct_UFunction_UDatasmithPostProcessElement_SetCameraShutterSpeed, "SetCameraShutterSpeed" }, // 1386996720
		{ &Z_Construct_UFunction_UDatasmithPostProcessElement_SetColorFilter, "SetColorFilter" }, // 1044711224
		{ &Z_Construct_UFunction_UDatasmithPostProcessElement_SetDof, "SetDof" }, // 2212346542
		{ &Z_Construct_UFunction_UDatasmithPostProcessElement_SetMotionBlur, "SetMotionBlur" }, // 935953688
		{ &Z_Construct_UFunction_UDatasmithPostProcessElement_SetSaturation, "SetSaturation" }, // 3720726804
		{ &Z_Construct_UFunction_UDatasmithPostProcessElement_SetTemperature, "SetTemperature" }, // 1897312584
		{ &Z_Construct_UFunction_UDatasmithPostProcessElement_SetVignette, "SetVignette" }, // 4141046195
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithPostProcessElement_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * UDatasmithPostProcessElement\n */" },
		{ "IncludePath", "ObjectElements/DatasmithUObjectElements.h" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "* UDatasmithPostProcessElement" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithPostProcessElement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithPostProcessElement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithPostProcessElement_Statics::ClassParams = {
		&UDatasmithPostProcessElement::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithPostProcessElement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithPostProcessElement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithPostProcessElement()
	{
		if (!Z_Registration_Info_UClass_UDatasmithPostProcessElement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithPostProcessElement.OuterSingleton, Z_Construct_UClass_UDatasmithPostProcessElement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithPostProcessElement.OuterSingleton;
	}
	template<> DATASMITHIMPORTER_API UClass* StaticClass<UDatasmithPostProcessElement>()
	{
		return UDatasmithPostProcessElement::StaticClass();
	}
	UDatasmithPostProcessElement::UDatasmithPostProcessElement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithPostProcessElement);
	UDatasmithPostProcessElement::~UDatasmithPostProcessElement() {}
	DEFINE_FUNCTION(UDatasmithTextureElement::execSetColorSpace)
	{
		P_GET_ENUM(EDatasmithColorSpace,Z_Param_Option);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetColorSpace(EDatasmithColorSpace(Z_Param_Option));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithTextureElement::execGetColorSpace)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EDatasmithColorSpace*)Z_Param__Result=P_THIS->GetColorSpace();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithTextureElement::execSetRGBCurve)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InRGBCurve);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRGBCurve(Z_Param_InRGBCurve);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithTextureElement::execGetRGBCurve)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRGBCurve();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithTextureElement::execSetAllowResize)
	{
		P_GET_UBOOL(Z_Param_bAllowResize);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAllowResize(Z_Param_bAllowResize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithTextureElement::execGetAllowResize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAllowResize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithTextureElement::execSetTextureMode)
	{
		P_GET_ENUM(EDatasmithTextureMode,Z_Param_Mode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTextureMode(EDatasmithTextureMode(Z_Param_Mode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithTextureElement::execGetTextureMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EDatasmithTextureMode*)Z_Param__Result=P_THIS->GetTextureMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithTextureElement::execSetFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_File);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFile(Z_Param_File);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithTextureElement::execGetFile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetFile();
		P_NATIVE_END;
	}
	void UDatasmithTextureElement::StaticRegisterNativesUDatasmithTextureElement()
	{
		UClass* Class = UDatasmithTextureElement::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllowResize", &UDatasmithTextureElement::execGetAllowResize },
			{ "GetColorSpace", &UDatasmithTextureElement::execGetColorSpace },
			{ "GetFile", &UDatasmithTextureElement::execGetFile },
			{ "GetRGBCurve", &UDatasmithTextureElement::execGetRGBCurve },
			{ "GetTextureMode", &UDatasmithTextureElement::execGetTextureMode },
			{ "SetAllowResize", &UDatasmithTextureElement::execSetAllowResize },
			{ "SetColorSpace", &UDatasmithTextureElement::execSetColorSpace },
			{ "SetFile", &UDatasmithTextureElement::execSetFile },
			{ "SetRGBCurve", &UDatasmithTextureElement::execSetRGBCurve },
			{ "SetTextureMode", &UDatasmithTextureElement::execSetTextureMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDatasmithTextureElement_GetAllowResize_Statics
	{
		struct DatasmithTextureElement_eventGetAllowResize_Parms
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
	void Z_Construct_UFunction_UDatasmithTextureElement_GetAllowResize_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DatasmithTextureElement_eventGetAllowResize_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDatasmithTextureElement_GetAllowResize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DatasmithTextureElement_eventGetAllowResize_Parms), &Z_Construct_UFunction_UDatasmithTextureElement_GetAllowResize_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithTextureElement_GetAllowResize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithTextureElement_GetAllowResize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithTextureElement_GetAllowResize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Get allow texture resizing */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get allow texture resizing" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithTextureElement_GetAllowResize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithTextureElement, nullptr, "GetAllowResize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithTextureElement_GetAllowResize_Statics::DatasmithTextureElement_eventGetAllowResize_Parms), Z_Construct_UFunction_UDatasmithTextureElement_GetAllowResize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithTextureElement_GetAllowResize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithTextureElement_GetAllowResize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithTextureElement_GetAllowResize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithTextureElement_GetAllowResize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithTextureElement_GetAllowResize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithTextureElement_GetColorSpace_Statics
	{
		struct DatasmithTextureElement_eventGetColorSpace_Parms
		{
			EDatasmithColorSpace ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDatasmithTextureElement_GetColorSpace_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDatasmithTextureElement_GetColorSpace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithTextureElement_eventGetColorSpace_Parms, ReturnValue), Z_Construct_UEnum_DatasmithCore_EDatasmithColorSpace, METADATA_PARAMS(nullptr, 0) }; // 2608804710
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithTextureElement_GetColorSpace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithTextureElement_GetColorSpace_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithTextureElement_GetColorSpace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithTextureElement_GetColorSpace_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Gets the color space of the texture */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Gets the color space of the texture" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithTextureElement_GetColorSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithTextureElement, nullptr, "GetColorSpace", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithTextureElement_GetColorSpace_Statics::DatasmithTextureElement_eventGetColorSpace_Parms), Z_Construct_UFunction_UDatasmithTextureElement_GetColorSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithTextureElement_GetColorSpace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithTextureElement_GetColorSpace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithTextureElement_GetColorSpace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithTextureElement_GetColorSpace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithTextureElement_GetColorSpace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithTextureElement_GetFile_Statics
	{
		struct DatasmithTextureElement_eventGetFile_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithTextureElement_GetFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithTextureElement_eventGetFile_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithTextureElement_GetFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithTextureElement_GetFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithTextureElement_GetFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Get texture filename */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get texture filename" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithTextureElement_GetFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithTextureElement, nullptr, "GetFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithTextureElement_GetFile_Statics::DatasmithTextureElement_eventGetFile_Parms), Z_Construct_UFunction_UDatasmithTextureElement_GetFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithTextureElement_GetFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithTextureElement_GetFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithTextureElement_GetFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithTextureElement_GetFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithTextureElement_GetFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithTextureElement_GetRGBCurve_Statics
	{
		struct DatasmithTextureElement_eventGetRGBCurve_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDatasmithTextureElement_GetRGBCurve_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithTextureElement_eventGetRGBCurve_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithTextureElement_GetRGBCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithTextureElement_GetRGBCurve_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithTextureElement_GetRGBCurve_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Get texture gamma <= 0 for auto */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get texture gamma <= 0 for auto" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithTextureElement_GetRGBCurve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithTextureElement, nullptr, "GetRGBCurve", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithTextureElement_GetRGBCurve_Statics::DatasmithTextureElement_eventGetRGBCurve_Parms), Z_Construct_UFunction_UDatasmithTextureElement_GetRGBCurve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithTextureElement_GetRGBCurve_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithTextureElement_GetRGBCurve_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithTextureElement_GetRGBCurve_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithTextureElement_GetRGBCurve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithTextureElement_GetRGBCurve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithTextureElement_GetTextureMode_Statics
	{
		struct DatasmithTextureElement_eventGetTextureMode_Parms
		{
			EDatasmithTextureMode ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDatasmithTextureElement_GetTextureMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDatasmithTextureElement_GetTextureMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithTextureElement_eventGetTextureMode_Parms, ReturnValue), Z_Construct_UEnum_DatasmithCore_EDatasmithTextureMode, METADATA_PARAMS(nullptr, 0) }; // 948624206
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithTextureElement_GetTextureMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithTextureElement_GetTextureMode_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithTextureElement_GetTextureMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithTextureElement_GetTextureMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Get texture usage */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get texture usage" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithTextureElement_GetTextureMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithTextureElement, nullptr, "GetTextureMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithTextureElement_GetTextureMode_Statics::DatasmithTextureElement_eventGetTextureMode_Parms), Z_Construct_UFunction_UDatasmithTextureElement_GetTextureMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithTextureElement_GetTextureMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithTextureElement_GetTextureMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithTextureElement_GetTextureMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithTextureElement_GetTextureMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithTextureElement_GetTextureMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithTextureElement_SetAllowResize_Statics
	{
		struct DatasmithTextureElement_eventSetAllowResize_Parms
		{
			bool bAllowResize;
		};
		static void NewProp_bAllowResize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowResize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDatasmithTextureElement_SetAllowResize_Statics::NewProp_bAllowResize_SetBit(void* Obj)
	{
		((DatasmithTextureElement_eventSetAllowResize_Parms*)Obj)->bAllowResize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDatasmithTextureElement_SetAllowResize_Statics::NewProp_bAllowResize = { "bAllowResize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DatasmithTextureElement_eventSetAllowResize_Parms), &Z_Construct_UFunction_UDatasmithTextureElement_SetAllowResize_Statics::NewProp_bAllowResize_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithTextureElement_SetAllowResize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithTextureElement_SetAllowResize_Statics::NewProp_bAllowResize,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithTextureElement_SetAllowResize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Set allow texture resizing */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Set allow texture resizing" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithTextureElement_SetAllowResize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithTextureElement, nullptr, "SetAllowResize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithTextureElement_SetAllowResize_Statics::DatasmithTextureElement_eventSetAllowResize_Parms), Z_Construct_UFunction_UDatasmithTextureElement_SetAllowResize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithTextureElement_SetAllowResize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithTextureElement_SetAllowResize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithTextureElement_SetAllowResize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithTextureElement_SetAllowResize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithTextureElement_SetAllowResize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithTextureElement_SetColorSpace_Statics
	{
		struct DatasmithTextureElement_eventSetColorSpace_Parms
		{
			EDatasmithColorSpace Option;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Option_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Option;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDatasmithTextureElement_SetColorSpace_Statics::NewProp_Option_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDatasmithTextureElement_SetColorSpace_Statics::NewProp_Option = { "Option", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithTextureElement_eventSetColorSpace_Parms, Option), Z_Construct_UEnum_DatasmithCore_EDatasmithColorSpace, METADATA_PARAMS(nullptr, 0) }; // 2608804710
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithTextureElement_SetColorSpace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithTextureElement_SetColorSpace_Statics::NewProp_Option_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithTextureElement_SetColorSpace_Statics::NewProp_Option,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithTextureElement_SetColorSpace_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Sets the color space of the texture */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Sets the color space of the texture" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithTextureElement_SetColorSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithTextureElement, nullptr, "SetColorSpace", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithTextureElement_SetColorSpace_Statics::DatasmithTextureElement_eventSetColorSpace_Parms), Z_Construct_UFunction_UDatasmithTextureElement_SetColorSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithTextureElement_SetColorSpace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithTextureElement_SetColorSpace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithTextureElement_SetColorSpace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithTextureElement_SetColorSpace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithTextureElement_SetColorSpace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithTextureElement_SetFile_Statics
	{
		struct DatasmithTextureElement_eventSetFile_Parms
		{
			FString File;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_File_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_File;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithTextureElement_SetFile_Statics::NewProp_File_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithTextureElement_SetFile_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithTextureElement_eventSetFile_Parms, File), METADATA_PARAMS(Z_Construct_UFunction_UDatasmithTextureElement_SetFile_Statics::NewProp_File_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithTextureElement_SetFile_Statics::NewProp_File_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithTextureElement_SetFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithTextureElement_SetFile_Statics::NewProp_File,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithTextureElement_SetFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Set texture filename */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Set texture filename" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithTextureElement_SetFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithTextureElement, nullptr, "SetFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithTextureElement_SetFile_Statics::DatasmithTextureElement_eventSetFile_Parms), Z_Construct_UFunction_UDatasmithTextureElement_SetFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithTextureElement_SetFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithTextureElement_SetFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithTextureElement_SetFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithTextureElement_SetFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithTextureElement_SetFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithTextureElement_SetRGBCurve_Statics
	{
		struct DatasmithTextureElement_eventSetRGBCurve_Parms
		{
			float InRGBCurve;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InRGBCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDatasmithTextureElement_SetRGBCurve_Statics::NewProp_InRGBCurve = { "InRGBCurve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithTextureElement_eventSetRGBCurve_Parms, InRGBCurve), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithTextureElement_SetRGBCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithTextureElement_SetRGBCurve_Statics::NewProp_InRGBCurve,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithTextureElement_SetRGBCurve_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Set texture gamma <= 0 for auto */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Set texture gamma <= 0 for auto" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithTextureElement_SetRGBCurve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithTextureElement, nullptr, "SetRGBCurve", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithTextureElement_SetRGBCurve_Statics::DatasmithTextureElement_eventSetRGBCurve_Parms), Z_Construct_UFunction_UDatasmithTextureElement_SetRGBCurve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithTextureElement_SetRGBCurve_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithTextureElement_SetRGBCurve_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithTextureElement_SetRGBCurve_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithTextureElement_SetRGBCurve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithTextureElement_SetRGBCurve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithTextureElement_SetTextureMode_Statics
	{
		struct DatasmithTextureElement_eventSetTextureMode_Parms
		{
			EDatasmithTextureMode Mode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDatasmithTextureElement_SetTextureMode_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDatasmithTextureElement_SetTextureMode_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithTextureElement_eventSetTextureMode_Parms, Mode), Z_Construct_UEnum_DatasmithCore_EDatasmithTextureMode, METADATA_PARAMS(nullptr, 0) }; // 948624206
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithTextureElement_SetTextureMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithTextureElement_SetTextureMode_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithTextureElement_SetTextureMode_Statics::NewProp_Mode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithTextureElement_SetTextureMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Set texture usage */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Set texture usage" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithTextureElement_SetTextureMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithTextureElement, nullptr, "SetTextureMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithTextureElement_SetTextureMode_Statics::DatasmithTextureElement_eventSetTextureMode_Parms), Z_Construct_UFunction_UDatasmithTextureElement_SetTextureMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithTextureElement_SetTextureMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithTextureElement_SetTextureMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithTextureElement_SetTextureMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithTextureElement_SetTextureMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithTextureElement_SetTextureMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithTextureElement);
	UClass* Z_Construct_UClass_UDatasmithTextureElement_NoRegister()
	{
		return UDatasmithTextureElement::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithTextureElement_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithTextureElement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithObjectElement,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithImporter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDatasmithTextureElement_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDatasmithTextureElement_GetAllowResize, "GetAllowResize" }, // 850653545
		{ &Z_Construct_UFunction_UDatasmithTextureElement_GetColorSpace, "GetColorSpace" }, // 3116623674
		{ &Z_Construct_UFunction_UDatasmithTextureElement_GetFile, "GetFile" }, // 1039240756
		{ &Z_Construct_UFunction_UDatasmithTextureElement_GetRGBCurve, "GetRGBCurve" }, // 3148281147
		{ &Z_Construct_UFunction_UDatasmithTextureElement_GetTextureMode, "GetTextureMode" }, // 3793555692
		{ &Z_Construct_UFunction_UDatasmithTextureElement_SetAllowResize, "SetAllowResize" }, // 4060918658
		{ &Z_Construct_UFunction_UDatasmithTextureElement_SetColorSpace, "SetColorSpace" }, // 1695740973
		{ &Z_Construct_UFunction_UDatasmithTextureElement_SetFile, "SetFile" }, // 4060455994
		{ &Z_Construct_UFunction_UDatasmithTextureElement_SetRGBCurve, "SetRGBCurve" }, // 788790911
		{ &Z_Construct_UFunction_UDatasmithTextureElement_SetTextureMode, "SetTextureMode" }, // 3103591211
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithTextureElement_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * UDatasmithTextureElement\n */" },
		{ "IncludePath", "ObjectElements/DatasmithUObjectElements.h" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "* UDatasmithTextureElement" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithTextureElement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithTextureElement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithTextureElement_Statics::ClassParams = {
		&UDatasmithTextureElement::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithTextureElement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithTextureElement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithTextureElement()
	{
		if (!Z_Registration_Info_UClass_UDatasmithTextureElement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithTextureElement.OuterSingleton, Z_Construct_UClass_UDatasmithTextureElement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithTextureElement.OuterSingleton;
	}
	template<> DATASMITHIMPORTER_API UClass* StaticClass<UDatasmithTextureElement>()
	{
		return UDatasmithTextureElement::StaticClass();
	}
	UDatasmithTextureElement::UDatasmithTextureElement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithTextureElement);
	UDatasmithTextureElement::~UDatasmithTextureElement() {}
	DEFINE_FUNCTION(UDatasmithMetaDataElement::execGetProperties)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutKeys);
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutValues);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetProperties(Z_Param_Out_OutKeys,Z_Param_Out_OutValues);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithMetaDataElement::execGetAssociatedElement)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDatasmithObjectElement**)Z_Param__Result=P_THIS->GetAssociatedElement();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithMetaDataElement::execGetPropertyByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDatasmithKeyValueProperty**)Z_Param__Result=P_THIS->GetPropertyByName(Z_Param_InName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithMetaDataElement::execGetProperty)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_i);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDatasmithKeyValueProperty**)Z_Param__Result=P_THIS->GetProperty(Z_Param_i);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithMetaDataElement::execGetPropertiesCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPropertiesCount();
		P_NATIVE_END;
	}
	void UDatasmithMetaDataElement::StaticRegisterNativesUDatasmithMetaDataElement()
	{
		UClass* Class = UDatasmithMetaDataElement::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAssociatedElement", &UDatasmithMetaDataElement::execGetAssociatedElement },
			{ "GetProperties", &UDatasmithMetaDataElement::execGetProperties },
			{ "GetPropertiesCount", &UDatasmithMetaDataElement::execGetPropertiesCount },
			{ "GetProperty", &UDatasmithMetaDataElement::execGetProperty },
			{ "GetPropertyByName", &UDatasmithMetaDataElement::execGetPropertyByName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDatasmithMetaDataElement_GetAssociatedElement_Statics
	{
		struct DatasmithMetaDataElement_eventGetAssociatedElement_Parms
		{
			UDatasmithObjectElement* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithMetaDataElement_GetAssociatedElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithMetaDataElement_eventGetAssociatedElement_Parms, ReturnValue), Z_Construct_UClass_UDatasmithObjectElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithMetaDataElement_GetAssociatedElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithMetaDataElement_GetAssociatedElement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithMetaDataElement_GetAssociatedElement_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Get the element that is associated with this meta data */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get the element that is associated with this meta data" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithMetaDataElement_GetAssociatedElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithMetaDataElement, nullptr, "GetAssociatedElement", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithMetaDataElement_GetAssociatedElement_Statics::DatasmithMetaDataElement_eventGetAssociatedElement_Parms), Z_Construct_UFunction_UDatasmithMetaDataElement_GetAssociatedElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithMetaDataElement_GetAssociatedElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithMetaDataElement_GetAssociatedElement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithMetaDataElement_GetAssociatedElement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithMetaDataElement_GetAssociatedElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithMetaDataElement_GetAssociatedElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithMetaDataElement_GetProperties_Statics
	{
		struct DatasmithMetaDataElement_eventGetProperties_Parms
		{
			TArray<FString> OutKeys;
			TArray<FString> OutValues;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutKeys_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutKeys;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutValues_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutValues;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithMetaDataElement_GetProperties_Statics::NewProp_OutKeys_Inner = { "OutKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDatasmithMetaDataElement_GetProperties_Statics::NewProp_OutKeys = { "OutKeys", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithMetaDataElement_eventGetProperties_Parms, OutKeys), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithMetaDataElement_GetProperties_Statics::NewProp_OutValues_Inner = { "OutValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDatasmithMetaDataElement_GetProperties_Statics::NewProp_OutValues = { "OutValues", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithMetaDataElement_eventGetProperties_Parms, OutValues), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithMetaDataElement_GetProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithMetaDataElement_GetProperties_Statics::NewProp_OutKeys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithMetaDataElement_GetProperties_Statics::NewProp_OutKeys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithMetaDataElement_GetProperties_Statics::NewProp_OutValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithMetaDataElement_GetProperties_Statics::NewProp_OutValues,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithMetaDataElement_GetProperties_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Get this metadata element properties as a map of keys and values */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get this metadata element properties as a map of keys and values" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithMetaDataElement_GetProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithMetaDataElement, nullptr, "GetProperties", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithMetaDataElement_GetProperties_Statics::DatasmithMetaDataElement_eventGetProperties_Parms), Z_Construct_UFunction_UDatasmithMetaDataElement_GetProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithMetaDataElement_GetProperties_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithMetaDataElement_GetProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithMetaDataElement_GetProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithMetaDataElement_GetProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithMetaDataElement_GetProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithMetaDataElement_GetPropertiesCount_Statics
	{
		struct DatasmithMetaDataElement_eventGetPropertiesCount_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDatasmithMetaDataElement_GetPropertiesCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithMetaDataElement_eventGetPropertiesCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithMetaDataElement_GetPropertiesCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithMetaDataElement_GetPropertiesCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithMetaDataElement_GetPropertiesCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithMetaDataElement_GetPropertiesCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithMetaDataElement, nullptr, "GetPropertiesCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithMetaDataElement_GetPropertiesCount_Statics::DatasmithMetaDataElement_eventGetPropertiesCount_Parms), Z_Construct_UFunction_UDatasmithMetaDataElement_GetPropertiesCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithMetaDataElement_GetPropertiesCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithMetaDataElement_GetPropertiesCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithMetaDataElement_GetPropertiesCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithMetaDataElement_GetPropertiesCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithMetaDataElement_GetPropertiesCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithMetaDataElement_GetProperty_Statics
	{
		struct DatasmithMetaDataElement_eventGetProperty_Parms
		{
			int32 i;
			UDatasmithKeyValueProperty* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_i;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDatasmithMetaDataElement_GetProperty_Statics::NewProp_i = { "i", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithMetaDataElement_eventGetProperty_Parms, i), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithMetaDataElement_GetProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithMetaDataElement_eventGetProperty_Parms, ReturnValue), Z_Construct_UClass_UDatasmithKeyValueProperty_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithMetaDataElement_GetProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithMetaDataElement_GetProperty_Statics::NewProp_i,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithMetaDataElement_GetProperty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithMetaDataElement_GetProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Get the property i-th of this meta data */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get the property i-th of this meta data" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithMetaDataElement_GetProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithMetaDataElement, nullptr, "GetProperty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithMetaDataElement_GetProperty_Statics::DatasmithMetaDataElement_eventGetProperty_Parms), Z_Construct_UFunction_UDatasmithMetaDataElement_GetProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithMetaDataElement_GetProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithMetaDataElement_GetProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithMetaDataElement_GetProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithMetaDataElement_GetProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithMetaDataElement_GetProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithMetaDataElement_GetPropertyByName_Statics
	{
		struct DatasmithMetaDataElement_eventGetPropertyByName_Parms
		{
			FString InName;
			UDatasmithKeyValueProperty* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithMetaDataElement_GetPropertyByName_Statics::NewProp_InName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithMetaDataElement_GetPropertyByName_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithMetaDataElement_eventGetPropertyByName_Parms, InName), METADATA_PARAMS(Z_Construct_UFunction_UDatasmithMetaDataElement_GetPropertyByName_Statics::NewProp_InName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithMetaDataElement_GetPropertyByName_Statics::NewProp_InName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithMetaDataElement_GetPropertyByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithMetaDataElement_eventGetPropertyByName_Parms, ReturnValue), Z_Construct_UClass_UDatasmithKeyValueProperty_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithMetaDataElement_GetPropertyByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithMetaDataElement_GetPropertyByName_Statics::NewProp_InName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithMetaDataElement_GetPropertyByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithMetaDataElement_GetPropertyByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Get a property by its name if it exists */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get a property by its name if it exists" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithMetaDataElement_GetPropertyByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithMetaDataElement, nullptr, "GetPropertyByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithMetaDataElement_GetPropertyByName_Statics::DatasmithMetaDataElement_eventGetPropertyByName_Parms), Z_Construct_UFunction_UDatasmithMetaDataElement_GetPropertyByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithMetaDataElement_GetPropertyByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithMetaDataElement_GetPropertyByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithMetaDataElement_GetPropertyByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithMetaDataElement_GetPropertyByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithMetaDataElement_GetPropertyByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithMetaDataElement);
	UClass* Z_Construct_UClass_UDatasmithMetaDataElement_NoRegister()
	{
		return UDatasmithMetaDataElement::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithMetaDataElement_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithMetaDataElement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithObjectElement,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithImporter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDatasmithMetaDataElement_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDatasmithMetaDataElement_GetAssociatedElement, "GetAssociatedElement" }, // 3887746001
		{ &Z_Construct_UFunction_UDatasmithMetaDataElement_GetProperties, "GetProperties" }, // 2243280320
		{ &Z_Construct_UFunction_UDatasmithMetaDataElement_GetPropertiesCount, "GetPropertiesCount" }, // 1876385409
		{ &Z_Construct_UFunction_UDatasmithMetaDataElement_GetProperty, "GetProperty" }, // 1846985500
		{ &Z_Construct_UFunction_UDatasmithMetaDataElement_GetPropertyByName, "GetPropertyByName" }, // 2941949443
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithMetaDataElement_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * UDatasmithMetaDataElement\n */" },
		{ "IncludePath", "ObjectElements/DatasmithUObjectElements.h" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "* UDatasmithMetaDataElement" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithMetaDataElement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithMetaDataElement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithMetaDataElement_Statics::ClassParams = {
		&UDatasmithMetaDataElement::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithMetaDataElement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithMetaDataElement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithMetaDataElement()
	{
		if (!Z_Registration_Info_UClass_UDatasmithMetaDataElement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithMetaDataElement.OuterSingleton, Z_Construct_UClass_UDatasmithMetaDataElement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithMetaDataElement.OuterSingleton;
	}
	template<> DATASMITHIMPORTER_API UClass* StaticClass<UDatasmithMetaDataElement>()
	{
		return UDatasmithMetaDataElement::StaticClass();
	}
	UDatasmithMetaDataElement::UDatasmithMetaDataElement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithMetaDataElement);
	UDatasmithMetaDataElement::~UDatasmithMetaDataElement() {}
	DEFINE_FUNCTION(UDatasmithBasePropertyCaptureElement::execGetCategory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EDatasmithPropertyCategory*)Z_Param__Result=P_THIS->GetCategory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithBasePropertyCaptureElement::execSetCategory)
	{
		P_GET_ENUM(EDatasmithPropertyCategory,Z_Param_Category);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCategory(EDatasmithPropertyCategory(Z_Param_Category));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithBasePropertyCaptureElement::execGetPropertyPath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetPropertyPath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithBasePropertyCaptureElement::execSetPropertyPath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPropertyPath(Z_Param_Path);
		P_NATIVE_END;
	}
	void UDatasmithBasePropertyCaptureElement::StaticRegisterNativesUDatasmithBasePropertyCaptureElement()
	{
		UClass* Class = UDatasmithBasePropertyCaptureElement::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCategory", &UDatasmithBasePropertyCaptureElement::execGetCategory },
			{ "GetPropertyPath", &UDatasmithBasePropertyCaptureElement::execGetPropertyPath },
			{ "SetCategory", &UDatasmithBasePropertyCaptureElement::execSetCategory },
			{ "SetPropertyPath", &UDatasmithBasePropertyCaptureElement::execSetPropertyPath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_GetCategory_Statics
	{
		struct DatasmithBasePropertyCaptureElement_eventGetCategory_Parms
		{
			EDatasmithPropertyCategory ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_GetCategory_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_GetCategory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithBasePropertyCaptureElement_eventGetCategory_Parms, ReturnValue), Z_Construct_UEnum_DatasmithCore_EDatasmithPropertyCategory, METADATA_PARAMS(nullptr, 0) }; // 3064809688
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_GetCategory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_GetCategory_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_GetCategory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_GetCategory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Gets the category of this property capture */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Gets the category of this property capture" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_GetCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithBasePropertyCaptureElement, nullptr, "GetCategory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_GetCategory_Statics::DatasmithBasePropertyCaptureElement_eventGetCategory_Parms), Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_GetCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_GetCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_GetCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_GetCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_GetCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_GetCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_GetPropertyPath_Statics
	{
		struct DatasmithBasePropertyCaptureElement_eventGetPropertyPath_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_GetPropertyPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithBasePropertyCaptureElement_eventGetPropertyPath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_GetPropertyPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_GetPropertyPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_GetPropertyPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Gets the path used when attempting to capture a generic property */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Gets the path used when attempting to capture a generic property" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_GetPropertyPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithBasePropertyCaptureElement, nullptr, "GetPropertyPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_GetPropertyPath_Statics::DatasmithBasePropertyCaptureElement_eventGetPropertyPath_Parms), Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_GetPropertyPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_GetPropertyPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_GetPropertyPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_GetPropertyPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_GetPropertyPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_GetPropertyPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_SetCategory_Statics
	{
		struct DatasmithBasePropertyCaptureElement_eventSetCategory_Parms
		{
			EDatasmithPropertyCategory Category;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Category_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Category;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_SetCategory_Statics::NewProp_Category_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_SetCategory_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithBasePropertyCaptureElement_eventSetCategory_Parms, Category), Z_Construct_UEnum_DatasmithCore_EDatasmithPropertyCategory, METADATA_PARAMS(nullptr, 0) }; // 3064809688
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_SetCategory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_SetCategory_Statics::NewProp_Category_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_SetCategory_Statics::NewProp_Category,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_SetCategory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Sets the category of this property capture */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Sets the category of this property capture" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_SetCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithBasePropertyCaptureElement, nullptr, "SetCategory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_SetCategory_Statics::DatasmithBasePropertyCaptureElement_eventSetCategory_Parms), Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_SetCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_SetCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_SetCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_SetCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_SetCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_SetCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_SetPropertyPath_Statics
	{
		struct DatasmithBasePropertyCaptureElement_eventSetPropertyPath_Parms
		{
			FString Path;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_SetPropertyPath_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_SetPropertyPath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithBasePropertyCaptureElement_eventSetPropertyPath_Parms, Path), METADATA_PARAMS(Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_SetPropertyPath_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_SetPropertyPath_Statics::NewProp_Path_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_SetPropertyPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_SetPropertyPath_Statics::NewProp_Path,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_SetPropertyPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Sets the path used when attempting to capture a generic property */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Sets the path used when attempting to capture a generic property" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_SetPropertyPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithBasePropertyCaptureElement, nullptr, "SetPropertyPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_SetPropertyPath_Statics::DatasmithBasePropertyCaptureElement_eventSetPropertyPath_Parms), Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_SetPropertyPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_SetPropertyPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_SetPropertyPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_SetPropertyPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_SetPropertyPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_SetPropertyPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithBasePropertyCaptureElement);
	UClass* Z_Construct_UClass_UDatasmithBasePropertyCaptureElement_NoRegister()
	{
		return UDatasmithBasePropertyCaptureElement::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithBasePropertyCaptureElement_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithBasePropertyCaptureElement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithObjectElement,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithImporter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDatasmithBasePropertyCaptureElement_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_GetCategory, "GetCategory" }, // 2324847536
		{ &Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_GetPropertyPath, "GetPropertyPath" }, // 1635600485
		{ &Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_SetCategory, "SetCategory" }, // 437293439
		{ &Z_Construct_UFunction_UDatasmithBasePropertyCaptureElement_SetPropertyPath, "SetPropertyPath" }, // 1465263968
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithBasePropertyCaptureElement_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * UDatasmithBasePropertyCaptureElement\n */" },
		{ "IncludePath", "ObjectElements/DatasmithUObjectElements.h" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "* UDatasmithBasePropertyCaptureElement" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithBasePropertyCaptureElement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithBasePropertyCaptureElement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithBasePropertyCaptureElement_Statics::ClassParams = {
		&UDatasmithBasePropertyCaptureElement::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithBasePropertyCaptureElement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithBasePropertyCaptureElement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithBasePropertyCaptureElement()
	{
		if (!Z_Registration_Info_UClass_UDatasmithBasePropertyCaptureElement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithBasePropertyCaptureElement.OuterSingleton, Z_Construct_UClass_UDatasmithBasePropertyCaptureElement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithBasePropertyCaptureElement.OuterSingleton;
	}
	template<> DATASMITHIMPORTER_API UClass* StaticClass<UDatasmithBasePropertyCaptureElement>()
	{
		return UDatasmithBasePropertyCaptureElement::StaticClass();
	}
	UDatasmithBasePropertyCaptureElement::UDatasmithBasePropertyCaptureElement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithBasePropertyCaptureElement);
	UDatasmithBasePropertyCaptureElement::~UDatasmithBasePropertyCaptureElement() {}
	DEFINE_FUNCTION(UDatasmithPropertyCaptureElement::execSetValueIntPoint)
	{
		P_GET_STRUCT(FIntPoint,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetValueIntPoint(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithPropertyCaptureElement::execGetValueIntPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntPoint*)Z_Param__Result=P_THIS->GetValueIntPoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithPropertyCaptureElement::execSetValueVector2D)
	{
		P_GET_STRUCT(FVector2D,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetValueVector2D(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithPropertyCaptureElement::execGetValueVector2D)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetValueVector2D();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithPropertyCaptureElement::execSetValueVector4)
	{
		P_GET_STRUCT(FVector4,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetValueVector4(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithPropertyCaptureElement::execGetValueVector4)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector4*)Z_Param__Result=P_THIS->GetValueVector4();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithPropertyCaptureElement::execSetValueQuat)
	{
		P_GET_STRUCT(FQuat,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetValueQuat(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithPropertyCaptureElement::execGetValueQuat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=P_THIS->GetValueQuat();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithPropertyCaptureElement::execSetValueVector)
	{
		P_GET_STRUCT(FVector,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetValueVector(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithPropertyCaptureElement::execGetValueVector)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetValueVector();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithPropertyCaptureElement::execSetValueLinearColor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetValueLinearColor(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithPropertyCaptureElement::execGetValueLinearColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetValueLinearColor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithPropertyCaptureElement::execSetValueColor)
	{
		P_GET_STRUCT(FColor,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetValueColor(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithPropertyCaptureElement::execGetValueColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FColor*)Z_Param__Result=P_THIS->GetValueColor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithPropertyCaptureElement::execSetValueRotator)
	{
		P_GET_STRUCT(FRotator,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetValueRotator(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithPropertyCaptureElement::execGetValueRotator)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetValueRotator();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithPropertyCaptureElement::execSetValueString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetValueString(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithPropertyCaptureElement::execGetValueString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetValueString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithPropertyCaptureElement::execSetValueFloat)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetValueFloat(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithPropertyCaptureElement::execGetValueFloat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetValueFloat();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithPropertyCaptureElement::execSetValueInt)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetValueInt(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithPropertyCaptureElement::execGetValueInt)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetValueInt();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithPropertyCaptureElement::execSetValueBool)
	{
		P_GET_UBOOL(Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetValueBool(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithPropertyCaptureElement::execGetValueBool)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetValueBool();
		P_NATIVE_END;
	}
	void UDatasmithPropertyCaptureElement::StaticRegisterNativesUDatasmithPropertyCaptureElement()
	{
		UClass* Class = UDatasmithPropertyCaptureElement::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetValueBool", &UDatasmithPropertyCaptureElement::execGetValueBool },
			{ "GetValueColor", &UDatasmithPropertyCaptureElement::execGetValueColor },
			{ "GetValueFloat", &UDatasmithPropertyCaptureElement::execGetValueFloat },
			{ "GetValueInt", &UDatasmithPropertyCaptureElement::execGetValueInt },
			{ "GetValueIntPoint", &UDatasmithPropertyCaptureElement::execGetValueIntPoint },
			{ "GetValueLinearColor", &UDatasmithPropertyCaptureElement::execGetValueLinearColor },
			{ "GetValueQuat", &UDatasmithPropertyCaptureElement::execGetValueQuat },
			{ "GetValueRotator", &UDatasmithPropertyCaptureElement::execGetValueRotator },
			{ "GetValueString", &UDatasmithPropertyCaptureElement::execGetValueString },
			{ "GetValueVector", &UDatasmithPropertyCaptureElement::execGetValueVector },
			{ "GetValueVector2D", &UDatasmithPropertyCaptureElement::execGetValueVector2D },
			{ "GetValueVector4", &UDatasmithPropertyCaptureElement::execGetValueVector4 },
			{ "SetValueBool", &UDatasmithPropertyCaptureElement::execSetValueBool },
			{ "SetValueColor", &UDatasmithPropertyCaptureElement::execSetValueColor },
			{ "SetValueFloat", &UDatasmithPropertyCaptureElement::execSetValueFloat },
			{ "SetValueInt", &UDatasmithPropertyCaptureElement::execSetValueInt },
			{ "SetValueIntPoint", &UDatasmithPropertyCaptureElement::execSetValueIntPoint },
			{ "SetValueLinearColor", &UDatasmithPropertyCaptureElement::execSetValueLinearColor },
			{ "SetValueQuat", &UDatasmithPropertyCaptureElement::execSetValueQuat },
			{ "SetValueRotator", &UDatasmithPropertyCaptureElement::execSetValueRotator },
			{ "SetValueString", &UDatasmithPropertyCaptureElement::execSetValueString },
			{ "SetValueVector", &UDatasmithPropertyCaptureElement::execSetValueVector },
			{ "SetValueVector2D", &UDatasmithPropertyCaptureElement::execSetValueVector2D },
			{ "SetValueVector4", &UDatasmithPropertyCaptureElement::execSetValueVector4 },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueBool_Statics
	{
		struct DatasmithPropertyCaptureElement_eventGetValueBool_Parms
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
	void Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DatasmithPropertyCaptureElement_eventGetValueBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DatasmithPropertyCaptureElement_eventGetValueBool_Parms), &Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/**\n\x09 * Get the recorded value for this property as a boolean.\n\x09 * Returned value is meaningless if the property is not of boolean type.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get the recorded value for this property as a boolean.\nReturned value is meaningless if the property is not of boolean type." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithPropertyCaptureElement, nullptr, "GetValueBool", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueBool_Statics::DatasmithPropertyCaptureElement_eventGetValueBool_Parms), Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueColor_Statics
	{
		struct DatasmithPropertyCaptureElement_eventGetValueColor_Parms
		{
			FColor ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithPropertyCaptureElement_eventGetValueColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/**\n\x09 * Get the recorded value for this property as a color.\n\x09 * Returned value is meaningless if the property is not of color type.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get the recorded value for this property as a color.\nReturned value is meaningless if the property is not of color type." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithPropertyCaptureElement, nullptr, "GetValueColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueColor_Statics::DatasmithPropertyCaptureElement_eventGetValueColor_Parms), Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueFloat_Statics
	{
		struct DatasmithPropertyCaptureElement_eventGetValueFloat_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithPropertyCaptureElement_eventGetValueFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/**\n\x09 * Get the recorded value for this property as a float.\n\x09 * Returned value is meaningless if the property is not of float type.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get the recorded value for this property as a float.\nReturned value is meaningless if the property is not of float type." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithPropertyCaptureElement, nullptr, "GetValueFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueFloat_Statics::DatasmithPropertyCaptureElement_eventGetValueFloat_Parms), Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueInt_Statics
	{
		struct DatasmithPropertyCaptureElement_eventGetValueInt_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithPropertyCaptureElement_eventGetValueInt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/**\n\x09 * Get the recorded value for this property as an int32.\n\x09 * Returned value is meaningless if the property is not of int32 type.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get the recorded value for this property as an int32.\nReturned value is meaningless if the property is not of int32 type." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithPropertyCaptureElement, nullptr, "GetValueInt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueInt_Statics::DatasmithPropertyCaptureElement_eventGetValueInt_Parms), Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueIntPoint_Statics
	{
		struct DatasmithPropertyCaptureElement_eventGetValueIntPoint_Parms
		{
			FIntPoint ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueIntPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithPropertyCaptureElement_eventGetValueIntPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueIntPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueIntPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueIntPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/**\n\x09 * Get the recorded value for this property as an int point.\n\x09 * Returned value is meaningless if the property is not of int point type.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get the recorded value for this property as an int point.\nReturned value is meaningless if the property is not of int point type." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueIntPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithPropertyCaptureElement, nullptr, "GetValueIntPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueIntPoint_Statics::DatasmithPropertyCaptureElement_eventGetValueIntPoint_Parms), Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueIntPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueIntPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueIntPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueIntPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueIntPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueIntPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueLinearColor_Statics
	{
		struct DatasmithPropertyCaptureElement_eventGetValueLinearColor_Parms
		{
			FLinearColor ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueLinearColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithPropertyCaptureElement_eventGetValueLinearColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueLinearColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueLinearColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueLinearColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/**\n\x09 * Get the recorded value for this property as a linear color.\n\x09 * Returned value is meaningless if the property is not of linear color type.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get the recorded value for this property as a linear color.\nReturned value is meaningless if the property is not of linear color type." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueLinearColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithPropertyCaptureElement, nullptr, "GetValueLinearColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueLinearColor_Statics::DatasmithPropertyCaptureElement_eventGetValueLinearColor_Parms), Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueLinearColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueLinearColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueLinearColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueLinearColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueLinearColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueLinearColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueQuat_Statics
	{
		struct DatasmithPropertyCaptureElement_eventGetValueQuat_Parms
		{
			FQuat ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueQuat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithPropertyCaptureElement_eventGetValueQuat_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueQuat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueQuat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueQuat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/**\n\x09 * Get the recorded value for this property as a quat.\n\x09 * Returned value is meaningless if the property is not of quat type.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get the recorded value for this property as a quat.\nReturned value is meaningless if the property is not of quat type." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueQuat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithPropertyCaptureElement, nullptr, "GetValueQuat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueQuat_Statics::DatasmithPropertyCaptureElement_eventGetValueQuat_Parms), Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueQuat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueQuat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueQuat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueQuat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueQuat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueRotator_Statics
	{
		struct DatasmithPropertyCaptureElement_eventGetValueRotator_Parms
		{
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueRotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithPropertyCaptureElement_eventGetValueRotator_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueRotator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueRotator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueRotator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/**\n\x09 * Get the recorded value for this property as a rotator.\n\x09 * Returned value is meaningless if the property is not of rotator type.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get the recorded value for this property as a rotator.\nReturned value is meaningless if the property is not of rotator type." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithPropertyCaptureElement, nullptr, "GetValueRotator", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueRotator_Statics::DatasmithPropertyCaptureElement_eventGetValueRotator_Parms), Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueRotator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueRotator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueRotator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueString_Statics
	{
		struct DatasmithPropertyCaptureElement_eventGetValueString_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithPropertyCaptureElement_eventGetValueString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/**\n\x09 * Get the recorded value for this property as a string.\n\x09 * Returned value is meaningless if the property is not of string type.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get the recorded value for this property as a string.\nReturned value is meaningless if the property is not of string type." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithPropertyCaptureElement, nullptr, "GetValueString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueString_Statics::DatasmithPropertyCaptureElement_eventGetValueString_Parms), Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueVector_Statics
	{
		struct DatasmithPropertyCaptureElement_eventGetValueVector_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithPropertyCaptureElement_eventGetValueVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/**\n\x09 * Get the recorded value for this property as a vector.\n\x09 * Returned value is meaningless if the property is not of vector type.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get the recorded value for this property as a vector.\nReturned value is meaningless if the property is not of vector type." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithPropertyCaptureElement, nullptr, "GetValueVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueVector_Statics::DatasmithPropertyCaptureElement_eventGetValueVector_Parms), Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueVector2D_Statics
	{
		struct DatasmithPropertyCaptureElement_eventGetValueVector2D_Parms
		{
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueVector2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithPropertyCaptureElement_eventGetValueVector2D_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueVector2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueVector2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueVector2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/**\n\x09 * Get the recorded value for this property as a vector2d.\n\x09 * Returned value is meaningless if the property is not of vector2 type.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get the recorded value for this property as a vector2d.\nReturned value is meaningless if the property is not of vector2 type." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueVector2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithPropertyCaptureElement, nullptr, "GetValueVector2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueVector2D_Statics::DatasmithPropertyCaptureElement_eventGetValueVector2D_Parms), Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueVector2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueVector2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueVector2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueVector2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueVector2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueVector2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueVector4_Statics
	{
		struct DatasmithPropertyCaptureElement_eventGetValueVector4_Parms
		{
			FVector4 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueVector4_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithPropertyCaptureElement_eventGetValueVector4_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueVector4_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueVector4_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueVector4_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/**\n\x09 * Get the recorded value for this property as a vector4.\n\x09 * Returned value is meaningless if the property is not of vector4 type.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Get the recorded value for this property as a vector4.\nReturned value is meaningless if the property is not of vector4 type." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueVector4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithPropertyCaptureElement, nullptr, "GetValueVector4", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueVector4_Statics::DatasmithPropertyCaptureElement_eventGetValueVector4_Parms), Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueVector4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueVector4_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueVector4_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueVector4_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueVector4()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueVector4_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueBool_Statics
	{
		struct DatasmithPropertyCaptureElement_eventSetValueBool_Parms
		{
			bool InValue;
		};
		static void NewProp_InValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueBool_Statics::NewProp_InValue_SetBit(void* Obj)
	{
		((DatasmithPropertyCaptureElement_eventSetValueBool_Parms*)Obj)->InValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueBool_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DatasmithPropertyCaptureElement_eventSetValueBool_Parms), &Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueBool_Statics::NewProp_InValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueBool_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Set the recorded value for this capture */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Set the recorded value for this capture" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithPropertyCaptureElement, nullptr, "SetValueBool", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueBool_Statics::DatasmithPropertyCaptureElement_eventSetValueBool_Parms), Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueColor_Statics
	{
		struct DatasmithPropertyCaptureElement_eventSetValueColor_Parms
		{
			FColor InValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueColor_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithPropertyCaptureElement_eventSetValueColor_Parms, InValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueColor_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Set the recorded value for this capture */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Set the recorded value for this capture" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithPropertyCaptureElement, nullptr, "SetValueColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueColor_Statics::DatasmithPropertyCaptureElement_eventSetValueColor_Parms), Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueFloat_Statics
	{
		struct DatasmithPropertyCaptureElement_eventSetValueFloat_Parms
		{
			float InValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueFloat_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithPropertyCaptureElement_eventSetValueFloat_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueFloat_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Set the recorded value for this capture */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Set the recorded value for this capture" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithPropertyCaptureElement, nullptr, "SetValueFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueFloat_Statics::DatasmithPropertyCaptureElement_eventSetValueFloat_Parms), Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueInt_Statics
	{
		struct DatasmithPropertyCaptureElement_eventSetValueInt_Parms
		{
			int32 InValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueInt_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithPropertyCaptureElement_eventSetValueInt_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueInt_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Set the recorded value for this capture */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Set the recorded value for this capture" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithPropertyCaptureElement, nullptr, "SetValueInt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueInt_Statics::DatasmithPropertyCaptureElement_eventSetValueInt_Parms), Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueIntPoint_Statics
	{
		struct DatasmithPropertyCaptureElement_eventSetValueIntPoint_Parms
		{
			FIntPoint InValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueIntPoint_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithPropertyCaptureElement_eventSetValueIntPoint_Parms, InValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueIntPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueIntPoint_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueIntPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Set the recorded value for this capture */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Set the recorded value for this capture" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueIntPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithPropertyCaptureElement, nullptr, "SetValueIntPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueIntPoint_Statics::DatasmithPropertyCaptureElement_eventSetValueIntPoint_Parms), Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueIntPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueIntPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueIntPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueIntPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueIntPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueIntPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueLinearColor_Statics
	{
		struct DatasmithPropertyCaptureElement_eventSetValueLinearColor_Parms
		{
			FLinearColor InValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueLinearColor_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithPropertyCaptureElement_eventSetValueLinearColor_Parms, InValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueLinearColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueLinearColor_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueLinearColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Set the recorded value for this capture */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Set the recorded value for this capture" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueLinearColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithPropertyCaptureElement, nullptr, "SetValueLinearColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueLinearColor_Statics::DatasmithPropertyCaptureElement_eventSetValueLinearColor_Parms), Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueLinearColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueLinearColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueLinearColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueLinearColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueLinearColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueLinearColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueQuat_Statics
	{
		struct DatasmithPropertyCaptureElement_eventSetValueQuat_Parms
		{
			FQuat InValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueQuat_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithPropertyCaptureElement_eventSetValueQuat_Parms, InValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueQuat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueQuat_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueQuat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Set the recorded value for this capture */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Set the recorded value for this capture" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueQuat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithPropertyCaptureElement, nullptr, "SetValueQuat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueQuat_Statics::DatasmithPropertyCaptureElement_eventSetValueQuat_Parms), Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueQuat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueQuat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueQuat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueQuat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueQuat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueRotator_Statics
	{
		struct DatasmithPropertyCaptureElement_eventSetValueRotator_Parms
		{
			FRotator InValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueRotator_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithPropertyCaptureElement_eventSetValueRotator_Parms, InValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueRotator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueRotator_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueRotator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Set the recorded value for this capture */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Set the recorded value for this capture" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithPropertyCaptureElement, nullptr, "SetValueRotator", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueRotator_Statics::DatasmithPropertyCaptureElement_eventSetValueRotator_Parms), Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueRotator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueRotator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueRotator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueString_Statics
	{
		struct DatasmithPropertyCaptureElement_eventSetValueString_Parms
		{
			FString InValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueString_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueString_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithPropertyCaptureElement_eventSetValueString_Parms, InValue), METADATA_PARAMS(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueString_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueString_Statics::NewProp_InValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueString_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Set the recorded value for this capture */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Set the recorded value for this capture" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithPropertyCaptureElement, nullptr, "SetValueString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueString_Statics::DatasmithPropertyCaptureElement_eventSetValueString_Parms), Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueVector_Statics
	{
		struct DatasmithPropertyCaptureElement_eventSetValueVector_Parms
		{
			FVector InValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueVector_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithPropertyCaptureElement_eventSetValueVector_Parms, InValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueVector_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Set the recorded value for this capture */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Set the recorded value for this capture" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithPropertyCaptureElement, nullptr, "SetValueVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueVector_Statics::DatasmithPropertyCaptureElement_eventSetValueVector_Parms), Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueVector2D_Statics
	{
		struct DatasmithPropertyCaptureElement_eventSetValueVector2D_Parms
		{
			FVector2D InValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueVector2D_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithPropertyCaptureElement_eventSetValueVector2D_Parms, InValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueVector2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueVector2D_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueVector2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Set the recorded value for this capture */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Set the recorded value for this capture" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueVector2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithPropertyCaptureElement, nullptr, "SetValueVector2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueVector2D_Statics::DatasmithPropertyCaptureElement_eventSetValueVector2D_Parms), Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueVector2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueVector2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueVector2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueVector2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueVector2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueVector2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueVector4_Statics
	{
		struct DatasmithPropertyCaptureElement_eventSetValueVector4_Parms
		{
			FVector4 InValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueVector4_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithPropertyCaptureElement_eventSetValueVector4_Parms, InValue), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueVector4_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueVector4_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueVector4_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Set the recorded value for this capture */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Set the recorded value for this capture" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueVector4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithPropertyCaptureElement, nullptr, "SetValueVector4", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueVector4_Statics::DatasmithPropertyCaptureElement_eventSetValueVector4_Parms), Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueVector4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueVector4_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueVector4_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueVector4_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueVector4()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueVector4_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithPropertyCaptureElement);
	UClass* Z_Construct_UClass_UDatasmithPropertyCaptureElement_NoRegister()
	{
		return UDatasmithPropertyCaptureElement::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithPropertyCaptureElement_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithPropertyCaptureElement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithBasePropertyCaptureElement,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithImporter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDatasmithPropertyCaptureElement_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueBool, "GetValueBool" }, // 3499209366
		{ &Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueColor, "GetValueColor" }, // 3110519887
		{ &Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueFloat, "GetValueFloat" }, // 1179086358
		{ &Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueInt, "GetValueInt" }, // 1658021178
		{ &Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueIntPoint, "GetValueIntPoint" }, // 1770466012
		{ &Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueLinearColor, "GetValueLinearColor" }, // 2016983242
		{ &Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueQuat, "GetValueQuat" }, // 1066504406
		{ &Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueRotator, "GetValueRotator" }, // 2227617268
		{ &Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueString, "GetValueString" }, // 3370150596
		{ &Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueVector, "GetValueVector" }, // 753990377
		{ &Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueVector2D, "GetValueVector2D" }, // 1839205914
		{ &Z_Construct_UFunction_UDatasmithPropertyCaptureElement_GetValueVector4, "GetValueVector4" }, // 3029416147
		{ &Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueBool, "SetValueBool" }, // 131785660
		{ &Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueColor, "SetValueColor" }, // 1544674168
		{ &Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueFloat, "SetValueFloat" }, // 1902476695
		{ &Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueInt, "SetValueInt" }, // 23845803
		{ &Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueIntPoint, "SetValueIntPoint" }, // 3290369088
		{ &Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueLinearColor, "SetValueLinearColor" }, // 1568303579
		{ &Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueQuat, "SetValueQuat" }, // 417924850
		{ &Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueRotator, "SetValueRotator" }, // 2403203370
		{ &Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueString, "SetValueString" }, // 3434034131
		{ &Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueVector, "SetValueVector" }, // 1394374879
		{ &Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueVector2D, "SetValueVector2D" }, // 2775890524
		{ &Z_Construct_UFunction_UDatasmithPropertyCaptureElement_SetValueVector4, "SetValueVector4" }, // 276217709
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithPropertyCaptureElement_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * UDatasmithPropertyCaptureElement\n */" },
		{ "IncludePath", "ObjectElements/DatasmithUObjectElements.h" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "* UDatasmithPropertyCaptureElement" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithPropertyCaptureElement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithPropertyCaptureElement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithPropertyCaptureElement_Statics::ClassParams = {
		&UDatasmithPropertyCaptureElement::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithPropertyCaptureElement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithPropertyCaptureElement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithPropertyCaptureElement()
	{
		if (!Z_Registration_Info_UClass_UDatasmithPropertyCaptureElement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithPropertyCaptureElement.OuterSingleton, Z_Construct_UClass_UDatasmithPropertyCaptureElement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithPropertyCaptureElement.OuterSingleton;
	}
	template<> DATASMITHIMPORTER_API UClass* StaticClass<UDatasmithPropertyCaptureElement>()
	{
		return UDatasmithPropertyCaptureElement::StaticClass();
	}
	UDatasmithPropertyCaptureElement::UDatasmithPropertyCaptureElement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithPropertyCaptureElement);
	UDatasmithPropertyCaptureElement::~UDatasmithPropertyCaptureElement() {}
	DEFINE_FUNCTION(UDatasmithObjectPropertyCaptureElement::execGetRecordedObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDatasmithObjectElement**)Z_Param__Result=P_THIS->GetRecordedObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithObjectPropertyCaptureElement::execSetRecordedObject)
	{
		P_GET_OBJECT(UDatasmithObjectElement,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRecordedObject(Z_Param_Object);
		P_NATIVE_END;
	}
	void UDatasmithObjectPropertyCaptureElement::StaticRegisterNativesUDatasmithObjectPropertyCaptureElement()
	{
		UClass* Class = UDatasmithObjectPropertyCaptureElement::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRecordedObject", &UDatasmithObjectPropertyCaptureElement::execGetRecordedObject },
			{ "SetRecordedObject", &UDatasmithObjectPropertyCaptureElement::execSetRecordedObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDatasmithObjectPropertyCaptureElement_GetRecordedObject_Statics
	{
		struct DatasmithObjectPropertyCaptureElement_eventGetRecordedObject_Parms
		{
			UDatasmithObjectElement* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithObjectPropertyCaptureElement_GetRecordedObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithObjectPropertyCaptureElement_eventGetRecordedObject_Parms, ReturnValue), Z_Construct_UClass_UDatasmithObjectElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithObjectPropertyCaptureElement_GetRecordedObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithObjectPropertyCaptureElement_GetRecordedObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithObjectPropertyCaptureElement_GetRecordedObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Gets the category of this property capture */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Gets the category of this property capture" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithObjectPropertyCaptureElement_GetRecordedObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithObjectPropertyCaptureElement, nullptr, "GetRecordedObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithObjectPropertyCaptureElement_GetRecordedObject_Statics::DatasmithObjectPropertyCaptureElement_eventGetRecordedObject_Parms), Z_Construct_UFunction_UDatasmithObjectPropertyCaptureElement_GetRecordedObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithObjectPropertyCaptureElement_GetRecordedObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithObjectPropertyCaptureElement_GetRecordedObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithObjectPropertyCaptureElement_GetRecordedObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithObjectPropertyCaptureElement_GetRecordedObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithObjectPropertyCaptureElement_GetRecordedObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithObjectPropertyCaptureElement_SetRecordedObject_Statics
	{
		struct DatasmithObjectPropertyCaptureElement_eventSetRecordedObject_Parms
		{
			UDatasmithObjectElement* Object;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithObjectPropertyCaptureElement_SetRecordedObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithObjectPropertyCaptureElement_eventSetRecordedObject_Parms, Object), Z_Construct_UClass_UDatasmithObjectElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithObjectPropertyCaptureElement_SetRecordedObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithObjectPropertyCaptureElement_SetRecordedObject_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithObjectPropertyCaptureElement_SetRecordedObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Gets the category of this property capture */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Gets the category of this property capture" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithObjectPropertyCaptureElement_SetRecordedObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithObjectPropertyCaptureElement, nullptr, "SetRecordedObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithObjectPropertyCaptureElement_SetRecordedObject_Statics::DatasmithObjectPropertyCaptureElement_eventSetRecordedObject_Parms), Z_Construct_UFunction_UDatasmithObjectPropertyCaptureElement_SetRecordedObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithObjectPropertyCaptureElement_SetRecordedObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithObjectPropertyCaptureElement_SetRecordedObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithObjectPropertyCaptureElement_SetRecordedObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithObjectPropertyCaptureElement_SetRecordedObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithObjectPropertyCaptureElement_SetRecordedObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithObjectPropertyCaptureElement);
	UClass* Z_Construct_UClass_UDatasmithObjectPropertyCaptureElement_NoRegister()
	{
		return UDatasmithObjectPropertyCaptureElement::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithObjectPropertyCaptureElement_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithObjectPropertyCaptureElement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithBasePropertyCaptureElement,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithImporter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDatasmithObjectPropertyCaptureElement_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDatasmithObjectPropertyCaptureElement_GetRecordedObject, "GetRecordedObject" }, // 392544822
		{ &Z_Construct_UFunction_UDatasmithObjectPropertyCaptureElement_SetRecordedObject, "SetRecordedObject" }, // 760649040
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithObjectPropertyCaptureElement_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * UDatasmithObjectPropertyCaptureElement\n */" },
		{ "IncludePath", "ObjectElements/DatasmithUObjectElements.h" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "* UDatasmithObjectPropertyCaptureElement" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithObjectPropertyCaptureElement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithObjectPropertyCaptureElement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithObjectPropertyCaptureElement_Statics::ClassParams = {
		&UDatasmithObjectPropertyCaptureElement::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithObjectPropertyCaptureElement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithObjectPropertyCaptureElement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithObjectPropertyCaptureElement()
	{
		if (!Z_Registration_Info_UClass_UDatasmithObjectPropertyCaptureElement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithObjectPropertyCaptureElement.OuterSingleton, Z_Construct_UClass_UDatasmithObjectPropertyCaptureElement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithObjectPropertyCaptureElement.OuterSingleton;
	}
	template<> DATASMITHIMPORTER_API UClass* StaticClass<UDatasmithObjectPropertyCaptureElement>()
	{
		return UDatasmithObjectPropertyCaptureElement::StaticClass();
	}
	UDatasmithObjectPropertyCaptureElement::UDatasmithObjectPropertyCaptureElement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithObjectPropertyCaptureElement);
	UDatasmithObjectPropertyCaptureElement::~UDatasmithObjectPropertyCaptureElement() {}
	DEFINE_FUNCTION(UDatasmithActorBindingElement::execRemovePropertyCapture)
	{
		P_GET_OBJECT(UDatasmithBasePropertyCaptureElement,Z_Param_Prop);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemovePropertyCapture(Z_Param_Prop);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithActorBindingElement::execGetPropertyCapture)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDatasmithBasePropertyCaptureElement**)Z_Param__Result=P_THIS->GetPropertyCapture(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithActorBindingElement::execGetPropertyCapturesCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPropertyCapturesCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithActorBindingElement::execAddPropertyCapture)
	{
		P_GET_OBJECT(UDatasmithBasePropertyCaptureElement,Z_Param_Prop);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddPropertyCapture(Z_Param_Prop);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithActorBindingElement::execCreateObjectPropertyCapture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDatasmithObjectPropertyCaptureElement**)Z_Param__Result=P_THIS->CreateObjectPropertyCapture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithActorBindingElement::execCreatePropertyCapture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDatasmithPropertyCaptureElement**)Z_Param__Result=P_THIS->CreatePropertyCapture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithActorBindingElement::execGetActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDatasmithActorElement**)Z_Param__Result=P_THIS->GetActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithActorBindingElement::execSetActor)
	{
		P_GET_OBJECT(UDatasmithActorElement,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActor(Z_Param_Actor);
		P_NATIVE_END;
	}
	void UDatasmithActorBindingElement::StaticRegisterNativesUDatasmithActorBindingElement()
	{
		UClass* Class = UDatasmithActorBindingElement::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPropertyCapture", &UDatasmithActorBindingElement::execAddPropertyCapture },
			{ "CreateObjectPropertyCapture", &UDatasmithActorBindingElement::execCreateObjectPropertyCapture },
			{ "CreatePropertyCapture", &UDatasmithActorBindingElement::execCreatePropertyCapture },
			{ "GetActor", &UDatasmithActorBindingElement::execGetActor },
			{ "GetPropertyCapture", &UDatasmithActorBindingElement::execGetPropertyCapture },
			{ "GetPropertyCapturesCount", &UDatasmithActorBindingElement::execGetPropertyCapturesCount },
			{ "RemovePropertyCapture", &UDatasmithActorBindingElement::execRemovePropertyCapture },
			{ "SetActor", &UDatasmithActorBindingElement::execSetActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDatasmithActorBindingElement_AddPropertyCapture_Statics
	{
		struct DatasmithActorBindingElement_eventAddPropertyCapture_Parms
		{
			const UDatasmithBasePropertyCaptureElement* Prop;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Prop_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Prop;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithActorBindingElement_AddPropertyCapture_Statics::NewProp_Prop_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithActorBindingElement_AddPropertyCapture_Statics::NewProp_Prop = { "Prop", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithActorBindingElement_eventAddPropertyCapture_Parms, Prop), Z_Construct_UClass_UDatasmithBasePropertyCaptureElement_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithActorBindingElement_AddPropertyCapture_Statics::NewProp_Prop_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithActorBindingElement_AddPropertyCapture_Statics::NewProp_Prop_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithActorBindingElement_AddPropertyCapture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithActorBindingElement_AddPropertyCapture_Statics::NewProp_Prop,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithActorBindingElement_AddPropertyCapture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Adds an existing property capture to this binding */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Adds an existing property capture to this binding" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithActorBindingElement_AddPropertyCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithActorBindingElement, nullptr, "AddPropertyCapture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithActorBindingElement_AddPropertyCapture_Statics::DatasmithActorBindingElement_eventAddPropertyCapture_Parms), Z_Construct_UFunction_UDatasmithActorBindingElement_AddPropertyCapture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithActorBindingElement_AddPropertyCapture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithActorBindingElement_AddPropertyCapture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithActorBindingElement_AddPropertyCapture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithActorBindingElement_AddPropertyCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithActorBindingElement_AddPropertyCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithActorBindingElement_CreateObjectPropertyCapture_Statics
	{
		struct DatasmithActorBindingElement_eventCreateObjectPropertyCapture_Parms
		{
			UDatasmithObjectPropertyCaptureElement* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithActorBindingElement_CreateObjectPropertyCapture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithActorBindingElement_eventCreateObjectPropertyCapture_Parms, ReturnValue), Z_Construct_UClass_UDatasmithObjectPropertyCaptureElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithActorBindingElement_CreateObjectPropertyCapture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithActorBindingElement_CreateObjectPropertyCapture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithActorBindingElement_CreateObjectPropertyCapture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Scene" },
		{ "Comment", "/** Create a new object property capture and add it to this binding */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Create a new object property capture and add it to this binding" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithActorBindingElement_CreateObjectPropertyCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithActorBindingElement, nullptr, "CreateObjectPropertyCapture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithActorBindingElement_CreateObjectPropertyCapture_Statics::DatasmithActorBindingElement_eventCreateObjectPropertyCapture_Parms), Z_Construct_UFunction_UDatasmithActorBindingElement_CreateObjectPropertyCapture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithActorBindingElement_CreateObjectPropertyCapture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithActorBindingElement_CreateObjectPropertyCapture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithActorBindingElement_CreateObjectPropertyCapture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithActorBindingElement_CreateObjectPropertyCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithActorBindingElement_CreateObjectPropertyCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithActorBindingElement_CreatePropertyCapture_Statics
	{
		struct DatasmithActorBindingElement_eventCreatePropertyCapture_Parms
		{
			UDatasmithPropertyCaptureElement* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithActorBindingElement_CreatePropertyCapture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithActorBindingElement_eventCreatePropertyCapture_Parms, ReturnValue), Z_Construct_UClass_UDatasmithPropertyCaptureElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithActorBindingElement_CreatePropertyCapture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithActorBindingElement_CreatePropertyCapture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithActorBindingElement_CreatePropertyCapture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Scene" },
		{ "Comment", "/** Create a new property capture and add it to this binding */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Create a new property capture and add it to this binding" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithActorBindingElement_CreatePropertyCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithActorBindingElement, nullptr, "CreatePropertyCapture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithActorBindingElement_CreatePropertyCapture_Statics::DatasmithActorBindingElement_eventCreatePropertyCapture_Parms), Z_Construct_UFunction_UDatasmithActorBindingElement_CreatePropertyCapture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithActorBindingElement_CreatePropertyCapture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithActorBindingElement_CreatePropertyCapture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithActorBindingElement_CreatePropertyCapture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithActorBindingElement_CreatePropertyCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithActorBindingElement_CreatePropertyCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithActorBindingElement_GetActor_Statics
	{
		struct DatasmithActorBindingElement_eventGetActor_Parms
		{
			UDatasmithActorElement* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithActorBindingElement_GetActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithActorBindingElement_eventGetActor_Parms, ReturnValue), Z_Construct_UClass_UDatasmithActorElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithActorBindingElement_GetActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithActorBindingElement_GetActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithActorBindingElement_GetActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Gets the actor that this binding will try capturing */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Gets the actor that this binding will try capturing" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithActorBindingElement_GetActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithActorBindingElement, nullptr, "GetActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithActorBindingElement_GetActor_Statics::DatasmithActorBindingElement_eventGetActor_Parms), Z_Construct_UFunction_UDatasmithActorBindingElement_GetActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithActorBindingElement_GetActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithActorBindingElement_GetActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithActorBindingElement_GetActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithActorBindingElement_GetActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithActorBindingElement_GetActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithActorBindingElement_GetPropertyCapture_Statics
	{
		struct DatasmithActorBindingElement_eventGetPropertyCapture_Parms
		{
			int32 Index;
			UDatasmithBasePropertyCaptureElement* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDatasmithActorBindingElement_GetPropertyCapture_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithActorBindingElement_eventGetPropertyCapture_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithActorBindingElement_GetPropertyCapture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithActorBindingElement_eventGetPropertyCapture_Parms, ReturnValue), Z_Construct_UClass_UDatasmithBasePropertyCaptureElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithActorBindingElement_GetPropertyCapture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithActorBindingElement_GetPropertyCapture_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithActorBindingElement_GetPropertyCapture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithActorBindingElement_GetPropertyCapture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Gets property that will be captured from the bound actor */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Gets property that will be captured from the bound actor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithActorBindingElement_GetPropertyCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithActorBindingElement, nullptr, "GetPropertyCapture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithActorBindingElement_GetPropertyCapture_Statics::DatasmithActorBindingElement_eventGetPropertyCapture_Parms), Z_Construct_UFunction_UDatasmithActorBindingElement_GetPropertyCapture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithActorBindingElement_GetPropertyCapture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithActorBindingElement_GetPropertyCapture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithActorBindingElement_GetPropertyCapture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithActorBindingElement_GetPropertyCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithActorBindingElement_GetPropertyCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithActorBindingElement_GetPropertyCapturesCount_Statics
	{
		struct DatasmithActorBindingElement_eventGetPropertyCapturesCount_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDatasmithActorBindingElement_GetPropertyCapturesCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithActorBindingElement_eventGetPropertyCapturesCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithActorBindingElement_GetPropertyCapturesCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithActorBindingElement_GetPropertyCapturesCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithActorBindingElement_GetPropertyCapturesCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Gets how many properties will be captured from the bound actor */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Gets how many properties will be captured from the bound actor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithActorBindingElement_GetPropertyCapturesCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithActorBindingElement, nullptr, "GetPropertyCapturesCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithActorBindingElement_GetPropertyCapturesCount_Statics::DatasmithActorBindingElement_eventGetPropertyCapturesCount_Parms), Z_Construct_UFunction_UDatasmithActorBindingElement_GetPropertyCapturesCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithActorBindingElement_GetPropertyCapturesCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithActorBindingElement_GetPropertyCapturesCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithActorBindingElement_GetPropertyCapturesCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithActorBindingElement_GetPropertyCapturesCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithActorBindingElement_GetPropertyCapturesCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithActorBindingElement_RemovePropertyCapture_Statics
	{
		struct DatasmithActorBindingElement_eventRemovePropertyCapture_Parms
		{
			const UDatasmithBasePropertyCaptureElement* Prop;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Prop_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Prop;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithActorBindingElement_RemovePropertyCapture_Statics::NewProp_Prop_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithActorBindingElement_RemovePropertyCapture_Statics::NewProp_Prop = { "Prop", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithActorBindingElement_eventRemovePropertyCapture_Parms, Prop), Z_Construct_UClass_UDatasmithBasePropertyCaptureElement_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithActorBindingElement_RemovePropertyCapture_Statics::NewProp_Prop_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithActorBindingElement_RemovePropertyCapture_Statics::NewProp_Prop_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithActorBindingElement_RemovePropertyCapture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithActorBindingElement_RemovePropertyCapture_Statics::NewProp_Prop,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithActorBindingElement_RemovePropertyCapture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Removes one of the properties that will be captured from the bound actor */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Removes one of the properties that will be captured from the bound actor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithActorBindingElement_RemovePropertyCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithActorBindingElement, nullptr, "RemovePropertyCapture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithActorBindingElement_RemovePropertyCapture_Statics::DatasmithActorBindingElement_eventRemovePropertyCapture_Parms), Z_Construct_UFunction_UDatasmithActorBindingElement_RemovePropertyCapture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithActorBindingElement_RemovePropertyCapture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithActorBindingElement_RemovePropertyCapture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithActorBindingElement_RemovePropertyCapture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithActorBindingElement_RemovePropertyCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithActorBindingElement_RemovePropertyCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithActorBindingElement_SetActor_Statics
	{
		struct DatasmithActorBindingElement_eventSetActor_Parms
		{
			UDatasmithActorElement* Actor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithActorBindingElement_SetActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithActorBindingElement_eventSetActor_Parms, Actor), Z_Construct_UClass_UDatasmithActorElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithActorBindingElement_SetActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithActorBindingElement_SetActor_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithActorBindingElement_SetActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Sets the actor that this binding will try capturing */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Sets the actor that this binding will try capturing" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithActorBindingElement_SetActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithActorBindingElement, nullptr, "SetActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithActorBindingElement_SetActor_Statics::DatasmithActorBindingElement_eventSetActor_Parms), Z_Construct_UFunction_UDatasmithActorBindingElement_SetActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithActorBindingElement_SetActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithActorBindingElement_SetActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithActorBindingElement_SetActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithActorBindingElement_SetActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithActorBindingElement_SetActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithActorBindingElement);
	UClass* Z_Construct_UClass_UDatasmithActorBindingElement_NoRegister()
	{
		return UDatasmithActorBindingElement::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithActorBindingElement_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithActorBindingElement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithObjectElement,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithImporter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDatasmithActorBindingElement_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDatasmithActorBindingElement_AddPropertyCapture, "AddPropertyCapture" }, // 352032592
		{ &Z_Construct_UFunction_UDatasmithActorBindingElement_CreateObjectPropertyCapture, "CreateObjectPropertyCapture" }, // 232864993
		{ &Z_Construct_UFunction_UDatasmithActorBindingElement_CreatePropertyCapture, "CreatePropertyCapture" }, // 2724462710
		{ &Z_Construct_UFunction_UDatasmithActorBindingElement_GetActor, "GetActor" }, // 1692528583
		{ &Z_Construct_UFunction_UDatasmithActorBindingElement_GetPropertyCapture, "GetPropertyCapture" }, // 765225118
		{ &Z_Construct_UFunction_UDatasmithActorBindingElement_GetPropertyCapturesCount, "GetPropertyCapturesCount" }, // 520394162
		{ &Z_Construct_UFunction_UDatasmithActorBindingElement_RemovePropertyCapture, "RemovePropertyCapture" }, // 1601432435
		{ &Z_Construct_UFunction_UDatasmithActorBindingElement_SetActor, "SetActor" }, // 4145602881
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithActorBindingElement_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * UDatasmithActorBindingElement\n */" },
		{ "IncludePath", "ObjectElements/DatasmithUObjectElements.h" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "* UDatasmithActorBindingElement" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithActorBindingElement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithActorBindingElement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithActorBindingElement_Statics::ClassParams = {
		&UDatasmithActorBindingElement::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithActorBindingElement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithActorBindingElement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithActorBindingElement()
	{
		if (!Z_Registration_Info_UClass_UDatasmithActorBindingElement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithActorBindingElement.OuterSingleton, Z_Construct_UClass_UDatasmithActorBindingElement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithActorBindingElement.OuterSingleton;
	}
	template<> DATASMITHIMPORTER_API UClass* StaticClass<UDatasmithActorBindingElement>()
	{
		return UDatasmithActorBindingElement::StaticClass();
	}
	UDatasmithActorBindingElement::UDatasmithActorBindingElement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithActorBindingElement);
	UDatasmithActorBindingElement::~UDatasmithActorBindingElement() {}
	DEFINE_FUNCTION(UDatasmithVariantElement::execRemoveActorBinding)
	{
		P_GET_OBJECT(UDatasmithActorBindingElement,Z_Param_Binding);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveActorBinding(Z_Param_Binding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithVariantElement::execGetActorBinding)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDatasmithActorBindingElement**)Z_Param__Result=P_THIS->GetActorBinding(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithVariantElement::execGetActorBindingsCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetActorBindingsCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithVariantElement::execAddActorBinding)
	{
		P_GET_OBJECT(UDatasmithActorBindingElement,Z_Param_Binding);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddActorBinding(Z_Param_Binding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithVariantElement::execCreateActorBinding)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDatasmithActorBindingElement**)Z_Param__Result=P_THIS->CreateActorBinding();
		P_NATIVE_END;
	}
	void UDatasmithVariantElement::StaticRegisterNativesUDatasmithVariantElement()
	{
		UClass* Class = UDatasmithVariantElement::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddActorBinding", &UDatasmithVariantElement::execAddActorBinding },
			{ "CreateActorBinding", &UDatasmithVariantElement::execCreateActorBinding },
			{ "GetActorBinding", &UDatasmithVariantElement::execGetActorBinding },
			{ "GetActorBindingsCount", &UDatasmithVariantElement::execGetActorBindingsCount },
			{ "RemoveActorBinding", &UDatasmithVariantElement::execRemoveActorBinding },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDatasmithVariantElement_AddActorBinding_Statics
	{
		struct DatasmithVariantElement_eventAddActorBinding_Parms
		{
			const UDatasmithActorBindingElement* Binding;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Binding_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Binding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithVariantElement_AddActorBinding_Statics::NewProp_Binding_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithVariantElement_AddActorBinding_Statics::NewProp_Binding = { "Binding", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithVariantElement_eventAddActorBinding_Parms, Binding), Z_Construct_UClass_UDatasmithActorBindingElement_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithVariantElement_AddActorBinding_Statics::NewProp_Binding_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithVariantElement_AddActorBinding_Statics::NewProp_Binding_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithVariantElement_AddActorBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithVariantElement_AddActorBinding_Statics::NewProp_Binding,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithVariantElement_AddActorBinding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Adds an existing actor binding to this variant */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Adds an existing actor binding to this variant" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithVariantElement_AddActorBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithVariantElement, nullptr, "AddActorBinding", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithVariantElement_AddActorBinding_Statics::DatasmithVariantElement_eventAddActorBinding_Parms), Z_Construct_UFunction_UDatasmithVariantElement_AddActorBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithVariantElement_AddActorBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithVariantElement_AddActorBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithVariantElement_AddActorBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithVariantElement_AddActorBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithVariantElement_AddActorBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithVariantElement_CreateActorBinding_Statics
	{
		struct DatasmithVariantElement_eventCreateActorBinding_Parms
		{
			UDatasmithActorBindingElement* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithVariantElement_CreateActorBinding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithVariantElement_eventCreateActorBinding_Parms, ReturnValue), Z_Construct_UClass_UDatasmithActorBindingElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithVariantElement_CreateActorBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithVariantElement_CreateActorBinding_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithVariantElement_CreateActorBinding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Scene" },
		{ "Comment", "/** Create a new actor binding and add it to this variant */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Create a new actor binding and add it to this variant" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithVariantElement_CreateActorBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithVariantElement, nullptr, "CreateActorBinding", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithVariantElement_CreateActorBinding_Statics::DatasmithVariantElement_eventCreateActorBinding_Parms), Z_Construct_UFunction_UDatasmithVariantElement_CreateActorBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithVariantElement_CreateActorBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithVariantElement_CreateActorBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithVariantElement_CreateActorBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithVariantElement_CreateActorBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithVariantElement_CreateActorBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithVariantElement_GetActorBinding_Statics
	{
		struct DatasmithVariantElement_eventGetActorBinding_Parms
		{
			int32 Index;
			UDatasmithActorBindingElement* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDatasmithVariantElement_GetActorBinding_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithVariantElement_eventGetActorBinding_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithVariantElement_GetActorBinding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithVariantElement_eventGetActorBinding_Parms, ReturnValue), Z_Construct_UClass_UDatasmithActorBindingElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithVariantElement_GetActorBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithVariantElement_GetActorBinding_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithVariantElement_GetActorBinding_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithVariantElement_GetActorBinding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Gets an actor binding from this variant */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Gets an actor binding from this variant" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithVariantElement_GetActorBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithVariantElement, nullptr, "GetActorBinding", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithVariantElement_GetActorBinding_Statics::DatasmithVariantElement_eventGetActorBinding_Parms), Z_Construct_UFunction_UDatasmithVariantElement_GetActorBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithVariantElement_GetActorBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithVariantElement_GetActorBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithVariantElement_GetActorBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithVariantElement_GetActorBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithVariantElement_GetActorBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithVariantElement_GetActorBindingsCount_Statics
	{
		struct DatasmithVariantElement_eventGetActorBindingsCount_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDatasmithVariantElement_GetActorBindingsCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithVariantElement_eventGetActorBindingsCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithVariantElement_GetActorBindingsCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithVariantElement_GetActorBindingsCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithVariantElement_GetActorBindingsCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Gets how many actor bindings are in this variant */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Gets how many actor bindings are in this variant" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithVariantElement_GetActorBindingsCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithVariantElement, nullptr, "GetActorBindingsCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithVariantElement_GetActorBindingsCount_Statics::DatasmithVariantElement_eventGetActorBindingsCount_Parms), Z_Construct_UFunction_UDatasmithVariantElement_GetActorBindingsCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithVariantElement_GetActorBindingsCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithVariantElement_GetActorBindingsCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithVariantElement_GetActorBindingsCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithVariantElement_GetActorBindingsCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithVariantElement_GetActorBindingsCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithVariantElement_RemoveActorBinding_Statics
	{
		struct DatasmithVariantElement_eventRemoveActorBinding_Parms
		{
			const UDatasmithActorBindingElement* Binding;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Binding_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Binding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithVariantElement_RemoveActorBinding_Statics::NewProp_Binding_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithVariantElement_RemoveActorBinding_Statics::NewProp_Binding = { "Binding", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithVariantElement_eventRemoveActorBinding_Parms, Binding), Z_Construct_UClass_UDatasmithActorBindingElement_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithVariantElement_RemoveActorBinding_Statics::NewProp_Binding_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithVariantElement_RemoveActorBinding_Statics::NewProp_Binding_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithVariantElement_RemoveActorBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithVariantElement_RemoveActorBinding_Statics::NewProp_Binding,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithVariantElement_RemoveActorBinding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Removes an actor binding from this variant */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Removes an actor binding from this variant" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithVariantElement_RemoveActorBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithVariantElement, nullptr, "RemoveActorBinding", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithVariantElement_RemoveActorBinding_Statics::DatasmithVariantElement_eventRemoveActorBinding_Parms), Z_Construct_UFunction_UDatasmithVariantElement_RemoveActorBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithVariantElement_RemoveActorBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithVariantElement_RemoveActorBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithVariantElement_RemoveActorBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithVariantElement_RemoveActorBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithVariantElement_RemoveActorBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithVariantElement);
	UClass* Z_Construct_UClass_UDatasmithVariantElement_NoRegister()
	{
		return UDatasmithVariantElement::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithVariantElement_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithVariantElement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithObjectElement,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithImporter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDatasmithVariantElement_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDatasmithVariantElement_AddActorBinding, "AddActorBinding" }, // 1886130062
		{ &Z_Construct_UFunction_UDatasmithVariantElement_CreateActorBinding, "CreateActorBinding" }, // 236915926
		{ &Z_Construct_UFunction_UDatasmithVariantElement_GetActorBinding, "GetActorBinding" }, // 3090082360
		{ &Z_Construct_UFunction_UDatasmithVariantElement_GetActorBindingsCount, "GetActorBindingsCount" }, // 406989292
		{ &Z_Construct_UFunction_UDatasmithVariantElement_RemoveActorBinding, "RemoveActorBinding" }, // 1435766421
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithVariantElement_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * UDatasmithVariantElement\n */" },
		{ "IncludePath", "ObjectElements/DatasmithUObjectElements.h" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "* UDatasmithVariantElement" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithVariantElement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithVariantElement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithVariantElement_Statics::ClassParams = {
		&UDatasmithVariantElement::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithVariantElement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithVariantElement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithVariantElement()
	{
		if (!Z_Registration_Info_UClass_UDatasmithVariantElement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithVariantElement.OuterSingleton, Z_Construct_UClass_UDatasmithVariantElement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithVariantElement.OuterSingleton;
	}
	template<> DATASMITHIMPORTER_API UClass* StaticClass<UDatasmithVariantElement>()
	{
		return UDatasmithVariantElement::StaticClass();
	}
	UDatasmithVariantElement::UDatasmithVariantElement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithVariantElement);
	UDatasmithVariantElement::~UDatasmithVariantElement() {}
	DEFINE_FUNCTION(UDatasmithVariantSetElement::execRemoveVariant)
	{
		P_GET_OBJECT(UDatasmithVariantElement,Z_Param_Variant);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveVariant(Z_Param_Variant);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithVariantSetElement::execGetVariant)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDatasmithVariantElement**)Z_Param__Result=P_THIS->GetVariant(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithVariantSetElement::execGetVariantsCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetVariantsCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithVariantSetElement::execAddVariant)
	{
		P_GET_OBJECT(UDatasmithVariantElement,Z_Param_Variant);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddVariant(Z_Param_Variant);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithVariantSetElement::execCreateVariant)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InElementName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDatasmithVariantElement**)Z_Param__Result=P_THIS->CreateVariant(Z_Param_InElementName);
		P_NATIVE_END;
	}
	void UDatasmithVariantSetElement::StaticRegisterNativesUDatasmithVariantSetElement()
	{
		UClass* Class = UDatasmithVariantSetElement::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddVariant", &UDatasmithVariantSetElement::execAddVariant },
			{ "CreateVariant", &UDatasmithVariantSetElement::execCreateVariant },
			{ "GetVariant", &UDatasmithVariantSetElement::execGetVariant },
			{ "GetVariantsCount", &UDatasmithVariantSetElement::execGetVariantsCount },
			{ "RemoveVariant", &UDatasmithVariantSetElement::execRemoveVariant },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDatasmithVariantSetElement_AddVariant_Statics
	{
		struct DatasmithVariantSetElement_eventAddVariant_Parms
		{
			const UDatasmithVariantElement* Variant;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Variant_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Variant;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithVariantSetElement_AddVariant_Statics::NewProp_Variant_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithVariantSetElement_AddVariant_Statics::NewProp_Variant = { "Variant", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithVariantSetElement_eventAddVariant_Parms, Variant), Z_Construct_UClass_UDatasmithVariantElement_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithVariantSetElement_AddVariant_Statics::NewProp_Variant_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithVariantSetElement_AddVariant_Statics::NewProp_Variant_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithVariantSetElement_AddVariant_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithVariantSetElement_AddVariant_Statics::NewProp_Variant,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithVariantSetElement_AddVariant_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Adds an existing variant to this variant set */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Adds an existing variant to this variant set" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithVariantSetElement_AddVariant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithVariantSetElement, nullptr, "AddVariant", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithVariantSetElement_AddVariant_Statics::DatasmithVariantSetElement_eventAddVariant_Parms), Z_Construct_UFunction_UDatasmithVariantSetElement_AddVariant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithVariantSetElement_AddVariant_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithVariantSetElement_AddVariant_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithVariantSetElement_AddVariant_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithVariantSetElement_AddVariant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithVariantSetElement_AddVariant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithVariantSetElement_CreateVariant_Statics
	{
		struct DatasmithVariantSetElement_eventCreateVariant_Parms
		{
			FName InElementName;
			UDatasmithVariantElement* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InElementName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDatasmithVariantSetElement_CreateVariant_Statics::NewProp_InElementName = { "InElementName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithVariantSetElement_eventCreateVariant_Parms, InElementName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithVariantSetElement_CreateVariant_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithVariantSetElement_eventCreateVariant_Parms, ReturnValue), Z_Construct_UClass_UDatasmithVariantElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithVariantSetElement_CreateVariant_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithVariantSetElement_CreateVariant_Statics::NewProp_InElementName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithVariantSetElement_CreateVariant_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithVariantSetElement_CreateVariant_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Scene" },
		{ "Comment", "/** Create a new variant and add it to the parent variant set */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Create a new variant and add it to the parent variant set" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithVariantSetElement_CreateVariant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithVariantSetElement, nullptr, "CreateVariant", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithVariantSetElement_CreateVariant_Statics::DatasmithVariantSetElement_eventCreateVariant_Parms), Z_Construct_UFunction_UDatasmithVariantSetElement_CreateVariant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithVariantSetElement_CreateVariant_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithVariantSetElement_CreateVariant_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithVariantSetElement_CreateVariant_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithVariantSetElement_CreateVariant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithVariantSetElement_CreateVariant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithVariantSetElement_GetVariant_Statics
	{
		struct DatasmithVariantSetElement_eventGetVariant_Parms
		{
			int32 Index;
			UDatasmithVariantElement* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDatasmithVariantSetElement_GetVariant_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithVariantSetElement_eventGetVariant_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithVariantSetElement_GetVariant_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithVariantSetElement_eventGetVariant_Parms, ReturnValue), Z_Construct_UClass_UDatasmithVariantElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithVariantSetElement_GetVariant_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithVariantSetElement_GetVariant_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithVariantSetElement_GetVariant_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithVariantSetElement_GetVariant_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Gets a variant from this variant set */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Gets a variant from this variant set" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithVariantSetElement_GetVariant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithVariantSetElement, nullptr, "GetVariant", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithVariantSetElement_GetVariant_Statics::DatasmithVariantSetElement_eventGetVariant_Parms), Z_Construct_UFunction_UDatasmithVariantSetElement_GetVariant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithVariantSetElement_GetVariant_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithVariantSetElement_GetVariant_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithVariantSetElement_GetVariant_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithVariantSetElement_GetVariant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithVariantSetElement_GetVariant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithVariantSetElement_GetVariantsCount_Statics
	{
		struct DatasmithVariantSetElement_eventGetVariantsCount_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDatasmithVariantSetElement_GetVariantsCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithVariantSetElement_eventGetVariantsCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithVariantSetElement_GetVariantsCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithVariantSetElement_GetVariantsCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithVariantSetElement_GetVariantsCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Gets how many variants are in this variant set */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Gets how many variants are in this variant set" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithVariantSetElement_GetVariantsCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithVariantSetElement, nullptr, "GetVariantsCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithVariantSetElement_GetVariantsCount_Statics::DatasmithVariantSetElement_eventGetVariantsCount_Parms), Z_Construct_UFunction_UDatasmithVariantSetElement_GetVariantsCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithVariantSetElement_GetVariantsCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithVariantSetElement_GetVariantsCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithVariantSetElement_GetVariantsCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithVariantSetElement_GetVariantsCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithVariantSetElement_GetVariantsCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithVariantSetElement_RemoveVariant_Statics
	{
		struct DatasmithVariantSetElement_eventRemoveVariant_Parms
		{
			const UDatasmithVariantElement* Variant;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Variant_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Variant;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithVariantSetElement_RemoveVariant_Statics::NewProp_Variant_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithVariantSetElement_RemoveVariant_Statics::NewProp_Variant = { "Variant", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithVariantSetElement_eventRemoveVariant_Parms, Variant), Z_Construct_UClass_UDatasmithVariantElement_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithVariantSetElement_RemoveVariant_Statics::NewProp_Variant_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithVariantSetElement_RemoveVariant_Statics::NewProp_Variant_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithVariantSetElement_RemoveVariant_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithVariantSetElement_RemoveVariant_Statics::NewProp_Variant,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithVariantSetElement_RemoveVariant_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Removes a variant from this variant set */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Removes a variant from this variant set" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithVariantSetElement_RemoveVariant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithVariantSetElement, nullptr, "RemoveVariant", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithVariantSetElement_RemoveVariant_Statics::DatasmithVariantSetElement_eventRemoveVariant_Parms), Z_Construct_UFunction_UDatasmithVariantSetElement_RemoveVariant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithVariantSetElement_RemoveVariant_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithVariantSetElement_RemoveVariant_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithVariantSetElement_RemoveVariant_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithVariantSetElement_RemoveVariant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithVariantSetElement_RemoveVariant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithVariantSetElement);
	UClass* Z_Construct_UClass_UDatasmithVariantSetElement_NoRegister()
	{
		return UDatasmithVariantSetElement::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithVariantSetElement_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithVariantSetElement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithObjectElement,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithImporter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDatasmithVariantSetElement_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDatasmithVariantSetElement_AddVariant, "AddVariant" }, // 888028749
		{ &Z_Construct_UFunction_UDatasmithVariantSetElement_CreateVariant, "CreateVariant" }, // 767704748
		{ &Z_Construct_UFunction_UDatasmithVariantSetElement_GetVariant, "GetVariant" }, // 1179678550
		{ &Z_Construct_UFunction_UDatasmithVariantSetElement_GetVariantsCount, "GetVariantsCount" }, // 2026779682
		{ &Z_Construct_UFunction_UDatasmithVariantSetElement_RemoveVariant, "RemoveVariant" }, // 3167977294
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithVariantSetElement_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * UDatasmithVariantSetElement\n */" },
		{ "IncludePath", "ObjectElements/DatasmithUObjectElements.h" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "* UDatasmithVariantSetElement" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithVariantSetElement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithVariantSetElement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithVariantSetElement_Statics::ClassParams = {
		&UDatasmithVariantSetElement::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithVariantSetElement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithVariantSetElement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithVariantSetElement()
	{
		if (!Z_Registration_Info_UClass_UDatasmithVariantSetElement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithVariantSetElement.OuterSingleton, Z_Construct_UClass_UDatasmithVariantSetElement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithVariantSetElement.OuterSingleton;
	}
	template<> DATASMITHIMPORTER_API UClass* StaticClass<UDatasmithVariantSetElement>()
	{
		return UDatasmithVariantSetElement::StaticClass();
	}
	UDatasmithVariantSetElement::UDatasmithVariantSetElement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithVariantSetElement);
	UDatasmithVariantSetElement::~UDatasmithVariantSetElement() {}
	DEFINE_FUNCTION(UDatasmithLevelVariantSetsElement::execRemoveVariantSet)
	{
		P_GET_OBJECT(UDatasmithVariantSetElement,Z_Param_VariantSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveVariantSet(Z_Param_VariantSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithLevelVariantSetsElement::execGetVariantSet)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDatasmithVariantSetElement**)Z_Param__Result=P_THIS->GetVariantSet(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithLevelVariantSetsElement::execGetVariantSetsCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetVariantSetsCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithLevelVariantSetsElement::execAddVariantSet)
	{
		P_GET_OBJECT(UDatasmithVariantSetElement,Z_Param_VariantSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddVariantSet(Z_Param_VariantSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithLevelVariantSetsElement::execCreateVariantSet)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InElementName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDatasmithVariantSetElement**)Z_Param__Result=P_THIS->CreateVariantSet(Z_Param_InElementName);
		P_NATIVE_END;
	}
	void UDatasmithLevelVariantSetsElement::StaticRegisterNativesUDatasmithLevelVariantSetsElement()
	{
		UClass* Class = UDatasmithLevelVariantSetsElement::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddVariantSet", &UDatasmithLevelVariantSetsElement::execAddVariantSet },
			{ "CreateVariantSet", &UDatasmithLevelVariantSetsElement::execCreateVariantSet },
			{ "GetVariantSet", &UDatasmithLevelVariantSetsElement::execGetVariantSet },
			{ "GetVariantSetsCount", &UDatasmithLevelVariantSetsElement::execGetVariantSetsCount },
			{ "RemoveVariantSet", &UDatasmithLevelVariantSetsElement::execRemoveVariantSet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_AddVariantSet_Statics
	{
		struct DatasmithLevelVariantSetsElement_eventAddVariantSet_Parms
		{
			const UDatasmithVariantSetElement* VariantSet;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariantSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VariantSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_AddVariantSet_Statics::NewProp_VariantSet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_AddVariantSet_Statics::NewProp_VariantSet = { "VariantSet", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithLevelVariantSetsElement_eventAddVariantSet_Parms, VariantSet), Z_Construct_UClass_UDatasmithVariantSetElement_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_AddVariantSet_Statics::NewProp_VariantSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_AddVariantSet_Statics::NewProp_VariantSet_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_AddVariantSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_AddVariantSet_Statics::NewProp_VariantSet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_AddVariantSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Adds an existing variant set to this level variant sets */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Adds an existing variant set to this level variant sets" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_AddVariantSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithLevelVariantSetsElement, nullptr, "AddVariantSet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_AddVariantSet_Statics::DatasmithLevelVariantSetsElement_eventAddVariantSet_Parms), Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_AddVariantSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_AddVariantSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_AddVariantSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_AddVariantSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_AddVariantSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_AddVariantSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_CreateVariantSet_Statics
	{
		struct DatasmithLevelVariantSetsElement_eventCreateVariantSet_Parms
		{
			FName InElementName;
			UDatasmithVariantSetElement* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InElementName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_CreateVariantSet_Statics::NewProp_InElementName = { "InElementName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithLevelVariantSetsElement_eventCreateVariantSet_Parms, InElementName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_CreateVariantSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithLevelVariantSetsElement_eventCreateVariantSet_Parms, ReturnValue), Z_Construct_UClass_UDatasmithVariantSetElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_CreateVariantSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_CreateVariantSet_Statics::NewProp_InElementName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_CreateVariantSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_CreateVariantSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Scene" },
		{ "Comment", "/** Create a new variant set and add it to the parent level variant sets */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Create a new variant set and add it to the parent level variant sets" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_CreateVariantSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithLevelVariantSetsElement, nullptr, "CreateVariantSet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_CreateVariantSet_Statics::DatasmithLevelVariantSetsElement_eventCreateVariantSet_Parms), Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_CreateVariantSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_CreateVariantSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_CreateVariantSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_CreateVariantSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_CreateVariantSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_CreateVariantSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_GetVariantSet_Statics
	{
		struct DatasmithLevelVariantSetsElement_eventGetVariantSet_Parms
		{
			int32 Index;
			UDatasmithVariantSetElement* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_GetVariantSet_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithLevelVariantSetsElement_eventGetVariantSet_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_GetVariantSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithLevelVariantSetsElement_eventGetVariantSet_Parms, ReturnValue), Z_Construct_UClass_UDatasmithVariantSetElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_GetVariantSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_GetVariantSet_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_GetVariantSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_GetVariantSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Gets a variant set from this level variant sets */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Gets a variant set from this level variant sets" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_GetVariantSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithLevelVariantSetsElement, nullptr, "GetVariantSet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_GetVariantSet_Statics::DatasmithLevelVariantSetsElement_eventGetVariantSet_Parms), Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_GetVariantSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_GetVariantSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_GetVariantSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_GetVariantSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_GetVariantSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_GetVariantSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_GetVariantSetsCount_Statics
	{
		struct DatasmithLevelVariantSetsElement_eventGetVariantSetsCount_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_GetVariantSetsCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithLevelVariantSetsElement_eventGetVariantSetsCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_GetVariantSetsCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_GetVariantSetsCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_GetVariantSetsCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Gets how many variant sets are in this level variant sets */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Gets how many variant sets are in this level variant sets" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_GetVariantSetsCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithLevelVariantSetsElement, nullptr, "GetVariantSetsCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_GetVariantSetsCount_Statics::DatasmithLevelVariantSetsElement_eventGetVariantSetsCount_Parms), Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_GetVariantSetsCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_GetVariantSetsCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_GetVariantSetsCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_GetVariantSetsCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_GetVariantSetsCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_GetVariantSetsCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_RemoveVariantSet_Statics
	{
		struct DatasmithLevelVariantSetsElement_eventRemoveVariantSet_Parms
		{
			const UDatasmithVariantSetElement* VariantSet;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariantSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VariantSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_RemoveVariantSet_Statics::NewProp_VariantSet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_RemoveVariantSet_Statics::NewProp_VariantSet = { "VariantSet", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithLevelVariantSetsElement_eventRemoveVariantSet_Parms, VariantSet), Z_Construct_UClass_UDatasmithVariantSetElement_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_RemoveVariantSet_Statics::NewProp_VariantSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_RemoveVariantSet_Statics::NewProp_VariantSet_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_RemoveVariantSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_RemoveVariantSet_Statics::NewProp_VariantSet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_RemoveVariantSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Element" },
		{ "Comment", "/** Removes a variant set from this level variant sets */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "Removes a variant set from this level variant sets" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_RemoveVariantSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithLevelVariantSetsElement, nullptr, "RemoveVariantSet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_RemoveVariantSet_Statics::DatasmithLevelVariantSetsElement_eventRemoveVariantSet_Parms), Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_RemoveVariantSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_RemoveVariantSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_RemoveVariantSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_RemoveVariantSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_RemoveVariantSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_RemoveVariantSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithLevelVariantSetsElement);
	UClass* Z_Construct_UClass_UDatasmithLevelVariantSetsElement_NoRegister()
	{
		return UDatasmithLevelVariantSetsElement::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithLevelVariantSetsElement_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithLevelVariantSetsElement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithObjectElement,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithImporter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDatasmithLevelVariantSetsElement_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_AddVariantSet, "AddVariantSet" }, // 1712418299
		{ &Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_CreateVariantSet, "CreateVariantSet" }, // 3403687913
		{ &Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_GetVariantSet, "GetVariantSet" }, // 1877718697
		{ &Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_GetVariantSetsCount, "GetVariantSetsCount" }, // 3209568796
		{ &Z_Construct_UFunction_UDatasmithLevelVariantSetsElement_RemoveVariantSet, "RemoveVariantSet" }, // 3988988451
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithLevelVariantSetsElement_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * UDatasmithLevelVariantSetsElement\n */" },
		{ "IncludePath", "ObjectElements/DatasmithUObjectElements.h" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUObjectElements.h" },
		{ "ToolTip", "* UDatasmithLevelVariantSetsElement" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithLevelVariantSetsElement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithLevelVariantSetsElement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithLevelVariantSetsElement_Statics::ClassParams = {
		&UDatasmithLevelVariantSetsElement::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithLevelVariantSetsElement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithLevelVariantSetsElement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithLevelVariantSetsElement()
	{
		if (!Z_Registration_Info_UClass_UDatasmithLevelVariantSetsElement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithLevelVariantSetsElement.OuterSingleton, Z_Construct_UClass_UDatasmithLevelVariantSetsElement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithLevelVariantSetsElement.OuterSingleton;
	}
	template<> DATASMITHIMPORTER_API UClass* StaticClass<UDatasmithLevelVariantSetsElement>()
	{
		return UDatasmithLevelVariantSetsElement::StaticClass();
	}
	UDatasmithLevelVariantSetsElement::UDatasmithLevelVariantSetsElement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithLevelVariantSetsElement);
	UDatasmithLevelVariantSetsElement::~UDatasmithLevelVariantSetsElement() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDatasmithObjectElement, UDatasmithObjectElement::StaticClass, TEXT("UDatasmithObjectElement"), &Z_Registration_Info_UClass_UDatasmithObjectElement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithObjectElement), 269829599U) },
		{ Z_Construct_UClass_UDatasmithKeyValueProperty, UDatasmithKeyValueProperty::StaticClass, TEXT("UDatasmithKeyValueProperty"), &Z_Registration_Info_UClass_UDatasmithKeyValueProperty, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithKeyValueProperty), 3684526223U) },
		{ Z_Construct_UClass_UDatasmithActorElement, UDatasmithActorElement::StaticClass, TEXT("UDatasmithActorElement"), &Z_Registration_Info_UClass_UDatasmithActorElement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithActorElement), 2851257613U) },
		{ Z_Construct_UClass_UDatasmithMeshElement, UDatasmithMeshElement::StaticClass, TEXT("UDatasmithMeshElement"), &Z_Registration_Info_UClass_UDatasmithMeshElement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithMeshElement), 2311374309U) },
		{ Z_Construct_UClass_UDatasmithMeshActorElement, UDatasmithMeshActorElement::StaticClass, TEXT("UDatasmithMeshActorElement"), &Z_Registration_Info_UClass_UDatasmithMeshActorElement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithMeshActorElement), 2350795635U) },
		{ Z_Construct_UClass_UDatasmithLightActorElement, UDatasmithLightActorElement::StaticClass, TEXT("UDatasmithLightActorElement"), &Z_Registration_Info_UClass_UDatasmithLightActorElement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithLightActorElement), 3883609401U) },
		{ Z_Construct_UClass_UDatasmithCameraActorElement, UDatasmithCameraActorElement::StaticClass, TEXT("UDatasmithCameraActorElement"), &Z_Registration_Info_UClass_UDatasmithCameraActorElement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithCameraActorElement), 3202999372U) },
		{ Z_Construct_UClass_UDatasmithCustomActorElement, UDatasmithCustomActorElement::StaticClass, TEXT("UDatasmithCustomActorElement"), &Z_Registration_Info_UClass_UDatasmithCustomActorElement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithCustomActorElement), 811009830U) },
		{ Z_Construct_UClass_UDatasmithBaseMaterialElement, UDatasmithBaseMaterialElement::StaticClass, TEXT("UDatasmithBaseMaterialElement"), &Z_Registration_Info_UClass_UDatasmithBaseMaterialElement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithBaseMaterialElement), 4280131048U) },
		{ Z_Construct_UClass_UDatasmithMaterialIDElement, UDatasmithMaterialIDElement::StaticClass, TEXT("UDatasmithMaterialIDElement"), &Z_Registration_Info_UClass_UDatasmithMaterialIDElement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithMaterialIDElement), 3456982022U) },
		{ Z_Construct_UClass_UDatasmithPostProcessElement, UDatasmithPostProcessElement::StaticClass, TEXT("UDatasmithPostProcessElement"), &Z_Registration_Info_UClass_UDatasmithPostProcessElement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithPostProcessElement), 177807982U) },
		{ Z_Construct_UClass_UDatasmithTextureElement, UDatasmithTextureElement::StaticClass, TEXT("UDatasmithTextureElement"), &Z_Registration_Info_UClass_UDatasmithTextureElement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithTextureElement), 1768268932U) },
		{ Z_Construct_UClass_UDatasmithMetaDataElement, UDatasmithMetaDataElement::StaticClass, TEXT("UDatasmithMetaDataElement"), &Z_Registration_Info_UClass_UDatasmithMetaDataElement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithMetaDataElement), 2932911846U) },
		{ Z_Construct_UClass_UDatasmithBasePropertyCaptureElement, UDatasmithBasePropertyCaptureElement::StaticClass, TEXT("UDatasmithBasePropertyCaptureElement"), &Z_Registration_Info_UClass_UDatasmithBasePropertyCaptureElement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithBasePropertyCaptureElement), 3250469137U) },
		{ Z_Construct_UClass_UDatasmithPropertyCaptureElement, UDatasmithPropertyCaptureElement::StaticClass, TEXT("UDatasmithPropertyCaptureElement"), &Z_Registration_Info_UClass_UDatasmithPropertyCaptureElement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithPropertyCaptureElement), 2361467368U) },
		{ Z_Construct_UClass_UDatasmithObjectPropertyCaptureElement, UDatasmithObjectPropertyCaptureElement::StaticClass, TEXT("UDatasmithObjectPropertyCaptureElement"), &Z_Registration_Info_UClass_UDatasmithObjectPropertyCaptureElement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithObjectPropertyCaptureElement), 1376548915U) },
		{ Z_Construct_UClass_UDatasmithActorBindingElement, UDatasmithActorBindingElement::StaticClass, TEXT("UDatasmithActorBindingElement"), &Z_Registration_Info_UClass_UDatasmithActorBindingElement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithActorBindingElement), 3429634379U) },
		{ Z_Construct_UClass_UDatasmithVariantElement, UDatasmithVariantElement::StaticClass, TEXT("UDatasmithVariantElement"), &Z_Registration_Info_UClass_UDatasmithVariantElement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithVariantElement), 4225019149U) },
		{ Z_Construct_UClass_UDatasmithVariantSetElement, UDatasmithVariantSetElement::StaticClass, TEXT("UDatasmithVariantSetElement"), &Z_Registration_Info_UClass_UDatasmithVariantSetElement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithVariantSetElement), 1699243731U) },
		{ Z_Construct_UClass_UDatasmithLevelVariantSetsElement, UDatasmithLevelVariantSetsElement::StaticClass, TEXT("UDatasmithLevelVariantSetsElement"), &Z_Registration_Info_UClass_UDatasmithLevelVariantSetsElement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithLevelVariantSetsElement), 3085759539U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_2130836878(TEXT("/Script/DatasmithImporter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
