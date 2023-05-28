// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/BehaviorTree/Services/BTService_DefaultFocus.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_DefaultFocus() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTService_BlackboardBase();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService_DefaultFocus();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService_DefaultFocus_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UBTService_DefaultFocus::StaticRegisterNativesUBTService_DefaultFocus()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTService_DefaultFocus);
	UClass* Z_Construct_UClass_UBTService_DefaultFocus_NoRegister()
	{
		return UBTService_DefaultFocus::StaticClass();
	}
	struct Z_Construct_UClass_UBTService_DefaultFocus_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocusPriority_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_FocusPriority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTService_DefaultFocus_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_DefaultFocus_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Default Focus service node.\n * A service node that automatically sets the AI controller's focus when it becomes active.\n */" },
		{ "HideCategories", "Service" },
		{ "IncludePath", "BehaviorTree/Services/BTService_DefaultFocus.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Services/BTService_DefaultFocus.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Default Focus service node.\nA service node that automatically sets the AI controller's focus when it becomes active." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_DefaultFocus_Statics::NewProp_FocusPriority_MetaData[] = {
		{ "Comment", "// not exposed to users on purpose. Here to make reusing focus-setting mechanics by derived classes possible\n" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Services/BTService_DefaultFocus.h" },
		{ "ToolTip", "not exposed to users on purpose. Here to make reusing focus-setting mechanics by derived classes possible" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTService_DefaultFocus_Statics::NewProp_FocusPriority = { "FocusPriority", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTService_DefaultFocus, FocusPriority), nullptr, METADATA_PARAMS(Z_Construct_UClass_UBTService_DefaultFocus_Statics::NewProp_FocusPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_DefaultFocus_Statics::NewProp_FocusPriority_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTService_DefaultFocus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_DefaultFocus_Statics::NewProp_FocusPriority,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTService_DefaultFocus_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_DefaultFocus>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTService_DefaultFocus_Statics::ClassParams = {
		&UBTService_DefaultFocus::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTService_DefaultFocus_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_DefaultFocus_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTService_DefaultFocus_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_DefaultFocus_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTService_DefaultFocus()
	{
		if (!Z_Registration_Info_UClass_UBTService_DefaultFocus.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTService_DefaultFocus.OuterSingleton, Z_Construct_UClass_UBTService_DefaultFocus_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTService_DefaultFocus.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UBTService_DefaultFocus>()
	{
		return UBTService_DefaultFocus::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_DefaultFocus);
	UBTService_DefaultFocus::~UBTService_DefaultFocus() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_DefaultFocus_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_DefaultFocus_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTService_DefaultFocus, UBTService_DefaultFocus::StaticClass, TEXT("UBTService_DefaultFocus"), &Z_Registration_Info_UClass_UBTService_DefaultFocus, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTService_DefaultFocus), 3762623470U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_DefaultFocus_h_1086774660(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_DefaultFocus_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_DefaultFocus_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
