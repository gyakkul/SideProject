// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassReplication/Public/MassReplicationSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassReplicationSubsystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	MASSLOD_API UClass* Z_Construct_UClass_UMassLODSubsystem_NoRegister();
	MASSREPLICATION_API UClass* Z_Construct_UClass_AMassClientBubbleInfoBase_NoRegister();
	MASSREPLICATION_API UClass* Z_Construct_UClass_UMassReplicationSubsystem();
	MASSREPLICATION_API UClass* Z_Construct_UClass_UMassReplicationSubsystem_NoRegister();
	MASSREPLICATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassClientBubbleInfoData();
	UPackage* Z_Construct_UPackage__Script_MassReplication();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassClientBubbleInfoData;
class UScriptStruct* FMassClientBubbleInfoData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassClientBubbleInfoData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassClientBubbleInfoData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassClientBubbleInfoData, (UObject*)Z_Construct_UPackage__Script_MassReplication(), TEXT("MassClientBubbleInfoData"));
	}
	return Z_Registration_Info_UScriptStruct_MassClientBubbleInfoData.OuterSingleton;
}
template<> MASSREPLICATION_API UScriptStruct* StaticStruct<FMassClientBubbleInfoData>()
{
	return FMassClientBubbleInfoData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassClientBubbleInfoData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Bubbles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bubbles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Bubbles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BubbleClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BubbleClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassClientBubbleInfoData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassReplicationSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassClientBubbleInfoData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassClientBubbleInfoData>();
	}
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMassClientBubbleInfoData_Statics::NewProp_Bubbles_Inner = { "Bubbles", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AMassClientBubbleInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassClientBubbleInfoData_Statics::NewProp_Bubbles_MetaData[] = {
		{ "Comment", "/** A free list array of AMassClientBubbleInfos. This is organised so the index is that of the client FMassClientHandle */" },
		{ "ModuleRelativePath", "Public/MassReplicationSubsystem.h" },
		{ "ToolTip", "A free list array of AMassClientBubbleInfos. This is organised so the index is that of the client FMassClientHandle" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMassClientBubbleInfoData_Statics::NewProp_Bubbles = { "Bubbles", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassClientBubbleInfoData, Bubbles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassClientBubbleInfoData_Statics::NewProp_Bubbles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassClientBubbleInfoData_Statics::NewProp_Bubbles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassClientBubbleInfoData_Statics::NewProp_BubbleClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassReplicationSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMassClientBubbleInfoData_Statics::NewProp_BubbleClass = { "BubbleClass", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassClientBubbleInfoData, BubbleClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AMassClientBubbleInfoBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassClientBubbleInfoData_Statics::NewProp_BubbleClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassClientBubbleInfoData_Statics::NewProp_BubbleClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassClientBubbleInfoData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassClientBubbleInfoData_Statics::NewProp_Bubbles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassClientBubbleInfoData_Statics::NewProp_Bubbles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassClientBubbleInfoData_Statics::NewProp_BubbleClass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassClientBubbleInfoData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassReplication,
		nullptr,
		&NewStructOps,
		"MassClientBubbleInfoData",
		sizeof(FMassClientBubbleInfoData),
		alignof(FMassClientBubbleInfoData),
		Z_Construct_UScriptStruct_FMassClientBubbleInfoData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassClientBubbleInfoData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassClientBubbleInfoData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassClientBubbleInfoData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassClientBubbleInfoData()
	{
		if (!Z_Registration_Info_UScriptStruct_MassClientBubbleInfoData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassClientBubbleInfoData.InnerSingleton, Z_Construct_UScriptStruct_FMassClientBubbleInfoData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassClientBubbleInfoData.InnerSingleton;
	}
	void UMassReplicationSubsystem::StaticRegisterNativesUMassReplicationSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassReplicationSubsystem);
	UClass* Z_Construct_UClass_UMassReplicationSubsystem_NoRegister()
	{
		return UMassReplicationSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMassReplicationSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BubbleInfoArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BubbleInfoArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BubbleInfoArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_World;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MassLODSubsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MassLODSubsystem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassReplicationSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MassReplication,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassReplicationSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *  Manages the creation of NetworkIDs, ClientBubbles and ClientReplicationInfo.\n *  NetworkIDs are per replicated Agent Entity and are unique and replicated between server and clients.\n *  ClientBubbles relate to the player controller that owns the parent UNetConnection to a Client machine.\n *  ClientReplicationInfo relate to all the player controllers that have a parent or child UNetConnection to a single Client machine (split screen etc).\n */" },
		{ "IncludePath", "MassReplicationSubsystem.h" },
		{ "ModuleRelativePath", "Public/MassReplicationSubsystem.h" },
		{ "ToolTip", "Manages the creation of NetworkIDs, ClientBubbles and ClientReplicationInfo.\nNetworkIDs are per replicated Agent Entity and are unique and replicated between server and clients.\nClientBubbles relate to the player controller that owns the parent UNetConnection to a Client machine.\nClientReplicationInfo relate to all the player controllers that have a parent or child UNetConnection to a single Client machine (split screen etc)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassReplicationSubsystem_Statics::NewProp_BubbleInfoArray_Inner = { "BubbleInfoArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMassClientBubbleInfoData, METADATA_PARAMS(nullptr, 0) }; // 831602417
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassReplicationSubsystem_Statics::NewProp_BubbleInfoArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassReplicationSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMassReplicationSubsystem_Statics::NewProp_BubbleInfoArray = { "BubbleInfoArray", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassReplicationSubsystem, BubbleInfoArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMassReplicationSubsystem_Statics::NewProp_BubbleInfoArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassReplicationSubsystem_Statics::NewProp_BubbleInfoArray_MetaData)) }; // 831602417
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassReplicationSubsystem_Statics::NewProp_World_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassReplicationSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMassReplicationSubsystem_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassReplicationSubsystem, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMassReplicationSubsystem_Statics::NewProp_World_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassReplicationSubsystem_Statics::NewProp_World_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassReplicationSubsystem_Statics::NewProp_MassLODSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassReplicationSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMassReplicationSubsystem_Statics::NewProp_MassLODSubsystem = { "MassLODSubsystem", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassReplicationSubsystem, MassLODSubsystem), Z_Construct_UClass_UMassLODSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMassReplicationSubsystem_Statics::NewProp_MassLODSubsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassReplicationSubsystem_Statics::NewProp_MassLODSubsystem_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassReplicationSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassReplicationSubsystem_Statics::NewProp_BubbleInfoArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassReplicationSubsystem_Statics::NewProp_BubbleInfoArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassReplicationSubsystem_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassReplicationSubsystem_Statics::NewProp_MassLODSubsystem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassReplicationSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassReplicationSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassReplicationSubsystem_Statics::ClassParams = {
		&UMassReplicationSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassReplicationSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassReplicationSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMassReplicationSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassReplicationSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassReplicationSubsystem()
	{
		if (!Z_Registration_Info_UClass_UMassReplicationSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassReplicationSubsystem.OuterSingleton, Z_Construct_UClass_UMassReplicationSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassReplicationSubsystem.OuterSingleton;
	}
	template<> MASSREPLICATION_API UClass* StaticClass<UMassReplicationSubsystem>()
	{
		return UMassReplicationSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassReplicationSubsystem);
	UMassReplicationSubsystem::~UMassReplicationSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationSubsystem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationSubsystem_h_Statics::ScriptStructInfo[] = {
		{ FMassClientBubbleInfoData::StaticStruct, Z_Construct_UScriptStruct_FMassClientBubbleInfoData_Statics::NewStructOps, TEXT("MassClientBubbleInfoData"), &Z_Registration_Info_UScriptStruct_MassClientBubbleInfoData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassClientBubbleInfoData), 831602417U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassReplicationSubsystem, UMassReplicationSubsystem::StaticClass, TEXT("UMassReplicationSubsystem"), &Z_Registration_Info_UClass_UMassReplicationSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassReplicationSubsystem), 2896066129U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationSubsystem_h_572399802(TEXT("/Script/MassReplication"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationSubsystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationSubsystem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
