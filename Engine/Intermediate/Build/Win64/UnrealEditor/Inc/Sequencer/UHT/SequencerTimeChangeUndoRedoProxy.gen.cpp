// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/SequencerTimeChangeUndoRedoProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequencerTimeChangeUndoRedoProxy() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQualifiedFrameTime();
	SEQUENCER_API UClass* Z_Construct_UClass_USequencerTimeChangeUndoRedoProxy();
	SEQUENCER_API UClass* Z_Construct_UClass_USequencerTimeChangeUndoRedoProxy_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Sequencer();
// End Cross Module References
	void USequencerTimeChangeUndoRedoProxy::StaticRegisterNativesUSequencerTimeChangeUndoRedoProxy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USequencerTimeChangeUndoRedoProxy);
	UClass* Z_Construct_UClass_USequencerTimeChangeUndoRedoProxy_NoRegister()
	{
		return USequencerTimeChangeUndoRedoProxy::StaticClass();
	}
	struct Z_Construct_UClass_USequencerTimeChangeUndoRedoProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTimeWasSet_MetaData[];
#endif
		static void NewProp_bTimeWasSet_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTimeWasSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USequencerTimeChangeUndoRedoProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Sequencer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerTimeChangeUndoRedoProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SequencerTimeChangeUndoRedoProxy.h" },
		{ "ModuleRelativePath", "Private/SequencerTimeChangeUndoRedoProxy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerTimeChangeUndoRedoProxy_Statics::NewProp_Time_MetaData[] = {
		{ "ModuleRelativePath", "Private/SequencerTimeChangeUndoRedoProxy.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USequencerTimeChangeUndoRedoProxy_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequencerTimeChangeUndoRedoProxy, Time), Z_Construct_UScriptStruct_FQualifiedFrameTime, METADATA_PARAMS(Z_Construct_UClass_USequencerTimeChangeUndoRedoProxy_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerTimeChangeUndoRedoProxy_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerTimeChangeUndoRedoProxy_Statics::NewProp_bTimeWasSet_MetaData[] = {
		{ "Comment", "//no TOptional UPROPERTY so use this instead\n" },
		{ "ModuleRelativePath", "Private/SequencerTimeChangeUndoRedoProxy.h" },
		{ "ToolTip", "no TOptional UPROPERTY so use this instead" },
	};
#endif
	void Z_Construct_UClass_USequencerTimeChangeUndoRedoProxy_Statics::NewProp_bTimeWasSet_SetBit(void* Obj)
	{
		((USequencerTimeChangeUndoRedoProxy*)Obj)->bTimeWasSet = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerTimeChangeUndoRedoProxy_Statics::NewProp_bTimeWasSet = { "bTimeWasSet", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequencerTimeChangeUndoRedoProxy), &Z_Construct_UClass_USequencerTimeChangeUndoRedoProxy_Statics::NewProp_bTimeWasSet_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerTimeChangeUndoRedoProxy_Statics::NewProp_bTimeWasSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerTimeChangeUndoRedoProxy_Statics::NewProp_bTimeWasSet_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USequencerTimeChangeUndoRedoProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerTimeChangeUndoRedoProxy_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerTimeChangeUndoRedoProxy_Statics::NewProp_bTimeWasSet,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USequencerTimeChangeUndoRedoProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USequencerTimeChangeUndoRedoProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USequencerTimeChangeUndoRedoProxy_Statics::ClassParams = {
		&USequencerTimeChangeUndoRedoProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USequencerTimeChangeUndoRedoProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USequencerTimeChangeUndoRedoProxy_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USequencerTimeChangeUndoRedoProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerTimeChangeUndoRedoProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USequencerTimeChangeUndoRedoProxy()
	{
		if (!Z_Registration_Info_UClass_USequencerTimeChangeUndoRedoProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USequencerTimeChangeUndoRedoProxy.OuterSingleton, Z_Construct_UClass_USequencerTimeChangeUndoRedoProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USequencerTimeChangeUndoRedoProxy.OuterSingleton;
	}
	template<> SEQUENCER_API UClass* StaticClass<USequencerTimeChangeUndoRedoProxy>()
	{
		return USequencerTimeChangeUndoRedoProxy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USequencerTimeChangeUndoRedoProxy);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Private_SequencerTimeChangeUndoRedoProxy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Private_SequencerTimeChangeUndoRedoProxy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USequencerTimeChangeUndoRedoProxy, USequencerTimeChangeUndoRedoProxy::StaticClass, TEXT("USequencerTimeChangeUndoRedoProxy"), &Z_Registration_Info_UClass_USequencerTimeChangeUndoRedoProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USequencerTimeChangeUndoRedoProxy), 3125806669U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Private_SequencerTimeChangeUndoRedoProxy_h_1895449170(TEXT("/Script/Sequencer"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Private_SequencerTimeChangeUndoRedoProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Private_SequencerTimeChangeUndoRedoProxy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
