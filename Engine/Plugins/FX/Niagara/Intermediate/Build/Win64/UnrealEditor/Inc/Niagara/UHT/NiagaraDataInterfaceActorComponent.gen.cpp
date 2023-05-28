// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataInterface/NiagaraDataInterfaceActorComponent.h"
#include "../Public/NiagaraCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceActorComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceActorComponent();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_NoRegister();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENDIActorComponentSourceMode();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUserParameterBinding();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENDIActorComponentSourceMode;
	static UEnum* ENDIActorComponentSourceMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENDIActorComponentSourceMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENDIActorComponentSourceMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENDIActorComponentSourceMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENDIActorComponentSourceMode"));
		}
		return Z_Registration_Info_UEnum_ENDIActorComponentSourceMode.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENDIActorComponentSourceMode>()
	{
		return ENDIActorComponentSourceMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENDIActorComponentSourceMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENDIActorComponentSourceMode_Statics::Enumerators[] = {
		{ "ENDIActorComponentSourceMode::Default", (int64)ENDIActorComponentSourceMode::Default },
		{ "ENDIActorComponentSourceMode::AttachParent", (int64)ENDIActorComponentSourceMode::AttachParent },
		{ "ENDIActorComponentSourceMode::LocalPlayer", (int64)ENDIActorComponentSourceMode::LocalPlayer },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENDIActorComponentSourceMode_Statics::Enum_MetaDataParams[] = {
		{ "AttachParent.Comment", "/**\n\x09We will first look at the attach parent.\n\x09If this is not valid we fallback to the Default binding mode.\n\x09*/" },
		{ "AttachParent.Name", "ENDIActorComponentSourceMode::AttachParent" },
		{ "AttachParent.ToolTip", "We will first look at the attach parent.\nIf this is not valid we fallback to the Default binding mode." },
		{ "Default.Comment", "/**\n\x09The default binding mode first we look for a valid binding on the ActorOrComponentParameter.\n\x09If this it no valid we then look at the SourceActor.\n\x09If these both fail we are bound to nothing.\n\x09*/" },
		{ "Default.Name", "ENDIActorComponentSourceMode::Default" },
		{ "Default.ToolTip", "The default binding mode first we look for a valid binding on the ActorOrComponentParameter.\nIf this it no valid we then look at the SourceActor.\nIf these both fail we are bound to nothing." },
		{ "LocalPlayer.Comment", "/**\n\x09We will look for a ULocalPlayer with the provided index.\n\x09If this is not valid we fallback to the Default binding mode.\n\x09*/" },
		{ "LocalPlayer.Name", "ENDIActorComponentSourceMode::LocalPlayer" },
		{ "LocalPlayer.ToolTip", "We will look for a ULocalPlayer with the provided index.\nIf this is not valid we fallback to the Default binding mode." },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENDIActorComponentSourceMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENDIActorComponentSourceMode",
		"ENDIActorComponentSourceMode",
		Z_Construct_UEnum_Niagara_ENDIActorComponentSourceMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENDIActorComponentSourceMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENDIActorComponentSourceMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENDIActorComponentSourceMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENDIActorComponentSourceMode()
	{
		if (!Z_Registration_Info_UEnum_ENDIActorComponentSourceMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENDIActorComponentSourceMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENDIActorComponentSourceMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENDIActorComponentSourceMode.InnerSingleton;
	}
	void UNiagaraDataInterfaceActorComponent::StaticRegisterNativesUNiagaraDataInterfaceActorComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceActorComponent);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_NoRegister()
	{
		return UNiagaraDataInterfaceActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequireCurrentFrameData_MetaData[];
#endif
		static void NewProp_bRequireCurrentFrameData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireCurrentFrameData;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SourceMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalPlayerIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalPlayerIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceActor_MetaData[];
#endif
		static const UECodeGen_Private::FLazyObjectPropertyParams NewProp_SourceActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorOrComponentParameter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorOrComponentParameter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::Class_MetaDataParams[] = {
		{ "Category", "Actor" },
		{ "Comment", "/**\nData interface that gives you access to actor & component information.\n*/" },
		{ "DisplayName", "Actor Component Interface" },
		{ "IncludePath", "DataInterface/NiagaraDataInterfaceActorComponent.h" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceActorComponent.h" },
		{ "ToolTip", "Data interface that gives you access to actor & component information." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::NewProp_bRequireCurrentFrameData_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** When this option is disabled, we use the previous frame's data for the skeletal mesh and can often issue the simulation early. This greatly\n\x09reduces overhead and allows the game thread to run faster, but comes at a tradeoff if the dependencies might leave gaps or other visual artifacts.*/" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceActorComponent.h" },
		{ "ToolTip", "When this option is disabled, we use the previous frame's data for the skeletal mesh and can often issue the simulation early. This greatly\n      reduces overhead and allows the game thread to run faster, but comes at a tradeoff if the dependencies might leave gaps or other visual artifacts." },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::NewProp_bRequireCurrentFrameData_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceActorComponent*)Obj)->bRequireCurrentFrameData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::NewProp_bRequireCurrentFrameData = { "bRequireCurrentFrameData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraDataInterfaceActorComponent), &Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::NewProp_bRequireCurrentFrameData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::NewProp_bRequireCurrentFrameData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::NewProp_bRequireCurrentFrameData_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::NewProp_SourceMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::NewProp_SourceMode_MetaData[] = {
		{ "Category", "ActorComponent" },
		{ "Comment", "/** Controls how we find the actor / component we want to bind to. */" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceActorComponent.h" },
		{ "ToolTip", "Controls how we find the actor / component we want to bind to." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::NewProp_SourceMode = { "SourceMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceActorComponent, SourceMode), Z_Construct_UEnum_Niagara_ENDIActorComponentSourceMode, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::NewProp_SourceMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::NewProp_SourceMode_MetaData)) }; // 774548199
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::NewProp_LocalPlayerIndex_MetaData[] = {
		{ "Category", "ActorComponent" },
		{ "Comment", "//, EditConditionHides))\n" },
		{ "EditCondition", "SourceMode==ENDIActorComponentSourceMode::LocalPlayer" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceActorComponent.h" },
		{ "ToolTip", ", EditConditionHides))" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::NewProp_LocalPlayerIndex = { "LocalPlayerIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceActorComponent, LocalPlayerIndex), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::NewProp_LocalPlayerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::NewProp_LocalPlayerIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::NewProp_SourceActor_MetaData[] = {
		{ "Category", "ActorComponent" },
		{ "Comment", "/** Optional source actor to use, if the user parameter binding is valid this will be ignored. */" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceActorComponent.h" },
		{ "ToolTip", "Optional source actor to use, if the user parameter binding is valid this will be ignored." },
	};
#endif
	const UECodeGen_Private::FLazyObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::NewProp_SourceActor = { "SourceActor", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::LazyObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceActorComponent, SourceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::NewProp_SourceActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::NewProp_SourceActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::NewProp_ActorOrComponentParameter_MetaData[] = {
		{ "Category", "ActorComponent" },
		{ "Comment", "/** User parameter binding to use, overrides SourceActor.  Can be set by Blueprint, etc. */" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceActorComponent.h" },
		{ "ToolTip", "User parameter binding to use, overrides SourceActor.  Can be set by Blueprint, etc." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::NewProp_ActorOrComponentParameter = { "ActorOrComponentParameter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceActorComponent, ActorOrComponentParameter), Z_Construct_UScriptStruct_FNiagaraUserParameterBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::NewProp_ActorOrComponentParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::NewProp_ActorOrComponentParameter_MetaData)) }; // 1724214256
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::NewProp_bRequireCurrentFrameData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::NewProp_SourceMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::NewProp_SourceMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::NewProp_LocalPlayerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::NewProp_SourceActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::NewProp_ActorOrComponentParameter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceActorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::ClassParams = {
		&UNiagaraDataInterfaceActorComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceActorComponent()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceActorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceActorComponent.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataInterfaceActorComponent.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceActorComponent>()
	{
		return UNiagaraDataInterfaceActorComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceActorComponent);
	UNiagaraDataInterfaceActorComponent::~UNiagaraDataInterfaceActorComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceActorComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceActorComponent_h_Statics::EnumInfo[] = {
		{ ENDIActorComponentSourceMode_StaticEnum, TEXT("ENDIActorComponentSourceMode"), &Z_Registration_Info_UEnum_ENDIActorComponentSourceMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 774548199U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceActorComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceActorComponent, UNiagaraDataInterfaceActorComponent::StaticClass, TEXT("UNiagaraDataInterfaceActorComponent"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceActorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceActorComponent), 833201360U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceActorComponent_h_4186864787(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceActorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceActorComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceActorComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceActorComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
