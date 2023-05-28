// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ILevelSequenceMetaData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeILevelSequenceMetaData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceMetaData();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceMetaData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LevelSequence();
// End Cross Module References
	void ULevelSequenceMetaData::StaticRegisterNativesULevelSequenceMetaData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelSequenceMetaData);
	UClass* Z_Construct_UClass_ULevelSequenceMetaData_NoRegister()
	{
		return ULevelSequenceMetaData::StaticClass();
	}
	struct Z_Construct_UClass_ULevelSequenceMetaData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelSequenceMetaData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceMetaData_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ILevelSequenceMetaData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelSequenceMetaData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ILevelSequenceMetaData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelSequenceMetaData_Statics::ClassParams = {
		&ULevelSequenceMetaData::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceMetaData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceMetaData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelSequenceMetaData()
	{
		if (!Z_Registration_Info_UClass_ULevelSequenceMetaData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelSequenceMetaData.OuterSingleton, Z_Construct_UClass_ULevelSequenceMetaData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelSequenceMetaData.OuterSingleton;
	}
	template<> LEVELSEQUENCE_API UClass* StaticClass<ULevelSequenceMetaData>()
	{
		return ULevelSequenceMetaData::StaticClass();
	}
	ULevelSequenceMetaData::ULevelSequenceMetaData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSequenceMetaData);
	ULevelSequenceMetaData::~ULevelSequenceMetaData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_ILevelSequenceMetaData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_ILevelSequenceMetaData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelSequenceMetaData, ULevelSequenceMetaData::StaticClass, TEXT("ULevelSequenceMetaData"), &Z_Registration_Info_UClass_ULevelSequenceMetaData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelSequenceMetaData), 3332512596U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_ILevelSequenceMetaData_h_3745652043(TEXT("/Script/LevelSequence"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_ILevelSequenceMetaData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_ILevelSequenceMetaData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
