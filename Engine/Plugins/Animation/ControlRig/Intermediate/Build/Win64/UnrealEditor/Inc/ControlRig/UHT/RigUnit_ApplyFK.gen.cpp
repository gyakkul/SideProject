// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Units/Deprecated/RigUnit_ApplyFK.h"
#include "Constraint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_ApplyFK() {}
// Cross Module References
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FTransformFilter();
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_EApplyTransformMode();
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ETransformSpaceMode();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ApplyFK();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnitMutable();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EApplyTransformMode;
	static UEnum* EApplyTransformMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EApplyTransformMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EApplyTransformMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_EApplyTransformMode, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("EApplyTransformMode"));
		}
		return Z_Registration_Info_UEnum_EApplyTransformMode.OuterSingleton;
	}
	template<> CONTROLRIG_API UEnum* StaticEnum<EApplyTransformMode>()
	{
		return EApplyTransformMode_StaticEnum();
	}
	struct Z_Construct_UEnum_ControlRig_EApplyTransformMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ControlRig_EApplyTransformMode_Statics::Enumerators[] = {
		{ "EApplyTransformMode::Override", (int64)EApplyTransformMode::Override },
		{ "EApplyTransformMode::Additive", (int64)EApplyTransformMode::Additive },
		{ "EApplyTransformMode::Max", (int64)EApplyTransformMode::Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ControlRig_EApplyTransformMode_Statics::Enum_MetaDataParams[] = {
		{ "Additive.Comment", "/** Additive to existing motion*/" },
		{ "Additive.Name", "EApplyTransformMode::Additive" },
		{ "Additive.ToolTip", "Additive to existing motion" },
		{ "Max.Comment", "/** MAX - invalid */" },
		{ "Max.Hidden", "" },
		{ "Max.Name", "EApplyTransformMode::Max" },
		{ "Max.ToolTip", "MAX - invalid" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/RigUnit_ApplyFK.h" },
		{ "Override.Comment", "/** Override existing motion */" },
		{ "Override.Name", "EApplyTransformMode::Override" },
		{ "Override.ToolTip", "Override existing motion" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_EApplyTransformMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		"EApplyTransformMode",
		"EApplyTransformMode",
		Z_Construct_UEnum_ControlRig_EApplyTransformMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_EApplyTransformMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ControlRig_EApplyTransformMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_EApplyTransformMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ControlRig_EApplyTransformMode()
	{
		if (!Z_Registration_Info_UEnum_EApplyTransformMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EApplyTransformMode.InnerSingleton, Z_Construct_UEnum_ControlRig_EApplyTransformMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EApplyTransformMode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_ApplyFK>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_ApplyFK cannot be polymorphic unless super FRigUnitMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ApplyFK;
class UScriptStruct* FRigUnit_ApplyFK::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ApplyFK.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ApplyFK.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ApplyFK, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ApplyFK"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_ApplyFK_Execute;
		Arguments_FRigUnit_ApplyFK_Execute.Emplace(TEXT("Joint"), TEXT("FName"));
		Arguments_FRigUnit_ApplyFK_Execute.Emplace(TEXT("Transform"), TEXT("FTransform"));
		Arguments_FRigUnit_ApplyFK_Execute.Emplace(TEXT("Filter"), TEXT("FTransformFilter"));
		Arguments_FRigUnit_ApplyFK_Execute.Emplace(TEXT("ApplyTransformMode"), TEXT("EApplyTransformMode"));
		Arguments_FRigUnit_ApplyFK_Execute.Emplace(TEXT("ApplyTransformSpace"), TEXT("ETransformSpaceMode"));
		Arguments_FRigUnit_ApplyFK_Execute.Emplace(TEXT("BaseTransform"), TEXT("FTransform"));
		Arguments_FRigUnit_ApplyFK_Execute.Emplace(TEXT("BaseJoint"), TEXT("FName"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ApplyFK::Execute"), &FRigUnit_ApplyFK::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_ApplyFK.OuterSingleton, Arguments_FRigUnit_ApplyFK_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ApplyFK.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ApplyFK>()
{
	return FRigUnit_ApplyFK::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_ApplyFK_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Joint_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Joint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Filter;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ApplyTransformMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApplyTransformMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ApplyTransformMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ApplyTransformSpace_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApplyTransformSpace_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ApplyTransformSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseJoint_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BaseJoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ApplyFK_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Transforms" },
		{ "Deprecated", "4.23.0" },
		{ "DisplayName", "Apply FK" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/RigUnit_ApplyFK.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_ApplyFK_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ApplyFK>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ApplyFK_Statics::NewProp_Joint_MetaData[] = {
		{ "Category", "ApplyFK" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/RigUnit_ApplyFK.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_ApplyFK_Statics::NewProp_Joint = { "Joint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ApplyFK, Joint), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ApplyFK_Statics::NewProp_Joint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ApplyFK_Statics::NewProp_Joint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ApplyFK_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/RigUnit_ApplyFK.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ApplyFK_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ApplyFK, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ApplyFK_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ApplyFK_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ApplyFK_Statics::NewProp_Filter_MetaData[] = {
		{ "Category", "ApplyFK" },
		{ "Comment", "/** The filter determines what axes can be manipulated by the in-viewport widgets */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/RigUnit_ApplyFK.h" },
		{ "ToolTip", "The filter determines what axes can be manipulated by the in-viewport widgets" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ApplyFK_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ApplyFK, Filter), Z_Construct_UScriptStruct_FTransformFilter, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ApplyFK_Statics::NewProp_Filter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ApplyFK_Statics::NewProp_Filter_MetaData)) }; // 3739889549
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_ApplyFK_Statics::NewProp_ApplyTransformMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ApplyFK_Statics::NewProp_ApplyTransformMode_MetaData[] = {
		{ "Category", "ApplyFK" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/RigUnit_ApplyFK.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_ApplyFK_Statics::NewProp_ApplyTransformMode = { "ApplyTransformMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ApplyFK, ApplyTransformMode), Z_Construct_UEnum_ControlRig_EApplyTransformMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ApplyFK_Statics::NewProp_ApplyTransformMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ApplyFK_Statics::NewProp_ApplyTransformMode_MetaData)) }; // 521026271
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_ApplyFK_Statics::NewProp_ApplyTransformSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ApplyFK_Statics::NewProp_ApplyTransformSpace_MetaData[] = {
		{ "Category", "ApplyFK" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/RigUnit_ApplyFK.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_ApplyFK_Statics::NewProp_ApplyTransformSpace = { "ApplyTransformSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ApplyFK, ApplyTransformSpace), Z_Construct_UEnum_ControlRig_ETransformSpaceMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ApplyFK_Statics::NewProp_ApplyTransformSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ApplyFK_Statics::NewProp_ApplyTransformSpace_MetaData)) }; // 1500292170
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ApplyFK_Statics::NewProp_BaseTransform_MetaData[] = {
		{ "Category", "ApplyFK" },
		{ "Comment", "// Transform op option. Use if ETransformSpace is BaseTransform\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/RigUnit_ApplyFK.h" },
		{ "ToolTip", "Transform op option. Use if ETransformSpace is BaseTransform" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ApplyFK_Statics::NewProp_BaseTransform = { "BaseTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ApplyFK, BaseTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ApplyFK_Statics::NewProp_BaseTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ApplyFK_Statics::NewProp_BaseTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ApplyFK_Statics::NewProp_BaseJoint_MetaData[] = {
		{ "Category", "ApplyFK" },
		{ "Comment", "// Transform op option. Use if ETransformSpace is BaseJoint\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/RigUnit_ApplyFK.h" },
		{ "ToolTip", "Transform op option. Use if ETransformSpace is BaseJoint" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_ApplyFK_Statics::NewProp_BaseJoint = { "BaseJoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ApplyFK, BaseJoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ApplyFK_Statics::NewProp_BaseJoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ApplyFK_Statics::NewProp_BaseJoint_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ApplyFK_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ApplyFK_Statics::NewProp_Joint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ApplyFK_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ApplyFK_Statics::NewProp_Filter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ApplyFK_Statics::NewProp_ApplyTransformMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ApplyFK_Statics::NewProp_ApplyTransformMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ApplyFK_Statics::NewProp_ApplyTransformSpace_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ApplyFK_Statics::NewProp_ApplyTransformSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ApplyFK_Statics::NewProp_BaseTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ApplyFK_Statics::NewProp_BaseJoint,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ApplyFK_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnitMutable,
		&NewStructOps,
		"RigUnit_ApplyFK",
		sizeof(FRigUnit_ApplyFK),
		alignof(FRigUnit_ApplyFK),
		Z_Construct_UScriptStruct_FRigUnit_ApplyFK_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ApplyFK_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ApplyFK_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ApplyFK_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ApplyFK()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_ApplyFK.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ApplyFK.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ApplyFK_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_ApplyFK.InnerSingleton;
	}

void FRigUnit_ApplyFK::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_ApplyFK::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Joint,
		Transform,
		Filter,
		ApplyTransformMode,
		ApplyTransformSpace,
		BaseTransform,
		BaseJoint
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_RigUnit_ApplyFK_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_RigUnit_ApplyFK_h_Statics::EnumInfo[] = {
		{ EApplyTransformMode_StaticEnum, TEXT("EApplyTransformMode"), &Z_Registration_Info_UEnum_EApplyTransformMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 521026271U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_RigUnit_ApplyFK_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_ApplyFK::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ApplyFK_Statics::NewStructOps, TEXT("RigUnit_ApplyFK"), &Z_Registration_Info_UScriptStruct_RigUnit_ApplyFK, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ApplyFK), 2787681821U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_RigUnit_ApplyFK_h_2155976262(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_RigUnit_ApplyFK_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_RigUnit_ApplyFK_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_RigUnit_ApplyFK_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_RigUnit_ApplyFK_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
