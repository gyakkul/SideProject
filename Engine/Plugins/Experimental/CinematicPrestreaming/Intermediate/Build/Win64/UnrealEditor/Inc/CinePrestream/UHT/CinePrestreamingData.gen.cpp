// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CinePrestreamingData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCinePrestreamingData() {}
// Cross Module References
	CINEMATICPRESTREAMING_API UClass* Z_Construct_UClass_UCinePrestreamingData();
	CINEMATICPRESTREAMING_API UClass* Z_Construct_UClass_UCinePrestreamingData_NoRegister();
	CINEMATICPRESTREAMING_API UScriptStruct* Z_Construct_UScriptStruct_FCinePrestreamingNaniteData();
	CINEMATICPRESTREAMING_API UScriptStruct* Z_Construct_UScriptStruct_FCinePrestreamingVTData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	UPackage* Z_Construct_UPackage__Script_CinematicPrestreaming();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CinePrestreamingVTData;
class UScriptStruct* FCinePrestreamingVTData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CinePrestreamingVTData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CinePrestreamingVTData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCinePrestreamingVTData, (UObject*)Z_Construct_UPackage__Script_CinematicPrestreaming(), TEXT("CinePrestreamingVTData"));
	}
	return Z_Registration_Info_UScriptStruct_CinePrestreamingVTData.OuterSingleton;
}
template<> CINEMATICPRESTREAMING_API UScriptStruct* StaticStruct<FCinePrestreamingVTData>()
{
	return FCinePrestreamingVTData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCinePrestreamingVTData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FFInt64PropertyParams NewProp_PageIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PageIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PageIds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCinePrestreamingVTData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CinePrestreamingData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCinePrestreamingVTData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCinePrestreamingVTData>();
	}
	const UECodeGen_Private::FFInt64PropertyParams Z_Construct_UScriptStruct_FCinePrestreamingVTData_Statics::NewProp_PageIds_Inner = { "PageIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCinePrestreamingVTData_Statics::NewProp_PageIds_MetaData[] = {
		{ "Category", "Cinematic Prestreaming" },
		{ "ModuleRelativePath", "Public/CinePrestreamingData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCinePrestreamingVTData_Statics::NewProp_PageIds = { "PageIds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCinePrestreamingVTData, PageIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCinePrestreamingVTData_Statics::NewProp_PageIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCinePrestreamingVTData_Statics::NewProp_PageIds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCinePrestreamingVTData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCinePrestreamingVTData_Statics::NewProp_PageIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCinePrestreamingVTData_Statics::NewProp_PageIds,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCinePrestreamingVTData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CinematicPrestreaming,
		nullptr,
		&NewStructOps,
		"CinePrestreamingVTData",
		sizeof(FCinePrestreamingVTData),
		alignof(FCinePrestreamingVTData),
		Z_Construct_UScriptStruct_FCinePrestreamingVTData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCinePrestreamingVTData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCinePrestreamingVTData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCinePrestreamingVTData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCinePrestreamingVTData()
	{
		if (!Z_Registration_Info_UScriptStruct_CinePrestreamingVTData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CinePrestreamingVTData.InnerSingleton, Z_Construct_UScriptStruct_FCinePrestreamingVTData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CinePrestreamingVTData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CinePrestreamingNaniteData;
class UScriptStruct* FCinePrestreamingNaniteData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CinePrestreamingNaniteData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CinePrestreamingNaniteData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCinePrestreamingNaniteData, (UObject*)Z_Construct_UPackage__Script_CinematicPrestreaming(), TEXT("CinePrestreamingNaniteData"));
	}
	return Z_Registration_Info_UScriptStruct_CinePrestreamingNaniteData.OuterSingleton;
}
template<> CINEMATICPRESTREAMING_API UScriptStruct* StaticStruct<FCinePrestreamingNaniteData>()
{
	return FCinePrestreamingNaniteData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCinePrestreamingNaniteData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_RequestData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequestData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RequestData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCinePrestreamingNaniteData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CinePrestreamingData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCinePrestreamingNaniteData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCinePrestreamingNaniteData>();
	}
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FCinePrestreamingNaniteData_Statics::NewProp_RequestData_Inner = { "RequestData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCinePrestreamingNaniteData_Statics::NewProp_RequestData_MetaData[] = {
		{ "Category", "Cinematic Prestreaming" },
		{ "ModuleRelativePath", "Public/CinePrestreamingData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCinePrestreamingNaniteData_Statics::NewProp_RequestData = { "RequestData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCinePrestreamingNaniteData, RequestData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCinePrestreamingNaniteData_Statics::NewProp_RequestData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCinePrestreamingNaniteData_Statics::NewProp_RequestData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCinePrestreamingNaniteData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCinePrestreamingNaniteData_Statics::NewProp_RequestData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCinePrestreamingNaniteData_Statics::NewProp_RequestData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCinePrestreamingNaniteData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CinematicPrestreaming,
		nullptr,
		&NewStructOps,
		"CinePrestreamingNaniteData",
		sizeof(FCinePrestreamingNaniteData),
		alignof(FCinePrestreamingNaniteData),
		Z_Construct_UScriptStruct_FCinePrestreamingNaniteData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCinePrestreamingNaniteData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCinePrestreamingNaniteData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCinePrestreamingNaniteData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCinePrestreamingNaniteData()
	{
		if (!Z_Registration_Info_UScriptStruct_CinePrestreamingNaniteData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CinePrestreamingNaniteData.InnerSingleton, Z_Construct_UScriptStruct_FCinePrestreamingNaniteData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CinePrestreamingNaniteData.InnerSingleton;
	}
	void UCinePrestreamingData::StaticRegisterNativesUCinePrestreamingData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCinePrestreamingData);
	UClass* Z_Construct_UClass_UCinePrestreamingData_NoRegister()
	{
		return UCinePrestreamingData::StaticClass();
	}
	struct Z_Construct_UClass_UCinePrestreamingData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Times_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Times_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Times;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VirtualTextureDatas_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VirtualTextureDatas_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VirtualTextureDatas;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NaniteDatas_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NaniteDatas_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NaniteDatas;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecordedTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RecordedTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecordedResolution_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RecordedResolution;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCinePrestreamingData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CinematicPrestreaming,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCinePrestreamingData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CinePrestreamingData.h" },
		{ "ModuleRelativePath", "Public/CinePrestreamingData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCinePrestreamingData_Statics::NewProp_Times_Inner = { "Times", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCinePrestreamingData_Statics::NewProp_Times_MetaData[] = {
		{ "Category", "Cinematic Prestreaming" },
		{ "ModuleRelativePath", "Public/CinePrestreamingData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCinePrestreamingData_Statics::NewProp_Times = { "Times", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCinePrestreamingData, Times), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCinePrestreamingData_Statics::NewProp_Times_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCinePrestreamingData_Statics::NewProp_Times_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCinePrestreamingData_Statics::NewProp_VirtualTextureDatas_Inner = { "VirtualTextureDatas", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCinePrestreamingVTData, METADATA_PARAMS(nullptr, 0) }; // 3539000521
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCinePrestreamingData_Statics::NewProp_VirtualTextureDatas_MetaData[] = {
		{ "Category", "Cinematic Prestreaming" },
		{ "ModuleRelativePath", "Public/CinePrestreamingData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCinePrestreamingData_Statics::NewProp_VirtualTextureDatas = { "VirtualTextureDatas", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCinePrestreamingData, VirtualTextureDatas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCinePrestreamingData_Statics::NewProp_VirtualTextureDatas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCinePrestreamingData_Statics::NewProp_VirtualTextureDatas_MetaData)) }; // 3539000521
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCinePrestreamingData_Statics::NewProp_NaniteDatas_Inner = { "NaniteDatas", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCinePrestreamingNaniteData, METADATA_PARAMS(nullptr, 0) }; // 3795075599
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCinePrestreamingData_Statics::NewProp_NaniteDatas_MetaData[] = {
		{ "Category", "Cinematic Prestreaming" },
		{ "ModuleRelativePath", "Public/CinePrestreamingData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCinePrestreamingData_Statics::NewProp_NaniteDatas = { "NaniteDatas", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCinePrestreamingData, NaniteDatas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCinePrestreamingData_Statics::NewProp_NaniteDatas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCinePrestreamingData_Statics::NewProp_NaniteDatas_MetaData)) }; // 3795075599
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCinePrestreamingData_Statics::NewProp_RecordedTime_MetaData[] = {
		{ "Category", "Cinematic Prestreaming" },
		{ "Comment", "/** Time that this asset was generated (in UTC). Used to give better context about how up to date an asset is as they are hard to preview. */" },
		{ "ModuleRelativePath", "Public/CinePrestreamingData.h" },
		{ "ToolTip", "Time that this asset was generated (in UTC). Used to give better context about how up to date an asset is as they are hard to preview." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCinePrestreamingData_Statics::NewProp_RecordedTime = { "RecordedTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCinePrestreamingData, RecordedTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UClass_UCinePrestreamingData_Statics::NewProp_RecordedTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCinePrestreamingData_Statics::NewProp_RecordedTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCinePrestreamingData_Statics::NewProp_RecordedResolution_MetaData[] = {
		{ "Category", "Cinematic Prestreaming" },
		{ "Comment", "/** What resolution was this asset generated at? Recordings are resolution dependent as different mips will be chosen for different resolutions. */" },
		{ "ModuleRelativePath", "Public/CinePrestreamingData.h" },
		{ "ToolTip", "What resolution was this asset generated at? Recordings are resolution dependent as different mips will be chosen for different resolutions." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCinePrestreamingData_Statics::NewProp_RecordedResolution = { "RecordedResolution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCinePrestreamingData, RecordedResolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UCinePrestreamingData_Statics::NewProp_RecordedResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCinePrestreamingData_Statics::NewProp_RecordedResolution_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCinePrestreamingData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCinePrestreamingData_Statics::NewProp_Times_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCinePrestreamingData_Statics::NewProp_Times,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCinePrestreamingData_Statics::NewProp_VirtualTextureDatas_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCinePrestreamingData_Statics::NewProp_VirtualTextureDatas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCinePrestreamingData_Statics::NewProp_NaniteDatas_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCinePrestreamingData_Statics::NewProp_NaniteDatas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCinePrestreamingData_Statics::NewProp_RecordedTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCinePrestreamingData_Statics::NewProp_RecordedResolution,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCinePrestreamingData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCinePrestreamingData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCinePrestreamingData_Statics::ClassParams = {
		&UCinePrestreamingData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCinePrestreamingData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCinePrestreamingData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCinePrestreamingData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCinePrestreamingData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCinePrestreamingData()
	{
		if (!Z_Registration_Info_UClass_UCinePrestreamingData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCinePrestreamingData.OuterSingleton, Z_Construct_UClass_UCinePrestreamingData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCinePrestreamingData.OuterSingleton;
	}
	template<> CINEMATICPRESTREAMING_API UClass* StaticClass<UCinePrestreamingData>()
	{
		return UCinePrestreamingData::StaticClass();
	}
	UCinePrestreamingData::UCinePrestreamingData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCinePrestreamingData);
	UCinePrestreamingData::~UCinePrestreamingData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreaming_Public_CinePrestreamingData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreaming_Public_CinePrestreamingData_h_Statics::ScriptStructInfo[] = {
		{ FCinePrestreamingVTData::StaticStruct, Z_Construct_UScriptStruct_FCinePrestreamingVTData_Statics::NewStructOps, TEXT("CinePrestreamingVTData"), &Z_Registration_Info_UScriptStruct_CinePrestreamingVTData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCinePrestreamingVTData), 3539000521U) },
		{ FCinePrestreamingNaniteData::StaticStruct, Z_Construct_UScriptStruct_FCinePrestreamingNaniteData_Statics::NewStructOps, TEXT("CinePrestreamingNaniteData"), &Z_Registration_Info_UScriptStruct_CinePrestreamingNaniteData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCinePrestreamingNaniteData), 3795075599U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreaming_Public_CinePrestreamingData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCinePrestreamingData, UCinePrestreamingData::StaticClass, TEXT("UCinePrestreamingData"), &Z_Registration_Info_UClass_UCinePrestreamingData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCinePrestreamingData), 2684504452U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreaming_Public_CinePrestreamingData_h_4018298827(TEXT("/Script/CinematicPrestreaming"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreaming_Public_CinePrestreamingData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreaming_Public_CinePrestreamingData_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreaming_Public_CinePrestreamingData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreaming_Public_CinePrestreamingData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
