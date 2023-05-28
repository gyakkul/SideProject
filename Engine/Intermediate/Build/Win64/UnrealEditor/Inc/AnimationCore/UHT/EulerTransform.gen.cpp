// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EulerTransform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEulerTransform() {}
// Cross Module References
	ANIMATIONCORE_API UEnum* Z_Construct_UEnum_AnimationCore_EEulerRotationOrder();
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEulerTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UPackage* Z_Construct_UPackage__Script_AnimationCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEulerRotationOrder;
	static UEnum* EEulerRotationOrder_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEulerRotationOrder.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEulerRotationOrder.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimationCore_EEulerRotationOrder, (UObject*)Z_Construct_UPackage__Script_AnimationCore(), TEXT("EEulerRotationOrder"));
		}
		return Z_Registration_Info_UEnum_EEulerRotationOrder.OuterSingleton;
	}
	template<> ANIMATIONCORE_API UEnum* StaticEnum<EEulerRotationOrder>()
	{
		return EEulerRotationOrder_StaticEnum();
	}
	struct Z_Construct_UEnum_AnimationCore_EEulerRotationOrder_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AnimationCore_EEulerRotationOrder_Statics::Enumerators[] = {
		{ "EEulerRotationOrder::XYZ", (int64)EEulerRotationOrder::XYZ },
		{ "EEulerRotationOrder::XZY", (int64)EEulerRotationOrder::XZY },
		{ "EEulerRotationOrder::YXZ", (int64)EEulerRotationOrder::YXZ },
		{ "EEulerRotationOrder::YZX", (int64)EEulerRotationOrder::YZX },
		{ "EEulerRotationOrder::ZXY", (int64)EEulerRotationOrder::ZXY },
		{ "EEulerRotationOrder::ZYX", (int64)EEulerRotationOrder::ZYX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AnimationCore_EEulerRotationOrder_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EulerTransform.h" },
		{ "XYZ.Name", "EEulerRotationOrder::XYZ" },
		{ "XZY.Name", "EEulerRotationOrder::XZY" },
		{ "YXZ.Name", "EEulerRotationOrder::YXZ" },
		{ "YZX.Name", "EEulerRotationOrder::YZX" },
		{ "ZXY.Name", "EEulerRotationOrder::ZXY" },
		{ "ZYX.Name", "EEulerRotationOrder::ZYX" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimationCore_EEulerRotationOrder_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AnimationCore,
		nullptr,
		"EEulerRotationOrder",
		"EEulerRotationOrder",
		Z_Construct_UEnum_AnimationCore_EEulerRotationOrder_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AnimationCore_EEulerRotationOrder_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AnimationCore_EEulerRotationOrder_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AnimationCore_EEulerRotationOrder_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AnimationCore_EEulerRotationOrder()
	{
		if (!Z_Registration_Info_UEnum_EEulerRotationOrder.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEulerRotationOrder.InnerSingleton, Z_Construct_UEnum_AnimationCore_EEulerRotationOrder_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEulerRotationOrder.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EulerTransform;
class UScriptStruct* FEulerTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EulerTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EulerTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEulerTransform, (UObject*)Z_Construct_UPackage__Script_AnimationCore(), TEXT("EulerTransform"));
	}
	return Z_Registration_Info_UScriptStruct_EulerTransform.OuterSingleton;
}
template<> ANIMATIONCORE_API UScriptStruct* StaticStruct<FEulerTransform>()
{
	return FEulerTransform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEulerTransform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEulerTransform_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EulerTransform.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEulerTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEulerTransform>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEulerTransform_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "Transform" },
		{ "Comment", "/** The translation of this transform */" },
		{ "ModuleRelativePath", "Public/EulerTransform.h" },
		{ "ToolTip", "The translation of this transform" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEulerTransform_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEulerTransform, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FEulerTransform_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEulerTransform_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEulerTransform_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Transform" },
		{ "Comment", "/** The rotation of this transform */" },
		{ "ModuleRelativePath", "Public/EulerTransform.h" },
		{ "ToolTip", "The rotation of this transform" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEulerTransform_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEulerTransform, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FEulerTransform_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEulerTransform_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEulerTransform_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Transform" },
		{ "Comment", "/** The scale of this transform */" },
		{ "ModuleRelativePath", "Public/EulerTransform.h" },
		{ "ToolTip", "The scale of this transform" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEulerTransform_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEulerTransform, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FEulerTransform_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEulerTransform_Statics::NewProp_Scale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEulerTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEulerTransform_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEulerTransform_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEulerTransform_Statics::NewProp_Scale,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEulerTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
		nullptr,
		&NewStructOps,
		"EulerTransform",
		sizeof(FEulerTransform),
		alignof(FEulerTransform),
		Z_Construct_UScriptStruct_FEulerTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEulerTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEulerTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEulerTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEulerTransform()
	{
		if (!Z_Registration_Info_UScriptStruct_EulerTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EulerTransform.InnerSingleton, Z_Construct_UScriptStruct_FEulerTransform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EulerTransform.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_EulerTransform_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_EulerTransform_h_Statics::EnumInfo[] = {
		{ EEulerRotationOrder_StaticEnum, TEXT("EEulerRotationOrder"), &Z_Registration_Info_UEnum_EEulerRotationOrder, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2684869264U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_EulerTransform_h_Statics::ScriptStructInfo[] = {
		{ FEulerTransform::StaticStruct, Z_Construct_UScriptStruct_FEulerTransform_Statics::NewStructOps, TEXT("EulerTransform"), &Z_Registration_Info_UScriptStruct_EulerTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEulerTransform), 3672886731U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_EulerTransform_h_58984948(TEXT("/Script/AnimationCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_EulerTransform_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_EulerTransform_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_EulerTransform_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_EulerTransform_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
