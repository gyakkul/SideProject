// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/NiagaraNodeStaticSwitch.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraNodeStaticSwitch() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UEnum();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeStaticSwitch();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeStaticSwitch_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeUsageSelector();
	NIAGARAEDITOR_API UEnum* Z_Construct_UEnum_NiagaraEditor_ENiagaraStaticSwitchType();
	NIAGARAEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FStaticSwitchTypeData();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraStaticSwitchType;
	static UEnum* ENiagaraStaticSwitchType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraStaticSwitchType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraStaticSwitchType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NiagaraEditor_ENiagaraStaticSwitchType, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("ENiagaraStaticSwitchType"));
		}
		return Z_Registration_Info_UEnum_ENiagaraStaticSwitchType.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UEnum* StaticEnum<ENiagaraStaticSwitchType>()
	{
		return ENiagaraStaticSwitchType_StaticEnum();
	}
	struct Z_Construct_UEnum_NiagaraEditor_ENiagaraStaticSwitchType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NiagaraEditor_ENiagaraStaticSwitchType_Statics::Enumerators[] = {
		{ "ENiagaraStaticSwitchType::Bool", (int64)ENiagaraStaticSwitchType::Bool },
		{ "ENiagaraStaticSwitchType::Integer", (int64)ENiagaraStaticSwitchType::Integer },
		{ "ENiagaraStaticSwitchType::Enum", (int64)ENiagaraStaticSwitchType::Enum },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NiagaraEditor_ENiagaraStaticSwitchType_Statics::Enum_MetaDataParams[] = {
		{ "Bool.Name", "ENiagaraStaticSwitchType::Bool" },
		{ "Enum.Name", "ENiagaraStaticSwitchType::Enum" },
		{ "Integer.Name", "ENiagaraStaticSwitchType::Integer" },
		{ "ModuleRelativePath", "Private/NiagaraNodeStaticSwitch.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NiagaraEditor_ENiagaraStaticSwitchType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NiagaraEditor,
		nullptr,
		"ENiagaraStaticSwitchType",
		"ENiagaraStaticSwitchType",
		Z_Construct_UEnum_NiagaraEditor_ENiagaraStaticSwitchType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraEditor_ENiagaraStaticSwitchType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NiagaraEditor_ENiagaraStaticSwitchType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraEditor_ENiagaraStaticSwitchType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NiagaraEditor_ENiagaraStaticSwitchType()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraStaticSwitchType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraStaticSwitchType.InnerSingleton, Z_Construct_UEnum_NiagaraEditor_ENiagaraStaticSwitchType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraStaticSwitchType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StaticSwitchTypeData;
class UScriptStruct* FStaticSwitchTypeData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StaticSwitchTypeData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StaticSwitchTypeData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStaticSwitchTypeData, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("StaticSwitchTypeData"));
	}
	return Z_Registration_Info_UScriptStruct_StaticSwitchTypeData.OuterSingleton;
}
template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<FStaticSwitchTypeData>()
{
	return FStaticSwitchTypeData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStaticSwitchTypeData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_SwitchType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwitchType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SwitchType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Enum_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Enum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwitchConstant_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SwitchConstant;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoRefreshEnabled_MetaData[];
#endif
		static void NewProp_bAutoRefreshEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoRefreshEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExposeAsPin_MetaData[];
#endif
		static void NewProp_bExposeAsPin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExposeAsPin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticSwitchTypeData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/NiagaraNodeStaticSwitch.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStaticSwitchTypeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStaticSwitchTypeData>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStaticSwitchTypeData_Statics::NewProp_SwitchType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticSwitchTypeData_Statics::NewProp_SwitchType_MetaData[] = {
		{ "Comment", "/** This determines how the switch value is interpreted */" },
		{ "ModuleRelativePath", "Private/NiagaraNodeStaticSwitch.h" },
		{ "ToolTip", "This determines how the switch value is interpreted" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStaticSwitchTypeData_Statics::NewProp_SwitchType = { "SwitchType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStaticSwitchTypeData, SwitchType), Z_Construct_UEnum_NiagaraEditor_ENiagaraStaticSwitchType, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticSwitchTypeData_Statics::NewProp_SwitchType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticSwitchTypeData_Statics::NewProp_SwitchType_MetaData)) }; // 1393130052
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticSwitchTypeData_Statics::NewProp_Enum_MetaData[] = {
		{ "Comment", "/** If the type is enum, this is the enum being switched on, otherwise it holds no sensible value */" },
		{ "ModuleRelativePath", "Private/NiagaraNodeStaticSwitch.h" },
		{ "ToolTip", "If the type is enum, this is the enum being switched on, otherwise it holds no sensible value" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FStaticSwitchTypeData_Statics::NewProp_Enum = { "Enum", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStaticSwitchTypeData, Enum), Z_Construct_UClass_UEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticSwitchTypeData_Statics::NewProp_Enum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticSwitchTypeData_Statics::NewProp_Enum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticSwitchTypeData_Statics::NewProp_SwitchConstant_MetaData[] = {
		{ "Comment", "/** If set, then this switch is not exposed but will rather be evaluated by the given compile-time constant */" },
		{ "ModuleRelativePath", "Private/NiagaraNodeStaticSwitch.h" },
		{ "ToolTip", "If set, then this switch is not exposed but will rather be evaluated by the given compile-time constant" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStaticSwitchTypeData_Statics::NewProp_SwitchConstant = { "SwitchConstant", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStaticSwitchTypeData, SwitchConstant), METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticSwitchTypeData_Statics::NewProp_SwitchConstant_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticSwitchTypeData_Statics::NewProp_SwitchConstant_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticSwitchTypeData_Statics::NewProp_bAutoRefreshEnabled_MetaData[] = {
		{ "Comment", "/** If true, a node will auto refresh under certain circumstances, like in post load or if the assigned enum changes */" },
		{ "ModuleRelativePath", "Private/NiagaraNodeStaticSwitch.h" },
		{ "ToolTip", "If true, a node will auto refresh under certain circumstances, like in post load or if the assigned enum changes" },
	};
#endif
	void Z_Construct_UScriptStruct_FStaticSwitchTypeData_Statics::NewProp_bAutoRefreshEnabled_SetBit(void* Obj)
	{
		((FStaticSwitchTypeData*)Obj)->bAutoRefreshEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStaticSwitchTypeData_Statics::NewProp_bAutoRefreshEnabled = { "bAutoRefreshEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FStaticSwitchTypeData), &Z_Construct_UScriptStruct_FStaticSwitchTypeData_Statics::NewProp_bAutoRefreshEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticSwitchTypeData_Statics::NewProp_bAutoRefreshEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticSwitchTypeData_Statics::NewProp_bAutoRefreshEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticSwitchTypeData_Statics::NewProp_bExposeAsPin_MetaData[] = {
		{ "ModuleRelativePath", "Private/NiagaraNodeStaticSwitch.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStaticSwitchTypeData_Statics::NewProp_bExposeAsPin_SetBit(void* Obj)
	{
		((FStaticSwitchTypeData*)Obj)->bExposeAsPin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStaticSwitchTypeData_Statics::NewProp_bExposeAsPin = { "bExposeAsPin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FStaticSwitchTypeData), &Z_Construct_UScriptStruct_FStaticSwitchTypeData_Statics::NewProp_bExposeAsPin_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticSwitchTypeData_Statics::NewProp_bExposeAsPin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticSwitchTypeData_Statics::NewProp_bExposeAsPin_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStaticSwitchTypeData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticSwitchTypeData_Statics::NewProp_SwitchType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticSwitchTypeData_Statics::NewProp_SwitchType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticSwitchTypeData_Statics::NewProp_Enum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticSwitchTypeData_Statics::NewProp_SwitchConstant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticSwitchTypeData_Statics::NewProp_bAutoRefreshEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticSwitchTypeData_Statics::NewProp_bExposeAsPin,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStaticSwitchTypeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
		nullptr,
		&NewStructOps,
		"StaticSwitchTypeData",
		sizeof(FStaticSwitchTypeData),
		alignof(FStaticSwitchTypeData),
		Z_Construct_UScriptStruct_FStaticSwitchTypeData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticSwitchTypeData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticSwitchTypeData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticSwitchTypeData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStaticSwitchTypeData()
	{
		if (!Z_Registration_Info_UScriptStruct_StaticSwitchTypeData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StaticSwitchTypeData.InnerSingleton, Z_Construct_UScriptStruct_FStaticSwitchTypeData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StaticSwitchTypeData.InnerSingleton;
	}
	void UNiagaraNodeStaticSwitch::StaticRegisterNativesUNiagaraNodeStaticSwitch()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraNodeStaticSwitch);
	UClass* Z_Construct_UClass_UNiagaraNodeStaticSwitch_NoRegister()
	{
		return UNiagaraNodeStaticSwitch::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraNodeStaticSwitch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InputParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwitchTypeData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SwitchTypeData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraNodeStaticSwitch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraNodeUsageSelector,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeStaticSwitch_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraNodeStaticSwitch.h" },
		{ "ModuleRelativePath", "Private/NiagaraNodeStaticSwitch.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeStaticSwitch_Statics::NewProp_InputParameterName_MetaData[] = {
		{ "ModuleRelativePath", "Private/NiagaraNodeStaticSwitch.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraNodeStaticSwitch_Statics::NewProp_InputParameterName = { "InputParameterName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNodeStaticSwitch, InputParameterName), METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeStaticSwitch_Statics::NewProp_InputParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeStaticSwitch_Statics::NewProp_InputParameterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeStaticSwitch_Statics::NewProp_SwitchTypeData_MetaData[] = {
		{ "Category", "HiddenMetaData" },
		{ "ModuleRelativePath", "Private/NiagaraNodeStaticSwitch.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraNodeStaticSwitch_Statics::NewProp_SwitchTypeData = { "SwitchTypeData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNodeStaticSwitch, SwitchTypeData), Z_Construct_UScriptStruct_FStaticSwitchTypeData, METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeStaticSwitch_Statics::NewProp_SwitchTypeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeStaticSwitch_Statics::NewProp_SwitchTypeData_MetaData)) }; // 1305509813
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraNodeStaticSwitch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeStaticSwitch_Statics::NewProp_InputParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeStaticSwitch_Statics::NewProp_SwitchTypeData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraNodeStaticSwitch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraNodeStaticSwitch>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraNodeStaticSwitch_Statics::ClassParams = {
		&UNiagaraNodeStaticSwitch::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraNodeStaticSwitch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeStaticSwitch_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeStaticSwitch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeStaticSwitch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraNodeStaticSwitch()
	{
		if (!Z_Registration_Info_UClass_UNiagaraNodeStaticSwitch.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraNodeStaticSwitch.OuterSingleton, Z_Construct_UClass_UNiagaraNodeStaticSwitch_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraNodeStaticSwitch.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraNodeStaticSwitch>()
	{
		return UNiagaraNodeStaticSwitch::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraNodeStaticSwitch);
	UNiagaraNodeStaticSwitch::~UNiagaraNodeStaticSwitch() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeStaticSwitch_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeStaticSwitch_h_Statics::EnumInfo[] = {
		{ ENiagaraStaticSwitchType_StaticEnum, TEXT("ENiagaraStaticSwitchType"), &Z_Registration_Info_UEnum_ENiagaraStaticSwitchType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1393130052U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeStaticSwitch_h_Statics::ScriptStructInfo[] = {
		{ FStaticSwitchTypeData::StaticStruct, Z_Construct_UScriptStruct_FStaticSwitchTypeData_Statics::NewStructOps, TEXT("StaticSwitchTypeData"), &Z_Registration_Info_UScriptStruct_StaticSwitchTypeData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStaticSwitchTypeData), 1305509813U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeStaticSwitch_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraNodeStaticSwitch, UNiagaraNodeStaticSwitch::StaticClass, TEXT("UNiagaraNodeStaticSwitch"), &Z_Registration_Info_UClass_UNiagaraNodeStaticSwitch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraNodeStaticSwitch), 2341381890U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeStaticSwitch_h_68575763(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeStaticSwitch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeStaticSwitch_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeStaticSwitch_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeStaticSwitch_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeStaticSwitch_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeStaticSwitch_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
