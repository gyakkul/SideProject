// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/NiagaraNodeEmitter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraNodeEmitter() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraScriptUsage();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeEmitter();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeEmitter_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeWithDynamicPins();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraNodeEmitter::StaticRegisterNativesUNiagaraNodeEmitter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraNodeEmitter);
	UClass* Z_Construct_UClass_UNiagaraNodeEmitter_NoRegister()
	{
		return UNiagaraNodeEmitter::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraNodeEmitter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OwnerSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmitterHandleId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EmitterHandleId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ScriptType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScriptType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ScriptType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraNodeEmitter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraNodeWithDynamicPins,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeEmitter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A niagara graph node which represents an emitter and it's parameters. */" },
		{ "IncludePath", "NiagaraNodeEmitter.h" },
		{ "ModuleRelativePath", "Private/NiagaraNodeEmitter.h" },
		{ "ToolTip", "A niagara graph node which represents an emitter and it's parameters." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeEmitter_Statics::NewProp_OwnerSystem_MetaData[] = {
		{ "Comment", "/** The System that owns the emitter which is represented by this node. */" },
		{ "ModuleRelativePath", "Private/NiagaraNodeEmitter.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "The System that owns the emitter which is represented by this node." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraNodeEmitter_Statics::NewProp_OwnerSystem = { "OwnerSystem", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNodeEmitter, OwnerSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeEmitter_Statics::NewProp_OwnerSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeEmitter_Statics::NewProp_OwnerSystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeEmitter_Statics::NewProp_EmitterHandleId_MetaData[] = {
		{ "Comment", "/** The id of the emitter handle which points to the emitter represented by this node. */" },
		{ "ModuleRelativePath", "Private/NiagaraNodeEmitter.h" },
		{ "ToolTip", "The id of the emitter handle which points to the emitter represented by this node." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraNodeEmitter_Statics::NewProp_EmitterHandleId = { "EmitterHandleId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNodeEmitter, EmitterHandleId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeEmitter_Statics::NewProp_EmitterHandleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeEmitter_Statics::NewProp_EmitterHandleId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeEmitter_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Comment", "/** The display name for the title bar of this node. */" },
		{ "ModuleRelativePath", "Private/NiagaraNodeEmitter.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "The display name for the title bar of this node." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNiagaraNodeEmitter_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNodeEmitter, DisplayName), METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeEmitter_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeEmitter_Statics::NewProp_DisplayName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraNodeEmitter_Statics::NewProp_ScriptType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeEmitter_Statics::NewProp_ScriptType_MetaData[] = {
		{ "ModuleRelativePath", "Private/NiagaraNodeEmitter.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraNodeEmitter_Statics::NewProp_ScriptType = { "ScriptType", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNodeEmitter, ScriptType), Z_Construct_UEnum_Niagara_ENiagaraScriptUsage, METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeEmitter_Statics::NewProp_ScriptType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeEmitter_Statics::NewProp_ScriptType_MetaData)) }; // 2772325717
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraNodeEmitter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeEmitter_Statics::NewProp_OwnerSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeEmitter_Statics::NewProp_EmitterHandleId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeEmitter_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeEmitter_Statics::NewProp_ScriptType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeEmitter_Statics::NewProp_ScriptType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraNodeEmitter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraNodeEmitter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraNodeEmitter_Statics::ClassParams = {
		&UNiagaraNodeEmitter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraNodeEmitter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeEmitter_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeEmitter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeEmitter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraNodeEmitter()
	{
		if (!Z_Registration_Info_UClass_UNiagaraNodeEmitter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraNodeEmitter.OuterSingleton, Z_Construct_UClass_UNiagaraNodeEmitter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraNodeEmitter.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraNodeEmitter>()
	{
		return UNiagaraNodeEmitter::StaticClass();
	}
	UNiagaraNodeEmitter::UNiagaraNodeEmitter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraNodeEmitter);
	UNiagaraNodeEmitter::~UNiagaraNodeEmitter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeEmitter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeEmitter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraNodeEmitter, UNiagaraNodeEmitter::StaticClass, TEXT("UNiagaraNodeEmitter"), &Z_Registration_Info_UClass_UNiagaraNodeEmitter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraNodeEmitter), 2487596985U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeEmitter_h_3283033396(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeEmitter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeEmitter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
