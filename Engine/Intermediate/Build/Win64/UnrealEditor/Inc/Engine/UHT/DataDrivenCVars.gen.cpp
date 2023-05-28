// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/DataDrivenCVars/DataDrivenCVars.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataDrivenCVars() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDataDrivenConsoleVariableSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDataDrivenConsoleVariableSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataDrivenCVarEngineSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UDataDrivenCVarEngineSubsystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_FDataDrivenCVarType();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_UDataDrivenCVarEngineSubsystem_OnDataDrivenCVarChanged__DelegateSignature();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataDrivenConsoleVariable();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UDataDrivenCVarEngineSubsystem_OnDataDrivenCVarChanged__DelegateSignature_Statics
	{
		struct DataDrivenCVarEngineSubsystem_eventOnDataDrivenCVarChanged_Parms
		{
			FString CVarName;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_CVarName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UDataDrivenCVarEngineSubsystem_OnDataDrivenCVarChanged__DelegateSignature_Statics::NewProp_CVarName = { "CVarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataDrivenCVarEngineSubsystem_eventOnDataDrivenCVarChanged_Parms, CVarName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UDataDrivenCVarEngineSubsystem_OnDataDrivenCVarChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UDataDrivenCVarEngineSubsystem_OnDataDrivenCVarChanged__DelegateSignature_Statics::NewProp_CVarName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UDataDrivenCVarEngineSubsystem_OnDataDrivenCVarChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/DataDrivenCVars/DataDrivenCVars.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UDataDrivenCVarEngineSubsystem_OnDataDrivenCVarChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataDrivenCVarEngineSubsystem, nullptr, "OnDataDrivenCVarChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UDataDrivenCVarEngineSubsystem_OnDataDrivenCVarChanged__DelegateSignature_Statics::DataDrivenCVarEngineSubsystem_eventOnDataDrivenCVarChanged_Parms), Z_Construct_UDelegateFunction_UDataDrivenCVarEngineSubsystem_OnDataDrivenCVarChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDataDrivenCVarEngineSubsystem_OnDataDrivenCVarChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UDataDrivenCVarEngineSubsystem_OnDataDrivenCVarChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDataDrivenCVarEngineSubsystem_OnDataDrivenCVarChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UDataDrivenCVarEngineSubsystem_OnDataDrivenCVarChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UDataDrivenCVarEngineSubsystem_OnDataDrivenCVarChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UDataDrivenCVarEngineSubsystem::FOnDataDrivenCVarChanged_DelegateWrapper(const FMulticastScriptDelegate& OnDataDrivenCVarChanged, const FString& CVarName)
{
	struct DataDrivenCVarEngineSubsystem_eventOnDataDrivenCVarChanged_Parms
	{
		FString CVarName;
	};
	DataDrivenCVarEngineSubsystem_eventOnDataDrivenCVarChanged_Parms Parms;
	Parms.CVarName=CVarName;
	OnDataDrivenCVarChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UDataDrivenCVarEngineSubsystem::StaticRegisterNativesUDataDrivenCVarEngineSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataDrivenCVarEngineSubsystem);
	UClass* Z_Construct_UClass_UDataDrivenCVarEngineSubsystem_NoRegister()
	{
		return UDataDrivenCVarEngineSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UDataDrivenCVarEngineSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDataDrivenCVarDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDataDrivenCVarDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataDrivenCVarEngineSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UDataDrivenCVarEngineSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UDataDrivenCVarEngineSubsystem_OnDataDrivenCVarChanged__DelegateSignature, "OnDataDrivenCVarChanged__DelegateSignature" }, // 1421048716
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataDrivenCVarEngineSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "DisplayName", "DataDrivenCVars" },
		{ "IncludePath", "DataDrivenCVars/DataDrivenCVars.h" },
		{ "ModuleRelativePath", "Classes/DataDrivenCVars/DataDrivenCVars.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataDrivenCVarEngineSubsystem_Statics::NewProp_OnDataDrivenCVarDelegate_MetaData[] = {
		{ "Category", "DataDrivenCVar" },
		{ "ModuleRelativePath", "Classes/DataDrivenCVars/DataDrivenCVars.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDataDrivenCVarEngineSubsystem_Statics::NewProp_OnDataDrivenCVarDelegate = { "OnDataDrivenCVarDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataDrivenCVarEngineSubsystem, OnDataDrivenCVarDelegate), Z_Construct_UDelegateFunction_UDataDrivenCVarEngineSubsystem_OnDataDrivenCVarChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDataDrivenCVarEngineSubsystem_Statics::NewProp_OnDataDrivenCVarDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataDrivenCVarEngineSubsystem_Statics::NewProp_OnDataDrivenCVarDelegate_MetaData)) }; // 1421048716
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataDrivenCVarEngineSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataDrivenCVarEngineSubsystem_Statics::NewProp_OnDataDrivenCVarDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataDrivenCVarEngineSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataDrivenCVarEngineSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataDrivenCVarEngineSubsystem_Statics::ClassParams = {
		&UDataDrivenCVarEngineSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_UDataDrivenCVarEngineSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataDrivenCVarEngineSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataDrivenCVarEngineSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataDrivenCVarEngineSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataDrivenCVarEngineSubsystem()
	{
		if (!Z_Registration_Info_UClass_UDataDrivenCVarEngineSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataDrivenCVarEngineSubsystem.OuterSingleton, Z_Construct_UClass_UDataDrivenCVarEngineSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataDrivenCVarEngineSubsystem.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UDataDrivenCVarEngineSubsystem>()
	{
		return UDataDrivenCVarEngineSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataDrivenCVarEngineSubsystem);
	UDataDrivenCVarEngineSubsystem::~UDataDrivenCVarEngineSubsystem() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_FDataDrivenCVarType;
	static UEnum* FDataDrivenCVarType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_FDataDrivenCVarType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_FDataDrivenCVarType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_FDataDrivenCVarType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("FDataDrivenCVarType"));
		}
		return Z_Registration_Info_UEnum_FDataDrivenCVarType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<FDataDrivenCVarType>()
	{
		return FDataDrivenCVarType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_FDataDrivenCVarType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_FDataDrivenCVarType_Statics::Enumerators[] = {
		{ "FDataDrivenCVarType::CVarFloat", (int64)FDataDrivenCVarType::CVarFloat },
		{ "FDataDrivenCVarType::CVarInt", (int64)FDataDrivenCVarType::CVarInt },
		{ "FDataDrivenCVarType::CVarBool", (int64)FDataDrivenCVarType::CVarBool },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_FDataDrivenCVarType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "CVarBool.Comment", "/**\n *\n */" },
		{ "CVarBool.Name", "FDataDrivenCVarType::CVarBool" },
		{ "CVarFloat.Comment", "/**\n *\n */" },
		{ "CVarFloat.Name", "FDataDrivenCVarType::CVarFloat" },
		{ "CVarInt.Comment", "/**\n *\n */" },
		{ "CVarInt.Name", "FDataDrivenCVarType::CVarInt" },
		{ "ModuleRelativePath", "Classes/DataDrivenCVars/DataDrivenCVars.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_FDataDrivenCVarType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"FDataDrivenCVarType",
		"FDataDrivenCVarType",
		Z_Construct_UEnum_Engine_FDataDrivenCVarType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_FDataDrivenCVarType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_FDataDrivenCVarType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_FDataDrivenCVarType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_FDataDrivenCVarType()
	{
		if (!Z_Registration_Info_UEnum_FDataDrivenCVarType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_FDataDrivenCVarType.InnerSingleton, Z_Construct_UEnum_Engine_FDataDrivenCVarType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_FDataDrivenCVarType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataDrivenConsoleVariable;
class UScriptStruct* FDataDrivenConsoleVariable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataDrivenConsoleVariable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataDrivenConsoleVariable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataDrivenConsoleVariable, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DataDrivenConsoleVariable"));
	}
	return Z_Registration_Info_UScriptStruct_DataDrivenConsoleVariable.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDataDrivenConsoleVariable>()
{
	return FDataDrivenConsoleVariable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolTip_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ToolTip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValueFloat_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultValueFloat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValueInt_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultValueInt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValueBool_MetaData[];
#endif
		static void NewProp_DefaultValueBool_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DefaultValueBool;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/DataDrivenCVars/DataDrivenCVars.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataDrivenConsoleVariable>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "DataDrivenCVar" },
		{ "InlineCategoryProperty", "" },
		{ "ModuleRelativePath", "Classes/DataDrivenCVars/DataDrivenCVars.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataDrivenConsoleVariable, Type), Z_Construct_UEnum_Engine_FDataDrivenCVarType, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_Type_MetaData)) }; // 724780764
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "DataDrivenCVar" },
		{ "ModuleRelativePath", "Classes/DataDrivenCVars/DataDrivenCVars.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataDrivenConsoleVariable, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_ToolTip_MetaData[] = {
		{ "Category", "DataDrivenCVar" },
		{ "ModuleRelativePath", "Classes/DataDrivenCVars/DataDrivenCVars.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_ToolTip = { "ToolTip", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataDrivenConsoleVariable, ToolTip), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_ToolTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_ToolTip_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_DefaultValueFloat_MetaData[] = {
		{ "Category", "DataDrivenCVar" },
		{ "EditCondition", "Type == FDataDrivenCVarType::CVarFloat" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/DataDrivenCVars/DataDrivenCVars.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_DefaultValueFloat = { "DefaultValueFloat", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataDrivenConsoleVariable, DefaultValueFloat), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_DefaultValueFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_DefaultValueFloat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_DefaultValueInt_MetaData[] = {
		{ "Category", "DataDrivenCVar" },
		{ "EditCondition", "Type == FDataDrivenCVarType::CVarInt" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/DataDrivenCVars/DataDrivenCVars.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_DefaultValueInt = { "DefaultValueInt", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataDrivenConsoleVariable, DefaultValueInt), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_DefaultValueInt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_DefaultValueInt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_DefaultValueBool_MetaData[] = {
		{ "Category", "DataDrivenCVar" },
		{ "EditCondition", "Type == FDataDrivenCVarType::CVarBool" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/DataDrivenCVars/DataDrivenCVars.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_DefaultValueBool_SetBit(void* Obj)
	{
		((FDataDrivenConsoleVariable*)Obj)->DefaultValueBool = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_DefaultValueBool = { "DefaultValueBool", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDataDrivenConsoleVariable), &Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_DefaultValueBool_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_DefaultValueBool_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_DefaultValueBool_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_ToolTip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_DefaultValueFloat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_DefaultValueInt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_DefaultValueBool,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"DataDrivenConsoleVariable",
		sizeof(FDataDrivenConsoleVariable),
		alignof(FDataDrivenConsoleVariable),
		Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataDrivenConsoleVariable()
	{
		if (!Z_Registration_Info_UScriptStruct_DataDrivenConsoleVariable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataDrivenConsoleVariable.InnerSingleton, Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DataDrivenConsoleVariable.InnerSingleton;
	}
	void UDataDrivenConsoleVariableSettings::StaticRegisterNativesUDataDrivenConsoleVariableSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataDrivenConsoleVariableSettings);
	UClass* Z_Construct_UClass_UDataDrivenConsoleVariableSettings_NoRegister()
	{
		return UDataDrivenConsoleVariableSettings::StaticClass();
	}
	struct Z_Construct_UClass_UDataDrivenConsoleVariableSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CVarsArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CVarsArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CVarsArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataDrivenConsoleVariableSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataDrivenConsoleVariableSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Data Driven CVars" },
		{ "IncludePath", "DataDrivenCVars/DataDrivenCVars.h" },
		{ "ModuleRelativePath", "Classes/DataDrivenCVars/DataDrivenCVars.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDataDrivenConsoleVariableSettings_Statics::NewProp_CVarsArray_Inner = { "CVarsArray", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDataDrivenConsoleVariable, METADATA_PARAMS(nullptr, 0) }; // 3268851352
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataDrivenConsoleVariableSettings_Statics::NewProp_CVarsArray_MetaData[] = {
		{ "Category", "DataDrivenCVar" },
		{ "ModuleRelativePath", "Classes/DataDrivenCVars/DataDrivenCVars.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataDrivenConsoleVariableSettings_Statics::NewProp_CVarsArray = { "CVarsArray", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataDrivenConsoleVariableSettings, CVarsArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDataDrivenConsoleVariableSettings_Statics::NewProp_CVarsArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataDrivenConsoleVariableSettings_Statics::NewProp_CVarsArray_MetaData)) }; // 3268851352
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataDrivenConsoleVariableSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataDrivenConsoleVariableSettings_Statics::NewProp_CVarsArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataDrivenConsoleVariableSettings_Statics::NewProp_CVarsArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataDrivenConsoleVariableSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataDrivenConsoleVariableSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataDrivenConsoleVariableSettings_Statics::ClassParams = {
		&UDataDrivenConsoleVariableSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDataDrivenConsoleVariableSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataDrivenConsoleVariableSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UDataDrivenConsoleVariableSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataDrivenConsoleVariableSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataDrivenConsoleVariableSettings()
	{
		if (!Z_Registration_Info_UClass_UDataDrivenConsoleVariableSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataDrivenConsoleVariableSettings.OuterSingleton, Z_Construct_UClass_UDataDrivenConsoleVariableSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataDrivenConsoleVariableSettings.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UDataDrivenConsoleVariableSettings>()
	{
		return UDataDrivenConsoleVariableSettings::StaticClass();
	}
	UDataDrivenConsoleVariableSettings::UDataDrivenConsoleVariableSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataDrivenConsoleVariableSettings);
	UDataDrivenConsoleVariableSettings::~UDataDrivenConsoleVariableSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_Statics::EnumInfo[] = {
		{ FDataDrivenCVarType_StaticEnum, TEXT("FDataDrivenCVarType"), &Z_Registration_Info_UEnum_FDataDrivenCVarType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 724780764U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_Statics::ScriptStructInfo[] = {
		{ FDataDrivenConsoleVariable::StaticStruct, Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewStructOps, TEXT("DataDrivenConsoleVariable"), &Z_Registration_Info_UScriptStruct_DataDrivenConsoleVariable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataDrivenConsoleVariable), 3268851352U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataDrivenCVarEngineSubsystem, UDataDrivenCVarEngineSubsystem::StaticClass, TEXT("UDataDrivenCVarEngineSubsystem"), &Z_Registration_Info_UClass_UDataDrivenCVarEngineSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataDrivenCVarEngineSubsystem), 1502110426U) },
		{ Z_Construct_UClass_UDataDrivenConsoleVariableSettings, UDataDrivenConsoleVariableSettings::StaticClass, TEXT("UDataDrivenConsoleVariableSettings"), &Z_Registration_Info_UClass_UDataDrivenConsoleVariableSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataDrivenConsoleVariableSettings), 4010520933U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_3325947274(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
