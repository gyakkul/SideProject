// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/SmartName.h"
#include "../../Source/Runtime/Engine/Public/BoneContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmartName() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimCurveType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCurveMetaData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartName();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartNameContainer();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartNameMapping();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CurveMetaData;
class UScriptStruct* FCurveMetaData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CurveMetaData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CurveMetaData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCurveMetaData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CurveMetaData"));
	}
	return Z_Registration_Info_UScriptStruct_CurveMetaData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCurveMetaData>()
{
	return FCurveMetaData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCurveMetaData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinkedBones_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinkedBones_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LinkedBones;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxLOD_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaxLOD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveMetaData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Curve Meta Data for each name\n * Unfortunately this should be linked to FName, but no GUID because we don't have GUID in run-time\n * We only add this if anything changed, by default, it is attribute curve\n */" },
		{ "ModuleRelativePath", "Classes/Animation/SmartName.h" },
		{ "ToolTip", "Curve Meta Data for each name\nUnfortunately this should be linked to FName, but no GUID because we don't have GUID in run-time\nWe only add this if anything changed, by default, it is attribute curve" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCurveMetaData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCurveMetaData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCurveMetaData_Statics::NewProp_LinkedBones_Inner = { "LinkedBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(nullptr, 0) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveMetaData_Statics::NewProp_LinkedBones_MetaData[] = {
		{ "Comment", "/** connected bones to this meta data */" },
		{ "ModuleRelativePath", "Classes/Animation/SmartName.h" },
		{ "ToolTip", "connected bones to this meta data" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCurveMetaData_Statics::NewProp_LinkedBones = { "LinkedBones", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCurveMetaData, LinkedBones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveMetaData_Statics::NewProp_LinkedBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveMetaData_Statics::NewProp_LinkedBones_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveMetaData_Statics::NewProp_MaxLOD_MetaData[] = {
		{ "Comment", "/* max LOD (lowest LOD) to evaluate this. -1 means it will evaluate all the time. */" },
		{ "ModuleRelativePath", "Classes/Animation/SmartName.h" },
		{ "ToolTip", "max LOD (lowest LOD) to evaluate this. -1 means it will evaluate all the time." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCurveMetaData_Statics::NewProp_MaxLOD = { "MaxLOD", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCurveMetaData, MaxLOD), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveMetaData_Statics::NewProp_MaxLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveMetaData_Statics::NewProp_MaxLOD_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveMetaData_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/SmartName.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCurveMetaData_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCurveMetaData, Type), Z_Construct_UScriptStruct_FAnimCurveType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveMetaData_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveMetaData_Statics::NewProp_Type_MetaData)) }; // 2846346793
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCurveMetaData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveMetaData_Statics::NewProp_LinkedBones_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveMetaData_Statics::NewProp_LinkedBones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveMetaData_Statics::NewProp_MaxLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveMetaData_Statics::NewProp_Type,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCurveMetaData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CurveMetaData",
		sizeof(FCurveMetaData),
		alignof(FCurveMetaData),
		Z_Construct_UScriptStruct_FCurveMetaData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveMetaData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveMetaData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveMetaData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCurveMetaData()
	{
		if (!Z_Registration_Info_UScriptStruct_CurveMetaData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CurveMetaData.InnerSingleton, Z_Construct_UScriptStruct_FCurveMetaData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CurveMetaData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartNameMapping;
class UScriptStruct* FSmartNameMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartNameMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartNameMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartNameMapping, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SmartNameMapping"));
	}
	return Z_Registration_Info_UScriptStruct_SmartNameMapping.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSmartNameMapping>()
{
	return FSmartNameMapping::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSmartNameMapping_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartNameMapping_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/SmartName.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartNameMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartNameMapping>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartNameMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SmartNameMapping",
		sizeof(FSmartNameMapping),
		alignof(FSmartNameMapping),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartNameMapping_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartNameMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSmartNameMapping()
	{
		if (!Z_Registration_Info_UScriptStruct_SmartNameMapping.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartNameMapping.InnerSingleton, Z_Construct_UScriptStruct_FSmartNameMapping_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SmartNameMapping.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartNameContainer;
class UScriptStruct* FSmartNameContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartNameContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartNameContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartNameContainer, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SmartNameContainer"));
	}
	return Z_Registration_Info_UScriptStruct_SmartNameContainer.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSmartNameContainer>()
{
	return FSmartNameContainer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSmartNameContainer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartNameContainer_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/SmartName.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartNameContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartNameContainer>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartNameContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SmartNameContainer",
		sizeof(FSmartNameContainer),
		alignof(FSmartNameContainer),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartNameContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartNameContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSmartNameContainer()
	{
		if (!Z_Registration_Info_UScriptStruct_SmartNameContainer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartNameContainer.InnerSingleton, Z_Construct_UScriptStruct_FSmartNameContainer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SmartNameContainer.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartName;
class UScriptStruct* FSmartName::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartName.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartName.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartName, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SmartName"));
	}
	return Z_Registration_Info_UScriptStruct_SmartName.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSmartName>()
{
	return FSmartName::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSmartName_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DisplayName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartName_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/SmartName.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartName_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartName>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartName_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "FSmartName" },
		{ "Comment", "// name \n" },
		{ "ModuleRelativePath", "Classes/Animation/SmartName.h" },
		{ "ToolTip", "name" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSmartName_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartName, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartName_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartName_Statics::NewProp_DisplayName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSmartName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartName_Statics::NewProp_DisplayName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartName_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SmartName",
		sizeof(FSmartName),
		alignof(FSmartName),
		Z_Construct_UScriptStruct_FSmartName_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartName_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartName_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartName_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSmartName()
	{
		if (!Z_Registration_Info_UScriptStruct_SmartName.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartName.InnerSingleton, Z_Construct_UScriptStruct_FSmartName_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SmartName.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_SmartName_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_SmartName_h_Statics::ScriptStructInfo[] = {
		{ FCurveMetaData::StaticStruct, Z_Construct_UScriptStruct_FCurveMetaData_Statics::NewStructOps, TEXT("CurveMetaData"), &Z_Registration_Info_UScriptStruct_CurveMetaData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCurveMetaData), 3787345494U) },
		{ FSmartNameMapping::StaticStruct, Z_Construct_UScriptStruct_FSmartNameMapping_Statics::NewStructOps, TEXT("SmartNameMapping"), &Z_Registration_Info_UScriptStruct_SmartNameMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartNameMapping), 3193803015U) },
		{ FSmartNameContainer::StaticStruct, Z_Construct_UScriptStruct_FSmartNameContainer_Statics::NewStructOps, TEXT("SmartNameContainer"), &Z_Registration_Info_UScriptStruct_SmartNameContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartNameContainer), 3089015253U) },
		{ FSmartName::StaticStruct, Z_Construct_UScriptStruct_FSmartName_Statics::NewStructOps, TEXT("SmartName"), &Z_Registration_Info_UScriptStruct_SmartName, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartName), 1281775015U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_SmartName_h_3188307836(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_SmartName_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_SmartName_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
