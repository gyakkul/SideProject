// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TimeSynchronizationSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimeSynchronizationSource() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	TIMEMANAGEMENT_API UClass* Z_Construct_UClass_UTimeSynchronizationSource();
	TIMEMANAGEMENT_API UClass* Z_Construct_UClass_UTimeSynchronizationSource_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TimeManagement();
// End Cross Module References
	void UTimeSynchronizationSource::StaticRegisterNativesUTimeSynchronizationSource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTimeSynchronizationSource);
	UClass* Z_Construct_UClass_UTimeSynchronizationSource_NoRegister()
	{
		return UTimeSynchronizationSource::StaticClass();
	}
	struct Z_Construct_UClass_UTimeSynchronizationSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseForSynchronization_MetaData[];
#endif
		static void NewProp_bUseForSynchronization_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseForSynchronization;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameOffset_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FrameOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTimeSynchronizationSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TimeManagement,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimeSynchronizationSource_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for sources to be used for time synchronization.\n *\n * Subclasses don't need to directly contain data, nor provide access to the\n * data in any way (although they may).\n *\n * Currently, Synchronization does not work on the subframe level.\n */" },
		{ "IncludePath", "TimeSynchronizationSource.h" },
		{ "ModuleRelativePath", "Public/TimeSynchronizationSource.h" },
		{ "ToolTip", "Base class for sources to be used for time synchronization.\n\nSubclasses don't need to directly contain data, nor provide access to the\ndata in any way (although they may).\n\nCurrently, Synchronization does not work on the subframe level." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimeSynchronizationSource_Statics::NewProp_bUseForSynchronization_MetaData[] = {
		{ "Category", "Synchronization" },
		{ "Comment", "/** Whether or not this source should be considered when establishing synchronization. */" },
		{ "ModuleRelativePath", "Public/TimeSynchronizationSource.h" },
		{ "ToolTip", "Whether or not this source should be considered when establishing synchronization." },
	};
#endif
	void Z_Construct_UClass_UTimeSynchronizationSource_Statics::NewProp_bUseForSynchronization_SetBit(void* Obj)
	{
		((UTimeSynchronizationSource*)Obj)->bUseForSynchronization = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTimeSynchronizationSource_Statics::NewProp_bUseForSynchronization = { "bUseForSynchronization", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTimeSynchronizationSource), &Z_Construct_UClass_UTimeSynchronizationSource_Statics::NewProp_bUseForSynchronization_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTimeSynchronizationSource_Statics::NewProp_bUseForSynchronization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimeSynchronizationSource_Statics::NewProp_bUseForSynchronization_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimeSynchronizationSource_Statics::NewProp_FrameOffset_MetaData[] = {
		{ "Category", "Synchronization" },
		{ "Comment", "/**\n\x09 * An additional offset in frames (relative to this source's frame rate) that should used.\n\x09 * This is mainly useful to help correct discrepancies between the reported Sample Times\n\x09 * and how the samples actually line up relative to other sources.\n\x09 */" },
		{ "ModuleRelativePath", "Public/TimeSynchronizationSource.h" },
		{ "ToolTip", "An additional offset in frames (relative to this source's frame rate) that should used.\nThis is mainly useful to help correct discrepancies between the reported Sample Times\nand how the samples actually line up relative to other sources." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTimeSynchronizationSource_Statics::NewProp_FrameOffset = { "FrameOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTimeSynchronizationSource, FrameOffset), METADATA_PARAMS(Z_Construct_UClass_UTimeSynchronizationSource_Statics::NewProp_FrameOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimeSynchronizationSource_Statics::NewProp_FrameOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTimeSynchronizationSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimeSynchronizationSource_Statics::NewProp_bUseForSynchronization,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimeSynchronizationSource_Statics::NewProp_FrameOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTimeSynchronizationSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTimeSynchronizationSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTimeSynchronizationSource_Statics::ClassParams = {
		&UTimeSynchronizationSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTimeSynchronizationSource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTimeSynchronizationSource_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTimeSynchronizationSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTimeSynchronizationSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTimeSynchronizationSource()
	{
		if (!Z_Registration_Info_UClass_UTimeSynchronizationSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTimeSynchronizationSource.OuterSingleton, Z_Construct_UClass_UTimeSynchronizationSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTimeSynchronizationSource.OuterSingleton;
	}
	template<> TIMEMANAGEMENT_API UClass* StaticClass<UTimeSynchronizationSource>()
	{
		return UTimeSynchronizationSource::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTimeSynchronizationSource);
	UTimeSynchronizationSource::~UTimeSynchronizationSource() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TimeManagement_Public_TimeSynchronizationSource_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TimeManagement_Public_TimeSynchronizationSource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTimeSynchronizationSource, UTimeSynchronizationSource::StaticClass, TEXT("UTimeSynchronizationSource"), &Z_Registration_Info_UClass_UTimeSynchronizationSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTimeSynchronizationSource), 3858899040U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TimeManagement_Public_TimeSynchronizationSource_h_1594603553(TEXT("/Script/TimeManagement"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TimeManagement_Public_TimeSynchronizationSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TimeManagement_Public_TimeSynchronizationSource_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
