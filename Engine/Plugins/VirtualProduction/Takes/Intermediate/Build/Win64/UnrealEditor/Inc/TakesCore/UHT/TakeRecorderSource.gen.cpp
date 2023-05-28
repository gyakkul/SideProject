// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TakeRecorderSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTakeRecorderSource() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	TAKESCORE_API UClass* Z_Construct_UClass_UTakeRecorderSource();
	TAKESCORE_API UClass* Z_Construct_UClass_UTakeRecorderSource_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TakesCore();
// End Cross Module References
	void UTakeRecorderSource::StaticRegisterNativesUTakeRecorderSource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTakeRecorderSource);
	UClass* Z_Construct_UClass_UTakeRecorderSource_NoRegister()
	{
		return UTakeRecorderSource::StaticClass();
	}
	struct Z_Construct_UClass_UTakeRecorderSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TakeNumber_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TakeNumber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackTint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TrackTint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTakeRecorderSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TakesCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderSource_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base class for all sources that can be recorded with the Take Recorder. Custom recording sources can\n * be created by inheriting from this class and implementing the Start/Tick/Stop recording functions. \n * The level sequence that the recording is being placed into is provided so that the take can decide\n * to store the data directly in the resulting level sequence, but sources are not limited to generating\n * data in the specified Level Sequence. The source should be registered with the ITakeRecorderModule for\n * it to show up in the Take Recorder UI. If creating a recording setup via code you can just add instances\n * of your Source to the UTakeRecorderSources instance you're using to record and skip registering them with\n * the module.\n *\n * Sources should reset their state before recording as there is not a guarantee that the object will be newly\n * created for each recording.\n */" },
		{ "IncludePath", "TakeRecorderSource.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TakeRecorderSource.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base class for all sources that can be recorded with the Take Recorder. Custom recording sources can\nbe created by inheriting from this class and implementing the Start/Tick/Stop recording functions.\nThe level sequence that the recording is being placed into is provided so that the take can decide\nto store the data directly in the resulting level sequence, but sources are not limited to generating\ndata in the specified Level Sequence. The source should be registered with the ITakeRecorderModule for\nit to show up in the Take Recorder UI. If creating a recording setup via code you can just add instances\nof your Source to the UTakeRecorderSources instance you're using to record and skip registering them with\nthe module.\n\nSources should reset their state before recording as there is not a guarantee that the object will be newly\ncreated for each recording." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderSource_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** True if this source is cued for recording or not */" },
		{ "ModuleRelativePath", "Public/TakeRecorderSource.h" },
		{ "ToolTip", "True if this source is cued for recording or not" },
	};
#endif
	void Z_Construct_UClass_UTakeRecorderSource_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((UTakeRecorderSource*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTakeRecorderSource_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTakeRecorderSource), &Z_Construct_UClass_UTakeRecorderSource_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderSource_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderSource_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderSource_Statics::NewProp_TakeNumber_MetaData[] = {
		{ "Category", "Source" },
		{ "ModuleRelativePath", "Public/TakeRecorderSource.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTakeRecorderSource_Statics::NewProp_TakeNumber = { "TakeNumber", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTakeRecorderSource, TakeNumber), METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderSource_Statics::NewProp_TakeNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderSource_Statics::NewProp_TakeNumber_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderSource_Statics::NewProp_TrackTint_MetaData[] = {
		{ "Category", "Source" },
		{ "ModuleRelativePath", "Public/TakeRecorderSource.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTakeRecorderSource_Statics::NewProp_TrackTint = { "TrackTint", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTakeRecorderSource, TrackTint), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderSource_Statics::NewProp_TrackTint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderSource_Statics::NewProp_TrackTint_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTakeRecorderSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderSource_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderSource_Statics::NewProp_TakeNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderSource_Statics::NewProp_TrackTint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTakeRecorderSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTakeRecorderSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTakeRecorderSource_Statics::ClassParams = {
		&UTakeRecorderSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTakeRecorderSource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderSource_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTakeRecorderSource()
	{
		if (!Z_Registration_Info_UClass_UTakeRecorderSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTakeRecorderSource.OuterSingleton, Z_Construct_UClass_UTakeRecorderSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTakeRecorderSource.OuterSingleton;
	}
	template<> TAKESCORE_API UClass* StaticClass<UTakeRecorderSource>()
	{
		return UTakeRecorderSource::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTakeRecorderSource);
	UTakeRecorderSource::~UTakeRecorderSource() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSource_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTakeRecorderSource, UTakeRecorderSource::StaticClass, TEXT("UTakeRecorderSource"), &Z_Registration_Info_UClass_UTakeRecorderSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTakeRecorderSource), 2099296655U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSource_h_3905515282(TEXT("/Script/TakesCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSource_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
