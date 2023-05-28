// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMCore/RigVMDrawInstruction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMDrawInstruction() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	RIGVM_API UEnum* Z_Construct_UEnum_RigVM_ERigVMDrawSettings();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMDrawInstruction();
	UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigVMDrawSettings;
	static UEnum* ERigVMDrawSettings_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERigVMDrawSettings.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERigVMDrawSettings.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RigVM_ERigVMDrawSettings, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("ERigVMDrawSettings"));
		}
		return Z_Registration_Info_UEnum_ERigVMDrawSettings.OuterSingleton;
	}
	template<> RIGVM_API UEnum* StaticEnum<ERigVMDrawSettings::Primitive>()
	{
		return ERigVMDrawSettings_StaticEnum();
	}
	struct Z_Construct_UEnum_RigVM_ERigVMDrawSettings_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RigVM_ERigVMDrawSettings_Statics::Enumerators[] = {
		{ "ERigVMDrawSettings::Points", (int64)ERigVMDrawSettings::Points },
		{ "ERigVMDrawSettings::Lines", (int64)ERigVMDrawSettings::Lines },
		{ "ERigVMDrawSettings::LineStrip", (int64)ERigVMDrawSettings::LineStrip },
		{ "ERigVMDrawSettings::DynamicMesh", (int64)ERigVMDrawSettings::DynamicMesh },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RigVM_ERigVMDrawSettings_Statics::Enum_MetaDataParams[] = {
		{ "DynamicMesh.Name", "ERigVMDrawSettings::DynamicMesh" },
		{ "Lines.Name", "ERigVMDrawSettings::Lines" },
		{ "LineStrip.Name", "ERigVMDrawSettings::LineStrip" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMDrawInstruction.h" },
		{ "Points.Name", "ERigVMDrawSettings::Points" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RigVM_ERigVMDrawSettings_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		"ERigVMDrawSettings",
		"ERigVMDrawSettings::Primitive",
		Z_Construct_UEnum_RigVM_ERigVMDrawSettings_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RigVM_ERigVMDrawSettings_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_RigVM_ERigVMDrawSettings_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RigVM_ERigVMDrawSettings_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RigVM_ERigVMDrawSettings()
	{
		if (!Z_Registration_Info_UEnum_ERigVMDrawSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigVMDrawSettings.InnerSingleton, Z_Construct_UEnum_RigVM_ERigVMDrawSettings_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERigVMDrawSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMDrawInstruction;
class UScriptStruct* FRigVMDrawInstruction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMDrawInstruction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMDrawInstruction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDrawInstruction, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMDrawInstruction"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMDrawInstruction.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMDrawInstruction>()
{
	return FRigVMDrawInstruction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimitiveType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_PrimitiveType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Positions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Positions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Positions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMDrawInstruction.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMDrawInstruction>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "DrawInstruction" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMDrawInstruction.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMDrawInstruction, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::NewProp_PrimitiveType_MetaData[] = {
		{ "Category", "DrawInstruction" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMDrawInstruction.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::NewProp_PrimitiveType = { "PrimitiveType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMDrawInstruction, PrimitiveType), Z_Construct_UEnum_RigVM_ERigVMDrawSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::NewProp_PrimitiveType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::NewProp_PrimitiveType_MetaData)) }; // 730658013
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::NewProp_Positions_Inner = { "Positions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::NewProp_Positions_MetaData[] = {
		{ "Category", "DrawInstruction" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMDrawInstruction.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::NewProp_Positions = { "Positions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMDrawInstruction, Positions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::NewProp_Positions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::NewProp_Positions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "DrawInstruction" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMDrawInstruction.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMDrawInstruction, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::NewProp_Thickness_MetaData[] = {
		{ "Category", "DrawInstruction" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMDrawInstruction.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMDrawInstruction, Thickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::NewProp_Thickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::NewProp_Thickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "DrawInstruction" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMDrawInstruction.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMDrawInstruction, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::NewProp_Transform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::NewProp_PrimitiveType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::NewProp_Positions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::NewProp_Positions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::NewProp_Thickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::NewProp_Transform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		&NewStructOps,
		"RigVMDrawInstruction",
		sizeof(FRigVMDrawInstruction),
		alignof(FRigVMDrawInstruction),
		Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMDrawInstruction()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMDrawInstruction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMDrawInstruction.InnerSingleton, Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMDrawInstruction.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMDrawInstruction_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMDrawInstruction_h_Statics::EnumInfo[] = {
		{ ERigVMDrawSettings_StaticEnum, TEXT("ERigVMDrawSettings"), &Z_Registration_Info_UEnum_ERigVMDrawSettings, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 730658013U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMDrawInstruction_h_Statics::ScriptStructInfo[] = {
		{ FRigVMDrawInstruction::StaticStruct, Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::NewStructOps, TEXT("RigVMDrawInstruction"), &Z_Registration_Info_UScriptStruct_RigVMDrawInstruction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMDrawInstruction), 1536276154U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMDrawInstruction_h_1230359242(TEXT("/Script/RigVM"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMDrawInstruction_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMDrawInstruction_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMDrawInstruction_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMDrawInstruction_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
