// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Sequencer/TakeRecorderDMXLibrarySource.h"
#include "Library/DMXEntityReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTakeRecorderDMXLibrarySource() {}
// Cross Module References
	DMXEDITOR_API UClass* Z_Construct_UClass_UMovieSceneDMXLibraryTrackRecorder_NoRegister();
	DMXEDITOR_API UClass* Z_Construct_UClass_UTakeRecorderDMXLibrarySource();
	DMXEDITOR_API UClass* Z_Construct_UClass_UTakeRecorderDMXLibrarySource_NoRegister();
	DMXEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FAddAllPatchesButton();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXLibrary_NoRegister();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXEntityFixturePatchRef();
	TAKESCORE_API UClass* Z_Construct_UClass_UTakeRecorderSource();
	UPackage* Z_Construct_UPackage__Script_DMXEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AddAllPatchesButton;
class UScriptStruct* FAddAllPatchesButton::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AddAllPatchesButton.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AddAllPatchesButton.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAddAllPatchesButton, (UObject*)Z_Construct_UPackage__Script_DMXEditor(), TEXT("AddAllPatchesButton"));
	}
	return Z_Registration_Info_UScriptStruct_AddAllPatchesButton.OuterSingleton;
}
template<> DMXEDITOR_API UScriptStruct* StaticStruct<FAddAllPatchesButton>()
{
	return FAddAllPatchesButton::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAddAllPatchesButton_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAddAllPatchesButton_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Empty struct to have it customized in DetailsView to display a button on\n * the DMX Take Recorder properties. This is a required hack to customize the\n * properties in the TakeRecorder DetailsView because it has a customization\n * that overrides any class customization. So we need to tackle individual\n * property types instead.\n */" },
		{ "ModuleRelativePath", "Private/Sequencer/TakeRecorderDMXLibrarySource.h" },
		{ "ToolTip", "Empty struct to have it customized in DetailsView to display a button on\nthe DMX Take Recorder properties. This is a required hack to customize the\nproperties in the TakeRecorder DetailsView because it has a customization\nthat overrides any class customization. So we need to tackle individual\nproperty types instead." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAddAllPatchesButton_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAddAllPatchesButton>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAddAllPatchesButton_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DMXEditor,
		nullptr,
		&NewStructOps,
		"AddAllPatchesButton",
		sizeof(FAddAllPatchesButton),
		alignof(FAddAllPatchesButton),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAddAllPatchesButton_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddAllPatchesButton_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAddAllPatchesButton()
	{
		if (!Z_Registration_Info_UScriptStruct_AddAllPatchesButton.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AddAllPatchesButton.InnerSingleton, Z_Construct_UScriptStruct_FAddAllPatchesButton_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AddAllPatchesButton.InnerSingleton;
	}
	DEFINE_FUNCTION(UTakeRecorderDMXLibrarySource::execAddAllPatches)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddAllPatches();
		P_NATIVE_END;
	}
	void UTakeRecorderDMXLibrarySource::StaticRegisterNativesUTakeRecorderDMXLibrarySource()
	{
		UClass* Class = UTakeRecorderDMXLibrarySource::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAllPatches", &UTakeRecorderDMXLibrarySource::execAddAllPatches },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTakeRecorderDMXLibrarySource_AddAllPatches_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeRecorderDMXLibrarySource_AddAllPatches_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/** Adds all Patches from the active DMX Library as recording sources */" },
		{ "ModuleRelativePath", "Private/Sequencer/TakeRecorderDMXLibrarySource.h" },
		{ "ToolTip", "Adds all Patches from the active DMX Library as recording sources" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeRecorderDMXLibrarySource_AddAllPatches_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeRecorderDMXLibrarySource, nullptr, "AddAllPatches", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeRecorderDMXLibrarySource_AddAllPatches_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderDMXLibrarySource_AddAllPatches_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeRecorderDMXLibrarySource_AddAllPatches()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeRecorderDMXLibrarySource_AddAllPatches_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTakeRecorderDMXLibrarySource);
	UClass* Z_Construct_UClass_UTakeRecorderDMXLibrarySource_NoRegister()
	{
		return UTakeRecorderDMXLibrarySource::StaticClass();
	}
	struct Z_Construct_UClass_UTakeRecorderDMXLibrarySource_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DMXLibrary_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DMXLibrary;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddAllPatchesDummy_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AddAllPatchesDummy;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FixturePatchRefs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FixturePatchRefs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FixturePatchRefs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecordNormalizedValues_MetaData[];
#endif
		static void NewProp_bRecordNormalizedValues_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecordNormalizedValues;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackRecorder_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TrackRecorder;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTakeRecorderDMXLibrarySource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTakeRecorderSource,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTakeRecorderDMXLibrarySource_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTakeRecorderDMXLibrarySource_AddAllPatches, "AddAllPatches" }, // 1105886239
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderDMXLibrarySource_Statics::Class_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/** A recording source for DMX data related to a DMX Library */" },
		{ "IncludePath", "Sequencer/TakeRecorderDMXLibrarySource.h" },
		{ "ModuleRelativePath", "Private/Sequencer/TakeRecorderDMXLibrarySource.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "TakeRecorderDisplayName", "DMX Library" },
		{ "ToolTip", "A recording source for DMX data related to a DMX Library" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderDMXLibrarySource_Statics::NewProp_DMXLibrary_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** DMX Library to record Patches' Fixture Functions from */" },
		{ "DisplayName", "DMX Library" },
		{ "ModuleRelativePath", "Private/Sequencer/TakeRecorderDMXLibrarySource.h" },
		{ "ToolTip", "DMX Library to record Patches' Fixture Functions from" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTakeRecorderDMXLibrarySource_Statics::NewProp_DMXLibrary = { "DMXLibrary", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTakeRecorderDMXLibrarySource, DMXLibrary), Z_Construct_UClass_UDMXLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderDMXLibrarySource_Statics::NewProp_DMXLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderDMXLibrarySource_Statics::NewProp_DMXLibrary_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderDMXLibrarySource_Statics::NewProp_AddAllPatchesDummy_MetaData[] = {
		{ "Category", "My Category" },
		{ "Comment", "/**\n\x09 * Dummy property to be replaced with the \"Add all patches\" button.\n\x09 * @see FAddAllPatchesButton\n\x09 */" },
		{ "DisplayName", "" },
		{ "ModuleRelativePath", "Private/Sequencer/TakeRecorderDMXLibrarySource.h" },
		{ "ToolTip", "Dummy property to be replaced with the \"Add all patches\" button.\n@see FAddAllPatchesButton" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTakeRecorderDMXLibrarySource_Statics::NewProp_AddAllPatchesDummy = { "AddAllPatchesDummy", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTakeRecorderDMXLibrarySource, AddAllPatchesDummy), Z_Construct_UScriptStruct_FAddAllPatchesButton, METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderDMXLibrarySource_Statics::NewProp_AddAllPatchesDummy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderDMXLibrarySource_Statics::NewProp_AddAllPatchesDummy_MetaData)) }; // 1535757153
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTakeRecorderDMXLibrarySource_Statics::NewProp_FixturePatchRefs_Inner = { "FixturePatchRefs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDMXEntityFixturePatchRef, METADATA_PARAMS(nullptr, 0) }; // 1707509301
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderDMXLibrarySource_Statics::NewProp_FixturePatchRefs_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** The Fixture Patches to record from the selected Library */" },
		{ "DisplayName", "Fixture Patches" },
		{ "ModuleRelativePath", "Private/Sequencer/TakeRecorderDMXLibrarySource.h" },
		{ "ToolTip", "The Fixture Patches to record from the selected Library" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTakeRecorderDMXLibrarySource_Statics::NewProp_FixturePatchRefs = { "FixturePatchRefs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTakeRecorderDMXLibrarySource, FixturePatchRefs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderDMXLibrarySource_Statics::NewProp_FixturePatchRefs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderDMXLibrarySource_Statics::NewProp_FixturePatchRefs_MetaData)) }; // 1707509301
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderDMXLibrarySource_Statics::NewProp_bRecordNormalizedValues_MetaData[] = {
		{ "Category", "Movie Scene" },
		{ "Comment", "/** \n\x09 * If true, all values are recorded as normalized values (0.0 to 1.0).\n\x09 * \n\x09 * If false, values are recorded as absolute values, depending on the data type of a patch:\n\x09 * 0-255 for 8bit, 0-65'536 for 16bit, 0-16'777'215 for 24bit. 32bit is not fully supported in this mode.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Sequencer/TakeRecorderDMXLibrarySource.h" },
		{ "ToolTip", "If true, all values are recorded as normalized values (0.0 to 1.0).\n\nIf false, values are recorded as absolute values, depending on the data type of a patch:\n0-255 for 8bit, 0-65'536 for 16bit, 0-16'777'215 for 24bit. 32bit is not fully supported in this mode." },
	};
#endif
	void Z_Construct_UClass_UTakeRecorderDMXLibrarySource_Statics::NewProp_bRecordNormalizedValues_SetBit(void* Obj)
	{
		((UTakeRecorderDMXLibrarySource*)Obj)->bRecordNormalizedValues = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTakeRecorderDMXLibrarySource_Statics::NewProp_bRecordNormalizedValues = { "bRecordNormalizedValues", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTakeRecorderDMXLibrarySource), &Z_Construct_UClass_UTakeRecorderDMXLibrarySource_Statics::NewProp_bRecordNormalizedValues_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderDMXLibrarySource_Statics::NewProp_bRecordNormalizedValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderDMXLibrarySource_Statics::NewProp_bRecordNormalizedValues_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderDMXLibrarySource_Statics::NewProp_TrackRecorder_MetaData[] = {
		{ "Comment", "/** Track recorder used by this source */" },
		{ "ModuleRelativePath", "Private/Sequencer/TakeRecorderDMXLibrarySource.h" },
		{ "ToolTip", "Track recorder used by this source" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTakeRecorderDMXLibrarySource_Statics::NewProp_TrackRecorder = { "TrackRecorder", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTakeRecorderDMXLibrarySource, TrackRecorder), Z_Construct_UClass_UMovieSceneDMXLibraryTrackRecorder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderDMXLibrarySource_Statics::NewProp_TrackRecorder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderDMXLibrarySource_Statics::NewProp_TrackRecorder_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTakeRecorderDMXLibrarySource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderDMXLibrarySource_Statics::NewProp_DMXLibrary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderDMXLibrarySource_Statics::NewProp_AddAllPatchesDummy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderDMXLibrarySource_Statics::NewProp_FixturePatchRefs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderDMXLibrarySource_Statics::NewProp_FixturePatchRefs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderDMXLibrarySource_Statics::NewProp_bRecordNormalizedValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderDMXLibrarySource_Statics::NewProp_TrackRecorder,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTakeRecorderDMXLibrarySource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTakeRecorderDMXLibrarySource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTakeRecorderDMXLibrarySource_Statics::ClassParams = {
		&UTakeRecorderDMXLibrarySource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTakeRecorderDMXLibrarySource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderDMXLibrarySource_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderDMXLibrarySource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderDMXLibrarySource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTakeRecorderDMXLibrarySource()
	{
		if (!Z_Registration_Info_UClass_UTakeRecorderDMXLibrarySource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTakeRecorderDMXLibrarySource.OuterSingleton, Z_Construct_UClass_UTakeRecorderDMXLibrarySource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTakeRecorderDMXLibrarySource.OuterSingleton;
	}
	template<> DMXEDITOR_API UClass* StaticClass<UTakeRecorderDMXLibrarySource>()
	{
		return UTakeRecorderDMXLibrarySource::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTakeRecorderDMXLibrarySource);
	UTakeRecorderDMXLibrarySource::~UTakeRecorderDMXLibrarySource() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Private_Sequencer_TakeRecorderDMXLibrarySource_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Private_Sequencer_TakeRecorderDMXLibrarySource_h_Statics::ScriptStructInfo[] = {
		{ FAddAllPatchesButton::StaticStruct, Z_Construct_UScriptStruct_FAddAllPatchesButton_Statics::NewStructOps, TEXT("AddAllPatchesButton"), &Z_Registration_Info_UScriptStruct_AddAllPatchesButton, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAddAllPatchesButton), 1535757153U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Private_Sequencer_TakeRecorderDMXLibrarySource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTakeRecorderDMXLibrarySource, UTakeRecorderDMXLibrarySource::StaticClass, TEXT("UTakeRecorderDMXLibrarySource"), &Z_Registration_Info_UClass_UTakeRecorderDMXLibrarySource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTakeRecorderDMXLibrarySource), 3112018653U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Private_Sequencer_TakeRecorderDMXLibrarySource_h_2750498175(TEXT("/Script/DMXEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Private_Sequencer_TakeRecorderDMXLibrarySource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Private_Sequencer_TakeRecorderDMXLibrarySource_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Private_Sequencer_TakeRecorderDMXLibrarySource_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Private_Sequencer_TakeRecorderDMXLibrarySource_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
