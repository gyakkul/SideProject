// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRigAnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigAnimInstance() {}
// Cross Module References
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigAnimInstance();
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigAnimInstance_NoRegister();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigAnimInstanceProxy();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimInstanceProxy();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

static_assert(std::is_polymorphic<FControlRigAnimInstanceProxy>() == std::is_polymorphic<FAnimInstanceProxy>(), "USTRUCT FControlRigAnimInstanceProxy cannot be polymorphic unless super FAnimInstanceProxy is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ControlRigAnimInstanceProxy;
class UScriptStruct* FControlRigAnimInstanceProxy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ControlRigAnimInstanceProxy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ControlRigAnimInstanceProxy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FControlRigAnimInstanceProxy, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ControlRigAnimInstanceProxy"));
	}
	return Z_Registration_Info_UScriptStruct_ControlRigAnimInstanceProxy.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FControlRigAnimInstanceProxy>()
{
	return FControlRigAnimInstanceProxy::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FControlRigAnimInstanceProxy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigAnimInstanceProxy_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Proxy override for this UAnimInstance-derived class */" },
		{ "ModuleRelativePath", "Public/ControlRigAnimInstance.h" },
		{ "ToolTip", "Proxy override for this UAnimInstance-derived class" },
	};
#endif
	void* Z_Construct_UScriptStruct_FControlRigAnimInstanceProxy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControlRigAnimInstanceProxy>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControlRigAnimInstanceProxy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FAnimInstanceProxy,
		&NewStructOps,
		"ControlRigAnimInstanceProxy",
		sizeof(FControlRigAnimInstanceProxy),
		alignof(FControlRigAnimInstanceProxy),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigAnimInstanceProxy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigAnimInstanceProxy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FControlRigAnimInstanceProxy()
	{
		if (!Z_Registration_Info_UScriptStruct_ControlRigAnimInstanceProxy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ControlRigAnimInstanceProxy.InnerSingleton, Z_Construct_UScriptStruct_FControlRigAnimInstanceProxy_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ControlRigAnimInstanceProxy.InnerSingleton;
	}
	void UControlRigAnimInstance::StaticRegisterNativesUControlRigAnimInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigAnimInstance);
	UClass* Z_Construct_UClass_UControlRigAnimInstance_NoRegister()
	{
		return UControlRigAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UControlRigAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControlRigAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "ControlRigAnimInstance.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/ControlRigAnimInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControlRigAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigAnimInstance_Statics::ClassParams = {
		&UControlRigAnimInstance::StaticClass,
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
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UControlRigAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UControlRigAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UControlRigAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigAnimInstance.OuterSingleton, Z_Construct_UClass_UControlRigAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UControlRigAnimInstance.OuterSingleton;
	}
	template<> CONTROLRIG_API UClass* StaticClass<UControlRigAnimInstance>()
	{
		return UControlRigAnimInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigAnimInstance);
	UControlRigAnimInstance::~UControlRigAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigAnimInstance_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigAnimInstance_h_Statics::ScriptStructInfo[] = {
		{ FControlRigAnimInstanceProxy::StaticStruct, Z_Construct_UScriptStruct_FControlRigAnimInstanceProxy_Statics::NewStructOps, TEXT("ControlRigAnimInstanceProxy"), &Z_Registration_Info_UScriptStruct_ControlRigAnimInstanceProxy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FControlRigAnimInstanceProxy), 2832554372U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UControlRigAnimInstance, UControlRigAnimInstance::StaticClass, TEXT("UControlRigAnimInstance"), &Z_Registration_Info_UClass_UControlRigAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigAnimInstance), 620069430U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigAnimInstance_h_798806249(TEXT("/Script/ControlRig"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigAnimInstance_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigAnimInstance_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigAnimInstance_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
