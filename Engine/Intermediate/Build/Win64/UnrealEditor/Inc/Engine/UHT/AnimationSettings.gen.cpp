// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimationSettings.h"
#include "../../Source/Runtime/Engine/Classes/Animation/CustomAttributes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/MirrorDataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationSettings() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationSettings();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UUserDefinedStruct_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECustomAttributeBlendType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCustomAttributeSetting();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMirrorFindReplaceExpression();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimecodeCustomAttributeNameSettings();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(UAnimationSettings::execGetBoneCustomAttributeNamesToImport)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetBoneCustomAttributeNamesToImport();
		P_NATIVE_END;
	}
	void UAnimationSettings::StaticRegisterNativesUAnimationSettings()
	{
		UClass* Class = UAnimationSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBoneCustomAttributeNamesToImport", &UAnimationSettings::execGetBoneCustomAttributeNamesToImport },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimationSettings_GetBoneCustomAttributeNamesToImport_Statics
	{
		struct AnimationSettings_eventGetBoneCustomAttributeNamesToImport_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAnimationSettings_GetBoneCustomAttributeNamesToImport_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationSettings_GetBoneCustomAttributeNamesToImport_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationSettings_eventGetBoneCustomAttributeNamesToImport_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationSettings_GetBoneCustomAttributeNamesToImport_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationSettings_GetBoneCustomAttributeNamesToImport_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationSettings_GetBoneCustomAttributeNamesToImport_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationSettings_GetBoneCustomAttributeNamesToImport_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationAttributes" },
		{ "Comment", "/** Gets the complete list of bone animation attribute names to consider for import.\n\x09    This includes the designated timecode animation attributes as well as other bone animation attributes identified in the settings. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
		{ "ToolTip", "Gets the complete list of bone animation attribute names to consider for import.\n          This includes the designated timecode animation attributes as well as other bone animation attributes identified in the settings." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationSettings_GetBoneCustomAttributeNamesToImport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationSettings, nullptr, "GetBoneCustomAttributeNamesToImport", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationSettings_GetBoneCustomAttributeNamesToImport_Statics::AnimationSettings_eventGetBoneCustomAttributeNamesToImport_Parms), Z_Construct_UFunction_UAnimationSettings_GetBoneCustomAttributeNamesToImport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationSettings_GetBoneCustomAttributeNamesToImport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationSettings_GetBoneCustomAttributeNamesToImport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationSettings_GetBoneCustomAttributeNamesToImport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationSettings_GetBoneCustomAttributeNamesToImport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationSettings_GetBoneCustomAttributeNamesToImport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimationSettings);
	UClass* Z_Construct_UClass_UAnimationSettings_NoRegister()
	{
		return UAnimationSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompressCommandletVersion_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CompressCommandletVersion;
		static const UECodeGen_Private::FStrPropertyParams NewProp_KeyEndEffectorsMatchNameArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyEndEffectorsMatchNameArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_KeyEndEffectorsMatchNameArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForceRecompression_MetaData[];
#endif
		static void NewProp_ForceRecompression_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ForceRecompression;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceBelowThreshold_MetaData[];
#endif
		static void NewProp_bForceBelowThreshold_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceBelowThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFirstRecompressUsingCurrentOrDefault_MetaData[];
#endif
		static void NewProp_bFirstRecompressUsingCurrentOrDefault_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFirstRecompressUsingCurrentOrDefault;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRaiseMaxErrorToExisting_MetaData[];
#endif
		static void NewProp_bRaiseMaxErrorToExisting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRaiseMaxErrorToExisting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnablePerformanceLog_MetaData[];
#endif
		static void NewProp_bEnablePerformanceLog_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePerformanceLog;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStripAnimationDataOnDedicatedServer_MetaData[];
#endif
		static void NewProp_bStripAnimationDataOnDedicatedServer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStripAnimationDataOnDedicatedServer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTickAnimationOnSkeletalMeshInit_MetaData[];
#endif
		static void NewProp_bTickAnimationOnSkeletalMeshInit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTickAnimationOnSkeletalMeshInit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneTimecodeCustomAttributeNameSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneTimecodeCustomAttributeNameSettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneCustomAttributesNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneCustomAttributesNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneCustomAttributesNames;
		static const UECodeGen_Private::FStrPropertyParams NewProp_BoneNamesWithCustomAttributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneNamesWithCustomAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneNamesWithCustomAttributes;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeBlendModes_ValueProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AttributeBlendModes_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeBlendModes_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeBlendModes_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_AttributeBlendModes;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultAttributeBlendMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAttributeBlendMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultAttributeBlendMode;
		static const UECodeGen_Private::FStrPropertyParams NewProp_TransformAttributeNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformAttributeNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TransformAttributeNames;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_UserDefinedStructAttributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserDefinedStructAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UserDefinedStructAttributes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MirrorFindReplaceExpressions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MirrorFindReplaceExpressions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MirrorFindReplaceExpressions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFrameRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultFrameRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimationSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimationSettings_GetBoneCustomAttributeNamesToImport, "GetBoneCustomAttributeNamesToImport" }, // 3156335040
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Default animation settings.\n */" },
		{ "DisplayName", "Animation" },
		{ "IncludePath", "Animation/AnimationSettings.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
		{ "ToolTip", "Default animation settings." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSettings_Statics::NewProp_CompressCommandletVersion_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** Compression version for recompress commandlet, bump this to trigger full recompressed, otherwise only new imported animations will be recompressed */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
		{ "ToolTip", "Compression version for recompress commandlet, bump this to trigger full recompressed, otherwise only new imported animations will be recompressed" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_CompressCommandletVersion = { "CompressCommandletVersion", nullptr, (EPropertyFlags)0x0010000000024001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimationSettings, CompressCommandletVersion), METADATA_PARAMS(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_CompressCommandletVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_CompressCommandletVersion_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_KeyEndEffectorsMatchNameArray_Inner = { "KeyEndEffectorsMatchNameArray", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSettings_Statics::NewProp_KeyEndEffectorsMatchNameArray_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** List of bone names to treat with higher precision, in addition to any bones with sockets */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
		{ "ToolTip", "List of bone names to treat with higher precision, in addition to any bones with sockets" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_KeyEndEffectorsMatchNameArray = { "KeyEndEffectorsMatchNameArray", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimationSettings, KeyEndEffectorsMatchNameArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_KeyEndEffectorsMatchNameArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_KeyEndEffectorsMatchNameArray_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSettings_Statics::NewProp_ForceRecompression_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** If true, this will forcibly recompress every animation, this should not be checked in enabled */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
		{ "ToolTip", "If true, this will forcibly recompress every animation, this should not be checked in enabled" },
	};
#endif
	void Z_Construct_UClass_UAnimationSettings_Statics::NewProp_ForceRecompression_SetBit(void* Obj)
	{
		((UAnimationSettings*)Obj)->ForceRecompression = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_ForceRecompression = { "ForceRecompression", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimationSettings), &Z_Construct_UClass_UAnimationSettings_Statics::NewProp_ForceRecompression_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_ForceRecompression_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_ForceRecompression_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bForceBelowThreshold_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** If true and the existing compression error is greater than Alternative Compression Threshold, then any compression technique (even one that increases the size) with a lower error will be used until it falls below the threshold */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
		{ "ToolTip", "If true and the existing compression error is greater than Alternative Compression Threshold, then any compression technique (even one that increases the size) with a lower error will be used until it falls below the threshold" },
	};
#endif
	void Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bForceBelowThreshold_SetBit(void* Obj)
	{
		((UAnimationSettings*)Obj)->bForceBelowThreshold = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bForceBelowThreshold = { "bForceBelowThreshold", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimationSettings), &Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bForceBelowThreshold_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bForceBelowThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bForceBelowThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bFirstRecompressUsingCurrentOrDefault_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** If true, then the animation will be first recompressed with it's current compressor if non-NULL, or with the global default compressor (specified in the engine ini) \n\x09* Also known as \"Run Current Default Compressor\"\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
		{ "ToolTip", "If true, then the animation will be first recompressed with it's current compressor if non-NULL, or with the global default compressor (specified in the engine ini)\nAlso known as \"Run Current Default Compressor\"" },
	};
#endif
	void Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bFirstRecompressUsingCurrentOrDefault_SetBit(void* Obj)
	{
		((UAnimationSettings*)Obj)->bFirstRecompressUsingCurrentOrDefault = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bFirstRecompressUsingCurrentOrDefault = { "bFirstRecompressUsingCurrentOrDefault", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimationSettings), &Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bFirstRecompressUsingCurrentOrDefault_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bFirstRecompressUsingCurrentOrDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bFirstRecompressUsingCurrentOrDefault_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bRaiseMaxErrorToExisting_MetaData[] = {
		{ "Comment", "/*, EditAnywhere, Category = Compression*/" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "No longer used." },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
		{ "ToolTip", ", EditAnywhere, Category = Compression" },
	};
#endif
	void Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bRaiseMaxErrorToExisting_SetBit(void* Obj)
	{
		((UAnimationSettings*)Obj)->bRaiseMaxErrorToExisting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bRaiseMaxErrorToExisting = { "bRaiseMaxErrorToExisting", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimationSettings), &Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bRaiseMaxErrorToExisting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bRaiseMaxErrorToExisting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bRaiseMaxErrorToExisting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bEnablePerformanceLog_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** If true, recompression will log performance information */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
		{ "ToolTip", "If true, recompression will log performance information" },
	};
#endif
	void Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bEnablePerformanceLog_SetBit(void* Obj)
	{
		((UAnimationSettings*)Obj)->bEnablePerformanceLog = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bEnablePerformanceLog = { "bEnablePerformanceLog", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimationSettings), &Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bEnablePerformanceLog_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bEnablePerformanceLog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bEnablePerformanceLog_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bStripAnimationDataOnDedicatedServer_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** If true, animation track data will be stripped from dedicated server cooked data */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
		{ "ToolTip", "If true, animation track data will be stripped from dedicated server cooked data" },
	};
#endif
	void Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bStripAnimationDataOnDedicatedServer_SetBit(void* Obj)
	{
		((UAnimationSettings*)Obj)->bStripAnimationDataOnDedicatedServer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bStripAnimationDataOnDedicatedServer = { "bStripAnimationDataOnDedicatedServer", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimationSettings), &Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bStripAnimationDataOnDedicatedServer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bStripAnimationDataOnDedicatedServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bStripAnimationDataOnDedicatedServer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bTickAnimationOnSkeletalMeshInit_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** If true, pre-4.19 behavior of zero-ticking animations during skeletal mesh init */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
		{ "ToolTip", "If true, pre-4.19 behavior of zero-ticking animations during skeletal mesh init" },
	};
#endif
	void Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bTickAnimationOnSkeletalMeshInit_SetBit(void* Obj)
	{
		((UAnimationSettings*)Obj)->bTickAnimationOnSkeletalMeshInit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bTickAnimationOnSkeletalMeshInit = { "bTickAnimationOnSkeletalMeshInit", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimationSettings), &Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bTickAnimationOnSkeletalMeshInit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bTickAnimationOnSkeletalMeshInit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bTickAnimationOnSkeletalMeshInit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSettings_Statics::NewProp_BoneTimecodeCustomAttributeNameSettings_MetaData[] = {
		{ "Category", "AnimationAttributes" },
		{ "Comment", "/** Names that identify bone animation attributes representing the individual components of a timecode and a subframe along with a take name.\n\x09    These will be included in the list of bone custom attribute names to import. */" },
		{ "DisplayName", "Bone Timecode Animation Attribute name settings" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
		{ "ToolTip", "Names that identify bone animation attributes representing the individual components of a timecode and a subframe along with a take name.\n          These will be included in the list of bone custom attribute names to import." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_BoneTimecodeCustomAttributeNameSettings = { "BoneTimecodeCustomAttributeNameSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimationSettings, BoneTimecodeCustomAttributeNameSettings), Z_Construct_UScriptStruct_FTimecodeCustomAttributeNameSettings, METADATA_PARAMS(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_BoneTimecodeCustomAttributeNameSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_BoneTimecodeCustomAttributeNameSettings_MetaData)) }; // 3594195430
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_BoneCustomAttributesNames_Inner = { "BoneCustomAttributesNames", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCustomAttributeSetting, METADATA_PARAMS(nullptr, 0) }; // 2766223535
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSettings_Statics::NewProp_BoneCustomAttributesNames_MetaData[] = {
		{ "Category", "AnimationAttributes" },
		{ "Comment", "/** List of animation attribute names to import directly on their corresponding bone names. The meaning field allows to contextualize the attribute name and customize tooling for it. */" },
		{ "DisplayName", "Bone Animation Attributes names" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
		{ "ToolTip", "List of animation attribute names to import directly on their corresponding bone names. The meaning field allows to contextualize the attribute name and customize tooling for it." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_BoneCustomAttributesNames = { "BoneCustomAttributesNames", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimationSettings, BoneCustomAttributesNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_BoneCustomAttributesNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_BoneCustomAttributesNames_MetaData)) }; // 2766223535
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_BoneNamesWithCustomAttributes_Inner = { "BoneNamesWithCustomAttributes", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSettings_Statics::NewProp_BoneNamesWithCustomAttributes_MetaData[] = {
		{ "Category", "AnimationAttributes" },
		{ "Comment", "/** List of bone names for which all animation attributes are directly imported on the bone. */" },
		{ "DisplayName", "Bone names with Animation Attributes" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
		{ "ToolTip", "List of bone names for which all animation attributes are directly imported on the bone." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_BoneNamesWithCustomAttributes = { "BoneNamesWithCustomAttributes", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimationSettings, BoneNamesWithCustomAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_BoneNamesWithCustomAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_BoneNamesWithCustomAttributes_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_AttributeBlendModes_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_AttributeBlendModes_ValueProp = { "AttributeBlendModes", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UEnum_Engine_ECustomAttributeBlendType, METADATA_PARAMS(nullptr, 0) }; // 3525224360
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_AttributeBlendModes_Key_KeyProp = { "AttributeBlendModes_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSettings_Statics::NewProp_AttributeBlendModes_MetaData[] = {
		{ "Category", "AnimationAttributes" },
		{ "Comment", "/** Animation Attribute specific blend types (by name) */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
		{ "ToolTip", "Animation Attribute specific blend types (by name)" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_AttributeBlendModes = { "AttributeBlendModes", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimationSettings, AttributeBlendModes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_AttributeBlendModes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_AttributeBlendModes_MetaData)) }; // 3525224360
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_DefaultAttributeBlendMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSettings_Statics::NewProp_DefaultAttributeBlendMode_MetaData[] = {
		{ "Category", "AnimationAttributes" },
		{ "Comment", "/** Default Animation Attribute blend type */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
		{ "ToolTip", "Default Animation Attribute blend type" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_DefaultAttributeBlendMode = { "DefaultAttributeBlendMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimationSettings, DefaultAttributeBlendMode), Z_Construct_UEnum_Engine_ECustomAttributeBlendType, METADATA_PARAMS(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_DefaultAttributeBlendMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_DefaultAttributeBlendMode_MetaData)) }; // 3525224360
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_TransformAttributeNames_Inner = { "TransformAttributeNames", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSettings_Statics::NewProp_TransformAttributeNames_MetaData[] = {
		{ "Category", "AnimationAttributes" },
		{ "Comment", "/** Names to match against when importing FBX node transform curves as attributes (can use ? and * wildcards) */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
		{ "ToolTip", "Names to match against when importing FBX node transform curves as attributes (can use ? and * wildcards)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_TransformAttributeNames = { "TransformAttributeNames", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimationSettings, TransformAttributeNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_TransformAttributeNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_TransformAttributeNames_MetaData)) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_UserDefinedStructAttributes_Inner = { "UserDefinedStructAttributes", nullptr, (EPropertyFlags)0x0004000000004000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UUserDefinedStruct_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSettings_Statics::NewProp_UserDefinedStructAttributes_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.UserDefinedStruct" },
		{ "Category", "AnimationAttributes" },
		{ "Comment", "/** Register user defined structs as animation attributes*/" },
		{ "DisplayName", "User Defined Struct Animation Attributes (Runtime only, Non-blendable)" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
		{ "ToolTip", "Register user defined structs as animation attributes" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_UserDefinedStructAttributes = { "UserDefinedStructAttributes", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimationSettings, UserDefinedStructAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_UserDefinedStructAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_UserDefinedStructAttributes_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_MirrorFindReplaceExpressions_Inner = { "MirrorFindReplaceExpressions", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMirrorFindReplaceExpression, METADATA_PARAMS(nullptr, 0) }; // 633994333
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSettings_Statics::NewProp_MirrorFindReplaceExpressions_MetaData[] = {
		{ "Category", "Mirroring" },
		{ "Comment", "/** Find and Replace Expressions used for mirroring  */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
		{ "ToolTip", "Find and Replace Expressions used for mirroring" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_MirrorFindReplaceExpressions = { "MirrorFindReplaceExpressions", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimationSettings, MirrorFindReplaceExpressions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_MirrorFindReplaceExpressions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_MirrorFindReplaceExpressions_MetaData)) }; // 633994333
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSettings_Statics::NewProp_DefaultFrameRate_MetaData[] = {
		{ "Category", "AnimationData" },
		{ "Comment", "/** Project specific default frame-rate used when (re)initializing any animation based data */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
		{ "ToolTip", "Project specific default frame-rate used when (re)initializing any animation based data" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_DefaultFrameRate = { "DefaultFrameRate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimationSettings, DefaultFrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_DefaultFrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_DefaultFrameRate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_CompressCommandletVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_KeyEndEffectorsMatchNameArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_KeyEndEffectorsMatchNameArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_ForceRecompression,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bForceBelowThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bFirstRecompressUsingCurrentOrDefault,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bRaiseMaxErrorToExisting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bEnablePerformanceLog,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bStripAnimationDataOnDedicatedServer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bTickAnimationOnSkeletalMeshInit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_BoneTimecodeCustomAttributeNameSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_BoneCustomAttributesNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_BoneCustomAttributesNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_BoneNamesWithCustomAttributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_BoneNamesWithCustomAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_AttributeBlendModes_ValueProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_AttributeBlendModes_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_AttributeBlendModes_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_AttributeBlendModes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_DefaultAttributeBlendMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_DefaultAttributeBlendMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_TransformAttributeNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_TransformAttributeNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_UserDefinedStructAttributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_UserDefinedStructAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_MirrorFindReplaceExpressions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_MirrorFindReplaceExpressions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_DefaultFrameRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationSettings_Statics::ClassParams = {
		&UAnimationSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAnimationSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimationSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimationSettings()
	{
		if (!Z_Registration_Info_UClass_UAnimationSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationSettings.OuterSingleton, Z_Construct_UClass_UAnimationSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimationSettings.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAnimationSettings>()
	{
		return UAnimationSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationSettings);
	UAnimationSettings::~UAnimationSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimationSettings, UAnimationSettings::StaticClass, TEXT("UAnimationSettings"), &Z_Registration_Info_UClass_UAnimationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationSettings), 2452909771U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_3973559699(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
