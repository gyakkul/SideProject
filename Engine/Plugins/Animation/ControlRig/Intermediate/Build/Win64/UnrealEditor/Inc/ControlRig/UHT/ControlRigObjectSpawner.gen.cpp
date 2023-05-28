// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sequencer/ControlRigObjectSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigObjectSpawner() {}
// Cross Module References
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigObjectHolder();
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigObjectHolder_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References
	void UControlRigObjectHolder::StaticRegisterNativesUControlRigObjectHolder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigObjectHolder);
	UClass* Z_Construct_UClass_UControlRigObjectHolder_NoRegister()
	{
		return UControlRigObjectHolder::StaticClass();
	}
	struct Z_Construct_UClass_UControlRigObjectHolder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Objects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Objects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Objects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControlRigObjectHolder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigObjectHolder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sequencer/ControlRigObjectSpawner.h" },
		{ "ModuleRelativePath", "Public/Sequencer/ControlRigObjectSpawner.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UControlRigObjectHolder_Statics::NewProp_Objects_Inner = { "Objects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigObjectHolder_Statics::NewProp_Objects_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sequencer/ControlRigObjectSpawner.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UControlRigObjectHolder_Statics::NewProp_Objects = { "Objects", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigObjectHolder, Objects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UControlRigObjectHolder_Statics::NewProp_Objects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigObjectHolder_Statics::NewProp_Objects_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UControlRigObjectHolder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigObjectHolder_Statics::NewProp_Objects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigObjectHolder_Statics::NewProp_Objects,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControlRigObjectHolder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigObjectHolder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigObjectHolder_Statics::ClassParams = {
		&UControlRigObjectHolder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UControlRigObjectHolder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigObjectHolder_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UControlRigObjectHolder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigObjectHolder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UControlRigObjectHolder()
	{
		if (!Z_Registration_Info_UClass_UControlRigObjectHolder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigObjectHolder.OuterSingleton, Z_Construct_UClass_UControlRigObjectHolder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UControlRigObjectHolder.OuterSingleton;
	}
	template<> CONTROLRIG_API UClass* StaticClass<UControlRigObjectHolder>()
	{
		return UControlRigObjectHolder::StaticClass();
	}
	UControlRigObjectHolder::UControlRigObjectHolder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigObjectHolder);
	UControlRigObjectHolder::~UControlRigObjectHolder() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_ControlRigObjectSpawner_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_ControlRigObjectSpawner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UControlRigObjectHolder, UControlRigObjectHolder::StaticClass, TEXT("UControlRigObjectHolder"), &Z_Registration_Info_UClass_UControlRigObjectHolder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigObjectHolder), 585324523U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_ControlRigObjectSpawner_h_3882606165(TEXT("/Script/ControlRig"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_ControlRigObjectSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_ControlRigObjectSpawner_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
