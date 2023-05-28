// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetActionUtility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetActionUtility() {}
// Cross Module References
	BLUTILITY_API UClass* Z_Construct_UClass_UAssetActionUtility();
	BLUTILITY_API UClass* Z_Construct_UClass_UAssetActionUtility_NoRegister();
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityExtension_NoRegister();
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityObject();
	BLUTILITY_API UScriptStruct* Z_Construct_UScriptStruct_FAssetActionSupportCondition();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Blutility();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AssetActionSupportCondition;
class UScriptStruct* FAssetActionSupportCondition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AssetActionSupportCondition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AssetActionSupportCondition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetActionSupportCondition, (UObject*)Z_Construct_UPackage__Script_Blutility(), TEXT("AssetActionSupportCondition"));
	}
	return Z_Registration_Info_UScriptStruct_AssetActionSupportCondition.OuterSingleton;
}
template<> BLUTILITY_API UScriptStruct* StaticStruct<FAssetActionSupportCondition>()
{
	return FAssetActionSupportCondition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAssetActionSupportCondition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FailureReason_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FailureReason;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetActionSupportCondition_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AssetActionUtility.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAssetActionSupportCondition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetActionSupportCondition>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetActionSupportCondition_Statics::NewProp_Filter_MetaData[] = {
		{ "Category", "Condition" },
		{ "Comment", "/**\n\x09 * This is a content browser styled filter.  For example, ..._N AND VirtualTextureStreaming=FALSE, would require that\n\x09 * asset tag VirtualTextureStreaming be false, and the asset name end in _N.\n\x09 *\n\x09 * You can learn more about the content browser search syntax in the \"Advanced Search Syntax\" documentation.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AssetActionUtility.h" },
		{ "ToolTip", "This is a content browser styled filter.  For example, ..._N AND VirtualTextureStreaming=FALSE, would require that\nasset tag VirtualTextureStreaming be false, and the asset name end in _N.\n\nYou can learn more about the content browser search syntax in the \"Advanced Search Syntax\" documentation." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetActionSupportCondition_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAssetActionSupportCondition, Filter), METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetActionSupportCondition_Statics::NewProp_Filter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetActionSupportCondition_Statics::NewProp_Filter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetActionSupportCondition_Statics::NewProp_FailureReason_MetaData[] = {
		{ "Category", "Condition" },
		{ "Comment", "/**\n\x09 * This is the failure reason to reply to the user with if the condition above fails.\n\x09 * If you leave this blank, we will hide the option.  If fill in the reason, will show the option but give the reason\n\x09 * it is disabled.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AssetActionUtility.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "This is the failure reason to reply to the user with if the condition above fails.\nIf you leave this blank, we will hide the option.  If fill in the reason, will show the option but give the reason\nit is disabled." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetActionSupportCondition_Statics::NewProp_FailureReason = { "FailureReason", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAssetActionSupportCondition, FailureReason), METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetActionSupportCondition_Statics::NewProp_FailureReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetActionSupportCondition_Statics::NewProp_FailureReason_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAssetActionSupportCondition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetActionSupportCondition_Statics::NewProp_Filter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetActionSupportCondition_Statics::NewProp_FailureReason,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetActionSupportCondition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Blutility,
		nullptr,
		&NewStructOps,
		"AssetActionSupportCondition",
		sizeof(FAssetActionSupportCondition),
		alignof(FAssetActionSupportCondition),
		Z_Construct_UScriptStruct_FAssetActionSupportCondition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetActionSupportCondition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetActionSupportCondition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetActionSupportCondition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAssetActionSupportCondition()
	{
		if (!Z_Registration_Info_UScriptStruct_AssetActionSupportCondition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AssetActionSupportCondition.InnerSingleton, Z_Construct_UScriptStruct_FAssetActionSupportCondition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AssetActionSupportCondition.InnerSingleton;
	}
	DEFINE_FUNCTION(UAssetActionUtility::execGetSupportedClasses)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<TSoftClassPtr<UObject> >*)Z_Param__Result=P_THIS->GetSupportedClasses();
		P_NATIVE_END;
	}
	struct AssetActionUtility_eventGetSupportedClass_Parms
	{
		UClass* ReturnValue;

		/** Constructor, initializes return property only **/
		AssetActionUtility_eventGetSupportedClass_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct AssetActionUtility_eventIsActionForBlueprints_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		AssetActionUtility_eventIsActionForBlueprints_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_UAssetActionUtility_GetSupportedClass = FName(TEXT("GetSupportedClass"));
	UClass* UAssetActionUtility::GetSupportedClass() const
	{
		AssetActionUtility_eventGetSupportedClass_Parms Parms;
		const_cast<UAssetActionUtility*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAssetActionUtility_GetSupportedClass),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UAssetActionUtility_IsActionForBlueprints = FName(TEXT("IsActionForBlueprints"));
	bool UAssetActionUtility::IsActionForBlueprints() const
	{
		AssetActionUtility_eventIsActionForBlueprints_Parms Parms;
		const_cast<UAssetActionUtility*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAssetActionUtility_IsActionForBlueprints),&Parms);
		return !!Parms.ReturnValue;
	}
	void UAssetActionUtility::StaticRegisterNativesUAssetActionUtility()
	{
		UClass* Class = UAssetActionUtility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSupportedClasses", &UAssetActionUtility::execGetSupportedClasses },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAssetActionUtility_GetSupportedClass_Statics
	{
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAssetActionUtility_GetSupportedClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetActionUtility_eventGetSupportedClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetActionUtility_GetSupportedClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetActionUtility_GetSupportedClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetActionUtility_GetSupportedClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Assets" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "If you were just returning a single class add it to the SupportedClasses array (you can find it listed in the Class Defaults).  If you were doing complex logic to simulate having multiple classes act as filters, add them to the SupportedClasses array.  If you were doing 'other' logic, you'll need to do that upon action execution." },
		{ "ModuleRelativePath", "Classes/AssetActionUtility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetActionUtility_GetSupportedClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetActionUtility, nullptr, "GetSupportedClass", nullptr, nullptr, sizeof(AssetActionUtility_eventGetSupportedClass_Parms), Z_Construct_UFunction_UAssetActionUtility_GetSupportedClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetActionUtility_GetSupportedClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetActionUtility_GetSupportedClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetActionUtility_GetSupportedClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetActionUtility_GetSupportedClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetActionUtility_GetSupportedClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetActionUtility_GetSupportedClasses_Statics
	{
		struct AssetActionUtility_eventGetSupportedClasses_Parms
		{
			TArray<TSoftClassPtr<UObject> > ReturnValue;
		};
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_UAssetActionUtility_GetSupportedClasses_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetActionUtility_GetSupportedClasses_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetActionUtility_GetSupportedClasses_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetActionUtility_eventGetSupportedClasses_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAssetActionUtility_GetSupportedClasses_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetActionUtility_GetSupportedClasses_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetActionUtility_GetSupportedClasses_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetActionUtility_GetSupportedClasses_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetActionUtility_GetSupportedClasses_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetActionUtility_GetSupportedClasses_Statics::Function_MetaDataParams[] = {
		{ "Category", "Assets" },
		{ "Comment", "/**\n\x09 * Gets the statically determined supported classes, these classes are used as a first pass filter when determining\n\x09 * if we can utilize this asset utility action on the asset.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AssetActionUtility.h" },
		{ "ToolTip", "Gets the statically determined supported classes, these classes are used as a first pass filter when determining\nif we can utilize this asset utility action on the asset." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetActionUtility_GetSupportedClasses_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetActionUtility, nullptr, "GetSupportedClasses", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAssetActionUtility_GetSupportedClasses_Statics::AssetActionUtility_eventGetSupportedClasses_Parms), Z_Construct_UFunction_UAssetActionUtility_GetSupportedClasses_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetActionUtility_GetSupportedClasses_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetActionUtility_GetSupportedClasses_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetActionUtility_GetSupportedClasses_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetActionUtility_GetSupportedClasses()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetActionUtility_GetSupportedClasses_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetActionUtility_IsActionForBlueprints_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAssetActionUtility_IsActionForBlueprints_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetActionUtility_eventIsActionForBlueprints_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetActionUtility_IsActionForBlueprints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AssetActionUtility_eventIsActionForBlueprints_Parms), &Z_Construct_UFunction_UAssetActionUtility_IsActionForBlueprints_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetActionUtility_IsActionForBlueprints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetActionUtility_IsActionForBlueprints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetActionUtility_IsActionForBlueprints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Assets" },
		{ "Comment", "/**\n\x09 * Returns whether or not this action is designed to work specifically on Blueprints (true) or on all assets (false).\n\x09 * If true, GetSupportedClass() is treated as a filter against the Parent Class of selected Blueprint assets\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AssetActionUtility.h" },
		{ "ToolTip", "Returns whether or not this action is designed to work specifically on Blueprints (true) or on all assets (false).\nIf true, GetSupportedClass() is treated as a filter against the Parent Class of selected Blueprint assets" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetActionUtility_IsActionForBlueprints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetActionUtility, nullptr, "IsActionForBlueprints", nullptr, nullptr, sizeof(AssetActionUtility_eventIsActionForBlueprints_Parms), Z_Construct_UFunction_UAssetActionUtility_IsActionForBlueprints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetActionUtility_IsActionForBlueprints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetActionUtility_IsActionForBlueprints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetActionUtility_IsActionForBlueprints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetActionUtility_IsActionForBlueprints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetActionUtility_IsActionForBlueprints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetActionUtility);
	UClass* Z_Construct_UClass_UAssetActionUtility_NoRegister()
	{
		return UAssetActionUtility::StaticClass();
	}
	struct Z_Construct_UClass_UAssetActionUtility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_SupportedClasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SupportedClasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SupportedClasses;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SupportedConditions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SupportedConditions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SupportedConditions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetActionUtility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorUtilityObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Blutility,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAssetActionUtility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAssetActionUtility_GetSupportedClass, "GetSupportedClass" }, // 3583821450
		{ &Z_Construct_UFunction_UAssetActionUtility_GetSupportedClasses, "GetSupportedClasses" }, // 2643505711
		{ &Z_Construct_UFunction_UAssetActionUtility_IsActionForBlueprints, "IsActionForBlueprints" }, // 1969305388
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetActionUtility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * Base class for all asset action-related utilities\n * Any functions/events that are exposed on derived classes that have the correct signature will be\n * included as menu options when right-clicking on a group of assets in the content browser.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AssetActionUtility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/AssetActionUtility.h" },
		{ "ToolTip", "Base class for all asset action-related utilities\nAny functions/events that are exposed on derived classes that have the correct signature will be\nincluded as menu options when right-clicking on a group of assets in the content browser." },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UAssetActionUtility_Statics::NewProp_SupportedClasses_Inner = { "SupportedClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetActionUtility_Statics::NewProp_SupportedClasses_MetaData[] = {
		{ "AllowAbstract", "" },
		{ "Category", "Asset Support" },
		{ "Comment", "/**\n\x09 * The supported classes controls the list of classes that may be operated on by all of the asset functions in this\n\x09 * utility class.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AssetActionUtility.h" },
		{ "ToolTip", "The supported classes controls the list of classes that may be operated on by all of the asset functions in this\nutility class." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAssetActionUtility_Statics::NewProp_SupportedClasses = { "SupportedClasses", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAssetActionUtility, SupportedClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAssetActionUtility_Statics::NewProp_SupportedClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetActionUtility_Statics::NewProp_SupportedClasses_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAssetActionUtility_Statics::NewProp_SupportedConditions_Inner = { "SupportedConditions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAssetActionSupportCondition, METADATA_PARAMS(nullptr, 0) }; // 1543521588
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetActionUtility_Statics::NewProp_SupportedConditions_MetaData[] = {
		{ "Category", "Asset Support" },
		{ "Comment", "/**\n\x09 * The supported conditions for any asset to use these utility functions.  Note: all of these conditions must pass\n\x09 * in sequence.  So if you have earlier failure conditions you want to be run first, put them first in the list,\n\x09 * if those fail, their failure reason will be handled first.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AssetActionUtility.h" },
		{ "ToolTip", "The supported conditions for any asset to use these utility functions.  Note: all of these conditions must pass\nin sequence.  So if you have earlier failure conditions you want to be run first, put them first in the list,\nif those fail, their failure reason will be handled first." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAssetActionUtility_Statics::NewProp_SupportedConditions = { "SupportedConditions", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAssetActionUtility, SupportedConditions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAssetActionUtility_Statics::NewProp_SupportedConditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetActionUtility_Statics::NewProp_SupportedConditions_MetaData)) }; // 1543521588
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssetActionUtility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetActionUtility_Statics::NewProp_SupportedClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetActionUtility_Statics::NewProp_SupportedClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetActionUtility_Statics::NewProp_SupportedConditions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetActionUtility_Statics::NewProp_SupportedConditions,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAssetActionUtility_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEditorUtilityExtension_NoRegister, (int32)VTABLE_OFFSET(UAssetActionUtility, IEditorUtilityExtension), false },  // 2471005674
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetActionUtility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetActionUtility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetActionUtility_Statics::ClassParams = {
		&UAssetActionUtility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAssetActionUtility_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAssetActionUtility_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetActionUtility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetActionUtility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetActionUtility()
	{
		if (!Z_Registration_Info_UClass_UAssetActionUtility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetActionUtility.OuterSingleton, Z_Construct_UClass_UAssetActionUtility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetActionUtility.OuterSingleton;
	}
	template<> BLUTILITY_API UClass* StaticClass<UAssetActionUtility>()
	{
		return UAssetActionUtility::StaticClass();
	}
	UAssetActionUtility::UAssetActionUtility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetActionUtility);
	UAssetActionUtility::~UAssetActionUtility() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Classes_AssetActionUtility_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Classes_AssetActionUtility_h_Statics::ScriptStructInfo[] = {
		{ FAssetActionSupportCondition::StaticStruct, Z_Construct_UScriptStruct_FAssetActionSupportCondition_Statics::NewStructOps, TEXT("AssetActionSupportCondition"), &Z_Registration_Info_UScriptStruct_AssetActionSupportCondition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAssetActionSupportCondition), 1543521588U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Classes_AssetActionUtility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetActionUtility, UAssetActionUtility::StaticClass, TEXT("UAssetActionUtility"), &Z_Registration_Info_UClass_UAssetActionUtility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetActionUtility), 2363436140U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Classes_AssetActionUtility_h_443371087(TEXT("/Script/Blutility"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Classes_AssetActionUtility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Classes_AssetActionUtility_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Classes_AssetActionUtility_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Classes_AssetActionUtility_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
