// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/NiagaraEmitterHandle.h"
#include "../Public/NiagaraTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraEmitterHandle() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraEmitter_NoRegister();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEmitterHandle();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FVersionedNiagaraEmitter();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraEmitterHandle;
class UScriptStruct* FNiagaraEmitterHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraEmitterHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraEmitterHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraEmitterHandle, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraEmitterHandle"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraEmitterHandle.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraEmitterHandle>()
{
	return FNiagaraEmitterHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IdName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_IdName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[];
#endif
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastMergedSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LastMergedSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsolated_MetaData[];
#endif
		static void NewProp_bIsolated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsolated;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Instance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Instance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VersionedInstance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VersionedInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** \n * Stores emitter information within the context of a System.\n */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitterHandle.h" },
		{ "ToolTip", "Stores emitter information within the context of a System." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraEmitterHandle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Emitter ID" },
		{ "Comment", "/** The id of this emitter handle. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitterHandle.h" },
		{ "ToolTip", "The id of this emitter handle." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraEmitterHandle, Id), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_IdName_MetaData[] = {
		{ "Category", "Emitter ID" },
		{ "Comment", "// HACK!  Data sets used to use the emitter name, but this isn't guaranteed to be unique.  This is a temporary hack\n// to allow the data sets to continue work with using names, but that code needs to be refactored to use the id defined here.\n" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitterHandle.h" },
		{ "ToolTip", "HACK!  Data sets used to use the emitter name, but this isn't guaranteed to be unique.  This is a temporary hack\nto allow the data sets to continue work with using names, but that code needs to be refactored to use the id defined here." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_IdName = { "IdName", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraEmitterHandle, IdName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_IdName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_IdName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_bIsEnabled_MetaData[] = {
		{ "Comment", "/** Whether or not this emitter is enabled within the System.  Disabled emitters aren't simulated. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitterHandle.h" },
		{ "ToolTip", "Whether or not this emitter is enabled within the System.  Disabled emitters aren't simulated." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((FNiagaraEmitterHandle*)Obj)->bIsEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraEmitterHandle), &Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_bIsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_bIsEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "/** The display name for this emitter in the System. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitterHandle.h" },
		{ "ToolTip", "The display name for this emitter in the System." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraEmitterHandle, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_Name_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_Source_MetaData[] = {
		{ "Comment", "/** The source emitter this emitter handle was built from. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitterHandle.h" },
		{ "ToolTip", "The source emitter this emitter handle was built from." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0044000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraEmitterHandle, Source_DEPRECATED), Z_Construct_UClass_UNiagaraEmitter_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_Source_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_LastMergedSource_MetaData[] = {
		{ "Comment", "/** An unmodified copy of the emitter this handle references for use when merging change from the source emitter. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitterHandle.h" },
		{ "ToolTip", "An unmodified copy of the emitter this handle references for use when merging change from the source emitter." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_LastMergedSource = { "LastMergedSource", nullptr, (EPropertyFlags)0x0044000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraEmitterHandle, LastMergedSource_DEPRECATED), Z_Construct_UClass_UNiagaraEmitter_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_LastMergedSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_LastMergedSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_bIsolated_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitterHandle.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_bIsolated_SetBit(void* Obj)
	{
		((FNiagaraEmitterHandle*)Obj)->bIsolated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_bIsolated = { "bIsolated", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraEmitterHandle), &Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_bIsolated_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_bIsolated_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_bIsolated_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_Instance_MetaData[] = {
		{ "Comment", "/** The copied instance of the emitter this handle references. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitterHandle.h" },
		{ "ToolTip", "The copied instance of the emitter this handle references." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0044000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraEmitterHandle, Instance_DEPRECATED), Z_Construct_UClass_UNiagaraEmitter_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_Instance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_Instance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_VersionedInstance_MetaData[] = {
		{ "Comment", "/** The copied instance of the emitter this handle references. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitterHandle.h" },
		{ "ToolTip", "The copied instance of the emitter this handle references." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_VersionedInstance = { "VersionedInstance", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraEmitterHandle, VersionedInstance), Z_Construct_UScriptStruct_FVersionedNiagaraEmitter, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_VersionedInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_VersionedInstance_MetaData)) }; // 867959278
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_IdName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_bIsEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_Name,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_Source,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_LastMergedSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_bIsolated,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_Instance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_VersionedInstance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraEmitterHandle",
		sizeof(FNiagaraEmitterHandle),
		alignof(FNiagaraEmitterHandle),
		Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEmitterHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraEmitterHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraEmitterHandle.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraEmitterHandle.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitterHandle_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitterHandle_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraEmitterHandle::StaticStruct, Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewStructOps, TEXT("NiagaraEmitterHandle"), &Z_Registration_Info_UScriptStruct_NiagaraEmitterHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraEmitterHandle), 936216569U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitterHandle_h_2346625(TEXT("/Script/Niagara"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitterHandle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitterHandle_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
