// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Private/GameFramework/InternalUniqueNetIdReplNetSerializer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInternalUniqueNetIdReplNetSerializer() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerNameStruct();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerStringStruct();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UniqueNetIdReplNetSerializerStringStruct;
class UScriptStruct* FUniqueNetIdReplNetSerializerStringStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UniqueNetIdReplNetSerializerStringStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UniqueNetIdReplNetSerializerStringStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerStringStruct, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("UniqueNetIdReplNetSerializerStringStruct"));
	}
	return Z_Registration_Info_UScriptStruct_UniqueNetIdReplNetSerializerStringStruct.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FUniqueNetIdReplNetSerializerStringStruct>()
{
	return FUniqueNetIdReplNetSerializerStringStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerStringStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_String;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerStringStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/GameFramework/InternalUniqueNetIdReplNetSerializer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerStringStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUniqueNetIdReplNetSerializerStringStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerStringStruct_Statics::NewProp_String_MetaData[] = {
		{ "ModuleRelativePath", "Private/GameFramework/InternalUniqueNetIdReplNetSerializer.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerStringStruct_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUniqueNetIdReplNetSerializerStringStruct, String), METADATA_PARAMS(Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerStringStruct_Statics::NewProp_String_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerStringStruct_Statics::NewProp_String_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerStringStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerStringStruct_Statics::NewProp_String,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerStringStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"UniqueNetIdReplNetSerializerStringStruct",
		sizeof(FUniqueNetIdReplNetSerializerStringStruct),
		alignof(FUniqueNetIdReplNetSerializerStringStruct),
		Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerStringStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerStringStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerStringStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerStringStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerStringStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_UniqueNetIdReplNetSerializerStringStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UniqueNetIdReplNetSerializerStringStruct.InnerSingleton, Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerStringStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UniqueNetIdReplNetSerializerStringStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UniqueNetIdReplNetSerializerNameStruct;
class UScriptStruct* FUniqueNetIdReplNetSerializerNameStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UniqueNetIdReplNetSerializerNameStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UniqueNetIdReplNetSerializerNameStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerNameStruct, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("UniqueNetIdReplNetSerializerNameStruct"));
	}
	return Z_Registration_Info_UScriptStruct_UniqueNetIdReplNetSerializerNameStruct.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FUniqueNetIdReplNetSerializerNameStruct>()
{
	return FUniqueNetIdReplNetSerializerNameStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerNameStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerNameStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/GameFramework/InternalUniqueNetIdReplNetSerializer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerNameStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUniqueNetIdReplNetSerializerNameStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerNameStruct_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Private/GameFramework/InternalUniqueNetIdReplNetSerializer.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerNameStruct_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUniqueNetIdReplNetSerializerNameStruct, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerNameStruct_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerNameStruct_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerNameStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerNameStruct_Statics::NewProp_Name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerNameStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"UniqueNetIdReplNetSerializerNameStruct",
		sizeof(FUniqueNetIdReplNetSerializerNameStruct),
		alignof(FUniqueNetIdReplNetSerializerNameStruct),
		Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerNameStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerNameStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerNameStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerNameStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerNameStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_UniqueNetIdReplNetSerializerNameStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UniqueNetIdReplNetSerializerNameStruct.InnerSingleton, Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerNameStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UniqueNetIdReplNetSerializerNameStruct.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_GameFramework_InternalUniqueNetIdReplNetSerializer_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_GameFramework_InternalUniqueNetIdReplNetSerializer_h_Statics::ScriptStructInfo[] = {
		{ FUniqueNetIdReplNetSerializerStringStruct::StaticStruct, Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerStringStruct_Statics::NewStructOps, TEXT("UniqueNetIdReplNetSerializerStringStruct"), &Z_Registration_Info_UScriptStruct_UniqueNetIdReplNetSerializerStringStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUniqueNetIdReplNetSerializerStringStruct), 4288959344U) },
		{ FUniqueNetIdReplNetSerializerNameStruct::StaticStruct, Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerNameStruct_Statics::NewStructOps, TEXT("UniqueNetIdReplNetSerializerNameStruct"), &Z_Registration_Info_UScriptStruct_UniqueNetIdReplNetSerializerNameStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUniqueNetIdReplNetSerializerNameStruct), 4058920998U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_GameFramework_InternalUniqueNetIdReplNetSerializer_h_1925606942(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_GameFramework_InternalUniqueNetIdReplNetSerializer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_GameFramework_InternalUniqueNetIdReplNetSerializer_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
