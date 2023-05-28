// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMCore/RigVMFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMFunction() {}
// Cross Module References
	RIGVM_API UEnum* Z_Construct_UEnum_RigVM_ERigVMPinDirection();
	UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigVMPinDirection;
	static UEnum* ERigVMPinDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERigVMPinDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERigVMPinDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RigVM_ERigVMPinDirection, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("ERigVMPinDirection"));
		}
		return Z_Registration_Info_UEnum_ERigVMPinDirection.OuterSingleton;
	}
	template<> RIGVM_API UEnum* StaticEnum<ERigVMPinDirection>()
	{
		return ERigVMPinDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_RigVM_ERigVMPinDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RigVM_ERigVMPinDirection_Statics::Enumerators[] = {
		{ "ERigVMPinDirection::Input", (int64)ERigVMPinDirection::Input },
		{ "ERigVMPinDirection::Output", (int64)ERigVMPinDirection::Output },
		{ "ERigVMPinDirection::IO", (int64)ERigVMPinDirection::IO },
		{ "ERigVMPinDirection::Visible", (int64)ERigVMPinDirection::Visible },
		{ "ERigVMPinDirection::Hidden", (int64)ERigVMPinDirection::Hidden },
		{ "ERigVMPinDirection::Invalid", (int64)ERigVMPinDirection::Invalid },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RigVM_ERigVMPinDirection_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The Pin Direction is used to differentiate different kinds of \n * pins in the data flow graph - inputs, outputs etc.\n */" },
		{ "Hidden.Comment", "// A const value that cannot be connected to\n" },
		{ "Hidden.Name", "ERigVMPinDirection::Hidden" },
		{ "Hidden.ToolTip", "A const value that cannot be connected to" },
		{ "Input.Name", "ERigVMPinDirection::Input" },
		{ "Invalid.Comment", "// A mutable hidden value (used for interal state)\n" },
		{ "Invalid.Name", "ERigVMPinDirection::Invalid" },
		{ "Invalid.ToolTip", "A mutable hidden value (used for interal state)" },
		{ "IO.Comment", "// A mutable output value\n" },
		{ "IO.Name", "ERigVMPinDirection::IO" },
		{ "IO.ToolTip", "A mutable output value" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMFunction.h" },
		{ "Output.Comment", "// A const input value\n" },
		{ "Output.Name", "ERigVMPinDirection::Output" },
		{ "Output.ToolTip", "A const input value" },
		{ "ToolTip", "The Pin Direction is used to differentiate different kinds of\npins in the data flow graph - inputs, outputs etc." },
		{ "Visible.Comment", "// A mutable input and output value\n" },
		{ "Visible.Name", "ERigVMPinDirection::Visible" },
		{ "Visible.ToolTip", "A mutable input and output value" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RigVM_ERigVMPinDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		"ERigVMPinDirection",
		"ERigVMPinDirection",
		Z_Construct_UEnum_RigVM_ERigVMPinDirection_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RigVM_ERigVMPinDirection_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RigVM_ERigVMPinDirection_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RigVM_ERigVMPinDirection_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RigVM_ERigVMPinDirection()
	{
		if (!Z_Registration_Info_UEnum_ERigVMPinDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigVMPinDirection.InnerSingleton, Z_Construct_UEnum_RigVM_ERigVMPinDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERigVMPinDirection.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMFunction_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMFunction_h_Statics::EnumInfo[] = {
		{ ERigVMPinDirection_StaticEnum, TEXT("ERigVMPinDirection"), &Z_Registration_Info_UEnum_ERigVMPinDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4092277362U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMFunction_h_2669544262(TEXT("/Script/RigVM"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMFunction_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMFunction_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
