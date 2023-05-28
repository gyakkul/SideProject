// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/WorldPartition/WorldPartitionBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionBlueprintLibrary() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionBlueprintLibrary_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorDesc();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActorDesc;
class UScriptStruct* FActorDesc::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActorDesc.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActorDesc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorDesc, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ActorDesc"));
	}
	return Z_Registration_Info_UScriptStruct_ActorDesc.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FActorDesc>()
{
	return FActorDesc::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FActorDesc_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Class;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Label;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeGrid_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RuntimeGrid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSpatiallyLoaded_MetaData[];
#endif
		static void NewProp_bIsSpatiallyLoaded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSpatiallyLoaded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bActorIsEditorOnly_MetaData[];
#endif
		static void NewProp_bActorIsEditorOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bActorIsEditorOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorPackage_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActorPackage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorPath_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActorPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorDesc_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Snapshot of an actor descriptor, which represents the state of an actor on disk.\n * The actor may or may not be loaded.\n */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionBlueprintLibrary.h" },
		{ "ToolTip", "Snapshot of an actor descriptor, which represents the state of an actor on disk.\nThe actor may or may not be loaded." },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorDesc_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorDesc>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorDesc_Statics::NewProp_Guid_MetaData[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** The actor GUID of this descriptor. */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionBlueprintLibrary.h" },
		{ "ToolTip", "The actor GUID of this descriptor." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorDesc_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActorDesc, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorDesc_Statics::NewProp_Guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorDesc_Statics::NewProp_Guid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorDesc_Statics::NewProp_Class_MetaData[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** Actor class, can point to a native or Blueprint class and may be redirected. */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionBlueprintLibrary.h" },
		{ "ToolTip", "Actor class, can point to a native or Blueprint class and may be redirected." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorDesc_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActorDesc, Class), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorDesc_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorDesc_Statics::NewProp_Class_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorDesc_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** Internal name of the acgor. */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionBlueprintLibrary.h" },
		{ "ToolTip", "Internal name of the acgor." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FActorDesc_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActorDesc, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FActorDesc_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorDesc_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorDesc_Statics::NewProp_Label_MetaData[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** Actor's label. */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionBlueprintLibrary.h" },
		{ "ToolTip", "Actor's label." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FActorDesc_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActorDesc, Label), METADATA_PARAMS(Z_Construct_UScriptStruct_FActorDesc_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorDesc_Statics::NewProp_Label_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorDesc_Statics::NewProp_Bounds_MetaData[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** Streaming bounds of this actor. */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionBlueprintLibrary.h" },
		{ "ToolTip", "Streaming bounds of this actor." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorDesc_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActorDesc, Bounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorDesc_Statics::NewProp_Bounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorDesc_Statics::NewProp_Bounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorDesc_Statics::NewProp_RuntimeGrid_MetaData[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** Actor's target runtime grid. */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionBlueprintLibrary.h" },
		{ "ToolTip", "Actor's target runtime grid." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FActorDesc_Statics::NewProp_RuntimeGrid = { "RuntimeGrid", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActorDesc, RuntimeGrid), METADATA_PARAMS(Z_Construct_UScriptStruct_FActorDesc_Statics::NewProp_RuntimeGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorDesc_Statics::NewProp_RuntimeGrid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorDesc_Statics::NewProp_bIsSpatiallyLoaded_MetaData[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** Actor's streaming state. */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionBlueprintLibrary.h" },
		{ "ToolTip", "Actor's streaming state." },
	};
#endif
	void Z_Construct_UScriptStruct_FActorDesc_Statics::NewProp_bIsSpatiallyLoaded_SetBit(void* Obj)
	{
		((FActorDesc*)Obj)->bIsSpatiallyLoaded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FActorDesc_Statics::NewProp_bIsSpatiallyLoaded = { "bIsSpatiallyLoaded", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FActorDesc), &Z_Construct_UScriptStruct_FActorDesc_Statics::NewProp_bIsSpatiallyLoaded_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorDesc_Statics::NewProp_bIsSpatiallyLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorDesc_Statics::NewProp_bIsSpatiallyLoaded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorDesc_Statics::NewProp_bActorIsEditorOnly_MetaData[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** Actor's editor-only property. */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionBlueprintLibrary.h" },
		{ "ToolTip", "Actor's editor-only property." },
	};
#endif
	void Z_Construct_UScriptStruct_FActorDesc_Statics::NewProp_bActorIsEditorOnly_SetBit(void* Obj)
	{
		((FActorDesc*)Obj)->bActorIsEditorOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FActorDesc_Statics::NewProp_bActorIsEditorOnly = { "bActorIsEditorOnly", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FActorDesc), &Z_Construct_UScriptStruct_FActorDesc_Statics::NewProp_bActorIsEditorOnly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorDesc_Statics::NewProp_bActorIsEditorOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorDesc_Statics::NewProp_bActorIsEditorOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorDesc_Statics::NewProp_ActorPackage_MetaData[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** Actor's package name. */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionBlueprintLibrary.h" },
		{ "ToolTip", "Actor's package name." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FActorDesc_Statics::NewProp_ActorPackage = { "ActorPackage", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActorDesc, ActorPackage), METADATA_PARAMS(Z_Construct_UScriptStruct_FActorDesc_Statics::NewProp_ActorPackage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorDesc_Statics::NewProp_ActorPackage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorDesc_Statics::NewProp_ActorPath_MetaData[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** Actor's path name. */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionBlueprintLibrary.h" },
		{ "ToolTip", "Actor's path name." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FActorDesc_Statics::NewProp_ActorPath = { "ActorPath", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActorDesc, ActorPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FActorDesc_Statics::NewProp_ActorPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorDesc_Statics::NewProp_ActorPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorDesc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorDesc_Statics::NewProp_Guid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorDesc_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorDesc_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorDesc_Statics::NewProp_Label,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorDesc_Statics::NewProp_Bounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorDesc_Statics::NewProp_RuntimeGrid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorDesc_Statics::NewProp_bIsSpatiallyLoaded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorDesc_Statics::NewProp_bActorIsEditorOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorDesc_Statics::NewProp_ActorPackage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorDesc_Statics::NewProp_ActorPath,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorDesc_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ActorDesc",
		sizeof(FActorDesc),
		alignof(FActorDesc),
		Z_Construct_UScriptStruct_FActorDesc_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorDesc_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorDesc_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorDesc_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorDesc()
	{
		if (!Z_Registration_Info_UScriptStruct_ActorDesc.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActorDesc.InnerSingleton, Z_Construct_UScriptStruct_FActorDesc_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ActorDesc.InnerSingleton;
	}
	DEFINE_FUNCTION(UWorldPartitionBlueprintLibrary::execGetIntersectingActorDescs)
	{
		P_GET_STRUCT_REF(FBox,Z_Param_Out_InBox);
		P_GET_TARRAY_REF(FActorDesc,Z_Param_Out_OutActorDescs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UWorldPartitionBlueprintLibrary::GetIntersectingActorDescs(Z_Param_Out_InBox,Z_Param_Out_OutActorDescs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWorldPartitionBlueprintLibrary::execGetActorDescs)
	{
		P_GET_TARRAY_REF(FActorDesc,Z_Param_Out_OutActorDescs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UWorldPartitionBlueprintLibrary::GetActorDescs(Z_Param_Out_OutActorDescs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWorldPartitionBlueprintLibrary::execUnpinActors)
	{
		P_GET_TARRAY_REF(FGuid,Z_Param_Out_InActorsToUnpin);
		P_FINISH;
		P_NATIVE_BEGIN;
		UWorldPartitionBlueprintLibrary::UnpinActors(Z_Param_Out_InActorsToUnpin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWorldPartitionBlueprintLibrary::execPinActors)
	{
		P_GET_TARRAY_REF(FGuid,Z_Param_Out_InActorsToPin);
		P_FINISH;
		P_NATIVE_BEGIN;
		UWorldPartitionBlueprintLibrary::PinActors(Z_Param_Out_InActorsToPin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWorldPartitionBlueprintLibrary::execUnloadActors)
	{
		P_GET_TARRAY_REF(FGuid,Z_Param_Out_InActorsToUnload);
		P_FINISH;
		P_NATIVE_BEGIN;
		UWorldPartitionBlueprintLibrary::UnloadActors(Z_Param_Out_InActorsToUnload);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWorldPartitionBlueprintLibrary::execLoadActors)
	{
		P_GET_TARRAY_REF(FGuid,Z_Param_Out_InActorsToLoad);
		P_FINISH;
		P_NATIVE_BEGIN;
		UWorldPartitionBlueprintLibrary::LoadActors(Z_Param_Out_InActorsToLoad);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWorldPartitionBlueprintLibrary::execGetRuntimeWorldBounds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBox*)Z_Param__Result=UWorldPartitionBlueprintLibrary::GetRuntimeWorldBounds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWorldPartitionBlueprintLibrary::execGetEditorWorldBounds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBox*)Z_Param__Result=UWorldPartitionBlueprintLibrary::GetEditorWorldBounds();
		P_NATIVE_END;
	}
	void UWorldPartitionBlueprintLibrary::StaticRegisterNativesUWorldPartitionBlueprintLibrary()
	{
		UClass* Class = UWorldPartitionBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActorDescs", &UWorldPartitionBlueprintLibrary::execGetActorDescs },
			{ "GetEditorWorldBounds", &UWorldPartitionBlueprintLibrary::execGetEditorWorldBounds },
			{ "GetIntersectingActorDescs", &UWorldPartitionBlueprintLibrary::execGetIntersectingActorDescs },
			{ "GetRuntimeWorldBounds", &UWorldPartitionBlueprintLibrary::execGetRuntimeWorldBounds },
			{ "LoadActors", &UWorldPartitionBlueprintLibrary::execLoadActors },
			{ "PinActors", &UWorldPartitionBlueprintLibrary::execPinActors },
			{ "UnloadActors", &UWorldPartitionBlueprintLibrary::execUnloadActors },
			{ "UnpinActors", &UWorldPartitionBlueprintLibrary::execUnpinActors },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetActorDescs_Statics
	{
		struct WorldPartitionBlueprintLibrary_eventGetActorDescs_Parms
		{
			TArray<FActorDesc> OutActorDescs;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutActorDescs_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutActorDescs;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetActorDescs_Statics::NewProp_OutActorDescs_Inner = { "OutActorDescs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FActorDesc, METADATA_PARAMS(nullptr, 0) }; // 1474579576
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetActorDescs_Statics::NewProp_OutActorDescs = { "OutActorDescs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldPartitionBlueprintLibrary_eventGetActorDescs_Parms, OutActorDescs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1474579576
	void Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetActorDescs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WorldPartitionBlueprintLibrary_eventGetActorDescs_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetActorDescs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WorldPartitionBlueprintLibrary_eventGetActorDescs_Parms), &Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetActorDescs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetActorDescs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetActorDescs_Statics::NewProp_OutActorDescs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetActorDescs_Statics::NewProp_OutActorDescs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetActorDescs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetActorDescs_Statics::Function_MetaDataParams[] = {
		{ "Category", "World Partition" },
		{ "Comment", "/**\n\x09 * Gets all the actor descriptors into the provided array, recursing into actor containers.\n\x09 * @return True if the operation was successful.\n\x09 */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionBlueprintLibrary.h" },
		{ "ToolTip", "Gets all the actor descriptors into the provided array, recursing into actor containers.\n@return True if the operation was successful." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetActorDescs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldPartitionBlueprintLibrary, nullptr, "GetActorDescs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetActorDescs_Statics::WorldPartitionBlueprintLibrary_eventGetActorDescs_Parms), Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetActorDescs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetActorDescs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetActorDescs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetActorDescs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetActorDescs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetActorDescs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetEditorWorldBounds_Statics
	{
		struct WorldPartitionBlueprintLibrary_eventGetEditorWorldBounds_Parms
		{
			FBox ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetEditorWorldBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldPartitionBlueprintLibrary_eventGetEditorWorldBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetEditorWorldBounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetEditorWorldBounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetEditorWorldBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "World Partition" },
		{ "Comment", "/**\n\x09 * Gets the editor world bounds, which includes all actor descriptors.\n\x09 * @return The editor world bounds.\n\x09 */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionBlueprintLibrary.h" },
		{ "ToolTip", "Gets the editor world bounds, which includes all actor descriptors.\n@return The editor world bounds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetEditorWorldBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldPartitionBlueprintLibrary, nullptr, "GetEditorWorldBounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetEditorWorldBounds_Statics::WorldPartitionBlueprintLibrary_eventGetEditorWorldBounds_Parms), Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetEditorWorldBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetEditorWorldBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetEditorWorldBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetEditorWorldBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetEditorWorldBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetEditorWorldBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetIntersectingActorDescs_Statics
	{
		struct WorldPartitionBlueprintLibrary_eventGetIntersectingActorDescs_Parms
		{
			FBox InBox;
			TArray<FActorDesc> OutActorDescs;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBox_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InBox;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutActorDescs_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutActorDescs;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetIntersectingActorDescs_Statics::NewProp_InBox_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetIntersectingActorDescs_Statics::NewProp_InBox = { "InBox", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldPartitionBlueprintLibrary_eventGetIntersectingActorDescs_Parms, InBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetIntersectingActorDescs_Statics::NewProp_InBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetIntersectingActorDescs_Statics::NewProp_InBox_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetIntersectingActorDescs_Statics::NewProp_OutActorDescs_Inner = { "OutActorDescs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FActorDesc, METADATA_PARAMS(nullptr, 0) }; // 1474579576
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetIntersectingActorDescs_Statics::NewProp_OutActorDescs = { "OutActorDescs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldPartitionBlueprintLibrary_eventGetIntersectingActorDescs_Parms, OutActorDescs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1474579576
	void Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetIntersectingActorDescs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WorldPartitionBlueprintLibrary_eventGetIntersectingActorDescs_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetIntersectingActorDescs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WorldPartitionBlueprintLibrary_eventGetIntersectingActorDescs_Parms), &Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetIntersectingActorDescs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetIntersectingActorDescs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetIntersectingActorDescs_Statics::NewProp_InBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetIntersectingActorDescs_Statics::NewProp_OutActorDescs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetIntersectingActorDescs_Statics::NewProp_OutActorDescs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetIntersectingActorDescs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetIntersectingActorDescs_Statics::Function_MetaDataParams[] = {
		{ "Category", "World Partition" },
		{ "Comment", "/**\n\x09 * Gets all the actor descriptors intersecting the provided box into the provided array, recursing into actor containers.\n\x09 * @return True if the operation was successful.\n\x09 */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionBlueprintLibrary.h" },
		{ "ToolTip", "Gets all the actor descriptors intersecting the provided box into the provided array, recursing into actor containers.\n@return True if the operation was successful." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetIntersectingActorDescs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldPartitionBlueprintLibrary, nullptr, "GetIntersectingActorDescs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetIntersectingActorDescs_Statics::WorldPartitionBlueprintLibrary_eventGetIntersectingActorDescs_Parms), Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetIntersectingActorDescs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetIntersectingActorDescs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetIntersectingActorDescs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetIntersectingActorDescs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetIntersectingActorDescs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetIntersectingActorDescs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetRuntimeWorldBounds_Statics
	{
		struct WorldPartitionBlueprintLibrary_eventGetRuntimeWorldBounds_Parms
		{
			FBox ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetRuntimeWorldBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldPartitionBlueprintLibrary_eventGetRuntimeWorldBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetRuntimeWorldBounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetRuntimeWorldBounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetRuntimeWorldBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "World Partition" },
		{ "Comment", "/**\n\x09 * Gets the runtime world bounds, which only includes actor descriptors that aren't editor only.\n\x09 * @return The runtime world bounds.\n\x09 */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionBlueprintLibrary.h" },
		{ "ToolTip", "Gets the runtime world bounds, which only includes actor descriptors that aren't editor only.\n@return The runtime world bounds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetRuntimeWorldBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldPartitionBlueprintLibrary, nullptr, "GetRuntimeWorldBounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetRuntimeWorldBounds_Statics::WorldPartitionBlueprintLibrary_eventGetRuntimeWorldBounds_Parms), Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetRuntimeWorldBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetRuntimeWorldBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetRuntimeWorldBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetRuntimeWorldBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetRuntimeWorldBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetRuntimeWorldBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_LoadActors_Statics
	{
		struct WorldPartitionBlueprintLibrary_eventLoadActors_Parms
		{
			TArray<FGuid> InActorsToLoad;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InActorsToLoad_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InActorsToLoad_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InActorsToLoad;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_LoadActors_Statics::NewProp_InActorsToLoad_Inner = { "InActorsToLoad", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_LoadActors_Statics::NewProp_InActorsToLoad_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_LoadActors_Statics::NewProp_InActorsToLoad = { "InActorsToLoad", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldPartitionBlueprintLibrary_eventLoadActors_Parms, InActorsToLoad), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_LoadActors_Statics::NewProp_InActorsToLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_LoadActors_Statics::NewProp_InActorsToLoad_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_LoadActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_LoadActors_Statics::NewProp_InActorsToLoad_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_LoadActors_Statics::NewProp_InActorsToLoad,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_LoadActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "World Partition" },
		{ "Comment", "/**\n\x09 * Load actors\n\x09 */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionBlueprintLibrary.h" },
		{ "ToolTip", "Load actors" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_LoadActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldPartitionBlueprintLibrary, nullptr, "LoadActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_LoadActors_Statics::WorldPartitionBlueprintLibrary_eventLoadActors_Parms), Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_LoadActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_LoadActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_LoadActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_LoadActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_LoadActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_LoadActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_PinActors_Statics
	{
		struct WorldPartitionBlueprintLibrary_eventPinActors_Parms
		{
			TArray<FGuid> InActorsToPin;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InActorsToPin_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InActorsToPin_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InActorsToPin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_PinActors_Statics::NewProp_InActorsToPin_Inner = { "InActorsToPin", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_PinActors_Statics::NewProp_InActorsToPin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_PinActors_Statics::NewProp_InActorsToPin = { "InActorsToPin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldPartitionBlueprintLibrary_eventPinActors_Parms, InActorsToPin), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_PinActors_Statics::NewProp_InActorsToPin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_PinActors_Statics::NewProp_InActorsToPin_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_PinActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_PinActors_Statics::NewProp_InActorsToPin_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_PinActors_Statics::NewProp_InActorsToPin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_PinActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "World Partition" },
		{ "Comment", "/**\n\x09 * Pin actors\n\x09 */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionBlueprintLibrary.h" },
		{ "ToolTip", "Pin actors" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_PinActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldPartitionBlueprintLibrary, nullptr, "PinActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_PinActors_Statics::WorldPartitionBlueprintLibrary_eventPinActors_Parms), Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_PinActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_PinActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_PinActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_PinActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_PinActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_PinActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_UnloadActors_Statics
	{
		struct WorldPartitionBlueprintLibrary_eventUnloadActors_Parms
		{
			TArray<FGuid> InActorsToUnload;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InActorsToUnload_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InActorsToUnload_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InActorsToUnload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_UnloadActors_Statics::NewProp_InActorsToUnload_Inner = { "InActorsToUnload", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_UnloadActors_Statics::NewProp_InActorsToUnload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_UnloadActors_Statics::NewProp_InActorsToUnload = { "InActorsToUnload", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldPartitionBlueprintLibrary_eventUnloadActors_Parms, InActorsToUnload), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_UnloadActors_Statics::NewProp_InActorsToUnload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_UnloadActors_Statics::NewProp_InActorsToUnload_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_UnloadActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_UnloadActors_Statics::NewProp_InActorsToUnload_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_UnloadActors_Statics::NewProp_InActorsToUnload,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_UnloadActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "World Partition" },
		{ "Comment", "/**\n\x09 * Unload actors\n\x09 */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionBlueprintLibrary.h" },
		{ "ToolTip", "Unload actors" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_UnloadActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldPartitionBlueprintLibrary, nullptr, "UnloadActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_UnloadActors_Statics::WorldPartitionBlueprintLibrary_eventUnloadActors_Parms), Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_UnloadActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_UnloadActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_UnloadActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_UnloadActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_UnloadActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_UnloadActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_UnpinActors_Statics
	{
		struct WorldPartitionBlueprintLibrary_eventUnpinActors_Parms
		{
			TArray<FGuid> InActorsToUnpin;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InActorsToUnpin_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InActorsToUnpin_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InActorsToUnpin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_UnpinActors_Statics::NewProp_InActorsToUnpin_Inner = { "InActorsToUnpin", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_UnpinActors_Statics::NewProp_InActorsToUnpin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_UnpinActors_Statics::NewProp_InActorsToUnpin = { "InActorsToUnpin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldPartitionBlueprintLibrary_eventUnpinActors_Parms, InActorsToUnpin), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_UnpinActors_Statics::NewProp_InActorsToUnpin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_UnpinActors_Statics::NewProp_InActorsToUnpin_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_UnpinActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_UnpinActors_Statics::NewProp_InActorsToUnpin_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_UnpinActors_Statics::NewProp_InActorsToUnpin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_UnpinActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "World Partition" },
		{ "Comment", "/**\n\x09 * Unpin actors\n\x09 */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionBlueprintLibrary.h" },
		{ "ToolTip", "Unpin actors" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_UnpinActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldPartitionBlueprintLibrary, nullptr, "UnpinActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_UnpinActors_Statics::WorldPartitionBlueprintLibrary_eventUnpinActors_Parms), Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_UnpinActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_UnpinActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_UnpinActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_UnpinActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_UnpinActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_UnpinActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionBlueprintLibrary);
	UClass* Z_Construct_UClass_UWorldPartitionBlueprintLibrary_NoRegister()
	{
		return UWorldPartitionBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UWorldPartitionBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldPartitionBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWorldPartitionBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetActorDescs, "GetActorDescs" }, // 898287920
		{ &Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetEditorWorldBounds, "GetEditorWorldBounds" }, // 3431119385
		{ &Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetIntersectingActorDescs, "GetIntersectingActorDescs" }, // 2325351157
		{ &Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetRuntimeWorldBounds, "GetRuntimeWorldBounds" }, // 3637455223
		{ &Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_LoadActors, "LoadActors" }, // 3238830263
		{ &Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_PinActors, "PinActors" }, // 1530017985
		{ &Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_UnloadActors, "UnloadActors" }, // 75868964
		{ &Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_UnpinActors, "UnpinActors" }, // 3051115598
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/WorldPartitionBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldPartitionBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionBlueprintLibrary_Statics::ClassParams = {
		&UWorldPartitionBlueprintLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldPartitionBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UWorldPartitionBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UWorldPartitionBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldPartitionBlueprintLibrary.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UWorldPartitionBlueprintLibrary>()
	{
		return UWorldPartitionBlueprintLibrary::StaticClass();
	}
	UWorldPartitionBlueprintLibrary::UWorldPartitionBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionBlueprintLibrary);
	UWorldPartitionBlueprintLibrary::~UWorldPartitionBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionBlueprintLibrary_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionBlueprintLibrary_h_Statics::ScriptStructInfo[] = {
		{ FActorDesc::StaticStruct, Z_Construct_UScriptStruct_FActorDesc_Statics::NewStructOps, TEXT("ActorDesc"), &Z_Registration_Info_UScriptStruct_ActorDesc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorDesc), 1474579576U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartitionBlueprintLibrary, UWorldPartitionBlueprintLibrary::StaticClass, TEXT("UWorldPartitionBlueprintLibrary"), &Z_Registration_Info_UClass_UWorldPartitionBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionBlueprintLibrary), 3776127704U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionBlueprintLibrary_h_221638098(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionBlueprintLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionBlueprintLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionBlueprintLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
