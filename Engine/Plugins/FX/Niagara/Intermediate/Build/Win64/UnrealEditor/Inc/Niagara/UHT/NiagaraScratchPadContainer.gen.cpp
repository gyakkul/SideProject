// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/NiagaraScratchPadContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraScratchPadContainer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraScratchPadContainer();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraScratchPadContainer_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraScript_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UNiagaraScratchPadContainer::StaticRegisterNativesUNiagaraScratchPadContainer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraScratchPadContainer);
	UClass* Z_Construct_UClass_UNiagaraScratchPadContainer_NoRegister()
	{
		return UNiagaraScratchPadContainer::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraScratchPadContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Scripts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scripts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Scripts;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraScratchPadContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScratchPadContainer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Wrapper class for scratch pad scripts in an emitter. This is needed because each emitter version can have it's own copy of a scratch pad with the same name and they can't all be outered to the emitter that way.\n */" },
		{ "IncludePath", "NiagaraScratchPadContainer.h" },
		{ "ModuleRelativePath", "Classes/NiagaraScratchPadContainer.h" },
		{ "ToolTip", "Wrapper class for scratch pad scripts in an emitter. This is needed because each emitter version can have it's own copy of a scratch pad with the same name and they can't all be outered to the emitter that way." },
	};
#endif
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraScratchPadContainer_Statics::NewProp_Scripts_Inner = { "Scripts", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UNiagaraScript_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScratchPadContainer_Statics::NewProp_Scripts_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScratchPadContainer.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraScratchPadContainer_Statics::NewProp_Scripts = { "Scripts", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraScratchPadContainer, Scripts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScratchPadContainer_Statics::NewProp_Scripts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScratchPadContainer_Statics::NewProp_Scripts_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraScratchPadContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScratchPadContainer_Statics::NewProp_Scripts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScratchPadContainer_Statics::NewProp_Scripts,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraScratchPadContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraScratchPadContainer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraScratchPadContainer_Statics::ClassParams = {
		&UNiagaraScratchPadContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UNiagaraScratchPadContainer_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScratchPadContainer_Statics::PropPointers), 0),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraScratchPadContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScratchPadContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraScratchPadContainer()
	{
		if (!Z_Registration_Info_UClass_UNiagaraScratchPadContainer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraScratchPadContainer.OuterSingleton, Z_Construct_UClass_UNiagaraScratchPadContainer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraScratchPadContainer.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraScratchPadContainer>()
	{
		return UNiagaraScratchPadContainer::StaticClass();
	}
	UNiagaraScratchPadContainer::UNiagaraScratchPadContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraScratchPadContainer);
	UNiagaraScratchPadContainer::~UNiagaraScratchPadContainer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScratchPadContainer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScratchPadContainer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraScratchPadContainer, UNiagaraScratchPadContainer::StaticClass, TEXT("UNiagaraScratchPadContainer"), &Z_Registration_Info_UClass_UNiagaraScratchPadContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraScratchPadContainer), 1118570004U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScratchPadContainer_h_1240298164(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScratchPadContainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScratchPadContainer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
