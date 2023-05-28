// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/CustomSerializationData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomSerializationData() {}
// Cross Module References
	LEVELSNAPSHOTS_API UScriptStruct* Z_Construct_UScriptStruct_FCustomSerializationData();
	LEVELSNAPSHOTS_API UScriptStruct* Z_Construct_UScriptStruct_FCustomSubbjectSerializationData();
	LEVELSNAPSHOTS_API UScriptStruct* Z_Construct_UScriptStruct_FObjectSnapshotData();
	UPackage* Z_Construct_UPackage__Script_LevelSnapshots();
// End Cross Module References

static_assert(std::is_polymorphic<FCustomSubbjectSerializationData>() == std::is_polymorphic<FObjectSnapshotData>(), "USTRUCT FCustomSubbjectSerializationData cannot be polymorphic unless super FObjectSnapshotData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomSubbjectSerializationData;
class UScriptStruct* FCustomSubbjectSerializationData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomSubbjectSerializationData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomSubbjectSerializationData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomSubbjectSerializationData, (UObject*)Z_Construct_UPackage__Script_LevelSnapshots(), TEXT("CustomSubbjectSerializationData"));
	}
	return Z_Registration_Info_UScriptStruct_CustomSubbjectSerializationData.OuterSingleton;
}
template<> LEVELSNAPSHOTS_API UScriptStruct* StaticStruct<FCustomSubbjectSerializationData>()
{
	return FCustomSubbjectSerializationData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomSubbjectSerializationData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectPathIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ObjectPathIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SubobjectAnnotationData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubobjectAnnotationData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SubobjectAnnotationData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomSubbjectSerializationData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Data/CustomSerializationData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomSubbjectSerializationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomSubbjectSerializationData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomSubbjectSerializationData_Statics::NewProp_ObjectPathIndex_MetaData[] = {
		{ "Comment", "/* Valid index to FWorldSnapshotData::SerializedObjectReferences */" },
		{ "ModuleRelativePath", "Public/Data/CustomSerializationData.h" },
		{ "ToolTip", "Valid index to FWorldSnapshotData::SerializedObjectReferences" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCustomSubbjectSerializationData_Statics::NewProp_ObjectPathIndex = { "ObjectPathIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomSubbjectSerializationData, ObjectPathIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomSubbjectSerializationData_Statics::NewProp_ObjectPathIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomSubbjectSerializationData_Statics::NewProp_ObjectPathIndex_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCustomSubbjectSerializationData_Statics::NewProp_SubobjectAnnotationData_Inner = { "SubobjectAnnotationData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomSubbjectSerializationData_Statics::NewProp_SubobjectAnnotationData_MetaData[] = {
		{ "Comment", "/* Additional custom data saved by ICustomSnapshotSerializationData */" },
		{ "ModuleRelativePath", "Public/Data/CustomSerializationData.h" },
		{ "ToolTip", "Additional custom data saved by ICustomSnapshotSerializationData" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomSubbjectSerializationData_Statics::NewProp_SubobjectAnnotationData = { "SubobjectAnnotationData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomSubbjectSerializationData, SubobjectAnnotationData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomSubbjectSerializationData_Statics::NewProp_SubobjectAnnotationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomSubbjectSerializationData_Statics::NewProp_SubobjectAnnotationData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomSubbjectSerializationData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomSubbjectSerializationData_Statics::NewProp_ObjectPathIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomSubbjectSerializationData_Statics::NewProp_SubobjectAnnotationData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomSubbjectSerializationData_Statics::NewProp_SubobjectAnnotationData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomSubbjectSerializationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshots,
		Z_Construct_UScriptStruct_FObjectSnapshotData,
		&NewStructOps,
		"CustomSubbjectSerializationData",
		sizeof(FCustomSubbjectSerializationData),
		alignof(FCustomSubbjectSerializationData),
		Z_Construct_UScriptStruct_FCustomSubbjectSerializationData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomSubbjectSerializationData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomSubbjectSerializationData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomSubbjectSerializationData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomSubbjectSerializationData()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomSubbjectSerializationData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomSubbjectSerializationData.InnerSingleton, Z_Construct_UScriptStruct_FCustomSubbjectSerializationData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomSubbjectSerializationData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomSerializationData;
class UScriptStruct* FCustomSerializationData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomSerializationData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomSerializationData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomSerializationData, (UObject*)Z_Construct_UPackage__Script_LevelSnapshots(), TEXT("CustomSerializationData"));
	}
	return Z_Registration_Info_UScriptStruct_CustomSerializationData.OuterSingleton;
}
template<> LEVELSNAPSHOTS_API UScriptStruct* StaticStruct<FCustomSerializationData>()
{
	return FCustomSerializationData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomSerializationData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_RootAnnotationData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootAnnotationData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RootAnnotationData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Subobjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Subobjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Subobjects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomSerializationData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Data/CustomSerializationData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomSerializationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomSerializationData>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCustomSerializationData_Statics::NewProp_RootAnnotationData_Inner = { "RootAnnotationData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomSerializationData_Statics::NewProp_RootAnnotationData_MetaData[] = {
		{ "Comment", "/* Additional custom data saved by ICustomSnapshotSerializationData */" },
		{ "ModuleRelativePath", "Public/Data/CustomSerializationData.h" },
		{ "ToolTip", "Additional custom data saved by ICustomSnapshotSerializationData" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomSerializationData_Statics::NewProp_RootAnnotationData = { "RootAnnotationData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomSerializationData, RootAnnotationData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomSerializationData_Statics::NewProp_RootAnnotationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomSerializationData_Statics::NewProp_RootAnnotationData_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomSerializationData_Statics::NewProp_Subobjects_Inner = { "Subobjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCustomSubbjectSerializationData, METADATA_PARAMS(nullptr, 0) }; // 4177633772
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomSerializationData_Statics::NewProp_Subobjects_MetaData[] = {
		{ "Comment", "/* Data for all subobjects */" },
		{ "ModuleRelativePath", "Public/Data/CustomSerializationData.h" },
		{ "ToolTip", "Data for all subobjects" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomSerializationData_Statics::NewProp_Subobjects = { "Subobjects", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomSerializationData, Subobjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomSerializationData_Statics::NewProp_Subobjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomSerializationData_Statics::NewProp_Subobjects_MetaData)) }; // 4177633772
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomSerializationData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomSerializationData_Statics::NewProp_RootAnnotationData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomSerializationData_Statics::NewProp_RootAnnotationData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomSerializationData_Statics::NewProp_Subobjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomSerializationData_Statics::NewProp_Subobjects,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomSerializationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshots,
		nullptr,
		&NewStructOps,
		"CustomSerializationData",
		sizeof(FCustomSerializationData),
		alignof(FCustomSerializationData),
		Z_Construct_UScriptStruct_FCustomSerializationData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomSerializationData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomSerializationData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomSerializationData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomSerializationData()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomSerializationData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomSerializationData.InnerSingleton, Z_Construct_UScriptStruct_FCustomSerializationData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomSerializationData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_CustomSerializationData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_CustomSerializationData_h_Statics::ScriptStructInfo[] = {
		{ FCustomSubbjectSerializationData::StaticStruct, Z_Construct_UScriptStruct_FCustomSubbjectSerializationData_Statics::NewStructOps, TEXT("CustomSubbjectSerializationData"), &Z_Registration_Info_UScriptStruct_CustomSubbjectSerializationData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomSubbjectSerializationData), 4177633772U) },
		{ FCustomSerializationData::StaticStruct, Z_Construct_UScriptStruct_FCustomSerializationData_Statics::NewStructOps, TEXT("CustomSerializationData"), &Z_Registration_Info_UScriptStruct_CustomSerializationData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomSerializationData), 1933641368U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_CustomSerializationData_h_4138015794(TEXT("/Script/LevelSnapshots"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_CustomSerializationData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_CustomSerializationData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
