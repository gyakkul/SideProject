// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_Event.h"
#include "../../Source/Runtime/Engine/Classes/Engine/MemberReference.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_Event() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_EditablePinBase();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Event();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Event_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_EventNodeInterface_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMemberReference();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_Event::StaticRegisterNativesUK2Node_Event()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_Event);
	UClass* Z_Construct_UClass_UK2Node_Event_NoRegister()
	{
		return UK2Node_Event::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_Event_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventSignatureName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EventSignatureName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventSignatureClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_EventSignatureClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventReference_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideFunction_MetaData[];
#endif
		static void NewProp_bOverrideFunction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideFunction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInternalEvent_MetaData[];
#endif
		static void NewProp_bInternalEvent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInternalEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomFunctionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CustomFunctionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionFlags_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_FunctionFlags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_Event_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_EditablePinBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Event_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_Event.h" },
		{ "ModuleRelativePath", "Classes/K2Node_Event.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Event_Statics::NewProp_EventSignatureName_MetaData[] = {
		{ "Comment", "/** Name of function signature that this event implements */" },
		{ "ModuleRelativePath", "Classes/K2Node_Event.h" },
		{ "ToolTip", "Name of function signature that this event implements" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UK2Node_Event_Statics::NewProp_EventSignatureName = { "EventSignatureName", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_Event, EventSignatureName_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UK2Node_Event_Statics::NewProp_EventSignatureName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_Event_Statics::NewProp_EventSignatureName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Event_Statics::NewProp_EventSignatureClass_MetaData[] = {
		{ "Comment", "/** Class that the function signature is from. */" },
		{ "ModuleRelativePath", "Classes/K2Node_Event.h" },
		{ "ToolTip", "Class that the function signature is from." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UK2Node_Event_Statics::NewProp_EventSignatureClass = { "EventSignatureClass", nullptr, (EPropertyFlags)0x0014000020000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_Event, EventSignatureClass_DEPRECATED), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK2Node_Event_Statics::NewProp_EventSignatureClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_Event_Statics::NewProp_EventSignatureClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Event_Statics::NewProp_EventReference_MetaData[] = {
		{ "Comment", "/** Reference for the function this event is linked to */" },
		{ "ModuleRelativePath", "Classes/K2Node_Event.h" },
		{ "ToolTip", "Reference for the function this event is linked to" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK2Node_Event_Statics::NewProp_EventReference = { "EventReference", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_Event, EventReference), Z_Construct_UScriptStruct_FMemberReference, METADATA_PARAMS(Z_Construct_UClass_UK2Node_Event_Statics::NewProp_EventReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_Event_Statics::NewProp_EventReference_MetaData)) }; // 2112165407
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Event_Statics::NewProp_bOverrideFunction_MetaData[] = {
		{ "Comment", "/** If true, we are actually overriding this function, not making a new event with a signature that matches */" },
		{ "ModuleRelativePath", "Classes/K2Node_Event.h" },
		{ "ToolTip", "If true, we are actually overriding this function, not making a new event with a signature that matches" },
	};
#endif
	void Z_Construct_UClass_UK2Node_Event_Statics::NewProp_bOverrideFunction_SetBit(void* Obj)
	{
		((UK2Node_Event*)Obj)->bOverrideFunction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_Event_Statics::NewProp_bOverrideFunction = { "bOverrideFunction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UK2Node_Event), &Z_Construct_UClass_UK2Node_Event_Statics::NewProp_bOverrideFunction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_Event_Statics::NewProp_bOverrideFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_Event_Statics::NewProp_bOverrideFunction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Event_Statics::NewProp_bInternalEvent_MetaData[] = {
		{ "Comment", "/** If true, this event is internal machinery, and should not be marked BlueprintCallable */" },
		{ "ModuleRelativePath", "Classes/K2Node_Event.h" },
		{ "ToolTip", "If true, this event is internal machinery, and should not be marked BlueprintCallable" },
	};
#endif
	void Z_Construct_UClass_UK2Node_Event_Statics::NewProp_bInternalEvent_SetBit(void* Obj)
	{
		((UK2Node_Event*)Obj)->bInternalEvent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_Event_Statics::NewProp_bInternalEvent = { "bInternalEvent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UK2Node_Event), &Z_Construct_UClass_UK2Node_Event_Statics::NewProp_bInternalEvent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_Event_Statics::NewProp_bInternalEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_Event_Statics::NewProp_bInternalEvent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Event_Statics::NewProp_CustomFunctionName_MetaData[] = {
		{ "Comment", "/** If this is not an override, allow user to specify a name for the function created by this entry point */" },
		{ "ModuleRelativePath", "Classes/K2Node_Event.h" },
		{ "ToolTip", "If this is not an override, allow user to specify a name for the function created by this entry point" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UK2Node_Event_Statics::NewProp_CustomFunctionName = { "CustomFunctionName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_Event, CustomFunctionName), METADATA_PARAMS(Z_Construct_UClass_UK2Node_Event_Statics::NewProp_CustomFunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_Event_Statics::NewProp_CustomFunctionName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Event_Statics::NewProp_FunctionFlags_MetaData[] = {
		{ "Comment", "/** Additional function flags to apply to this function */" },
		{ "ModuleRelativePath", "Classes/K2Node_Event.h" },
		{ "ToolTip", "Additional function flags to apply to this function" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UK2Node_Event_Statics::NewProp_FunctionFlags = { "FunctionFlags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_Event, FunctionFlags), METADATA_PARAMS(Z_Construct_UClass_UK2Node_Event_Statics::NewProp_FunctionFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_Event_Statics::NewProp_FunctionFlags_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_Event_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Event_Statics::NewProp_EventSignatureName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Event_Statics::NewProp_EventSignatureClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Event_Statics::NewProp_EventReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Event_Statics::NewProp_bOverrideFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Event_Statics::NewProp_bInternalEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Event_Statics::NewProp_CustomFunctionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Event_Statics::NewProp_FunctionFlags,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UK2Node_Event_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UK2Node_EventNodeInterface_NoRegister, (int32)VTABLE_OFFSET(UK2Node_Event, IK2Node_EventNodeInterface), false },  // 152586591
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_Event_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_Event>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_Event_Statics::ClassParams = {
		&UK2Node_Event::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_Event_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_Event_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_Event_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_Event_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_Event()
	{
		if (!Z_Registration_Info_UClass_UK2Node_Event.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_Event.OuterSingleton, Z_Construct_UClass_UK2Node_Event_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_Event.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_Event>()
	{
		return UK2Node_Event::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_Event);
	UK2Node_Event::~UK2Node_Event() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UK2Node_Event)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Event_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Event_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_Event, UK2Node_Event::StaticClass, TEXT("UK2Node_Event"), &Z_Registration_Info_UClass_UK2Node_Event, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_Event), 1868636130U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Event_h_1837253104(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Event_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Event_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
