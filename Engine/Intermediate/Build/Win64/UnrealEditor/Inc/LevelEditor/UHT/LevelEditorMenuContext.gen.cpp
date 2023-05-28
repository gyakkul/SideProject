// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LevelEditorMenuContext.h"
#include "Elements/Framework/TypedElementHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelEditorMenuContext() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	LEVELEDITOR_API UClass* Z_Construct_UClass_ULevelEditorContextMenuContext();
	LEVELEDITOR_API UClass* Z_Construct_UClass_ULevelEditorContextMenuContext_NoRegister();
	LEVELEDITOR_API UClass* Z_Construct_UClass_ULevelEditorMenuContext();
	LEVELEDITOR_API UClass* Z_Construct_UClass_ULevelEditorMenuContext_NoRegister();
	LEVELEDITOR_API UClass* Z_Construct_UClass_ULevelViewportToolBarContext();
	LEVELEDITOR_API UClass* Z_Construct_UClass_ULevelViewportToolBarContext_NoRegister();
	LEVELEDITOR_API UClass* Z_Construct_UClass_UQuickActionMenuContext();
	LEVELEDITOR_API UClass* Z_Construct_UClass_UQuickActionMenuContext_NoRegister();
	LEVELEDITOR_API UEnum* Z_Construct_UEnum_LevelEditor_ELevelEditorMenuContext();
	TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FScriptTypedElementHandle();
	TYPEDELEMENTRUNTIME_API UClass* Z_Construct_UClass_UTypedElementSelectionSet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LevelEditor();
// End Cross Module References
	void ULevelEditorMenuContext::StaticRegisterNativesULevelEditorMenuContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelEditorMenuContext);
	UClass* Z_Construct_UClass_ULevelEditorMenuContext_NoRegister()
	{
		return ULevelEditorMenuContext::StaticClass();
	}
	struct Z_Construct_UClass_ULevelEditorMenuContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelEditorMenuContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorMenuContext_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LevelEditorMenuContext.h" },
		{ "ModuleRelativePath", "Public/LevelEditorMenuContext.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelEditorMenuContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelEditorMenuContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelEditorMenuContext_Statics::ClassParams = {
		&ULevelEditorMenuContext::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelEditorMenuContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorMenuContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelEditorMenuContext()
	{
		if (!Z_Registration_Info_UClass_ULevelEditorMenuContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelEditorMenuContext.OuterSingleton, Z_Construct_UClass_ULevelEditorMenuContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelEditorMenuContext.OuterSingleton;
	}
	template<> LEVELEDITOR_API UClass* StaticClass<ULevelEditorMenuContext>()
	{
		return ULevelEditorMenuContext::StaticClass();
	}
	ULevelEditorMenuContext::ULevelEditorMenuContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelEditorMenuContext);
	ULevelEditorMenuContext::~ULevelEditorMenuContext() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELevelEditorMenuContext;
	static UEnum* ELevelEditorMenuContext_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELevelEditorMenuContext.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELevelEditorMenuContext.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LevelEditor_ELevelEditorMenuContext, (UObject*)Z_Construct_UPackage__Script_LevelEditor(), TEXT("ELevelEditorMenuContext"));
		}
		return Z_Registration_Info_UEnum_ELevelEditorMenuContext.OuterSingleton;
	}
	template<> LEVELEDITOR_API UEnum* StaticEnum<ELevelEditorMenuContext>()
	{
		return ELevelEditorMenuContext_StaticEnum();
	}
	struct Z_Construct_UEnum_LevelEditor_ELevelEditorMenuContext_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LevelEditor_ELevelEditorMenuContext_Statics::Enumerators[] = {
		{ "ELevelEditorMenuContext::Viewport", (int64)ELevelEditorMenuContext::Viewport },
		{ "ELevelEditorMenuContext::SceneOutliner", (int64)ELevelEditorMenuContext::SceneOutliner },
		{ "ELevelEditorMenuContext::MainMenu", (int64)ELevelEditorMenuContext::MainMenu },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LevelEditor_ELevelEditorMenuContext_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Enum to describe what a level editor context menu should be built for */" },
		{ "MainMenu.Comment", "/** This is the replica of the context menu that appears in the main menu bar (lists all entries) */" },
		{ "MainMenu.Name", "ELevelEditorMenuContext::MainMenu" },
		{ "MainMenu.ToolTip", "This is the replica of the context menu that appears in the main menu bar (lists all entries)" },
		{ "ModuleRelativePath", "Public/LevelEditorMenuContext.h" },
		{ "SceneOutliner.Comment", "/** This context menu is applicable to the Scene Outliner (disables click-position-based menu items) */" },
		{ "SceneOutliner.Name", "ELevelEditorMenuContext::SceneOutliner" },
		{ "SceneOutliner.ToolTip", "This context menu is applicable to the Scene Outliner (disables click-position-based menu items)" },
		{ "ToolTip", "Enum to describe what a level editor context menu should be built for" },
		{ "Viewport.Comment", "/** This context menu is applicable to a viewport (limited subset of entries) */" },
		{ "Viewport.Name", "ELevelEditorMenuContext::Viewport" },
		{ "Viewport.ToolTip", "This context menu is applicable to a viewport (limited subset of entries)" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LevelEditor_ELevelEditorMenuContext_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LevelEditor,
		nullptr,
		"ELevelEditorMenuContext",
		"ELevelEditorMenuContext",
		Z_Construct_UEnum_LevelEditor_ELevelEditorMenuContext_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LevelEditor_ELevelEditorMenuContext_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LevelEditor_ELevelEditorMenuContext_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LevelEditor_ELevelEditorMenuContext_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LevelEditor_ELevelEditorMenuContext()
	{
		if (!Z_Registration_Info_UEnum_ELevelEditorMenuContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELevelEditorMenuContext.InnerSingleton, Z_Construct_UEnum_LevelEditor_ELevelEditorMenuContext_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELevelEditorMenuContext.InnerSingleton;
	}
	DEFINE_FUNCTION(ULevelEditorContextMenuContext::execGetScriptHitProxyElement)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FScriptTypedElementHandle*)Z_Param__Result=P_THIS->GetScriptHitProxyElement();
		P_NATIVE_END;
	}
	void ULevelEditorContextMenuContext::StaticRegisterNativesULevelEditorContextMenuContext()
	{
		UClass* Class = ULevelEditorContextMenuContext::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetScriptHitProxyElement", &ULevelEditorContextMenuContext::execGetScriptHitProxyElement },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULevelEditorContextMenuContext_GetScriptHitProxyElement_Statics
	{
		struct LevelEditorContextMenuContext_eventGetScriptHitProxyElement_Parms
		{
			FScriptTypedElementHandle ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelEditorContextMenuContext_GetScriptHitProxyElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelEditorContextMenuContext_eventGetScriptHitProxyElement_Parms, ReturnValue), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(nullptr, 0) }; // 915069018
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelEditorContextMenuContext_GetScriptHitProxyElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorContextMenuContext_GetScriptHitProxyElement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditorContextMenuContext_GetScriptHitProxyElement_Statics::Function_MetaDataParams[] = {
		{ "Category", "LevelEditor | Menu" },
		{ "DisplayName", "Get Hit Proxy Element" },
		{ "ModuleRelativePath", "Public/LevelEditorMenuContext.h" },
		{ "ScriptName", "GetHitProxyElement" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditorContextMenuContext_GetScriptHitProxyElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditorContextMenuContext, nullptr, "GetScriptHitProxyElement", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelEditorContextMenuContext_GetScriptHitProxyElement_Statics::LevelEditorContextMenuContext_eventGetScriptHitProxyElement_Parms), Z_Construct_UFunction_ULevelEditorContextMenuContext_GetScriptHitProxyElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorContextMenuContext_GetScriptHitProxyElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditorContextMenuContext_GetScriptHitProxyElement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorContextMenuContext_GetScriptHitProxyElement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditorContextMenuContext_GetScriptHitProxyElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelEditorContextMenuContext_GetScriptHitProxyElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelEditorContextMenuContext);
	UClass* Z_Construct_UClass_ULevelEditorContextMenuContext_NoRegister()
	{
		return ULevelEditorContextMenuContext::StaticClass();
	}
	struct Z_Construct_UClass_ULevelEditorContextMenuContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ContextType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ContextType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSelection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CurrentSelection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CursorWorldLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CursorWorldLocation;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SelectedComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedComponents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitProxyActor_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_HitProxyActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelEditorContextMenuContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULevelEditorContextMenuContext_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULevelEditorContextMenuContext_GetScriptHitProxyElement, "GetScriptHitProxyElement" }, // 3810134473
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorContextMenuContext_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LevelEditorMenuContext.h" },
		{ "ModuleRelativePath", "Public/LevelEditorMenuContext.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULevelEditorContextMenuContext_Statics::NewProp_ContextType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorContextMenuContext_Statics::NewProp_ContextType_MetaData[] = {
		{ "Category", "LevelEditor|Menu" },
		{ "ModuleRelativePath", "Public/LevelEditorMenuContext.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULevelEditorContextMenuContext_Statics::NewProp_ContextType = { "ContextType", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorContextMenuContext, ContextType), Z_Construct_UEnum_LevelEditor_ELevelEditorMenuContext, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorContextMenuContext_Statics::NewProp_ContextType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorContextMenuContext_Statics::NewProp_ContextType_MetaData)) }; // 3335518521
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorContextMenuContext_Statics::NewProp_CurrentSelection_MetaData[] = {
		{ "Category", "LevelEditor|Menu" },
		{ "ModuleRelativePath", "Public/LevelEditorMenuContext.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULevelEditorContextMenuContext_Statics::NewProp_CurrentSelection = { "CurrentSelection", nullptr, (EPropertyFlags)0x0014000000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorContextMenuContext, CurrentSelection), Z_Construct_UClass_UTypedElementSelectionSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorContextMenuContext_Statics::NewProp_CurrentSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorContextMenuContext_Statics::NewProp_CurrentSelection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorContextMenuContext_Statics::NewProp_CursorWorldLocation_MetaData[] = {
		{ "Category", "LevelEditor|Menu" },
		{ "ModuleRelativePath", "Public/LevelEditorMenuContext.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelEditorContextMenuContext_Statics::NewProp_CursorWorldLocation = { "CursorWorldLocation", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorContextMenuContext, CursorWorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorContextMenuContext_Statics::NewProp_CursorWorldLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorContextMenuContext_Statics::NewProp_CursorWorldLocation_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULevelEditorContextMenuContext_Statics::NewProp_SelectedComponents_Inner = { "SelectedComponents", nullptr, (EPropertyFlags)0x00040000000a0008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorContextMenuContext_Statics::NewProp_SelectedComponents_MetaData[] = {
		{ "Category", "LevelEditor|Menu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelEditorMenuContext.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelEditorContextMenuContext_Statics::NewProp_SelectedComponents = { "SelectedComponents", nullptr, (EPropertyFlags)0x001400800002001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorContextMenuContext, SelectedComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorContextMenuContext_Statics::NewProp_SelectedComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorContextMenuContext_Statics::NewProp_SelectedComponents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorContextMenuContext_Statics::NewProp_HitProxyActor_MetaData[] = {
		{ "Category", "LevelEditor|Menu" },
		{ "Comment", "/** If the ContextType is Viewport this property can be set to the HitProxy actor that triggered the ContextMenu. */" },
		{ "ModuleRelativePath", "Public/LevelEditorMenuContext.h" },
		{ "ToolTip", "If the ContextType is Viewport this property can be set to the HitProxy actor that triggered the ContextMenu." },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_ULevelEditorContextMenuContext_Statics::NewProp_HitProxyActor = { "HitProxyActor", nullptr, (EPropertyFlags)0x0014000000020015, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorContextMenuContext, HitProxyActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorContextMenuContext_Statics::NewProp_HitProxyActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorContextMenuContext_Statics::NewProp_HitProxyActor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelEditorContextMenuContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorContextMenuContext_Statics::NewProp_ContextType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorContextMenuContext_Statics::NewProp_ContextType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorContextMenuContext_Statics::NewProp_CurrentSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorContextMenuContext_Statics::NewProp_CursorWorldLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorContextMenuContext_Statics::NewProp_SelectedComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorContextMenuContext_Statics::NewProp_SelectedComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorContextMenuContext_Statics::NewProp_HitProxyActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelEditorContextMenuContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelEditorContextMenuContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelEditorContextMenuContext_Statics::ClassParams = {
		&ULevelEditorContextMenuContext::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULevelEditorContextMenuContext_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorContextMenuContext_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelEditorContextMenuContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorContextMenuContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelEditorContextMenuContext()
	{
		if (!Z_Registration_Info_UClass_ULevelEditorContextMenuContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelEditorContextMenuContext.OuterSingleton, Z_Construct_UClass_ULevelEditorContextMenuContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelEditorContextMenuContext.OuterSingleton;
	}
	template<> LEVELEDITOR_API UClass* StaticClass<ULevelEditorContextMenuContext>()
	{
		return ULevelEditorContextMenuContext::StaticClass();
	}
	ULevelEditorContextMenuContext::ULevelEditorContextMenuContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelEditorContextMenuContext);
	ULevelEditorContextMenuContext::~ULevelEditorContextMenuContext() {}
	void ULevelViewportToolBarContext::StaticRegisterNativesULevelViewportToolBarContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelViewportToolBarContext);
	UClass* Z_Construct_UClass_ULevelViewportToolBarContext_NoRegister()
	{
		return ULevelViewportToolBarContext::StaticClass();
	}
	struct Z_Construct_UClass_ULevelViewportToolBarContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelViewportToolBarContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelViewportToolBarContext_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LevelEditorMenuContext.h" },
		{ "ModuleRelativePath", "Public/LevelEditorMenuContext.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelViewportToolBarContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelViewportToolBarContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelViewportToolBarContext_Statics::ClassParams = {
		&ULevelViewportToolBarContext::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelViewportToolBarContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelViewportToolBarContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelViewportToolBarContext()
	{
		if (!Z_Registration_Info_UClass_ULevelViewportToolBarContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelViewportToolBarContext.OuterSingleton, Z_Construct_UClass_ULevelViewportToolBarContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelViewportToolBarContext.OuterSingleton;
	}
	template<> LEVELEDITOR_API UClass* StaticClass<ULevelViewportToolBarContext>()
	{
		return ULevelViewportToolBarContext::StaticClass();
	}
	ULevelViewportToolBarContext::ULevelViewportToolBarContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelViewportToolBarContext);
	ULevelViewportToolBarContext::~ULevelViewportToolBarContext() {}
	void UQuickActionMenuContext::StaticRegisterNativesUQuickActionMenuContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuickActionMenuContext);
	UClass* Z_Construct_UClass_UQuickActionMenuContext_NoRegister()
	{
		return UQuickActionMenuContext::StaticClass();
	}
	struct Z_Construct_UClass_UQuickActionMenuContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSelection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CurrentSelection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuickActionMenuContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuickActionMenuContext_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LevelEditorMenuContext.h" },
		{ "ModuleRelativePath", "Public/LevelEditorMenuContext.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuickActionMenuContext_Statics::NewProp_CurrentSelection_MetaData[] = {
		{ "Category", "LevelEditor|Menu" },
		{ "ModuleRelativePath", "Public/LevelEditorMenuContext.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UQuickActionMenuContext_Statics::NewProp_CurrentSelection = { "CurrentSelection", nullptr, (EPropertyFlags)0x0014000000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuickActionMenuContext, CurrentSelection), Z_Construct_UClass_UTypedElementSelectionSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuickActionMenuContext_Statics::NewProp_CurrentSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuickActionMenuContext_Statics::NewProp_CurrentSelection_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuickActionMenuContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuickActionMenuContext_Statics::NewProp_CurrentSelection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuickActionMenuContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuickActionMenuContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuickActionMenuContext_Statics::ClassParams = {
		&UQuickActionMenuContext::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UQuickActionMenuContext_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuickActionMenuContext_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQuickActionMenuContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuickActionMenuContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuickActionMenuContext()
	{
		if (!Z_Registration_Info_UClass_UQuickActionMenuContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuickActionMenuContext.OuterSingleton, Z_Construct_UClass_UQuickActionMenuContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQuickActionMenuContext.OuterSingleton;
	}
	template<> LEVELEDITOR_API UClass* StaticClass<UQuickActionMenuContext>()
	{
		return UQuickActionMenuContext::StaticClass();
	}
	UQuickActionMenuContext::UQuickActionMenuContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuickActionMenuContext);
	UQuickActionMenuContext::~UQuickActionMenuContext() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_LevelEditor_Public_LevelEditorMenuContext_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_LevelEditor_Public_LevelEditorMenuContext_h_Statics::EnumInfo[] = {
		{ ELevelEditorMenuContext_StaticEnum, TEXT("ELevelEditorMenuContext"), &Z_Registration_Info_UEnum_ELevelEditorMenuContext, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3335518521U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_LevelEditor_Public_LevelEditorMenuContext_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelEditorMenuContext, ULevelEditorMenuContext::StaticClass, TEXT("ULevelEditorMenuContext"), &Z_Registration_Info_UClass_ULevelEditorMenuContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelEditorMenuContext), 3373214254U) },
		{ Z_Construct_UClass_ULevelEditorContextMenuContext, ULevelEditorContextMenuContext::StaticClass, TEXT("ULevelEditorContextMenuContext"), &Z_Registration_Info_UClass_ULevelEditorContextMenuContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelEditorContextMenuContext), 2696516766U) },
		{ Z_Construct_UClass_ULevelViewportToolBarContext, ULevelViewportToolBarContext::StaticClass, TEXT("ULevelViewportToolBarContext"), &Z_Registration_Info_UClass_ULevelViewportToolBarContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelViewportToolBarContext), 3071600192U) },
		{ Z_Construct_UClass_UQuickActionMenuContext, UQuickActionMenuContext::StaticClass, TEXT("UQuickActionMenuContext"), &Z_Registration_Info_UClass_UQuickActionMenuContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuickActionMenuContext), 2082259301U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_LevelEditor_Public_LevelEditorMenuContext_h_2868666859(TEXT("/Script/LevelEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_LevelEditor_Public_LevelEditorMenuContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_LevelEditor_Public_LevelEditorMenuContext_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_LevelEditor_Public_LevelEditorMenuContext_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_LevelEditor_Public_LevelEditorMenuContext_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
