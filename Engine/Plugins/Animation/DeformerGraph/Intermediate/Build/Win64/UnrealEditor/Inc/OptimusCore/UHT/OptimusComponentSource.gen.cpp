// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusComponentSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusComponentSource() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComponentSource();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComponentSource_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComponentSourceBinding();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComponentSourceBinding_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References
	void UOptimusComponentSource::StaticRegisterNativesUOptimusComponentSource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusComponentSource);
	UClass* Z_Construct_UClass_UOptimusComponentSource_NoRegister()
	{
		return UOptimusComponentSource::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusComponentSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusComponentSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusComponentSource_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OptimusComponentSource.h" },
		{ "ModuleRelativePath", "Public/OptimusComponentSource.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusComponentSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusComponentSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusComponentSource_Statics::ClassParams = {
		&UOptimusComponentSource::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimusComponentSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusComponentSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusComponentSource()
	{
		if (!Z_Registration_Info_UClass_UOptimusComponentSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusComponentSource.OuterSingleton, Z_Construct_UClass_UOptimusComponentSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusComponentSource.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusComponentSource>()
	{
		return UOptimusComponentSource::StaticClass();
	}
	UOptimusComponentSource::UOptimusComponentSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusComponentSource);
	UOptimusComponentSource::~UOptimusComponentSource() {}
	void UOptimusComponentSourceBinding::StaticRegisterNativesUOptimusComponentSourceBinding()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusComponentSourceBinding);
	UClass* Z_Construct_UClass_UOptimusComponentSourceBinding_NoRegister()
	{
		return UOptimusComponentSourceBinding::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusComponentSourceBinding_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BindingName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BindingName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ComponentType;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ComponentTags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentTags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ComponentTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPrimaryBinding_MetaData[];
#endif
		static void NewProp_bIsPrimaryBinding_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPrimaryBinding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusComponentSourceBinding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusComponentSourceBinding_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OptimusComponentSource.h" },
		{ "ModuleRelativePath", "Public/OptimusComponentSource.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusComponentSourceBinding_Statics::NewProp_BindingName_MetaData[] = {
		{ "Category", "Binding" },
		{ "Comment", "/** The name to give the binding, to disambiguate it from other bindings of same component type. */" },
		{ "EditCondition", "!bIsPrimaryBinding" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/OptimusComponentSource.h" },
		{ "ToolTip", "The name to give the binding, to disambiguate it from other bindings of same component type." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOptimusComponentSourceBinding_Statics::NewProp_BindingName = { "BindingName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusComponentSourceBinding, BindingName), METADATA_PARAMS(Z_Construct_UClass_UOptimusComponentSourceBinding_Statics::NewProp_BindingName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusComponentSourceBinding_Statics::NewProp_BindingName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusComponentSourceBinding_Statics::NewProp_ComponentType_MetaData[] = {
		{ "Category", "Binding" },
		{ "Comment", "/** The component type that this binding applies to */" },
		{ "ModuleRelativePath", "Public/OptimusComponentSource.h" },
		{ "ToolTip", "The component type that this binding applies to" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UOptimusComponentSourceBinding_Statics::NewProp_ComponentType = { "ComponentType", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusComponentSourceBinding, ComponentType), Z_Construct_UClass_UClass, Z_Construct_UClass_UOptimusComponentSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOptimusComponentSourceBinding_Statics::NewProp_ComponentType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusComponentSourceBinding_Statics::NewProp_ComponentType_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOptimusComponentSourceBinding_Statics::NewProp_ComponentTags_Inner = { "ComponentTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusComponentSourceBinding_Statics::NewProp_ComponentTags_MetaData[] = {
		{ "Category", "Tags" },
		{ "Comment", "/** Component tags to automatically bind this component binding to. */" },
		{ "EditCondition", "!bIsPrimaryBinding" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/OptimusComponentSource.h" },
		{ "ToolTip", "Component tags to automatically bind this component binding to." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOptimusComponentSourceBinding_Statics::NewProp_ComponentTags = { "ComponentTags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusComponentSourceBinding, ComponentTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOptimusComponentSourceBinding_Statics::NewProp_ComponentTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusComponentSourceBinding_Statics::NewProp_ComponentTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusComponentSourceBinding_Statics::NewProp_bIsPrimaryBinding_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusComponentSource.h" },
	};
#endif
	void Z_Construct_UClass_UOptimusComponentSourceBinding_Statics::NewProp_bIsPrimaryBinding_SetBit(void* Obj)
	{
		((UOptimusComponentSourceBinding*)Obj)->bIsPrimaryBinding = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimusComponentSourceBinding_Statics::NewProp_bIsPrimaryBinding = { "bIsPrimaryBinding", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOptimusComponentSourceBinding), &Z_Construct_UClass_UOptimusComponentSourceBinding_Statics::NewProp_bIsPrimaryBinding_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimusComponentSourceBinding_Statics::NewProp_bIsPrimaryBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusComponentSourceBinding_Statics::NewProp_bIsPrimaryBinding_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusComponentSourceBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusComponentSourceBinding_Statics::NewProp_BindingName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusComponentSourceBinding_Statics::NewProp_ComponentType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusComponentSourceBinding_Statics::NewProp_ComponentTags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusComponentSourceBinding_Statics::NewProp_ComponentTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusComponentSourceBinding_Statics::NewProp_bIsPrimaryBinding,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusComponentSourceBinding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusComponentSourceBinding>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusComponentSourceBinding_Statics::ClassParams = {
		&UOptimusComponentSourceBinding::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOptimusComponentSourceBinding_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusComponentSourceBinding_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimusComponentSourceBinding_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusComponentSourceBinding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusComponentSourceBinding()
	{
		if (!Z_Registration_Info_UClass_UOptimusComponentSourceBinding.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusComponentSourceBinding.OuterSingleton, Z_Construct_UClass_UOptimusComponentSourceBinding_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusComponentSourceBinding.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusComponentSourceBinding>()
	{
		return UOptimusComponentSourceBinding::StaticClass();
	}
	UOptimusComponentSourceBinding::UOptimusComponentSourceBinding(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusComponentSourceBinding);
	UOptimusComponentSourceBinding::~UOptimusComponentSourceBinding() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusComponentSource_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusComponentSource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusComponentSource, UOptimusComponentSource::StaticClass, TEXT("UOptimusComponentSource"), &Z_Registration_Info_UClass_UOptimusComponentSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusComponentSource), 3048659975U) },
		{ Z_Construct_UClass_UOptimusComponentSourceBinding, UOptimusComponentSourceBinding::StaticClass, TEXT("UOptimusComponentSourceBinding"), &Z_Registration_Info_UClass_UOptimusComponentSourceBinding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusComponentSourceBinding), 2442687536U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusComponentSource_h_3735324321(TEXT("/Script/OptimusCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusComponentSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusComponentSource_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
