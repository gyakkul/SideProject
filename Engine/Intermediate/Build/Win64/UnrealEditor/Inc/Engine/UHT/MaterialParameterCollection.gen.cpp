// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialParameterCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialParameterCollection() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollectionParameterBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollectionScalarParameter();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollectionVectorParameter();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollectionParameterBase;
class UScriptStruct* FCollectionParameterBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollectionParameterBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollectionParameterBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionParameterBase, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CollectionParameterBase"));
	}
	return Z_Registration_Info_UScriptStruct_CollectionParameterBase.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCollectionParameterBase>()
{
	return FCollectionParameterBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCollectionParameterBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionParameterBase_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Base struct for collection parameters */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialParameterCollection.h" },
		{ "ToolTip", "Base struct for collection parameters" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCollectionParameterBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollectionParameterBase>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionParameterBase_Statics::NewProp_ParameterName_MetaData[] = {
		{ "Category", "Parameter" },
		{ "Comment", "/** The name of the parameter.  Changing this name will break any blueprints that reference the parameter. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialParameterCollection.h" },
		{ "ToolTip", "The name of the parameter.  Changing this name will break any blueprints that reference the parameter." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCollectionParameterBase_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionParameterBase, ParameterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionParameterBase_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionParameterBase_Statics::NewProp_ParameterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionParameterBase_Statics::NewProp_Id_MetaData[] = {
		{ "Comment", "/** Uniquely identifies the parameter, used for fixing up materials that reference this parameter when renaming. */" },
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialParameterCollection.h" },
		{ "ToolTip", "Uniquely identifies the parameter, used for fixing up materials that reference this parameter when renaming." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionParameterBase_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionParameterBase, Id), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionParameterBase_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionParameterBase_Statics::NewProp_Id_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollectionParameterBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionParameterBase_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionParameterBase_Statics::NewProp_Id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollectionParameterBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CollectionParameterBase",
		sizeof(FCollectionParameterBase),
		alignof(FCollectionParameterBase),
		Z_Construct_UScriptStruct_FCollectionParameterBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionParameterBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionParameterBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionParameterBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCollectionParameterBase()
	{
		if (!Z_Registration_Info_UScriptStruct_CollectionParameterBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollectionParameterBase.InnerSingleton, Z_Construct_UScriptStruct_FCollectionParameterBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CollectionParameterBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCollectionScalarParameter>() == std::is_polymorphic<FCollectionParameterBase>(), "USTRUCT FCollectionScalarParameter cannot be polymorphic unless super FCollectionParameterBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollectionScalarParameter;
class UScriptStruct* FCollectionScalarParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollectionScalarParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollectionScalarParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionScalarParameter, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CollectionScalarParameter"));
	}
	return Z_Registration_Info_UScriptStruct_CollectionScalarParameter.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCollectionScalarParameter>()
{
	return FCollectionScalarParameter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCollectionScalarParameter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionScalarParameter_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** A scalar parameter */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialParameterCollection.h" },
		{ "ToolTip", "A scalar parameter" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCollectionScalarParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollectionScalarParameter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionScalarParameter_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialParameterCollection.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCollectionScalarParameter_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionScalarParameter, DefaultValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionScalarParameter_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionScalarParameter_Statics::NewProp_DefaultValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollectionScalarParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionScalarParameter_Statics::NewProp_DefaultValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollectionScalarParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FCollectionParameterBase,
		&NewStructOps,
		"CollectionScalarParameter",
		sizeof(FCollectionScalarParameter),
		alignof(FCollectionScalarParameter),
		Z_Construct_UScriptStruct_FCollectionScalarParameter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionScalarParameter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionScalarParameter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionScalarParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCollectionScalarParameter()
	{
		if (!Z_Registration_Info_UScriptStruct_CollectionScalarParameter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollectionScalarParameter.InnerSingleton, Z_Construct_UScriptStruct_FCollectionScalarParameter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CollectionScalarParameter.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCollectionVectorParameter>() == std::is_polymorphic<FCollectionParameterBase>(), "USTRUCT FCollectionVectorParameter cannot be polymorphic unless super FCollectionParameterBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollectionVectorParameter;
class UScriptStruct* FCollectionVectorParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollectionVectorParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollectionVectorParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionVectorParameter, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CollectionVectorParameter"));
	}
	return Z_Registration_Info_UScriptStruct_CollectionVectorParameter.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCollectionVectorParameter>()
{
	return FCollectionVectorParameter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCollectionVectorParameter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionVectorParameter_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** A vector parameter */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialParameterCollection.h" },
		{ "ToolTip", "A vector parameter" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCollectionVectorParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollectionVectorParameter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionVectorParameter_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialParameterCollection.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionVectorParameter_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionVectorParameter, DefaultValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionVectorParameter_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionVectorParameter_Statics::NewProp_DefaultValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollectionVectorParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionVectorParameter_Statics::NewProp_DefaultValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollectionVectorParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FCollectionParameterBase,
		&NewStructOps,
		"CollectionVectorParameter",
		sizeof(FCollectionVectorParameter),
		alignof(FCollectionVectorParameter),
		Z_Construct_UScriptStruct_FCollectionVectorParameter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionVectorParameter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionVectorParameter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionVectorParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCollectionVectorParameter()
	{
		if (!Z_Registration_Info_UScriptStruct_CollectionVectorParameter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollectionVectorParameter.InnerSingleton, Z_Construct_UScriptStruct_FCollectionVectorParameter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CollectionVectorParameter.InnerSingleton;
	}
	DEFINE_FUNCTION(UMaterialParameterCollection::execGetVectorParameterDefaultValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_UBOOL_REF(Z_Param_Out_bParameterFound);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetVectorParameterDefaultValue(Z_Param_ParameterName,Z_Param_Out_bParameterFound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialParameterCollection::execGetScalarParameterDefaultValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_UBOOL_REF(Z_Param_Out_bParameterFound);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetScalarParameterDefaultValue(Z_Param_ParameterName,Z_Param_Out_bParameterFound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialParameterCollection::execGetVectorParameterNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetVectorParameterNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialParameterCollection::execGetScalarParameterNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetScalarParameterNames();
		P_NATIVE_END;
	}
	void UMaterialParameterCollection::StaticRegisterNativesUMaterialParameterCollection()
	{
		UClass* Class = UMaterialParameterCollection::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetScalarParameterDefaultValue", &UMaterialParameterCollection::execGetScalarParameterDefaultValue },
			{ "GetScalarParameterNames", &UMaterialParameterCollection::execGetScalarParameterNames },
			{ "GetVectorParameterDefaultValue", &UMaterialParameterCollection::execGetVectorParameterDefaultValue },
			{ "GetVectorParameterNames", &UMaterialParameterCollection::execGetVectorParameterNames },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterDefaultValue_Statics
	{
		struct MaterialParameterCollection_eventGetScalarParameterDefaultValue_Parms
		{
			FName ParameterName;
			bool bParameterFound;
			float ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static void NewProp_bParameterFound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bParameterFound;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterDefaultValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialParameterCollection_eventGetScalarParameterDefaultValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterDefaultValue_Statics::NewProp_bParameterFound_SetBit(void* Obj)
	{
		((MaterialParameterCollection_eventGetScalarParameterDefaultValue_Parms*)Obj)->bParameterFound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterDefaultValue_Statics::NewProp_bParameterFound = { "bParameterFound", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MaterialParameterCollection_eventGetScalarParameterDefaultValue_Parms), &Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterDefaultValue_Statics::NewProp_bParameterFound_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterDefaultValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialParameterCollection_eventGetScalarParameterDefaultValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterDefaultValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterDefaultValue_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterDefaultValue_Statics::NewProp_bParameterFound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterDefaultValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterDefaultValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Gets the default value of a scalar parameter from a material collection.\n\x09 * @param ParameterName - The name of the value to get the value of\n\x09 * @param bParameterFound - if a parameter with the input name was found\n\x09 * @returns the value of the parameter\n\x09 **/" },
		{ "Keywords", "GetFloatParameterDefaultValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialParameterCollection.h" },
		{ "ToolTip", "Gets the default value of a scalar parameter from a material collection.\n@param ParameterName - The name of the value to get the value of\n@param bParameterFound - if a parameter with the input name was found\n@returns the value of the parameter" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterDefaultValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialParameterCollection, nullptr, "GetScalarParameterDefaultValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterDefaultValue_Statics::MaterialParameterCollection_eventGetScalarParameterDefaultValue_Parms), Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterDefaultValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterDefaultValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterDefaultValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterDefaultValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterDefaultValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterDefaultValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterNames_Statics
	{
		struct MaterialParameterCollection_eventGetScalarParameterNames_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialParameterCollection_eventGetScalarParameterNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterNames_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Returns an array of the names of all the scalar parameters in this Material Parameter Collection **/" },
		{ "Keywords", "GetScalarParameterNames" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialParameterCollection.h" },
		{ "ToolTip", "Returns an array of the names of all the scalar parameters in this Material Parameter Collection *" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialParameterCollection, nullptr, "GetScalarParameterNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterNames_Statics::MaterialParameterCollection_eventGetScalarParameterNames_Parms), Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterDefaultValue_Statics
	{
		struct MaterialParameterCollection_eventGetVectorParameterDefaultValue_Parms
		{
			FName ParameterName;
			bool bParameterFound;
			FLinearColor ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static void NewProp_bParameterFound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bParameterFound;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterDefaultValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialParameterCollection_eventGetVectorParameterDefaultValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterDefaultValue_Statics::NewProp_bParameterFound_SetBit(void* Obj)
	{
		((MaterialParameterCollection_eventGetVectorParameterDefaultValue_Parms*)Obj)->bParameterFound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterDefaultValue_Statics::NewProp_bParameterFound = { "bParameterFound", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MaterialParameterCollection_eventGetVectorParameterDefaultValue_Parms), &Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterDefaultValue_Statics::NewProp_bParameterFound_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterDefaultValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialParameterCollection_eventGetVectorParameterDefaultValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterDefaultValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterDefaultValue_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterDefaultValue_Statics::NewProp_bParameterFound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterDefaultValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterDefaultValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Gets the default value of a scalar parameter from a material collection.\n\x09 * @param ParameterName - The name of the value to get the value of\n\x09 * @param bParameterFound - if a parameter with the input name was found\n\x09 * @returns the value of the parameter\n\x09 **/" },
		{ "Keywords", "GetFloatParameterDefaultValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialParameterCollection.h" },
		{ "ToolTip", "Gets the default value of a scalar parameter from a material collection.\n@param ParameterName - The name of the value to get the value of\n@param bParameterFound - if a parameter with the input name was found\n@returns the value of the parameter" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterDefaultValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialParameterCollection, nullptr, "GetVectorParameterDefaultValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterDefaultValue_Statics::MaterialParameterCollection_eventGetVectorParameterDefaultValue_Parms), Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterDefaultValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterDefaultValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterDefaultValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterDefaultValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterDefaultValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterDefaultValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterNames_Statics
	{
		struct MaterialParameterCollection_eventGetVectorParameterNames_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialParameterCollection_eventGetVectorParameterNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterNames_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Returns an array of the names of all the vector parameters in this Material Parameter Collection **/" },
		{ "Keywords", "GetVectorParameterNames" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialParameterCollection.h" },
		{ "ToolTip", "Returns an array of the names of all the vector parameters in this Material Parameter Collection *" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialParameterCollection, nullptr, "GetVectorParameterNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterNames_Statics::MaterialParameterCollection_eventGetVectorParameterNames_Parms), Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialParameterCollection);
	UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister()
	{
		return UMaterialParameterCollection::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialParameterCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StateId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScalarParameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScalarParameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ScalarParameters;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorParameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorParameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VectorParameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialParameterCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMaterialParameterCollection_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterDefaultValue, "GetScalarParameterDefaultValue" }, // 877832286
		{ &Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterNames, "GetScalarParameterNames" }, // 2263295039
		{ &Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterDefaultValue, "GetVectorParameterDefaultValue" }, // 4168671246
		{ &Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterNames, "GetVectorParameterNames" }, // 3620356436
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialParameterCollection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * Asset class that contains a list of parameter names and their default values. \n * Any number of materials can reference these parameters and get new values when the parameter values are changed.\n */" },
		{ "HideCategories", "object" },
		{ "IncludePath", "Materials/MaterialParameterCollection.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialParameterCollection.h" },
		{ "ToolTip", "Asset class that contains a list of parameter names and their default values.\nAny number of materials can reference these parameters and get new values when the parameter values are changed." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialParameterCollection_Statics::NewProp_StateId_MetaData[] = {
		{ "Comment", "/** Used by materials using this collection to know when to recompile. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialParameterCollection.h" },
		{ "ToolTip", "Used by materials using this collection to know when to recompile." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialParameterCollection_Statics::NewProp_StateId = { "StateId", nullptr, (EPropertyFlags)0x0010000000200000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialParameterCollection, StateId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UMaterialParameterCollection_Statics::NewProp_StateId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialParameterCollection_Statics::NewProp_StateId_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialParameterCollection_Statics::NewProp_ScalarParameters_Inner = { "ScalarParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCollectionScalarParameter, METADATA_PARAMS(nullptr, 0) }; // 546881895
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialParameterCollection_Statics::NewProp_ScalarParameters_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialParameterCollection.h" },
		{ "TitleProperty", "ParameterName" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialParameterCollection_Statics::NewProp_ScalarParameters = { "ScalarParameters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialParameterCollection, ScalarParameters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialParameterCollection_Statics::NewProp_ScalarParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialParameterCollection_Statics::NewProp_ScalarParameters_MetaData)) }; // 546881895
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialParameterCollection_Statics::NewProp_VectorParameters_Inner = { "VectorParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCollectionVectorParameter, METADATA_PARAMS(nullptr, 0) }; // 4181461795
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialParameterCollection_Statics::NewProp_VectorParameters_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialParameterCollection.h" },
		{ "TitleProperty", "ParameterName" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialParameterCollection_Statics::NewProp_VectorParameters = { "VectorParameters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialParameterCollection, VectorParameters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialParameterCollection_Statics::NewProp_VectorParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialParameterCollection_Statics::NewProp_VectorParameters_MetaData)) }; // 4181461795
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialParameterCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialParameterCollection_Statics::NewProp_StateId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialParameterCollection_Statics::NewProp_ScalarParameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialParameterCollection_Statics::NewProp_ScalarParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialParameterCollection_Statics::NewProp_VectorParameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialParameterCollection_Statics::NewProp_VectorParameters,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialParameterCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialParameterCollection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialParameterCollection_Statics::ClassParams = {
		&UMaterialParameterCollection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMaterialParameterCollection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialParameterCollection_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialParameterCollection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialParameterCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialParameterCollection()
	{
		if (!Z_Registration_Info_UClass_UMaterialParameterCollection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialParameterCollection.OuterSingleton, Z_Construct_UClass_UMaterialParameterCollection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialParameterCollection.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialParameterCollection>()
	{
		return UMaterialParameterCollection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialParameterCollection);
	UMaterialParameterCollection::~UMaterialParameterCollection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_Statics::ScriptStructInfo[] = {
		{ FCollectionParameterBase::StaticStruct, Z_Construct_UScriptStruct_FCollectionParameterBase_Statics::NewStructOps, TEXT("CollectionParameterBase"), &Z_Registration_Info_UScriptStruct_CollectionParameterBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollectionParameterBase), 3679483880U) },
		{ FCollectionScalarParameter::StaticStruct, Z_Construct_UScriptStruct_FCollectionScalarParameter_Statics::NewStructOps, TEXT("CollectionScalarParameter"), &Z_Registration_Info_UScriptStruct_CollectionScalarParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollectionScalarParameter), 546881895U) },
		{ FCollectionVectorParameter::StaticStruct, Z_Construct_UScriptStruct_FCollectionVectorParameter_Statics::NewStructOps, TEXT("CollectionVectorParameter"), &Z_Registration_Info_UScriptStruct_CollectionVectorParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollectionVectorParameter), 4181461795U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialParameterCollection, UMaterialParameterCollection::StaticClass, TEXT("UMaterialParameterCollection"), &Z_Registration_Info_UClass_UMaterialParameterCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialParameterCollection), 2608025229U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_688087839(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
