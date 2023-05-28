// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_ActorBoundEvent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_ActorBoundEvent() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_ActorBoundEvent();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_ActorBoundEvent_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Event();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_ActorBoundEvent::StaticRegisterNativesUK2Node_ActorBoundEvent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_ActorBoundEvent);
	UClass* Z_Construct_UClass_UK2Node_ActorBoundEvent_NoRegister()
	{
		return UK2Node_ActorBoundEvent::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_ActorBoundEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DelegatePropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DelegatePropertyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DelegateOwnerClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_DelegateOwnerClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventOwner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EventOwner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_ActorBoundEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_Event,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_ActorBoundEvent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_ActorBoundEvent.h" },
		{ "ModuleRelativePath", "Classes/K2Node_ActorBoundEvent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_ActorBoundEvent_Statics::NewProp_DelegatePropertyName_MetaData[] = {
		{ "Comment", "/** Delegate property name that this event is associated with */" },
		{ "ModuleRelativePath", "Classes/K2Node_ActorBoundEvent.h" },
		{ "ToolTip", "Delegate property name that this event is associated with" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UK2Node_ActorBoundEvent_Statics::NewProp_DelegatePropertyName = { "DelegatePropertyName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_ActorBoundEvent, DelegatePropertyName), METADATA_PARAMS(Z_Construct_UClass_UK2Node_ActorBoundEvent_Statics::NewProp_DelegatePropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_ActorBoundEvent_Statics::NewProp_DelegatePropertyName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_ActorBoundEvent_Statics::NewProp_DelegateOwnerClass_MetaData[] = {
		{ "Comment", "/** Delegate property's owner class that this event is associated with */" },
		{ "ModuleRelativePath", "Classes/K2Node_ActorBoundEvent.h" },
		{ "ToolTip", "Delegate property's owner class that this event is associated with" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UClass_UK2Node_ActorBoundEvent_Statics::NewProp_DelegateOwnerClass = { "DelegateOwnerClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_ActorBoundEvent, DelegateOwnerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK2Node_ActorBoundEvent_Statics::NewProp_DelegateOwnerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_ActorBoundEvent_Statics::NewProp_DelegateOwnerClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_ActorBoundEvent_Statics::NewProp_EventOwner_MetaData[] = {
		{ "Comment", "/** The event that this event is bound to */" },
		{ "ModuleRelativePath", "Classes/K2Node_ActorBoundEvent.h" },
		{ "ToolTip", "The event that this event is bound to" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UK2Node_ActorBoundEvent_Statics::NewProp_EventOwner = { "EventOwner", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_ActorBoundEvent, EventOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK2Node_ActorBoundEvent_Statics::NewProp_EventOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_ActorBoundEvent_Statics::NewProp_EventOwner_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_ActorBoundEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_ActorBoundEvent_Statics::NewProp_DelegatePropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_ActorBoundEvent_Statics::NewProp_DelegateOwnerClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_ActorBoundEvent_Statics::NewProp_EventOwner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_ActorBoundEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_ActorBoundEvent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_ActorBoundEvent_Statics::ClassParams = {
		&UK2Node_ActorBoundEvent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_ActorBoundEvent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_ActorBoundEvent_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_ActorBoundEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_ActorBoundEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_ActorBoundEvent()
	{
		if (!Z_Registration_Info_UClass_UK2Node_ActorBoundEvent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_ActorBoundEvent.OuterSingleton, Z_Construct_UClass_UK2Node_ActorBoundEvent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_ActorBoundEvent.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_ActorBoundEvent>()
	{
		return UK2Node_ActorBoundEvent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_ActorBoundEvent);
	UK2Node_ActorBoundEvent::~UK2Node_ActorBoundEvent() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UK2Node_ActorBoundEvent)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_ActorBoundEvent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_ActorBoundEvent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_ActorBoundEvent, UK2Node_ActorBoundEvent::StaticClass, TEXT("UK2Node_ActorBoundEvent"), &Z_Registration_Info_UClass_UK2Node_ActorBoundEvent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_ActorBoundEvent), 2185569721U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_ActorBoundEvent_h_3578312721(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_ActorBoundEvent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_ActorBoundEvent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
