// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_CustomEvent.h"
#include "K2Node_EditablePinBase.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_CustomEvent() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_CustomEvent();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_CustomEvent_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Event();
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_CustomEvent::StaticRegisterNativesUK2Node_CustomEvent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_CustomEvent);
	UClass* Z_Construct_UClass_UK2Node_CustomEvent_NoRegister()
	{
		return UK2Node_CustomEvent::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_CustomEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeprecationMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeprecationMessage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsDeprecated_MetaData[];
#endif
		static void NewProp_bIsDeprecated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDeprecated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCallInEditor_MetaData[];
#endif
		static void NewProp_bCallInEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCallInEditor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MetaData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_CustomEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_Event,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_CustomEvent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_CustomEvent.h" },
		{ "ModuleRelativePath", "Classes/K2Node_CustomEvent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_CustomEvent_Statics::NewProp_DeprecationMessage_MetaData[] = {
		{ "Comment", "/** Optional message to display when the event is deprecated */" },
		{ "ModuleRelativePath", "Classes/K2Node_CustomEvent.h" },
		{ "ToolTip", "Optional message to display when the event is deprecated" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UK2Node_CustomEvent_Statics::NewProp_DeprecationMessage = { "DeprecationMessage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_CustomEvent, DeprecationMessage), METADATA_PARAMS(Z_Construct_UClass_UK2Node_CustomEvent_Statics::NewProp_DeprecationMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_CustomEvent_Statics::NewProp_DeprecationMessage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_CustomEvent_Statics::NewProp_bIsDeprecated_MetaData[] = {
		{ "Comment", "/** Specifies that usage of this event has been deprecated */" },
		{ "ModuleRelativePath", "Classes/K2Node_CustomEvent.h" },
		{ "ToolTip", "Specifies that usage of this event has been deprecated" },
	};
#endif
	void Z_Construct_UClass_UK2Node_CustomEvent_Statics::NewProp_bIsDeprecated_SetBit(void* Obj)
	{
		((UK2Node_CustomEvent*)Obj)->bIsDeprecated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_CustomEvent_Statics::NewProp_bIsDeprecated = { "bIsDeprecated", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UK2Node_CustomEvent), &Z_Construct_UClass_UK2Node_CustomEvent_Statics::NewProp_bIsDeprecated_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_CustomEvent_Statics::NewProp_bIsDeprecated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_CustomEvent_Statics::NewProp_bIsDeprecated_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_CustomEvent_Statics::NewProp_bCallInEditor_MetaData[] = {
		{ "Comment", "/** Specifies that the event can be triggered in Editor */" },
		{ "ModuleRelativePath", "Classes/K2Node_CustomEvent.h" },
		{ "ToolTip", "Specifies that the event can be triggered in Editor" },
	};
#endif
	void Z_Construct_UClass_UK2Node_CustomEvent_Statics::NewProp_bCallInEditor_SetBit(void* Obj)
	{
		((UK2Node_CustomEvent*)Obj)->bCallInEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_CustomEvent_Statics::NewProp_bCallInEditor = { "bCallInEditor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UK2Node_CustomEvent), &Z_Construct_UClass_UK2Node_CustomEvent_Statics::NewProp_bCallInEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_CustomEvent_Statics::NewProp_bCallInEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_CustomEvent_Statics::NewProp_bCallInEditor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_CustomEvent_Statics::NewProp_MetaData_MetaData[] = {
		{ "Comment", "/** Custom event metadata that can be used for adding custom keywords */" },
		{ "ModuleRelativePath", "Classes/K2Node_CustomEvent.h" },
		{ "ToolTip", "Custom event metadata that can be used for adding custom keywords" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK2Node_CustomEvent_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_CustomEvent, MetaData), Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata, METADATA_PARAMS(Z_Construct_UClass_UK2Node_CustomEvent_Statics::NewProp_MetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_CustomEvent_Statics::NewProp_MetaData_MetaData)) }; // 3460500281
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_CustomEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_CustomEvent_Statics::NewProp_DeprecationMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_CustomEvent_Statics::NewProp_bIsDeprecated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_CustomEvent_Statics::NewProp_bCallInEditor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_CustomEvent_Statics::NewProp_MetaData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_CustomEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_CustomEvent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_CustomEvent_Statics::ClassParams = {
		&UK2Node_CustomEvent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_CustomEvent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_CustomEvent_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_CustomEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_CustomEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_CustomEvent()
	{
		if (!Z_Registration_Info_UClass_UK2Node_CustomEvent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_CustomEvent.OuterSingleton, Z_Construct_UClass_UK2Node_CustomEvent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_CustomEvent.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_CustomEvent>()
	{
		return UK2Node_CustomEvent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_CustomEvent);
	UK2Node_CustomEvent::~UK2Node_CustomEvent() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UK2Node_CustomEvent)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_CustomEvent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_CustomEvent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_CustomEvent, UK2Node_CustomEvent::StaticClass, TEXT("UK2Node_CustomEvent"), &Z_Registration_Info_UClass_UK2Node_CustomEvent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_CustomEvent), 156435708U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_CustomEvent_h_1224628215(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_CustomEvent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_CustomEvent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
