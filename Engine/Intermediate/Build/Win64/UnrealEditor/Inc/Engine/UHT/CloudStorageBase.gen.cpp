// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/CloudStorageBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCloudStorageBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCloudStorageBase();
	ENGINE_API UClass* Z_Construct_UClass_UCloudStorageBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPlatformInterfaceBase();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECloudStorageDelegate();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECloudStorageDelegate;
	static UEnum* ECloudStorageDelegate_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECloudStorageDelegate.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECloudStorageDelegate.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ECloudStorageDelegate, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ECloudStorageDelegate"));
		}
		return Z_Registration_Info_UEnum_ECloudStorageDelegate.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ECloudStorageDelegate>()
	{
		return ECloudStorageDelegate_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ECloudStorageDelegate_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ECloudStorageDelegate_Statics::Enumerators[] = {
		{ "CSD_KeyValueReadComplete", (int64)CSD_KeyValueReadComplete },
		{ "CSD_KeyValueWriteComplete", (int64)CSD_KeyValueWriteComplete },
		{ "CSD_ValueChanged", (int64)CSD_ValueChanged },
		{ "CSD_DocumentQueryComplete", (int64)CSD_DocumentQueryComplete },
		{ "CSD_DocumentReadComplete", (int64)CSD_DocumentReadComplete },
		{ "CSD_DocumentWriteComplete", (int64)CSD_DocumentWriteComplete },
		{ "CSD_DocumentConflictDetected", (int64)CSD_DocumentConflictDetected },
		{ "CSD_MAX", (int64)CSD_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ECloudStorageDelegate_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** All the types of delegate callbacks that a CloudStorage subclass may receive from C++ */" },
		{ "CSD_DocumentConflictDetected.Comment", "/** Desc: Called when multiple machines have updated the document, and script needs to determine which one to use, via the Resolve functions. */" },
		{ "CSD_DocumentConflictDetected.Name", "CSD_DocumentConflictDetected" },
		{ "CSD_DocumentConflictDetected.ToolTip", "Desc: Called when multiple machines have updated the document, and script needs to determine which one to use, via the Resolve functions." },
		{ "CSD_DocumentQueryComplete.Name", "CSD_DocumentQueryComplete" },
		{ "CSD_DocumentReadComplete.Name", "CSD_DocumentReadComplete" },
		{ "CSD_DocumentWriteComplete.Name", "CSD_DocumentWriteComplete" },
		{ "CSD_KeyValueReadComplete.Comment", "// @todo: Fill in the result descriptions for these (and the other PI subclasses)\n" },
		{ "CSD_KeyValueReadComplete.Name", "CSD_KeyValueReadComplete" },
		{ "CSD_KeyValueReadComplete.ToolTip", "@todo: Fill in the result descriptions for these (and the other PI subclasses)" },
		{ "CSD_KeyValueWriteComplete.Name", "CSD_KeyValueWriteComplete" },
		{ "CSD_MAX.Name", "CSD_MAX" },
		{ "CSD_ValueChanged.Name", "CSD_ValueChanged" },
		{ "ModuleRelativePath", "Classes/Engine/CloudStorageBase.h" },
		{ "ToolTip", "All the types of delegate callbacks that a CloudStorage subclass may receive from C++" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ECloudStorageDelegate_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ECloudStorageDelegate",
		"ECloudStorageDelegate",
		Z_Construct_UEnum_Engine_ECloudStorageDelegate_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ECloudStorageDelegate_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ECloudStorageDelegate_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ECloudStorageDelegate_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ECloudStorageDelegate()
	{
		if (!Z_Registration_Info_UEnum_ECloudStorageDelegate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECloudStorageDelegate.InnerSingleton, Z_Construct_UEnum_Engine_ECloudStorageDelegate_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECloudStorageDelegate.InnerSingleton;
	}
	void UCloudStorageBase::StaticRegisterNativesUCloudStorageBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCloudStorageBase);
	UClass* Z_Construct_UClass_UCloudStorageBase_NoRegister()
	{
		return UCloudStorageBase::StaticClass();
	}
	struct Z_Construct_UClass_UCloudStorageBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LocalCloudFiles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalCloudFiles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LocalCloudFiles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSuppressDelegateCalls_MetaData[];
#endif
		static void NewProp_bSuppressDelegateCalls_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuppressDelegateCalls;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCloudStorageBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlatformInterfaceBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCloudStorageBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for the various platform interface classes.\n */" },
		{ "IncludePath", "Engine/CloudStorageBase.h" },
		{ "ModuleRelativePath", "Classes/Engine/CloudStorageBase.h" },
		{ "ToolTip", "Base class for the various platform interface classes." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCloudStorageBase_Statics::NewProp_LocalCloudFiles_Inner = { "LocalCloudFiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCloudStorageBase_Statics::NewProp_LocalCloudFiles_MetaData[] = {
		{ "Comment", "/** When using local storage (aka \"cloud emulation\"), this maintains a list of the file paths. */" },
		{ "ModuleRelativePath", "Classes/Engine/CloudStorageBase.h" },
		{ "ToolTip", "When using local storage (aka \"cloud emulation\"), this maintains a list of the file paths." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCloudStorageBase_Statics::NewProp_LocalCloudFiles = { "LocalCloudFiles", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCloudStorageBase, LocalCloudFiles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCloudStorageBase_Statics::NewProp_LocalCloudFiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCloudStorageBase_Statics::NewProp_LocalCloudFiles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCloudStorageBase_Statics::NewProp_bSuppressDelegateCalls_MetaData[] = {
		{ "Comment", "/** If true, delegate callbacks should be skipped. */" },
		{ "ModuleRelativePath", "Classes/Engine/CloudStorageBase.h" },
		{ "ToolTip", "If true, delegate callbacks should be skipped." },
	};
#endif
	void Z_Construct_UClass_UCloudStorageBase_Statics::NewProp_bSuppressDelegateCalls_SetBit(void* Obj)
	{
		((UCloudStorageBase*)Obj)->bSuppressDelegateCalls = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCloudStorageBase_Statics::NewProp_bSuppressDelegateCalls = { "bSuppressDelegateCalls", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UCloudStorageBase), &Z_Construct_UClass_UCloudStorageBase_Statics::NewProp_bSuppressDelegateCalls_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCloudStorageBase_Statics::NewProp_bSuppressDelegateCalls_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCloudStorageBase_Statics::NewProp_bSuppressDelegateCalls_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCloudStorageBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCloudStorageBase_Statics::NewProp_LocalCloudFiles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCloudStorageBase_Statics::NewProp_LocalCloudFiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCloudStorageBase_Statics::NewProp_bSuppressDelegateCalls,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCloudStorageBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCloudStorageBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCloudStorageBase_Statics::ClassParams = {
		&UCloudStorageBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCloudStorageBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCloudStorageBase_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UCloudStorageBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCloudStorageBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCloudStorageBase()
	{
		if (!Z_Registration_Info_UClass_UCloudStorageBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCloudStorageBase.OuterSingleton, Z_Construct_UClass_UCloudStorageBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCloudStorageBase.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UCloudStorageBase>()
	{
		return UCloudStorageBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCloudStorageBase);
	UCloudStorageBase::~UCloudStorageBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CloudStorageBase_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CloudStorageBase_h_Statics::EnumInfo[] = {
		{ ECloudStorageDelegate_StaticEnum, TEXT("ECloudStorageDelegate"), &Z_Registration_Info_UEnum_ECloudStorageDelegate, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1985907995U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CloudStorageBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCloudStorageBase, UCloudStorageBase::StaticClass, TEXT("UCloudStorageBase"), &Z_Registration_Info_UClass_UCloudStorageBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCloudStorageBase), 2138994833U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CloudStorageBase_h_1749443249(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CloudStorageBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CloudStorageBase_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CloudStorageBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CloudStorageBase_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
