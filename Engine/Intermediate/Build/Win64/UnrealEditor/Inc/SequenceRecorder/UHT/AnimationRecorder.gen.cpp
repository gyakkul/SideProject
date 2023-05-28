// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationRecorder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationRecorder() {}
// Cross Module References
	SEQUENCERECORDER_API UEnum* Z_Construct_UEnum_SequenceRecorder_ETimecodeBoneMode();
	SEQUENCERECORDER_API UScriptStruct* Z_Construct_UScriptStruct_FTimecodeBoneMethod();
	UPackage* Z_Construct_UPackage__Script_SequenceRecorder();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETimecodeBoneMode;
	static UEnum* ETimecodeBoneMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETimecodeBoneMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETimecodeBoneMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SequenceRecorder_ETimecodeBoneMode, (UObject*)Z_Construct_UPackage__Script_SequenceRecorder(), TEXT("ETimecodeBoneMode"));
		}
		return Z_Registration_Info_UEnum_ETimecodeBoneMode.OuterSingleton;
	}
	template<> SEQUENCERECORDER_API UEnum* StaticEnum<ETimecodeBoneMode>()
	{
		return ETimecodeBoneMode_StaticEnum();
	}
	struct Z_Construct_UEnum_SequenceRecorder_ETimecodeBoneMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SequenceRecorder_ETimecodeBoneMode_Statics::Enumerators[] = {
		{ "ETimecodeBoneMode::All", (int64)ETimecodeBoneMode::All },
		{ "ETimecodeBoneMode::Root", (int64)ETimecodeBoneMode::Root },
		{ "ETimecodeBoneMode::UserDefined", (int64)ETimecodeBoneMode::UserDefined },
		{ "ETimecodeBoneMode::MAX", (int64)ETimecodeBoneMode::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SequenceRecorder_ETimecodeBoneMode_Statics::Enum_MetaDataParams[] = {
		{ "All.Name", "ETimecodeBoneMode::All" },
		{ "BlueprintType", "true" },
		{ "MAX.Hidden", "" },
		{ "MAX.Name", "ETimecodeBoneMode::MAX" },
		{ "ModuleRelativePath", "Public/AnimationRecorder.h" },
		{ "Root.Name", "ETimecodeBoneMode::Root" },
		{ "UserDefined.Name", "ETimecodeBoneMode::UserDefined" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SequenceRecorder_ETimecodeBoneMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SequenceRecorder,
		nullptr,
		"ETimecodeBoneMode",
		"ETimecodeBoneMode",
		Z_Construct_UEnum_SequenceRecorder_ETimecodeBoneMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SequenceRecorder_ETimecodeBoneMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SequenceRecorder_ETimecodeBoneMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SequenceRecorder_ETimecodeBoneMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SequenceRecorder_ETimecodeBoneMode()
	{
		if (!Z_Registration_Info_UEnum_ETimecodeBoneMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETimecodeBoneMode.InnerSingleton, Z_Construct_UEnum_SequenceRecorder_ETimecodeBoneMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETimecodeBoneMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TimecodeBoneMethod;
class UScriptStruct* FTimecodeBoneMethod::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TimecodeBoneMethod.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TimecodeBoneMethod.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTimecodeBoneMethod, (UObject*)Z_Construct_UPackage__Script_SequenceRecorder(), TEXT("TimecodeBoneMethod"));
	}
	return Z_Registration_Info_UScriptStruct_TimecodeBoneMethod.OuterSingleton;
}
template<> SEQUENCERECORDER_API UScriptStruct* StaticStruct<FTimecodeBoneMethod>()
{
	return FTimecodeBoneMethod::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTimecodeBoneMethod_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_BoneMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BoneMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimecodeBoneMethod_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimationRecorder.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTimecodeBoneMethod_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTimecodeBoneMethod>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTimecodeBoneMethod_Statics::NewProp_BoneMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimecodeBoneMethod_Statics::NewProp_BoneMode_MetaData[] = {
		{ "Category", "Timecode" },
		{ "Comment", "/** The timecode bone mode */" },
		{ "ModuleRelativePath", "Public/AnimationRecorder.h" },
		{ "ToolTip", "The timecode bone mode" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTimecodeBoneMethod_Statics::NewProp_BoneMode = { "BoneMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimecodeBoneMethod, BoneMode), Z_Construct_UEnum_SequenceRecorder_ETimecodeBoneMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimecodeBoneMethod_Statics::NewProp_BoneMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimecodeBoneMethod_Statics::NewProp_BoneMode_MetaData)) }; // 3516517189
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimecodeBoneMethod_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "Timecode" },
		{ "Comment", "/** Name of the bone to assign timecode values to */" },
		{ "ModuleRelativePath", "Public/AnimationRecorder.h" },
		{ "ToolTip", "Name of the bone to assign timecode values to" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTimecodeBoneMethod_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimecodeBoneMethod, BoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimecodeBoneMethod_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimecodeBoneMethod_Statics::NewProp_BoneName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTimecodeBoneMethod_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimecodeBoneMethod_Statics::NewProp_BoneMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimecodeBoneMethod_Statics::NewProp_BoneMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimecodeBoneMethod_Statics::NewProp_BoneName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTimecodeBoneMethod_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SequenceRecorder,
		nullptr,
		&NewStructOps,
		"TimecodeBoneMethod",
		sizeof(FTimecodeBoneMethod),
		alignof(FTimecodeBoneMethod),
		Z_Construct_UScriptStruct_FTimecodeBoneMethod_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimecodeBoneMethod_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTimecodeBoneMethod_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimecodeBoneMethod_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTimecodeBoneMethod()
	{
		if (!Z_Registration_Info_UScriptStruct_TimecodeBoneMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TimecodeBoneMethod.InnerSingleton, Z_Construct_UScriptStruct_FTimecodeBoneMethod_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TimecodeBoneMethod.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorder_Public_AnimationRecorder_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorder_Public_AnimationRecorder_h_Statics::EnumInfo[] = {
		{ ETimecodeBoneMode_StaticEnum, TEXT("ETimecodeBoneMode"), &Z_Registration_Info_UEnum_ETimecodeBoneMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3516517189U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorder_Public_AnimationRecorder_h_Statics::ScriptStructInfo[] = {
		{ FTimecodeBoneMethod::StaticStruct, Z_Construct_UScriptStruct_FTimecodeBoneMethod_Statics::NewStructOps, TEXT("TimecodeBoneMethod"), &Z_Registration_Info_UScriptStruct_TimecodeBoneMethod, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTimecodeBoneMethod), 2179568785U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorder_Public_AnimationRecorder_h_1205049557(TEXT("/Script/SequenceRecorder"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorder_Public_AnimationRecorder_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorder_Public_AnimationRecorder_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorder_Public_AnimationRecorder_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorder_Public_AnimationRecorder_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
