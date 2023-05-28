// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayDebuggerCategoryReplicator.h"
#include "GameplayDebuggerTypes.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayDebuggerCategoryReplicator() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	GAMEPLAYDEBUGGER_API UClass* Z_Construct_UClass_AGameplayDebuggerCategoryReplicator();
	GAMEPLAYDEBUGGER_API UClass* Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_NoRegister();
	GAMEPLAYDEBUGGER_API UClass* Z_Construct_UClass_UGameplayDebuggerRenderingComponent_NoRegister();
	GAMEPLAYDEBUGGER_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData();
	GAMEPLAYDEBUGGER_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerDataPackHeader();
	GAMEPLAYDEBUGGER_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams();
	GAMEPLAYDEBUGGER_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor();
	GAMEPLAYDEBUGGER_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerNetPack();
	GAMEPLAYDEBUGGER_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerShape();
	GAMEPLAYDEBUGGER_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync();
	UPackage* Z_Construct_UPackage__Script_GameplayDebugger();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayDebuggerDataPackRPCParams;
class UScriptStruct* FGameplayDebuggerDataPackRPCParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayDebuggerDataPackRPCParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayDebuggerDataPackRPCParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams, (UObject*)Z_Construct_UPackage__Script_GameplayDebugger(), TEXT("GameplayDebuggerDataPackRPCParams"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayDebuggerDataPackRPCParams.OuterSingleton;
}
template<> GAMEPLAYDEBUGGER_API UScriptStruct* StaticStruct<FGameplayDebuggerDataPackRPCParams>()
{
	return FGameplayDebuggerDataPackRPCParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CategoryName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataPackIdx_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DataPackIdx;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Header;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Struct used to send the DataPackPackets as RPC`s instead of using the CustomDeltaNetSerializer.\n" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
		{ "ToolTip", "Struct used to send the DataPackPackets as RPC`s instead of using the CustomDeltaNetSerializer." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayDebuggerDataPackRPCParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams_Statics::NewProp_CategoryName_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayDebuggerDataPackRPCParams, CategoryName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams_Statics::NewProp_CategoryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams_Statics::NewProp_CategoryName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams_Statics::NewProp_DataPackIdx_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams_Statics::NewProp_DataPackIdx = { "DataPackIdx", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayDebuggerDataPackRPCParams, DataPackIdx), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams_Statics::NewProp_DataPackIdx_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams_Statics::NewProp_DataPackIdx_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams_Statics::NewProp_Header_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayDebuggerDataPackRPCParams, Header), Z_Construct_UScriptStruct_FGameplayDebuggerDataPackHeader, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams_Statics::NewProp_Header_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams_Statics::NewProp_Header_MetaData)) }; // 338696435
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams_Statics::NewProp_Data_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayDebuggerDataPackRPCParams, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams_Statics::NewProp_Data_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams_Statics::NewProp_CategoryName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams_Statics::NewProp_DataPackIdx,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams_Statics::NewProp_Header,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams_Statics::NewProp_Data,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayDebugger,
		nullptr,
		&NewStructOps,
		"GameplayDebuggerDataPackRPCParams",
		sizeof(FGameplayDebuggerDataPackRPCParams),
		alignof(FGameplayDebuggerDataPackRPCParams),
		Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayDebuggerDataPackRPCParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayDebuggerDataPackRPCParams.InnerSingleton, Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayDebuggerDataPackRPCParams.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayDebuggerCategoryData;
class UScriptStruct* FGameplayDebuggerCategoryData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayDebuggerCategoryData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayDebuggerCategoryData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData, (UObject*)Z_Construct_UPackage__Script_GameplayDebugger(), TEXT("GameplayDebuggerCategoryData"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayDebuggerCategoryData.OuterSingleton;
}
template<> GAMEPLAYDEBUGGER_API UScriptStruct* StaticStruct<FGameplayDebuggerCategoryData>()
{
	return FGameplayDebuggerCategoryData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CategoryName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_TextLines_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextLines_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TextLines;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Shapes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Shapes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Shapes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataPacks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataPacks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataPacks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[];
#endif
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayDebuggerCategoryData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::NewProp_CategoryName_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayDebuggerCategoryData, CategoryName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::NewProp_CategoryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::NewProp_CategoryName_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::NewProp_TextLines_Inner = { "TextLines", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::NewProp_TextLines_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::NewProp_TextLines = { "TextLines", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayDebuggerCategoryData, TextLines), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::NewProp_TextLines_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::NewProp_TextLines_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::NewProp_Shapes_Inner = { "Shapes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameplayDebuggerShape, METADATA_PARAMS(nullptr, 0) }; // 2711490686
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::NewProp_Shapes_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::NewProp_Shapes = { "Shapes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayDebuggerCategoryData, Shapes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::NewProp_Shapes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::NewProp_Shapes_MetaData)) }; // 2711490686
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::NewProp_DataPacks_Inner = { "DataPacks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameplayDebuggerDataPackHeader, METADATA_PARAMS(nullptr, 0) }; // 338696435
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::NewProp_DataPacks_MetaData[] = {
		{ "Comment", "// Either replicated using the NetDeltaSerialize or alternatively as regular RPC`s\n" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
		{ "ToolTip", "Either replicated using the NetDeltaSerialize or alternatively as regular RPC`s" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::NewProp_DataPacks = { "DataPacks", nullptr, (EPropertyFlags)0x0010000080000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayDebuggerCategoryData, DataPacks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::NewProp_DataPacks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::NewProp_DataPacks_MetaData)) }; // 338696435
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::NewProp_bIsEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((FGameplayDebuggerCategoryData*)Obj)->bIsEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGameplayDebuggerCategoryData), &Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::NewProp_bIsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::NewProp_bIsEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::NewProp_CategoryName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::NewProp_TextLines_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::NewProp_TextLines,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::NewProp_Shapes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::NewProp_Shapes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::NewProp_DataPacks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::NewProp_DataPacks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::NewProp_bIsEnabled,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayDebugger,
		nullptr,
		&NewStructOps,
		"GameplayDebuggerCategoryData",
		sizeof(FGameplayDebuggerCategoryData),
		alignof(FGameplayDebuggerCategoryData),
		Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayDebuggerCategoryData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayDebuggerCategoryData.InnerSingleton, Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayDebuggerCategoryData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayDebuggerNetPack;
class UScriptStruct* FGameplayDebuggerNetPack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayDebuggerNetPack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayDebuggerNetPack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayDebuggerNetPack, (UObject*)Z_Construct_UPackage__Script_GameplayDebugger(), TEXT("GameplayDebuggerNetPack"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayDebuggerNetPack.OuterSingleton;
}
template<> GAMEPLAYDEBUGGER_API UScriptStruct* StaticStruct<FGameplayDebuggerNetPack>()
{
	return FGameplayDebuggerNetPack::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Owner;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SavedData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SavedData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SavedData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayDebuggerNetPack>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_Statics::NewProp_Owner_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0014000080000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayDebuggerNetPack, Owner), Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_Statics::NewProp_Owner_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_Statics::NewProp_SavedData_Inner = { "SavedData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData, METADATA_PARAMS(nullptr, 0) }; // 3835083402
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_Statics::NewProp_SavedData_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_Statics::NewProp_SavedData = { "SavedData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayDebuggerNetPack, SavedData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_Statics::NewProp_SavedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_Statics::NewProp_SavedData_MetaData)) }; // 3835083402
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_Statics::NewProp_Owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_Statics::NewProp_SavedData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_Statics::NewProp_SavedData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayDebugger,
		nullptr,
		&NewStructOps,
		"GameplayDebuggerNetPack",
		sizeof(FGameplayDebuggerNetPack),
		alignof(FGameplayDebuggerNetPack),
		Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerNetPack()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayDebuggerNetPack.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayDebuggerNetPack.InnerSingleton, Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayDebuggerNetPack.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayDebuggerDebugActor;
class UScriptStruct* FGameplayDebuggerDebugActor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayDebuggerDebugActor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayDebuggerDebugActor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor, (UObject*)Z_Construct_UPackage__Script_GameplayDebugger(), TEXT("GameplayDebuggerDebugActor"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayDebuggerDebugActor.OuterSingleton;
}
template<> GAMEPLAYDEBUGGER_API UScriptStruct* StaticStruct<FGameplayDebuggerDebugActor>()
{
	return FGameplayDebuggerDebugActor::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActorName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SyncCounter_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_SyncCounter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayDebuggerDebugActor>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::NewProp_Actor_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayDebuggerDebugActor, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::NewProp_Actor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::NewProp_ActorName_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::NewProp_ActorName = { "ActorName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayDebuggerDebugActor, ActorName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::NewProp_ActorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::NewProp_ActorName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::NewProp_SyncCounter_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::NewProp_SyncCounter = { "SyncCounter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayDebuggerDebugActor, SyncCounter), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::NewProp_SyncCounter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::NewProp_SyncCounter_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::NewProp_ActorName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::NewProp_SyncCounter,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayDebugger,
		nullptr,
		&NewStructOps,
		"GameplayDebuggerDebugActor",
		sizeof(FGameplayDebuggerDebugActor),
		alignof(FGameplayDebuggerDebugActor),
		Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayDebuggerDebugActor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayDebuggerDebugActor.InnerSingleton, Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayDebuggerDebugActor.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayDebuggerVisLogSync;
class UScriptStruct* FGameplayDebuggerVisLogSync::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayDebuggerVisLogSync.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayDebuggerVisLogSync.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync, (UObject*)Z_Construct_UPackage__Script_GameplayDebugger(), TEXT("GameplayDebuggerVisLogSync"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayDebuggerVisLogSync.OuterSingleton;
}
template<> GAMEPLAYDEBUGGER_API UScriptStruct* StaticStruct<FGameplayDebuggerVisLogSync>()
{
	return FGameplayDebuggerVisLogSync::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceIDs_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceIDs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayDebuggerVisLogSync>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync_Statics::NewProp_DeviceIDs_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync_Statics::NewProp_DeviceIDs = { "DeviceIDs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayDebuggerVisLogSync, DeviceIDs), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync_Statics::NewProp_DeviceIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync_Statics::NewProp_DeviceIDs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync_Statics::NewProp_DeviceIDs,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayDebugger,
		nullptr,
		&NewStructOps,
		"GameplayDebuggerVisLogSync",
		sizeof(FGameplayDebuggerVisLogSync),
		alignof(FGameplayDebuggerVisLogSync),
		Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayDebuggerVisLogSync.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayDebuggerVisLogSync.InnerSingleton, Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayDebuggerVisLogSync.InnerSingleton;
	}
	DEFINE_FUNCTION(AGameplayDebuggerCategoryReplicator::execClientDataPackPacket)
	{
		P_GET_STRUCT(FGameplayDebuggerDataPackRPCParams,Z_Param_Params);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientDataPackPacket_Implementation(Z_Param_Params);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameplayDebuggerCategoryReplicator::execServerSendExtensionInputEvent)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ExtensionId);
		P_GET_PROPERTY(FIntProperty,Z_Param_HandlerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerSendExtensionInputEvent_Validate(Z_Param_ExtensionId,Z_Param_HandlerId))
		{
			RPC_ValidateFailed(TEXT("ServerSendExtensionInputEvent_Validate"));
			return;
		}
		P_THIS->ServerSendExtensionInputEvent_Implementation(Z_Param_ExtensionId,Z_Param_HandlerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameplayDebuggerCategoryReplicator::execServerSendCategoryInputEvent)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CategoryId);
		P_GET_PROPERTY(FIntProperty,Z_Param_HandlerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerSendCategoryInputEvent_Validate(Z_Param_CategoryId,Z_Param_HandlerId))
		{
			RPC_ValidateFailed(TEXT("ServerSendCategoryInputEvent_Validate"));
			return;
		}
		P_THIS->ServerSendCategoryInputEvent_Implementation(Z_Param_CategoryId,Z_Param_HandlerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameplayDebuggerCategoryReplicator::execServerSetCategoryEnabled)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CategoryId);
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerSetCategoryEnabled_Validate(Z_Param_CategoryId,Z_Param_bEnable))
		{
			RPC_ValidateFailed(TEXT("ServerSetCategoryEnabled_Validate"));
			return;
		}
		P_THIS->ServerSetCategoryEnabled_Implementation(Z_Param_CategoryId,Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameplayDebuggerCategoryReplicator::execServerResetViewPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerResetViewPoint_Validate())
		{
			RPC_ValidateFailed(TEXT("ServerResetViewPoint_Validate"));
			return;
		}
		P_THIS->ServerResetViewPoint_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameplayDebuggerCategoryReplicator::execServerSetViewPoint)
	{
		P_GET_STRUCT(FVector,Z_Param_InViewLocation);
		P_GET_STRUCT(FVector,Z_Param_InViewDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerSetViewPoint_Validate(Z_Param_InViewLocation,Z_Param_InViewDirection))
		{
			RPC_ValidateFailed(TEXT("ServerSetViewPoint_Validate"));
			return;
		}
		P_THIS->ServerSetViewPoint_Implementation(Z_Param_InViewLocation,Z_Param_InViewDirection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameplayDebuggerCategoryReplicator::execServerSetDebugActor)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_UBOOL(Z_Param_bSelectInEditor);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerSetDebugActor_Validate(Z_Param_Actor,Z_Param_bSelectInEditor))
		{
			RPC_ValidateFailed(TEXT("ServerSetDebugActor_Validate"));
			return;
		}
		P_THIS->ServerSetDebugActor_Implementation(Z_Param_Actor,Z_Param_bSelectInEditor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameplayDebuggerCategoryReplicator::execServerSetEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerSetEnabled_Validate(Z_Param_bEnable))
		{
			RPC_ValidateFailed(TEXT("ServerSetEnabled_Validate"));
			return;
		}
		P_THIS->ServerSetEnabled_Implementation(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameplayDebuggerCategoryReplicator::execOnRep_ReplicatedData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ReplicatedData();
		P_NATIVE_END;
	}
	struct GameplayDebuggerCategoryReplicator_eventClientDataPackPacket_Parms
	{
		FGameplayDebuggerDataPackRPCParams Params;
	};
	struct GameplayDebuggerCategoryReplicator_eventServerSendCategoryInputEvent_Parms
	{
		int32 CategoryId;
		int32 HandlerId;
	};
	struct GameplayDebuggerCategoryReplicator_eventServerSendExtensionInputEvent_Parms
	{
		int32 ExtensionId;
		int32 HandlerId;
	};
	struct GameplayDebuggerCategoryReplicator_eventServerSetCategoryEnabled_Parms
	{
		int32 CategoryId;
		bool bEnable;
	};
	struct GameplayDebuggerCategoryReplicator_eventServerSetDebugActor_Parms
	{
		AActor* Actor;
		bool bSelectInEditor;
	};
	struct GameplayDebuggerCategoryReplicator_eventServerSetEnabled_Parms
	{
		bool bEnable;
	};
	struct GameplayDebuggerCategoryReplicator_eventServerSetViewPoint_Parms
	{
		FVector InViewLocation;
		FVector InViewDirection;
	};
	static FName NAME_AGameplayDebuggerCategoryReplicator_ClientDataPackPacket = FName(TEXT("ClientDataPackPacket"));
	void AGameplayDebuggerCategoryReplicator::ClientDataPackPacket(FGameplayDebuggerDataPackRPCParams const& Params)
	{
		GameplayDebuggerCategoryReplicator_eventClientDataPackPacket_Parms Parms;
		Parms.Params=Params;
		ProcessEvent(FindFunctionChecked(NAME_AGameplayDebuggerCategoryReplicator_ClientDataPackPacket),&Parms);
	}
	static FName NAME_AGameplayDebuggerCategoryReplicator_ServerResetViewPoint = FName(TEXT("ServerResetViewPoint"));
	void AGameplayDebuggerCategoryReplicator::ServerResetViewPoint()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGameplayDebuggerCategoryReplicator_ServerResetViewPoint),NULL);
	}
	static FName NAME_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent = FName(TEXT("ServerSendCategoryInputEvent"));
	void AGameplayDebuggerCategoryReplicator::ServerSendCategoryInputEvent(int32 CategoryId, int32 HandlerId)
	{
		GameplayDebuggerCategoryReplicator_eventServerSendCategoryInputEvent_Parms Parms;
		Parms.CategoryId=CategoryId;
		Parms.HandlerId=HandlerId;
		ProcessEvent(FindFunctionChecked(NAME_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent),&Parms);
	}
	static FName NAME_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent = FName(TEXT("ServerSendExtensionInputEvent"));
	void AGameplayDebuggerCategoryReplicator::ServerSendExtensionInputEvent(int32 ExtensionId, int32 HandlerId)
	{
		GameplayDebuggerCategoryReplicator_eventServerSendExtensionInputEvent_Parms Parms;
		Parms.ExtensionId=ExtensionId;
		Parms.HandlerId=HandlerId;
		ProcessEvent(FindFunctionChecked(NAME_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent),&Parms);
	}
	static FName NAME_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled = FName(TEXT("ServerSetCategoryEnabled"));
	void AGameplayDebuggerCategoryReplicator::ServerSetCategoryEnabled(int32 CategoryId, bool bEnable)
	{
		GameplayDebuggerCategoryReplicator_eventServerSetCategoryEnabled_Parms Parms;
		Parms.CategoryId=CategoryId;
		Parms.bEnable=bEnable ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled),&Parms);
	}
	static FName NAME_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor = FName(TEXT("ServerSetDebugActor"));
	void AGameplayDebuggerCategoryReplicator::ServerSetDebugActor(AActor* Actor, bool bSelectInEditor)
	{
		GameplayDebuggerCategoryReplicator_eventServerSetDebugActor_Parms Parms;
		Parms.Actor=Actor;
		Parms.bSelectInEditor=bSelectInEditor ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor),&Parms);
	}
	static FName NAME_AGameplayDebuggerCategoryReplicator_ServerSetEnabled = FName(TEXT("ServerSetEnabled"));
	void AGameplayDebuggerCategoryReplicator::ServerSetEnabled(bool bEnable)
	{
		GameplayDebuggerCategoryReplicator_eventServerSetEnabled_Parms Parms;
		Parms.bEnable=bEnable ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AGameplayDebuggerCategoryReplicator_ServerSetEnabled),&Parms);
	}
	static FName NAME_AGameplayDebuggerCategoryReplicator_ServerSetViewPoint = FName(TEXT("ServerSetViewPoint"));
	void AGameplayDebuggerCategoryReplicator::ServerSetViewPoint(FVector const& InViewLocation, FVector const& InViewDirection)
	{
		GameplayDebuggerCategoryReplicator_eventServerSetViewPoint_Parms Parms;
		Parms.InViewLocation=InViewLocation;
		Parms.InViewDirection=InViewDirection;
		ProcessEvent(FindFunctionChecked(NAME_AGameplayDebuggerCategoryReplicator_ServerSetViewPoint),&Parms);
	}
	void AGameplayDebuggerCategoryReplicator::StaticRegisterNativesAGameplayDebuggerCategoryReplicator()
	{
		UClass* Class = AGameplayDebuggerCategoryReplicator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientDataPackPacket", &AGameplayDebuggerCategoryReplicator::execClientDataPackPacket },
			{ "OnRep_ReplicatedData", &AGameplayDebuggerCategoryReplicator::execOnRep_ReplicatedData },
			{ "ServerResetViewPoint", &AGameplayDebuggerCategoryReplicator::execServerResetViewPoint },
			{ "ServerSendCategoryInputEvent", &AGameplayDebuggerCategoryReplicator::execServerSendCategoryInputEvent },
			{ "ServerSendExtensionInputEvent", &AGameplayDebuggerCategoryReplicator::execServerSendExtensionInputEvent },
			{ "ServerSetCategoryEnabled", &AGameplayDebuggerCategoryReplicator::execServerSetCategoryEnabled },
			{ "ServerSetDebugActor", &AGameplayDebuggerCategoryReplicator::execServerSetDebugActor },
			{ "ServerSetEnabled", &AGameplayDebuggerCategoryReplicator::execServerSetEnabled },
			{ "ServerSetViewPoint", &AGameplayDebuggerCategoryReplicator::execServerSetViewPoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ClientDataPackPacket_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ClientDataPackPacket_Statics::NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ClientDataPackPacket_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayDebuggerCategoryReplicator_eventClientDataPackPacket_Parms, Params), Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams, METADATA_PARAMS(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ClientDataPackPacket_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ClientDataPackPacket_Statics::NewProp_Params_MetaData)) }; // 1098738244
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ClientDataPackPacket_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ClientDataPackPacket_Statics::NewProp_Params,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ClientDataPackPacket_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** helper function for optionally sending DataPackPackets as RPC's */" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
		{ "ToolTip", "helper function for optionally sending DataPackPackets as RPC's" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ClientDataPackPacket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayDebuggerCategoryReplicator, nullptr, "ClientDataPackPacket", nullptr, nullptr, sizeof(GameplayDebuggerCategoryReplicator_eventClientDataPackPacket_Parms), Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ClientDataPackPacket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ClientDataPackPacket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ClientDataPackPacket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ClientDataPackPacket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ClientDataPackPacket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ClientDataPackPacket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_OnRep_ReplicatedData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_OnRep_ReplicatedData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_OnRep_ReplicatedData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayDebuggerCategoryReplicator, nullptr, "OnRep_ReplicatedData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_OnRep_ReplicatedData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_OnRep_ReplicatedData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_OnRep_ReplicatedData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_OnRep_ReplicatedData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerResetViewPoint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerResetViewPoint_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerResetViewPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayDebuggerCategoryReplicator, nullptr, "ServerResetViewPoint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerResetViewPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerResetViewPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerResetViewPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerResetViewPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_CategoryId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_HandlerId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent_Statics::NewProp_CategoryId = { "CategoryId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayDebuggerCategoryReplicator_eventServerSendCategoryInputEvent_Parms, CategoryId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent_Statics::NewProp_HandlerId = { "HandlerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayDebuggerCategoryReplicator_eventServerSendCategoryInputEvent_Parms, HandlerId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent_Statics::NewProp_CategoryId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent_Statics::NewProp_HandlerId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Comment", "/** helper function for replicating input for category handlers */" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
		{ "ToolTip", "helper function for replicating input for category handlers" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayDebuggerCategoryReplicator, nullptr, "ServerSendCategoryInputEvent", nullptr, nullptr, sizeof(GameplayDebuggerCategoryReplicator_eventServerSendCategoryInputEvent_Parms), Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExtensionId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_HandlerId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent_Statics::NewProp_ExtensionId = { "ExtensionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayDebuggerCategoryReplicator_eventServerSendExtensionInputEvent_Parms, ExtensionId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent_Statics::NewProp_HandlerId = { "HandlerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayDebuggerCategoryReplicator_eventServerSendExtensionInputEvent_Parms, HandlerId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent_Statics::NewProp_ExtensionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent_Statics::NewProp_HandlerId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Comment", "/** helper function for replicating input for extension handlers */" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
		{ "ToolTip", "helper function for replicating input for extension handlers" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayDebuggerCategoryReplicator, nullptr, "ServerSendExtensionInputEvent", nullptr, nullptr, sizeof(GameplayDebuggerCategoryReplicator_eventServerSendExtensionInputEvent_Parms), Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_CategoryId;
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled_Statics::NewProp_CategoryId = { "CategoryId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayDebuggerCategoryReplicator_eventServerSetCategoryEnabled_Parms, CategoryId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((GameplayDebuggerCategoryReplicator_eventServerSetCategoryEnabled_Parms*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameplayDebuggerCategoryReplicator_eventServerSetCategoryEnabled_Parms), &Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled_Statics::NewProp_CategoryId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayDebuggerCategoryReplicator, nullptr, "ServerSetCategoryEnabled", nullptr, nullptr, sizeof(GameplayDebuggerCategoryReplicator_eventServerSetCategoryEnabled_Parms), Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static void NewProp_bSelectInEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectInEditor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayDebuggerCategoryReplicator_eventServerSetDebugActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor_Statics::NewProp_bSelectInEditor_SetBit(void* Obj)
	{
		((GameplayDebuggerCategoryReplicator_eventServerSetDebugActor_Parms*)Obj)->bSelectInEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor_Statics::NewProp_bSelectInEditor = { "bSelectInEditor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameplayDebuggerCategoryReplicator_eventServerSetDebugActor_Parms), &Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor_Statics::NewProp_bSelectInEditor_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor_Statics::NewProp_bSelectInEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayDebuggerCategoryReplicator, nullptr, "ServerSetDebugActor", nullptr, nullptr, sizeof(GameplayDebuggerCategoryReplicator_eventServerSetDebugActor_Parms), Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetEnabled_Statics
	{
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetEnabled_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((GameplayDebuggerCategoryReplicator_eventServerSetEnabled_Parms*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetEnabled_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameplayDebuggerCategoryReplicator_eventServerSetEnabled_Parms), &Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetEnabled_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetEnabled_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetEnabled_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayDebuggerCategoryReplicator, nullptr, "ServerSetEnabled", nullptr, nullptr, sizeof(GameplayDebuggerCategoryReplicator_eventServerSetEnabled_Parms), Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetViewPoint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InViewLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InViewLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InViewDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InViewDirection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetViewPoint_Statics::NewProp_InViewLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetViewPoint_Statics::NewProp_InViewLocation = { "InViewLocation", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayDebuggerCategoryReplicator_eventServerSetViewPoint_Parms, InViewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetViewPoint_Statics::NewProp_InViewLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetViewPoint_Statics::NewProp_InViewLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetViewPoint_Statics::NewProp_InViewDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetViewPoint_Statics::NewProp_InViewDirection = { "InViewDirection", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayDebuggerCategoryReplicator_eventServerSetViewPoint_Parms, InViewDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetViewPoint_Statics::NewProp_InViewDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetViewPoint_Statics::NewProp_InViewDirection_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetViewPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetViewPoint_Statics::NewProp_InViewLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetViewPoint_Statics::NewProp_InViewDirection,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetViewPoint_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetViewPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayDebuggerCategoryReplicator, nullptr, "ServerSetViewPoint", nullptr, nullptr, sizeof(GameplayDebuggerCategoryReplicator_eventServerSetViewPoint_Parms), Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetViewPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetViewPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80A80CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetViewPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetViewPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetViewPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetViewPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameplayDebuggerCategoryReplicator);
	UClass* Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_NoRegister()
	{
		return AGameplayDebuggerCategoryReplicator::StaticClass();
	}
	struct Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerPC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OwnerPC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[];
#endif
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicatedData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugActor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebugActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisLogSync_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VisLogSync;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderingComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RenderingComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayDebugger,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ClientDataPackPacket, "ClientDataPackPacket" }, // 2446282121
		{ &Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_OnRep_ReplicatedData, "OnRep_ReplicatedData" }, // 2356701489
		{ &Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerResetViewPoint, "ServerResetViewPoint" }, // 2048386495
		{ &Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent, "ServerSendCategoryInputEvent" }, // 1470830884
		{ &Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent, "ServerSendExtensionInputEvent" }, // 3969957562
		{ &Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled, "ServerSetCategoryEnabled" }, // 2887620082
		{ &Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor, "ServerSetDebugActor" }, // 2338160135
		{ &Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetEnabled, "ServerSetEnabled" }, // 3336956700
		{ &Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetViewPoint, "ServerSetViewPoint" }, // 1750998756
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameplayDebuggerCategoryReplicator.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
		{ "NotBlueprintType", "true" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_OwnerPC_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_OwnerPC = { "OwnerPC", nullptr, (EPropertyFlags)0x0024080000000020, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameplayDebuggerCategoryReplicator, OwnerPC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_OwnerPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_OwnerPC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_bIsEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
#endif
	void Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((AGameplayDebuggerCategoryReplicator*)Obj)->bIsEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGameplayDebuggerCategoryReplicator), &Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_bIsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_bIsEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_ReplicatedData_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_ReplicatedData = { "ReplicatedData", "OnRep_ReplicatedData", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameplayDebuggerCategoryReplicator, ReplicatedData), Z_Construct_UScriptStruct_FGameplayDebuggerNetPack, METADATA_PARAMS(Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_ReplicatedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_ReplicatedData_MetaData)) }; // 1795913418
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_DebugActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_DebugActor = { "DebugActor", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameplayDebuggerCategoryReplicator, DebugActor), Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor, METADATA_PARAMS(Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_DebugActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_DebugActor_MetaData)) }; // 673743166
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_VisLogSync_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_VisLogSync = { "VisLogSync", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameplayDebuggerCategoryReplicator, VisLogSync), Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync, METADATA_PARAMS(Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_VisLogSync_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_VisLogSync_MetaData)) }; // 2876728275
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_RenderingComp_MetaData[] = {
		{ "Comment", "/** rendering component needs to attached to some actor, and this is as good as any */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
		{ "ToolTip", "rendering component needs to attached to some actor, and this is as good as any" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_RenderingComp = { "RenderingComp", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameplayDebuggerCategoryReplicator, RenderingComp), Z_Construct_UClass_UGameplayDebuggerRenderingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_RenderingComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_RenderingComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_OwnerPC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_bIsEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_ReplicatedData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_DebugActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_VisLogSync,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_RenderingComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameplayDebuggerCategoryReplicator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::ClassParams = {
		&AGameplayDebuggerCategoryReplicator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::PropPointers),
		0,
		0x049002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameplayDebuggerCategoryReplicator()
	{
		if (!Z_Registration_Info_UClass_AGameplayDebuggerCategoryReplicator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameplayDebuggerCategoryReplicator.OuterSingleton, Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGameplayDebuggerCategoryReplicator.OuterSingleton;
	}
	template<> GAMEPLAYDEBUGGER_API UClass* StaticClass<AGameplayDebuggerCategoryReplicator>()
	{
		return AGameplayDebuggerCategoryReplicator::StaticClass();
	}

	void AGameplayDebuggerCategoryReplicator::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_OwnerPC(TEXT("OwnerPC"));
		static const FName Name_bIsEnabled(TEXT("bIsEnabled"));
		static const FName Name_ReplicatedData(TEXT("ReplicatedData"));
		static const FName Name_DebugActor(TEXT("DebugActor"));
		static const FName Name_VisLogSync(TEXT("VisLogSync"));

		const bool bIsValid = true
			&& Name_OwnerPC == ClassReps[(int32)ENetFields_Private::OwnerPC].Property->GetFName()
			&& Name_bIsEnabled == ClassReps[(int32)ENetFields_Private::bIsEnabled].Property->GetFName()
			&& Name_ReplicatedData == ClassReps[(int32)ENetFields_Private::ReplicatedData].Property->GetFName()
			&& Name_DebugActor == ClassReps[(int32)ENetFields_Private::DebugActor].Property->GetFName()
			&& Name_VisLogSync == ClassReps[(int32)ENetFields_Private::VisLogSync].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AGameplayDebuggerCategoryReplicator"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameplayDebuggerCategoryReplicator);
	AGameplayDebuggerCategoryReplicator::~AGameplayDebuggerCategoryReplicator() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_Statics::ScriptStructInfo[] = {
		{ FGameplayDebuggerDataPackRPCParams::StaticStruct, Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams_Statics::NewStructOps, TEXT("GameplayDebuggerDataPackRPCParams"), &Z_Registration_Info_UScriptStruct_GameplayDebuggerDataPackRPCParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayDebuggerDataPackRPCParams), 1098738244U) },
		{ FGameplayDebuggerCategoryData::StaticStruct, Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::NewStructOps, TEXT("GameplayDebuggerCategoryData"), &Z_Registration_Info_UScriptStruct_GameplayDebuggerCategoryData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayDebuggerCategoryData), 3835083402U) },
		{ FGameplayDebuggerNetPack::StaticStruct, Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_Statics::NewStructOps, TEXT("GameplayDebuggerNetPack"), &Z_Registration_Info_UScriptStruct_GameplayDebuggerNetPack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayDebuggerNetPack), 1795913418U) },
		{ FGameplayDebuggerDebugActor::StaticStruct, Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::NewStructOps, TEXT("GameplayDebuggerDebugActor"), &Z_Registration_Info_UScriptStruct_GameplayDebuggerDebugActor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayDebuggerDebugActor), 673743166U) },
		{ FGameplayDebuggerVisLogSync::StaticStruct, Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync_Statics::NewStructOps, TEXT("GameplayDebuggerVisLogSync"), &Z_Registration_Info_UScriptStruct_GameplayDebuggerVisLogSync, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayDebuggerVisLogSync), 2876728275U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGameplayDebuggerCategoryReplicator, AGameplayDebuggerCategoryReplicator::StaticClass, TEXT("AGameplayDebuggerCategoryReplicator"), &Z_Registration_Info_UClass_AGameplayDebuggerCategoryReplicator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameplayDebuggerCategoryReplicator), 1730993223U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_1771630438(TEXT("/Script/GameplayDebugger"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
