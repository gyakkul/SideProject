// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimData/AttributeIdentifier.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttributeIdentifier() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAttributeIdentifierExtensions();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAttributeIdentifierExtensions_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationAttributeIdentifier();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimationAttributeIdentifier;
class UScriptStruct* FAnimationAttributeIdentifier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimationAttributeIdentifier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimationAttributeIdentifier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationAttributeIdentifier, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimationAttributeIdentifier"));
	}
	return Z_Registration_Info_UScriptStruct_AnimationAttributeIdentifier.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimationAttributeIdentifier>()
{
	return FAnimationAttributeIdentifier::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimationAttributeIdentifier_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BoneIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScriptStruct_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ScriptStruct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScriptStructPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScriptStructPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationAttributeIdentifier_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Script-friendly structure for identifying an attribute (curve).\n* Wrapping the attribute name, bone name and index, and underlying data type for use within the AnimDataController API. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AttributeIdentifier.h" },
		{ "ToolTip", "Script-friendly structure for identifying an attribute (curve).\nWrapping the attribute name, bone name and index, and underlying data type for use within the AnimDataController API." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimationAttributeIdentifier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationAttributeIdentifier>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationAttributeIdentifier_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "AttributeIdentifier" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AttributeIdentifier.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimationAttributeIdentifier_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationAttributeIdentifier, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationAttributeIdentifier_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationAttributeIdentifier_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationAttributeIdentifier_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "AttributeIdentifier" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AttributeIdentifier.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimationAttributeIdentifier_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationAttributeIdentifier, BoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationAttributeIdentifier_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationAttributeIdentifier_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationAttributeIdentifier_Statics::NewProp_BoneIndex_MetaData[] = {
		{ "Category", "AttributeIdentifier" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AttributeIdentifier.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimationAttributeIdentifier_Statics::NewProp_BoneIndex = { "BoneIndex", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationAttributeIdentifier, BoneIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationAttributeIdentifier_Statics::NewProp_BoneIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationAttributeIdentifier_Statics::NewProp_BoneIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationAttributeIdentifier_Statics::NewProp_ScriptStruct_MetaData[] = {
		{ "Category", "AttributeIdentifier" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AttributeIdentifier.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAnimationAttributeIdentifier_Statics::NewProp_ScriptStruct = { "ScriptStruct", nullptr, (EPropertyFlags)0x0024080000002014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationAttributeIdentifier, ScriptStruct), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationAttributeIdentifier_Statics::NewProp_ScriptStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationAttributeIdentifier_Statics::NewProp_ScriptStruct_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationAttributeIdentifier_Statics::NewProp_ScriptStructPath_MetaData[] = {
		{ "Category", "AttributeIdentifier" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AttributeIdentifier.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimationAttributeIdentifier_Statics::NewProp_ScriptStructPath = { "ScriptStructPath", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationAttributeIdentifier, ScriptStructPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationAttributeIdentifier_Statics::NewProp_ScriptStructPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationAttributeIdentifier_Statics::NewProp_ScriptStructPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimationAttributeIdentifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationAttributeIdentifier_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationAttributeIdentifier_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationAttributeIdentifier_Statics::NewProp_BoneIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationAttributeIdentifier_Statics::NewProp_ScriptStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationAttributeIdentifier_Statics::NewProp_ScriptStructPath,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimationAttributeIdentifier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimationAttributeIdentifier",
		sizeof(FAnimationAttributeIdentifier),
		alignof(FAnimationAttributeIdentifier),
		Z_Construct_UScriptStruct_FAnimationAttributeIdentifier_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationAttributeIdentifier_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationAttributeIdentifier_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationAttributeIdentifier_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimationAttributeIdentifier()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimationAttributeIdentifier.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimationAttributeIdentifier.InnerSingleton, Z_Construct_UScriptStruct_FAnimationAttributeIdentifier_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimationAttributeIdentifier.InnerSingleton;
	}
	DEFINE_FUNCTION(UAnimationAttributeIdentifierExtensions::execIsValid)
	{
		P_GET_STRUCT_REF(FAnimationAttributeIdentifier,Z_Param_Out_Identifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAnimationAttributeIdentifierExtensions::IsValid(Z_Param_Out_Identifier);
		P_NATIVE_END;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(UAnimationAttributeIdentifierExtensions::execCreateAttributeIdentifier)
	{
		P_GET_OBJECT(UAnimationAsset,Z_Param_AnimationAsset);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_OBJECT(UScriptStruct,Z_Param_AttributeType);
		P_GET_UBOOL(Z_Param_bValidateExistsOnAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAnimationAttributeIdentifier*)Z_Param__Result=UAnimationAttributeIdentifierExtensions::CreateAttributeIdentifier(Z_Param_AnimationAsset,Z_Param_AttributeName,Z_Param_BoneName,Z_Param_AttributeType,Z_Param_bValidateExistsOnAsset);
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void UAnimationAttributeIdentifierExtensions::StaticRegisterNativesUAnimationAttributeIdentifierExtensions()
	{
		UClass* Class = UAnimationAttributeIdentifierExtensions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
#if WITH_EDITOR
			{ "CreateAttributeIdentifier", &UAnimationAttributeIdentifierExtensions::execCreateAttributeIdentifier },
#endif // WITH_EDITOR
			{ "IsValid", &UAnimationAttributeIdentifierExtensions::execIsValid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAnimationAttributeIdentifierExtensions_CreateAttributeIdentifier_Statics
	{
		struct AnimationAttributeIdentifierExtensions_eventCreateAttributeIdentifier_Parms
		{
			UAnimationAsset* AnimationAsset;
			FName AttributeName;
			FName BoneName;
			UScriptStruct* AttributeType;
			bool bValidateExistsOnAsset;
			FAnimationAttributeIdentifier ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeType;
		static void NewProp_bValidateExistsOnAsset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValidateExistsOnAsset;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationAttributeIdentifierExtensions_CreateAttributeIdentifier_Statics::NewProp_AnimationAsset = { "AnimationAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationAttributeIdentifierExtensions_eventCreateAttributeIdentifier_Parms, AnimationAsset), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationAttributeIdentifierExtensions_CreateAttributeIdentifier_Statics::NewProp_AttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationAttributeIdentifierExtensions_CreateAttributeIdentifier_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationAttributeIdentifierExtensions_eventCreateAttributeIdentifier_Parms, AttributeName), METADATA_PARAMS(Z_Construct_UFunction_UAnimationAttributeIdentifierExtensions_CreateAttributeIdentifier_Statics::NewProp_AttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationAttributeIdentifierExtensions_CreateAttributeIdentifier_Statics::NewProp_AttributeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationAttributeIdentifierExtensions_CreateAttributeIdentifier_Statics::NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationAttributeIdentifierExtensions_CreateAttributeIdentifier_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationAttributeIdentifierExtensions_eventCreateAttributeIdentifier_Parms, BoneName), METADATA_PARAMS(Z_Construct_UFunction_UAnimationAttributeIdentifierExtensions_CreateAttributeIdentifier_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationAttributeIdentifierExtensions_CreateAttributeIdentifier_Statics::NewProp_BoneName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationAttributeIdentifierExtensions_CreateAttributeIdentifier_Statics::NewProp_AttributeType = { "AttributeType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationAttributeIdentifierExtensions_eventCreateAttributeIdentifier_Parms, AttributeType), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimationAttributeIdentifierExtensions_CreateAttributeIdentifier_Statics::NewProp_bValidateExistsOnAsset_SetBit(void* Obj)
	{
		((AnimationAttributeIdentifierExtensions_eventCreateAttributeIdentifier_Parms*)Obj)->bValidateExistsOnAsset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationAttributeIdentifierExtensions_CreateAttributeIdentifier_Statics::NewProp_bValidateExistsOnAsset = { "bValidateExistsOnAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimationAttributeIdentifierExtensions_eventCreateAttributeIdentifier_Parms), &Z_Construct_UFunction_UAnimationAttributeIdentifierExtensions_CreateAttributeIdentifier_Statics::NewProp_bValidateExistsOnAsset_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationAttributeIdentifierExtensions_CreateAttributeIdentifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationAttributeIdentifierExtensions_eventCreateAttributeIdentifier_Parms, ReturnValue), Z_Construct_UScriptStruct_FAnimationAttributeIdentifier, METADATA_PARAMS(nullptr, 0) }; // 197982779
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationAttributeIdentifierExtensions_CreateAttributeIdentifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationAttributeIdentifierExtensions_CreateAttributeIdentifier_Statics::NewProp_AnimationAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationAttributeIdentifierExtensions_CreateAttributeIdentifier_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationAttributeIdentifierExtensions_CreateAttributeIdentifier_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationAttributeIdentifierExtensions_CreateAttributeIdentifier_Statics::NewProp_AttributeType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationAttributeIdentifierExtensions_CreateAttributeIdentifier_Statics::NewProp_bValidateExistsOnAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationAttributeIdentifierExtensions_CreateAttributeIdentifier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationAttributeIdentifierExtensions_CreateAttributeIdentifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "Comment", "/**\n\x09* Constructs a valid FAnimationAttributeIdentifier instance. Ensuring that the underlying BoneName exists on the Skeleton for the provided AnimationAsset.\n\x09*\n\x09* @param\x09""AnimationAsset\x09\x09\x09""Animation asset to retrieve Skeleton from\n\x09* @param\x09""AttributeName\x09\x09\x09Name of the attribute \n\x09* @param\x09""BoneName\x09\x09\x09\x09Name of the bone this attribute should be attributed to\n\x09* @param\x09""AttributeType\x09\x09\x09Type of the underlying data (to-be) stored by this attribute\n\x09* @param\x09""bValidateExistsOnAsset\x09Whether or not the attribute should exist on the AnimationAsset. False by default.\n\x09*\n\x09* @return\x09Valid FAnimationCurveIdentifier if the operation was successful\n\x09*/" },
		{ "CPP_Default_bValidateExistsOnAsset", "false" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AttributeIdentifier.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Constructs a valid FAnimationAttributeIdentifier instance. Ensuring that the underlying BoneName exists on the Skeleton for the provided AnimationAsset.\n\n@param        AnimationAsset                  Animation asset to retrieve Skeleton from\n@param        AttributeName                   Name of the attribute\n@param        BoneName                                Name of the bone this attribute should be attributed to\n@param        AttributeType                   Type of the underlying data (to-be) stored by this attribute\n@param        bValidateExistsOnAsset  Whether or not the attribute should exist on the AnimationAsset. False by default.\n\n@return       Valid FAnimationCurveIdentifier if the operation was successful" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationAttributeIdentifierExtensions_CreateAttributeIdentifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationAttributeIdentifierExtensions, nullptr, "CreateAttributeIdentifier", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationAttributeIdentifierExtensions_CreateAttributeIdentifier_Statics::AnimationAttributeIdentifierExtensions_eventCreateAttributeIdentifier_Parms), Z_Construct_UFunction_UAnimationAttributeIdentifierExtensions_CreateAttributeIdentifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationAttributeIdentifierExtensions_CreateAttributeIdentifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationAttributeIdentifierExtensions_CreateAttributeIdentifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationAttributeIdentifierExtensions_CreateAttributeIdentifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationAttributeIdentifierExtensions_CreateAttributeIdentifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationAttributeIdentifierExtensions_CreateAttributeIdentifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_UAnimationAttributeIdentifierExtensions_IsValid_Statics
	{
		struct AnimationAttributeIdentifierExtensions_eventIsValid_Parms
		{
			FAnimationAttributeIdentifier Identifier;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationAttributeIdentifierExtensions_IsValid_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationAttributeIdentifierExtensions_eventIsValid_Parms, Identifier), Z_Construct_UScriptStruct_FAnimationAttributeIdentifier, METADATA_PARAMS(nullptr, 0) }; // 197982779
	void Z_Construct_UFunction_UAnimationAttributeIdentifierExtensions_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimationAttributeIdentifierExtensions_eventIsValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationAttributeIdentifierExtensions_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimationAttributeIdentifierExtensions_eventIsValid_Parms), &Z_Construct_UFunction_UAnimationAttributeIdentifierExtensions_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationAttributeIdentifierExtensions_IsValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationAttributeIdentifierExtensions_IsValid_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationAttributeIdentifierExtensions_IsValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationAttributeIdentifierExtensions_IsValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attribute" },
		{ "Comment", "/**\n\x09* @return\x09Whether or not the Attribute Identifier is valid\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AttributeIdentifier.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "@return       Whether or not the Attribute Identifier is valid" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationAttributeIdentifierExtensions_IsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationAttributeIdentifierExtensions, nullptr, "IsValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationAttributeIdentifierExtensions_IsValid_Statics::AnimationAttributeIdentifierExtensions_eventIsValid_Parms), Z_Construct_UFunction_UAnimationAttributeIdentifierExtensions_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationAttributeIdentifierExtensions_IsValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationAttributeIdentifierExtensions_IsValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationAttributeIdentifierExtensions_IsValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationAttributeIdentifierExtensions_IsValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationAttributeIdentifierExtensions_IsValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimationAttributeIdentifierExtensions);
	UClass* Z_Construct_UClass_UAnimationAttributeIdentifierExtensions_NoRegister()
	{
		return UAnimationAttributeIdentifierExtensions::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationAttributeIdentifierExtensions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationAttributeIdentifierExtensions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimationAttributeIdentifierExtensions_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAnimationAttributeIdentifierExtensions_CreateAttributeIdentifier, "CreateAttributeIdentifier" }, // 3002437914
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_UAnimationAttributeIdentifierExtensions_IsValid, "IsValid" }, // 3680904694
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationAttributeIdentifierExtensions_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Script-exposed functionality for wrapping native functionality and constructing valid FAnimationAttributeIdentifier instances */" },
		{ "IncludePath", "Animation/AnimData/AttributeIdentifier.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AttributeIdentifier.h" },
		{ "ToolTip", "Script-exposed functionality for wrapping native functionality and constructing valid FAnimationAttributeIdentifier instances" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationAttributeIdentifierExtensions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationAttributeIdentifierExtensions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationAttributeIdentifierExtensions_Statics::ClassParams = {
		&UAnimationAttributeIdentifierExtensions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAnimationAttributeIdentifierExtensions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationAttributeIdentifierExtensions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimationAttributeIdentifierExtensions()
	{
		if (!Z_Registration_Info_UClass_UAnimationAttributeIdentifierExtensions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationAttributeIdentifierExtensions.OuterSingleton, Z_Construct_UClass_UAnimationAttributeIdentifierExtensions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimationAttributeIdentifierExtensions.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAnimationAttributeIdentifierExtensions>()
	{
		return UAnimationAttributeIdentifierExtensions::StaticClass();
	}
	UAnimationAttributeIdentifierExtensions::UAnimationAttributeIdentifierExtensions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationAttributeIdentifierExtensions);
	UAnimationAttributeIdentifierExtensions::~UAnimationAttributeIdentifierExtensions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AttributeIdentifier_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AttributeIdentifier_h_Statics::ScriptStructInfo[] = {
		{ FAnimationAttributeIdentifier::StaticStruct, Z_Construct_UScriptStruct_FAnimationAttributeIdentifier_Statics::NewStructOps, TEXT("AnimationAttributeIdentifier"), &Z_Registration_Info_UScriptStruct_AnimationAttributeIdentifier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimationAttributeIdentifier), 197982779U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AttributeIdentifier_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimationAttributeIdentifierExtensions, UAnimationAttributeIdentifierExtensions::StaticClass, TEXT("UAnimationAttributeIdentifierExtensions"), &Z_Registration_Info_UClass_UAnimationAttributeIdentifierExtensions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationAttributeIdentifierExtensions), 3984646163U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AttributeIdentifier_h_4269264893(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AttributeIdentifier_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AttributeIdentifier_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AttributeIdentifier_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AttributeIdentifier_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
