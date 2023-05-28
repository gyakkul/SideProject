// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorValidatorBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorValidatorBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EDataValidationResult();
	DATAVALIDATION_API UClass* Z_Construct_UClass_UEditorValidatorBase();
	DATAVALIDATION_API UClass* Z_Construct_UClass_UEditorValidatorBase_NoRegister();
	DATAVALIDATION_API UEnum* Z_Construct_UEnum_DataValidation_EDataValidationUsecase();
	UPackage* Z_Construct_UPackage__Script_DataValidation();
// End Cross Module References
	DEFINE_FUNCTION(UEditorValidatorBase::execGetValidationResult)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EDataValidationResult*)Z_Param__Result=P_THIS->GetValidationResult();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorValidatorBase::execAssetWarning)
	{
		P_GET_OBJECT(UObject,Z_Param_InAsset);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AssetWarning(Z_Param_InAsset,Z_Param_Out_InMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorValidatorBase::execAssetPasses)
	{
		P_GET_OBJECT(UObject,Z_Param_InAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AssetPasses(Z_Param_InAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorValidatorBase::execAssetFails)
	{
		P_GET_OBJECT(UObject,Z_Param_InAsset);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InMessage);
		P_GET_TARRAY_REF(FText,Z_Param_Out_ValidationErrors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AssetFails(Z_Param_InAsset,Z_Param_Out_InMessage,Z_Param_Out_ValidationErrors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorValidatorBase::execValidateLoadedAsset)
	{
		P_GET_OBJECT(UObject,Z_Param_InAsset);
		P_GET_TARRAY_REF(FText,Z_Param_Out_ValidationErrors);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EDataValidationResult*)Z_Param__Result=P_THIS->ValidateLoadedAsset_Implementation(Z_Param_InAsset,Z_Param_Out_ValidationErrors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorValidatorBase::execCanValidateAsset)
	{
		P_GET_OBJECT(UObject,Z_Param_InAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanValidateAsset_Implementation(Z_Param_InAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorValidatorBase::execCanValidate)
	{
		P_GET_ENUM(EDataValidationUsecase,Z_Param_InUsecase);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanValidate_Implementation(EDataValidationUsecase(Z_Param_InUsecase));
		P_NATIVE_END;
	}
	struct EditorValidatorBase_eventCanValidate_Parms
	{
		EDataValidationUsecase InUsecase;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		EditorValidatorBase_eventCanValidate_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct EditorValidatorBase_eventCanValidateAsset_Parms
	{
		UObject* InAsset;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		EditorValidatorBase_eventCanValidateAsset_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct EditorValidatorBase_eventValidateLoadedAsset_Parms
	{
		UObject* InAsset;
		TArray<FText> ValidationErrors;
		EDataValidationResult ReturnValue;

		/** Constructor, initializes return property only **/
		EditorValidatorBase_eventValidateLoadedAsset_Parms()
			: ReturnValue((EDataValidationResult)0)
		{
		}
	};
	static FName NAME_UEditorValidatorBase_CanValidate = FName(TEXT("CanValidate"));
	bool UEditorValidatorBase::CanValidate(const EDataValidationUsecase InUsecase) const
	{
		EditorValidatorBase_eventCanValidate_Parms Parms;
		Parms.InUsecase=InUsecase;
		const_cast<UEditorValidatorBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UEditorValidatorBase_CanValidate),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UEditorValidatorBase_CanValidateAsset = FName(TEXT("CanValidateAsset"));
	bool UEditorValidatorBase::CanValidateAsset(UObject* InAsset) const
	{
		EditorValidatorBase_eventCanValidateAsset_Parms Parms;
		Parms.InAsset=InAsset;
		const_cast<UEditorValidatorBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UEditorValidatorBase_CanValidateAsset),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UEditorValidatorBase_ValidateLoadedAsset = FName(TEXT("ValidateLoadedAsset"));
	EDataValidationResult UEditorValidatorBase::ValidateLoadedAsset(UObject* InAsset, TArray<FText>& ValidationErrors)
	{
		EditorValidatorBase_eventValidateLoadedAsset_Parms Parms;
		Parms.InAsset=InAsset;
		Parms.ValidationErrors=ValidationErrors;
		ProcessEvent(FindFunctionChecked(NAME_UEditorValidatorBase_ValidateLoadedAsset),&Parms);
		ValidationErrors=Parms.ValidationErrors;
		return Parms.ReturnValue;
	}
	void UEditorValidatorBase::StaticRegisterNativesUEditorValidatorBase()
	{
		UClass* Class = UEditorValidatorBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AssetFails", &UEditorValidatorBase::execAssetFails },
			{ "AssetPasses", &UEditorValidatorBase::execAssetPasses },
			{ "AssetWarning", &UEditorValidatorBase::execAssetWarning },
			{ "CanValidate", &UEditorValidatorBase::execCanValidate },
			{ "CanValidateAsset", &UEditorValidatorBase::execCanValidateAsset },
			{ "GetValidationResult", &UEditorValidatorBase::execGetValidationResult },
			{ "ValidateLoadedAsset", &UEditorValidatorBase::execValidateLoadedAsset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEditorValidatorBase_AssetFails_Statics
	{
		struct EditorValidatorBase_eventAssetFails_Parms
		{
			UObject* InAsset;
			FText InMessage;
			TArray<FText> ValidationErrors;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMessage_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_InMessage;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ValidationErrors_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ValidationErrors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorValidatorBase_AssetFails_Statics::NewProp_InAsset = { "InAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorValidatorBase_eventAssetFails_Parms, InAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorValidatorBase_AssetFails_Statics::NewProp_InMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UEditorValidatorBase_AssetFails_Statics::NewProp_InMessage = { "InMessage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorValidatorBase_eventAssetFails_Parms, InMessage), METADATA_PARAMS(Z_Construct_UFunction_UEditorValidatorBase_AssetFails_Statics::NewProp_InMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorValidatorBase_AssetFails_Statics::NewProp_InMessage_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UEditorValidatorBase_AssetFails_Statics::NewProp_ValidationErrors_Inner = { "ValidationErrors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorValidatorBase_AssetFails_Statics::NewProp_ValidationErrors = { "ValidationErrors", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorValidatorBase_eventAssetFails_Parms, ValidationErrors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorValidatorBase_AssetFails_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorValidatorBase_AssetFails_Statics::NewProp_InAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorValidatorBase_AssetFails_Statics::NewProp_InMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorValidatorBase_AssetFails_Statics::NewProp_ValidationErrors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorValidatorBase_AssetFails_Statics::NewProp_ValidationErrors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorValidatorBase_AssetFails_Statics::Function_MetaDataParams[] = {
		{ "Category", "Asset Validation" },
		{ "ModuleRelativePath", "Public/EditorValidatorBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorValidatorBase_AssetFails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorValidatorBase, nullptr, "AssetFails", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorValidatorBase_AssetFails_Statics::EditorValidatorBase_eventAssetFails_Parms), Z_Construct_UFunction_UEditorValidatorBase_AssetFails_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorValidatorBase_AssetFails_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorValidatorBase_AssetFails_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorValidatorBase_AssetFails_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorValidatorBase_AssetFails()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorValidatorBase_AssetFails_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorValidatorBase_AssetPasses_Statics
	{
		struct EditorValidatorBase_eventAssetPasses_Parms
		{
			UObject* InAsset;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorValidatorBase_AssetPasses_Statics::NewProp_InAsset = { "InAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorValidatorBase_eventAssetPasses_Parms, InAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorValidatorBase_AssetPasses_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorValidatorBase_AssetPasses_Statics::NewProp_InAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorValidatorBase_AssetPasses_Statics::Function_MetaDataParams[] = {
		{ "Category", "Asset Validation" },
		{ "ModuleRelativePath", "Public/EditorValidatorBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorValidatorBase_AssetPasses_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorValidatorBase, nullptr, "AssetPasses", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorValidatorBase_AssetPasses_Statics::EditorValidatorBase_eventAssetPasses_Parms), Z_Construct_UFunction_UEditorValidatorBase_AssetPasses_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorValidatorBase_AssetPasses_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorValidatorBase_AssetPasses_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorValidatorBase_AssetPasses_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorValidatorBase_AssetPasses()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorValidatorBase_AssetPasses_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorValidatorBase_AssetWarning_Statics
	{
		struct EditorValidatorBase_eventAssetWarning_Parms
		{
			UObject* InAsset;
			FText InMessage;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMessage_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_InMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorValidatorBase_AssetWarning_Statics::NewProp_InAsset = { "InAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorValidatorBase_eventAssetWarning_Parms, InAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorValidatorBase_AssetWarning_Statics::NewProp_InMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UEditorValidatorBase_AssetWarning_Statics::NewProp_InMessage = { "InMessage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorValidatorBase_eventAssetWarning_Parms, InMessage), METADATA_PARAMS(Z_Construct_UFunction_UEditorValidatorBase_AssetWarning_Statics::NewProp_InMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorValidatorBase_AssetWarning_Statics::NewProp_InMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorValidatorBase_AssetWarning_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorValidatorBase_AssetWarning_Statics::NewProp_InAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorValidatorBase_AssetWarning_Statics::NewProp_InMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorValidatorBase_AssetWarning_Statics::Function_MetaDataParams[] = {
		{ "Category", "Asset Validation" },
		{ "ModuleRelativePath", "Public/EditorValidatorBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorValidatorBase_AssetWarning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorValidatorBase, nullptr, "AssetWarning", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorValidatorBase_AssetWarning_Statics::EditorValidatorBase_eventAssetWarning_Parms), Z_Construct_UFunction_UEditorValidatorBase_AssetWarning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorValidatorBase_AssetWarning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorValidatorBase_AssetWarning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorValidatorBase_AssetWarning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorValidatorBase_AssetWarning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorValidatorBase_AssetWarning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorValidatorBase_CanValidate_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_InUsecase_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InUsecase_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InUsecase;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEditorValidatorBase_CanValidate_Statics::NewProp_InUsecase_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorValidatorBase_CanValidate_Statics::NewProp_InUsecase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEditorValidatorBase_CanValidate_Statics::NewProp_InUsecase = { "InUsecase", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorValidatorBase_eventCanValidate_Parms, InUsecase), Z_Construct_UEnum_DataValidation_EDataValidationUsecase, METADATA_PARAMS(Z_Construct_UFunction_UEditorValidatorBase_CanValidate_Statics::NewProp_InUsecase_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorValidatorBase_CanValidate_Statics::NewProp_InUsecase_MetaData)) }; // 200140848
	void Z_Construct_UFunction_UEditorValidatorBase_CanValidate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorValidatorBase_eventCanValidate_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorValidatorBase_CanValidate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorValidatorBase_eventCanValidate_Parms), &Z_Construct_UFunction_UEditorValidatorBase_CanValidate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorValidatorBase_CanValidate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorValidatorBase_CanValidate_Statics::NewProp_InUsecase_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorValidatorBase_CanValidate_Statics::NewProp_InUsecase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorValidatorBase_CanValidate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorValidatorBase_CanValidate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Asset Validation" },
		{ "Comment", "/** Override this to determine whether or not you can use this validator given this usecase */" },
		{ "ModuleRelativePath", "Public/EditorValidatorBase.h" },
		{ "ToolTip", "Override this to determine whether or not you can use this validator given this usecase" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorValidatorBase_CanValidate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorValidatorBase, nullptr, "CanValidate", nullptr, nullptr, sizeof(EditorValidatorBase_eventCanValidate_Parms), Z_Construct_UFunction_UEditorValidatorBase_CanValidate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorValidatorBase_CanValidate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorValidatorBase_CanValidate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorValidatorBase_CanValidate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorValidatorBase_CanValidate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorValidatorBase_CanValidate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorValidatorBase_CanValidateAsset_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAsset;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorValidatorBase_CanValidateAsset_Statics::NewProp_InAsset = { "InAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorValidatorBase_eventCanValidateAsset_Parms, InAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorValidatorBase_CanValidateAsset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorValidatorBase_eventCanValidateAsset_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorValidatorBase_CanValidateAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorValidatorBase_eventCanValidateAsset_Parms), &Z_Construct_UFunction_UEditorValidatorBase_CanValidateAsset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorValidatorBase_CanValidateAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorValidatorBase_CanValidateAsset_Statics::NewProp_InAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorValidatorBase_CanValidateAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorValidatorBase_CanValidateAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Asset Validation" },
		{ "Comment", "/** Override this to determine whether or not you can validate a given asset with this validator */" },
		{ "ModuleRelativePath", "Public/EditorValidatorBase.h" },
		{ "ToolTip", "Override this to determine whether or not you can validate a given asset with this validator" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorValidatorBase_CanValidateAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorValidatorBase, nullptr, "CanValidateAsset", nullptr, nullptr, sizeof(EditorValidatorBase_eventCanValidateAsset_Parms), Z_Construct_UFunction_UEditorValidatorBase_CanValidateAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorValidatorBase_CanValidateAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorValidatorBase_CanValidateAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorValidatorBase_CanValidateAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorValidatorBase_CanValidateAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorValidatorBase_CanValidateAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorValidatorBase_GetValidationResult_Statics
	{
		struct EditorValidatorBase_eventGetValidationResult_Parms
		{
			EDataValidationResult ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEditorValidatorBase_GetValidationResult_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEditorValidatorBase_GetValidationResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorValidatorBase_eventGetValidationResult_Parms, ReturnValue), Z_Construct_UEnum_CoreUObject_EDataValidationResult, METADATA_PARAMS(nullptr, 0) }; // 2608798874
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorValidatorBase_GetValidationResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorValidatorBase_GetValidationResult_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorValidatorBase_GetValidationResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorValidatorBase_GetValidationResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "Asset Validation" },
		{ "ModuleRelativePath", "Public/EditorValidatorBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorValidatorBase_GetValidationResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorValidatorBase, nullptr, "GetValidationResult", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorValidatorBase_GetValidationResult_Statics::EditorValidatorBase_eventGetValidationResult_Parms), Z_Construct_UFunction_UEditorValidatorBase_GetValidationResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorValidatorBase_GetValidationResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorValidatorBase_GetValidationResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorValidatorBase_GetValidationResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorValidatorBase_GetValidationResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorValidatorBase_GetValidationResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorValidatorBase_ValidateLoadedAsset_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAsset;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ValidationErrors_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ValidationErrors;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorValidatorBase_ValidateLoadedAsset_Statics::NewProp_InAsset = { "InAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorValidatorBase_eventValidateLoadedAsset_Parms, InAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UEditorValidatorBase_ValidateLoadedAsset_Statics::NewProp_ValidationErrors_Inner = { "ValidationErrors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorValidatorBase_ValidateLoadedAsset_Statics::NewProp_ValidationErrors = { "ValidationErrors", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorValidatorBase_eventValidateLoadedAsset_Parms, ValidationErrors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEditorValidatorBase_ValidateLoadedAsset_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEditorValidatorBase_ValidateLoadedAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorValidatorBase_eventValidateLoadedAsset_Parms, ReturnValue), Z_Construct_UEnum_CoreUObject_EDataValidationResult, METADATA_PARAMS(nullptr, 0) }; // 2608798874
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorValidatorBase_ValidateLoadedAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorValidatorBase_ValidateLoadedAsset_Statics::NewProp_InAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorValidatorBase_ValidateLoadedAsset_Statics::NewProp_ValidationErrors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorValidatorBase_ValidateLoadedAsset_Statics::NewProp_ValidationErrors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorValidatorBase_ValidateLoadedAsset_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorValidatorBase_ValidateLoadedAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorValidatorBase_ValidateLoadedAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Asset Validation" },
		{ "ModuleRelativePath", "Public/EditorValidatorBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorValidatorBase_ValidateLoadedAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorValidatorBase, nullptr, "ValidateLoadedAsset", nullptr, nullptr, sizeof(EditorValidatorBase_eventValidateLoadedAsset_Parms), Z_Construct_UFunction_UEditorValidatorBase_ValidateLoadedAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorValidatorBase_ValidateLoadedAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorValidatorBase_ValidateLoadedAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorValidatorBase_ValidateLoadedAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorValidatorBase_ValidateLoadedAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorValidatorBase_ValidateLoadedAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorValidatorBase);
	UClass* Z_Construct_UClass_UEditorValidatorBase_NoRegister()
	{
		return UEditorValidatorBase::StaticClass();
	}
	struct Z_Construct_UClass_UEditorValidatorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[];
#endif
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorValidatorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DataValidation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEditorValidatorBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEditorValidatorBase_AssetFails, "AssetFails" }, // 179326888
		{ &Z_Construct_UFunction_UEditorValidatorBase_AssetPasses, "AssetPasses" }, // 3887768459
		{ &Z_Construct_UFunction_UEditorValidatorBase_AssetWarning, "AssetWarning" }, // 326207330
		{ &Z_Construct_UFunction_UEditorValidatorBase_CanValidate, "CanValidate" }, // 4066212038
		{ &Z_Construct_UFunction_UEditorValidatorBase_CanValidateAsset, "CanValidateAsset" }, // 137930507
		{ &Z_Construct_UFunction_UEditorValidatorBase_GetValidationResult, "GetValidationResult" }, // 1821918696
		{ &Z_Construct_UFunction_UEditorValidatorBase_ValidateLoadedAsset, "ValidateLoadedAsset" }, // 606917732
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorValidatorBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* The EditorValidatorBase is a class which verifies that an asset meets a specific ruleset.\n* It should be used when checking engine-level classes, as UObject::IsDataValid requires\n* overriding the base class. You can create project-specific version of the validator base,\n* with custom logging and enabled logic.\n*\n* C++ and Blueprint validators will be gathered on editor start, while python validators need\n* to register themselves\n*/" },
		{ "IncludePath", "EditorValidatorBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EditorValidatorBase.h" },
		{ "ShowWorldContextPin", "" },
		{ "ToolTip", "* The EditorValidatorBase is a class which verifies that an asset meets a specific ruleset.\n* It should be used when checking engine-level classes, as UObject::IsDataValid requires\n* overriding the base class. You can create project-specific version of the validator base,\n* with custom logging and enabled logic.\n*\n* C++ and Blueprint validators will be gathered on editor start, while python validators need\n* to register themselves" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorValidatorBase_Statics::NewProp_bIsEnabled_MetaData[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Asset Validation" },
		{ "ModuleRelativePath", "Public/EditorValidatorBase.h" },
	};
#endif
	void Z_Construct_UClass_UEditorValidatorBase_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((UEditorValidatorBase*)Obj)->bIsEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorValidatorBase_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEditorValidatorBase), &Z_Construct_UClass_UEditorValidatorBase_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorValidatorBase_Statics::NewProp_bIsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorValidatorBase_Statics::NewProp_bIsEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorValidatorBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorValidatorBase_Statics::NewProp_bIsEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorValidatorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorValidatorBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorValidatorBase_Statics::ClassParams = {
		&UEditorValidatorBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEditorValidatorBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditorValidatorBase_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorValidatorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorValidatorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorValidatorBase()
	{
		if (!Z_Registration_Info_UClass_UEditorValidatorBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorValidatorBase.OuterSingleton, Z_Construct_UClass_UEditorValidatorBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorValidatorBase.OuterSingleton;
	}
	template<> DATAVALIDATION_API UClass* StaticClass<UEditorValidatorBase>()
	{
		return UEditorValidatorBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorValidatorBase);
	UEditorValidatorBase::~UEditorValidatorBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorValidatorBase, UEditorValidatorBase::StaticClass, TEXT("UEditorValidatorBase"), &Z_Registration_Info_UClass_UEditorValidatorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorValidatorBase), 3975501447U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_2938837328(TEXT("/Script/DataValidation"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
