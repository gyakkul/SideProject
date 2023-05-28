// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/UserDefinedStruct.h"
#include "Serialization/StructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserDefinedStruct() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UStructCookedMetaData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UUserDefinedStruct();
	ENGINE_API UClass* Z_Construct_UClass_UUserDefinedStruct_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EUserDefinedStructureStatus();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUserDefinedStructureStatus;
	static UEnum* EUserDefinedStructureStatus_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUserDefinedStructureStatus.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUserDefinedStructureStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EUserDefinedStructureStatus, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EUserDefinedStructureStatus"));
		}
		return Z_Registration_Info_UEnum_EUserDefinedStructureStatus.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EUserDefinedStructureStatus>()
	{
		return EUserDefinedStructureStatus_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EUserDefinedStructureStatus_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EUserDefinedStructureStatus_Statics::Enumerators[] = {
		{ "UDSS_UpToDate", (int64)UDSS_UpToDate },
		{ "UDSS_Dirty", (int64)UDSS_Dirty },
		{ "UDSS_Error", (int64)UDSS_Error },
		{ "UDSS_Duplicate", (int64)UDSS_Duplicate },
		{ "UDSS_MAX", (int64)UDSS_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EUserDefinedStructureStatus_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/UserDefinedStruct.h" },
		{ "UDSS_Dirty.Comment", "/** Struct has been modified but not recompiled. */" },
		{ "UDSS_Dirty.Name", "UDSS_Dirty" },
		{ "UDSS_Dirty.ToolTip", "Struct has been modified but not recompiled." },
		{ "UDSS_Duplicate.Comment", "/** Struct is a duplicate, the original one was changed. */" },
		{ "UDSS_Duplicate.Name", "UDSS_Duplicate" },
		{ "UDSS_Duplicate.ToolTip", "Struct is a duplicate, the original one was changed." },
		{ "UDSS_Error.Comment", "/** Struct tried but failed to be compiled. */" },
		{ "UDSS_Error.Name", "UDSS_Error" },
		{ "UDSS_Error.ToolTip", "Struct tried but failed to be compiled." },
		{ "UDSS_MAX.Name", "UDSS_MAX" },
		{ "UDSS_UpToDate.Comment", "/** Struct is in an unknown state. */" },
		{ "UDSS_UpToDate.Name", "UDSS_UpToDate" },
		{ "UDSS_UpToDate.ToolTip", "Struct is in an unknown state." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EUserDefinedStructureStatus_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EUserDefinedStructureStatus",
		"EUserDefinedStructureStatus",
		Z_Construct_UEnum_Engine_EUserDefinedStructureStatus_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EUserDefinedStructureStatus_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EUserDefinedStructureStatus_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EUserDefinedStructureStatus_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EUserDefinedStructureStatus()
	{
		if (!Z_Registration_Info_UEnum_EUserDefinedStructureStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUserDefinedStructureStatus.InnerSingleton, Z_Construct_UEnum_Engine_EUserDefinedStructureStatus_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUserDefinedStructureStatus.InnerSingleton;
	}
	void UUserDefinedStruct::StaticRegisterNativesUUserDefinedStruct()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUserDefinedStruct);
	UClass* Z_Construct_UClass_UUserDefinedStruct_NoRegister()
	{
		return UUserDefinedStruct::StaticClass();
	}
	struct Z_Construct_UClass_UUserDefinedStruct_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryStruct_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_PrimaryStruct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EditorData;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Status;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedCookedMetaDataPtr_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CachedCookedMetaDataPtr;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUserDefinedStruct_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UScriptStruct,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserDefinedStruct_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/UserDefinedStruct.h" },
		{ "ModuleRelativePath", "Classes/Engine/UserDefinedStruct.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_PrimaryStruct_MetaData[] = {
		{ "Comment", "/** The original struct, when current struct isn't a temporary duplicate, the field should be null */" },
		{ "ModuleRelativePath", "Classes/Engine/UserDefinedStruct.h" },
		{ "ToolTip", "The original struct, when current struct isn't a temporary duplicate, the field should be null" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_PrimaryStruct = { "PrimaryStruct", nullptr, (EPropertyFlags)0x0014000800002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUserDefinedStruct, PrimaryStruct), Z_Construct_UClass_UUserDefinedStruct_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_PrimaryStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_PrimaryStruct_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/UserDefinedStruct.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUserDefinedStruct, ErrorMessage), METADATA_PARAMS(Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_ErrorMessage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_EditorData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/UserDefinedStruct.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_EditorData = { "EditorData", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUserDefinedStruct, EditorData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_EditorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_EditorData_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_Status_MetaData[] = {
		{ "Comment", "/** Status of this struct, outside of the editor it is assumed to always be UpToDate */" },
		{ "ModuleRelativePath", "Classes/Engine/UserDefinedStruct.h" },
		{ "ToolTip", "Status of this struct, outside of the editor it is assumed to always be UpToDate" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUserDefinedStruct, Status), Z_Construct_UEnum_Engine_EUserDefinedStructureStatus, METADATA_PARAMS(Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_Status_MetaData)) }; // 1848193700
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_Guid_MetaData[] = {
		{ "Comment", "/** Uniquely identifies this specific user struct */" },
		{ "ModuleRelativePath", "Classes/Engine/UserDefinedStruct.h" },
		{ "ToolTip", "Uniquely identifies this specific user struct" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUserDefinedStruct, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_Guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_Guid_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_CachedCookedMetaDataPtr_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/UserDefinedStruct.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_CachedCookedMetaDataPtr = { "CachedCookedMetaDataPtr", nullptr, (EPropertyFlags)0x0044000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUserDefinedStruct, CachedCookedMetaDataPtr), Z_Construct_UClass_UStructCookedMetaData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_CachedCookedMetaDataPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_CachedCookedMetaDataPtr_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUserDefinedStruct_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_PrimaryStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_ErrorMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_EditorData,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_Status,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_Guid,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_CachedCookedMetaDataPtr,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUserDefinedStruct_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUserDefinedStruct>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUserDefinedStruct_Statics::ClassParams = {
		&UUserDefinedStruct::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUserDefinedStruct_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUserDefinedStruct_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUserDefinedStruct_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUserDefinedStruct_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUserDefinedStruct()
	{
		if (!Z_Registration_Info_UClass_UUserDefinedStruct.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUserDefinedStruct.OuterSingleton, Z_Construct_UClass_UUserDefinedStruct_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUserDefinedStruct.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UUserDefinedStruct>()
	{
		return UUserDefinedStruct::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUserDefinedStruct);
	UUserDefinedStruct::~UUserDefinedStruct() {}
	IMPLEMENT_FARCHIVE_SERIALIZER(UUserDefinedStruct)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedStruct_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedStruct_h_Statics::EnumInfo[] = {
		{ EUserDefinedStructureStatus_StaticEnum, TEXT("EUserDefinedStructureStatus"), &Z_Registration_Info_UEnum_EUserDefinedStructureStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1848193700U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedStruct_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUserDefinedStruct, UUserDefinedStruct::StaticClass, TEXT("UUserDefinedStruct"), &Z_Registration_Info_UClass_UUserDefinedStruct, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUserDefinedStruct), 1196749959U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedStruct_h_2066169460(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedStruct_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedStruct_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedStruct_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedStruct_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
