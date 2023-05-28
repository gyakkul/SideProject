// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkTimeSynchronizationSource.h"
#include "LiveLinkTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkTimeSynchronizationSource() {}
// Cross Module References
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkTimeSynchronizationSource();
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkTimeSynchronizationSource_NoRegister();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectName();
	TIMEMANAGEMENT_API UClass* Z_Construct_UClass_UTimeSynchronizationSource();
	UPackage* Z_Construct_UPackage__Script_LiveLink();
// End Cross Module References
	void ULiveLinkTimeSynchronizationSource::StaticRegisterNativesULiveLinkTimeSynchronizationSource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkTimeSynchronizationSource);
	UClass* Z_Construct_UClass_ULiveLinkTimeSynchronizationSource_NoRegister()
	{
		return ULiveLinkTimeSynchronizationSource::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkTimeSynchronizationSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubjectName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkTimeSynchronizationSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTimeSynchronizationSource,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkTimeSynchronizationSource_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LiveLinkTimeSynchronizationSource.h" },
		{ "ModuleRelativePath", "Public/LiveLinkTimeSynchronizationSource.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkTimeSynchronizationSource_Statics::NewProp_SubjectName_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/LiveLinkTimeSynchronizationSource.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkTimeSynchronizationSource_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkTimeSynchronizationSource, SubjectName), Z_Construct_UScriptStruct_FLiveLinkSubjectName, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkTimeSynchronizationSource_Statics::NewProp_SubjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTimeSynchronizationSource_Statics::NewProp_SubjectName_MetaData)) }; // 930695248
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkTimeSynchronizationSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkTimeSynchronizationSource_Statics::NewProp_SubjectName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkTimeSynchronizationSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkTimeSynchronizationSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkTimeSynchronizationSource_Statics::ClassParams = {
		&ULiveLinkTimeSynchronizationSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULiveLinkTimeSynchronizationSource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTimeSynchronizationSource_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkTimeSynchronizationSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTimeSynchronizationSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkTimeSynchronizationSource()
	{
		if (!Z_Registration_Info_UClass_ULiveLinkTimeSynchronizationSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkTimeSynchronizationSource.OuterSingleton, Z_Construct_UClass_ULiveLinkTimeSynchronizationSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveLinkTimeSynchronizationSource.OuterSingleton;
	}
	template<> LIVELINK_API UClass* StaticClass<ULiveLinkTimeSynchronizationSource>()
	{
		return ULiveLinkTimeSynchronizationSource::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkTimeSynchronizationSource);
	ULiveLinkTimeSynchronizationSource::~ULiveLinkTimeSynchronizationSource() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimeSynchronizationSource_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimeSynchronizationSource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkTimeSynchronizationSource, ULiveLinkTimeSynchronizationSource::StaticClass, TEXT("ULiveLinkTimeSynchronizationSource"), &Z_Registration_Info_UClass_ULiveLinkTimeSynchronizationSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkTimeSynchronizationSource), 3893667563U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimeSynchronizationSource_h_3252615236(TEXT("/Script/LiveLink"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimeSynchronizationSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimeSynchronizationSource_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
