// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpriteDrawCall.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpriteDrawCall() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	PAPER2D_API UScriptStruct* Z_Construct_UScriptStruct_FSpriteDrawCallRecord();
	UPackage* Z_Construct_UPackage__Script_Paper2D();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SpriteDrawCallRecord;
class UScriptStruct* FSpriteDrawCallRecord::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SpriteDrawCallRecord.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SpriteDrawCallRecord.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpriteDrawCallRecord, (UObject*)Z_Construct_UPackage__Script_Paper2D(), TEXT("SpriteDrawCallRecord"));
	}
	return Z_Registration_Info_UScriptStruct_SpriteDrawCallRecord.OuterSingleton;
}
template<> PAPER2D_API UScriptStruct* StaticStruct<FSpriteDrawCallRecord>()
{
	return FSpriteDrawCallRecord::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Destination_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Destination;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BaseTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Classes/SpriteDrawCall.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpriteDrawCallRecord>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::NewProp_Destination_MetaData[] = {
		{ "ModuleRelativePath", "Classes/SpriteDrawCall.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::NewProp_Destination = { "Destination", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSpriteDrawCallRecord, Destination), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::NewProp_Destination_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::NewProp_Destination_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::NewProp_BaseTexture_MetaData[] = {
		{ "ModuleRelativePath", "Classes/SpriteDrawCall.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::NewProp_BaseTexture = { "BaseTexture", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSpriteDrawCallRecord, BaseTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::NewProp_BaseTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::NewProp_BaseTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::NewProp_Color_MetaData[] = {
		{ "ModuleRelativePath", "Classes/SpriteDrawCall.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSpriteDrawCallRecord, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::NewProp_Color_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::NewProp_Destination,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::NewProp_BaseTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::NewProp_Color,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
		nullptr,
		&NewStructOps,
		"SpriteDrawCallRecord",
		sizeof(FSpriteDrawCallRecord),
		alignof(FSpriteDrawCallRecord),
		Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpriteDrawCallRecord()
	{
		if (!Z_Registration_Info_UScriptStruct_SpriteDrawCallRecord.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SpriteDrawCallRecord.InnerSingleton, Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SpriteDrawCallRecord.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_SpriteDrawCall_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_SpriteDrawCall_h_Statics::ScriptStructInfo[] = {
		{ FSpriteDrawCallRecord::StaticStruct, Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::NewStructOps, TEXT("SpriteDrawCallRecord"), &Z_Registration_Info_UScriptStruct_SpriteDrawCallRecord, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpriteDrawCallRecord), 1133348043U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_SpriteDrawCall_h_655967613(TEXT("/Script/Paper2D"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_SpriteDrawCall_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_SpriteDrawCall_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
