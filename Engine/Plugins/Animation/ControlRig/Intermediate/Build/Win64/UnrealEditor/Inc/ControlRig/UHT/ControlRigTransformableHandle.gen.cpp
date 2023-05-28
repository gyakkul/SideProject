// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Constraints/ControlRigTransformableHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigTransformableHandle() {}
// Cross Module References
	CONSTRAINTS_API UClass* Z_Construct_UClass_UTransformableHandle();
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRig_NoRegister();
	CONTROLRIG_API UClass* Z_Construct_UClass_UTransformableControlHandle();
	CONTROLRIG_API UClass* Z_Construct_UClass_UTransformableControlHandle_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References
	void UTransformableControlHandle::StaticRegisterNativesUTransformableControlHandle()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTransformableControlHandle);
	UClass* Z_Construct_UClass_UTransformableControlHandle_NoRegister()
	{
		return UTransformableControlHandle::StaticClass();
	}
	struct Z_Construct_UClass_UTransformableControlHandle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlRig_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ControlRig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTransformableControlHandle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTransformableHandle,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformableControlHandle_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * UTransformableControlHandle\n */" },
		{ "IncludePath", "Constraints/ControlRigTransformableHandle.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Constraints/ControlRigTransformableHandle.h" },
		{ "ToolTip", "UTransformableControlHandle" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformableControlHandle_Statics::NewProp_ControlRig_MetaData[] = {
		{ "Category", "Object" },
		{ "Comment", "/** The ControlRig that this handle is pointing at. */" },
		{ "ModuleRelativePath", "Public/Constraints/ControlRigTransformableHandle.h" },
		{ "ToolTip", "The ControlRig that this handle is pointing at." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UTransformableControlHandle_Statics::NewProp_ControlRig = { "ControlRig", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformableControlHandle, ControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTransformableControlHandle_Statics::NewProp_ControlRig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformableControlHandle_Statics::NewProp_ControlRig_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformableControlHandle_Statics::NewProp_ControlName_MetaData[] = {
		{ "Category", "Object" },
		{ "Comment", "/** The ControlName of the control that this handle is pointing at. */" },
		{ "ModuleRelativePath", "Public/Constraints/ControlRigTransformableHandle.h" },
		{ "ToolTip", "The ControlName of the control that this handle is pointing at." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTransformableControlHandle_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformableControlHandle, ControlName), METADATA_PARAMS(Z_Construct_UClass_UTransformableControlHandle_Statics::NewProp_ControlName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformableControlHandle_Statics::NewProp_ControlName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTransformableControlHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformableControlHandle_Statics::NewProp_ControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformableControlHandle_Statics::NewProp_ControlName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTransformableControlHandle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTransformableControlHandle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTransformableControlHandle_Statics::ClassParams = {
		&UTransformableControlHandle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTransformableControlHandle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTransformableControlHandle_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTransformableControlHandle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformableControlHandle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTransformableControlHandle()
	{
		if (!Z_Registration_Info_UClass_UTransformableControlHandle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTransformableControlHandle.OuterSingleton, Z_Construct_UClass_UTransformableControlHandle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTransformableControlHandle.OuterSingleton;
	}
	template<> CONTROLRIG_API UClass* StaticClass<UTransformableControlHandle>()
	{
		return UTransformableControlHandle::StaticClass();
	}
	UTransformableControlHandle::UTransformableControlHandle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTransformableControlHandle);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Constraints_ControlRigTransformableHandle_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Constraints_ControlRigTransformableHandle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTransformableControlHandle, UTransformableControlHandle::StaticClass, TEXT("UTransformableControlHandle"), &Z_Registration_Info_UClass_UTransformableControlHandle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTransformableControlHandle), 3299533820U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Constraints_ControlRigTransformableHandle_h_452767278(TEXT("/Script/ControlRig"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Constraints_ControlRigTransformableHandle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Constraints_ControlRigTransformableHandle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
