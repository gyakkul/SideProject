// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/BehaviorTree/Composites/BTComposite_SimpleParallel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTComposite_SimpleParallel() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTComposite_SimpleParallel();
	AIMODULE_API UClass* Z_Construct_UClass_UBTComposite_SimpleParallel_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTCompositeNode();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EBTParallelMode();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBTParallelMode;
	static UEnum* EBTParallelMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBTParallelMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBTParallelMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EBTParallelMode, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EBTParallelMode"));
		}
		return Z_Registration_Info_UEnum_EBTParallelMode.OuterSingleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EBTParallelMode::Type>()
	{
		return EBTParallelMode_StaticEnum();
	}
	struct Z_Construct_UEnum_AIModule_EBTParallelMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AIModule_EBTParallelMode_Statics::Enumerators[] = {
		{ "EBTParallelMode::AbortBackground", (int64)EBTParallelMode::AbortBackground },
		{ "EBTParallelMode::WaitForBackground", (int64)EBTParallelMode::WaitForBackground },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AIModule_EBTParallelMode_Statics::Enum_MetaDataParams[] = {
		{ "AbortBackground.DisplayName", "Immediate" },
		{ "AbortBackground.Name", "EBTParallelMode::AbortBackground" },
		{ "AbortBackground.ToolTip", "When main task finishes, immediately abort background tree." },
		{ "Comment", "// keep in sync with DescribeFinishMode\n" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Composites/BTComposite_SimpleParallel.h" },
		{ "ToolTip", "keep in sync with DescribeFinishMode" },
		{ "WaitForBackground.DisplayName", "Delayed" },
		{ "WaitForBackground.Name", "EBTParallelMode::WaitForBackground" },
		{ "WaitForBackground.ToolTip", "When main task finishes, wait for background tree to finish." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EBTParallelMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		"EBTParallelMode",
		"EBTParallelMode::Type",
		Z_Construct_UEnum_AIModule_EBTParallelMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EBTParallelMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_AIModule_EBTParallelMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EBTParallelMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AIModule_EBTParallelMode()
	{
		if (!Z_Registration_Info_UEnum_EBTParallelMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBTParallelMode.InnerSingleton, Z_Construct_UEnum_AIModule_EBTParallelMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBTParallelMode.InnerSingleton;
	}
	void UBTComposite_SimpleParallel::StaticRegisterNativesUBTComposite_SimpleParallel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTComposite_SimpleParallel);
	UClass* Z_Construct_UClass_UBTComposite_SimpleParallel_NoRegister()
	{
		return UBTComposite_SimpleParallel::StaticClass();
	}
	struct Z_Construct_UClass_UBTComposite_SimpleParallel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FinishMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_FinishMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTComposite_SimpleParallel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTCompositeNode,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTComposite_SimpleParallel_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Simple Parallel composite node.\n * Allows for running two children: one which must be a single task node (with optional decorators), and the other of which can be a complete subtree.\n */" },
		{ "HideCategories", "Composite" },
		{ "IncludePath", "BehaviorTree/Composites/BTComposite_SimpleParallel.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Composites/BTComposite_SimpleParallel.h" },
		{ "ToolTip", "Simple Parallel composite node.\nAllows for running two children: one which must be a single task node (with optional decorators), and the other of which can be a complete subtree." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTComposite_SimpleParallel_Statics::NewProp_FinishMode_MetaData[] = {
		{ "Category", "Parallel" },
		{ "Comment", "/** how background tree should be handled when main task finishes execution */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Composites/BTComposite_SimpleParallel.h" },
		{ "ToolTip", "how background tree should be handled when main task finishes execution" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTComposite_SimpleParallel_Statics::NewProp_FinishMode = { "FinishMode", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTComposite_SimpleParallel, FinishMode), Z_Construct_UEnum_AIModule_EBTParallelMode, METADATA_PARAMS(Z_Construct_UClass_UBTComposite_SimpleParallel_Statics::NewProp_FinishMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTComposite_SimpleParallel_Statics::NewProp_FinishMode_MetaData)) }; // 988575533
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTComposite_SimpleParallel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTComposite_SimpleParallel_Statics::NewProp_FinishMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTComposite_SimpleParallel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTComposite_SimpleParallel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTComposite_SimpleParallel_Statics::ClassParams = {
		&UBTComposite_SimpleParallel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTComposite_SimpleParallel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTComposite_SimpleParallel_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTComposite_SimpleParallel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTComposite_SimpleParallel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTComposite_SimpleParallel()
	{
		if (!Z_Registration_Info_UClass_UBTComposite_SimpleParallel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTComposite_SimpleParallel.OuterSingleton, Z_Construct_UClass_UBTComposite_SimpleParallel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTComposite_SimpleParallel.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UBTComposite_SimpleParallel>()
	{
		return UBTComposite_SimpleParallel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTComposite_SimpleParallel);
	UBTComposite_SimpleParallel::~UBTComposite_SimpleParallel() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Composites_BTComposite_SimpleParallel_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Composites_BTComposite_SimpleParallel_h_Statics::EnumInfo[] = {
		{ EBTParallelMode_StaticEnum, TEXT("EBTParallelMode"), &Z_Registration_Info_UEnum_EBTParallelMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 988575533U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Composites_BTComposite_SimpleParallel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTComposite_SimpleParallel, UBTComposite_SimpleParallel::StaticClass, TEXT("UBTComposite_SimpleParallel"), &Z_Registration_Info_UClass_UBTComposite_SimpleParallel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTComposite_SimpleParallel), 1353562773U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Composites_BTComposite_SimpleParallel_h_3619832529(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Composites_BTComposite_SimpleParallel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Composites_BTComposite_SimpleParallel_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Composites_BTComposite_SimpleParallel_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Composites_BTComposite_SimpleParallel_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
