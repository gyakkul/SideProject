// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryScript/GeometryScriptSelectionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryScriptSelectionTypes() {}
// Cross Module References
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptCombineSelectionMode();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptEmptySelectionBehavior();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshSelectionConversionType();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshSelectionType();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptMeshSelection();
	UPackage* Z_Construct_UPackage__Script_GeometryScriptingCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryScriptMeshSelectionType;
	static UEnum* EGeometryScriptMeshSelectionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptMeshSelectionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometryScriptMeshSelectionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshSelectionType, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("EGeometryScriptMeshSelectionType"));
		}
		return Z_Registration_Info_UEnum_EGeometryScriptMeshSelectionType.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptMeshSelectionType>()
	{
		return EGeometryScriptMeshSelectionType_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshSelectionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshSelectionType_Statics::Enumerators[] = {
		{ "EGeometryScriptMeshSelectionType::Vertices", (int64)EGeometryScriptMeshSelectionType::Vertices },
		{ "EGeometryScriptMeshSelectionType::Triangles", (int64)EGeometryScriptMeshSelectionType::Triangles },
		{ "EGeometryScriptMeshSelectionType::Polygroups", (int64)EGeometryScriptMeshSelectionType::Polygroups },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshSelectionType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Type of index stored in a FGeometryScriptMeshSelection\n */" },
		{ "ModuleRelativePath", "Public/GeometryScript/GeometryScriptSelectionTypes.h" },
		{ "Polygroups.DisplayName", "PolyGroups" },
		{ "Polygroups.Name", "EGeometryScriptMeshSelectionType::Polygroups" },
		{ "ToolTip", "Type of index stored in a FGeometryScriptMeshSelection" },
		{ "Triangles.Name", "EGeometryScriptMeshSelectionType::Triangles" },
		{ "Vertices.Name", "EGeometryScriptMeshSelectionType::Vertices" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshSelectionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		"EGeometryScriptMeshSelectionType",
		"EGeometryScriptMeshSelectionType",
		Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshSelectionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshSelectionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshSelectionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshSelectionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshSelectionType()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptMeshSelectionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryScriptMeshSelectionType.InnerSingleton, Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshSelectionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometryScriptMeshSelectionType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryScriptMeshSelectionConversionType;
	static UEnum* EGeometryScriptMeshSelectionConversionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptMeshSelectionConversionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometryScriptMeshSelectionConversionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshSelectionConversionType, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("EGeometryScriptMeshSelectionConversionType"));
		}
		return Z_Registration_Info_UEnum_EGeometryScriptMeshSelectionConversionType.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptMeshSelectionConversionType>()
	{
		return EGeometryScriptMeshSelectionConversionType_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshSelectionConversionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshSelectionConversionType_Statics::Enumerators[] = {
		{ "EGeometryScriptMeshSelectionConversionType::NoConversion", (int64)EGeometryScriptMeshSelectionConversionType::NoConversion },
		{ "EGeometryScriptMeshSelectionConversionType::ToVertices", (int64)EGeometryScriptMeshSelectionConversionType::ToVertices },
		{ "EGeometryScriptMeshSelectionConversionType::ToTriangles", (int64)EGeometryScriptMeshSelectionConversionType::ToTriangles },
		{ "EGeometryScriptMeshSelectionConversionType::ToPolygroups", (int64)EGeometryScriptMeshSelectionConversionType::ToPolygroups },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshSelectionConversionType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Type of Conversion to apply to a FGeometryScriptMeshSelection\n */" },
		{ "ModuleRelativePath", "Public/GeometryScript/GeometryScriptSelectionTypes.h" },
		{ "NoConversion.Name", "EGeometryScriptMeshSelectionConversionType::NoConversion" },
		{ "ToolTip", "Type of Conversion to apply to a FGeometryScriptMeshSelection" },
		{ "ToPolygroups.DisplayName", "To PolyGroups" },
		{ "ToPolygroups.Name", "EGeometryScriptMeshSelectionConversionType::ToPolygroups" },
		{ "ToTriangles.Name", "EGeometryScriptMeshSelectionConversionType::ToTriangles" },
		{ "ToVertices.Name", "EGeometryScriptMeshSelectionConversionType::ToVertices" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshSelectionConversionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		"EGeometryScriptMeshSelectionConversionType",
		"EGeometryScriptMeshSelectionConversionType",
		Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshSelectionConversionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshSelectionConversionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshSelectionConversionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshSelectionConversionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshSelectionConversionType()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptMeshSelectionConversionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryScriptMeshSelectionConversionType.InnerSingleton, Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshSelectionConversionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometryScriptMeshSelectionConversionType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryScriptCombineSelectionMode;
	static UEnum* EGeometryScriptCombineSelectionMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptCombineSelectionMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometryScriptCombineSelectionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptCombineSelectionMode, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("EGeometryScriptCombineSelectionMode"));
		}
		return Z_Registration_Info_UEnum_EGeometryScriptCombineSelectionMode.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptCombineSelectionMode>()
	{
		return EGeometryScriptCombineSelectionMode_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptCombineSelectionMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptCombineSelectionMode_Statics::Enumerators[] = {
		{ "EGeometryScriptCombineSelectionMode::Add", (int64)EGeometryScriptCombineSelectionMode::Add },
		{ "EGeometryScriptCombineSelectionMode::Subtract", (int64)EGeometryScriptCombineSelectionMode::Subtract },
		{ "EGeometryScriptCombineSelectionMode::Intersection", (int64)EGeometryScriptCombineSelectionMode::Intersection },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptCombineSelectionMode_Statics::Enum_MetaDataParams[] = {
		{ "Add.Name", "EGeometryScriptCombineSelectionMode::Add" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Type of Combine operation to use when combining multiple FGeometryScriptMeshSelection\n */" },
		{ "Intersection.Name", "EGeometryScriptCombineSelectionMode::Intersection" },
		{ "ModuleRelativePath", "Public/GeometryScript/GeometryScriptSelectionTypes.h" },
		{ "Subtract.Name", "EGeometryScriptCombineSelectionMode::Subtract" },
		{ "ToolTip", "Type of Combine operation to use when combining multiple FGeometryScriptMeshSelection" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptCombineSelectionMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		"EGeometryScriptCombineSelectionMode",
		"EGeometryScriptCombineSelectionMode",
		Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptCombineSelectionMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptCombineSelectionMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptCombineSelectionMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptCombineSelectionMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptCombineSelectionMode()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptCombineSelectionMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryScriptCombineSelectionMode.InnerSingleton, Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptCombineSelectionMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometryScriptCombineSelectionMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryScriptEmptySelectionBehavior;
	static UEnum* EGeometryScriptEmptySelectionBehavior_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptEmptySelectionBehavior.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometryScriptEmptySelectionBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptEmptySelectionBehavior, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("EGeometryScriptEmptySelectionBehavior"));
		}
		return Z_Registration_Info_UEnum_EGeometryScriptEmptySelectionBehavior.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptEmptySelectionBehavior>()
	{
		return EGeometryScriptEmptySelectionBehavior_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptEmptySelectionBehavior_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptEmptySelectionBehavior_Statics::Enumerators[] = {
		{ "EGeometryScriptEmptySelectionBehavior::FullMeshSelection", (int64)EGeometryScriptEmptySelectionBehavior::FullMeshSelection },
		{ "EGeometryScriptEmptySelectionBehavior::EmptySelection", (int64)EGeometryScriptEmptySelectionBehavior::EmptySelection },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptEmptySelectionBehavior_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Behavior of operations when a MeshSelection is empty\n */" },
		{ "EmptySelection.Name", "EGeometryScriptEmptySelectionBehavior::EmptySelection" },
		{ "FullMeshSelection.Name", "EGeometryScriptEmptySelectionBehavior::FullMeshSelection" },
		{ "ModuleRelativePath", "Public/GeometryScript/GeometryScriptSelectionTypes.h" },
		{ "ToolTip", "Behavior of operations when a MeshSelection is empty" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptEmptySelectionBehavior_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		"EGeometryScriptEmptySelectionBehavior",
		"EGeometryScriptEmptySelectionBehavior",
		Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptEmptySelectionBehavior_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptEmptySelectionBehavior_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptEmptySelectionBehavior_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptEmptySelectionBehavior_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptEmptySelectionBehavior()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptEmptySelectionBehavior.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryScriptEmptySelectionBehavior.InnerSingleton, Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptEmptySelectionBehavior_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometryScriptEmptySelectionBehavior.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptMeshSelection;
class UScriptStruct* FGeometryScriptMeshSelection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptMeshSelection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptMeshSelection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptMeshSelection, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptMeshSelection"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptMeshSelection.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptMeshSelection>()
{
	return FGeometryScriptMeshSelection::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptMeshSelection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshSelection_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FGeometryScriptMeshSelection is a container for a Mesh Selection used in Geometry Script.\n * The actual selection representation is not exposed to BP, \n * use functions in MeshSelectionFunctions/etc to manipulate the selection.\n * \n * Internally the selection is stored as a SharedPtr to a FGeometrySelection, which\n * stores a TSet (so unique add and remove are efficient, but the selection cannot\n * be directly indexed without converting to an Array). \n *\n * Note that the Selection storage is not a UProperty, and is not\n * serialized. FGeometryScriptMeshSelection instances *cannot* be serialized,\n * they are only transient data structures, that can be created and used Blueprint instances.\n */" },
		{ "DisplayName", "Mesh Selection" },
		{ "ModuleRelativePath", "Public/GeometryScript/GeometryScriptSelectionTypes.h" },
		{ "ToolTip", "FGeometryScriptMeshSelection is a container for a Mesh Selection used in Geometry Script.\nThe actual selection representation is not exposed to BP,\nuse functions in MeshSelectionFunctions/etc to manipulate the selection.\n\nInternally the selection is stored as a SharedPtr to a FGeometrySelection, which\nstores a TSet (so unique add and remove are efficient, but the selection cannot\nbe directly indexed without converting to an Array).\n\nNote that the Selection storage is not a UProperty, and is not\nserialized. FGeometryScriptMeshSelection instances *cannot* be serialized,\nthey are only transient data structures, that can be created and used Blueprint instances." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptMeshSelection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptMeshSelection>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptMeshSelection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptMeshSelection",
		sizeof(FGeometryScriptMeshSelection),
		alignof(FGeometryScriptMeshSelection),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshSelection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshSelection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptMeshSelection()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptMeshSelection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptMeshSelection.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptMeshSelection_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptMeshSelection.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_GeometryScriptSelectionTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_GeometryScriptSelectionTypes_h_Statics::EnumInfo[] = {
		{ EGeometryScriptMeshSelectionType_StaticEnum, TEXT("EGeometryScriptMeshSelectionType"), &Z_Registration_Info_UEnum_EGeometryScriptMeshSelectionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1261801425U) },
		{ EGeometryScriptMeshSelectionConversionType_StaticEnum, TEXT("EGeometryScriptMeshSelectionConversionType"), &Z_Registration_Info_UEnum_EGeometryScriptMeshSelectionConversionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 301582545U) },
		{ EGeometryScriptCombineSelectionMode_StaticEnum, TEXT("EGeometryScriptCombineSelectionMode"), &Z_Registration_Info_UEnum_EGeometryScriptCombineSelectionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 950965262U) },
		{ EGeometryScriptEmptySelectionBehavior_StaticEnum, TEXT("EGeometryScriptEmptySelectionBehavior"), &Z_Registration_Info_UEnum_EGeometryScriptEmptySelectionBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2116030996U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_GeometryScriptSelectionTypes_h_Statics::ScriptStructInfo[] = {
		{ FGeometryScriptMeshSelection::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptMeshSelection_Statics::NewStructOps, TEXT("GeometryScriptMeshSelection"), &Z_Registration_Info_UScriptStruct_GeometryScriptMeshSelection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptMeshSelection), 3644640625U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_GeometryScriptSelectionTypes_h_634490345(TEXT("/Script/GeometryScriptingCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_GeometryScriptSelectionTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_GeometryScriptSelectionTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_GeometryScriptSelectionTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_GeometryScriptSelectionTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
