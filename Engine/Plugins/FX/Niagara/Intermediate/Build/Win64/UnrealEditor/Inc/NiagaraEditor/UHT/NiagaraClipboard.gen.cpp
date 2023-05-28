// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraClipboard.h"
#include "../Public/NiagaraTypes.h"
#include "NiagaraMessages.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraClipboard() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UUserDefinedEnum_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UUserDefinedStruct_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraRendererProperties_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraScript_NoRegister();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraTypeDefinition();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariable();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraClipboardContent();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraClipboardContent_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraClipboardEditorScriptingUtilities();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraClipboardEditorScriptingUtilities_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraClipboardFunction();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraClipboardFunction_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraClipboardFunctionInput();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraClipboardFunctionInput_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeFunctionCall_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraScriptVariable_NoRegister();
	NIAGARAEDITOR_API UEnum* Z_Construct_UEnum_NiagaraEditor_ENiagaraClipboardFunctionInputValueMode();
	NIAGARAEDITOR_API UEnum* Z_Construct_UEnum_NiagaraEditor_ENiagaraClipboardFunctionScriptMode();
	NIAGARAEDITOR_API UFunction* Z_Construct_UDelegateFunction_UNiagaraClipboardFunction_OnPastedFunctionCallNode__DelegateSignature();
	NIAGARAEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraClipboardScriptVariable();
	NIAGARAEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraStackMessage();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraClipboardFunctionInputValueMode;
	static UEnum* ENiagaraClipboardFunctionInputValueMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraClipboardFunctionInputValueMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraClipboardFunctionInputValueMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NiagaraEditor_ENiagaraClipboardFunctionInputValueMode, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("ENiagaraClipboardFunctionInputValueMode"));
		}
		return Z_Registration_Info_UEnum_ENiagaraClipboardFunctionInputValueMode.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UEnum* StaticEnum<ENiagaraClipboardFunctionInputValueMode>()
	{
		return ENiagaraClipboardFunctionInputValueMode_StaticEnum();
	}
	struct Z_Construct_UEnum_NiagaraEditor_ENiagaraClipboardFunctionInputValueMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NiagaraEditor_ENiagaraClipboardFunctionInputValueMode_Statics::Enumerators[] = {
		{ "ENiagaraClipboardFunctionInputValueMode::Local", (int64)ENiagaraClipboardFunctionInputValueMode::Local },
		{ "ENiagaraClipboardFunctionInputValueMode::Linked", (int64)ENiagaraClipboardFunctionInputValueMode::Linked },
		{ "ENiagaraClipboardFunctionInputValueMode::Data", (int64)ENiagaraClipboardFunctionInputValueMode::Data },
		{ "ENiagaraClipboardFunctionInputValueMode::Expression", (int64)ENiagaraClipboardFunctionInputValueMode::Expression },
		{ "ENiagaraClipboardFunctionInputValueMode::Dynamic", (int64)ENiagaraClipboardFunctionInputValueMode::Dynamic },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NiagaraEditor_ENiagaraClipboardFunctionInputValueMode_Statics::Enum_MetaDataParams[] = {
		{ "Data.Name", "ENiagaraClipboardFunctionInputValueMode::Data" },
		{ "Dynamic.Name", "ENiagaraClipboardFunctionInputValueMode::Dynamic" },
		{ "Expression.Name", "ENiagaraClipboardFunctionInputValueMode::Expression" },
		{ "Linked.Name", "ENiagaraClipboardFunctionInputValueMode::Linked" },
		{ "Local.Name", "ENiagaraClipboardFunctionInputValueMode::Local" },
		{ "ModuleRelativePath", "Public/NiagaraClipboard.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NiagaraEditor_ENiagaraClipboardFunctionInputValueMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NiagaraEditor,
		nullptr,
		"ENiagaraClipboardFunctionInputValueMode",
		"ENiagaraClipboardFunctionInputValueMode",
		Z_Construct_UEnum_NiagaraEditor_ENiagaraClipboardFunctionInputValueMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraEditor_ENiagaraClipboardFunctionInputValueMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NiagaraEditor_ENiagaraClipboardFunctionInputValueMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraEditor_ENiagaraClipboardFunctionInputValueMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NiagaraEditor_ENiagaraClipboardFunctionInputValueMode()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraClipboardFunctionInputValueMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraClipboardFunctionInputValueMode.InnerSingleton, Z_Construct_UEnum_NiagaraEditor_ENiagaraClipboardFunctionInputValueMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraClipboardFunctionInputValueMode.InnerSingleton;
	}
	void UNiagaraClipboardFunctionInput::StaticRegisterNativesUNiagaraClipboardFunctionInput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraClipboardFunctionInput);
	UClass* Z_Construct_UClass_UNiagaraClipboardFunctionInput_NoRegister()
	{
		return UNiagaraClipboardFunctionInput::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InputName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasEditCondition_MetaData[];
#endif
		static void NewProp_bHasEditCondition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasEditCondition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEditConditionValue_MetaData[];
#endif
		static void NewProp_bEditConditionValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEditConditionValue;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ValueMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ValueMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Local_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Local_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Local;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Linked_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Linked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Data;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Expression_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Expression;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Dynamic_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Dynamic;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraClipboard.h" },
		{ "ModuleRelativePath", "Public/NiagaraClipboard.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::NewProp_InputName_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraClipboard.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraClipboardFunctionInput, InputName), METADATA_PARAMS(Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::NewProp_InputName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::NewProp_InputName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::NewProp_InputType_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraClipboard.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::NewProp_InputType = { "InputType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraClipboardFunctionInput, InputType), Z_Construct_UScriptStruct_FNiagaraTypeDefinition, METADATA_PARAMS(Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::NewProp_InputType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::NewProp_InputType_MetaData)) }; // 1791563344
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::NewProp_bHasEditCondition_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraClipboard.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::NewProp_bHasEditCondition_SetBit(void* Obj)
	{
		((UNiagaraClipboardFunctionInput*)Obj)->bHasEditCondition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::NewProp_bHasEditCondition = { "bHasEditCondition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraClipboardFunctionInput), &Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::NewProp_bHasEditCondition_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::NewProp_bHasEditCondition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::NewProp_bHasEditCondition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::NewProp_bEditConditionValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraClipboard.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::NewProp_bEditConditionValue_SetBit(void* Obj)
	{
		((UNiagaraClipboardFunctionInput*)Obj)->bEditConditionValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::NewProp_bEditConditionValue = { "bEditConditionValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraClipboardFunctionInput), &Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::NewProp_bEditConditionValue_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::NewProp_bEditConditionValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::NewProp_bEditConditionValue_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::NewProp_ValueMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::NewProp_ValueMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraClipboard.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::NewProp_ValueMode = { "ValueMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraClipboardFunctionInput, ValueMode), Z_Construct_UEnum_NiagaraEditor_ENiagaraClipboardFunctionInputValueMode, METADATA_PARAMS(Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::NewProp_ValueMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::NewProp_ValueMode_MetaData)) }; // 2787849660
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::NewProp_Local_Inner = { "Local", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::NewProp_Local_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraClipboard.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::NewProp_Local = { "Local", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraClipboardFunctionInput, Local), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::NewProp_Local_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::NewProp_Local_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::NewProp_Linked_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraClipboard.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::NewProp_Linked = { "Linked", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraClipboardFunctionInput, Linked), METADATA_PARAMS(Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::NewProp_Linked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::NewProp_Linked_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::NewProp_Data_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraClipboard.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraClipboardFunctionInput, Data), Z_Construct_UClass_UNiagaraDataInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::NewProp_Data_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::NewProp_Expression_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraClipboard.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::NewProp_Expression = { "Expression", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraClipboardFunctionInput, Expression), METADATA_PARAMS(Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::NewProp_Expression_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::NewProp_Expression_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::NewProp_Dynamic_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraClipboard.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::NewProp_Dynamic = { "Dynamic", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraClipboardFunctionInput, Dynamic), Z_Construct_UClass_UNiagaraClipboardFunction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::NewProp_Dynamic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::NewProp_Dynamic_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::NewProp_InputName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::NewProp_InputType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::NewProp_bHasEditCondition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::NewProp_bEditConditionValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::NewProp_ValueMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::NewProp_ValueMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::NewProp_Local_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::NewProp_Local,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::NewProp_Linked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::NewProp_Expression,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::NewProp_Dynamic,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraClipboardFunctionInput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::ClassParams = {
		&UNiagaraClipboardFunctionInput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraClipboardFunctionInput()
	{
		if (!Z_Registration_Info_UClass_UNiagaraClipboardFunctionInput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraClipboardFunctionInput.OuterSingleton, Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraClipboardFunctionInput.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraClipboardFunctionInput>()
	{
		return UNiagaraClipboardFunctionInput::StaticClass();
	}
	UNiagaraClipboardFunctionInput::UNiagaraClipboardFunctionInput(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraClipboardFunctionInput);
	UNiagaraClipboardFunctionInput::~UNiagaraClipboardFunctionInput() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraClipboardFunctionScriptMode;
	static UEnum* ENiagaraClipboardFunctionScriptMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraClipboardFunctionScriptMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraClipboardFunctionScriptMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NiagaraEditor_ENiagaraClipboardFunctionScriptMode, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("ENiagaraClipboardFunctionScriptMode"));
		}
		return Z_Registration_Info_UEnum_ENiagaraClipboardFunctionScriptMode.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UEnum* StaticEnum<ENiagaraClipboardFunctionScriptMode>()
	{
		return ENiagaraClipboardFunctionScriptMode_StaticEnum();
	}
	struct Z_Construct_UEnum_NiagaraEditor_ENiagaraClipboardFunctionScriptMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NiagaraEditor_ENiagaraClipboardFunctionScriptMode_Statics::Enumerators[] = {
		{ "ENiagaraClipboardFunctionScriptMode::ScriptAsset", (int64)ENiagaraClipboardFunctionScriptMode::ScriptAsset },
		{ "ENiagaraClipboardFunctionScriptMode::Assignment", (int64)ENiagaraClipboardFunctionScriptMode::Assignment },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NiagaraEditor_ENiagaraClipboardFunctionScriptMode_Statics::Enum_MetaDataParams[] = {
		{ "Assignment.Name", "ENiagaraClipboardFunctionScriptMode::Assignment" },
		{ "ModuleRelativePath", "Public/NiagaraClipboard.h" },
		{ "ScriptAsset.Name", "ENiagaraClipboardFunctionScriptMode::ScriptAsset" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NiagaraEditor_ENiagaraClipboardFunctionScriptMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NiagaraEditor,
		nullptr,
		"ENiagaraClipboardFunctionScriptMode",
		"ENiagaraClipboardFunctionScriptMode",
		Z_Construct_UEnum_NiagaraEditor_ENiagaraClipboardFunctionScriptMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraEditor_ENiagaraClipboardFunctionScriptMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NiagaraEditor_ENiagaraClipboardFunctionScriptMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraEditor_ENiagaraClipboardFunctionScriptMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NiagaraEditor_ENiagaraClipboardFunctionScriptMode()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraClipboardFunctionScriptMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraClipboardFunctionScriptMode.InnerSingleton, Z_Construct_UEnum_NiagaraEditor_ENiagaraClipboardFunctionScriptMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraClipboardFunctionScriptMode.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_UNiagaraClipboardFunction_OnPastedFunctionCallNode__DelegateSignature_Statics
	{
		struct NiagaraClipboardFunction_eventOnPastedFunctionCallNode_Parms
		{
			UNiagaraNodeFunctionCall* PastedFunctionCall;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PastedFunctionCall;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UNiagaraClipboardFunction_OnPastedFunctionCallNode__DelegateSignature_Statics::NewProp_PastedFunctionCall = { "PastedFunctionCall", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraClipboardFunction_eventOnPastedFunctionCallNode_Parms, PastedFunctionCall), Z_Construct_UClass_UNiagaraNodeFunctionCall_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UNiagaraClipboardFunction_OnPastedFunctionCallNode__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UNiagaraClipboardFunction_OnPastedFunctionCallNode__DelegateSignature_Statics::NewProp_PastedFunctionCall,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UNiagaraClipboardFunction_OnPastedFunctionCallNode__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraClipboard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UNiagaraClipboardFunction_OnPastedFunctionCallNode__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraClipboardFunction, nullptr, "OnPastedFunctionCallNode__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UNiagaraClipboardFunction_OnPastedFunctionCallNode__DelegateSignature_Statics::NiagaraClipboardFunction_eventOnPastedFunctionCallNode_Parms), Z_Construct_UDelegateFunction_UNiagaraClipboardFunction_OnPastedFunctionCallNode__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UNiagaraClipboardFunction_OnPastedFunctionCallNode__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UNiagaraClipboardFunction_OnPastedFunctionCallNode__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UNiagaraClipboardFunction_OnPastedFunctionCallNode__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UNiagaraClipboardFunction_OnPastedFunctionCallNode__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UNiagaraClipboardFunction_OnPastedFunctionCallNode__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UNiagaraClipboardFunction::FOnPastedFunctionCallNode_DelegateWrapper(const FScriptDelegate& OnPastedFunctionCallNode, UNiagaraNodeFunctionCall* PastedFunctionCall)
{
	struct NiagaraClipboardFunction_eventOnPastedFunctionCallNode_Parms
	{
		UNiagaraNodeFunctionCall* PastedFunctionCall;
	};
	NiagaraClipboardFunction_eventOnPastedFunctionCallNode_Parms Parms;
	Parms.PastedFunctionCall=PastedFunctionCall;
	OnPastedFunctionCallNode.ProcessDelegate<UObject>(&Parms);
}
	void UNiagaraClipboardFunction::StaticRegisterNativesUNiagaraClipboardFunction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraClipboardFunction);
	UClass* Z_Construct_UClass_UNiagaraClipboardFunction_NoRegister()
	{
		return UNiagaraClipboardFunction::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraClipboardFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FunctionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ScriptMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScriptMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ScriptMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Script_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Script;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssignmentTargets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssignmentTargets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AssignmentTargets;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssignmentDefaults_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssignmentDefaults_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AssignmentDefaults;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Inputs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Inputs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPastedFunctionCallNodeDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnPastedFunctionCallNodeDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScriptVersion_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScriptVersion;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Messages_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Messages_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Messages;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraClipboardFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UNiagaraClipboardFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UNiagaraClipboardFunction_OnPastedFunctionCallNode__DelegateSignature, "OnPastedFunctionCallNode__DelegateSignature" }, // 2069733975
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraClipboardFunction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraClipboard.h" },
		{ "ModuleRelativePath", "Public/NiagaraClipboard.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraClipboardFunction_Statics::NewProp_FunctionName_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraClipboard.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraClipboardFunction_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraClipboardFunction, FunctionName), METADATA_PARAMS(Z_Construct_UClass_UNiagaraClipboardFunction_Statics::NewProp_FunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraClipboardFunction_Statics::NewProp_FunctionName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraClipboardFunction_Statics::NewProp_DisplayName_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraClipboard.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNiagaraClipboardFunction_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraClipboardFunction, DisplayName), METADATA_PARAMS(Z_Construct_UClass_UNiagaraClipboardFunction_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraClipboardFunction_Statics::NewProp_DisplayName_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UNiagaraClipboardFunction_Statics::NewProp_ScriptMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraClipboardFunction_Statics::NewProp_ScriptMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraClipboard.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraClipboardFunction_Statics::NewProp_ScriptMode = { "ScriptMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraClipboardFunction, ScriptMode), Z_Construct_UEnum_NiagaraEditor_ENiagaraClipboardFunctionScriptMode, METADATA_PARAMS(Z_Construct_UClass_UNiagaraClipboardFunction_Statics::NewProp_ScriptMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraClipboardFunction_Statics::NewProp_ScriptMode_MetaData)) }; // 869619494
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraClipboardFunction_Statics::NewProp_Script_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraClipboard.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UNiagaraClipboardFunction_Statics::NewProp_Script = { "Script", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraClipboardFunction, Script), Z_Construct_UClass_UNiagaraScript_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraClipboardFunction_Statics::NewProp_Script_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraClipboardFunction_Statics::NewProp_Script_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraClipboardFunction_Statics::NewProp_AssignmentTargets_Inner = { "AssignmentTargets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(nullptr, 0) }; // 2575088255
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraClipboardFunction_Statics::NewProp_AssignmentTargets_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraClipboard.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraClipboardFunction_Statics::NewProp_AssignmentTargets = { "AssignmentTargets", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraClipboardFunction, AssignmentTargets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraClipboardFunction_Statics::NewProp_AssignmentTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraClipboardFunction_Statics::NewProp_AssignmentTargets_MetaData)) }; // 2575088255
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraClipboardFunction_Statics::NewProp_AssignmentDefaults_Inner = { "AssignmentDefaults", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraClipboardFunction_Statics::NewProp_AssignmentDefaults_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraClipboard.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraClipboardFunction_Statics::NewProp_AssignmentDefaults = { "AssignmentDefaults", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraClipboardFunction, AssignmentDefaults), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraClipboardFunction_Statics::NewProp_AssignmentDefaults_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraClipboardFunction_Statics::NewProp_AssignmentDefaults_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraClipboardFunction_Statics::NewProp_Inputs_Inner = { "Inputs", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UNiagaraClipboardFunctionInput_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraClipboardFunction_Statics::NewProp_Inputs_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraClipboard.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraClipboardFunction_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraClipboardFunction, Inputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraClipboardFunction_Statics::NewProp_Inputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraClipboardFunction_Statics::NewProp_Inputs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraClipboardFunction_Statics::NewProp_OnPastedFunctionCallNodeDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraClipboard.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UNiagaraClipboardFunction_Statics::NewProp_OnPastedFunctionCallNodeDelegate = { "OnPastedFunctionCallNodeDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraClipboardFunction, OnPastedFunctionCallNodeDelegate), Z_Construct_UDelegateFunction_UNiagaraClipboardFunction_OnPastedFunctionCallNode__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UNiagaraClipboardFunction_Statics::NewProp_OnPastedFunctionCallNodeDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraClipboardFunction_Statics::NewProp_OnPastedFunctionCallNodeDelegate_MetaData)) }; // 2069733975
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraClipboardFunction_Statics::NewProp_ScriptVersion_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraClipboard.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraClipboardFunction_Statics::NewProp_ScriptVersion = { "ScriptVersion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraClipboardFunction, ScriptVersion), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UNiagaraClipboardFunction_Statics::NewProp_ScriptVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraClipboardFunction_Statics::NewProp_ScriptVersion_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraClipboardFunction_Statics::NewProp_Messages_Inner = { "Messages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraStackMessage, METADATA_PARAMS(nullptr, 0) }; // 3317954190
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraClipboardFunction_Statics::NewProp_Messages_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraClipboard.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraClipboardFunction_Statics::NewProp_Messages = { "Messages", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraClipboardFunction, Messages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraClipboardFunction_Statics::NewProp_Messages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraClipboardFunction_Statics::NewProp_Messages_MetaData)) }; // 3317954190
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraClipboardFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraClipboardFunction_Statics::NewProp_FunctionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraClipboardFunction_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraClipboardFunction_Statics::NewProp_ScriptMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraClipboardFunction_Statics::NewProp_ScriptMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraClipboardFunction_Statics::NewProp_Script,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraClipboardFunction_Statics::NewProp_AssignmentTargets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraClipboardFunction_Statics::NewProp_AssignmentTargets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraClipboardFunction_Statics::NewProp_AssignmentDefaults_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraClipboardFunction_Statics::NewProp_AssignmentDefaults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraClipboardFunction_Statics::NewProp_Inputs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraClipboardFunction_Statics::NewProp_Inputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraClipboardFunction_Statics::NewProp_OnPastedFunctionCallNodeDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraClipboardFunction_Statics::NewProp_ScriptVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraClipboardFunction_Statics::NewProp_Messages_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraClipboardFunction_Statics::NewProp_Messages,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraClipboardFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraClipboardFunction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraClipboardFunction_Statics::ClassParams = {
		&UNiagaraClipboardFunction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_UNiagaraClipboardFunction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraClipboardFunction_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraClipboardFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraClipboardFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraClipboardFunction()
	{
		if (!Z_Registration_Info_UClass_UNiagaraClipboardFunction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraClipboardFunction.OuterSingleton, Z_Construct_UClass_UNiagaraClipboardFunction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraClipboardFunction.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraClipboardFunction>()
	{
		return UNiagaraClipboardFunction::StaticClass();
	}
	UNiagaraClipboardFunction::UNiagaraClipboardFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraClipboardFunction);
	UNiagaraClipboardFunction::~UNiagaraClipboardFunction() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraClipboardScriptVariable;
class UScriptStruct* FNiagaraClipboardScriptVariable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraClipboardScriptVariable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraClipboardScriptVariable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraClipboardScriptVariable, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("NiagaraClipboardScriptVariable"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraClipboardScriptVariable.OuterSingleton;
}
template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<FNiagaraClipboardScriptVariable>()
{
	return FNiagaraClipboardScriptVariable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraClipboardScriptVariable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScriptVariable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ScriptVariable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalChangeId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OriginalChangeId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraClipboardScriptVariable_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraClipboard.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraClipboardScriptVariable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraClipboardScriptVariable>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraClipboardScriptVariable_Statics::NewProp_ScriptVariable_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraClipboard.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FNiagaraClipboardScriptVariable_Statics::NewProp_ScriptVariable = { "ScriptVariable", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraClipboardScriptVariable, ScriptVariable), Z_Construct_UClass_UNiagaraScriptVariable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraClipboardScriptVariable_Statics::NewProp_ScriptVariable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraClipboardScriptVariable_Statics::NewProp_ScriptVariable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraClipboardScriptVariable_Statics::NewProp_OriginalChangeId_MetaData[] = {
		{ "Comment", "/** We cache the original change Id here since deserialization of the clipboard will cause the change id to update.\n\x09 *  Using the original change id, we can identify during pasting whether we have already pasted this script variable before. \n\x09 */" },
		{ "ModuleRelativePath", "Public/NiagaraClipboard.h" },
		{ "ToolTip", "We cache the original change Id here since deserialization of the clipboard will cause the change id to update.\nUsing the original change id, we can identify during pasting whether we have already pasted this script variable before." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraClipboardScriptVariable_Statics::NewProp_OriginalChangeId = { "OriginalChangeId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraClipboardScriptVariable, OriginalChangeId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraClipboardScriptVariable_Statics::NewProp_OriginalChangeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraClipboardScriptVariable_Statics::NewProp_OriginalChangeId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraClipboardScriptVariable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraClipboardScriptVariable_Statics::NewProp_ScriptVariable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraClipboardScriptVariable_Statics::NewProp_OriginalChangeId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraClipboardScriptVariable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
		nullptr,
		&NewStructOps,
		"NiagaraClipboardScriptVariable",
		sizeof(FNiagaraClipboardScriptVariable),
		alignof(FNiagaraClipboardScriptVariable),
		Z_Construct_UScriptStruct_FNiagaraClipboardScriptVariable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraClipboardScriptVariable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraClipboardScriptVariable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraClipboardScriptVariable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraClipboardScriptVariable()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraClipboardScriptVariable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraClipboardScriptVariable.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraClipboardScriptVariable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraClipboardScriptVariable.InnerSingleton;
	}
	void UNiagaraClipboardContent::StaticRegisterNativesUNiagaraClipboardContent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraClipboardContent);
	UClass* Z_Construct_UClass_UNiagaraClipboardContent_NoRegister()
	{
		return UNiagaraClipboardContent::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraClipboardContent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Functions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Functions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Functions;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FunctionInputs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionInputs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FunctionInputs;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Renderers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Renderers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Renderers;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Scripts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scripts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Scripts;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScriptVariables_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScriptVariables_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ScriptVariables;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExportedNodes_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExportedNodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFixupPasteIndexForScriptDependenciesInStack_MetaData[];
#endif
		static void NewProp_bFixupPasteIndexForScriptDependenciesInStack_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFixupPasteIndexForScriptDependenciesInStack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraClipboardContent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraClipboardContent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraClipboard.h" },
		{ "ModuleRelativePath", "Public/NiagaraClipboard.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraClipboardContent_Statics::NewProp_Functions_Inner = { "Functions", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UNiagaraClipboardFunction_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraClipboardContent_Statics::NewProp_Functions_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraClipboard.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraClipboardContent_Statics::NewProp_Functions = { "Functions", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraClipboardContent, Functions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraClipboardContent_Statics::NewProp_Functions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraClipboardContent_Statics::NewProp_Functions_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraClipboardContent_Statics::NewProp_FunctionInputs_Inner = { "FunctionInputs", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UNiagaraClipboardFunctionInput_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraClipboardContent_Statics::NewProp_FunctionInputs_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraClipboard.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraClipboardContent_Statics::NewProp_FunctionInputs = { "FunctionInputs", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraClipboardContent, FunctionInputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraClipboardContent_Statics::NewProp_FunctionInputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraClipboardContent_Statics::NewProp_FunctionInputs_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraClipboardContent_Statics::NewProp_Renderers_Inner = { "Renderers", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UNiagaraRendererProperties_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraClipboardContent_Statics::NewProp_Renderers_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraClipboard.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraClipboardContent_Statics::NewProp_Renderers = { "Renderers", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraClipboardContent, Renderers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraClipboardContent_Statics::NewProp_Renderers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraClipboardContent_Statics::NewProp_Renderers_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraClipboardContent_Statics::NewProp_Scripts_Inner = { "Scripts", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UNiagaraScript_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraClipboardContent_Statics::NewProp_Scripts_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraClipboard.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraClipboardContent_Statics::NewProp_Scripts = { "Scripts", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraClipboardContent, Scripts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraClipboardContent_Statics::NewProp_Scripts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraClipboardContent_Statics::NewProp_Scripts_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraClipboardContent_Statics::NewProp_ScriptVariables_Inner = { "ScriptVariables", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraClipboardScriptVariable, METADATA_PARAMS(nullptr, 0) }; // 4156665993
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraClipboardContent_Statics::NewProp_ScriptVariables_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraClipboard.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraClipboardContent_Statics::NewProp_ScriptVariables = { "ScriptVariables", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraClipboardContent, ScriptVariables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraClipboardContent_Statics::NewProp_ScriptVariables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraClipboardContent_Statics::NewProp_ScriptVariables_MetaData)) }; // 4156665993
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraClipboardContent_Statics::NewProp_ExportedNodes_MetaData[] = {
		{ "Comment", "/** We expect nodes to be exported into this string using FEdGraphUtilities::ExportNodesToText */" },
		{ "ModuleRelativePath", "Public/NiagaraClipboard.h" },
		{ "ToolTip", "We expect nodes to be exported into this string using FEdGraphUtilities::ExportNodesToText" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraClipboardContent_Statics::NewProp_ExportedNodes = { "ExportedNodes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraClipboardContent, ExportedNodes), METADATA_PARAMS(Z_Construct_UClass_UNiagaraClipboardContent_Statics::NewProp_ExportedNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraClipboardContent_Statics::NewProp_ExportedNodes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraClipboardContent_Statics::NewProp_bFixupPasteIndexForScriptDependenciesInStack_MetaData[] = {
		{ "Comment", "/** Markup MetaData to specify that if scripts are pasted from the clipboard to automatically fixup their order in the stack to satisfy dependencies. */" },
		{ "ModuleRelativePath", "Public/NiagaraClipboard.h" },
		{ "ToolTip", "Markup MetaData to specify that if scripts are pasted from the clipboard to automatically fixup their order in the stack to satisfy dependencies." },
	};
#endif
	void Z_Construct_UClass_UNiagaraClipboardContent_Statics::NewProp_bFixupPasteIndexForScriptDependenciesInStack_SetBit(void* Obj)
	{
		((UNiagaraClipboardContent*)Obj)->bFixupPasteIndexForScriptDependenciesInStack = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraClipboardContent_Statics::NewProp_bFixupPasteIndexForScriptDependenciesInStack = { "bFixupPasteIndexForScriptDependenciesInStack", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraClipboardContent), &Z_Construct_UClass_UNiagaraClipboardContent_Statics::NewProp_bFixupPasteIndexForScriptDependenciesInStack_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraClipboardContent_Statics::NewProp_bFixupPasteIndexForScriptDependenciesInStack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraClipboardContent_Statics::NewProp_bFixupPasteIndexForScriptDependenciesInStack_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraClipboardContent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraClipboardContent_Statics::NewProp_Functions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraClipboardContent_Statics::NewProp_Functions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraClipboardContent_Statics::NewProp_FunctionInputs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraClipboardContent_Statics::NewProp_FunctionInputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraClipboardContent_Statics::NewProp_Renderers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraClipboardContent_Statics::NewProp_Renderers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraClipboardContent_Statics::NewProp_Scripts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraClipboardContent_Statics::NewProp_Scripts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraClipboardContent_Statics::NewProp_ScriptVariables_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraClipboardContent_Statics::NewProp_ScriptVariables,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraClipboardContent_Statics::NewProp_ExportedNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraClipboardContent_Statics::NewProp_bFixupPasteIndexForScriptDependenciesInStack,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraClipboardContent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraClipboardContent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraClipboardContent_Statics::ClassParams = {
		&UNiagaraClipboardContent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraClipboardContent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraClipboardContent_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraClipboardContent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraClipboardContent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraClipboardContent()
	{
		if (!Z_Registration_Info_UClass_UNiagaraClipboardContent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraClipboardContent.OuterSingleton, Z_Construct_UClass_UNiagaraClipboardContent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraClipboardContent.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraClipboardContent>()
	{
		return UNiagaraClipboardContent::StaticClass();
	}
	UNiagaraClipboardContent::UNiagaraClipboardContent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraClipboardContent);
	UNiagaraClipboardContent::~UNiagaraClipboardContent() {}
	DEFINE_FUNCTION(UNiagaraClipboardEditorScriptingUtilities::execCreateDynamicValueInput)
	{
		P_GET_OBJECT(UObject,Z_Param_InOuter);
		P_GET_PROPERTY(FNameProperty,Z_Param_InInputName);
		P_GET_PROPERTY(FNameProperty,Z_Param_InInputTypeName);
		P_GET_UBOOL(Z_Param_bInHasEditCondition);
		P_GET_UBOOL(Z_Param_bInEditConditionValue);
		P_GET_PROPERTY(FStrProperty,Z_Param_InDynamicValueName);
		P_GET_OBJECT(UNiagaraScript,Z_Param_InDynamicValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNiagaraClipboardFunctionInput**)Z_Param__Result=UNiagaraClipboardEditorScriptingUtilities::CreateDynamicValueInput(Z_Param_InOuter,Z_Param_InInputName,Z_Param_InInputTypeName,Z_Param_bInHasEditCondition,Z_Param_bInEditConditionValue,Z_Param_InDynamicValueName,Z_Param_InDynamicValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraClipboardEditorScriptingUtilities::execCreateExpressionValueInput)
	{
		P_GET_OBJECT(UObject,Z_Param_InOuter);
		P_GET_PROPERTY(FNameProperty,Z_Param_InInputName);
		P_GET_PROPERTY(FNameProperty,Z_Param_InInputTypeName);
		P_GET_UBOOL(Z_Param_bInHasEditCondition);
		P_GET_UBOOL(Z_Param_bInEditConditionValue);
		P_GET_PROPERTY(FStrProperty,Z_Param_InExpressionValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNiagaraClipboardFunctionInput**)Z_Param__Result=UNiagaraClipboardEditorScriptingUtilities::CreateExpressionValueInput(Z_Param_InOuter,Z_Param_InInputName,Z_Param_InInputTypeName,Z_Param_bInHasEditCondition,Z_Param_bInEditConditionValue,Z_Param_InExpressionValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraClipboardEditorScriptingUtilities::execCreateDataValueInput)
	{
		P_GET_OBJECT(UObject,Z_Param_InOuter);
		P_GET_PROPERTY(FNameProperty,Z_Param_InInputName);
		P_GET_UBOOL(Z_Param_bInHasEditCondition);
		P_GET_UBOOL(Z_Param_bInEditConditionValue);
		P_GET_OBJECT(UNiagaraDataInterface,Z_Param_InDataValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNiagaraClipboardFunctionInput**)Z_Param__Result=UNiagaraClipboardEditorScriptingUtilities::CreateDataValueInput(Z_Param_InOuter,Z_Param_InInputName,Z_Param_bInHasEditCondition,Z_Param_bInEditConditionValue,Z_Param_InDataValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraClipboardEditorScriptingUtilities::execCreateLinkedValueInput)
	{
		P_GET_OBJECT(UObject,Z_Param_InOuter);
		P_GET_PROPERTY(FNameProperty,Z_Param_InInputName);
		P_GET_PROPERTY(FNameProperty,Z_Param_InInputTypeName);
		P_GET_UBOOL(Z_Param_bInHasEditCondition);
		P_GET_UBOOL(Z_Param_bInEditConditionValue);
		P_GET_PROPERTY(FNameProperty,Z_Param_InLinkedValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNiagaraClipboardFunctionInput**)Z_Param__Result=UNiagaraClipboardEditorScriptingUtilities::CreateLinkedValueInput(Z_Param_InOuter,Z_Param_InInputName,Z_Param_InInputTypeName,Z_Param_bInHasEditCondition,Z_Param_bInEditConditionValue,Z_Param_InLinkedValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraClipboardEditorScriptingUtilities::execCreateEnumLocalValueInput)
	{
		P_GET_OBJECT(UObject,Z_Param_InOuter);
		P_GET_PROPERTY(FNameProperty,Z_Param_InInputName);
		P_GET_UBOOL(Z_Param_bInHasEditCondition);
		P_GET_UBOOL(Z_Param_bInEditCoditionValue);
		P_GET_OBJECT(UUserDefinedEnum,Z_Param_InEnumType);
		P_GET_PROPERTY(FIntProperty,Z_Param_InEnumValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNiagaraClipboardFunctionInput**)Z_Param__Result=UNiagaraClipboardEditorScriptingUtilities::CreateEnumLocalValueInput(Z_Param_InOuter,Z_Param_InInputName,Z_Param_bInHasEditCondition,Z_Param_bInEditCoditionValue,Z_Param_InEnumType,Z_Param_InEnumValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraClipboardEditorScriptingUtilities::execCreateStructLocalValueInput)
	{
		P_GET_OBJECT(UObject,Z_Param_InOuter);
		P_GET_PROPERTY(FNameProperty,Z_Param_InInputName);
		P_GET_UBOOL(Z_Param_bInHasEditCondition);
		P_GET_UBOOL(Z_Param_bInEditConditionValue);
		P_GET_OBJECT(UUserDefinedStruct,Z_Param_InStructValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNiagaraClipboardFunctionInput**)Z_Param__Result=UNiagaraClipboardEditorScriptingUtilities::CreateStructLocalValueInput(Z_Param_InOuter,Z_Param_InInputName,Z_Param_bInHasEditCondition,Z_Param_bInEditConditionValue,Z_Param_InStructValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraClipboardEditorScriptingUtilities::execCreateBoolLocalValueInput)
	{
		P_GET_OBJECT(UObject,Z_Param_InOuter);
		P_GET_PROPERTY(FNameProperty,Z_Param_InInputName);
		P_GET_UBOOL(Z_Param_bInHasEditCondition);
		P_GET_UBOOL(Z_Param_bInEditConditionValue);
		P_GET_UBOOL(Z_Param_InBoolValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNiagaraClipboardFunctionInput**)Z_Param__Result=UNiagaraClipboardEditorScriptingUtilities::CreateBoolLocalValueInput(Z_Param_InOuter,Z_Param_InInputName,Z_Param_bInHasEditCondition,Z_Param_bInEditConditionValue,Z_Param_InBoolValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraClipboardEditorScriptingUtilities::execCreateIntLocalValueInput)
	{
		P_GET_OBJECT(UObject,Z_Param_InOuter);
		P_GET_PROPERTY(FNameProperty,Z_Param_InInputName);
		P_GET_UBOOL(Z_Param_bInHasEditCondition);
		P_GET_UBOOL(Z_Param_bInEditConditionValue);
		P_GET_PROPERTY(FIntProperty,Z_Param_InLocalValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNiagaraClipboardFunctionInput**)Z_Param__Result=UNiagaraClipboardEditorScriptingUtilities::CreateIntLocalValueInput(Z_Param_InOuter,Z_Param_InInputName,Z_Param_bInHasEditCondition,Z_Param_bInEditConditionValue,Z_Param_InLocalValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraClipboardEditorScriptingUtilities::execCreateVec3LocalValueInput)
	{
		P_GET_OBJECT(UObject,Z_Param_InOuter);
		P_GET_PROPERTY(FNameProperty,Z_Param_InInputName);
		P_GET_UBOOL(Z_Param_bInHasEditCondition);
		P_GET_UBOOL(Z_Param_bInEditConditionValue);
		P_GET_STRUCT(FVector,Z_Param_InVec3Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNiagaraClipboardFunctionInput**)Z_Param__Result=UNiagaraClipboardEditorScriptingUtilities::CreateVec3LocalValueInput(Z_Param_InOuter,Z_Param_InInputName,Z_Param_bInHasEditCondition,Z_Param_bInEditConditionValue,Z_Param_InVec3Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraClipboardEditorScriptingUtilities::execCreateVec2LocalValueInput)
	{
		P_GET_OBJECT(UObject,Z_Param_InOuter);
		P_GET_PROPERTY(FNameProperty,Z_Param_InInputName);
		P_GET_UBOOL(Z_Param_bInHasEditCondition);
		P_GET_UBOOL(Z_Param_bInEditConditionValue);
		P_GET_STRUCT(FVector2D,Z_Param_InVec2Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNiagaraClipboardFunctionInput**)Z_Param__Result=UNiagaraClipboardEditorScriptingUtilities::CreateVec2LocalValueInput(Z_Param_InOuter,Z_Param_InInputName,Z_Param_bInHasEditCondition,Z_Param_bInEditConditionValue,Z_Param_InVec2Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraClipboardEditorScriptingUtilities::execCreateFloatLocalValueInput)
	{
		P_GET_OBJECT(UObject,Z_Param_InOuter);
		P_GET_PROPERTY(FNameProperty,Z_Param_InInputName);
		P_GET_UBOOL(Z_Param_bInHasEditCondition);
		P_GET_UBOOL(Z_Param_bInEditConditionValue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InLocalValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNiagaraClipboardFunctionInput**)Z_Param__Result=UNiagaraClipboardEditorScriptingUtilities::CreateFloatLocalValueInput(Z_Param_InOuter,Z_Param_InInputName,Z_Param_bInHasEditCondition,Z_Param_bInEditConditionValue,Z_Param_InLocalValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraClipboardEditorScriptingUtilities::execGetTypeName)
	{
		P_GET_OBJECT(UNiagaraClipboardFunctionInput,Z_Param_InInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UNiagaraClipboardEditorScriptingUtilities::GetTypeName(Z_Param_InInput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraClipboardEditorScriptingUtilities::execTrySetLocalValueAsInt)
	{
		P_GET_OBJECT(UNiagaraClipboardFunctionInput,Z_Param_InInput);
		P_GET_UBOOL_REF(Z_Param_Out_bOutSucceeded);
		P_GET_PROPERTY(FIntProperty,Z_Param_InValue);
		P_GET_UBOOL(Z_Param_bLooseTyping);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNiagaraClipboardEditorScriptingUtilities::TrySetLocalValueAsInt(Z_Param_InInput,Z_Param_Out_bOutSucceeded,Z_Param_InValue,Z_Param_bLooseTyping);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraClipboardEditorScriptingUtilities::execTryGetLocalValueAsInt)
	{
		P_GET_OBJECT(UNiagaraClipboardFunctionInput,Z_Param_InInput);
		P_GET_UBOOL_REF(Z_Param_Out_bOutSucceeded);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNiagaraClipboardEditorScriptingUtilities::TryGetLocalValueAsInt(Z_Param_InInput,Z_Param_Out_bOutSucceeded,Z_Param_Out_OutValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraClipboardEditorScriptingUtilities::execTryGetLocalValueAsFloat)
	{
		P_GET_OBJECT(UNiagaraClipboardFunctionInput,Z_Param_InInput);
		P_GET_UBOOL_REF(Z_Param_Out_bOutSucceeded);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNiagaraClipboardEditorScriptingUtilities::TryGetLocalValueAsFloat(Z_Param_InInput,Z_Param_Out_bOutSucceeded,Z_Param_Out_OutValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraClipboardEditorScriptingUtilities::execTryGetInputByName)
	{
		P_GET_TARRAY_REF(UNiagaraClipboardFunctionInput*,Z_Param_Out_InInputs);
		P_GET_PROPERTY(FNameProperty,Z_Param_InInputName);
		P_GET_UBOOL_REF(Z_Param_Out_bOutSucceeded);
		P_GET_OBJECT_REF(UNiagaraClipboardFunctionInput,Z_Param_Out_OutInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNiagaraClipboardEditorScriptingUtilities::TryGetInputByName(Z_Param_Out_InInputs,Z_Param_InInputName,Z_Param_Out_bOutSucceeded,Z_Param_Out_OutInput);
		P_NATIVE_END;
	}
	void UNiagaraClipboardEditorScriptingUtilities::StaticRegisterNativesUNiagaraClipboardEditorScriptingUtilities()
	{
		UClass* Class = UNiagaraClipboardEditorScriptingUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateBoolLocalValueInput", &UNiagaraClipboardEditorScriptingUtilities::execCreateBoolLocalValueInput },
			{ "CreateDataValueInput", &UNiagaraClipboardEditorScriptingUtilities::execCreateDataValueInput },
			{ "CreateDynamicValueInput", &UNiagaraClipboardEditorScriptingUtilities::execCreateDynamicValueInput },
			{ "CreateEnumLocalValueInput", &UNiagaraClipboardEditorScriptingUtilities::execCreateEnumLocalValueInput },
			{ "CreateExpressionValueInput", &UNiagaraClipboardEditorScriptingUtilities::execCreateExpressionValueInput },
			{ "CreateFloatLocalValueInput", &UNiagaraClipboardEditorScriptingUtilities::execCreateFloatLocalValueInput },
			{ "CreateIntLocalValueInput", &UNiagaraClipboardEditorScriptingUtilities::execCreateIntLocalValueInput },
			{ "CreateLinkedValueInput", &UNiagaraClipboardEditorScriptingUtilities::execCreateLinkedValueInput },
			{ "CreateStructLocalValueInput", &UNiagaraClipboardEditorScriptingUtilities::execCreateStructLocalValueInput },
			{ "CreateVec2LocalValueInput", &UNiagaraClipboardEditorScriptingUtilities::execCreateVec2LocalValueInput },
			{ "CreateVec3LocalValueInput", &UNiagaraClipboardEditorScriptingUtilities::execCreateVec3LocalValueInput },
			{ "GetTypeName", &UNiagaraClipboardEditorScriptingUtilities::execGetTypeName },
			{ "TryGetInputByName", &UNiagaraClipboardEditorScriptingUtilities::execTryGetInputByName },
			{ "TryGetLocalValueAsFloat", &UNiagaraClipboardEditorScriptingUtilities::execTryGetLocalValueAsFloat },
			{ "TryGetLocalValueAsInt", &UNiagaraClipboardEditorScriptingUtilities::execTryGetLocalValueAsInt },
			{ "TrySetLocalValueAsInt", &UNiagaraClipboardEditorScriptingUtilities::execTrySetLocalValueAsInt },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateBoolLocalValueInput_Statics
	{
		struct NiagaraClipboardEditorScriptingUtilities_eventCreateBoolLocalValueInput_Parms
		{
			UObject* InOuter;
			FName InInputName;
			bool bInHasEditCondition;
			bool bInEditConditionValue;
			bool InBoolValue;
			UNiagaraClipboardFunctionInput* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InOuter;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InInputName;
		static void NewProp_bInHasEditCondition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInHasEditCondition;
		static void NewProp_bInEditConditionValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEditConditionValue;
		static void NewProp_InBoolValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InBoolValue;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateBoolLocalValueInput_Statics::NewProp_InOuter = { "InOuter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraClipboardEditorScriptingUtilities_eventCreateBoolLocalValueInput_Parms, InOuter), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateBoolLocalValueInput_Statics::NewProp_InInputName = { "InInputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraClipboardEditorScriptingUtilities_eventCreateBoolLocalValueInput_Parms, InInputName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateBoolLocalValueInput_Statics::NewProp_bInHasEditCondition_SetBit(void* Obj)
	{
		((NiagaraClipboardEditorScriptingUtilities_eventCreateBoolLocalValueInput_Parms*)Obj)->bInHasEditCondition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateBoolLocalValueInput_Statics::NewProp_bInHasEditCondition = { "bInHasEditCondition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraClipboardEditorScriptingUtilities_eventCreateBoolLocalValueInput_Parms), &Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateBoolLocalValueInput_Statics::NewProp_bInHasEditCondition_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateBoolLocalValueInput_Statics::NewProp_bInEditConditionValue_SetBit(void* Obj)
	{
		((NiagaraClipboardEditorScriptingUtilities_eventCreateBoolLocalValueInput_Parms*)Obj)->bInEditConditionValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateBoolLocalValueInput_Statics::NewProp_bInEditConditionValue = { "bInEditConditionValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraClipboardEditorScriptingUtilities_eventCreateBoolLocalValueInput_Parms), &Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateBoolLocalValueInput_Statics::NewProp_bInEditConditionValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateBoolLocalValueInput_Statics::NewProp_InBoolValue_SetBit(void* Obj)
	{
		((NiagaraClipboardEditorScriptingUtilities_eventCreateBoolLocalValueInput_Parms*)Obj)->InBoolValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateBoolLocalValueInput_Statics::NewProp_InBoolValue = { "InBoolValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraClipboardEditorScriptingUtilities_eventCreateBoolLocalValueInput_Parms), &Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateBoolLocalValueInput_Statics::NewProp_InBoolValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateBoolLocalValueInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraClipboardEditorScriptingUtilities_eventCreateBoolLocalValueInput_Parms, ReturnValue), Z_Construct_UClass_UNiagaraClipboardFunctionInput_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateBoolLocalValueInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateBoolLocalValueInput_Statics::NewProp_InOuter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateBoolLocalValueInput_Statics::NewProp_InInputName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateBoolLocalValueInput_Statics::NewProp_bInHasEditCondition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateBoolLocalValueInput_Statics::NewProp_bInEditConditionValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateBoolLocalValueInput_Statics::NewProp_InBoolValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateBoolLocalValueInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateBoolLocalValueInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/NiagaraClipboard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateBoolLocalValueInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraClipboardEditorScriptingUtilities, nullptr, "CreateBoolLocalValueInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateBoolLocalValueInput_Statics::NiagaraClipboardEditorScriptingUtilities_eventCreateBoolLocalValueInput_Parms), Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateBoolLocalValueInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateBoolLocalValueInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateBoolLocalValueInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateBoolLocalValueInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateBoolLocalValueInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateBoolLocalValueInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateDataValueInput_Statics
	{
		struct NiagaraClipboardEditorScriptingUtilities_eventCreateDataValueInput_Parms
		{
			UObject* InOuter;
			FName InInputName;
			bool bInHasEditCondition;
			bool bInEditConditionValue;
			UNiagaraDataInterface* InDataValue;
			UNiagaraClipboardFunctionInput* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InOuter;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InInputName;
		static void NewProp_bInHasEditCondition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInHasEditCondition;
		static void NewProp_bInEditConditionValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEditConditionValue;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InDataValue;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateDataValueInput_Statics::NewProp_InOuter = { "InOuter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraClipboardEditorScriptingUtilities_eventCreateDataValueInput_Parms, InOuter), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateDataValueInput_Statics::NewProp_InInputName = { "InInputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraClipboardEditorScriptingUtilities_eventCreateDataValueInput_Parms, InInputName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateDataValueInput_Statics::NewProp_bInHasEditCondition_SetBit(void* Obj)
	{
		((NiagaraClipboardEditorScriptingUtilities_eventCreateDataValueInput_Parms*)Obj)->bInHasEditCondition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateDataValueInput_Statics::NewProp_bInHasEditCondition = { "bInHasEditCondition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraClipboardEditorScriptingUtilities_eventCreateDataValueInput_Parms), &Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateDataValueInput_Statics::NewProp_bInHasEditCondition_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateDataValueInput_Statics::NewProp_bInEditConditionValue_SetBit(void* Obj)
	{
		((NiagaraClipboardEditorScriptingUtilities_eventCreateDataValueInput_Parms*)Obj)->bInEditConditionValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateDataValueInput_Statics::NewProp_bInEditConditionValue = { "bInEditConditionValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraClipboardEditorScriptingUtilities_eventCreateDataValueInput_Parms), &Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateDataValueInput_Statics::NewProp_bInEditConditionValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateDataValueInput_Statics::NewProp_InDataValue = { "InDataValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraClipboardEditorScriptingUtilities_eventCreateDataValueInput_Parms, InDataValue), Z_Construct_UClass_UNiagaraDataInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateDataValueInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraClipboardEditorScriptingUtilities_eventCreateDataValueInput_Parms, ReturnValue), Z_Construct_UClass_UNiagaraClipboardFunctionInput_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateDataValueInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateDataValueInput_Statics::NewProp_InOuter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateDataValueInput_Statics::NewProp_InInputName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateDataValueInput_Statics::NewProp_bInHasEditCondition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateDataValueInput_Statics::NewProp_bInEditConditionValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateDataValueInput_Statics::NewProp_InDataValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateDataValueInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateDataValueInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/NiagaraClipboard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateDataValueInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraClipboardEditorScriptingUtilities, nullptr, "CreateDataValueInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateDataValueInput_Statics::NiagaraClipboardEditorScriptingUtilities_eventCreateDataValueInput_Parms), Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateDataValueInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateDataValueInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateDataValueInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateDataValueInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateDataValueInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateDataValueInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateDynamicValueInput_Statics
	{
		struct NiagaraClipboardEditorScriptingUtilities_eventCreateDynamicValueInput_Parms
		{
			UObject* InOuter;
			FName InInputName;
			FName InInputTypeName;
			bool bInHasEditCondition;
			bool bInEditConditionValue;
			FString InDynamicValueName;
			UNiagaraScript* InDynamicValue;
			UNiagaraClipboardFunctionInput* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InOuter;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InInputName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InInputTypeName;
		static void NewProp_bInHasEditCondition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInHasEditCondition;
		static void NewProp_bInEditConditionValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEditConditionValue;
		static const UECodeGen_Private::FStrPropertyParams NewProp_InDynamicValueName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InDynamicValue;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateDynamicValueInput_Statics::NewProp_InOuter = { "InOuter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraClipboardEditorScriptingUtilities_eventCreateDynamicValueInput_Parms, InOuter), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateDynamicValueInput_Statics::NewProp_InInputName = { "InInputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraClipboardEditorScriptingUtilities_eventCreateDynamicValueInput_Parms, InInputName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateDynamicValueInput_Statics::NewProp_InInputTypeName = { "InInputTypeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraClipboardEditorScriptingUtilities_eventCreateDynamicValueInput_Parms, InInputTypeName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateDynamicValueInput_Statics::NewProp_bInHasEditCondition_SetBit(void* Obj)
	{
		((NiagaraClipboardEditorScriptingUtilities_eventCreateDynamicValueInput_Parms*)Obj)->bInHasEditCondition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateDynamicValueInput_Statics::NewProp_bInHasEditCondition = { "bInHasEditCondition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraClipboardEditorScriptingUtilities_eventCreateDynamicValueInput_Parms), &Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateDynamicValueInput_Statics::NewProp_bInHasEditCondition_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateDynamicValueInput_Statics::NewProp_bInEditConditionValue_SetBit(void* Obj)
	{
		((NiagaraClipboardEditorScriptingUtilities_eventCreateDynamicValueInput_Parms*)Obj)->bInEditConditionValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateDynamicValueInput_Statics::NewProp_bInEditConditionValue = { "bInEditConditionValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraClipboardEditorScriptingUtilities_eventCreateDynamicValueInput_Parms), &Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateDynamicValueInput_Statics::NewProp_bInEditConditionValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateDynamicValueInput_Statics::NewProp_InDynamicValueName = { "InDynamicValueName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraClipboardEditorScriptingUtilities_eventCreateDynamicValueInput_Parms, InDynamicValueName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateDynamicValueInput_Statics::NewProp_InDynamicValue = { "InDynamicValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraClipboardEditorScriptingUtilities_eventCreateDynamicValueInput_Parms, InDynamicValue), Z_Construct_UClass_UNiagaraScript_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateDynamicValueInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraClipboardEditorScriptingUtilities_eventCreateDynamicValueInput_Parms, ReturnValue), Z_Construct_UClass_UNiagaraClipboardFunctionInput_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateDynamicValueInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateDynamicValueInput_Statics::NewProp_InOuter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateDynamicValueInput_Statics::NewProp_InInputName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateDynamicValueInput_Statics::NewProp_InInputTypeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateDynamicValueInput_Statics::NewProp_bInHasEditCondition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateDynamicValueInput_Statics::NewProp_bInEditConditionValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateDynamicValueInput_Statics::NewProp_InDynamicValueName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateDynamicValueInput_Statics::NewProp_InDynamicValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateDynamicValueInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateDynamicValueInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/NiagaraClipboard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateDynamicValueInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraClipboardEditorScriptingUtilities, nullptr, "CreateDynamicValueInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateDynamicValueInput_Statics::NiagaraClipboardEditorScriptingUtilities_eventCreateDynamicValueInput_Parms), Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateDynamicValueInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateDynamicValueInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateDynamicValueInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateDynamicValueInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateDynamicValueInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateDynamicValueInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateEnumLocalValueInput_Statics
	{
		struct NiagaraClipboardEditorScriptingUtilities_eventCreateEnumLocalValueInput_Parms
		{
			UObject* InOuter;
			FName InInputName;
			bool bInHasEditCondition;
			bool bInEditCoditionValue;
			UUserDefinedEnum* InEnumType;
			int32 InEnumValue;
			UNiagaraClipboardFunctionInput* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InOuter;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InInputName;
		static void NewProp_bInHasEditCondition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInHasEditCondition;
		static void NewProp_bInEditCoditionValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEditCoditionValue;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InEnumType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InEnumValue;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateEnumLocalValueInput_Statics::NewProp_InOuter = { "InOuter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraClipboardEditorScriptingUtilities_eventCreateEnumLocalValueInput_Parms, InOuter), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateEnumLocalValueInput_Statics::NewProp_InInputName = { "InInputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraClipboardEditorScriptingUtilities_eventCreateEnumLocalValueInput_Parms, InInputName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateEnumLocalValueInput_Statics::NewProp_bInHasEditCondition_SetBit(void* Obj)
	{
		((NiagaraClipboardEditorScriptingUtilities_eventCreateEnumLocalValueInput_Parms*)Obj)->bInHasEditCondition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateEnumLocalValueInput_Statics::NewProp_bInHasEditCondition = { "bInHasEditCondition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraClipboardEditorScriptingUtilities_eventCreateEnumLocalValueInput_Parms), &Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateEnumLocalValueInput_Statics::NewProp_bInHasEditCondition_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateEnumLocalValueInput_Statics::NewProp_bInEditCoditionValue_SetBit(void* Obj)
	{
		((NiagaraClipboardEditorScriptingUtilities_eventCreateEnumLocalValueInput_Parms*)Obj)->bInEditCoditionValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateEnumLocalValueInput_Statics::NewProp_bInEditCoditionValue = { "bInEditCoditionValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraClipboardEditorScriptingUtilities_eventCreateEnumLocalValueInput_Parms), &Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateEnumLocalValueInput_Statics::NewProp_bInEditCoditionValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateEnumLocalValueInput_Statics::NewProp_InEnumType = { "InEnumType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraClipboardEditorScriptingUtilities_eventCreateEnumLocalValueInput_Parms, InEnumType), Z_Construct_UClass_UUserDefinedEnum_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateEnumLocalValueInput_Statics::NewProp_InEnumValue = { "InEnumValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraClipboardEditorScriptingUtilities_eventCreateEnumLocalValueInput_Parms, InEnumValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateEnumLocalValueInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraClipboardEditorScriptingUtilities_eventCreateEnumLocalValueInput_Parms, ReturnValue), Z_Construct_UClass_UNiagaraClipboardFunctionInput_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateEnumLocalValueInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateEnumLocalValueInput_Statics::NewProp_InOuter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateEnumLocalValueInput_Statics::NewProp_InInputName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateEnumLocalValueInput_Statics::NewProp_bInHasEditCondition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateEnumLocalValueInput_Statics::NewProp_bInEditCoditionValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateEnumLocalValueInput_Statics::NewProp_InEnumType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateEnumLocalValueInput_Statics::NewProp_InEnumValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateEnumLocalValueInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateEnumLocalValueInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/NiagaraClipboard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateEnumLocalValueInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraClipboardEditorScriptingUtilities, nullptr, "CreateEnumLocalValueInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateEnumLocalValueInput_Statics::NiagaraClipboardEditorScriptingUtilities_eventCreateEnumLocalValueInput_Parms), Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateEnumLocalValueInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateEnumLocalValueInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateEnumLocalValueInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateEnumLocalValueInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateEnumLocalValueInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateEnumLocalValueInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateExpressionValueInput_Statics
	{
		struct NiagaraClipboardEditorScriptingUtilities_eventCreateExpressionValueInput_Parms
		{
			UObject* InOuter;
			FName InInputName;
			FName InInputTypeName;
			bool bInHasEditCondition;
			bool bInEditConditionValue;
			FString InExpressionValue;
			UNiagaraClipboardFunctionInput* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InOuter;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InInputName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InInputTypeName;
		static void NewProp_bInHasEditCondition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInHasEditCondition;
		static void NewProp_bInEditConditionValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEditConditionValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InExpressionValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InExpressionValue;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateExpressionValueInput_Statics::NewProp_InOuter = { "InOuter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraClipboardEditorScriptingUtilities_eventCreateExpressionValueInput_Parms, InOuter), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateExpressionValueInput_Statics::NewProp_InInputName = { "InInputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraClipboardEditorScriptingUtilities_eventCreateExpressionValueInput_Parms, InInputName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateExpressionValueInput_Statics::NewProp_InInputTypeName = { "InInputTypeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraClipboardEditorScriptingUtilities_eventCreateExpressionValueInput_Parms, InInputTypeName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateExpressionValueInput_Statics::NewProp_bInHasEditCondition_SetBit(void* Obj)
	{
		((NiagaraClipboardEditorScriptingUtilities_eventCreateExpressionValueInput_Parms*)Obj)->bInHasEditCondition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateExpressionValueInput_Statics::NewProp_bInHasEditCondition = { "bInHasEditCondition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraClipboardEditorScriptingUtilities_eventCreateExpressionValueInput_Parms), &Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateExpressionValueInput_Statics::NewProp_bInHasEditCondition_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateExpressionValueInput_Statics::NewProp_bInEditConditionValue_SetBit(void* Obj)
	{
		((NiagaraClipboardEditorScriptingUtilities_eventCreateExpressionValueInput_Parms*)Obj)->bInEditConditionValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateExpressionValueInput_Statics::NewProp_bInEditConditionValue = { "bInEditConditionValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraClipboardEditorScriptingUtilities_eventCreateExpressionValueInput_Parms), &Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateExpressionValueInput_Statics::NewProp_bInEditConditionValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateExpressionValueInput_Statics::NewProp_InExpressionValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateExpressionValueInput_Statics::NewProp_InExpressionValue = { "InExpressionValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraClipboardEditorScriptingUtilities_eventCreateExpressionValueInput_Parms, InExpressionValue), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateExpressionValueInput_Statics::NewProp_InExpressionValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateExpressionValueInput_Statics::NewProp_InExpressionValue_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateExpressionValueInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraClipboardEditorScriptingUtilities_eventCreateExpressionValueInput_Parms, ReturnValue), Z_Construct_UClass_UNiagaraClipboardFunctionInput_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateExpressionValueInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateExpressionValueInput_Statics::NewProp_InOuter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateExpressionValueInput_Statics::NewProp_InInputName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateExpressionValueInput_Statics::NewProp_InInputTypeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateExpressionValueInput_Statics::NewProp_bInHasEditCondition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateExpressionValueInput_Statics::NewProp_bInEditConditionValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateExpressionValueInput_Statics::NewProp_InExpressionValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateExpressionValueInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateExpressionValueInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/NiagaraClipboard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateExpressionValueInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraClipboardEditorScriptingUtilities, nullptr, "CreateExpressionValueInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateExpressionValueInput_Statics::NiagaraClipboardEditorScriptingUtilities_eventCreateExpressionValueInput_Parms), Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateExpressionValueInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateExpressionValueInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateExpressionValueInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateExpressionValueInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateExpressionValueInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateExpressionValueInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateFloatLocalValueInput_Statics
	{
		struct NiagaraClipboardEditorScriptingUtilities_eventCreateFloatLocalValueInput_Parms
		{
			UObject* InOuter;
			FName InInputName;
			bool bInHasEditCondition;
			bool bInEditConditionValue;
			float InLocalValue;
			UNiagaraClipboardFunctionInput* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InOuter;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InInputName;
		static void NewProp_bInHasEditCondition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInHasEditCondition;
		static void NewProp_bInEditConditionValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEditConditionValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InLocalValue;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateFloatLocalValueInput_Statics::NewProp_InOuter = { "InOuter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraClipboardEditorScriptingUtilities_eventCreateFloatLocalValueInput_Parms, InOuter), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateFloatLocalValueInput_Statics::NewProp_InInputName = { "InInputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraClipboardEditorScriptingUtilities_eventCreateFloatLocalValueInput_Parms, InInputName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateFloatLocalValueInput_Statics::NewProp_bInHasEditCondition_SetBit(void* Obj)
	{
		((NiagaraClipboardEditorScriptingUtilities_eventCreateFloatLocalValueInput_Parms*)Obj)->bInHasEditCondition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateFloatLocalValueInput_Statics::NewProp_bInHasEditCondition = { "bInHasEditCondition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraClipboardEditorScriptingUtilities_eventCreateFloatLocalValueInput_Parms), &Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateFloatLocalValueInput_Statics::NewProp_bInHasEditCondition_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateFloatLocalValueInput_Statics::NewProp_bInEditConditionValue_SetBit(void* Obj)
	{
		((NiagaraClipboardEditorScriptingUtilities_eventCreateFloatLocalValueInput_Parms*)Obj)->bInEditConditionValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateFloatLocalValueInput_Statics::NewProp_bInEditConditionValue = { "bInEditConditionValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraClipboardEditorScriptingUtilities_eventCreateFloatLocalValueInput_Parms), &Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateFloatLocalValueInput_Statics::NewProp_bInEditConditionValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateFloatLocalValueInput_Statics::NewProp_InLocalValue = { "InLocalValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraClipboardEditorScriptingUtilities_eventCreateFloatLocalValueInput_Parms, InLocalValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateFloatLocalValueInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraClipboardEditorScriptingUtilities_eventCreateFloatLocalValueInput_Parms, ReturnValue), Z_Construct_UClass_UNiagaraClipboardFunctionInput_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateFloatLocalValueInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateFloatLocalValueInput_Statics::NewProp_InOuter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateFloatLocalValueInput_Statics::NewProp_InInputName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateFloatLocalValueInput_Statics::NewProp_bInHasEditCondition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateFloatLocalValueInput_Statics::NewProp_bInEditConditionValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateFloatLocalValueInput_Statics::NewProp_InLocalValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateFloatLocalValueInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateFloatLocalValueInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/NiagaraClipboard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateFloatLocalValueInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraClipboardEditorScriptingUtilities, nullptr, "CreateFloatLocalValueInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateFloatLocalValueInput_Statics::NiagaraClipboardEditorScriptingUtilities_eventCreateFloatLocalValueInput_Parms), Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateFloatLocalValueInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateFloatLocalValueInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateFloatLocalValueInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateFloatLocalValueInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateFloatLocalValueInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateFloatLocalValueInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateIntLocalValueInput_Statics
	{
		struct NiagaraClipboardEditorScriptingUtilities_eventCreateIntLocalValueInput_Parms
		{
			UObject* InOuter;
			FName InInputName;
			bool bInHasEditCondition;
			bool bInEditConditionValue;
			int32 InLocalValue;
			UNiagaraClipboardFunctionInput* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InOuter;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InInputName;
		static void NewProp_bInHasEditCondition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInHasEditCondition;
		static void NewProp_bInEditConditionValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEditConditionValue;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InLocalValue;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateIntLocalValueInput_Statics::NewProp_InOuter = { "InOuter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraClipboardEditorScriptingUtilities_eventCreateIntLocalValueInput_Parms, InOuter), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateIntLocalValueInput_Statics::NewProp_InInputName = { "InInputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraClipboardEditorScriptingUtilities_eventCreateIntLocalValueInput_Parms, InInputName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateIntLocalValueInput_Statics::NewProp_bInHasEditCondition_SetBit(void* Obj)
	{
		((NiagaraClipboardEditorScriptingUtilities_eventCreateIntLocalValueInput_Parms*)Obj)->bInHasEditCondition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateIntLocalValueInput_Statics::NewProp_bInHasEditCondition = { "bInHasEditCondition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraClipboardEditorScriptingUtilities_eventCreateIntLocalValueInput_Parms), &Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateIntLocalValueInput_Statics::NewProp_bInHasEditCondition_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateIntLocalValueInput_Statics::NewProp_bInEditConditionValue_SetBit(void* Obj)
	{
		((NiagaraClipboardEditorScriptingUtilities_eventCreateIntLocalValueInput_Parms*)Obj)->bInEditConditionValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateIntLocalValueInput_Statics::NewProp_bInEditConditionValue = { "bInEditConditionValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraClipboardEditorScriptingUtilities_eventCreateIntLocalValueInput_Parms), &Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateIntLocalValueInput_Statics::NewProp_bInEditConditionValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateIntLocalValueInput_Statics::NewProp_InLocalValue = { "InLocalValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraClipboardEditorScriptingUtilities_eventCreateIntLocalValueInput_Parms, InLocalValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateIntLocalValueInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraClipboardEditorScriptingUtilities_eventCreateIntLocalValueInput_Parms, ReturnValue), Z_Construct_UClass_UNiagaraClipboardFunctionInput_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateIntLocalValueInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateIntLocalValueInput_Statics::NewProp_InOuter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateIntLocalValueInput_Statics::NewProp_InInputName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateIntLocalValueInput_Statics::NewProp_bInHasEditCondition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateIntLocalValueInput_Statics::NewProp_bInEditConditionValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateIntLocalValueInput_Statics::NewProp_InLocalValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateIntLocalValueInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateIntLocalValueInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/NiagaraClipboard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateIntLocalValueInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraClipboardEditorScriptingUtilities, nullptr, "CreateIntLocalValueInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateIntLocalValueInput_Statics::NiagaraClipboardEditorScriptingUtilities_eventCreateIntLocalValueInput_Parms), Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateIntLocalValueInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateIntLocalValueInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateIntLocalValueInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateIntLocalValueInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateIntLocalValueInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateIntLocalValueInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateLinkedValueInput_Statics
	{
		struct NiagaraClipboardEditorScriptingUtilities_eventCreateLinkedValueInput_Parms
		{
			UObject* InOuter;
			FName InInputName;
			FName InInputTypeName;
			bool bInHasEditCondition;
			bool bInEditConditionValue;
			FName InLinkedValue;
			UNiagaraClipboardFunctionInput* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InOuter;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InInputName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InInputTypeName;
		static void NewProp_bInHasEditCondition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInHasEditCondition;
		static void NewProp_bInEditConditionValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEditConditionValue;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InLinkedValue;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateLinkedValueInput_Statics::NewProp_InOuter = { "InOuter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraClipboardEditorScriptingUtilities_eventCreateLinkedValueInput_Parms, InOuter), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateLinkedValueInput_Statics::NewProp_InInputName = { "InInputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraClipboardEditorScriptingUtilities_eventCreateLinkedValueInput_Parms, InInputName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateLinkedValueInput_Statics::NewProp_InInputTypeName = { "InInputTypeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraClipboardEditorScriptingUtilities_eventCreateLinkedValueInput_Parms, InInputTypeName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateLinkedValueInput_Statics::NewProp_bInHasEditCondition_SetBit(void* Obj)
	{
		((NiagaraClipboardEditorScriptingUtilities_eventCreateLinkedValueInput_Parms*)Obj)->bInHasEditCondition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateLinkedValueInput_Statics::NewProp_bInHasEditCondition = { "bInHasEditCondition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraClipboardEditorScriptingUtilities_eventCreateLinkedValueInput_Parms), &Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateLinkedValueInput_Statics::NewProp_bInHasEditCondition_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateLinkedValueInput_Statics::NewProp_bInEditConditionValue_SetBit(void* Obj)
	{
		((NiagaraClipboardEditorScriptingUtilities_eventCreateLinkedValueInput_Parms*)Obj)->bInEditConditionValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateLinkedValueInput_Statics::NewProp_bInEditConditionValue = { "bInEditConditionValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraClipboardEditorScriptingUtilities_eventCreateLinkedValueInput_Parms), &Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateLinkedValueInput_Statics::NewProp_bInEditConditionValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateLinkedValueInput_Statics::NewProp_InLinkedValue = { "InLinkedValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraClipboardEditorScriptingUtilities_eventCreateLinkedValueInput_Parms, InLinkedValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateLinkedValueInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraClipboardEditorScriptingUtilities_eventCreateLinkedValueInput_Parms, ReturnValue), Z_Construct_UClass_UNiagaraClipboardFunctionInput_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateLinkedValueInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateLinkedValueInput_Statics::NewProp_InOuter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateLinkedValueInput_Statics::NewProp_InInputName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateLinkedValueInput_Statics::NewProp_InInputTypeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateLinkedValueInput_Statics::NewProp_bInHasEditCondition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateLinkedValueInput_Statics::NewProp_bInEditConditionValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateLinkedValueInput_Statics::NewProp_InLinkedValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateLinkedValueInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateLinkedValueInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/NiagaraClipboard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateLinkedValueInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraClipboardEditorScriptingUtilities, nullptr, "CreateLinkedValueInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateLinkedValueInput_Statics::NiagaraClipboardEditorScriptingUtilities_eventCreateLinkedValueInput_Parms), Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateLinkedValueInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateLinkedValueInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateLinkedValueInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateLinkedValueInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateLinkedValueInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateLinkedValueInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateStructLocalValueInput_Statics
	{
		struct NiagaraClipboardEditorScriptingUtilities_eventCreateStructLocalValueInput_Parms
		{
			UObject* InOuter;
			FName InInputName;
			bool bInHasEditCondition;
			bool bInEditConditionValue;
			UUserDefinedStruct* InStructValue;
			UNiagaraClipboardFunctionInput* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InOuter;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InInputName;
		static void NewProp_bInHasEditCondition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInHasEditCondition;
		static void NewProp_bInEditConditionValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEditConditionValue;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InStructValue;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateStructLocalValueInput_Statics::NewProp_InOuter = { "InOuter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraClipboardEditorScriptingUtilities_eventCreateStructLocalValueInput_Parms, InOuter), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateStructLocalValueInput_Statics::NewProp_InInputName = { "InInputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraClipboardEditorScriptingUtilities_eventCreateStructLocalValueInput_Parms, InInputName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateStructLocalValueInput_Statics::NewProp_bInHasEditCondition_SetBit(void* Obj)
	{
		((NiagaraClipboardEditorScriptingUtilities_eventCreateStructLocalValueInput_Parms*)Obj)->bInHasEditCondition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateStructLocalValueInput_Statics::NewProp_bInHasEditCondition = { "bInHasEditCondition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraClipboardEditorScriptingUtilities_eventCreateStructLocalValueInput_Parms), &Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateStructLocalValueInput_Statics::NewProp_bInHasEditCondition_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateStructLocalValueInput_Statics::NewProp_bInEditConditionValue_SetBit(void* Obj)
	{
		((NiagaraClipboardEditorScriptingUtilities_eventCreateStructLocalValueInput_Parms*)Obj)->bInEditConditionValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateStructLocalValueInput_Statics::NewProp_bInEditConditionValue = { "bInEditConditionValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraClipboardEditorScriptingUtilities_eventCreateStructLocalValueInput_Parms), &Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateStructLocalValueInput_Statics::NewProp_bInEditConditionValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateStructLocalValueInput_Statics::NewProp_InStructValue = { "InStructValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraClipboardEditorScriptingUtilities_eventCreateStructLocalValueInput_Parms, InStructValue), Z_Construct_UClass_UUserDefinedStruct_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateStructLocalValueInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraClipboardEditorScriptingUtilities_eventCreateStructLocalValueInput_Parms, ReturnValue), Z_Construct_UClass_UNiagaraClipboardFunctionInput_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateStructLocalValueInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateStructLocalValueInput_Statics::NewProp_InOuter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateStructLocalValueInput_Statics::NewProp_InInputName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateStructLocalValueInput_Statics::NewProp_bInHasEditCondition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateStructLocalValueInput_Statics::NewProp_bInEditConditionValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateStructLocalValueInput_Statics::NewProp_InStructValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateStructLocalValueInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateStructLocalValueInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/NiagaraClipboard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateStructLocalValueInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraClipboardEditorScriptingUtilities, nullptr, "CreateStructLocalValueInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateStructLocalValueInput_Statics::NiagaraClipboardEditorScriptingUtilities_eventCreateStructLocalValueInput_Parms), Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateStructLocalValueInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateStructLocalValueInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateStructLocalValueInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateStructLocalValueInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateStructLocalValueInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateStructLocalValueInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateVec2LocalValueInput_Statics
	{
		struct NiagaraClipboardEditorScriptingUtilities_eventCreateVec2LocalValueInput_Parms
		{
			UObject* InOuter;
			FName InInputName;
			bool bInHasEditCondition;
			bool bInEditConditionValue;
			FVector2D InVec2Value;
			UNiagaraClipboardFunctionInput* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InOuter;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InInputName;
		static void NewProp_bInHasEditCondition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInHasEditCondition;
		static void NewProp_bInEditConditionValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEditConditionValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InVec2Value;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateVec2LocalValueInput_Statics::NewProp_InOuter = { "InOuter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraClipboardEditorScriptingUtilities_eventCreateVec2LocalValueInput_Parms, InOuter), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateVec2LocalValueInput_Statics::NewProp_InInputName = { "InInputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraClipboardEditorScriptingUtilities_eventCreateVec2LocalValueInput_Parms, InInputName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateVec2LocalValueInput_Statics::NewProp_bInHasEditCondition_SetBit(void* Obj)
	{
		((NiagaraClipboardEditorScriptingUtilities_eventCreateVec2LocalValueInput_Parms*)Obj)->bInHasEditCondition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateVec2LocalValueInput_Statics::NewProp_bInHasEditCondition = { "bInHasEditCondition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraClipboardEditorScriptingUtilities_eventCreateVec2LocalValueInput_Parms), &Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateVec2LocalValueInput_Statics::NewProp_bInHasEditCondition_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateVec2LocalValueInput_Statics::NewProp_bInEditConditionValue_SetBit(void* Obj)
	{
		((NiagaraClipboardEditorScriptingUtilities_eventCreateVec2LocalValueInput_Parms*)Obj)->bInEditConditionValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateVec2LocalValueInput_Statics::NewProp_bInEditConditionValue = { "bInEditConditionValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraClipboardEditorScriptingUtilities_eventCreateVec2LocalValueInput_Parms), &Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateVec2LocalValueInput_Statics::NewProp_bInEditConditionValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateVec2LocalValueInput_Statics::NewProp_InVec2Value = { "InVec2Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraClipboardEditorScriptingUtilities_eventCreateVec2LocalValueInput_Parms, InVec2Value), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateVec2LocalValueInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraClipboardEditorScriptingUtilities_eventCreateVec2LocalValueInput_Parms, ReturnValue), Z_Construct_UClass_UNiagaraClipboardFunctionInput_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateVec2LocalValueInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateVec2LocalValueInput_Statics::NewProp_InOuter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateVec2LocalValueInput_Statics::NewProp_InInputName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateVec2LocalValueInput_Statics::NewProp_bInHasEditCondition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateVec2LocalValueInput_Statics::NewProp_bInEditConditionValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateVec2LocalValueInput_Statics::NewProp_InVec2Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateVec2LocalValueInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateVec2LocalValueInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/NiagaraClipboard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateVec2LocalValueInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraClipboardEditorScriptingUtilities, nullptr, "CreateVec2LocalValueInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateVec2LocalValueInput_Statics::NiagaraClipboardEditorScriptingUtilities_eventCreateVec2LocalValueInput_Parms), Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateVec2LocalValueInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateVec2LocalValueInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateVec2LocalValueInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateVec2LocalValueInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateVec2LocalValueInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateVec2LocalValueInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateVec3LocalValueInput_Statics
	{
		struct NiagaraClipboardEditorScriptingUtilities_eventCreateVec3LocalValueInput_Parms
		{
			UObject* InOuter;
			FName InInputName;
			bool bInHasEditCondition;
			bool bInEditConditionValue;
			FVector InVec3Value;
			UNiagaraClipboardFunctionInput* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InOuter;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InInputName;
		static void NewProp_bInHasEditCondition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInHasEditCondition;
		static void NewProp_bInEditConditionValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEditConditionValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InVec3Value;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateVec3LocalValueInput_Statics::NewProp_InOuter = { "InOuter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraClipboardEditorScriptingUtilities_eventCreateVec3LocalValueInput_Parms, InOuter), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateVec3LocalValueInput_Statics::NewProp_InInputName = { "InInputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraClipboardEditorScriptingUtilities_eventCreateVec3LocalValueInput_Parms, InInputName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateVec3LocalValueInput_Statics::NewProp_bInHasEditCondition_SetBit(void* Obj)
	{
		((NiagaraClipboardEditorScriptingUtilities_eventCreateVec3LocalValueInput_Parms*)Obj)->bInHasEditCondition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateVec3LocalValueInput_Statics::NewProp_bInHasEditCondition = { "bInHasEditCondition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraClipboardEditorScriptingUtilities_eventCreateVec3LocalValueInput_Parms), &Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateVec3LocalValueInput_Statics::NewProp_bInHasEditCondition_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateVec3LocalValueInput_Statics::NewProp_bInEditConditionValue_SetBit(void* Obj)
	{
		((NiagaraClipboardEditorScriptingUtilities_eventCreateVec3LocalValueInput_Parms*)Obj)->bInEditConditionValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateVec3LocalValueInput_Statics::NewProp_bInEditConditionValue = { "bInEditConditionValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraClipboardEditorScriptingUtilities_eventCreateVec3LocalValueInput_Parms), &Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateVec3LocalValueInput_Statics::NewProp_bInEditConditionValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateVec3LocalValueInput_Statics::NewProp_InVec3Value = { "InVec3Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraClipboardEditorScriptingUtilities_eventCreateVec3LocalValueInput_Parms, InVec3Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateVec3LocalValueInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraClipboardEditorScriptingUtilities_eventCreateVec3LocalValueInput_Parms, ReturnValue), Z_Construct_UClass_UNiagaraClipboardFunctionInput_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateVec3LocalValueInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateVec3LocalValueInput_Statics::NewProp_InOuter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateVec3LocalValueInput_Statics::NewProp_InInputName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateVec3LocalValueInput_Statics::NewProp_bInHasEditCondition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateVec3LocalValueInput_Statics::NewProp_bInEditConditionValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateVec3LocalValueInput_Statics::NewProp_InVec3Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateVec3LocalValueInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateVec3LocalValueInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/NiagaraClipboard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateVec3LocalValueInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraClipboardEditorScriptingUtilities, nullptr, "CreateVec3LocalValueInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateVec3LocalValueInput_Statics::NiagaraClipboardEditorScriptingUtilities_eventCreateVec3LocalValueInput_Parms), Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateVec3LocalValueInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateVec3LocalValueInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateVec3LocalValueInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateVec3LocalValueInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateVec3LocalValueInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateVec3LocalValueInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_GetTypeName_Statics
	{
		struct NiagaraClipboardEditorScriptingUtilities_eventGetTypeName_Parms
		{
			const UNiagaraClipboardFunctionInput* InInput;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InInput;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_GetTypeName_Statics::NewProp_InInput_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_GetTypeName_Statics::NewProp_InInput = { "InInput", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraClipboardEditorScriptingUtilities_eventGetTypeName_Parms, InInput), Z_Construct_UClass_UNiagaraClipboardFunctionInput_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_GetTypeName_Statics::NewProp_InInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_GetTypeName_Statics::NewProp_InInput_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_GetTypeName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraClipboardEditorScriptingUtilities_eventGetTypeName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_GetTypeName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_GetTypeName_Statics::NewProp_InInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_GetTypeName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_GetTypeName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/NiagaraClipboard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_GetTypeName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraClipboardEditorScriptingUtilities, nullptr, "GetTypeName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_GetTypeName_Statics::NiagaraClipboardEditorScriptingUtilities_eventGetTypeName_Parms), Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_GetTypeName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_GetTypeName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_GetTypeName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_GetTypeName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_GetTypeName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_GetTypeName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetInputByName_Statics
	{
		struct NiagaraClipboardEditorScriptingUtilities_eventTryGetInputByName_Parms
		{
			TArray<UNiagaraClipboardFunctionInput*> InInputs;
			FName InInputName;
			bool bOutSucceeded;
			UNiagaraClipboardFunctionInput* OutInput;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InInputs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInputs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InInputs;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InInputName;
		static void NewProp_bOutSucceeded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutSucceeded;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutInput;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetInputByName_Statics::NewProp_InInputs_Inner = { "InInputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UNiagaraClipboardFunctionInput_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetInputByName_Statics::NewProp_InInputs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetInputByName_Statics::NewProp_InInputs = { "InInputs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraClipboardEditorScriptingUtilities_eventTryGetInputByName_Parms, InInputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetInputByName_Statics::NewProp_InInputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetInputByName_Statics::NewProp_InInputs_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetInputByName_Statics::NewProp_InInputName = { "InInputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraClipboardEditorScriptingUtilities_eventTryGetInputByName_Parms, InInputName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetInputByName_Statics::NewProp_bOutSucceeded_SetBit(void* Obj)
	{
		((NiagaraClipboardEditorScriptingUtilities_eventTryGetInputByName_Parms*)Obj)->bOutSucceeded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetInputByName_Statics::NewProp_bOutSucceeded = { "bOutSucceeded", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraClipboardEditorScriptingUtilities_eventTryGetInputByName_Parms), &Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetInputByName_Statics::NewProp_bOutSucceeded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetInputByName_Statics::NewProp_OutInput = { "OutInput", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraClipboardEditorScriptingUtilities_eventTryGetInputByName_Parms, OutInput), Z_Construct_UClass_UNiagaraClipboardFunctionInput_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetInputByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetInputByName_Statics::NewProp_InInputs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetInputByName_Statics::NewProp_InInputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetInputByName_Statics::NewProp_InInputName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetInputByName_Statics::NewProp_bOutSucceeded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetInputByName_Statics::NewProp_OutInput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetInputByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/NiagaraClipboard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetInputByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraClipboardEditorScriptingUtilities, nullptr, "TryGetInputByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetInputByName_Statics::NiagaraClipboardEditorScriptingUtilities_eventTryGetInputByName_Parms), Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetInputByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetInputByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetInputByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetInputByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetInputByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetInputByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetLocalValueAsFloat_Statics
	{
		struct NiagaraClipboardEditorScriptingUtilities_eventTryGetLocalValueAsFloat_Parms
		{
			const UNiagaraClipboardFunctionInput* InInput;
			bool bOutSucceeded;
			float OutValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InInput;
		static void NewProp_bOutSucceeded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutSucceeded;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetLocalValueAsFloat_Statics::NewProp_InInput_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetLocalValueAsFloat_Statics::NewProp_InInput = { "InInput", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraClipboardEditorScriptingUtilities_eventTryGetLocalValueAsFloat_Parms, InInput), Z_Construct_UClass_UNiagaraClipboardFunctionInput_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetLocalValueAsFloat_Statics::NewProp_InInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetLocalValueAsFloat_Statics::NewProp_InInput_MetaData)) };
	void Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetLocalValueAsFloat_Statics::NewProp_bOutSucceeded_SetBit(void* Obj)
	{
		((NiagaraClipboardEditorScriptingUtilities_eventTryGetLocalValueAsFloat_Parms*)Obj)->bOutSucceeded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetLocalValueAsFloat_Statics::NewProp_bOutSucceeded = { "bOutSucceeded", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraClipboardEditorScriptingUtilities_eventTryGetLocalValueAsFloat_Parms), &Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetLocalValueAsFloat_Statics::NewProp_bOutSucceeded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetLocalValueAsFloat_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraClipboardEditorScriptingUtilities_eventTryGetLocalValueAsFloat_Parms, OutValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetLocalValueAsFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetLocalValueAsFloat_Statics::NewProp_InInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetLocalValueAsFloat_Statics::NewProp_bOutSucceeded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetLocalValueAsFloat_Statics::NewProp_OutValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetLocalValueAsFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/NiagaraClipboard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetLocalValueAsFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraClipboardEditorScriptingUtilities, nullptr, "TryGetLocalValueAsFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetLocalValueAsFloat_Statics::NiagaraClipboardEditorScriptingUtilities_eventTryGetLocalValueAsFloat_Parms), Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetLocalValueAsFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetLocalValueAsFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetLocalValueAsFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetLocalValueAsFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetLocalValueAsFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetLocalValueAsFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetLocalValueAsInt_Statics
	{
		struct NiagaraClipboardEditorScriptingUtilities_eventTryGetLocalValueAsInt_Parms
		{
			const UNiagaraClipboardFunctionInput* InInput;
			bool bOutSucceeded;
			int32 OutValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InInput;
		static void NewProp_bOutSucceeded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutSucceeded;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetLocalValueAsInt_Statics::NewProp_InInput_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetLocalValueAsInt_Statics::NewProp_InInput = { "InInput", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraClipboardEditorScriptingUtilities_eventTryGetLocalValueAsInt_Parms, InInput), Z_Construct_UClass_UNiagaraClipboardFunctionInput_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetLocalValueAsInt_Statics::NewProp_InInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetLocalValueAsInt_Statics::NewProp_InInput_MetaData)) };
	void Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetLocalValueAsInt_Statics::NewProp_bOutSucceeded_SetBit(void* Obj)
	{
		((NiagaraClipboardEditorScriptingUtilities_eventTryGetLocalValueAsInt_Parms*)Obj)->bOutSucceeded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetLocalValueAsInt_Statics::NewProp_bOutSucceeded = { "bOutSucceeded", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraClipboardEditorScriptingUtilities_eventTryGetLocalValueAsInt_Parms), &Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetLocalValueAsInt_Statics::NewProp_bOutSucceeded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetLocalValueAsInt_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraClipboardEditorScriptingUtilities_eventTryGetLocalValueAsInt_Parms, OutValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetLocalValueAsInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetLocalValueAsInt_Statics::NewProp_InInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetLocalValueAsInt_Statics::NewProp_bOutSucceeded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetLocalValueAsInt_Statics::NewProp_OutValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetLocalValueAsInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/NiagaraClipboard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetLocalValueAsInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraClipboardEditorScriptingUtilities, nullptr, "TryGetLocalValueAsInt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetLocalValueAsInt_Statics::NiagaraClipboardEditorScriptingUtilities_eventTryGetLocalValueAsInt_Parms), Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetLocalValueAsInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetLocalValueAsInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetLocalValueAsInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetLocalValueAsInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetLocalValueAsInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetLocalValueAsInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TrySetLocalValueAsInt_Statics
	{
		struct NiagaraClipboardEditorScriptingUtilities_eventTrySetLocalValueAsInt_Parms
		{
			UNiagaraClipboardFunctionInput* InInput;
			bool bOutSucceeded;
			int32 InValue;
			bool bLooseTyping;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InInput;
		static void NewProp_bOutSucceeded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutSucceeded;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InValue;
		static void NewProp_bLooseTyping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooseTyping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TrySetLocalValueAsInt_Statics::NewProp_InInput = { "InInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraClipboardEditorScriptingUtilities_eventTrySetLocalValueAsInt_Parms, InInput), Z_Construct_UClass_UNiagaraClipboardFunctionInput_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TrySetLocalValueAsInt_Statics::NewProp_bOutSucceeded_SetBit(void* Obj)
	{
		((NiagaraClipboardEditorScriptingUtilities_eventTrySetLocalValueAsInt_Parms*)Obj)->bOutSucceeded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TrySetLocalValueAsInt_Statics::NewProp_bOutSucceeded = { "bOutSucceeded", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraClipboardEditorScriptingUtilities_eventTrySetLocalValueAsInt_Parms), &Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TrySetLocalValueAsInt_Statics::NewProp_bOutSucceeded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TrySetLocalValueAsInt_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraClipboardEditorScriptingUtilities_eventTrySetLocalValueAsInt_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TrySetLocalValueAsInt_Statics::NewProp_bLooseTyping_SetBit(void* Obj)
	{
		((NiagaraClipboardEditorScriptingUtilities_eventTrySetLocalValueAsInt_Parms*)Obj)->bLooseTyping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TrySetLocalValueAsInt_Statics::NewProp_bLooseTyping = { "bLooseTyping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraClipboardEditorScriptingUtilities_eventTrySetLocalValueAsInt_Parms), &Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TrySetLocalValueAsInt_Statics::NewProp_bLooseTyping_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TrySetLocalValueAsInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TrySetLocalValueAsInt_Statics::NewProp_InInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TrySetLocalValueAsInt_Statics::NewProp_bOutSucceeded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TrySetLocalValueAsInt_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TrySetLocalValueAsInt_Statics::NewProp_bLooseTyping,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TrySetLocalValueAsInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "CPP_Default_bLooseTyping", "true" },
		{ "ModuleRelativePath", "Public/NiagaraClipboard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TrySetLocalValueAsInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraClipboardEditorScriptingUtilities, nullptr, "TrySetLocalValueAsInt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TrySetLocalValueAsInt_Statics::NiagaraClipboardEditorScriptingUtilities_eventTrySetLocalValueAsInt_Parms), Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TrySetLocalValueAsInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TrySetLocalValueAsInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TrySetLocalValueAsInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TrySetLocalValueAsInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TrySetLocalValueAsInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TrySetLocalValueAsInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraClipboardEditorScriptingUtilities);
	UClass* Z_Construct_UClass_UNiagaraClipboardEditorScriptingUtilities_NoRegister()
	{
		return UNiagaraClipboardEditorScriptingUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraClipboardEditorScriptingUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraClipboardEditorScriptingUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNiagaraClipboardEditorScriptingUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateBoolLocalValueInput, "CreateBoolLocalValueInput" }, // 265745473
		{ &Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateDataValueInput, "CreateDataValueInput" }, // 1940287846
		{ &Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateDynamicValueInput, "CreateDynamicValueInput" }, // 3485914819
		{ &Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateEnumLocalValueInput, "CreateEnumLocalValueInput" }, // 419008084
		{ &Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateExpressionValueInput, "CreateExpressionValueInput" }, // 932707794
		{ &Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateFloatLocalValueInput, "CreateFloatLocalValueInput" }, // 2393203887
		{ &Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateIntLocalValueInput, "CreateIntLocalValueInput" }, // 456967853
		{ &Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateLinkedValueInput, "CreateLinkedValueInput" }, // 3791043675
		{ &Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateStructLocalValueInput, "CreateStructLocalValueInput" }, // 3181835132
		{ &Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateVec2LocalValueInput, "CreateVec2LocalValueInput" }, // 2807030042
		{ &Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_CreateVec3LocalValueInput, "CreateVec3LocalValueInput" }, // 3871013354
		{ &Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_GetTypeName, "GetTypeName" }, // 1345981550
		{ &Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetInputByName, "TryGetInputByName" }, // 733191218
		{ &Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetLocalValueAsFloat, "TryGetLocalValueAsFloat" }, // 835311566
		{ &Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TryGetLocalValueAsInt, "TryGetLocalValueAsInt" }, // 810291487
		{ &Z_Construct_UFunction_UNiagaraClipboardEditorScriptingUtilities_TrySetLocalValueAsInt, "TrySetLocalValueAsInt" }, // 2202605917
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraClipboardEditorScriptingUtilities_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraClipboard.h" },
		{ "ModuleRelativePath", "Public/NiagaraClipboard.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraClipboardEditorScriptingUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraClipboardEditorScriptingUtilities>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraClipboardEditorScriptingUtilities_Statics::ClassParams = {
		&UNiagaraClipboardEditorScriptingUtilities::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraClipboardEditorScriptingUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraClipboardEditorScriptingUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraClipboardEditorScriptingUtilities()
	{
		if (!Z_Registration_Info_UClass_UNiagaraClipboardEditorScriptingUtilities.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraClipboardEditorScriptingUtilities.OuterSingleton, Z_Construct_UClass_UNiagaraClipboardEditorScriptingUtilities_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraClipboardEditorScriptingUtilities.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraClipboardEditorScriptingUtilities>()
	{
		return UNiagaraClipboardEditorScriptingUtilities::StaticClass();
	}
	UNiagaraClipboardEditorScriptingUtilities::UNiagaraClipboardEditorScriptingUtilities(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraClipboardEditorScriptingUtilities);
	UNiagaraClipboardEditorScriptingUtilities::~UNiagaraClipboardEditorScriptingUtilities() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_Statics::EnumInfo[] = {
		{ ENiagaraClipboardFunctionInputValueMode_StaticEnum, TEXT("ENiagaraClipboardFunctionInputValueMode"), &Z_Registration_Info_UEnum_ENiagaraClipboardFunctionInputValueMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2787849660U) },
		{ ENiagaraClipboardFunctionScriptMode_StaticEnum, TEXT("ENiagaraClipboardFunctionScriptMode"), &Z_Registration_Info_UEnum_ENiagaraClipboardFunctionScriptMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 869619494U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraClipboardScriptVariable::StaticStruct, Z_Construct_UScriptStruct_FNiagaraClipboardScriptVariable_Statics::NewStructOps, TEXT("NiagaraClipboardScriptVariable"), &Z_Registration_Info_UScriptStruct_NiagaraClipboardScriptVariable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraClipboardScriptVariable), 4156665993U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraClipboardFunctionInput, UNiagaraClipboardFunctionInput::StaticClass, TEXT("UNiagaraClipboardFunctionInput"), &Z_Registration_Info_UClass_UNiagaraClipboardFunctionInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraClipboardFunctionInput), 671101008U) },
		{ Z_Construct_UClass_UNiagaraClipboardFunction, UNiagaraClipboardFunction::StaticClass, TEXT("UNiagaraClipboardFunction"), &Z_Registration_Info_UClass_UNiagaraClipboardFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraClipboardFunction), 1210151982U) },
		{ Z_Construct_UClass_UNiagaraClipboardContent, UNiagaraClipboardContent::StaticClass, TEXT("UNiagaraClipboardContent"), &Z_Registration_Info_UClass_UNiagaraClipboardContent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraClipboardContent), 2211474444U) },
		{ Z_Construct_UClass_UNiagaraClipboardEditorScriptingUtilities, UNiagaraClipboardEditorScriptingUtilities::StaticClass, TEXT("UNiagaraClipboardEditorScriptingUtilities"), &Z_Registration_Info_UClass_UNiagaraClipboardEditorScriptingUtilities, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraClipboardEditorScriptingUtilities), 284801U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_1492219560(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
