// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Editor/UnrealEdEngine.h"
#include "../../../Editor/UnrealEd/Classes/Editor/TemplateMapInfo.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealEdEngine() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAutoReimportManager_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UCookOnTheFlyServer_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UEditorEngine();
	UNREALED_API UClass* Z_Construct_UClass_UUnrealEdEngine();
	UNREALED_API UClass* Z_Construct_UClass_UUnrealEdEngine_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UUnrealEdOptions_NoRegister();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EPackageNotifyState();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FClassMoveInfo();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FTemplateMapInfo();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPackageNotifyState;
	static UEnum* EPackageNotifyState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPackageNotifyState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPackageNotifyState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EPackageNotifyState, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("EPackageNotifyState"));
		}
		return Z_Registration_Info_UEnum_EPackageNotifyState.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EPackageNotifyState>()
	{
		return EPackageNotifyState_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_EPackageNotifyState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_EPackageNotifyState_Statics::Enumerators[] = {
		{ "NS_Updating", (int64)NS_Updating },
		{ "NS_BalloonPrompted", (int64)NS_BalloonPrompted },
		{ "NS_DialogPrompted", (int64)NS_DialogPrompted },
		{ "NS_PendingPrompt", (int64)NS_PendingPrompt },
		{ "NS_PendingWarning", (int64)NS_PendingWarning },
		{ "NS_MAX", (int64)NS_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_EPackageNotifyState_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdEngine.h" },
		{ "NS_BalloonPrompted.Comment", "/** The user has been prompted with the balloon taskbar message. */" },
		{ "NS_BalloonPrompted.Name", "NS_BalloonPrompted" },
		{ "NS_BalloonPrompted.ToolTip", "The user has been prompted with the balloon taskbar message." },
		{ "NS_DialogPrompted.Comment", "/** The user responded to the balloon task bar message and got the modal prompt to checkout dialog and responded to it. */" },
		{ "NS_DialogPrompted.Name", "NS_DialogPrompted" },
		{ "NS_DialogPrompted.ToolTip", "The user responded to the balloon task bar message and got the modal prompt to checkout dialog and responded to it." },
		{ "NS_MAX.Name", "NS_MAX" },
		{ "NS_PendingPrompt.Comment", "/** The package has been marked dirty and is pending a balloon prompt. */" },
		{ "NS_PendingPrompt.Name", "NS_PendingPrompt" },
		{ "NS_PendingPrompt.ToolTip", "The package has been marked dirty and is pending a balloon prompt." },
		{ "NS_PendingWarning.Comment", "/** The package has been marked dirty but cannot be checked out, and is pending a modal warning dialog. */" },
		{ "NS_PendingWarning.Name", "NS_PendingWarning" },
		{ "NS_PendingWarning.ToolTip", "The package has been marked dirty but cannot be checked out, and is pending a modal warning dialog." },
		{ "NS_Updating.Comment", "/** Updating the source control state of the package */" },
		{ "NS_Updating.Name", "NS_Updating" },
		{ "NS_Updating.ToolTip", "Updating the source control state of the package" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_EPackageNotifyState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"EPackageNotifyState",
		"EPackageNotifyState",
		Z_Construct_UEnum_UnrealEd_EPackageNotifyState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EPackageNotifyState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_EPackageNotifyState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EPackageNotifyState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_EPackageNotifyState()
	{
		if (!Z_Registration_Info_UEnum_EPackageNotifyState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPackageNotifyState.InnerSingleton, Z_Construct_UEnum_UnrealEd_EPackageNotifyState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPackageNotifyState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClassMoveInfo;
class UScriptStruct* FClassMoveInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClassMoveInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClassMoveInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClassMoveInfo, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("ClassMoveInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ClassMoveInfo.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FClassMoveInfo>()
{
	return FClassMoveInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FClassMoveInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ClassName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackageName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PackageName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GroupName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bActive_MetaData[];
#endif
		static void NewProp_bActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bActive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassMoveInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Used during asset renaming/duplication to specify class-specific package/group targets. */" },
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdEngine.h" },
		{ "ToolTip", "Used during asset renaming/duplication to specify class-specific package/group targets." },
	};
#endif
	void* Z_Construct_UScriptStruct_FClassMoveInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClassMoveInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassMoveInfo_Statics::NewProp_ClassName_MetaData[] = {
		{ "Comment", "/** The type of asset this MoveInfo applies to. */" },
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdEngine.h" },
		{ "ToolTip", "The type of asset this MoveInfo applies to." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClassMoveInfo_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClassMoveInfo, ClassName), METADATA_PARAMS(Z_Construct_UScriptStruct_FClassMoveInfo_Statics::NewProp_ClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassMoveInfo_Statics::NewProp_ClassName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassMoveInfo_Statics::NewProp_PackageName_MetaData[] = {
		{ "Comment", "/** The target package info which assets of this type are moved/duplicated. */" },
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdEngine.h" },
		{ "ToolTip", "The target package info which assets of this type are moved/duplicated." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClassMoveInfo_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClassMoveInfo, PackageName), METADATA_PARAMS(Z_Construct_UScriptStruct_FClassMoveInfo_Statics::NewProp_PackageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassMoveInfo_Statics::NewProp_PackageName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassMoveInfo_Statics::NewProp_GroupName_MetaData[] = {
		{ "Comment", "/** The target group info which assets of this type are moved/duplicated. */" },
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdEngine.h" },
		{ "ToolTip", "The target group info which assets of this type are moved/duplicated." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClassMoveInfo_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClassMoveInfo, GroupName), METADATA_PARAMS(Z_Construct_UScriptStruct_FClassMoveInfo_Statics::NewProp_GroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassMoveInfo_Statics::NewProp_GroupName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassMoveInfo_Statics::NewProp_bActive_MetaData[] = {
		{ "Comment", "/** If true, this info is applied when moving/duplicating assets. */" },
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdEngine.h" },
		{ "ToolTip", "If true, this info is applied when moving/duplicating assets." },
	};
#endif
	void Z_Construct_UScriptStruct_FClassMoveInfo_Statics::NewProp_bActive_SetBit(void* Obj)
	{
		((FClassMoveInfo*)Obj)->bActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FClassMoveInfo_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FClassMoveInfo), &Z_Construct_UScriptStruct_FClassMoveInfo_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FClassMoveInfo_Statics::NewProp_bActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassMoveInfo_Statics::NewProp_bActive_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClassMoveInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassMoveInfo_Statics::NewProp_ClassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassMoveInfo_Statics::NewProp_PackageName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassMoveInfo_Statics::NewProp_GroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassMoveInfo_Statics::NewProp_bActive,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClassMoveInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"ClassMoveInfo",
		sizeof(FClassMoveInfo),
		alignof(FClassMoveInfo),
		Z_Construct_UScriptStruct_FClassMoveInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassMoveInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClassMoveInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassMoveInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClassMoveInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_ClassMoveInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClassMoveInfo.InnerSingleton, Z_Construct_UScriptStruct_FClassMoveInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ClassMoveInfo.InnerSingleton;
	}
	void UUnrealEdEngine::StaticRegisterNativesUUnrealEdEngine()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUnrealEdEngine);
	UClass* Z_Construct_UClass_UUnrealEdEngine_NoRegister()
	{
		return UUnrealEdEngine::StaticClass();
	}
	struct Z_Construct_UClass_UUnrealEdEngine_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorOptionsInst_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EditorOptionsInst;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoReimportManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AutoReimportManager;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialCopyPasteBuffer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MaterialCopyPasteBuffer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundCueCopyPasteBuffer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SoundCueCopyPasteBuffer;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AnimationCompressionAlgorithms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationCompressionAlgorithms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimationCompressionAlgorithms;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PackagesToBeFullyLoadedAtStartup_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackagesToBeFullyLoadedAtStartup_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PackagesToBeFullyLoadedAtStartup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLODParentActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CurrentLODParentActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNeedWarningForPkgEngineVer_MetaData[];
#endif
		static void NewProp_bNeedWarningForPkgEngineVer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeedWarningForPkgEngineVer;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SortedSpriteCategories_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SortedSpriteCategories_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SortedSpriteCategories;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TemplateMapInfos_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemplateMapInfos_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TemplateMapInfos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CookServer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CookServer;
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_ClassesToIgnoreDeleteReferenceWarning_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassesToIgnoreDeleteReferenceWarning_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ClassesToIgnoreDeleteReferenceWarning;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUnrealEdEngine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorEngine,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnrealEdEngine_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Editor/UnrealEdEngine.h" },
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdEngine.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_EditorOptionsInst_MetaData[] = {
		{ "Comment", "/** Global instance of the editor options class. */" },
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdEngine.h" },
		{ "ToolTip", "Global instance of the editor options class." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_EditorOptionsInst = { "EditorOptionsInst", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUnrealEdEngine, EditorOptionsInst), Z_Construct_UClass_UUnrealEdOptions_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_EditorOptionsInst_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_EditorOptionsInst_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_AutoReimportManager_MetaData[] = {
		{ "Comment", "/**\n\x09 * Manager responsible for configuring auto reimport\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdEngine.h" },
		{ "ToolTip", "Manager responsible for configuring auto reimport" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_AutoReimportManager = { "AutoReimportManager", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUnrealEdEngine, AutoReimportManager), Z_Construct_UClass_UAutoReimportManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_AutoReimportManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_AutoReimportManager_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_MaterialCopyPasteBuffer_MetaData[] = {
		{ "Comment", "/** A buffer for implementing material expression copy/paste. */" },
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdEngine.h" },
		{ "ToolTip", "A buffer for implementing material expression copy/paste." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_MaterialCopyPasteBuffer = { "MaterialCopyPasteBuffer", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUnrealEdEngine, MaterialCopyPasteBuffer), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_MaterialCopyPasteBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_MaterialCopyPasteBuffer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_SoundCueCopyPasteBuffer_MetaData[] = {
		{ "Comment", "/** A buffer for implementing sound cue nodes copy/paste. */" },
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdEngine.h" },
		{ "ToolTip", "A buffer for implementing sound cue nodes copy/paste." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_SoundCueCopyPasteBuffer = { "SoundCueCopyPasteBuffer", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUnrealEdEngine, SoundCueCopyPasteBuffer), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_SoundCueCopyPasteBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_SoundCueCopyPasteBuffer_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_AnimationCompressionAlgorithms_Inner = { "AnimationCompressionAlgorithms", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAnimCompress_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_AnimationCompressionAlgorithms_MetaData[] = {
		{ "Comment", "/** Global list of instanced animation compression algorithms. */" },
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdEngine.h" },
		{ "ToolTip", "Global list of instanced animation compression algorithms." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_AnimationCompressionAlgorithms = { "AnimationCompressionAlgorithms", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUnrealEdEngine, AnimationCompressionAlgorithms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_AnimationCompressionAlgorithms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_AnimationCompressionAlgorithms_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_PackagesToBeFullyLoadedAtStartup_Inner = { "PackagesToBeFullyLoadedAtStartup", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_PackagesToBeFullyLoadedAtStartup_MetaData[] = {
		{ "Comment", "/** Array of packages to be fully loaded at Editor startup. */" },
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdEngine.h" },
		{ "ToolTip", "Array of packages to be fully loaded at Editor startup." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_PackagesToBeFullyLoadedAtStartup = { "PackagesToBeFullyLoadedAtStartup", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUnrealEdEngine, PackagesToBeFullyLoadedAtStartup), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_PackagesToBeFullyLoadedAtStartup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_PackagesToBeFullyLoadedAtStartup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_CurrentLODParentActor_MetaData[] = {
		{ "Comment", "/** Current target for LOD parenting operations (actors will use this as the replacement) */" },
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdEngine.h" },
		{ "ToolTip", "Current target for LOD parenting operations (actors will use this as the replacement)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_CurrentLODParentActor = { "CurrentLODParentActor", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUnrealEdEngine, CurrentLODParentActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_CurrentLODParentActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_CurrentLODParentActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_bNeedWarningForPkgEngineVer_MetaData[] = {
		{ "Comment", "/** Whether the user needs to be prompted about a package being saved with an engine version newer than the current one or not */" },
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdEngine.h" },
		{ "ToolTip", "Whether the user needs to be prompted about a package being saved with an engine version newer than the current one or not" },
	};
#endif
	void Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_bNeedWarningForPkgEngineVer_SetBit(void* Obj)
	{
		((UUnrealEdEngine*)Obj)->bNeedWarningForPkgEngineVer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_bNeedWarningForPkgEngineVer = { "bNeedWarningForPkgEngineVer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UUnrealEdEngine), &Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_bNeedWarningForPkgEngineVer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_bNeedWarningForPkgEngineVer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_bNeedWarningForPkgEngineVer_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_SortedSpriteCategories_Inner = { "SortedSpriteCategories", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_SortedSpriteCategories_MetaData[] = {
		{ "Comment", "/** Array of sorted, localized editor sprite categories */" },
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdEngine.h" },
		{ "ToolTip", "Array of sorted, localized editor sprite categories" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_SortedSpriteCategories = { "SortedSpriteCategories", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUnrealEdEngine, SortedSpriteCategories_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_SortedSpriteCategories_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_SortedSpriteCategories_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_TemplateMapInfos_Inner = { "TemplateMapInfos", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTemplateMapInfo, METADATA_PARAMS(nullptr, 0) }; // 779385839
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_TemplateMapInfos_MetaData[] = {
		{ "Comment", "/** List of info for all known template maps */" },
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdEngine.h" },
		{ "ToolTip", "List of info for all known template maps" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_TemplateMapInfos = { "TemplateMapInfos", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUnrealEdEngine, TemplateMapInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_TemplateMapInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_TemplateMapInfos_MetaData)) }; // 779385839
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_CookServer_MetaData[] = {
		{ "Comment", "/** Cooker server incase we want to cook on the side while editing... */" },
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdEngine.h" },
		{ "ToolTip", "Cooker server incase we want to cook on the side while editing..." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_CookServer = { "CookServer", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUnrealEdEngine, CookServer), Z_Construct_UClass_UCookOnTheFlyServer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_CookServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_CookServer_MetaData)) };
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_ClassesToIgnoreDeleteReferenceWarning_Inner = { "ClassesToIgnoreDeleteReferenceWarning", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_ClassesToIgnoreDeleteReferenceWarning_MetaData[] = {
		{ "Comment", "/** When deleting actors, these types should not generate warnings when references will be broken (this should only be types that don't affect gameplay) */" },
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdEngine.h" },
		{ "ToolTip", "When deleting actors, these types should not generate warnings when references will be broken (this should only be types that don't affect gameplay)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_ClassesToIgnoreDeleteReferenceWarning = { "ClassesToIgnoreDeleteReferenceWarning", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUnrealEdEngine, ClassesToIgnoreDeleteReferenceWarning), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_ClassesToIgnoreDeleteReferenceWarning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_ClassesToIgnoreDeleteReferenceWarning_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUnrealEdEngine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_EditorOptionsInst,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_AutoReimportManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_MaterialCopyPasteBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_SoundCueCopyPasteBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_AnimationCompressionAlgorithms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_AnimationCompressionAlgorithms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_PackagesToBeFullyLoadedAtStartup_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_PackagesToBeFullyLoadedAtStartup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_CurrentLODParentActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_bNeedWarningForPkgEngineVer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_SortedSpriteCategories_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_SortedSpriteCategories,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_TemplateMapInfos_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_TemplateMapInfos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_CookServer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_ClassesToIgnoreDeleteReferenceWarning_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_ClassesToIgnoreDeleteReferenceWarning,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUnrealEdEngine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnrealEdEngine>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUnrealEdEngine_Statics::ClassParams = {
		&UUnrealEdEngine::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUnrealEdEngine_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUnrealEdEngine_Statics::PropPointers),
		0,
		0x009000AEu,
		METADATA_PARAMS(Z_Construct_UClass_UUnrealEdEngine_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUnrealEdEngine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUnrealEdEngine()
	{
		if (!Z_Registration_Info_UClass_UUnrealEdEngine.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUnrealEdEngine.OuterSingleton, Z_Construct_UClass_UUnrealEdEngine_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUnrealEdEngine.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UUnrealEdEngine>()
	{
		return UUnrealEdEngine::StaticClass();
	}
	UUnrealEdEngine::UUnrealEdEngine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUnrealEdEngine);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UUnrealEdEngine)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdEngine_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdEngine_h_Statics::EnumInfo[] = {
		{ EPackageNotifyState_StaticEnum, TEXT("EPackageNotifyState"), &Z_Registration_Info_UEnum_EPackageNotifyState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2764443260U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdEngine_h_Statics::ScriptStructInfo[] = {
		{ FClassMoveInfo::StaticStruct, Z_Construct_UScriptStruct_FClassMoveInfo_Statics::NewStructOps, TEXT("ClassMoveInfo"), &Z_Registration_Info_UScriptStruct_ClassMoveInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClassMoveInfo), 950766808U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdEngine_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUnrealEdEngine, UUnrealEdEngine::StaticClass, TEXT("UUnrealEdEngine"), &Z_Registration_Info_UClass_UUnrealEdEngine, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUnrealEdEngine), 2129410871U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdEngine_h_3213446839(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdEngine_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdEngine_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdEngine_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdEngine_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdEngine_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdEngine_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
