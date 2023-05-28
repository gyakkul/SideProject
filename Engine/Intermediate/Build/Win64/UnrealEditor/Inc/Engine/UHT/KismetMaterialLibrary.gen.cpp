// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Kismet/KismetMaterialLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKismetMaterialLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UKismetMaterialLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UKismetMaterialLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMIDCreationFlags();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMIDCreationFlags;
	static UEnum* EMIDCreationFlags_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMIDCreationFlags.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMIDCreationFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMIDCreationFlags, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMIDCreationFlags"));
		}
		return Z_Registration_Info_UEnum_EMIDCreationFlags.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMIDCreationFlags>()
	{
		return EMIDCreationFlags_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EMIDCreationFlags_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EMIDCreationFlags_Statics::Enumerators[] = {
		{ "EMIDCreationFlags::None", (int64)EMIDCreationFlags::None },
		{ "EMIDCreationFlags::Transient", (int64)EMIDCreationFlags::Transient },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EMIDCreationFlags_Statics::Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetMaterialLibrary.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EMIDCreationFlags::None" },
		{ "Transient.DisplayName", "Transient" },
		{ "Transient.Name", "EMIDCreationFlags::Transient" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMIDCreationFlags_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EMIDCreationFlags",
		"EMIDCreationFlags",
		Z_Construct_UEnum_Engine_EMIDCreationFlags_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMIDCreationFlags_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EMIDCreationFlags_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMIDCreationFlags_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EMIDCreationFlags()
	{
		if (!Z_Registration_Info_UEnum_EMIDCreationFlags.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMIDCreationFlags.InnerSingleton, Z_Construct_UEnum_Engine_EMIDCreationFlags_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMIDCreationFlags.InnerSingleton;
	}
	DEFINE_FUNCTION(UKismetMaterialLibrary::execCreateDynamicMaterialInstance)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UMaterialInterface,Z_Param_Parent);
		P_GET_PROPERTY(FNameProperty,Z_Param_OptionalName);
		P_GET_ENUM(EMIDCreationFlags,Z_Param_CreationFlags);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInstanceDynamic**)Z_Param__Result=UKismetMaterialLibrary::CreateDynamicMaterialInstance(Z_Param_WorldContextObject,Z_Param_Parent,Z_Param_OptionalName,EMIDCreationFlags(Z_Param_CreationFlags));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetMaterialLibrary::execGetVectorParameterValue)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UMaterialParameterCollection,Z_Param_Collection);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=UKismetMaterialLibrary::GetVectorParameterValue(Z_Param_WorldContextObject,Z_Param_Collection,Z_Param_ParameterName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetMaterialLibrary::execGetScalarParameterValue)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UMaterialParameterCollection,Z_Param_Collection);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UKismetMaterialLibrary::GetScalarParameterValue(Z_Param_WorldContextObject,Z_Param_Collection,Z_Param_ParameterName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetMaterialLibrary::execSetVectorParameterValue)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UMaterialParameterCollection,Z_Param_Collection);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_ParameterValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UKismetMaterialLibrary::SetVectorParameterValue(Z_Param_WorldContextObject,Z_Param_Collection,Z_Param_ParameterName,Z_Param_Out_ParameterValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetMaterialLibrary::execSetScalarParameterValue)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UMaterialParameterCollection,Z_Param_Collection);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ParameterValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UKismetMaterialLibrary::SetScalarParameterValue(Z_Param_WorldContextObject,Z_Param_Collection,Z_Param_ParameterName,Z_Param_ParameterValue);
		P_NATIVE_END;
	}
	void UKismetMaterialLibrary::StaticRegisterNativesUKismetMaterialLibrary()
	{
		UClass* Class = UKismetMaterialLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateDynamicMaterialInstance", &UKismetMaterialLibrary::execCreateDynamicMaterialInstance },
			{ "GetScalarParameterValue", &UKismetMaterialLibrary::execGetScalarParameterValue },
			{ "GetVectorParameterValue", &UKismetMaterialLibrary::execGetVectorParameterValue },
			{ "SetScalarParameterValue", &UKismetMaterialLibrary::execSetScalarParameterValue },
			{ "SetVectorParameterValue", &UKismetMaterialLibrary::execSetVectorParameterValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKismetMaterialLibrary_CreateDynamicMaterialInstance_Statics
	{
		struct KismetMaterialLibrary_eventCreateDynamicMaterialInstance_Parms
		{
			UObject* WorldContextObject;
			UMaterialInterface* Parent;
			FName OptionalName;
			EMIDCreationFlags CreationFlags;
			UMaterialInstanceDynamic* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Parent;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OptionalName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CreationFlags_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CreationFlags;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetMaterialLibrary_CreateDynamicMaterialInstance_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetMaterialLibrary_eventCreateDynamicMaterialInstance_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetMaterialLibrary_CreateDynamicMaterialInstance_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetMaterialLibrary_eventCreateDynamicMaterialInstance_Parms, Parent), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetMaterialLibrary_CreateDynamicMaterialInstance_Statics::NewProp_OptionalName = { "OptionalName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetMaterialLibrary_eventCreateDynamicMaterialInstance_Parms, OptionalName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetMaterialLibrary_CreateDynamicMaterialInstance_Statics::NewProp_CreationFlags_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKismetMaterialLibrary_CreateDynamicMaterialInstance_Statics::NewProp_CreationFlags = { "CreationFlags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetMaterialLibrary_eventCreateDynamicMaterialInstance_Parms, CreationFlags), Z_Construct_UEnum_Engine_EMIDCreationFlags, METADATA_PARAMS(nullptr, 0) }; // 447891803
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetMaterialLibrary_CreateDynamicMaterialInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetMaterialLibrary_eventCreateDynamicMaterialInstance_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetMaterialLibrary_CreateDynamicMaterialInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetMaterialLibrary_CreateDynamicMaterialInstance_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetMaterialLibrary_CreateDynamicMaterialInstance_Statics::NewProp_Parent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetMaterialLibrary_CreateDynamicMaterialInstance_Statics::NewProp_OptionalName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetMaterialLibrary_CreateDynamicMaterialInstance_Statics::NewProp_CreationFlags_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetMaterialLibrary_CreateDynamicMaterialInstance_Statics::NewProp_CreationFlags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetMaterialLibrary_CreateDynamicMaterialInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetMaterialLibrary_CreateDynamicMaterialInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Creates a Dynamic Material Instance which you can modify during gameplay. */" },
		{ "CPP_Default_CreationFlags", "None" },
		{ "CPP_Default_OptionalName", "None" },
		{ "MaterialParameterCollectionFunction", "true" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetMaterialLibrary.h" },
		{ "ToolTip", "Creates a Dynamic Material Instance which you can modify during gameplay." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetMaterialLibrary_CreateDynamicMaterialInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetMaterialLibrary, nullptr, "CreateDynamicMaterialInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetMaterialLibrary_CreateDynamicMaterialInstance_Statics::KismetMaterialLibrary_eventCreateDynamicMaterialInstance_Parms), Z_Construct_UFunction_UKismetMaterialLibrary_CreateDynamicMaterialInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetMaterialLibrary_CreateDynamicMaterialInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetMaterialLibrary_CreateDynamicMaterialInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetMaterialLibrary_CreateDynamicMaterialInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetMaterialLibrary_CreateDynamicMaterialInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetMaterialLibrary_CreateDynamicMaterialInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetMaterialLibrary_GetScalarParameterValue_Statics
	{
		struct KismetMaterialLibrary_eventGetScalarParameterValue_Parms
		{
			UObject* WorldContextObject;
			UMaterialParameterCollection* Collection;
			FName ParameterName;
			float ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Collection;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetMaterialLibrary_GetScalarParameterValue_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetMaterialLibrary_eventGetScalarParameterValue_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetMaterialLibrary_GetScalarParameterValue_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetMaterialLibrary_eventGetScalarParameterValue_Parms, Collection), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetMaterialLibrary_GetScalarParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetMaterialLibrary_eventGetScalarParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetMaterialLibrary_GetScalarParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetMaterialLibrary_eventGetScalarParameterValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetMaterialLibrary_GetScalarParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetMaterialLibrary_GetScalarParameterValue_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetMaterialLibrary_GetScalarParameterValue_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetMaterialLibrary_GetScalarParameterValue_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetMaterialLibrary_GetScalarParameterValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetMaterialLibrary_GetScalarParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Gets a scalar parameter value from the material collection instance. Logs if ParameterName is invalid. */" },
		{ "Keywords", "GetFloatParameterValue" },
		{ "MaterialParameterCollectionFunction", "true" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetMaterialLibrary.h" },
		{ "ToolTip", "Gets a scalar parameter value from the material collection instance. Logs if ParameterName is invalid." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetMaterialLibrary_GetScalarParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetMaterialLibrary, nullptr, "GetScalarParameterValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetMaterialLibrary_GetScalarParameterValue_Statics::KismetMaterialLibrary_eventGetScalarParameterValue_Parms), Z_Construct_UFunction_UKismetMaterialLibrary_GetScalarParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetMaterialLibrary_GetScalarParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetMaterialLibrary_GetScalarParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetMaterialLibrary_GetScalarParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetMaterialLibrary_GetScalarParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetMaterialLibrary_GetScalarParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetMaterialLibrary_GetVectorParameterValue_Statics
	{
		struct KismetMaterialLibrary_eventGetVectorParameterValue_Parms
		{
			UObject* WorldContextObject;
			UMaterialParameterCollection* Collection;
			FName ParameterName;
			FLinearColor ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Collection;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetMaterialLibrary_GetVectorParameterValue_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetMaterialLibrary_eventGetVectorParameterValue_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetMaterialLibrary_GetVectorParameterValue_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetMaterialLibrary_eventGetVectorParameterValue_Parms, Collection), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetMaterialLibrary_GetVectorParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetMaterialLibrary_eventGetVectorParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetMaterialLibrary_GetVectorParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetMaterialLibrary_eventGetVectorParameterValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetMaterialLibrary_GetVectorParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetMaterialLibrary_GetVectorParameterValue_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetMaterialLibrary_GetVectorParameterValue_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetMaterialLibrary_GetVectorParameterValue_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetMaterialLibrary_GetVectorParameterValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetMaterialLibrary_GetVectorParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Gets a vector parameter value from the material collection instance. Logs if ParameterName is invalid. */" },
		{ "Keywords", "GetColorParameterValue" },
		{ "MaterialParameterCollectionFunction", "true" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetMaterialLibrary.h" },
		{ "ToolTip", "Gets a vector parameter value from the material collection instance. Logs if ParameterName is invalid." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetMaterialLibrary_GetVectorParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetMaterialLibrary, nullptr, "GetVectorParameterValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetMaterialLibrary_GetVectorParameterValue_Statics::KismetMaterialLibrary_eventGetVectorParameterValue_Parms), Z_Construct_UFunction_UKismetMaterialLibrary_GetVectorParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetMaterialLibrary_GetVectorParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetMaterialLibrary_GetVectorParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetMaterialLibrary_GetVectorParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetMaterialLibrary_GetVectorParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetMaterialLibrary_GetVectorParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetMaterialLibrary_SetScalarParameterValue_Statics
	{
		struct KismetMaterialLibrary_eventSetScalarParameterValue_Parms
		{
			UObject* WorldContextObject;
			UMaterialParameterCollection* Collection;
			FName ParameterName;
			float ParameterValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Collection;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ParameterValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetMaterialLibrary_SetScalarParameterValue_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetMaterialLibrary_eventSetScalarParameterValue_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetMaterialLibrary_SetScalarParameterValue_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetMaterialLibrary_eventSetScalarParameterValue_Parms, Collection), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetMaterialLibrary_SetScalarParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetMaterialLibrary_eventSetScalarParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetMaterialLibrary_SetScalarParameterValue_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetMaterialLibrary_eventSetScalarParameterValue_Parms, ParameterValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetMaterialLibrary_SetScalarParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetMaterialLibrary_SetScalarParameterValue_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetMaterialLibrary_SetScalarParameterValue_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetMaterialLibrary_SetScalarParameterValue_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetMaterialLibrary_SetScalarParameterValue_Statics::NewProp_ParameterValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetMaterialLibrary_SetScalarParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Sets a scalar parameter value on the material collection instance. Logs if ParameterName is invalid. */" },
		{ "Keywords", "SetFloatParameterValue" },
		{ "MaterialParameterCollectionFunction", "true" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetMaterialLibrary.h" },
		{ "ToolTip", "Sets a scalar parameter value on the material collection instance. Logs if ParameterName is invalid." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetMaterialLibrary_SetScalarParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetMaterialLibrary, nullptr, "SetScalarParameterValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetMaterialLibrary_SetScalarParameterValue_Statics::KismetMaterialLibrary_eventSetScalarParameterValue_Parms), Z_Construct_UFunction_UKismetMaterialLibrary_SetScalarParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetMaterialLibrary_SetScalarParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetMaterialLibrary_SetScalarParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetMaterialLibrary_SetScalarParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetMaterialLibrary_SetScalarParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetMaterialLibrary_SetScalarParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetMaterialLibrary_SetVectorParameterValue_Statics
	{
		struct KismetMaterialLibrary_eventSetVectorParameterValue_Parms
		{
			UObject* WorldContextObject;
			UMaterialParameterCollection* Collection;
			FName ParameterName;
			FLinearColor ParameterValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Collection;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetMaterialLibrary_SetVectorParameterValue_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetMaterialLibrary_eventSetVectorParameterValue_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetMaterialLibrary_SetVectorParameterValue_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetMaterialLibrary_eventSetVectorParameterValue_Parms, Collection), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetMaterialLibrary_SetVectorParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetMaterialLibrary_eventSetVectorParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetMaterialLibrary_SetVectorParameterValue_Statics::NewProp_ParameterValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetMaterialLibrary_SetVectorParameterValue_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetMaterialLibrary_eventSetVectorParameterValue_Parms, ParameterValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UKismetMaterialLibrary_SetVectorParameterValue_Statics::NewProp_ParameterValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetMaterialLibrary_SetVectorParameterValue_Statics::NewProp_ParameterValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetMaterialLibrary_SetVectorParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetMaterialLibrary_SetVectorParameterValue_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetMaterialLibrary_SetVectorParameterValue_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetMaterialLibrary_SetVectorParameterValue_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetMaterialLibrary_SetVectorParameterValue_Statics::NewProp_ParameterValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetMaterialLibrary_SetVectorParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Sets a vector parameter value on the material collection instance. Logs if ParameterName is invalid. */" },
		{ "Keywords", "SetColorParameterValue" },
		{ "MaterialParameterCollectionFunction", "true" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetMaterialLibrary.h" },
		{ "ToolTip", "Sets a vector parameter value on the material collection instance. Logs if ParameterName is invalid." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetMaterialLibrary_SetVectorParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetMaterialLibrary, nullptr, "SetVectorParameterValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetMaterialLibrary_SetVectorParameterValue_Statics::KismetMaterialLibrary_eventSetVectorParameterValue_Parms), Z_Construct_UFunction_UKismetMaterialLibrary_SetVectorParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetMaterialLibrary_SetVectorParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetMaterialLibrary_SetVectorParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetMaterialLibrary_SetVectorParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetMaterialLibrary_SetVectorParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetMaterialLibrary_SetVectorParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKismetMaterialLibrary);
	UClass* Z_Construct_UClass_UKismetMaterialLibrary_NoRegister()
	{
		return UKismetMaterialLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UKismetMaterialLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKismetMaterialLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKismetMaterialLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKismetMaterialLibrary_CreateDynamicMaterialInstance, "CreateDynamicMaterialInstance" }, // 4141204266
		{ &Z_Construct_UFunction_UKismetMaterialLibrary_GetScalarParameterValue, "GetScalarParameterValue" }, // 1729863538
		{ &Z_Construct_UFunction_UKismetMaterialLibrary_GetVectorParameterValue, "GetVectorParameterValue" }, // 2885686064
		{ &Z_Construct_UFunction_UKismetMaterialLibrary_SetScalarParameterValue, "SetScalarParameterValue" }, // 1622759752
		{ &Z_Construct_UFunction_UKismetMaterialLibrary_SetVectorParameterValue, "SetVectorParameterValue" }, // 132017917
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKismetMaterialLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Kismet/KismetMaterialLibrary.h" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetMaterialLibrary.h" },
		{ "ScriptName", "MaterialLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKismetMaterialLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKismetMaterialLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UKismetMaterialLibrary_Statics::ClassParams = {
		&UKismetMaterialLibrary::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKismetMaterialLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKismetMaterialLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKismetMaterialLibrary()
	{
		if (!Z_Registration_Info_UClass_UKismetMaterialLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKismetMaterialLibrary.OuterSingleton, Z_Construct_UClass_UKismetMaterialLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UKismetMaterialLibrary.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UKismetMaterialLibrary>()
	{
		return UKismetMaterialLibrary::StaticClass();
	}
	UKismetMaterialLibrary::UKismetMaterialLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKismetMaterialLibrary);
	UKismetMaterialLibrary::~UKismetMaterialLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_Statics::EnumInfo[] = {
		{ EMIDCreationFlags_StaticEnum, TEXT("EMIDCreationFlags"), &Z_Registration_Info_UEnum_EMIDCreationFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 447891803U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UKismetMaterialLibrary, UKismetMaterialLibrary::StaticClass, TEXT("UKismetMaterialLibrary"), &Z_Registration_Info_UClass_UKismetMaterialLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKismetMaterialLibrary), 3998626170U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_3927749617(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
