// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rigs/RigSpaceHierarchy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigSpaceHierarchy() {}
// Cross Module References
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigSpaceType();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElement();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigSpace();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigSpaceHierarchy();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigSpaceType;
	static UEnum* ERigSpaceType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERigSpaceType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERigSpaceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigSpaceType, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ERigSpaceType"));
		}
		return Z_Registration_Info_UEnum_ERigSpaceType.OuterSingleton;
	}
	template<> CONTROLRIG_API UEnum* StaticEnum<ERigSpaceType>()
	{
		return ERigSpaceType_StaticEnum();
	}
	struct Z_Construct_UEnum_ControlRig_ERigSpaceType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ControlRig_ERigSpaceType_Statics::Enumerators[] = {
		{ "ERigSpaceType::Global", (int64)ERigSpaceType::Global },
		{ "ERigSpaceType::Bone", (int64)ERigSpaceType::Bone },
		{ "ERigSpaceType::Control", (int64)ERigSpaceType::Control },
		{ "ERigSpaceType::Space", (int64)ERigSpaceType::Space },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ControlRig_ERigSpaceType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Bone.Comment", "/** Attached to a bone */" },
		{ "Bone.Name", "ERigSpaceType::Bone" },
		{ "Bone.ToolTip", "Attached to a bone" },
		{ "Control.Comment", "/** Attached to a control */" },
		{ "Control.Name", "ERigSpaceType::Control" },
		{ "Control.ToolTip", "Attached to a control" },
		{ "Global.Comment", "/** Not attached to anything */" },
		{ "Global.Name", "ERigSpaceType::Global" },
		{ "Global.ToolTip", "Not attached to anything" },
		{ "ModuleRelativePath", "Public/Rigs/RigSpaceHierarchy.h" },
		{ "Space.Comment", "/** Attached to a space*/" },
		{ "Space.Name", "ERigSpaceType::Space" },
		{ "Space.ToolTip", "Attached to a space" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_ERigSpaceType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		"ERigSpaceType",
		"ERigSpaceType",
		Z_Construct_UEnum_ControlRig_ERigSpaceType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigSpaceType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ControlRig_ERigSpaceType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigSpaceType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ControlRig_ERigSpaceType()
	{
		if (!Z_Registration_Info_UEnum_ERigSpaceType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigSpaceType.InnerSingleton, Z_Construct_UEnum_ControlRig_ERigSpaceType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERigSpaceType.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigSpace>() == std::is_polymorphic<FRigElement>(), "USTRUCT FRigSpace cannot be polymorphic unless super FRigElement is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigSpace;
class UScriptStruct* FRigSpace::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigSpace.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigSpace.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigSpace, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigSpace"));
	}
	return Z_Registration_Info_UScriptStruct_RigSpace.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigSpace>()
{
	return FRigSpace::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigSpace_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_SpaceType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpaceType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SpaceType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParentName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ParentIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitialTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigSpace_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigSpaceHierarchy.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigSpace_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigSpace>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigSpace_Statics::NewProp_SpaceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigSpace_Statics::NewProp_SpaceType_MetaData[] = {
		{ "Category", "FRigElement" },
		{ "ModuleRelativePath", "Public/Rigs/RigSpaceHierarchy.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigSpace_Statics::NewProp_SpaceType = { "SpaceType", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigSpace, SpaceType), Z_Construct_UEnum_ControlRig_ERigSpaceType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigSpace_Statics::NewProp_SpaceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigSpace_Statics::NewProp_SpaceType_MetaData)) }; // 335326820
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigSpace_Statics::NewProp_ParentName_MetaData[] = {
		{ "Category", "FRigElement" },
		{ "ModuleRelativePath", "Public/Rigs/RigSpaceHierarchy.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigSpace_Statics::NewProp_ParentName = { "ParentName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigSpace, ParentName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigSpace_Statics::NewProp_ParentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigSpace_Statics::NewProp_ParentName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigSpace_Statics::NewProp_ParentIndex_MetaData[] = {
		{ "Category", "FRigElement" },
		{ "ModuleRelativePath", "Public/Rigs/RigSpaceHierarchy.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigSpace_Statics::NewProp_ParentIndex = { "ParentIndex", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigSpace, ParentIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigSpace_Statics::NewProp_ParentIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigSpace_Statics::NewProp_ParentIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigSpace_Statics::NewProp_InitialTransform_MetaData[] = {
		{ "Category", "FRigElement" },
		{ "ModuleRelativePath", "Public/Rigs/RigSpaceHierarchy.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigSpace_Statics::NewProp_InitialTransform = { "InitialTransform", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigSpace, InitialTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigSpace_Statics::NewProp_InitialTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigSpace_Statics::NewProp_InitialTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigSpace_Statics::NewProp_LocalTransform_MetaData[] = {
		{ "Category", "FRigElement" },
		{ "ModuleRelativePath", "Public/Rigs/RigSpaceHierarchy.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigSpace_Statics::NewProp_LocalTransform = { "LocalTransform", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigSpace, LocalTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigSpace_Statics::NewProp_LocalTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigSpace_Statics::NewProp_LocalTransform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigSpace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigSpace_Statics::NewProp_SpaceType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigSpace_Statics::NewProp_SpaceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigSpace_Statics::NewProp_ParentName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigSpace_Statics::NewProp_ParentIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigSpace_Statics::NewProp_InitialTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigSpace_Statics::NewProp_LocalTransform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigSpace_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigElement,
		&NewStructOps,
		"RigSpace",
		sizeof(FRigSpace),
		alignof(FRigSpace),
		Z_Construct_UScriptStruct_FRigSpace_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigSpace_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigSpace_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigSpace_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigSpace()
	{
		if (!Z_Registration_Info_UScriptStruct_RigSpace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigSpace.InnerSingleton, Z_Construct_UScriptStruct_FRigSpace_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigSpace.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigSpaceHierarchy;
class UScriptStruct* FRigSpaceHierarchy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigSpaceHierarchy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigSpaceHierarchy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigSpaceHierarchy, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigSpaceHierarchy"));
	}
	return Z_Registration_Info_UScriptStruct_RigSpaceHierarchy.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigSpaceHierarchy>()
{
	return FRigSpaceHierarchy::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigSpaceHierarchy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Spaces_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spaces_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Spaces;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigSpaceHierarchy_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigSpaceHierarchy.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigSpaceHierarchy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigSpaceHierarchy>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigSpaceHierarchy_Statics::NewProp_Spaces_Inner = { "Spaces", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigSpace, METADATA_PARAMS(nullptr, 0) }; // 3604071643
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigSpaceHierarchy_Statics::NewProp_Spaces_MetaData[] = {
		{ "Category", "FRigSpaceHierarchy" },
		{ "ModuleRelativePath", "Public/Rigs/RigSpaceHierarchy.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigSpaceHierarchy_Statics::NewProp_Spaces = { "Spaces", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigSpaceHierarchy, Spaces), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigSpaceHierarchy_Statics::NewProp_Spaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigSpaceHierarchy_Statics::NewProp_Spaces_MetaData)) }; // 3604071643
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigSpaceHierarchy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigSpaceHierarchy_Statics::NewProp_Spaces_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigSpaceHierarchy_Statics::NewProp_Spaces,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigSpaceHierarchy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigSpaceHierarchy",
		sizeof(FRigSpaceHierarchy),
		alignof(FRigSpaceHierarchy),
		Z_Construct_UScriptStruct_FRigSpaceHierarchy_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigSpaceHierarchy_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigSpaceHierarchy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigSpaceHierarchy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigSpaceHierarchy()
	{
		if (!Z_Registration_Info_UScriptStruct_RigSpaceHierarchy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigSpaceHierarchy.InnerSingleton, Z_Construct_UScriptStruct_FRigSpaceHierarchy_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigSpaceHierarchy.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigSpaceHierarchy_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigSpaceHierarchy_h_Statics::EnumInfo[] = {
		{ ERigSpaceType_StaticEnum, TEXT("ERigSpaceType"), &Z_Registration_Info_UEnum_ERigSpaceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 335326820U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigSpaceHierarchy_h_Statics::ScriptStructInfo[] = {
		{ FRigSpace::StaticStruct, Z_Construct_UScriptStruct_FRigSpace_Statics::NewStructOps, TEXT("RigSpace"), &Z_Registration_Info_UScriptStruct_RigSpace, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigSpace), 3604071643U) },
		{ FRigSpaceHierarchy::StaticStruct, Z_Construct_UScriptStruct_FRigSpaceHierarchy_Statics::NewStructOps, TEXT("RigSpaceHierarchy"), &Z_Registration_Info_UScriptStruct_RigSpaceHierarchy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigSpaceHierarchy), 2330516979U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigSpaceHierarchy_h_3525679315(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigSpaceHierarchy_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigSpaceHierarchy_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigSpaceHierarchy_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigSpaceHierarchy_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
