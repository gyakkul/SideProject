// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_WidgetAnimationEvent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_WidgetAnimationEvent() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Event();
	UMG_API UEnum* Z_Construct_UEnum_UMG_EWidgetAnimationEvent();
	UMGEDITOR_API UClass* Z_Construct_UClass_UK2Node_WidgetAnimationEvent();
	UMGEDITOR_API UClass* Z_Construct_UClass_UK2Node_WidgetAnimationEvent_NoRegister();
	UMGEDITOR_API UClass* Z_Construct_UClass_UWidgetBlueprint_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UMGEditor();
// End Cross Module References
	void UK2Node_WidgetAnimationEvent::StaticRegisterNativesUK2Node_WidgetAnimationEvent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_WidgetAnimationEvent);
	UClass* Z_Construct_UClass_UK2Node_WidgetAnimationEvent_NoRegister()
	{
		return UK2Node_WidgetAnimationEvent::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Action_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Action;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationPropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AnimationPropertyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserTag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_UserTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceWidgetBlueprint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceWidgetBlueprint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_Event,
		(UObject* (*)())Z_Construct_UPackage__Script_UMGEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_WidgetAnimationEvent.h" },
		{ "ModuleRelativePath", "Classes/K2Node_WidgetAnimationEvent.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::NewProp_Action_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::NewProp_Action_MetaData[] = {
		{ "Comment", "/** The action to bind to. */" },
		{ "ModuleRelativePath", "Classes/K2Node_WidgetAnimationEvent.h" },
		{ "ToolTip", "The action to bind to." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_WidgetAnimationEvent, Action), Z_Construct_UEnum_UMG_EWidgetAnimationEvent, METADATA_PARAMS(Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::NewProp_Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::NewProp_Action_MetaData)) }; // 1444873952
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::NewProp_AnimationPropertyName_MetaData[] = {
		{ "Comment", "/** Name of property in Blueprint class that pointer to component we want to bind to */" },
		{ "ModuleRelativePath", "Classes/K2Node_WidgetAnimationEvent.h" },
		{ "ToolTip", "Name of property in Blueprint class that pointer to component we want to bind to" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::NewProp_AnimationPropertyName = { "AnimationPropertyName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_WidgetAnimationEvent, AnimationPropertyName), METADATA_PARAMS(Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::NewProp_AnimationPropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::NewProp_AnimationPropertyName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::NewProp_UserTag_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Binds this to a specific user action. */" },
		{ "ModuleRelativePath", "Classes/K2Node_WidgetAnimationEvent.h" },
		{ "ToolTip", "Binds this to a specific user action." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::NewProp_UserTag = { "UserTag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_WidgetAnimationEvent, UserTag), METADATA_PARAMS(Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::NewProp_UserTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::NewProp_UserTag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::NewProp_SourceWidgetBlueprint_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_WidgetAnimationEvent.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::NewProp_SourceWidgetBlueprint = { "SourceWidgetBlueprint", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_WidgetAnimationEvent, SourceWidgetBlueprint), Z_Construct_UClass_UWidgetBlueprint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::NewProp_SourceWidgetBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::NewProp_SourceWidgetBlueprint_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::NewProp_Action_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::NewProp_Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::NewProp_AnimationPropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::NewProp_UserTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::NewProp_SourceWidgetBlueprint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_WidgetAnimationEvent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::ClassParams = {
		&UK2Node_WidgetAnimationEvent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_WidgetAnimationEvent()
	{
		if (!Z_Registration_Info_UClass_UK2Node_WidgetAnimationEvent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_WidgetAnimationEvent.OuterSingleton, Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_WidgetAnimationEvent.OuterSingleton;
	}
	template<> UMGEDITOR_API UClass* StaticClass<UK2Node_WidgetAnimationEvent>()
	{
		return UK2Node_WidgetAnimationEvent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_WidgetAnimationEvent);
	UK2Node_WidgetAnimationEvent::~UK2Node_WidgetAnimationEvent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Classes_K2Node_WidgetAnimationEvent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Classes_K2Node_WidgetAnimationEvent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_WidgetAnimationEvent, UK2Node_WidgetAnimationEvent::StaticClass, TEXT("UK2Node_WidgetAnimationEvent"), &Z_Registration_Info_UClass_UK2Node_WidgetAnimationEvent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_WidgetAnimationEvent), 380330576U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Classes_K2Node_WidgetAnimationEvent_h_577423693(TEXT("/Script/UMGEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Classes_K2Node_WidgetAnimationEvent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Classes_K2Node_WidgetAnimationEvent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
