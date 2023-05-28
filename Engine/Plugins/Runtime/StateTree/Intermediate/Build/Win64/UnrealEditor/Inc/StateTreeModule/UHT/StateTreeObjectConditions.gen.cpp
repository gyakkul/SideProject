// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Conditions/StateTreeObjectConditions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeObjectConditions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeConditionCommonBase();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeObjectEqualsCondition();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeObjectEqualsConditionInstanceData();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeObjectIsChildOfClassCondition();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeObjectIsChildOfClassConditionInstanceData();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeObjectIsValidCondition();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeObjectIsValidConditionInstanceData();
	UPackage* Z_Construct_UPackage__Script_StateTreeModule();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeObjectIsValidConditionInstanceData;
class UScriptStruct* FStateTreeObjectIsValidConditionInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeObjectIsValidConditionInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeObjectIsValidConditionInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeObjectIsValidConditionInstanceData, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeObjectIsValidConditionInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeObjectIsValidConditionInstanceData.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeObjectIsValidConditionInstanceData>()
{
	return FStateTreeObjectIsValidConditionInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeObjectIsValidConditionInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Object;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeObjectIsValidConditionInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Conditions/StateTreeObjectConditions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeObjectIsValidConditionInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeObjectIsValidConditionInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeObjectIsValidConditionInstanceData_Statics::NewProp_Object_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Conditions/StateTreeObjectConditions.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FStateTreeObjectIsValidConditionInstanceData_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeObjectIsValidConditionInstanceData, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeObjectIsValidConditionInstanceData_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeObjectIsValidConditionInstanceData_Statics::NewProp_Object_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeObjectIsValidConditionInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeObjectIsValidConditionInstanceData_Statics::NewProp_Object,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeObjectIsValidConditionInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"StateTreeObjectIsValidConditionInstanceData",
		sizeof(FStateTreeObjectIsValidConditionInstanceData),
		alignof(FStateTreeObjectIsValidConditionInstanceData),
		Z_Construct_UScriptStruct_FStateTreeObjectIsValidConditionInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeObjectIsValidConditionInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeObjectIsValidConditionInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeObjectIsValidConditionInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeObjectIsValidConditionInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeObjectIsValidConditionInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeObjectIsValidConditionInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeObjectIsValidConditionInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeObjectIsValidConditionInstanceData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FStateTreeObjectIsValidCondition>() == std::is_polymorphic<FStateTreeConditionCommonBase>(), "USTRUCT FStateTreeObjectIsValidCondition cannot be polymorphic unless super FStateTreeConditionCommonBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeObjectIsValidCondition;
class UScriptStruct* FStateTreeObjectIsValidCondition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeObjectIsValidCondition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeObjectIsValidCondition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeObjectIsValidCondition, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeObjectIsValidCondition"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeObjectIsValidCondition.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeObjectIsValidCondition>()
{
	return FStateTreeObjectIsValidCondition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeObjectIsValidCondition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInvert_MetaData[];
#endif
		static void NewProp_bInvert_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeObjectIsValidCondition_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Object" },
		{ "Comment", "/**\n * Condition testing if specified object is valid.\n */" },
		{ "DisplayName", "Object Is Valid" },
		{ "ModuleRelativePath", "Public/Conditions/StateTreeObjectConditions.h" },
		{ "ToolTip", "Condition testing if specified object is valid." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeObjectIsValidCondition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeObjectIsValidCondition>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeObjectIsValidCondition_Statics::NewProp_bInvert_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/Conditions/StateTreeObjectConditions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStateTreeObjectIsValidCondition_Statics::NewProp_bInvert_SetBit(void* Obj)
	{
		((FStateTreeObjectIsValidCondition*)Obj)->bInvert = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStateTreeObjectIsValidCondition_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FStateTreeObjectIsValidCondition), &Z_Construct_UScriptStruct_FStateTreeObjectIsValidCondition_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeObjectIsValidCondition_Statics::NewProp_bInvert_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeObjectIsValidCondition_Statics::NewProp_bInvert_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeObjectIsValidCondition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeObjectIsValidCondition_Statics::NewProp_bInvert,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeObjectIsValidCondition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		Z_Construct_UScriptStruct_FStateTreeConditionCommonBase,
		&NewStructOps,
		"StateTreeObjectIsValidCondition",
		sizeof(FStateTreeObjectIsValidCondition),
		alignof(FStateTreeObjectIsValidCondition),
		Z_Construct_UScriptStruct_FStateTreeObjectIsValidCondition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeObjectIsValidCondition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeObjectIsValidCondition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeObjectIsValidCondition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeObjectIsValidCondition()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeObjectIsValidCondition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeObjectIsValidCondition.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeObjectIsValidCondition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeObjectIsValidCondition.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeObjectEqualsConditionInstanceData;
class UScriptStruct* FStateTreeObjectEqualsConditionInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeObjectEqualsConditionInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeObjectEqualsConditionInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeObjectEqualsConditionInstanceData, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeObjectEqualsConditionInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeObjectEqualsConditionInstanceData.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeObjectEqualsConditionInstanceData>()
{
	return FStateTreeObjectEqualsConditionInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeObjectEqualsConditionInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Left_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Left;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Right_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Right;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeObjectEqualsConditionInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Conditions/StateTreeObjectConditions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeObjectEqualsConditionInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeObjectEqualsConditionInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeObjectEqualsConditionInstanceData_Statics::NewProp_Left_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Conditions/StateTreeObjectConditions.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FStateTreeObjectEqualsConditionInstanceData_Statics::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeObjectEqualsConditionInstanceData, Left), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeObjectEqualsConditionInstanceData_Statics::NewProp_Left_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeObjectEqualsConditionInstanceData_Statics::NewProp_Left_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeObjectEqualsConditionInstanceData_Statics::NewProp_Right_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/Conditions/StateTreeObjectConditions.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FStateTreeObjectEqualsConditionInstanceData_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeObjectEqualsConditionInstanceData, Right), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeObjectEqualsConditionInstanceData_Statics::NewProp_Right_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeObjectEqualsConditionInstanceData_Statics::NewProp_Right_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeObjectEqualsConditionInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeObjectEqualsConditionInstanceData_Statics::NewProp_Left,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeObjectEqualsConditionInstanceData_Statics::NewProp_Right,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeObjectEqualsConditionInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"StateTreeObjectEqualsConditionInstanceData",
		sizeof(FStateTreeObjectEqualsConditionInstanceData),
		alignof(FStateTreeObjectEqualsConditionInstanceData),
		Z_Construct_UScriptStruct_FStateTreeObjectEqualsConditionInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeObjectEqualsConditionInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeObjectEqualsConditionInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeObjectEqualsConditionInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeObjectEqualsConditionInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeObjectEqualsConditionInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeObjectEqualsConditionInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeObjectEqualsConditionInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeObjectEqualsConditionInstanceData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FStateTreeObjectEqualsCondition>() == std::is_polymorphic<FStateTreeConditionCommonBase>(), "USTRUCT FStateTreeObjectEqualsCondition cannot be polymorphic unless super FStateTreeConditionCommonBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeObjectEqualsCondition;
class UScriptStruct* FStateTreeObjectEqualsCondition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeObjectEqualsCondition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeObjectEqualsCondition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeObjectEqualsCondition, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeObjectEqualsCondition"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeObjectEqualsCondition.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeObjectEqualsCondition>()
{
	return FStateTreeObjectEqualsCondition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeObjectEqualsCondition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInvert_MetaData[];
#endif
		static void NewProp_bInvert_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeObjectEqualsCondition_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Object" },
		{ "Comment", "/**\n * Condition testing if two object pointers point to the same object.\n */" },
		{ "DisplayName", "Object Equals" },
		{ "ModuleRelativePath", "Public/Conditions/StateTreeObjectConditions.h" },
		{ "ToolTip", "Condition testing if two object pointers point to the same object." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeObjectEqualsCondition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeObjectEqualsCondition>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeObjectEqualsCondition_Statics::NewProp_bInvert_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/Conditions/StateTreeObjectConditions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStateTreeObjectEqualsCondition_Statics::NewProp_bInvert_SetBit(void* Obj)
	{
		((FStateTreeObjectEqualsCondition*)Obj)->bInvert = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStateTreeObjectEqualsCondition_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FStateTreeObjectEqualsCondition), &Z_Construct_UScriptStruct_FStateTreeObjectEqualsCondition_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeObjectEqualsCondition_Statics::NewProp_bInvert_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeObjectEqualsCondition_Statics::NewProp_bInvert_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeObjectEqualsCondition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeObjectEqualsCondition_Statics::NewProp_bInvert,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeObjectEqualsCondition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		Z_Construct_UScriptStruct_FStateTreeConditionCommonBase,
		&NewStructOps,
		"StateTreeObjectEqualsCondition",
		sizeof(FStateTreeObjectEqualsCondition),
		alignof(FStateTreeObjectEqualsCondition),
		Z_Construct_UScriptStruct_FStateTreeObjectEqualsCondition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeObjectEqualsCondition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeObjectEqualsCondition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeObjectEqualsCondition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeObjectEqualsCondition()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeObjectEqualsCondition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeObjectEqualsCondition.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeObjectEqualsCondition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeObjectEqualsCondition.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeObjectIsChildOfClassConditionInstanceData;
class UScriptStruct* FStateTreeObjectIsChildOfClassConditionInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeObjectIsChildOfClassConditionInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeObjectIsChildOfClassConditionInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeObjectIsChildOfClassConditionInstanceData, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeObjectIsChildOfClassConditionInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeObjectIsChildOfClassConditionInstanceData.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeObjectIsChildOfClassConditionInstanceData>()
{
	return FStateTreeObjectIsChildOfClassConditionInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeObjectIsChildOfClassConditionInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Object;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_Class;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeObjectIsChildOfClassConditionInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Conditions/StateTreeObjectConditions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeObjectIsChildOfClassConditionInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeObjectIsChildOfClassConditionInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeObjectIsChildOfClassConditionInstanceData_Statics::NewProp_Object_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Conditions/StateTreeObjectConditions.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FStateTreeObjectIsChildOfClassConditionInstanceData_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeObjectIsChildOfClassConditionInstanceData, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeObjectIsChildOfClassConditionInstanceData_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeObjectIsChildOfClassConditionInstanceData_Statics::NewProp_Object_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeObjectIsChildOfClassConditionInstanceData_Statics::NewProp_Class_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/Conditions/StateTreeObjectConditions.h" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UScriptStruct_FStateTreeObjectIsChildOfClassConditionInstanceData_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeObjectIsChildOfClassConditionInstanceData, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeObjectIsChildOfClassConditionInstanceData_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeObjectIsChildOfClassConditionInstanceData_Statics::NewProp_Class_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeObjectIsChildOfClassConditionInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeObjectIsChildOfClassConditionInstanceData_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeObjectIsChildOfClassConditionInstanceData_Statics::NewProp_Class,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeObjectIsChildOfClassConditionInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"StateTreeObjectIsChildOfClassConditionInstanceData",
		sizeof(FStateTreeObjectIsChildOfClassConditionInstanceData),
		alignof(FStateTreeObjectIsChildOfClassConditionInstanceData),
		Z_Construct_UScriptStruct_FStateTreeObjectIsChildOfClassConditionInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeObjectIsChildOfClassConditionInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeObjectIsChildOfClassConditionInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeObjectIsChildOfClassConditionInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeObjectIsChildOfClassConditionInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeObjectIsChildOfClassConditionInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeObjectIsChildOfClassConditionInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeObjectIsChildOfClassConditionInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeObjectIsChildOfClassConditionInstanceData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FStateTreeObjectIsChildOfClassCondition>() == std::is_polymorphic<FStateTreeConditionCommonBase>(), "USTRUCT FStateTreeObjectIsChildOfClassCondition cannot be polymorphic unless super FStateTreeConditionCommonBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeObjectIsChildOfClassCondition;
class UScriptStruct* FStateTreeObjectIsChildOfClassCondition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeObjectIsChildOfClassCondition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeObjectIsChildOfClassCondition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeObjectIsChildOfClassCondition, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeObjectIsChildOfClassCondition"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeObjectIsChildOfClassCondition.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeObjectIsChildOfClassCondition>()
{
	return FStateTreeObjectIsChildOfClassCondition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeObjectIsChildOfClassCondition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInvert_MetaData[];
#endif
		static void NewProp_bInvert_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeObjectIsChildOfClassCondition_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Object" },
		{ "Comment", "/**\n * Condition testing if object is child of specified class.\n */" },
		{ "DisplayName", "Object Class Is" },
		{ "ModuleRelativePath", "Public/Conditions/StateTreeObjectConditions.h" },
		{ "ToolTip", "Condition testing if object is child of specified class." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeObjectIsChildOfClassCondition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeObjectIsChildOfClassCondition>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeObjectIsChildOfClassCondition_Statics::NewProp_bInvert_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/Conditions/StateTreeObjectConditions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStateTreeObjectIsChildOfClassCondition_Statics::NewProp_bInvert_SetBit(void* Obj)
	{
		((FStateTreeObjectIsChildOfClassCondition*)Obj)->bInvert = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStateTreeObjectIsChildOfClassCondition_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FStateTreeObjectIsChildOfClassCondition), &Z_Construct_UScriptStruct_FStateTreeObjectIsChildOfClassCondition_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeObjectIsChildOfClassCondition_Statics::NewProp_bInvert_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeObjectIsChildOfClassCondition_Statics::NewProp_bInvert_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeObjectIsChildOfClassCondition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeObjectIsChildOfClassCondition_Statics::NewProp_bInvert,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeObjectIsChildOfClassCondition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		Z_Construct_UScriptStruct_FStateTreeConditionCommonBase,
		&NewStructOps,
		"StateTreeObjectIsChildOfClassCondition",
		sizeof(FStateTreeObjectIsChildOfClassCondition),
		alignof(FStateTreeObjectIsChildOfClassCondition),
		Z_Construct_UScriptStruct_FStateTreeObjectIsChildOfClassCondition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeObjectIsChildOfClassCondition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeObjectIsChildOfClassCondition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeObjectIsChildOfClassCondition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeObjectIsChildOfClassCondition()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeObjectIsChildOfClassCondition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeObjectIsChildOfClassCondition.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeObjectIsChildOfClassCondition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeObjectIsChildOfClassCondition.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Conditions_StateTreeObjectConditions_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Conditions_StateTreeObjectConditions_h_Statics::ScriptStructInfo[] = {
		{ FStateTreeObjectIsValidConditionInstanceData::StaticStruct, Z_Construct_UScriptStruct_FStateTreeObjectIsValidConditionInstanceData_Statics::NewStructOps, TEXT("StateTreeObjectIsValidConditionInstanceData"), &Z_Registration_Info_UScriptStruct_StateTreeObjectIsValidConditionInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeObjectIsValidConditionInstanceData), 1614152096U) },
		{ FStateTreeObjectIsValidCondition::StaticStruct, Z_Construct_UScriptStruct_FStateTreeObjectIsValidCondition_Statics::NewStructOps, TEXT("StateTreeObjectIsValidCondition"), &Z_Registration_Info_UScriptStruct_StateTreeObjectIsValidCondition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeObjectIsValidCondition), 1486300249U) },
		{ FStateTreeObjectEqualsConditionInstanceData::StaticStruct, Z_Construct_UScriptStruct_FStateTreeObjectEqualsConditionInstanceData_Statics::NewStructOps, TEXT("StateTreeObjectEqualsConditionInstanceData"), &Z_Registration_Info_UScriptStruct_StateTreeObjectEqualsConditionInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeObjectEqualsConditionInstanceData), 2852753354U) },
		{ FStateTreeObjectEqualsCondition::StaticStruct, Z_Construct_UScriptStruct_FStateTreeObjectEqualsCondition_Statics::NewStructOps, TEXT("StateTreeObjectEqualsCondition"), &Z_Registration_Info_UScriptStruct_StateTreeObjectEqualsCondition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeObjectEqualsCondition), 1705878106U) },
		{ FStateTreeObjectIsChildOfClassConditionInstanceData::StaticStruct, Z_Construct_UScriptStruct_FStateTreeObjectIsChildOfClassConditionInstanceData_Statics::NewStructOps, TEXT("StateTreeObjectIsChildOfClassConditionInstanceData"), &Z_Registration_Info_UScriptStruct_StateTreeObjectIsChildOfClassConditionInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeObjectIsChildOfClassConditionInstanceData), 2246470050U) },
		{ FStateTreeObjectIsChildOfClassCondition::StaticStruct, Z_Construct_UScriptStruct_FStateTreeObjectIsChildOfClassCondition_Statics::NewStructOps, TEXT("StateTreeObjectIsChildOfClassCondition"), &Z_Registration_Info_UScriptStruct_StateTreeObjectIsChildOfClassCondition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeObjectIsChildOfClassCondition), 96833345U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Conditions_StateTreeObjectConditions_h_2564961554(TEXT("/Script/StateTreeModule"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Conditions_StateTreeObjectConditions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Conditions_StateTreeObjectConditions_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
