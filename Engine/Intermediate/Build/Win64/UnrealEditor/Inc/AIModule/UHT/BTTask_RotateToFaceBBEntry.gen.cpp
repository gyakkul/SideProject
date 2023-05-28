// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/BehaviorTree/Tasks/BTTask_RotateToFaceBBEntry.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_RotateToFaceBBEntry() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_RotateToFaceBBEntry();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_RotateToFaceBBEntry_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UBTTask_RotateToFaceBBEntry::StaticRegisterNativesUBTTask_RotateToFaceBBEntry()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_RotateToFaceBBEntry);
	UClass* Z_Construct_UClass_UBTTask_RotateToFaceBBEntry_NoRegister()
	{
		return UBTTask_RotateToFaceBBEntry::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_RotateToFaceBBEntry_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Precision_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Precision;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_RotateToFaceBBEntry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_RotateToFaceBBEntry_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BehaviorTree/Tasks/BTTask_RotateToFaceBBEntry.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_RotateToFaceBBEntry.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_RotateToFaceBBEntry_Statics::NewProp_Precision_MetaData[] = {
		{ "Category", "Node" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Success condition precision in degrees */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_RotateToFaceBBEntry.h" },
		{ "ToolTip", "Success condition precision in degrees" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_RotateToFaceBBEntry_Statics::NewProp_Precision = { "Precision", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTTask_RotateToFaceBBEntry, Precision), METADATA_PARAMS(Z_Construct_UClass_UBTTask_RotateToFaceBBEntry_Statics::NewProp_Precision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RotateToFaceBBEntry_Statics::NewProp_Precision_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_RotateToFaceBBEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RotateToFaceBBEntry_Statics::NewProp_Precision,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_RotateToFaceBBEntry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_RotateToFaceBBEntry>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_RotateToFaceBBEntry_Statics::ClassParams = {
		&UBTTask_RotateToFaceBBEntry::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_RotateToFaceBBEntry_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RotateToFaceBBEntry_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_RotateToFaceBBEntry_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RotateToFaceBBEntry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_RotateToFaceBBEntry()
	{
		if (!Z_Registration_Info_UClass_UBTTask_RotateToFaceBBEntry.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_RotateToFaceBBEntry.OuterSingleton, Z_Construct_UClass_UBTTask_RotateToFaceBBEntry_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTTask_RotateToFaceBBEntry.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UBTTask_RotateToFaceBBEntry>()
	{
		return UBTTask_RotateToFaceBBEntry::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_RotateToFaceBBEntry);
	UBTTask_RotateToFaceBBEntry::~UBTTask_RotateToFaceBBEntry() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_RotateToFaceBBEntry_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_RotateToFaceBBEntry_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_RotateToFaceBBEntry, UBTTask_RotateToFaceBBEntry::StaticClass, TEXT("UBTTask_RotateToFaceBBEntry"), &Z_Registration_Info_UClass_UBTTask_RotateToFaceBBEntry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_RotateToFaceBBEntry), 2331736616U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_RotateToFaceBBEntry_h_3693676920(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_RotateToFaceBBEntry_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_RotateToFaceBBEntry_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
