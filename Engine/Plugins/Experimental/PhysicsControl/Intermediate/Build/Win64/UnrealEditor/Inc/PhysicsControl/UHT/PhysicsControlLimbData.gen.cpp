// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysicsControlLimbData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsControlLimbData() {}
// Cross Module References
	PHYSICSCONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicsControlLimbBones();
	PHYSICSCONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicsControlLimbSetupData();
	PHYSICSCONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicsControlNames();
	UPackage* Z_Construct_UPackage__Script_PhysicsControl();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PhysicsControlLimbSetupData;
class UScriptStruct* FPhysicsControlLimbSetupData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PhysicsControlLimbSetupData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PhysicsControlLimbSetupData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhysicsControlLimbSetupData, (UObject*)Z_Construct_UPackage__Script_PhysicsControl(), TEXT("PhysicsControlLimbSetupData"));
	}
	return Z_Registration_Info_UScriptStruct_PhysicsControlLimbSetupData.OuterSingleton;
}
template<> PHYSICSCONTROL_API UScriptStruct* StaticStruct<FPhysicsControlLimbSetupData>()
{
	return FPhysicsControlLimbSetupData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPhysicsControlLimbSetupData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LimbName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LimbName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartBone_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_StartBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeParentBone_MetaData[];
#endif
		static void NewProp_bIncludeParentBone_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeParentBone;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsControlLimbSetupData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Setup data that is used to create the representation of a single limb. A limb is an array of \n * contiguous bones (e.g. left arm, or the spine etc). We can define it has the set of bones that\n * are children of a start bone (plus the start bone itself), plus optionally the parent of that start \n * bone (this is useful when defining the spine, since you will want to include the pelvis, but you \n * don't to include all the children of the pelvis since that would include the legs), but excluding \n * any bones that are already part of another limb. This implies limbs should be constructed in order\n * from leaf to root.\n */" },
		{ "ModuleRelativePath", "Public/PhysicsControlLimbData.h" },
		{ "ToolTip", "Setup data that is used to create the representation of a single limb. A limb is an array of\ncontiguous bones (e.g. left arm, or the spine etc). We can define it has the set of bones that\nare children of a start bone (plus the start bone itself), plus optionally the parent of that start\nbone (this is useful when defining the spine, since you will want to include the pelvis, but you\ndon't to include all the children of the pelvis since that would include the legs), but excluding\nany bones that are already part of another limb. This implies limbs should be constructed in order\nfrom leaf to root." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPhysicsControlLimbSetupData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhysicsControlLimbSetupData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsControlLimbSetupData_Statics::NewProp_LimbName_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/* The name of the limb that this will be used to create */" },
		{ "ModuleRelativePath", "Public/PhysicsControlLimbData.h" },
		{ "ToolTip", "The name of the limb that this will be used to create" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPhysicsControlLimbSetupData_Statics::NewProp_LimbName = { "LimbName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsControlLimbSetupData, LimbName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsControlLimbSetupData_Statics::NewProp_LimbName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsControlLimbSetupData_Statics::NewProp_LimbName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsControlLimbSetupData_Statics::NewProp_StartBone_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/* \n\x09 * Normally the root-most bone of the limb (e.g. left clavicle when defining the left arm) - so the\n\x09 * limb will contain children of this bone (plus this bone itself).\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlLimbData.h" },
		{ "ToolTip", "* Normally the root-most bone of the limb (e.g. left clavicle when defining the left arm) - so the\n* limb will contain children of this bone (plus this bone itself)." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPhysicsControlLimbSetupData_Statics::NewProp_StartBone = { "StartBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsControlLimbSetupData, StartBone), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsControlLimbSetupData_Statics::NewProp_StartBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsControlLimbSetupData_Statics::NewProp_StartBone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsControlLimbSetupData_Statics::NewProp_bIncludeParentBone_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/* \n\x09 * Whether or not to include the parent of the start bone. This is intended to be used for limbs like \n\x09 * the spine, where you would set StartBone = spine_01 but also expect to include the pelvis (parent \n\x09 * of spine_01) in the spine limb.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlLimbData.h" },
		{ "ToolTip", "* Whether or not to include the parent of the start bone. This is intended to be used for limbs like\n* the spine, where you would set StartBone = spine_01 but also expect to include the pelvis (parent\n* of spine_01) in the spine limb." },
	};
#endif
	void Z_Construct_UScriptStruct_FPhysicsControlLimbSetupData_Statics::NewProp_bIncludeParentBone_SetBit(void* Obj)
	{
		((FPhysicsControlLimbSetupData*)Obj)->bIncludeParentBone = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPhysicsControlLimbSetupData_Statics::NewProp_bIncludeParentBone = { "bIncludeParentBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPhysicsControlLimbSetupData), &Z_Construct_UScriptStruct_FPhysicsControlLimbSetupData_Statics::NewProp_bIncludeParentBone_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsControlLimbSetupData_Statics::NewProp_bIncludeParentBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsControlLimbSetupData_Statics::NewProp_bIncludeParentBone_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhysicsControlLimbSetupData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsControlLimbSetupData_Statics::NewProp_LimbName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsControlLimbSetupData_Statics::NewProp_StartBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsControlLimbSetupData_Statics::NewProp_bIncludeParentBone,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhysicsControlLimbSetupData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PhysicsControl,
		nullptr,
		&NewStructOps,
		"PhysicsControlLimbSetupData",
		sizeof(FPhysicsControlLimbSetupData),
		alignof(FPhysicsControlLimbSetupData),
		Z_Construct_UScriptStruct_FPhysicsControlLimbSetupData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsControlLimbSetupData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsControlLimbSetupData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsControlLimbSetupData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPhysicsControlLimbSetupData()
	{
		if (!Z_Registration_Info_UScriptStruct_PhysicsControlLimbSetupData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PhysicsControlLimbSetupData.InnerSingleton, Z_Construct_UScriptStruct_FPhysicsControlLimbSetupData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PhysicsControlLimbSetupData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PhysicsControlLimbBones;
class UScriptStruct* FPhysicsControlLimbBones::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PhysicsControlLimbBones.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PhysicsControlLimbBones.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhysicsControlLimbBones, (UObject*)Z_Construct_UPackage__Script_PhysicsControl(), TEXT("PhysicsControlLimbBones"));
	}
	return Z_Registration_Info_UScriptStruct_PhysicsControlLimbBones.OuterSingleton;
}
template<> PHYSICSCONTROL_API UScriptStruct* StaticStruct<FPhysicsControlLimbBones>()
{
	return FPhysicsControlLimbBones::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPhysicsControlLimbBones_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsControlLimbBones_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Wrapper for the array of bone names, so that the limbs can we can work with a map of arrays of names. \n */" },
		{ "ModuleRelativePath", "Public/PhysicsControlLimbData.h" },
		{ "ToolTip", "Wrapper for the array of bone names, so that the limbs can we can work with a map of arrays of names." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPhysicsControlLimbBones_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhysicsControlLimbBones>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhysicsControlLimbBones_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PhysicsControl,
		nullptr,
		&NewStructOps,
		"PhysicsControlLimbBones",
		sizeof(FPhysicsControlLimbBones),
		alignof(FPhysicsControlLimbBones),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsControlLimbBones_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsControlLimbBones_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPhysicsControlLimbBones()
	{
		if (!Z_Registration_Info_UScriptStruct_PhysicsControlLimbBones.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PhysicsControlLimbBones.InnerSingleton, Z_Construct_UScriptStruct_FPhysicsControlLimbBones_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PhysicsControlLimbBones.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PhysicsControlNames;
class UScriptStruct* FPhysicsControlNames::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PhysicsControlNames.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PhysicsControlNames.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhysicsControlNames, (UObject*)Z_Construct_UPackage__Script_PhysicsControl(), TEXT("PhysicsControlNames"));
	}
	return Z_Registration_Info_UScriptStruct_PhysicsControlNames.OuterSingleton;
}
template<> PHYSICSCONTROL_API UScriptStruct* StaticStruct<FPhysicsControlNames>()
{
	return FPhysicsControlNames::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPhysicsControlNames_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FNamePropertyParams NewProp_Names_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Names_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Names;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsControlNames_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Wrapper for the array of names, so that the control/modifier sets can we work with a map \n * of arrays of names. Note that in practice, the names will be of either controls or body modifiers.\n */" },
		{ "ModuleRelativePath", "Public/PhysicsControlLimbData.h" },
		{ "ToolTip", "Wrapper for the array of names, so that the control/modifier sets can we work with a map\nof arrays of names. Note that in practice, the names will be of either controls or body modifiers." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPhysicsControlNames_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhysicsControlNames>();
	}
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPhysicsControlNames_Statics::NewProp_Names_Inner = { "Names", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsControlNames_Statics::NewProp_Names_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/** The names of either controls of body modifiers (depending on context) */" },
		{ "ModuleRelativePath", "Public/PhysicsControlLimbData.h" },
		{ "ToolTip", "The names of either controls of body modifiers (depending on context)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPhysicsControlNames_Statics::NewProp_Names = { "Names", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsControlNames, Names), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsControlNames_Statics::NewProp_Names_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsControlNames_Statics::NewProp_Names_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhysicsControlNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsControlNames_Statics::NewProp_Names_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsControlNames_Statics::NewProp_Names,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhysicsControlNames_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PhysicsControl,
		nullptr,
		&NewStructOps,
		"PhysicsControlNames",
		sizeof(FPhysicsControlNames),
		alignof(FPhysicsControlNames),
		Z_Construct_UScriptStruct_FPhysicsControlNames_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsControlNames_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsControlNames_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsControlNames_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPhysicsControlNames()
	{
		if (!Z_Registration_Info_UScriptStruct_PhysicsControlNames.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PhysicsControlNames.InnerSingleton, Z_Construct_UScriptStruct_FPhysicsControlNames_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PhysicsControlNames.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlLimbData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlLimbData_h_Statics::ScriptStructInfo[] = {
		{ FPhysicsControlLimbSetupData::StaticStruct, Z_Construct_UScriptStruct_FPhysicsControlLimbSetupData_Statics::NewStructOps, TEXT("PhysicsControlLimbSetupData"), &Z_Registration_Info_UScriptStruct_PhysicsControlLimbSetupData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPhysicsControlLimbSetupData), 3622788549U) },
		{ FPhysicsControlLimbBones::StaticStruct, Z_Construct_UScriptStruct_FPhysicsControlLimbBones_Statics::NewStructOps, TEXT("PhysicsControlLimbBones"), &Z_Registration_Info_UScriptStruct_PhysicsControlLimbBones, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPhysicsControlLimbBones), 2226329897U) },
		{ FPhysicsControlNames::StaticStruct, Z_Construct_UScriptStruct_FPhysicsControlNames_Statics::NewStructOps, TEXT("PhysicsControlNames"), &Z_Registration_Info_UScriptStruct_PhysicsControlNames, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPhysicsControlNames), 2330063555U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlLimbData_h_3849977851(TEXT("/Script/PhysicsControl"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlLimbData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlLimbData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
