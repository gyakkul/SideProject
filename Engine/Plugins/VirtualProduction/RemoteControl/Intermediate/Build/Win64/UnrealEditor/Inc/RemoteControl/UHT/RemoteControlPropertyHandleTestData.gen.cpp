// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Tests/RemoteControlPropertyHandleTestData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoteControlPropertyHandleTestData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	REMOTECONTROL_API UClass* Z_Construct_UClass_URemoteControlAPITestObject();
	REMOTECONTROL_API UClass* Z_Construct_UClass_URemoteControlAPITestObject_NoRegister();
	REMOTECONTROL_API UEnum* Z_Construct_UEnum_RemoteControl_ERemoteControlEnum();
	REMOTECONTROL_API UEnum* Z_Construct_UEnum_RemoteControl_ERemoteControlEnumClass();
	REMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlTestStructInner();
	REMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlTestStructInnerSimple();
	REMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlTestStructOuter();
	UPackage* Z_Construct_UPackage__Script_RemoteControl();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERemoteControlEnumClass;
	static UEnum* ERemoteControlEnumClass_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERemoteControlEnumClass.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERemoteControlEnumClass.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RemoteControl_ERemoteControlEnumClass, (UObject*)Z_Construct_UPackage__Script_RemoteControl(), TEXT("ERemoteControlEnumClass"));
		}
		return Z_Registration_Info_UEnum_ERemoteControlEnumClass.OuterSingleton;
	}
	template<> REMOTECONTROL_API UEnum* StaticEnum<ERemoteControlEnumClass>()
	{
		return ERemoteControlEnumClass_StaticEnum();
	}
	struct Z_Construct_UEnum_RemoteControl_ERemoteControlEnumClass_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RemoteControl_ERemoteControlEnumClass_Statics::Enumerators[] = {
		{ "ERemoteControlEnumClass::E_One", (int64)ERemoteControlEnumClass::E_One },
		{ "ERemoteControlEnumClass::E_Two", (int64)ERemoteControlEnumClass::E_Two },
		{ "ERemoteControlEnumClass::E_Three", (int64)ERemoteControlEnumClass::E_Three },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RemoteControl_ERemoteControlEnumClass_Statics::Enum_MetaDataParams[] = {
		{ "E_One.Name", "ERemoteControlEnumClass::E_One" },
		{ "E_Three.Name", "ERemoteControlEnumClass::E_Three" },
		{ "E_Two.Name", "ERemoteControlEnumClass::E_Two" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlPropertyHandleTestData.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RemoteControl_ERemoteControlEnumClass_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RemoteControl,
		nullptr,
		"ERemoteControlEnumClass",
		"ERemoteControlEnumClass",
		Z_Construct_UEnum_RemoteControl_ERemoteControlEnumClass_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RemoteControl_ERemoteControlEnumClass_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RemoteControl_ERemoteControlEnumClass_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RemoteControl_ERemoteControlEnumClass_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RemoteControl_ERemoteControlEnumClass()
	{
		if (!Z_Registration_Info_UEnum_ERemoteControlEnumClass.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERemoteControlEnumClass.InnerSingleton, Z_Construct_UEnum_RemoteControl_ERemoteControlEnumClass_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERemoteControlEnumClass.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERemoteControlEnum;
	static UEnum* ERemoteControlEnum_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERemoteControlEnum.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERemoteControlEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RemoteControl_ERemoteControlEnum, (UObject*)Z_Construct_UPackage__Script_RemoteControl(), TEXT("ERemoteControlEnum"));
		}
		return Z_Registration_Info_UEnum_ERemoteControlEnum.OuterSingleton;
	}
	template<> REMOTECONTROL_API UEnum* StaticEnum<ERemoteControlEnum::Type>()
	{
		return ERemoteControlEnum_StaticEnum();
	}
	struct Z_Construct_UEnum_RemoteControl_ERemoteControlEnum_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RemoteControl_ERemoteControlEnum_Statics::Enumerators[] = {
		{ "ERemoteControlEnum::E_One", (int64)ERemoteControlEnum::E_One },
		{ "ERemoteControlEnum::E_Two", (int64)ERemoteControlEnum::E_Two },
		{ "ERemoteControlEnum::E_Three", (int64)ERemoteControlEnum::E_Three },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RemoteControl_ERemoteControlEnum_Statics::Enum_MetaDataParams[] = {
		{ "E_One.Name", "ERemoteControlEnum::E_One" },
		{ "E_Three.Name", "ERemoteControlEnum::E_Three" },
		{ "E_Two.Name", "ERemoteControlEnum::E_Two" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlPropertyHandleTestData.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RemoteControl_ERemoteControlEnum_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RemoteControl,
		nullptr,
		"ERemoteControlEnum",
		"ERemoteControlEnum::Type",
		Z_Construct_UEnum_RemoteControl_ERemoteControlEnum_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RemoteControl_ERemoteControlEnum_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_RemoteControl_ERemoteControlEnum_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RemoteControl_ERemoteControlEnum_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RemoteControl_ERemoteControlEnum()
	{
		if (!Z_Registration_Info_UEnum_ERemoteControlEnum.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERemoteControlEnum.InnerSingleton, Z_Construct_UEnum_RemoteControl_ERemoteControlEnum_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERemoteControlEnum.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemoteControlTestStructInnerSimple;
class UScriptStruct* FRemoteControlTestStructInnerSimple::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemoteControlTestStructInnerSimple.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemoteControlTestStructInnerSimple.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteControlTestStructInnerSimple, (UObject*)Z_Construct_UPackage__Script_RemoteControl(), TEXT("RemoteControlTestStructInnerSimple"));
	}
	return Z_Registration_Info_UScriptStruct_RemoteControlTestStructInnerSimple.OuterSingleton;
}
template<> REMOTECONTROL_API UScriptStruct* StaticStruct<FRemoteControlTestStructInnerSimple>()
{
	return FRemoteControlTestStructInnerSimple::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRemoteControlTestStructInnerSimple_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int32Value_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Int32Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlTestStructInnerSimple_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/RemoteControlPropertyHandleTestData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemoteControlTestStructInnerSimple_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteControlTestStructInnerSimple>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlTestStructInnerSimple_Statics::NewProp_Int32Value_MetaData[] = {
		{ "Category", "RC" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlPropertyHandleTestData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRemoteControlTestStructInnerSimple_Statics::NewProp_Int32Value = { "Int32Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlTestStructInnerSimple, Int32Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlTestStructInnerSimple_Statics::NewProp_Int32Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlTestStructInnerSimple_Statics::NewProp_Int32Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteControlTestStructInnerSimple_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlTestStructInnerSimple_Statics::NewProp_Int32Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteControlTestStructInnerSimple_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControl,
		nullptr,
		&NewStructOps,
		"RemoteControlTestStructInnerSimple",
		sizeof(FRemoteControlTestStructInnerSimple),
		alignof(FRemoteControlTestStructInnerSimple),
		Z_Construct_UScriptStruct_FRemoteControlTestStructInnerSimple_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlTestStructInnerSimple_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlTestStructInnerSimple_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlTestStructInnerSimple_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlTestStructInnerSimple()
	{
		if (!Z_Registration_Info_UScriptStruct_RemoteControlTestStructInnerSimple.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemoteControlTestStructInnerSimple.InnerSingleton, Z_Construct_UScriptStruct_FRemoteControlTestStructInnerSimple_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RemoteControlTestStructInnerSimple.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemoteControlTestStructInner;
class UScriptStruct* FRemoteControlTestStructInner::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemoteControlTestStructInner.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemoteControlTestStructInner.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteControlTestStructInner, (UObject*)Z_Construct_UPackage__Script_RemoteControl(), TEXT("RemoteControlTestStructInner"));
	}
	return Z_Registration_Info_UScriptStruct_RemoteControlTestStructInner.OuterSingleton;
}
template<> REMOTECONTROL_API UScriptStruct* StaticStruct<FRemoteControlTestStructInner>()
{
	return FRemoteControlTestStructInner::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRemoteControlTestStructInner_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int8Value_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_Int8Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InnerSimple_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InnerSimple;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int32Value_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Int32Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlTestStructInner_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/RemoteControlPropertyHandleTestData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemoteControlTestStructInner_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteControlTestStructInner>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlTestStructInner_Statics::NewProp_Int8Value_MetaData[] = {
		{ "Category", "RC" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlPropertyHandleTestData.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FRemoteControlTestStructInner_Statics::NewProp_Int8Value = { "Int8Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlTestStructInner, Int8Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlTestStructInner_Statics::NewProp_Int8Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlTestStructInner_Statics::NewProp_Int8Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlTestStructInner_Statics::NewProp_InnerSimple_MetaData[] = {
		{ "Category", "RC" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlPropertyHandleTestData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteControlTestStructInner_Statics::NewProp_InnerSimple = { "InnerSimple", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlTestStructInner, InnerSimple), Z_Construct_UScriptStruct_FRemoteControlTestStructInnerSimple, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlTestStructInner_Statics::NewProp_InnerSimple_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlTestStructInner_Statics::NewProp_InnerSimple_MetaData)) }; // 2901755168
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlTestStructInner_Statics::NewProp_Int32Value_MetaData[] = {
		{ "Category", "RC" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlPropertyHandleTestData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRemoteControlTestStructInner_Statics::NewProp_Int32Value = { "Int32Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlTestStructInner, Int32Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlTestStructInner_Statics::NewProp_Int32Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlTestStructInner_Statics::NewProp_Int32Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteControlTestStructInner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlTestStructInner_Statics::NewProp_Int8Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlTestStructInner_Statics::NewProp_InnerSimple,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlTestStructInner_Statics::NewProp_Int32Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteControlTestStructInner_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControl,
		nullptr,
		&NewStructOps,
		"RemoteControlTestStructInner",
		sizeof(FRemoteControlTestStructInner),
		alignof(FRemoteControlTestStructInner),
		Z_Construct_UScriptStruct_FRemoteControlTestStructInner_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlTestStructInner_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlTestStructInner_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlTestStructInner_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlTestStructInner()
	{
		if (!Z_Registration_Info_UScriptStruct_RemoteControlTestStructInner.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemoteControlTestStructInner.InnerSingleton, Z_Construct_UScriptStruct_FRemoteControlTestStructInner_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RemoteControlTestStructInner.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemoteControlTestStructOuter;
class UScriptStruct* FRemoteControlTestStructOuter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemoteControlTestStructOuter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemoteControlTestStructOuter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteControlTestStructOuter, (UObject*)Z_Construct_UPackage__Script_RemoteControl(), TEXT("RemoteControlTestStructOuter"));
	}
	return Z_Registration_Info_UScriptStruct_RemoteControlTestStructOuter.OuterSingleton;
}
template<> REMOTECONTROL_API UScriptStruct* StaticStruct<FRemoteControlTestStructOuter>()
{
	return FRemoteControlTestStructOuter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRemoteControlTestStructOuter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int8Value_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_Int8Value;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StructInnerSet_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StructInnerSet_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_StructInnerSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int32Value_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Int32Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoteControlTestStructInner_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RemoteControlTestStructInner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlTestStructOuter_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/RemoteControlPropertyHandleTestData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemoteControlTestStructOuter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteControlTestStructOuter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlTestStructOuter_Statics::NewProp_Int8Value_MetaData[] = {
		{ "Category", "RC" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlPropertyHandleTestData.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FRemoteControlTestStructOuter_Statics::NewProp_Int8Value = { "Int8Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlTestStructOuter, Int8Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlTestStructOuter_Statics::NewProp_Int8Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlTestStructOuter_Statics::NewProp_Int8Value_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteControlTestStructOuter_Statics::NewProp_StructInnerSet_ElementProp = { "StructInnerSet", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRemoteControlTestStructInner, METADATA_PARAMS(nullptr, 0) }; // 3060066058
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlTestStructOuter_Statics::NewProp_StructInnerSet_MetaData[] = {
		{ "Category", "RC" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlPropertyHandleTestData.h" },
	};
#endif
	static_assert(TModels<CGetTypeHashable, FRemoteControlTestStructInner>::Value, "The structure 'FRemoteControlTestStructInner' is used in a TSet but does not have a GetValueTypeHash defined");
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FRemoteControlTestStructOuter_Statics::NewProp_StructInnerSet = { "StructInnerSet", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlTestStructOuter, StructInnerSet), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlTestStructOuter_Statics::NewProp_StructInnerSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlTestStructOuter_Statics::NewProp_StructInnerSet_MetaData)) }; // 3060066058
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlTestStructOuter_Statics::NewProp_Int32Value_MetaData[] = {
		{ "Category", "RC" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlPropertyHandleTestData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRemoteControlTestStructOuter_Statics::NewProp_Int32Value = { "Int32Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlTestStructOuter, Int32Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlTestStructOuter_Statics::NewProp_Int32Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlTestStructOuter_Statics::NewProp_Int32Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlTestStructOuter_Statics::NewProp_RemoteControlTestStructInner_MetaData[] = {
		{ "Category", "RC" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlPropertyHandleTestData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteControlTestStructOuter_Statics::NewProp_RemoteControlTestStructInner = { "RemoteControlTestStructInner", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlTestStructOuter, RemoteControlTestStructInner), Z_Construct_UScriptStruct_FRemoteControlTestStructInner, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlTestStructOuter_Statics::NewProp_RemoteControlTestStructInner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlTestStructOuter_Statics::NewProp_RemoteControlTestStructInner_MetaData)) }; // 3060066058
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteControlTestStructOuter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlTestStructOuter_Statics::NewProp_Int8Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlTestStructOuter_Statics::NewProp_StructInnerSet_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlTestStructOuter_Statics::NewProp_StructInnerSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlTestStructOuter_Statics::NewProp_Int32Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlTestStructOuter_Statics::NewProp_RemoteControlTestStructInner,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteControlTestStructOuter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControl,
		nullptr,
		&NewStructOps,
		"RemoteControlTestStructOuter",
		sizeof(FRemoteControlTestStructOuter),
		alignof(FRemoteControlTestStructOuter),
		Z_Construct_UScriptStruct_FRemoteControlTestStructOuter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlTestStructOuter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlTestStructOuter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlTestStructOuter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlTestStructOuter()
	{
		if (!Z_Registration_Info_UScriptStruct_RemoteControlTestStructOuter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemoteControlTestStructOuter.InnerSingleton, Z_Construct_UScriptStruct_FRemoteControlTestStructOuter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RemoteControlTestStructOuter.InnerSingleton;
	}
	void URemoteControlAPITestObject::StaticRegisterNativesURemoteControlAPITestObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URemoteControlAPITestObject);
	UClass* Z_Construct_UClass_URemoteControlAPITestObject_NoRegister()
	{
		return URemoteControlAPITestObject::StaticClass();
	}
	struct Z_Construct_UClass_URemoteControlAPITestObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CStyleIntArray_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CStyleIntArray;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IntArray;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StructOuterArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StructOuterArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StructOuterArray;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntSet_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntSet_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_IntSet;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntMap_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_IntMap;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StructOuterMap_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StructOuterMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StructOuterMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_StructOuterMap;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StringColorMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringColorMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringColorMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_StringColorMap;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ArrayOfVectors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrayOfVectors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayOfVectors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StaticMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int8Value_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_Int8Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int16Value_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_Int16Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int32Value_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Int32Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoubleValue_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_DoubleValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoteControlTestStructOuter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RemoteControlTestStructOuter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NameValue_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NameValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextValue_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_TextValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bValue_MetaData[];
#endif
		static void NewProp_bValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ByteValue_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ByteValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoteControlEnumByteValue_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_RemoteControlEnumByteValue;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RemoteControlEnumValue_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoteControlEnumValue_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RemoteControlEnumValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotatorValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotatorValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearColorValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinearColorValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URemoteControlAPITestObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControl,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlAPITestObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/RemoteControlPropertyHandleTestData.h" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlPropertyHandleTestData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_CStyleIntArray_MetaData[] = {
		{ "Category", "RC" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlPropertyHandleTestData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_CStyleIntArray = { "CStyleIntArray", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(CStyleIntArray, URemoteControlAPITestObject), nullptr, nullptr, STRUCT_OFFSET(URemoteControlAPITestObject, CStyleIntArray), METADATA_PARAMS(Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_CStyleIntArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_CStyleIntArray_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_IntArray_Inner = { "IntArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_IntArray_MetaData[] = {
		{ "Category", "RC" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlPropertyHandleTestData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_IntArray = { "IntArray", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlAPITestObject, IntArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_IntArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_IntArray_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_StructOuterArray_Inner = { "StructOuterArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRemoteControlTestStructOuter, METADATA_PARAMS(nullptr, 0) }; // 1671098409
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_StructOuterArray_MetaData[] = {
		{ "Category", "RC" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlPropertyHandleTestData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_StructOuterArray = { "StructOuterArray", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlAPITestObject, StructOuterArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_StructOuterArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_StructOuterArray_MetaData)) }; // 1671098409
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_IntSet_ElementProp = { "IntSet", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_IntSet_MetaData[] = {
		{ "Category", "RC" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlPropertyHandleTestData.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_IntSet = { "IntSet", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlAPITestObject, IntSet), METADATA_PARAMS(Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_IntSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_IntSet_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_IntMap_ValueProp = { "IntMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_IntMap_Key_KeyProp = { "IntMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_IntMap_MetaData[] = {
		{ "Category", "RC" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlPropertyHandleTestData.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_IntMap = { "IntMap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlAPITestObject, IntMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_IntMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_IntMap_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_StructOuterMap_ValueProp = { "StructOuterMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FRemoteControlTestStructOuter, METADATA_PARAMS(nullptr, 0) }; // 1671098409
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_StructOuterMap_Key_KeyProp = { "StructOuterMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_StructOuterMap_MetaData[] = {
		{ "Category", "RC" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlPropertyHandleTestData.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_StructOuterMap = { "StructOuterMap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlAPITestObject, StructOuterMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_StructOuterMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_StructOuterMap_MetaData)) }; // 1671098409
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_StringColorMap_ValueProp = { "StringColorMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_StringColorMap_Key_KeyProp = { "StringColorMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_StringColorMap_MetaData[] = {
		{ "Category", "RC" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlPropertyHandleTestData.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_StringColorMap = { "StringColorMap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlAPITestObject, StringColorMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_StringColorMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_StringColorMap_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_ArrayOfVectors_Inner = { "ArrayOfVectors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_ArrayOfVectors_MetaData[] = {
		{ "Category", "RC" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlPropertyHandleTestData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_ArrayOfVectors = { "ArrayOfVectors", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlAPITestObject, ArrayOfVectors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_ArrayOfVectors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_ArrayOfVectors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "Category", "RC" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlPropertyHandleTestData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x0014000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlAPITestObject, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_StaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_StaticMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_Int8Value_MetaData[] = {
		{ "Category", "RC" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlPropertyHandleTestData.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_Int8Value = { "Int8Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlAPITestObject, Int8Value), METADATA_PARAMS(Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_Int8Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_Int8Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_Int16Value_MetaData[] = {
		{ "Category", "RC" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlPropertyHandleTestData.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_Int16Value = { "Int16Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlAPITestObject, Int16Value), METADATA_PARAMS(Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_Int16Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_Int16Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_Int32Value_MetaData[] = {
		{ "Category", "RC" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlPropertyHandleTestData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_Int32Value = { "Int32Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlAPITestObject, Int32Value), METADATA_PARAMS(Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_Int32Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_Int32Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_FloatValue_MetaData[] = {
		{ "Category", "RC" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlPropertyHandleTestData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_FloatValue = { "FloatValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlAPITestObject, FloatValue), METADATA_PARAMS(Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_FloatValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_FloatValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_DoubleValue_MetaData[] = {
		{ "Category", "RC" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlPropertyHandleTestData.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_DoubleValue = { "DoubleValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlAPITestObject, DoubleValue), METADATA_PARAMS(Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_DoubleValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_DoubleValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_RemoteControlTestStructOuter_MetaData[] = {
		{ "Category", "RC" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlPropertyHandleTestData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_RemoteControlTestStructOuter = { "RemoteControlTestStructOuter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlAPITestObject, RemoteControlTestStructOuter), Z_Construct_UScriptStruct_FRemoteControlTestStructOuter, METADATA_PARAMS(Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_RemoteControlTestStructOuter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_RemoteControlTestStructOuter_MetaData)) }; // 1671098409
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_StringValue_MetaData[] = {
		{ "Category", "RC" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlPropertyHandleTestData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_StringValue = { "StringValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlAPITestObject, StringValue), METADATA_PARAMS(Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_StringValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_StringValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_NameValue_MetaData[] = {
		{ "Category", "RC" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlPropertyHandleTestData.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_NameValue = { "NameValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlAPITestObject, NameValue), METADATA_PARAMS(Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_NameValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_NameValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_TextValue_MetaData[] = {
		{ "Category", "RC" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlPropertyHandleTestData.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_TextValue = { "TextValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlAPITestObject, TextValue), METADATA_PARAMS(Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_TextValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_TextValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_bValue_MetaData[] = {
		{ "Category", "RC" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlPropertyHandleTestData.h" },
	};
#endif
	void Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((URemoteControlAPITestObject*)Obj)->bValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URemoteControlAPITestObject), &Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_bValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_bValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_ByteValue_MetaData[] = {
		{ "Category", "RC" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlPropertyHandleTestData.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_ByteValue = { "ByteValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlAPITestObject, ByteValue), nullptr, METADATA_PARAMS(Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_ByteValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_ByteValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_RemoteControlEnumByteValue_MetaData[] = {
		{ "Category", "RC" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlPropertyHandleTestData.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_RemoteControlEnumByteValue = { "RemoteControlEnumByteValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlAPITestObject, RemoteControlEnumByteValue), Z_Construct_UEnum_RemoteControl_ERemoteControlEnum, METADATA_PARAMS(Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_RemoteControlEnumByteValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_RemoteControlEnumByteValue_MetaData)) }; // 303052150
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_RemoteControlEnumValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_RemoteControlEnumValue_MetaData[] = {
		{ "Category", "RC" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlPropertyHandleTestData.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_RemoteControlEnumValue = { "RemoteControlEnumValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlAPITestObject, RemoteControlEnumValue), Z_Construct_UEnum_RemoteControl_ERemoteControlEnumClass, METADATA_PARAMS(Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_RemoteControlEnumValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_RemoteControlEnumValue_MetaData)) }; // 1585112325
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_VectorValue_MetaData[] = {
		{ "Category", "RC" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlPropertyHandleTestData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_VectorValue = { "VectorValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlAPITestObject, VectorValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_VectorValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_VectorValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_RotatorValue_MetaData[] = {
		{ "Category", "RC" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlPropertyHandleTestData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_RotatorValue = { "RotatorValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlAPITestObject, RotatorValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_RotatorValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_RotatorValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_ColorValue_MetaData[] = {
		{ "Category", "RC" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlPropertyHandleTestData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_ColorValue = { "ColorValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlAPITestObject, ColorValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_ColorValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_ColorValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_LinearColorValue_MetaData[] = {
		{ "Category", "RC" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlPropertyHandleTestData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_LinearColorValue = { "LinearColorValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlAPITestObject, LinearColorValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_LinearColorValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_LinearColorValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URemoteControlAPITestObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_CStyleIntArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_IntArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_IntArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_StructOuterArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_StructOuterArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_IntSet_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_IntSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_IntMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_IntMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_IntMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_StructOuterMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_StructOuterMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_StructOuterMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_StringColorMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_StringColorMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_StringColorMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_ArrayOfVectors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_ArrayOfVectors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_StaticMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_Int8Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_Int16Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_Int32Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_FloatValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_DoubleValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_RemoteControlTestStructOuter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_StringValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_NameValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_TextValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_bValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_ByteValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_RemoteControlEnumByteValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_RemoteControlEnumValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_RemoteControlEnumValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_VectorValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_RotatorValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_ColorValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlAPITestObject_Statics::NewProp_LinearColorValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URemoteControlAPITestObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URemoteControlAPITestObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URemoteControlAPITestObject_Statics::ClassParams = {
		&URemoteControlAPITestObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URemoteControlAPITestObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlAPITestObject_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URemoteControlAPITestObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlAPITestObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URemoteControlAPITestObject()
	{
		if (!Z_Registration_Info_UClass_URemoteControlAPITestObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URemoteControlAPITestObject.OuterSingleton, Z_Construct_UClass_URemoteControlAPITestObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URemoteControlAPITestObject.OuterSingleton;
	}
	template<> REMOTECONTROL_API UClass* StaticClass<URemoteControlAPITestObject>()
	{
		return URemoteControlAPITestObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URemoteControlAPITestObject);
	URemoteControlAPITestObject::~URemoteControlAPITestObject() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlPropertyHandleTestData_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlPropertyHandleTestData_h_Statics::EnumInfo[] = {
		{ ERemoteControlEnumClass_StaticEnum, TEXT("ERemoteControlEnumClass"), &Z_Registration_Info_UEnum_ERemoteControlEnumClass, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1585112325U) },
		{ ERemoteControlEnum_StaticEnum, TEXT("ERemoteControlEnum"), &Z_Registration_Info_UEnum_ERemoteControlEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 303052150U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlPropertyHandleTestData_h_Statics::ScriptStructInfo[] = {
		{ FRemoteControlTestStructInnerSimple::StaticStruct, Z_Construct_UScriptStruct_FRemoteControlTestStructInnerSimple_Statics::NewStructOps, TEXT("RemoteControlTestStructInnerSimple"), &Z_Registration_Info_UScriptStruct_RemoteControlTestStructInnerSimple, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemoteControlTestStructInnerSimple), 2901755168U) },
		{ FRemoteControlTestStructInner::StaticStruct, Z_Construct_UScriptStruct_FRemoteControlTestStructInner_Statics::NewStructOps, TEXT("RemoteControlTestStructInner"), &Z_Registration_Info_UScriptStruct_RemoteControlTestStructInner, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemoteControlTestStructInner), 3060066058U) },
		{ FRemoteControlTestStructOuter::StaticStruct, Z_Construct_UScriptStruct_FRemoteControlTestStructOuter_Statics::NewStructOps, TEXT("RemoteControlTestStructOuter"), &Z_Registration_Info_UScriptStruct_RemoteControlTestStructOuter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemoteControlTestStructOuter), 1671098409U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlPropertyHandleTestData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URemoteControlAPITestObject, URemoteControlAPITestObject::StaticClass, TEXT("URemoteControlAPITestObject"), &Z_Registration_Info_UClass_URemoteControlAPITestObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URemoteControlAPITestObject), 1579258092U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlPropertyHandleTestData_h_1546935647(TEXT("/Script/RemoteControl"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlPropertyHandleTestData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlPropertyHandleTestData_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlPropertyHandleTestData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlPropertyHandleTestData_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlPropertyHandleTestData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlPropertyHandleTestData_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
