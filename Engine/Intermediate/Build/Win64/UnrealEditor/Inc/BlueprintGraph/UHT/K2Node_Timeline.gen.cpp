// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_Timeline.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_Timeline() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Timeline();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Timeline_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_Timeline::StaticRegisterNativesUK2Node_Timeline()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_Timeline);
	UClass* Z_Construct_UClass_UK2Node_Timeline_NoRegister()
	{
		return UK2Node_Timeline::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_Timeline_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimelineName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TimelineName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoPlay_MetaData[];
#endif
		static void NewProp_bAutoPlay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoPlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimelineGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TimelineGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLoop_MetaData[];
#endif
		static void NewProp_bLoop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReplicated_MetaData[];
#endif
		static void NewProp_bReplicated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplicated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreTimeDilation_MetaData[];
#endif
		static void NewProp_bIgnoreTimeDilation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreTimeDilation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_Timeline_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Timeline_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_Timeline.h" },
		{ "ModuleRelativePath", "Classes/K2Node_Timeline.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_TimelineName_MetaData[] = {
		{ "Comment", "/** The name of the timeline. Used to name ONLY the member variable (Component). To obtain the name of timeline template use UTimelineTemplate::TimelineVariableNameToTemplateName */" },
		{ "ModuleRelativePath", "Classes/K2Node_Timeline.h" },
		{ "ToolTip", "The name of the timeline. Used to name ONLY the member variable (Component). To obtain the name of timeline template use UTimelineTemplate::TimelineVariableNameToTemplateName" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_TimelineName = { "TimelineName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_Timeline, TimelineName), METADATA_PARAMS(Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_TimelineName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_TimelineName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_bAutoPlay_MetaData[] = {
		{ "Comment", "/** If the timeline is set to autoplay */" },
		{ "ModuleRelativePath", "Classes/K2Node_Timeline.h" },
		{ "ToolTip", "If the timeline is set to autoplay" },
	};
#endif
	void Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_bAutoPlay_SetBit(void* Obj)
	{
		((UK2Node_Timeline*)Obj)->bAutoPlay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_bAutoPlay = { "bAutoPlay", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UK2Node_Timeline), &Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_bAutoPlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_bAutoPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_bAutoPlay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_TimelineGuid_MetaData[] = {
		{ "Comment", "/** Unique ID for the template we use, required to indentify the timeline after a paste */" },
		{ "ModuleRelativePath", "Classes/K2Node_Timeline.h" },
		{ "ToolTip", "Unique ID for the template we use, required to indentify the timeline after a paste" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_TimelineGuid = { "TimelineGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_Timeline, TimelineGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_TimelineGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_TimelineGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_bLoop_MetaData[] = {
		{ "Comment", "/** If the timeline is set to loop */" },
		{ "ModuleRelativePath", "Classes/K2Node_Timeline.h" },
		{ "ToolTip", "If the timeline is set to loop" },
	};
#endif
	void Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_bLoop_SetBit(void* Obj)
	{
		((UK2Node_Timeline*)Obj)->bLoop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UK2Node_Timeline), &Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_bLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_bLoop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_bReplicated_MetaData[] = {
		{ "Comment", "/** If the timeline is set to replicate */" },
		{ "ModuleRelativePath", "Classes/K2Node_Timeline.h" },
		{ "ToolTip", "If the timeline is set to replicate" },
	};
#endif
	void Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_bReplicated_SetBit(void* Obj)
	{
		((UK2Node_Timeline*)Obj)->bReplicated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_bReplicated = { "bReplicated", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UK2Node_Timeline), &Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_bReplicated_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_bReplicated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_bReplicated_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_bIgnoreTimeDilation_MetaData[] = {
		{ "Comment", "/** If the timeline should ignore global time dilation */" },
		{ "ModuleRelativePath", "Classes/K2Node_Timeline.h" },
		{ "ToolTip", "If the timeline should ignore global time dilation" },
	};
#endif
	void Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_bIgnoreTimeDilation_SetBit(void* Obj)
	{
		((UK2Node_Timeline*)Obj)->bIgnoreTimeDilation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_bIgnoreTimeDilation = { "bIgnoreTimeDilation", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UK2Node_Timeline), &Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_bIgnoreTimeDilation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_bIgnoreTimeDilation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_bIgnoreTimeDilation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_Timeline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_TimelineName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_bAutoPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_TimelineGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_bLoop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_bReplicated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_bIgnoreTimeDilation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_Timeline_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_Timeline>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_Timeline_Statics::ClassParams = {
		&UK2Node_Timeline::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_Timeline_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_Timeline_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_Timeline_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_Timeline_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_Timeline()
	{
		if (!Z_Registration_Info_UClass_UK2Node_Timeline.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_Timeline.OuterSingleton, Z_Construct_UClass_UK2Node_Timeline_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_Timeline.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_Timeline>()
	{
		return UK2Node_Timeline::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_Timeline);
	UK2Node_Timeline::~UK2Node_Timeline() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Timeline_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Timeline_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_Timeline, UK2Node_Timeline::StaticClass, TEXT("UK2Node_Timeline"), &Z_Registration_Info_UClass_UK2Node_Timeline, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_Timeline), 1483999219U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Timeline_h_3060394147(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Timeline_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Timeline_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
