// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewModels/Stack/NiagaraStackEventScriptItemGroup.h"
#include "../Classes/NiagaraEmitter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraStackEventScriptItemGroup() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEventScriptProperties();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackEventHandlerPropertiesItem();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackEventHandlerPropertiesItem_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackEventScriptItemGroup();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackEventScriptItemGroup_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackEventWrapper();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackEventWrapper_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackItem();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackObject_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackScriptItemGroup();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraStackEventWrapper::StaticRegisterNativesUNiagaraStackEventWrapper()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStackEventWrapper);
	UClass* Z_Construct_UClass_UNiagaraStackEventWrapper_NoRegister()
	{
		return UNiagaraStackEventWrapper::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraStackEventWrapper_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventHandlerScriptProps_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventHandlerScriptProps_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EventHandlerScriptProps;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraStackEventWrapper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackEventWrapper_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// This is a wrapper class used for the details customization in the stack, since the event script properties were moved from the emitter object into the version data struct\n" },
		{ "IncludePath", "ViewModels/Stack/NiagaraStackEventScriptItemGroup.h" },
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackEventScriptItemGroup.h" },
		{ "ToolTip", "This is a wrapper class used for the details customization in the stack, since the event script properties were moved from the emitter object into the version data struct" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraStackEventWrapper_Statics::NewProp_EventHandlerScriptProps_Inner = { "EventHandlerScriptProps", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraEventScriptProperties, METADATA_PARAMS(nullptr, 0) }; // 3749985779
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackEventWrapper_Statics::NewProp_EventHandlerScriptProps_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackEventScriptItemGroup.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraStackEventWrapper_Statics::NewProp_EventHandlerScriptProps = { "EventHandlerScriptProps", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraStackEventWrapper, EventHandlerScriptProps), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackEventWrapper_Statics::NewProp_EventHandlerScriptProps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackEventWrapper_Statics::NewProp_EventHandlerScriptProps_MetaData)) }; // 3749985779
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraStackEventWrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackEventWrapper_Statics::NewProp_EventHandlerScriptProps_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackEventWrapper_Statics::NewProp_EventHandlerScriptProps,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraStackEventWrapper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStackEventWrapper>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStackEventWrapper_Statics::ClassParams = {
		&UNiagaraStackEventWrapper::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraStackEventWrapper_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackEventWrapper_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackEventWrapper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackEventWrapper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraStackEventWrapper()
	{
		if (!Z_Registration_Info_UClass_UNiagaraStackEventWrapper.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStackEventWrapper.OuterSingleton, Z_Construct_UClass_UNiagaraStackEventWrapper_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraStackEventWrapper.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraStackEventWrapper>()
	{
		return UNiagaraStackEventWrapper::StaticClass();
	}
	UNiagaraStackEventWrapper::UNiagaraStackEventWrapper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStackEventWrapper);
	UNiagaraStackEventWrapper::~UNiagaraStackEventWrapper() {}
	void UNiagaraStackEventHandlerPropertiesItem::StaticRegisterNativesUNiagaraStackEventHandlerPropertiesItem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStackEventHandlerPropertiesItem);
	UClass* Z_Construct_UClass_UNiagaraStackEventHandlerPropertiesItem_NoRegister()
	{
		return UNiagaraStackEventHandlerPropertiesItem::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraStackEventHandlerPropertiesItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmitterObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EmitterObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventWrapper_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EventWrapper;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraStackEventHandlerPropertiesItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraStackItem,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackEventHandlerPropertiesItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewModels/Stack/NiagaraStackEventScriptItemGroup.h" },
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackEventScriptItemGroup.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackEventHandlerPropertiesItem_Statics::NewProp_EmitterObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackEventScriptItemGroup.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraStackEventHandlerPropertiesItem_Statics::NewProp_EmitterObject = { "EmitterObject", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraStackEventHandlerPropertiesItem, EmitterObject), Z_Construct_UClass_UNiagaraStackObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackEventHandlerPropertiesItem_Statics::NewProp_EmitterObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackEventHandlerPropertiesItem_Statics::NewProp_EmitterObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackEventHandlerPropertiesItem_Statics::NewProp_EventWrapper_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackEventScriptItemGroup.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraStackEventHandlerPropertiesItem_Statics::NewProp_EventWrapper = { "EventWrapper", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraStackEventHandlerPropertiesItem, EventWrapper), Z_Construct_UClass_UNiagaraStackEventWrapper_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackEventHandlerPropertiesItem_Statics::NewProp_EventWrapper_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackEventHandlerPropertiesItem_Statics::NewProp_EventWrapper_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraStackEventHandlerPropertiesItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackEventHandlerPropertiesItem_Statics::NewProp_EmitterObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackEventHandlerPropertiesItem_Statics::NewProp_EventWrapper,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraStackEventHandlerPropertiesItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStackEventHandlerPropertiesItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStackEventHandlerPropertiesItem_Statics::ClassParams = {
		&UNiagaraStackEventHandlerPropertiesItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraStackEventHandlerPropertiesItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackEventHandlerPropertiesItem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackEventHandlerPropertiesItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackEventHandlerPropertiesItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraStackEventHandlerPropertiesItem()
	{
		if (!Z_Registration_Info_UClass_UNiagaraStackEventHandlerPropertiesItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStackEventHandlerPropertiesItem.OuterSingleton, Z_Construct_UClass_UNiagaraStackEventHandlerPropertiesItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraStackEventHandlerPropertiesItem.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraStackEventHandlerPropertiesItem>()
	{
		return UNiagaraStackEventHandlerPropertiesItem::StaticClass();
	}
	UNiagaraStackEventHandlerPropertiesItem::UNiagaraStackEventHandlerPropertiesItem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStackEventHandlerPropertiesItem);
	UNiagaraStackEventHandlerPropertiesItem::~UNiagaraStackEventHandlerPropertiesItem() {}
	void UNiagaraStackEventScriptItemGroup::StaticRegisterNativesUNiagaraStackEventScriptItemGroup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStackEventScriptItemGroup);
	UClass* Z_Construct_UClass_UNiagaraStackEventScriptItemGroup_NoRegister()
	{
		return UNiagaraStackEventScriptItemGroup::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraStackEventScriptItemGroup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventHandlerProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EventHandlerProperties;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraStackEventScriptItemGroup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraStackScriptItemGroup,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackEventScriptItemGroup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewModels/Stack/NiagaraStackEventScriptItemGroup.h" },
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackEventScriptItemGroup.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackEventScriptItemGroup_Statics::NewProp_EventHandlerProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackEventScriptItemGroup.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraStackEventScriptItemGroup_Statics::NewProp_EventHandlerProperties = { "EventHandlerProperties", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraStackEventScriptItemGroup, EventHandlerProperties), Z_Construct_UClass_UNiagaraStackEventHandlerPropertiesItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackEventScriptItemGroup_Statics::NewProp_EventHandlerProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackEventScriptItemGroup_Statics::NewProp_EventHandlerProperties_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraStackEventScriptItemGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackEventScriptItemGroup_Statics::NewProp_EventHandlerProperties,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraStackEventScriptItemGroup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStackEventScriptItemGroup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStackEventScriptItemGroup_Statics::ClassParams = {
		&UNiagaraStackEventScriptItemGroup::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraStackEventScriptItemGroup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackEventScriptItemGroup_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackEventScriptItemGroup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackEventScriptItemGroup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraStackEventScriptItemGroup()
	{
		if (!Z_Registration_Info_UClass_UNiagaraStackEventScriptItemGroup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStackEventScriptItemGroup.OuterSingleton, Z_Construct_UClass_UNiagaraStackEventScriptItemGroup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraStackEventScriptItemGroup.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraStackEventScriptItemGroup>()
	{
		return UNiagaraStackEventScriptItemGroup::StaticClass();
	}
	UNiagaraStackEventScriptItemGroup::UNiagaraStackEventScriptItemGroup() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStackEventScriptItemGroup);
	UNiagaraStackEventScriptItemGroup::~UNiagaraStackEventScriptItemGroup() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackEventScriptItemGroup_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackEventScriptItemGroup_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraStackEventWrapper, UNiagaraStackEventWrapper::StaticClass, TEXT("UNiagaraStackEventWrapper"), &Z_Registration_Info_UClass_UNiagaraStackEventWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStackEventWrapper), 3827065168U) },
		{ Z_Construct_UClass_UNiagaraStackEventHandlerPropertiesItem, UNiagaraStackEventHandlerPropertiesItem::StaticClass, TEXT("UNiagaraStackEventHandlerPropertiesItem"), &Z_Registration_Info_UClass_UNiagaraStackEventHandlerPropertiesItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStackEventHandlerPropertiesItem), 3457224905U) },
		{ Z_Construct_UClass_UNiagaraStackEventScriptItemGroup, UNiagaraStackEventScriptItemGroup::StaticClass, TEXT("UNiagaraStackEventScriptItemGroup"), &Z_Registration_Info_UClass_UNiagaraStackEventScriptItemGroup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStackEventScriptItemGroup), 4257678877U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackEventScriptItemGroup_h_3754190545(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackEventScriptItemGroup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackEventScriptItemGroup_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
