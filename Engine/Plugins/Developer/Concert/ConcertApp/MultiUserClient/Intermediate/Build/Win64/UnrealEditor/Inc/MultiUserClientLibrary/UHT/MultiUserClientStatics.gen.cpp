// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiUserClientStatics.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiUserClientStatics() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	MULTIUSERCLIENTLIBRARY_API UClass* Z_Construct_UClass_UMultiUserClientStatics();
	MULTIUSERCLIENTLIBRARY_API UClass* Z_Construct_UClass_UMultiUserClientStatics_NoRegister();
	MULTIUSERCLIENTLIBRARY_API UClass* Z_Construct_UClass_UMultiUserClientSyncDatabase();
	MULTIUSERCLIENTLIBRARY_API UClass* Z_Construct_UClass_UMultiUserClientSyncDatabase_NoRegister();
	MULTIUSERCLIENTLIBRARY_API UEnum* Z_Construct_UEnum_MultiUserClientLibrary_EMultiUserConnectionError();
	MULTIUSERCLIENTLIBRARY_API UEnum* Z_Construct_UEnum_MultiUserClientLibrary_EMultiUserConnectionStatus();
	MULTIUSERCLIENTLIBRARY_API UEnum* Z_Construct_UEnum_MultiUserClientLibrary_EMultiUserSourceValidationMode();
	MULTIUSERCLIENTLIBRARY_API UFunction* Z_Construct_UDelegateFunction_MultiUserClientLibrary_OnPackageSavedSignature__DelegateSignature();
	MULTIUSERCLIENTLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FMultiUserClientConfig();
	MULTIUSERCLIENTLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FMultiUserClientInfo();
	MULTIUSERCLIENTLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FMultiUserConnectionError();
	UPackage* Z_Construct_UPackage__Script_MultiUserClientLibrary();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_MultiUserClientLibrary_OnPackageSavedSignature__DelegateSignature_Statics
	{
		struct _Script_MultiUserClientLibrary_eventOnPackageSavedSignature_Parms
		{
			FName PackageName;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_PackageName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_MultiUserClientLibrary_OnPackageSavedSignature__DelegateSignature_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MultiUserClientLibrary_eventOnPackageSavedSignature_Parms, PackageName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MultiUserClientLibrary_OnPackageSavedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MultiUserClientLibrary_OnPackageSavedSignature__DelegateSignature_Statics::NewProp_PackageName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MultiUserClientLibrary_OnPackageSavedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate that is invoked when a package is saved. */" },
		{ "ModuleRelativePath", "Public/MultiUserClientStatics.h" },
		{ "ToolTip", "Delegate that is invoked when a package is saved." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MultiUserClientLibrary_OnPackageSavedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MultiUserClientLibrary, nullptr, "OnPackageSavedSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MultiUserClientLibrary_OnPackageSavedSignature__DelegateSignature_Statics::_Script_MultiUserClientLibrary_eventOnPackageSavedSignature_Parms), Z_Construct_UDelegateFunction_MultiUserClientLibrary_OnPackageSavedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiUserClientLibrary_OnPackageSavedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MultiUserClientLibrary_OnPackageSavedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiUserClientLibrary_OnPackageSavedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MultiUserClientLibrary_OnPackageSavedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MultiUserClientLibrary_OnPackageSavedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnPackageSavedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnPackageSavedSignature, FName PackageName)
{
	struct _Script_MultiUserClientLibrary_eventOnPackageSavedSignature_Parms
	{
		FName PackageName;
	};
	_Script_MultiUserClientLibrary_eventOnPackageSavedSignature_Parms Parms;
	Parms.PackageName=PackageName;
	OnPackageSavedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MultiUserClientInfo;
class UScriptStruct* FMultiUserClientInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MultiUserClientInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MultiUserClientInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiUserClientInfo, (UObject*)Z_Construct_UPackage__Script_MultiUserClientLibrary(), TEXT("MultiUserClientInfo"));
	}
	return Z_Registration_Info_UScriptStruct_MultiUserClientInfo.OuterSingleton;
}
template<> MULTIUSERCLIENTLIBRARY_API UScriptStruct* StaticStruct<FMultiUserClientInfo>()
{
	return FMultiUserClientInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMultiUserClientInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientEndpointId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClientEndpointId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvatarColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AvatarColor;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Tags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiUserClientInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * BP copy of FConcertSessionClientInfo\n * Holds info on a client connected through multi-user\n */" },
		{ "ModuleRelativePath", "Public/MultiUserClientStatics.h" },
		{ "ToolTip", "BP copy of FConcertSessionClientInfo\nHolds info on a client connected through multi-user" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiUserClientInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiUserClientInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiUserClientInfo_Statics::NewProp_ClientEndpointId_MetaData[] = {
		{ "Category", "Client Info" },
		{ "Comment", "/** Holds the display name of the user that owns this instance. */" },
		{ "ModuleRelativePath", "Public/MultiUserClientStatics.h" },
		{ "ToolTip", "Holds the display name of the user that owns this instance." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMultiUserClientInfo_Statics::NewProp_ClientEndpointId = { "ClientEndpointId", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMultiUserClientInfo, ClientEndpointId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiUserClientInfo_Statics::NewProp_ClientEndpointId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserClientInfo_Statics::NewProp_ClientEndpointId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiUserClientInfo_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "Client Info" },
		{ "Comment", "/** Holds the display name of the user that owns this instance. */" },
		{ "ModuleRelativePath", "Public/MultiUserClientStatics.h" },
		{ "ToolTip", "Holds the display name of the user that owns this instance." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiUserClientInfo_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMultiUserClientInfo, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiUserClientInfo_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserClientInfo_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiUserClientInfo_Statics::NewProp_AvatarColor_MetaData[] = {
		{ "Category", "Client Info" },
		{ "Comment", "/** Holds the color of the user avatar in a session. */" },
		{ "ModuleRelativePath", "Public/MultiUserClientStatics.h" },
		{ "ToolTip", "Holds the color of the user avatar in a session." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMultiUserClientInfo_Statics::NewProp_AvatarColor = { "AvatarColor", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMultiUserClientInfo, AvatarColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiUserClientInfo_Statics::NewProp_AvatarColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserClientInfo_Statics::NewProp_AvatarColor_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMultiUserClientInfo_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiUserClientInfo_Statics::NewProp_Tags_MetaData[] = {
		{ "Category", "Client Info" },
		{ "Comment", "/** Holds an array of tags that can be used for grouping and categorizing. */" },
		{ "ModuleRelativePath", "Public/MultiUserClientStatics.h" },
		{ "ToolTip", "Holds an array of tags that can be used for grouping and categorizing." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMultiUserClientInfo_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010040000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMultiUserClientInfo, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiUserClientInfo_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserClientInfo_Statics::NewProp_Tags_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMultiUserClientInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiUserClientInfo_Statics::NewProp_ClientEndpointId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiUserClientInfo_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiUserClientInfo_Statics::NewProp_AvatarColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiUserClientInfo_Statics::NewProp_Tags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiUserClientInfo_Statics::NewProp_Tags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiUserClientInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MultiUserClientLibrary,
		nullptr,
		&NewStructOps,
		"MultiUserClientInfo",
		sizeof(FMultiUserClientInfo),
		alignof(FMultiUserClientInfo),
		Z_Construct_UScriptStruct_FMultiUserClientInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserClientInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiUserClientInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserClientInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultiUserClientInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_MultiUserClientInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MultiUserClientInfo.InnerSingleton, Z_Construct_UScriptStruct_FMultiUserClientInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MultiUserClientInfo.InnerSingleton;
	}
	void UMultiUserClientSyncDatabase::StaticRegisterNativesUMultiUserClientSyncDatabase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMultiUserClientSyncDatabase);
	UClass* Z_Construct_UClass_UMultiUserClientSyncDatabase_NoRegister()
	{
		return UMultiUserClientSyncDatabase::StaticClass();
	}
	struct Z_Construct_UClass_UMultiUserClientSyncDatabase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPackageSaved_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPackageSaved;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMultiUserClientSyncDatabase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MultiUserClientLibrary,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiUserClientSyncDatabase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MultiUserClientStatics.h" },
		{ "ModuleRelativePath", "Public/MultiUserClientStatics.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiUserClientSyncDatabase_Statics::NewProp_OnPackageSaved_MetaData[] = {
		{ "Category", "Save Package Delegate" },
		{ "ModuleRelativePath", "Public/MultiUserClientStatics.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMultiUserClientSyncDatabase_Statics::NewProp_OnPackageSaved = { "OnPackageSaved", nullptr, (EPropertyFlags)0x00100000100a0001, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMultiUserClientSyncDatabase, OnPackageSaved), Z_Construct_UDelegateFunction_MultiUserClientLibrary_OnPackageSavedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMultiUserClientSyncDatabase_Statics::NewProp_OnPackageSaved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiUserClientSyncDatabase_Statics::NewProp_OnPackageSaved_MetaData)) }; // 2033782549
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMultiUserClientSyncDatabase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiUserClientSyncDatabase_Statics::NewProp_OnPackageSaved,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMultiUserClientSyncDatabase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMultiUserClientSyncDatabase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMultiUserClientSyncDatabase_Statics::ClassParams = {
		&UMultiUserClientSyncDatabase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMultiUserClientSyncDatabase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMultiUserClientSyncDatabase_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMultiUserClientSyncDatabase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiUserClientSyncDatabase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMultiUserClientSyncDatabase()
	{
		if (!Z_Registration_Info_UClass_UMultiUserClientSyncDatabase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMultiUserClientSyncDatabase.OuterSingleton, Z_Construct_UClass_UMultiUserClientSyncDatabase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMultiUserClientSyncDatabase.OuterSingleton;
	}
	template<> MULTIUSERCLIENTLIBRARY_API UClass* StaticClass<UMultiUserClientSyncDatabase>()
	{
		return UMultiUserClientSyncDatabase::StaticClass();
	}
	UMultiUserClientSyncDatabase::UMultiUserClientSyncDatabase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMultiUserClientSyncDatabase);
	UMultiUserClientSyncDatabase::~UMultiUserClientSyncDatabase() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMultiUserConnectionError;
	static UEnum* EMultiUserConnectionError_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMultiUserConnectionError.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMultiUserConnectionError.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MultiUserClientLibrary_EMultiUserConnectionError, (UObject*)Z_Construct_UPackage__Script_MultiUserClientLibrary(), TEXT("EMultiUserConnectionError"));
		}
		return Z_Registration_Info_UEnum_EMultiUserConnectionError.OuterSingleton;
	}
	template<> MULTIUSERCLIENTLIBRARY_API UEnum* StaticEnum<EMultiUserConnectionError>()
	{
		return EMultiUserConnectionError_StaticEnum();
	}
	struct Z_Construct_UEnum_MultiUserClientLibrary_EMultiUserConnectionError_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MultiUserClientLibrary_EMultiUserConnectionError_Statics::Enumerators[] = {
		{ "EMultiUserConnectionError::None", (int64)EMultiUserConnectionError::None },
		{ "EMultiUserConnectionError::Canceled", (int64)EMultiUserConnectionError::Canceled },
		{ "EMultiUserConnectionError::ConnectionAttemptAborted", (int64)EMultiUserConnectionError::ConnectionAttemptAborted },
		{ "EMultiUserConnectionError::ServerNotResponding", (int64)EMultiUserConnectionError::ServerNotResponding },
		{ "EMultiUserConnectionError::ServerError", (int64)EMultiUserConnectionError::ServerError },
		{ "EMultiUserConnectionError::WorkspaceValidationUnknown", (int64)EMultiUserConnectionError::WorkspaceValidationUnknown },
		{ "EMultiUserConnectionError::SourceControlValidationUnknown", (int64)EMultiUserConnectionError::SourceControlValidationUnknown },
		{ "EMultiUserConnectionError::SourceControlValidationCanceled", (int64)EMultiUserConnectionError::SourceControlValidationCanceled },
		{ "EMultiUserConnectionError::SourceControlValidationError", (int64)EMultiUserConnectionError::SourceControlValidationError },
		{ "EMultiUserConnectionError::DirtyPackageValidationError", (int64)EMultiUserConnectionError::DirtyPackageValidationError },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MultiUserClientLibrary_EMultiUserConnectionError_Statics::Enum_MetaDataParams[] = {
		{ "Canceled.Name", "EMultiUserConnectionError::Canceled" },
		{ "Comment", "/**\n * Enum of the known Multi-User connection error, their value needs to match the internally returned error code.\n * @see FConcertConnectionError\n */" },
		{ "ConnectionAttemptAborted.Name", "EMultiUserConnectionError::ConnectionAttemptAborted" },
		{ "DirtyPackageValidationError.Name", "EMultiUserConnectionError::DirtyPackageValidationError" },
		{ "ModuleRelativePath", "Public/MultiUserClientStatics.h" },
		{ "None.Name", "EMultiUserConnectionError::None" },
		{ "ScriptName", "MultiUserConnectionErrorType" },
		{ "ServerError.Name", "EMultiUserConnectionError::ServerError" },
		{ "ServerNotResponding.Name", "EMultiUserConnectionError::ServerNotResponding" },
		{ "SourceControlValidationCanceled.Name", "EMultiUserConnectionError::SourceControlValidationCanceled" },
		{ "SourceControlValidationError.Name", "EMultiUserConnectionError::SourceControlValidationError" },
		{ "SourceControlValidationUnknown.Name", "EMultiUserConnectionError::SourceControlValidationUnknown" },
		{ "ToolTip", "Enum of the known Multi-User connection error, their value needs to match the internally returned error code.\n@see FConcertConnectionError" },
		{ "WorkspaceValidationUnknown.Name", "EMultiUserConnectionError::WorkspaceValidationUnknown" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MultiUserClientLibrary_EMultiUserConnectionError_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MultiUserClientLibrary,
		nullptr,
		"EMultiUserConnectionError",
		"EMultiUserConnectionError",
		Z_Construct_UEnum_MultiUserClientLibrary_EMultiUserConnectionError_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MultiUserClientLibrary_EMultiUserConnectionError_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MultiUserClientLibrary_EMultiUserConnectionError_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MultiUserClientLibrary_EMultiUserConnectionError_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MultiUserClientLibrary_EMultiUserConnectionError()
	{
		if (!Z_Registration_Info_UEnum_EMultiUserConnectionError.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMultiUserConnectionError.InnerSingleton, Z_Construct_UEnum_MultiUserClientLibrary_EMultiUserConnectionError_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMultiUserConnectionError.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MultiUserConnectionError;
class UScriptStruct* FMultiUserConnectionError::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MultiUserConnectionError.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MultiUserConnectionError.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiUserConnectionError, (UObject*)Z_Construct_UPackage__Script_MultiUserClientLibrary(), TEXT("MultiUserConnectionError"));
	}
	return Z_Registration_Info_UScriptStruct_MultiUserConnectionError.OuterSingleton;
}
template<> MULTIUSERCLIENTLIBRARY_API UScriptStruct* StaticStruct<FMultiUserConnectionError>()
{
	return FMultiUserConnectionError::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMultiUserConnectionError_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ErrorCode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorCode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ErrorCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ErrorMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiUserConnectionError_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MultiUserClientStatics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiUserConnectionError_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiUserConnectionError>();
	}
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FMultiUserConnectionError_Statics::NewProp_ErrorCode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiUserConnectionError_Statics::NewProp_ErrorCode_MetaData[] = {
		{ "Category", "Connection Error" },
		{ "ModuleRelativePath", "Public/MultiUserClientStatics.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMultiUserConnectionError_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMultiUserConnectionError, ErrorCode), Z_Construct_UEnum_MultiUserClientLibrary_EMultiUserConnectionError, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiUserConnectionError_Statics::NewProp_ErrorCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserConnectionError_Statics::NewProp_ErrorCode_MetaData)) }; // 3152153843
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiUserConnectionError_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "Category", "Connection Error" },
		{ "ModuleRelativePath", "Public/MultiUserClientStatics.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FMultiUserConnectionError_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMultiUserConnectionError, ErrorMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiUserConnectionError_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserConnectionError_Statics::NewProp_ErrorMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMultiUserConnectionError_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiUserConnectionError_Statics::NewProp_ErrorCode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiUserConnectionError_Statics::NewProp_ErrorCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiUserConnectionError_Statics::NewProp_ErrorMessage,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiUserConnectionError_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MultiUserClientLibrary,
		nullptr,
		&NewStructOps,
		"MultiUserConnectionError",
		sizeof(FMultiUserConnectionError),
		alignof(FMultiUserConnectionError),
		Z_Construct_UScriptStruct_FMultiUserConnectionError_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserConnectionError_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiUserConnectionError_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserConnectionError_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultiUserConnectionError()
	{
		if (!Z_Registration_Info_UScriptStruct_MultiUserConnectionError.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MultiUserConnectionError.InnerSingleton, Z_Construct_UScriptStruct_FMultiUserConnectionError_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MultiUserConnectionError.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMultiUserSourceValidationMode;
	static UEnum* EMultiUserSourceValidationMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMultiUserSourceValidationMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMultiUserSourceValidationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MultiUserClientLibrary_EMultiUserSourceValidationMode, (UObject*)Z_Construct_UPackage__Script_MultiUserClientLibrary(), TEXT("EMultiUserSourceValidationMode"));
		}
		return Z_Registration_Info_UEnum_EMultiUserSourceValidationMode.OuterSingleton;
	}
	template<> MULTIUSERCLIENTLIBRARY_API UEnum* StaticEnum<EMultiUserSourceValidationMode>()
	{
		return EMultiUserSourceValidationMode_StaticEnum();
	}
	struct Z_Construct_UEnum_MultiUserClientLibrary_EMultiUserSourceValidationMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MultiUserClientLibrary_EMultiUserSourceValidationMode_Statics::Enumerators[] = {
		{ "EMultiUserSourceValidationMode::Hard", (int64)EMultiUserSourceValidationMode::Hard },
		{ "EMultiUserSourceValidationMode::Soft", (int64)EMultiUserSourceValidationMode::Soft },
		{ "EMultiUserSourceValidationMode::SoftAutoProceed", (int64)EMultiUserSourceValidationMode::SoftAutoProceed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MultiUserClientLibrary_EMultiUserSourceValidationMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Hard.Comment", "/** Source control validation will fail on any changes when connecting to a Multi-User Session. */" },
		{ "Hard.Name", "EMultiUserSourceValidationMode::Hard" },
		{ "Hard.ToolTip", "Source control validation will fail on any changes when connecting to a Multi-User Session." },
		{ "ModuleRelativePath", "Public/MultiUserClientStatics.h" },
		{ "Soft.Comment", "/**\n\x09 * Source control validation will warn and prompt on any changes when connecting to a Multi-User session.\n\x09 * In Memory changes will be hot-reloaded.\n\x09 * Source control changes aren't affected but will be stashed/shelved in the future.\n\x09 */" },
		{ "Soft.Name", "EMultiUserSourceValidationMode::Soft" },
		{ "Soft.ToolTip", "Source control validation will warn and prompt on any changes when connecting to a Multi-User session.\nIn Memory changes will be hot-reloaded.\nSource control changes aren't affected but will be stashed/shelved in the future." },
		{ "SoftAutoProceed.Comment", "/** Soft validation mode with auto proceed on prompts. */" },
		{ "SoftAutoProceed.Name", "EMultiUserSourceValidationMode::SoftAutoProceed" },
		{ "SoftAutoProceed.ToolTip", "Soft validation mode with auto proceed on prompts." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MultiUserClientLibrary_EMultiUserSourceValidationMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MultiUserClientLibrary,
		nullptr,
		"EMultiUserSourceValidationMode",
		"EMultiUserSourceValidationMode",
		Z_Construct_UEnum_MultiUserClientLibrary_EMultiUserSourceValidationMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MultiUserClientLibrary_EMultiUserSourceValidationMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MultiUserClientLibrary_EMultiUserSourceValidationMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MultiUserClientLibrary_EMultiUserSourceValidationMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MultiUserClientLibrary_EMultiUserSourceValidationMode()
	{
		if (!Z_Registration_Info_UEnum_EMultiUserSourceValidationMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMultiUserSourceValidationMode.InnerSingleton, Z_Construct_UEnum_MultiUserClientLibrary_EMultiUserSourceValidationMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMultiUserSourceValidationMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MultiUserClientConfig;
class UScriptStruct* FMultiUserClientConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MultiUserClientConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MultiUserClientConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiUserClientConfig, (UObject*)Z_Construct_UPackage__Script_MultiUserClientLibrary(), TEXT("MultiUserClientConfig"));
	}
	return Z_Registration_Info_UScriptStruct_MultiUserClientConfig.OuterSingleton;
}
template<> MULTIUSERCLIENTLIBRARY_API UScriptStruct* StaticStruct<FMultiUserClientConfig>()
{
	return FMultiUserClientConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMultiUserClientConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultServerURL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultServerURL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSessionName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultSessionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSessionToRestore_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultSessionToRestore;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ValidationMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValidationMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ValidationMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiUserClientConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MultiUserClientStatics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiUserClientConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiUserClientConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiUserClientConfig_Statics::NewProp_DefaultServerURL_MetaData[] = {
		{ "Category", "Client Settings" },
		{ "ModuleRelativePath", "Public/MultiUserClientStatics.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiUserClientConfig_Statics::NewProp_DefaultServerURL = { "DefaultServerURL", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMultiUserClientConfig, DefaultServerURL), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiUserClientConfig_Statics::NewProp_DefaultServerURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserClientConfig_Statics::NewProp_DefaultServerURL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiUserClientConfig_Statics::NewProp_DefaultSessionName_MetaData[] = {
		{ "Category", "Client Settings" },
		{ "ModuleRelativePath", "Public/MultiUserClientStatics.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiUserClientConfig_Statics::NewProp_DefaultSessionName = { "DefaultSessionName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMultiUserClientConfig, DefaultSessionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiUserClientConfig_Statics::NewProp_DefaultSessionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserClientConfig_Statics::NewProp_DefaultSessionName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiUserClientConfig_Statics::NewProp_DefaultSessionToRestore_MetaData[] = {
		{ "Category", "Client Settings" },
		{ "ModuleRelativePath", "Public/MultiUserClientStatics.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiUserClientConfig_Statics::NewProp_DefaultSessionToRestore = { "DefaultSessionToRestore", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMultiUserClientConfig, DefaultSessionToRestore), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiUserClientConfig_Statics::NewProp_DefaultSessionToRestore_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserClientConfig_Statics::NewProp_DefaultSessionToRestore_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMultiUserClientConfig_Statics::NewProp_ValidationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiUserClientConfig_Statics::NewProp_ValidationMode_MetaData[] = {
		{ "Category", "Revision Control Settings" },
		{ "Keywords", "Source Control" },
		{ "ModuleRelativePath", "Public/MultiUserClientStatics.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMultiUserClientConfig_Statics::NewProp_ValidationMode = { "ValidationMode", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMultiUserClientConfig, ValidationMode), Z_Construct_UEnum_MultiUserClientLibrary_EMultiUserSourceValidationMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiUserClientConfig_Statics::NewProp_ValidationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserClientConfig_Statics::NewProp_ValidationMode_MetaData)) }; // 1632815565
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMultiUserClientConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiUserClientConfig_Statics::NewProp_DefaultServerURL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiUserClientConfig_Statics::NewProp_DefaultSessionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiUserClientConfig_Statics::NewProp_DefaultSessionToRestore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiUserClientConfig_Statics::NewProp_ValidationMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiUserClientConfig_Statics::NewProp_ValidationMode,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiUserClientConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MultiUserClientLibrary,
		nullptr,
		&NewStructOps,
		"MultiUserClientConfig",
		sizeof(FMultiUserClientConfig),
		alignof(FMultiUserClientConfig),
		Z_Construct_UScriptStruct_FMultiUserClientConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserClientConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiUserClientConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserClientConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultiUserClientConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_MultiUserClientConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MultiUserClientConfig.InnerSingleton, Z_Construct_UScriptStruct_FMultiUserClientConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MultiUserClientConfig.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMultiUserConnectionStatus;
	static UEnum* EMultiUserConnectionStatus_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMultiUserConnectionStatus.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMultiUserConnectionStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MultiUserClientLibrary_EMultiUserConnectionStatus, (UObject*)Z_Construct_UPackage__Script_MultiUserClientLibrary(), TEXT("EMultiUserConnectionStatus"));
		}
		return Z_Registration_Info_UEnum_EMultiUserConnectionStatus.OuterSingleton;
	}
	template<> MULTIUSERCLIENTLIBRARY_API UEnum* StaticEnum<EMultiUserConnectionStatus>()
	{
		return EMultiUserConnectionStatus_StaticEnum();
	}
	struct Z_Construct_UEnum_MultiUserClientLibrary_EMultiUserConnectionStatus_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MultiUserClientLibrary_EMultiUserConnectionStatus_Statics::Enumerators[] = {
		{ "EMultiUserConnectionStatus::Connecting", (int64)EMultiUserConnectionStatus::Connecting },
		{ "EMultiUserConnectionStatus::Connected", (int64)EMultiUserConnectionStatus::Connected },
		{ "EMultiUserConnectionStatus::Disconnecting", (int64)EMultiUserConnectionStatus::Disconnecting },
		{ "EMultiUserConnectionStatus::Disconnected", (int64)EMultiUserConnectionStatus::Disconnected },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MultiUserClientLibrary_EMultiUserConnectionStatus_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Connection status for Multi-User client sessions */" },
		{ "Connected.Comment", "/** Connection established and alive */" },
		{ "Connected.Name", "EMultiUserConnectionStatus::Connected" },
		{ "Connected.ToolTip", "Connection established and alive" },
		{ "Connecting.Comment", "/** Currently establishing connection to the server session */" },
		{ "Connecting.Name", "EMultiUserConnectionStatus::Connecting" },
		{ "Connecting.ToolTip", "Currently establishing connection to the server session" },
		{ "Disconnected.Comment", "/** Disconnected */" },
		{ "Disconnected.Name", "EMultiUserConnectionStatus::Disconnected" },
		{ "Disconnected.ToolTip", "Disconnected" },
		{ "Disconnecting.Comment", "/** Currently severing connection to the server session gracefully */" },
		{ "Disconnecting.Name", "EMultiUserConnectionStatus::Disconnecting" },
		{ "Disconnecting.ToolTip", "Currently severing connection to the server session gracefully" },
		{ "ModuleRelativePath", "Public/MultiUserClientStatics.h" },
		{ "ToolTip", "Connection status for Multi-User client sessions" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MultiUserClientLibrary_EMultiUserConnectionStatus_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MultiUserClientLibrary,
		nullptr,
		"EMultiUserConnectionStatus",
		"EMultiUserConnectionStatus",
		Z_Construct_UEnum_MultiUserClientLibrary_EMultiUserConnectionStatus_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MultiUserClientLibrary_EMultiUserConnectionStatus_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MultiUserClientLibrary_EMultiUserConnectionStatus_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MultiUserClientLibrary_EMultiUserConnectionStatus_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MultiUserClientLibrary_EMultiUserConnectionStatus()
	{
		if (!Z_Registration_Info_UEnum_EMultiUserConnectionStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMultiUserConnectionStatus.InnerSingleton, Z_Construct_UEnum_MultiUserClientLibrary_EMultiUserConnectionStatus_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMultiUserConnectionStatus.InnerSingleton;
	}
	DEFINE_FUNCTION(UMultiUserClientStatics::execGetMultiUserConnectionStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMultiUserClientStatics::GetMultiUserConnectionStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiUserClientStatics::execGetMultiUserConnectionStatusDetail)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EMultiUserConnectionStatus*)Z_Param__Result=UMultiUserClientStatics::GetMultiUserConnectionStatusDetail();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiUserClientStatics::execGetLastMultiUserConnectionError)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMultiUserConnectionError*)Z_Param__Result=UMultiUserClientStatics::GetLastMultiUserConnectionError();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiUserClientStatics::execStartMultiUserDefaultConnection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMultiUserClientStatics::StartMultiUserDefaultConnection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiUserClientStatics::execConfigureMultiUserClient)
	{
		P_GET_STRUCT_REF(FMultiUserClientConfig,Z_Param_Out_ClientConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMultiUserClientStatics::ConfigureMultiUserClient(Z_Param_Out_ClientConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiUserClientStatics::execGetRemoteMultiUserClientInfos)
	{
		P_GET_TARRAY_REF(FMultiUserClientInfo,Z_Param_Out_ClientInfos);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMultiUserClientStatics::GetRemoteMultiUserClientInfos(Z_Param_Out_ClientInfos);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiUserClientStatics::execGetMultiUserClientInfoByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ClientName);
		P_GET_STRUCT_REF(FMultiUserClientInfo,Z_Param_Out_ClientInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMultiUserClientStatics::GetMultiUserClientInfoByName(Z_Param_ClientName,Z_Param_Out_ClientInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiUserClientStatics::execGetLocalMultiUserClientInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMultiUserClientInfo*)Z_Param__Result=UMultiUserClientStatics::GetLocalMultiUserClientInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiUserClientStatics::execGetConcertSyncDatabase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMultiUserClientSyncDatabase**)Z_Param__Result=UMultiUserClientStatics::GetConcertSyncDatabase();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiUserClientStatics::execGatherSessionChanges)
	{
		P_GET_UBOOL(Z_Param_IgnorePersisted);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=UMultiUserClientStatics::GatherSessionChanges(Z_Param_IgnorePersisted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiUserClientStatics::execPersistSpecifiedPackages)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_PackagesToPersist);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMultiUserClientStatics::PersistSpecifiedPackages(Z_Param_Out_PackagesToPersist);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiUserClientStatics::execPersistMultiUserSessionChanges)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UMultiUserClientStatics::PersistMultiUserSessionChanges();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiUserClientStatics::execUpdateWorkspaceModifiedPackages)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UMultiUserClientStatics::UpdateWorkspaceModifiedPackages();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiUserClientStatics::execJumpToMultiUserPresence)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_OtherUserName);
		P_GET_STRUCT(FTransform,Z_Param_TransformOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMultiUserClientStatics::JumpToMultiUserPresence(Z_Param_OtherUserName,Z_Param_TransformOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiUserClientStatics::execGetMultiUserPresenceTransform)
	{
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_ClientEndpointId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UMultiUserClientStatics::GetMultiUserPresenceTransform(Z_Param_Out_ClientEndpointId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiUserClientStatics::execSetMultiUserPresenceVisibilityById)
	{
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_ClientEndpointId);
		P_GET_UBOOL(Z_Param_Visibility);
		P_GET_UBOOL(Z_Param_PropagateToAll);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMultiUserClientStatics::SetMultiUserPresenceVisibilityById(Z_Param_Out_ClientEndpointId,Z_Param_Visibility,Z_Param_PropagateToAll);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiUserClientStatics::execSetMultiUserPresenceVisibility)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_UBOOL(Z_Param_Visibility);
		P_GET_UBOOL(Z_Param_PropagateToAll);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMultiUserClientStatics::SetMultiUserPresenceVisibility(Z_Param_Name,Z_Param_Visibility,Z_Param_PropagateToAll);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiUserClientStatics::execSetMultiUserPresenceEnabled)
	{
		P_GET_UBOOL(Z_Param_IsEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMultiUserClientStatics::SetMultiUserPresenceEnabled(Z_Param_IsEnabled);
		P_NATIVE_END;
	}
	void UMultiUserClientStatics::StaticRegisterNativesUMultiUserClientStatics()
	{
		UClass* Class = UMultiUserClientStatics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConfigureMultiUserClient", &UMultiUserClientStatics::execConfigureMultiUserClient },
			{ "GatherSessionChanges", &UMultiUserClientStatics::execGatherSessionChanges },
			{ "GetConcertSyncDatabase", &UMultiUserClientStatics::execGetConcertSyncDatabase },
			{ "GetLastMultiUserConnectionError", &UMultiUserClientStatics::execGetLastMultiUserConnectionError },
			{ "GetLocalMultiUserClientInfo", &UMultiUserClientStatics::execGetLocalMultiUserClientInfo },
			{ "GetMultiUserClientInfoByName", &UMultiUserClientStatics::execGetMultiUserClientInfoByName },
			{ "GetMultiUserConnectionStatus", &UMultiUserClientStatics::execGetMultiUserConnectionStatus },
			{ "GetMultiUserConnectionStatusDetail", &UMultiUserClientStatics::execGetMultiUserConnectionStatusDetail },
			{ "GetMultiUserPresenceTransform", &UMultiUserClientStatics::execGetMultiUserPresenceTransform },
			{ "GetRemoteMultiUserClientInfos", &UMultiUserClientStatics::execGetRemoteMultiUserClientInfos },
			{ "JumpToMultiUserPresence", &UMultiUserClientStatics::execJumpToMultiUserPresence },
			{ "PersistMultiUserSessionChanges", &UMultiUserClientStatics::execPersistMultiUserSessionChanges },
			{ "PersistSpecifiedPackages", &UMultiUserClientStatics::execPersistSpecifiedPackages },
			{ "SetMultiUserPresenceEnabled", &UMultiUserClientStatics::execSetMultiUserPresenceEnabled },
			{ "SetMultiUserPresenceVisibility", &UMultiUserClientStatics::execSetMultiUserPresenceVisibility },
			{ "SetMultiUserPresenceVisibilityById", &UMultiUserClientStatics::execSetMultiUserPresenceVisibilityById },
			{ "StartMultiUserDefaultConnection", &UMultiUserClientStatics::execStartMultiUserDefaultConnection },
			{ "UpdateWorkspaceModifiedPackages", &UMultiUserClientStatics::execUpdateWorkspaceModifiedPackages },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMultiUserClientStatics_ConfigureMultiUserClient_Statics
	{
		struct MultiUserClientStatics_eventConfigureMultiUserClient_Parms
		{
			FMultiUserClientConfig ClientConfig;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClientConfig;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiUserClientStatics_ConfigureMultiUserClient_Statics::NewProp_ClientConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMultiUserClientStatics_ConfigureMultiUserClient_Statics::NewProp_ClientConfig = { "ClientConfig", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MultiUserClientStatics_eventConfigureMultiUserClient_Parms, ClientConfig), Z_Construct_UScriptStruct_FMultiUserClientConfig, METADATA_PARAMS(Z_Construct_UFunction_UMultiUserClientStatics_ConfigureMultiUserClient_Statics::NewProp_ClientConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiUserClientStatics_ConfigureMultiUserClient_Statics::NewProp_ClientConfig_MetaData)) }; // 493515917
	void Z_Construct_UFunction_UMultiUserClientStatics_ConfigureMultiUserClient_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MultiUserClientStatics_eventConfigureMultiUserClient_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMultiUserClientStatics_ConfigureMultiUserClient_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MultiUserClientStatics_eventConfigureMultiUserClient_Parms), &Z_Construct_UFunction_UMultiUserClientStatics_ConfigureMultiUserClient_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiUserClientStatics_ConfigureMultiUserClient_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiUserClientStatics_ConfigureMultiUserClient_Statics::NewProp_ClientConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiUserClientStatics_ConfigureMultiUserClient_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiUserClientStatics_ConfigureMultiUserClient_Statics::Function_MetaDataParams[] = {
		{ "Category", "Multi-User Client" },
		{ "Comment", "/** Configure the Multi-User client. */" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Configure Multi-User Client" },
		{ "ModuleRelativePath", "Public/MultiUserClientStatics.h" },
		{ "ToolTip", "Configure the Multi-User client." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiUserClientStatics_ConfigureMultiUserClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiUserClientStatics, nullptr, "ConfigureMultiUserClient", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMultiUserClientStatics_ConfigureMultiUserClient_Statics::MultiUserClientStatics_eventConfigureMultiUserClient_Parms), Z_Construct_UFunction_UMultiUserClientStatics_ConfigureMultiUserClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiUserClientStatics_ConfigureMultiUserClient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiUserClientStatics_ConfigureMultiUserClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiUserClientStatics_ConfigureMultiUserClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiUserClientStatics_ConfigureMultiUserClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiUserClientStatics_ConfigureMultiUserClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiUserClientStatics_GatherSessionChanges_Statics
	{
		struct MultiUserClientStatics_eventGatherSessionChanges_Parms
		{
			bool IgnorePersisted;
			TArray<FName> ReturnValue;
		};
		static void NewProp_IgnorePersisted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IgnorePersisted;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMultiUserClientStatics_GatherSessionChanges_Statics::NewProp_IgnorePersisted_SetBit(void* Obj)
	{
		((MultiUserClientStatics_eventGatherSessionChanges_Parms*)Obj)->IgnorePersisted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMultiUserClientStatics_GatherSessionChanges_Statics::NewProp_IgnorePersisted = { "IgnorePersisted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MultiUserClientStatics_eventGatherSessionChanges_Parms), &Z_Construct_UFunction_UMultiUserClientStatics_GatherSessionChanges_Statics::NewProp_IgnorePersisted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMultiUserClientStatics_GatherSessionChanges_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMultiUserClientStatics_GatherSessionChanges_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MultiUserClientStatics_eventGatherSessionChanges_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiUserClientStatics_GatherSessionChanges_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiUserClientStatics_GatherSessionChanges_Statics::NewProp_IgnorePersisted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiUserClientStatics_GatherSessionChanges_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiUserClientStatics_GatherSessionChanges_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiUserClientStatics_GatherSessionChanges_Statics::Function_MetaDataParams[] = {
		{ "Category", "Multi-User Source Control" },
		{ "Comment", "/** Get the list of packages that have changed since the last persist unless ignore persisted is false.  */" },
		{ "CPP_Default_IgnorePersisted", "true" },
		{ "DevelopmentOnly", "" },
		{ "DsiplayName", "Get List of Packages that have changed." },
		{ "ModuleRelativePath", "Public/MultiUserClientStatics.h" },
		{ "ToolTip", "Get the list of packages that have changed since the last persist unless ignore persisted is false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiUserClientStatics_GatherSessionChanges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiUserClientStatics, nullptr, "GatherSessionChanges", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMultiUserClientStatics_GatherSessionChanges_Statics::MultiUserClientStatics_eventGatherSessionChanges_Parms), Z_Construct_UFunction_UMultiUserClientStatics_GatherSessionChanges_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiUserClientStatics_GatherSessionChanges_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiUserClientStatics_GatherSessionChanges_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiUserClientStatics_GatherSessionChanges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiUserClientStatics_GatherSessionChanges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiUserClientStatics_GatherSessionChanges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiUserClientStatics_GetConcertSyncDatabase_Statics
	{
		struct MultiUserClientStatics_eventGetConcertSyncDatabase_Parms
		{
			UMultiUserClientSyncDatabase* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMultiUserClientStatics_GetConcertSyncDatabase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MultiUserClientStatics_eventGetConcertSyncDatabase_Parms, ReturnValue), Z_Construct_UClass_UMultiUserClientSyncDatabase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiUserClientStatics_GetConcertSyncDatabase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiUserClientStatics_GetConcertSyncDatabase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiUserClientStatics_GetConcertSyncDatabase_Statics::Function_MetaDataParams[] = {
		{ "Category", "Multi-User Source Control" },
		{ "Comment", "/** Get the proxy object for the sync database. */" },
		{ "DevelopmentOnly", "" },
		{ "DsiplayName", "Get Multi-user Sync Database." },
		{ "ModuleRelativePath", "Public/MultiUserClientStatics.h" },
		{ "ToolTip", "Get the proxy object for the sync database." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiUserClientStatics_GetConcertSyncDatabase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiUserClientStatics, nullptr, "GetConcertSyncDatabase", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMultiUserClientStatics_GetConcertSyncDatabase_Statics::MultiUserClientStatics_eventGetConcertSyncDatabase_Parms), Z_Construct_UFunction_UMultiUserClientStatics_GetConcertSyncDatabase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiUserClientStatics_GetConcertSyncDatabase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiUserClientStatics_GetConcertSyncDatabase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiUserClientStatics_GetConcertSyncDatabase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiUserClientStatics_GetConcertSyncDatabase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiUserClientStatics_GetConcertSyncDatabase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiUserClientStatics_GetLastMultiUserConnectionError_Statics
	{
		struct MultiUserClientStatics_eventGetLastMultiUserConnectionError_Parms
		{
			FMultiUserConnectionError ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMultiUserClientStatics_GetLastMultiUserConnectionError_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MultiUserClientStatics_eventGetLastMultiUserConnectionError_Parms, ReturnValue), Z_Construct_UScriptStruct_FMultiUserConnectionError, METADATA_PARAMS(nullptr, 0) }; // 2610495941
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiUserClientStatics_GetLastMultiUserConnectionError_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiUserClientStatics_GetLastMultiUserConnectionError_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiUserClientStatics_GetLastMultiUserConnectionError_Statics::Function_MetaDataParams[] = {
		{ "Category", "Multi-User Client" },
		{ "Comment", "/** Get the last Multi-User connection error that happened, if any */" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Get Last Multi-User Connection Error" },
		{ "ModuleRelativePath", "Public/MultiUserClientStatics.h" },
		{ "ToolTip", "Get the last Multi-User connection error that happened, if any" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiUserClientStatics_GetLastMultiUserConnectionError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiUserClientStatics, nullptr, "GetLastMultiUserConnectionError", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMultiUserClientStatics_GetLastMultiUserConnectionError_Statics::MultiUserClientStatics_eventGetLastMultiUserConnectionError_Parms), Z_Construct_UFunction_UMultiUserClientStatics_GetLastMultiUserConnectionError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiUserClientStatics_GetLastMultiUserConnectionError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiUserClientStatics_GetLastMultiUserConnectionError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiUserClientStatics_GetLastMultiUserConnectionError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiUserClientStatics_GetLastMultiUserConnectionError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiUserClientStatics_GetLastMultiUserConnectionError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiUserClientStatics_GetLocalMultiUserClientInfo_Statics
	{
		struct MultiUserClientStatics_eventGetLocalMultiUserClientInfo_Parms
		{
			FMultiUserClientInfo ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMultiUserClientStatics_GetLocalMultiUserClientInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MultiUserClientStatics_eventGetLocalMultiUserClientInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FMultiUserClientInfo, METADATA_PARAMS(nullptr, 0) }; // 3778999814
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiUserClientStatics_GetLocalMultiUserClientInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiUserClientStatics_GetLocalMultiUserClientInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiUserClientStatics_GetLocalMultiUserClientInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Multi-User Client" },
		{ "Comment", "/** Get the local ClientInfo. Works when not connected to a session. */" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Get Local Multi-User Client Info" },
		{ "ModuleRelativePath", "Public/MultiUserClientStatics.h" },
		{ "ToolTip", "Get the local ClientInfo. Works when not connected to a session." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiUserClientStatics_GetLocalMultiUserClientInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiUserClientStatics, nullptr, "GetLocalMultiUserClientInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMultiUserClientStatics_GetLocalMultiUserClientInfo_Statics::MultiUserClientStatics_eventGetLocalMultiUserClientInfo_Parms), Z_Construct_UFunction_UMultiUserClientStatics_GetLocalMultiUserClientInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiUserClientStatics_GetLocalMultiUserClientInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiUserClientStatics_GetLocalMultiUserClientInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiUserClientStatics_GetLocalMultiUserClientInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiUserClientStatics_GetLocalMultiUserClientInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiUserClientStatics_GetLocalMultiUserClientInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserClientInfoByName_Statics
	{
		struct MultiUserClientStatics_eventGetMultiUserClientInfoByName_Parms
		{
			FString ClientName;
			FMultiUserClientInfo ClientInfo;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ClientName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClientInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserClientInfoByName_Statics::NewProp_ClientName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserClientInfoByName_Statics::NewProp_ClientName = { "ClientName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MultiUserClientStatics_eventGetMultiUserClientInfoByName_Parms, ClientName), METADATA_PARAMS(Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserClientInfoByName_Statics::NewProp_ClientName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserClientInfoByName_Statics::NewProp_ClientName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserClientInfoByName_Statics::NewProp_ClientInfo = { "ClientInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MultiUserClientStatics_eventGetMultiUserClientInfoByName_Parms, ClientInfo), Z_Construct_UScriptStruct_FMultiUserClientInfo, METADATA_PARAMS(nullptr, 0) }; // 3778999814
	void Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserClientInfoByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MultiUserClientStatics_eventGetMultiUserClientInfoByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserClientInfoByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MultiUserClientStatics_eventGetMultiUserClientInfoByName_Parms), &Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserClientInfoByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserClientInfoByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserClientInfoByName_Statics::NewProp_ClientName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserClientInfoByName_Statics::NewProp_ClientInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserClientInfoByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserClientInfoByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Multi-User Client" },
		{ "Comment", "/** Get the ClientInfo for any Multi-User participant by name. The local user is found even when not connected to a session. Returns false is no client was found. */" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Get Multi-User Client Info by Name" },
		{ "ModuleRelativePath", "Public/MultiUserClientStatics.h" },
		{ "ToolTip", "Get the ClientInfo for any Multi-User participant by name. The local user is found even when not connected to a session. Returns false is no client was found." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserClientInfoByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiUserClientStatics, nullptr, "GetMultiUserClientInfoByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserClientInfoByName_Statics::MultiUserClientStatics_eventGetMultiUserClientInfoByName_Parms), Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserClientInfoByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserClientInfoByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserClientInfoByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserClientInfoByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserClientInfoByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserClientInfoByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserConnectionStatus_Statics
	{
		struct MultiUserClientStatics_eventGetMultiUserConnectionStatus_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserConnectionStatus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MultiUserClientStatics_eventGetMultiUserConnectionStatus_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserConnectionStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MultiUserClientStatics_eventGetMultiUserConnectionStatus_Parms), &Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserConnectionStatus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserConnectionStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserConnectionStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserConnectionStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Multi-User Client" },
		{ "Comment", "/** Get Multi-User connection status. */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "'Get Multi-User Connection Status' is deprecated. Please use 'Get Multi-User Connection Status Detail' instead." },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Get Multi-User Connection Status" },
		{ "ModuleRelativePath", "Public/MultiUserClientStatics.h" },
		{ "ToolTip", "Get Multi-User connection status." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserConnectionStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiUserClientStatics, nullptr, "GetMultiUserConnectionStatus", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserConnectionStatus_Statics::MultiUserClientStatics_eventGetMultiUserConnectionStatus_Parms), Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserConnectionStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserConnectionStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserConnectionStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserConnectionStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserConnectionStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserConnectionStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserConnectionStatusDetail_Statics
	{
		struct MultiUserClientStatics_eventGetMultiUserConnectionStatusDetail_Parms
		{
			EMultiUserConnectionStatus ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserConnectionStatusDetail_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserConnectionStatusDetail_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MultiUserClientStatics_eventGetMultiUserConnectionStatusDetail_Parms, ReturnValue), Z_Construct_UEnum_MultiUserClientLibrary_EMultiUserConnectionStatus, METADATA_PARAMS(nullptr, 0) }; // 2395803969
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserConnectionStatusDetail_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserConnectionStatusDetail_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserConnectionStatusDetail_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserConnectionStatusDetail_Statics::Function_MetaDataParams[] = {
		{ "Category", "Multi-User Client" },
		{ "Comment", "/** Get Multi-User connection status. */" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Get Multi-User Connection Status Detail" },
		{ "ModuleRelativePath", "Public/MultiUserClientStatics.h" },
		{ "ToolTip", "Get Multi-User connection status." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserConnectionStatusDetail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiUserClientStatics, nullptr, "GetMultiUserConnectionStatusDetail", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserConnectionStatusDetail_Statics::MultiUserClientStatics_eventGetMultiUserConnectionStatusDetail_Parms), Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserConnectionStatusDetail_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserConnectionStatusDetail_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserConnectionStatusDetail_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserConnectionStatusDetail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserConnectionStatusDetail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserConnectionStatusDetail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserPresenceTransform_Statics
	{
		struct MultiUserClientStatics_eventGetMultiUserPresenceTransform_Parms
		{
			FGuid ClientEndpointId;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientEndpointId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClientEndpointId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserPresenceTransform_Statics::NewProp_ClientEndpointId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserPresenceTransform_Statics::NewProp_ClientEndpointId = { "ClientEndpointId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MultiUserClientStatics_eventGetMultiUserPresenceTransform_Parms, ClientEndpointId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserPresenceTransform_Statics::NewProp_ClientEndpointId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserPresenceTransform_Statics::NewProp_ClientEndpointId_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserPresenceTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MultiUserClientStatics_eventGetMultiUserPresenceTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserPresenceTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserPresenceTransform_Statics::NewProp_ClientEndpointId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserPresenceTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserPresenceTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Multi-User Presence" },
		{ "Comment", "/** Get the Presence Actor transform for the specified client endpoint id or identity if the client isn't found */" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Get Multi-User Presence Transform" },
		{ "ModuleRelativePath", "Public/MultiUserClientStatics.h" },
		{ "ToolTip", "Get the Presence Actor transform for the specified client endpoint id or identity if the client isn't found" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserPresenceTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiUserClientStatics, nullptr, "GetMultiUserPresenceTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserPresenceTransform_Statics::MultiUserClientStatics_eventGetMultiUserPresenceTransform_Parms), Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserPresenceTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserPresenceTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserPresenceTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserPresenceTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserPresenceTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserPresenceTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiUserClientStatics_GetRemoteMultiUserClientInfos_Statics
	{
		struct MultiUserClientStatics_eventGetRemoteMultiUserClientInfos_Parms
		{
			TArray<FMultiUserClientInfo> ClientInfos;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClientInfos_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ClientInfos;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMultiUserClientStatics_GetRemoteMultiUserClientInfos_Statics::NewProp_ClientInfos_Inner = { "ClientInfos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMultiUserClientInfo, METADATA_PARAMS(nullptr, 0) }; // 3778999814
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMultiUserClientStatics_GetRemoteMultiUserClientInfos_Statics::NewProp_ClientInfos = { "ClientInfos", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MultiUserClientStatics_eventGetRemoteMultiUserClientInfos_Parms, ClientInfos), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3778999814
	void Z_Construct_UFunction_UMultiUserClientStatics_GetRemoteMultiUserClientInfos_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MultiUserClientStatics_eventGetRemoteMultiUserClientInfos_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMultiUserClientStatics_GetRemoteMultiUserClientInfos_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MultiUserClientStatics_eventGetRemoteMultiUserClientInfos_Parms), &Z_Construct_UFunction_UMultiUserClientStatics_GetRemoteMultiUserClientInfos_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiUserClientStatics_GetRemoteMultiUserClientInfos_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiUserClientStatics_GetRemoteMultiUserClientInfos_Statics::NewProp_ClientInfos_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiUserClientStatics_GetRemoteMultiUserClientInfos_Statics::NewProp_ClientInfos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiUserClientStatics_GetRemoteMultiUserClientInfos_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiUserClientStatics_GetRemoteMultiUserClientInfos_Statics::Function_MetaDataParams[] = {
		{ "Category", "Multi-User Client" },
		{ "Comment", "/** Get ClientInfos of current Multi-User participants except for the local user. Returns false is no remote clients were found. */" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Get Remote Multi-User Client Infos" },
		{ "ModuleRelativePath", "Public/MultiUserClientStatics.h" },
		{ "ToolTip", "Get ClientInfos of current Multi-User participants except for the local user. Returns false is no remote clients were found." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiUserClientStatics_GetRemoteMultiUserClientInfos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiUserClientStatics, nullptr, "GetRemoteMultiUserClientInfos", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMultiUserClientStatics_GetRemoteMultiUserClientInfos_Statics::MultiUserClientStatics_eventGetRemoteMultiUserClientInfos_Parms), Z_Construct_UFunction_UMultiUserClientStatics_GetRemoteMultiUserClientInfos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiUserClientStatics_GetRemoteMultiUserClientInfos_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiUserClientStatics_GetRemoteMultiUserClientInfos_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiUserClientStatics_GetRemoteMultiUserClientInfos_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiUserClientStatics_GetRemoteMultiUserClientInfos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiUserClientStatics_GetRemoteMultiUserClientInfos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiUserClientStatics_JumpToMultiUserPresence_Statics
	{
		struct MultiUserClientStatics_eventJumpToMultiUserPresence_Parms
		{
			FString OtherUserName;
			FTransform TransformOffset;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherUserName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OtherUserName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiUserClientStatics_JumpToMultiUserPresence_Statics::NewProp_OtherUserName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMultiUserClientStatics_JumpToMultiUserPresence_Statics::NewProp_OtherUserName = { "OtherUserName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MultiUserClientStatics_eventJumpToMultiUserPresence_Parms, OtherUserName), METADATA_PARAMS(Z_Construct_UFunction_UMultiUserClientStatics_JumpToMultiUserPresence_Statics::NewProp_OtherUserName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiUserClientStatics_JumpToMultiUserPresence_Statics::NewProp_OtherUserName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMultiUserClientStatics_JumpToMultiUserPresence_Statics::NewProp_TransformOffset = { "TransformOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MultiUserClientStatics_eventJumpToMultiUserPresence_Parms, TransformOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiUserClientStatics_JumpToMultiUserPresence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiUserClientStatics_JumpToMultiUserPresence_Statics::NewProp_OtherUserName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiUserClientStatics_JumpToMultiUserPresence_Statics::NewProp_TransformOffset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiUserClientStatics_JumpToMultiUserPresence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Multi-User Presence" },
		{ "Comment", "/** Teleport to another Multi-User user's presence. */" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Jump to Multi-User Presence" },
		{ "ModuleRelativePath", "Public/MultiUserClientStatics.h" },
		{ "ToolTip", "Teleport to another Multi-User user's presence." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiUserClientStatics_JumpToMultiUserPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiUserClientStatics, nullptr, "JumpToMultiUserPresence", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMultiUserClientStatics_JumpToMultiUserPresence_Statics::MultiUserClientStatics_eventJumpToMultiUserPresence_Parms), Z_Construct_UFunction_UMultiUserClientStatics_JumpToMultiUserPresence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiUserClientStatics_JumpToMultiUserPresence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiUserClientStatics_JumpToMultiUserPresence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiUserClientStatics_JumpToMultiUserPresence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiUserClientStatics_JumpToMultiUserPresence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiUserClientStatics_JumpToMultiUserPresence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiUserClientStatics_PersistMultiUserSessionChanges_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiUserClientStatics_PersistMultiUserSessionChanges_Statics::Function_MetaDataParams[] = {
		{ "Category", "Multi-User Revision Control" },
		{ "Comment", "/** Persist the session changes and prepare the files for source control submission. */" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Persist Multi-User Session Changes" },
		{ "Keywords", "Source Control" },
		{ "ModuleRelativePath", "Public/MultiUserClientStatics.h" },
		{ "ToolTip", "Persist the session changes and prepare the files for source control submission." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiUserClientStatics_PersistMultiUserSessionChanges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiUserClientStatics, nullptr, "PersistMultiUserSessionChanges", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiUserClientStatics_PersistMultiUserSessionChanges_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiUserClientStatics_PersistMultiUserSessionChanges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiUserClientStatics_PersistMultiUserSessionChanges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiUserClientStatics_PersistMultiUserSessionChanges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiUserClientStatics_PersistSpecifiedPackages_Statics
	{
		struct MultiUserClientStatics_eventPersistSpecifiedPackages_Parms
		{
			TArray<FName> PackagesToPersist;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_PackagesToPersist_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackagesToPersist_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PackagesToPersist;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMultiUserClientStatics_PersistSpecifiedPackages_Statics::NewProp_PackagesToPersist_Inner = { "PackagesToPersist", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiUserClientStatics_PersistSpecifiedPackages_Statics::NewProp_PackagesToPersist_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMultiUserClientStatics_PersistSpecifiedPackages_Statics::NewProp_PackagesToPersist = { "PackagesToPersist", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MultiUserClientStatics_eventPersistSpecifiedPackages_Parms, PackagesToPersist), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMultiUserClientStatics_PersistSpecifiedPackages_Statics::NewProp_PackagesToPersist_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiUserClientStatics_PersistSpecifiedPackages_Statics::NewProp_PackagesToPersist_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiUserClientStatics_PersistSpecifiedPackages_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiUserClientStatics_PersistSpecifiedPackages_Statics::NewProp_PackagesToPersist_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiUserClientStatics_PersistSpecifiedPackages_Statics::NewProp_PackagesToPersist,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiUserClientStatics_PersistSpecifiedPackages_Statics::Function_MetaDataParams[] = {
		{ "Category", "Multi-User Source Control" },
		{ "Comment", "/** Persist the specified sessions changes using source control. */" },
		{ "DevelopmentOnly", "" },
		{ "DsiplayName", "Persist Multi-User Sessions Changes (By Package name)" },
		{ "ModuleRelativePath", "Public/MultiUserClientStatics.h" },
		{ "ToolTip", "Persist the specified sessions changes using source control." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiUserClientStatics_PersistSpecifiedPackages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiUserClientStatics, nullptr, "PersistSpecifiedPackages", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMultiUserClientStatics_PersistSpecifiedPackages_Statics::MultiUserClientStatics_eventPersistSpecifiedPackages_Parms), Z_Construct_UFunction_UMultiUserClientStatics_PersistSpecifiedPackages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiUserClientStatics_PersistSpecifiedPackages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiUserClientStatics_PersistSpecifiedPackages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiUserClientStatics_PersistSpecifiedPackages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiUserClientStatics_PersistSpecifiedPackages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiUserClientStatics_PersistSpecifiedPackages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceEnabled_Statics
	{
		struct MultiUserClientStatics_eventSetMultiUserPresenceEnabled_Parms
		{
			bool IsEnabled;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsEnabled_MetaData[];
#endif
		static void NewProp_IsEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceEnabled_Statics::NewProp_IsEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceEnabled_Statics::NewProp_IsEnabled_SetBit(void* Obj)
	{
		((MultiUserClientStatics_eventSetMultiUserPresenceEnabled_Parms*)Obj)->IsEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceEnabled_Statics::NewProp_IsEnabled = { "IsEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MultiUserClientStatics_eventSetMultiUserPresenceEnabled_Parms), &Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceEnabled_Statics::NewProp_IsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceEnabled_Statics::NewProp_IsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceEnabled_Statics::NewProp_IsEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceEnabled_Statics::NewProp_IsEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Multi-User Presence" },
		{ "Comment", "/** Set whether presence is currently enabled and should be shown (unless hidden by other settings) */" },
		{ "CPP_Default_IsEnabled", "true" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Set Multi-User Presence Enabled" },
		{ "ModuleRelativePath", "Public/MultiUserClientStatics.h" },
		{ "ToolTip", "Set whether presence is currently enabled and should be shown (unless hidden by other settings)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiUserClientStatics, nullptr, "SetMultiUserPresenceEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceEnabled_Statics::MultiUserClientStatics_eventSetMultiUserPresenceEnabled_Parms), Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceVisibility_Statics
	{
		struct MultiUserClientStatics_eventSetMultiUserPresenceVisibility_Parms
		{
			FString Name;
			bool Visibility;
			bool PropagateToAll;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static void NewProp_Visibility_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Visibility;
		static void NewProp_PropagateToAll_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PropagateToAll;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceVisibility_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceVisibility_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MultiUserClientStatics_eventSetMultiUserPresenceVisibility_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceVisibility_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceVisibility_Statics::NewProp_Name_MetaData)) };
	void Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceVisibility_Statics::NewProp_Visibility_SetBit(void* Obj)
	{
		((MultiUserClientStatics_eventSetMultiUserPresenceVisibility_Parms*)Obj)->Visibility = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceVisibility_Statics::NewProp_Visibility = { "Visibility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MultiUserClientStatics_eventSetMultiUserPresenceVisibility_Parms), &Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceVisibility_Statics::NewProp_Visibility_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceVisibility_Statics::NewProp_PropagateToAll_SetBit(void* Obj)
	{
		((MultiUserClientStatics_eventSetMultiUserPresenceVisibility_Parms*)Obj)->PropagateToAll = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceVisibility_Statics::NewProp_PropagateToAll = { "PropagateToAll", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MultiUserClientStatics_eventSetMultiUserPresenceVisibility_Parms), &Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceVisibility_Statics::NewProp_PropagateToAll_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceVisibility_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceVisibility_Statics::NewProp_Visibility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceVisibility_Statics::NewProp_PropagateToAll,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Multi-User Presence" },
		{ "Comment", "/** Set Presence Actor Visibility by display name */" },
		{ "CPP_Default_PropagateToAll", "false" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Set Multi-User Presence Visibility" },
		{ "ModuleRelativePath", "Public/MultiUserClientStatics.h" },
		{ "ToolTip", "Set Presence Actor Visibility by display name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiUserClientStatics, nullptr, "SetMultiUserPresenceVisibility", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceVisibility_Statics::MultiUserClientStatics_eventSetMultiUserPresenceVisibility_Parms), Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceVisibilityById_Statics
	{
		struct MultiUserClientStatics_eventSetMultiUserPresenceVisibilityById_Parms
		{
			FGuid ClientEndpointId;
			bool Visibility;
			bool PropagateToAll;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientEndpointId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClientEndpointId;
		static void NewProp_Visibility_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Visibility;
		static void NewProp_PropagateToAll_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PropagateToAll;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceVisibilityById_Statics::NewProp_ClientEndpointId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceVisibilityById_Statics::NewProp_ClientEndpointId = { "ClientEndpointId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MultiUserClientStatics_eventSetMultiUserPresenceVisibilityById_Parms, ClientEndpointId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceVisibilityById_Statics::NewProp_ClientEndpointId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceVisibilityById_Statics::NewProp_ClientEndpointId_MetaData)) };
	void Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceVisibilityById_Statics::NewProp_Visibility_SetBit(void* Obj)
	{
		((MultiUserClientStatics_eventSetMultiUserPresenceVisibilityById_Parms*)Obj)->Visibility = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceVisibilityById_Statics::NewProp_Visibility = { "Visibility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MultiUserClientStatics_eventSetMultiUserPresenceVisibilityById_Parms), &Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceVisibilityById_Statics::NewProp_Visibility_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceVisibilityById_Statics::NewProp_PropagateToAll_SetBit(void* Obj)
	{
		((MultiUserClientStatics_eventSetMultiUserPresenceVisibilityById_Parms*)Obj)->PropagateToAll = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceVisibilityById_Statics::NewProp_PropagateToAll = { "PropagateToAll", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MultiUserClientStatics_eventSetMultiUserPresenceVisibilityById_Parms), &Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceVisibilityById_Statics::NewProp_PropagateToAll_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceVisibilityById_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceVisibilityById_Statics::NewProp_ClientEndpointId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceVisibilityById_Statics::NewProp_Visibility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceVisibilityById_Statics::NewProp_PropagateToAll,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceVisibilityById_Statics::Function_MetaDataParams[] = {
		{ "Category", "Multi-User Presence" },
		{ "Comment", "/** Set Presence Actor Visibility by client id */" },
		{ "CPP_Default_PropagateToAll", "false" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Set Multi-User Presence Visibility By Id" },
		{ "ModuleRelativePath", "Public/MultiUserClientStatics.h" },
		{ "ToolTip", "Set Presence Actor Visibility by client id" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceVisibilityById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiUserClientStatics, nullptr, "SetMultiUserPresenceVisibilityById", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceVisibilityById_Statics::MultiUserClientStatics_eventSetMultiUserPresenceVisibilityById_Parms), Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceVisibilityById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceVisibilityById_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceVisibilityById_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceVisibilityById_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceVisibilityById()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceVisibilityById_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiUserClientStatics_StartMultiUserDefaultConnection_Statics
	{
		struct MultiUserClientStatics_eventStartMultiUserDefaultConnection_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMultiUserClientStatics_StartMultiUserDefaultConnection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MultiUserClientStatics_eventStartMultiUserDefaultConnection_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMultiUserClientStatics_StartMultiUserDefaultConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MultiUserClientStatics_eventStartMultiUserDefaultConnection_Parms), &Z_Construct_UFunction_UMultiUserClientStatics_StartMultiUserDefaultConnection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiUserClientStatics_StartMultiUserDefaultConnection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiUserClientStatics_StartMultiUserDefaultConnection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiUserClientStatics_StartMultiUserDefaultConnection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Multi-User Client" },
		{ "Comment", "/** Start the Multi-User default connection process. */" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Start Multi-User Default Connection" },
		{ "ModuleRelativePath", "Public/MultiUserClientStatics.h" },
		{ "ToolTip", "Start the Multi-User default connection process." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiUserClientStatics_StartMultiUserDefaultConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiUserClientStatics, nullptr, "StartMultiUserDefaultConnection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMultiUserClientStatics_StartMultiUserDefaultConnection_Statics::MultiUserClientStatics_eventStartMultiUserDefaultConnection_Parms), Z_Construct_UFunction_UMultiUserClientStatics_StartMultiUserDefaultConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiUserClientStatics_StartMultiUserDefaultConnection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiUserClientStatics_StartMultiUserDefaultConnection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiUserClientStatics_StartMultiUserDefaultConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiUserClientStatics_StartMultiUserDefaultConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiUserClientStatics_StartMultiUserDefaultConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiUserClientStatics_UpdateWorkspaceModifiedPackages_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiUserClientStatics_UpdateWorkspaceModifiedPackages_Statics::Function_MetaDataParams[] = {
		{ "Category", "Multi-User Revision Control" },
		{ "Comment", "/** Update Multi-User Workspace Modified Packages to be in sync for source control submission. */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "UpdateWorkspaceModifiedPackages is deprecated. Please use PersistMultiUserSessionChanges instead." },
		{ "DevelopmentOnly", "" },
		{ "Keywords", "Source Control" },
		{ "ModuleRelativePath", "Public/MultiUserClientStatics.h" },
		{ "ToolTip", "Update Multi-User Workspace Modified Packages to be in sync for source control submission." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiUserClientStatics_UpdateWorkspaceModifiedPackages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiUserClientStatics, nullptr, "UpdateWorkspaceModifiedPackages", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiUserClientStatics_UpdateWorkspaceModifiedPackages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiUserClientStatics_UpdateWorkspaceModifiedPackages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiUserClientStatics_UpdateWorkspaceModifiedPackages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiUserClientStatics_UpdateWorkspaceModifiedPackages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMultiUserClientStatics);
	UClass* Z_Construct_UClass_UMultiUserClientStatics_NoRegister()
	{
		return UMultiUserClientStatics::StaticClass();
	}
	struct Z_Construct_UClass_UMultiUserClientStatics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMultiUserClientStatics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MultiUserClientLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMultiUserClientStatics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMultiUserClientStatics_ConfigureMultiUserClient, "ConfigureMultiUserClient" }, // 2873509439
		{ &Z_Construct_UFunction_UMultiUserClientStatics_GatherSessionChanges, "GatherSessionChanges" }, // 1556316461
		{ &Z_Construct_UFunction_UMultiUserClientStatics_GetConcertSyncDatabase, "GetConcertSyncDatabase" }, // 3893875110
		{ &Z_Construct_UFunction_UMultiUserClientStatics_GetLastMultiUserConnectionError, "GetLastMultiUserConnectionError" }, // 4094526136
		{ &Z_Construct_UFunction_UMultiUserClientStatics_GetLocalMultiUserClientInfo, "GetLocalMultiUserClientInfo" }, // 3522636518
		{ &Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserClientInfoByName, "GetMultiUserClientInfoByName" }, // 4012427085
		{ &Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserConnectionStatus, "GetMultiUserConnectionStatus" }, // 204211790
		{ &Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserConnectionStatusDetail, "GetMultiUserConnectionStatusDetail" }, // 1310076111
		{ &Z_Construct_UFunction_UMultiUserClientStatics_GetMultiUserPresenceTransform, "GetMultiUserPresenceTransform" }, // 1545022352
		{ &Z_Construct_UFunction_UMultiUserClientStatics_GetRemoteMultiUserClientInfos, "GetRemoteMultiUserClientInfos" }, // 1156135272
		{ &Z_Construct_UFunction_UMultiUserClientStatics_JumpToMultiUserPresence, "JumpToMultiUserPresence" }, // 208090375
		{ &Z_Construct_UFunction_UMultiUserClientStatics_PersistMultiUserSessionChanges, "PersistMultiUserSessionChanges" }, // 1922146129
		{ &Z_Construct_UFunction_UMultiUserClientStatics_PersistSpecifiedPackages, "PersistSpecifiedPackages" }, // 4243017381
		{ &Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceEnabled, "SetMultiUserPresenceEnabled" }, // 1412369002
		{ &Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceVisibility, "SetMultiUserPresenceVisibility" }, // 2670009865
		{ &Z_Construct_UFunction_UMultiUserClientStatics_SetMultiUserPresenceVisibilityById, "SetMultiUserPresenceVisibilityById" }, // 3319547412
		{ &Z_Construct_UFunction_UMultiUserClientStatics_StartMultiUserDefaultConnection, "StartMultiUserDefaultConnection" }, // 583640963
		{ &Z_Construct_UFunction_UMultiUserClientStatics_UpdateWorkspaceModifiedPackages, "UpdateWorkspaceModifiedPackages" }, // 1282407154
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiUserClientStatics_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MultiUserClientStatics.h" },
		{ "ModuleRelativePath", "Public/MultiUserClientStatics.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMultiUserClientStatics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMultiUserClientStatics>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMultiUserClientStatics_Statics::ClassParams = {
		&UMultiUserClientStatics::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMultiUserClientStatics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiUserClientStatics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMultiUserClientStatics()
	{
		if (!Z_Registration_Info_UClass_UMultiUserClientStatics.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMultiUserClientStatics.OuterSingleton, Z_Construct_UClass_UMultiUserClientStatics_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMultiUserClientStatics.OuterSingleton;
	}
	template<> MULTIUSERCLIENTLIBRARY_API UClass* StaticClass<UMultiUserClientStatics>()
	{
		return UMultiUserClientStatics::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMultiUserClientStatics);
	UMultiUserClientStatics::~UMultiUserClientStatics() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_Statics::EnumInfo[] = {
		{ EMultiUserConnectionError_StaticEnum, TEXT("EMultiUserConnectionError"), &Z_Registration_Info_UEnum_EMultiUserConnectionError, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3152153843U) },
		{ EMultiUserSourceValidationMode_StaticEnum, TEXT("EMultiUserSourceValidationMode"), &Z_Registration_Info_UEnum_EMultiUserSourceValidationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1632815565U) },
		{ EMultiUserConnectionStatus_StaticEnum, TEXT("EMultiUserConnectionStatus"), &Z_Registration_Info_UEnum_EMultiUserConnectionStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2395803969U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_Statics::ScriptStructInfo[] = {
		{ FMultiUserClientInfo::StaticStruct, Z_Construct_UScriptStruct_FMultiUserClientInfo_Statics::NewStructOps, TEXT("MultiUserClientInfo"), &Z_Registration_Info_UScriptStruct_MultiUserClientInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMultiUserClientInfo), 3778999814U) },
		{ FMultiUserConnectionError::StaticStruct, Z_Construct_UScriptStruct_FMultiUserConnectionError_Statics::NewStructOps, TEXT("MultiUserConnectionError"), &Z_Registration_Info_UScriptStruct_MultiUserConnectionError, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMultiUserConnectionError), 2610495941U) },
		{ FMultiUserClientConfig::StaticStruct, Z_Construct_UScriptStruct_FMultiUserClientConfig_Statics::NewStructOps, TEXT("MultiUserClientConfig"), &Z_Registration_Info_UScriptStruct_MultiUserClientConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMultiUserClientConfig), 493515917U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMultiUserClientSyncDatabase, UMultiUserClientSyncDatabase::StaticClass, TEXT("UMultiUserClientSyncDatabase"), &Z_Registration_Info_UClass_UMultiUserClientSyncDatabase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMultiUserClientSyncDatabase), 2967397492U) },
		{ Z_Construct_UClass_UMultiUserClientStatics, UMultiUserClientStatics::StaticClass, TEXT("UMultiUserClientStatics"), &Z_Registration_Info_UClass_UMultiUserClientStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMultiUserClientStatics), 4278541018U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_1376666292(TEXT("/Script/MultiUserClientLibrary"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
