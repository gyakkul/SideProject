// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRigValidationPass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigValidationPass() {}
// Cross Module References
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigValidationPass();
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigValidationPass_NoRegister();
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigValidator();
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigValidator_NoRegister();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigValidationContext();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ControlRigValidationContext;
class UScriptStruct* FControlRigValidationContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ControlRigValidationContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ControlRigValidationContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FControlRigValidationContext, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ControlRigValidationContext"));
	}
	return Z_Registration_Info_UScriptStruct_ControlRigValidationContext.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FControlRigValidationContext>()
{
	return FControlRigValidationContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FControlRigValidationContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigValidationContext_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// todo DECLARE_DELEGATE_TwoParams(FControlRigValidationControlRigChangedDelegate, UControlRigValidator*, UControlRig*);\n" },
		{ "ModuleRelativePath", "Public/ControlRigValidationPass.h" },
		{ "ToolTip", "todo DECLARE_DELEGATE_TwoParams(FControlRigValidationControlRigChangedDelegate, UControlRigValidator*, UControlRig*);" },
	};
#endif
	void* Z_Construct_UScriptStruct_FControlRigValidationContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControlRigValidationContext>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControlRigValidationContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"ControlRigValidationContext",
		sizeof(FControlRigValidationContext),
		alignof(FControlRigValidationContext),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigValidationContext_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigValidationContext_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FControlRigValidationContext()
	{
		if (!Z_Registration_Info_UScriptStruct_ControlRigValidationContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ControlRigValidationContext.InnerSingleton, Z_Construct_UScriptStruct_FControlRigValidationContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ControlRigValidationContext.InnerSingleton;
	}
	void UControlRigValidator::StaticRegisterNativesUControlRigValidator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigValidator);
	UClass* Z_Construct_UClass_UControlRigValidator_NoRegister()
	{
		return UControlRigValidator::StaticClass();
	}
	struct Z_Construct_UClass_UControlRigValidator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Passes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Passes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Passes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControlRigValidator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigValidator_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Used to perform validation on a debugged Control Rig */" },
		{ "IncludePath", "ControlRigValidationPass.h" },
		{ "ModuleRelativePath", "Public/ControlRigValidationPass.h" },
		{ "ToolTip", "Used to perform validation on a debugged Control Rig" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UControlRigValidator_Statics::NewProp_Passes_Inner = { "Passes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UControlRigValidationPass_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigValidator_Statics::NewProp_Passes_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRigValidationPass.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UControlRigValidator_Statics::NewProp_Passes = { "Passes", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigValidator, Passes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UControlRigValidator_Statics::NewProp_Passes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigValidator_Statics::NewProp_Passes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UControlRigValidator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigValidator_Statics::NewProp_Passes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigValidator_Statics::NewProp_Passes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControlRigValidator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigValidator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigValidator_Statics::ClassParams = {
		&UControlRigValidator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UControlRigValidator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigValidator_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UControlRigValidator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigValidator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UControlRigValidator()
	{
		if (!Z_Registration_Info_UClass_UControlRigValidator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigValidator.OuterSingleton, Z_Construct_UClass_UControlRigValidator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UControlRigValidator.OuterSingleton;
	}
	template<> CONTROLRIG_API UClass* StaticClass<UControlRigValidator>()
	{
		return UControlRigValidator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigValidator);
	UControlRigValidator::~UControlRigValidator() {}
	void UControlRigValidationPass::StaticRegisterNativesUControlRigValidationPass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigValidationPass);
	UClass* Z_Construct_UClass_UControlRigValidationPass_NoRegister()
	{
		return UControlRigValidationPass::StaticClass();
	}
	struct Z_Construct_UClass_UControlRigValidationPass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControlRigValidationPass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigValidationPass_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Used to perform validation on a debugged Control Rig */" },
		{ "IncludePath", "ControlRigValidationPass.h" },
		{ "ModuleRelativePath", "Public/ControlRigValidationPass.h" },
		{ "ToolTip", "Used to perform validation on a debugged Control Rig" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControlRigValidationPass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigValidationPass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigValidationPass_Statics::ClassParams = {
		&UControlRigValidationPass::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UControlRigValidationPass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigValidationPass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UControlRigValidationPass()
	{
		if (!Z_Registration_Info_UClass_UControlRigValidationPass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigValidationPass.OuterSingleton, Z_Construct_UClass_UControlRigValidationPass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UControlRigValidationPass.OuterSingleton;
	}
	template<> CONTROLRIG_API UClass* StaticClass<UControlRigValidationPass>()
	{
		return UControlRigValidationPass::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigValidationPass);
	UControlRigValidationPass::~UControlRigValidationPass() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigValidationPass_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigValidationPass_h_Statics::ScriptStructInfo[] = {
		{ FControlRigValidationContext::StaticStruct, Z_Construct_UScriptStruct_FControlRigValidationContext_Statics::NewStructOps, TEXT("ControlRigValidationContext"), &Z_Registration_Info_UScriptStruct_ControlRigValidationContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FControlRigValidationContext), 1772055747U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigValidationPass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UControlRigValidator, UControlRigValidator::StaticClass, TEXT("UControlRigValidator"), &Z_Registration_Info_UClass_UControlRigValidator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigValidator), 2883970315U) },
		{ Z_Construct_UClass_UControlRigValidationPass, UControlRigValidationPass::StaticClass, TEXT("UControlRigValidationPass"), &Z_Registration_Info_UClass_UControlRigValidationPass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigValidationPass), 869810094U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigValidationPass_h_3826107373(TEXT("/Script/ControlRig"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigValidationPass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigValidationPass_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigValidationPass_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigValidationPass_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
