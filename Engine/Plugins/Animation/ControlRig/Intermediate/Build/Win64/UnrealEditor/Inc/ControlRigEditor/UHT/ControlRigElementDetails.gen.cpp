// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/ControlRigElementDetails.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigElementDetails() {}
// Cross Module References
	CONTROLRIGEDITOR_API UEnum* Z_Construct_UEnum_ControlRigEditor_ERigElementDetailsTransformComponent();
	UPackage* Z_Construct_UPackage__Script_ControlRigEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigElementDetailsTransformComponent;
	static UEnum* ERigElementDetailsTransformComponent_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERigElementDetailsTransformComponent.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERigElementDetailsTransformComponent.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRigEditor_ERigElementDetailsTransformComponent, (UObject*)Z_Construct_UPackage__Script_ControlRigEditor(), TEXT("ERigElementDetailsTransformComponent"));
		}
		return Z_Registration_Info_UEnum_ERigElementDetailsTransformComponent.OuterSingleton;
	}
	template<> CONTROLRIGEDITOR_API UEnum* StaticEnum<ERigElementDetailsTransformComponent>()
	{
		return ERigElementDetailsTransformComponent_StaticEnum();
	}
	struct Z_Construct_UEnum_ControlRigEditor_ERigElementDetailsTransformComponent_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ControlRigEditor_ERigElementDetailsTransformComponent_Statics::Enumerators[] = {
		{ "ERigElementDetailsTransformComponent::TranslationX", (int64)ERigElementDetailsTransformComponent::TranslationX },
		{ "ERigElementDetailsTransformComponent::TranslationY", (int64)ERigElementDetailsTransformComponent::TranslationY },
		{ "ERigElementDetailsTransformComponent::TranslationZ", (int64)ERigElementDetailsTransformComponent::TranslationZ },
		{ "ERigElementDetailsTransformComponent::RotationRoll", (int64)ERigElementDetailsTransformComponent::RotationRoll },
		{ "ERigElementDetailsTransformComponent::RotationPitch", (int64)ERigElementDetailsTransformComponent::RotationPitch },
		{ "ERigElementDetailsTransformComponent::RotationYaw", (int64)ERigElementDetailsTransformComponent::RotationYaw },
		{ "ERigElementDetailsTransformComponent::ScaleX", (int64)ERigElementDetailsTransformComponent::ScaleX },
		{ "ERigElementDetailsTransformComponent::ScaleY", (int64)ERigElementDetailsTransformComponent::ScaleY },
		{ "ERigElementDetailsTransformComponent::ScaleZ", (int64)ERigElementDetailsTransformComponent::ScaleZ },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ControlRigEditor_ERigElementDetailsTransformComponent_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ControlRigElementDetails.h" },
		{ "RotationPitch.Name", "ERigElementDetailsTransformComponent::RotationPitch" },
		{ "RotationRoll.Name", "ERigElementDetailsTransformComponent::RotationRoll" },
		{ "RotationYaw.Name", "ERigElementDetailsTransformComponent::RotationYaw" },
		{ "ScaleX.Name", "ERigElementDetailsTransformComponent::ScaleX" },
		{ "ScaleY.Name", "ERigElementDetailsTransformComponent::ScaleY" },
		{ "ScaleZ.Name", "ERigElementDetailsTransformComponent::ScaleZ" },
		{ "TranslationX.Name", "ERigElementDetailsTransformComponent::TranslationX" },
		{ "TranslationY.Name", "ERigElementDetailsTransformComponent::TranslationY" },
		{ "TranslationZ.Name", "ERigElementDetailsTransformComponent::TranslationZ" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRigEditor_ERigElementDetailsTransformComponent_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ControlRigEditor,
		nullptr,
		"ERigElementDetailsTransformComponent",
		"ERigElementDetailsTransformComponent",
		Z_Construct_UEnum_ControlRigEditor_ERigElementDetailsTransformComponent_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRigEditor_ERigElementDetailsTransformComponent_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ControlRigEditor_ERigElementDetailsTransformComponent_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRigEditor_ERigElementDetailsTransformComponent_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ControlRigEditor_ERigElementDetailsTransformComponent()
	{
		if (!Z_Registration_Info_UEnum_ERigElementDetailsTransformComponent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigElementDetailsTransformComponent.InnerSingleton, Z_Construct_UEnum_ControlRigEditor_ERigElementDetailsTransformComponent_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERigElementDetailsTransformComponent.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_ControlRigElementDetails_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_ControlRigElementDetails_h_Statics::EnumInfo[] = {
		{ ERigElementDetailsTransformComponent_StaticEnum, TEXT("ERigElementDetailsTransformComponent"), &Z_Registration_Info_UEnum_ERigElementDetailsTransformComponent, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4147146975U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_ControlRigElementDetails_h_1507123386(TEXT("/Script/ControlRigEditor"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_ControlRigElementDetails_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_ControlRigElementDetails_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
