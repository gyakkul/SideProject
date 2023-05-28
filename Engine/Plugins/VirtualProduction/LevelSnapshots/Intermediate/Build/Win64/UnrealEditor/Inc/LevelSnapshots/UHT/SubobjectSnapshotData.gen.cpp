// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/SubobjectSnapshotData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubobjectSnapshotData() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	LEVELSNAPSHOTS_API UScriptStruct* Z_Construct_UScriptStruct_FObjectSnapshotData();
	LEVELSNAPSHOTS_API UScriptStruct* Z_Construct_UScriptStruct_FSubobjectSnapshotData();
	UPackage* Z_Construct_UPackage__Script_LevelSnapshots();
// End Cross Module References

static_assert(std::is_polymorphic<FSubobjectSnapshotData>() == std::is_polymorphic<FObjectSnapshotData>(), "USTRUCT FSubobjectSnapshotData cannot be polymorphic unless super FObjectSnapshotData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SubobjectSnapshotData;
class UScriptStruct* FSubobjectSnapshotData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SubobjectSnapshotData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SubobjectSnapshotData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubobjectSnapshotData, (UObject*)Z_Construct_UPackage__Script_LevelSnapshots(), TEXT("SubobjectSnapshotData"));
	}
	return Z_Registration_Info_UScriptStruct_SubobjectSnapshotData.OuterSingleton;
}
template<> LEVELSNAPSHOTS_API UScriptStruct* StaticStruct<FSubobjectSnapshotData>()
{
	return FSubobjectSnapshotData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSubobjectSnapshotData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OuterIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OuterIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Class;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ClassIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWasSkippedClass_MetaData[];
#endif
		static void NewProp_bWasSkippedClass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSkippedClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubobjectSnapshotData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Data saved for subobjects, such as components. */" },
		{ "ModuleRelativePath", "Public/Data/SubobjectSnapshotData.h" },
		{ "ToolTip", "Data saved for subobjects, such as components." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubobjectSnapshotData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubobjectSnapshotData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubobjectSnapshotData_Statics::NewProp_OuterIndex_MetaData[] = {
		{ "Comment", "/** Index to FWorldSnapshotData::SerializedObjectReferences */" },
		{ "ModuleRelativePath", "Public/Data/SubobjectSnapshotData.h" },
		{ "ToolTip", "Index to FWorldSnapshotData::SerializedObjectReferences" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSubobjectSnapshotData_Statics::NewProp_OuterIndex = { "OuterIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubobjectSnapshotData, OuterIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubobjectSnapshotData_Statics::NewProp_OuterIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubobjectSnapshotData_Statics::NewProp_OuterIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubobjectSnapshotData_Statics::NewProp_Class_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/SubobjectSnapshotData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubobjectSnapshotData_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubobjectSnapshotData, Class_DEPRECATED), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubobjectSnapshotData_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubobjectSnapshotData_Statics::NewProp_Class_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubobjectSnapshotData_Statics::NewProp_ClassIndex_MetaData[] = {
		{ "Comment", "/** Valid index to FWorldSnapshotData::ClassData. Use to lookup class and archetype data. */" },
		{ "ModuleRelativePath", "Public/Data/SubobjectSnapshotData.h" },
		{ "ToolTip", "Valid index to FWorldSnapshotData::ClassData. Use to lookup class and archetype data." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSubobjectSnapshotData_Statics::NewProp_ClassIndex = { "ClassIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubobjectSnapshotData, ClassIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubobjectSnapshotData_Statics::NewProp_ClassIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubobjectSnapshotData_Statics::NewProp_ClassIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubobjectSnapshotData_Statics::NewProp_bWasSkippedClass_MetaData[] = {
		{ "Comment", "/** Whether this object was marked as unsupported when the snapshot was taken */" },
		{ "ModuleRelativePath", "Public/Data/SubobjectSnapshotData.h" },
		{ "ToolTip", "Whether this object was marked as unsupported when the snapshot was taken" },
	};
#endif
	void Z_Construct_UScriptStruct_FSubobjectSnapshotData_Statics::NewProp_bWasSkippedClass_SetBit(void* Obj)
	{
		((FSubobjectSnapshotData*)Obj)->bWasSkippedClass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubobjectSnapshotData_Statics::NewProp_bWasSkippedClass = { "bWasSkippedClass", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSubobjectSnapshotData), &Z_Construct_UScriptStruct_FSubobjectSnapshotData_Statics::NewProp_bWasSkippedClass_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubobjectSnapshotData_Statics::NewProp_bWasSkippedClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubobjectSnapshotData_Statics::NewProp_bWasSkippedClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubobjectSnapshotData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubobjectSnapshotData_Statics::NewProp_OuterIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubobjectSnapshotData_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubobjectSnapshotData_Statics::NewProp_ClassIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubobjectSnapshotData_Statics::NewProp_bWasSkippedClass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubobjectSnapshotData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshots,
		Z_Construct_UScriptStruct_FObjectSnapshotData,
		&NewStructOps,
		"SubobjectSnapshotData",
		sizeof(FSubobjectSnapshotData),
		alignof(FSubobjectSnapshotData),
		Z_Construct_UScriptStruct_FSubobjectSnapshotData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubobjectSnapshotData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubobjectSnapshotData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubobjectSnapshotData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubobjectSnapshotData()
	{
		if (!Z_Registration_Info_UScriptStruct_SubobjectSnapshotData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SubobjectSnapshotData.InnerSingleton, Z_Construct_UScriptStruct_FSubobjectSnapshotData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SubobjectSnapshotData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_SubobjectSnapshotData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_SubobjectSnapshotData_h_Statics::ScriptStructInfo[] = {
		{ FSubobjectSnapshotData::StaticStruct, Z_Construct_UScriptStruct_FSubobjectSnapshotData_Statics::NewStructOps, TEXT("SubobjectSnapshotData"), &Z_Registration_Info_UScriptStruct_SubobjectSnapshotData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSubobjectSnapshotData), 3414843011U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_SubobjectSnapshotData_h_1892154846(TEXT("/Script/LevelSnapshots"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_SubobjectSnapshotData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_SubobjectSnapshotData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
