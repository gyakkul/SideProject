// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Util/VCamViewportLocker.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVCamViewportLocker() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VCamCore();
	VCAMCORE_API UEnum* Z_Construct_UEnum_VCamCore_EVCamTargetViewportID();
	VCAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FVCamViewportLocker();
	VCAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FVCamViewportLockState();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VCamViewportLockState;
class UScriptStruct* FVCamViewportLockState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VCamViewportLockState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VCamViewportLockState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVCamViewportLockState, (UObject*)Z_Construct_UPackage__Script_VCamCore(), TEXT("VCamViewportLockState"));
	}
	return Z_Registration_Info_UScriptStruct_VCamViewportLockState.OuterSingleton;
}
template<> VCAMCORE_API UScriptStruct* StaticStruct<FVCamViewportLockState>()
{
	return FVCamViewportLockState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVCamViewportLockState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLockViewportToCamera_MetaData[];
#endif
		static void NewProp_bLockViewportToCamera_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockViewportToCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWasLockedToViewport_MetaData[];
#endif
		static void NewProp_bWasLockedToViewport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasLockedToViewport;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsForceLocked_MetaData[];
#endif
		static void NewProp_bIsForceLocked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsForceLocked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastKnownEditorLockActor_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_LastKnownEditorLockActor;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Backup_ViewTarget_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Backup_ViewTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVCamViewportLockState_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Util/VCamViewportLocker.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVCamViewportLockState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVCamViewportLockState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVCamViewportLockState_Statics::NewProp_bLockViewportToCamera_MetaData[] = {
		{ "Category", "Viewport" },
		{ "Comment", "/** Whether the user wants the viewport to be locked */" },
		{ "EditCondition", "!bIsForceLocked" },
		{ "ModuleRelativePath", "Public/Util/VCamViewportLocker.h" },
		{ "ToolTip", "Whether the user wants the viewport to be locked" },
	};
#endif
	void Z_Construct_UScriptStruct_FVCamViewportLockState_Statics::NewProp_bLockViewportToCamera_SetBit(void* Obj)
	{
		((FVCamViewportLockState*)Obj)->bLockViewportToCamera = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVCamViewportLockState_Statics::NewProp_bLockViewportToCamera = { "bLockViewportToCamera", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FVCamViewportLockState), &Z_Construct_UScriptStruct_FVCamViewportLockState_Statics::NewProp_bLockViewportToCamera_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVCamViewportLockState_Statics::NewProp_bLockViewportToCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVCamViewportLockState_Statics::NewProp_bLockViewportToCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVCamViewportLockState_Statics::NewProp_bWasLockedToViewport_MetaData[] = {
		{ "Comment", "/** Whether this viewport is currently locked */" },
		{ "ModuleRelativePath", "Public/Util/VCamViewportLocker.h" },
		{ "ToolTip", "Whether this viewport is currently locked" },
	};
#endif
	void Z_Construct_UScriptStruct_FVCamViewportLockState_Statics::NewProp_bWasLockedToViewport_SetBit(void* Obj)
	{
		((FVCamViewportLockState*)Obj)->bWasLockedToViewport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVCamViewportLockState_Statics::NewProp_bWasLockedToViewport = { "bWasLockedToViewport", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FVCamViewportLockState), &Z_Construct_UScriptStruct_FVCamViewportLockState_Statics::NewProp_bWasLockedToViewport_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVCamViewportLockState_Statics::NewProp_bWasLockedToViewport_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVCamViewportLockState_Statics::NewProp_bWasLockedToViewport_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVCamViewportLockState_Statics::NewProp_bIsForceLocked_MetaData[] = {
		{ "Comment", "// This property is editor-only because we use it for EditCondition only\n" },
		{ "ModuleRelativePath", "Public/Util/VCamViewportLocker.h" },
		{ "ToolTip", "This property is editor-only because we use it for EditCondition only" },
	};
#endif
	void Z_Construct_UScriptStruct_FVCamViewportLockState_Statics::NewProp_bIsForceLocked_SetBit(void* Obj)
	{
		((FVCamViewportLockState*)Obj)->bIsForceLocked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVCamViewportLockState_Statics::NewProp_bIsForceLocked = { "bIsForceLocked", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FVCamViewportLockState), &Z_Construct_UScriptStruct_FVCamViewportLockState_Statics::NewProp_bIsForceLocked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVCamViewportLockState_Statics::NewProp_bIsForceLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVCamViewportLockState_Statics::NewProp_bIsForceLocked_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVCamViewportLockState_Statics::NewProp_LastKnownEditorLockActor_MetaData[] = {
		{ "Comment", "/**\n\x09 * Updated every time live link calls update (every tick).\n\x09 * \n\x09 * Used for when the lock actor is switched by an external system.\n\x09 * Once the lock actor becomes nullptr, we lock the viewport to our own virtual camera UNLESS\n\x09 * this variable points to another virtual camera. In that case we lock to that camera.\n\x09 * \n\x09 * Consider that the live link updates are not predictable.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Util/VCamViewportLocker.h" },
		{ "ToolTip", "Updated every time live link calls update (every tick).\n\nUsed for when the lock actor is switched by an external system.\nOnce the lock actor becomes nullptr, we lock the viewport to our own virtual camera UNLESS\nthis variable points to another virtual camera. In that case we lock to that camera.\n\nConsider that the live link updates are not predictable." },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FVCamViewportLockState_Statics::NewProp_LastKnownEditorLockActor = { "LastKnownEditorLockActor", nullptr, (EPropertyFlags)0x0014000800002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVCamViewportLockState, LastKnownEditorLockActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVCamViewportLockState_Statics::NewProp_LastKnownEditorLockActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVCamViewportLockState_Statics::NewProp_LastKnownEditorLockActor_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVCamViewportLockState_Statics::NewProp_Backup_ViewTarget_MetaData[] = {
		{ "Comment", "/** Used for gameplay to restore to the previous view taget*/" },
		{ "ModuleRelativePath", "Public/Util/VCamViewportLocker.h" },
		{ "ToolTip", "Used for gameplay to restore to the previous view taget" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FVCamViewportLockState_Statics::NewProp_Backup_ViewTarget = { "Backup_ViewTarget", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVCamViewportLockState, Backup_ViewTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVCamViewportLockState_Statics::NewProp_Backup_ViewTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVCamViewportLockState_Statics::NewProp_Backup_ViewTarget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVCamViewportLockState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVCamViewportLockState_Statics::NewProp_bLockViewportToCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVCamViewportLockState_Statics::NewProp_bWasLockedToViewport,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVCamViewportLockState_Statics::NewProp_bIsForceLocked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVCamViewportLockState_Statics::NewProp_LastKnownEditorLockActor,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVCamViewportLockState_Statics::NewProp_Backup_ViewTarget,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVCamViewportLockState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VCamCore,
		nullptr,
		&NewStructOps,
		"VCamViewportLockState",
		sizeof(FVCamViewportLockState),
		alignof(FVCamViewportLockState),
		Z_Construct_UScriptStruct_FVCamViewportLockState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVCamViewportLockState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVCamViewportLockState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVCamViewportLockState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVCamViewportLockState()
	{
		if (!Z_Registration_Info_UScriptStruct_VCamViewportLockState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VCamViewportLockState.InnerSingleton, Z_Construct_UScriptStruct_FVCamViewportLockState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VCamViewportLockState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VCamViewportLocker;
class UScriptStruct* FVCamViewportLocker::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VCamViewportLocker.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VCamViewportLocker.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVCamViewportLocker, (UObject*)Z_Construct_UPackage__Script_VCamCore(), TEXT("VCamViewportLocker"));
	}
	return Z_Registration_Info_UScriptStruct_VCamViewportLocker.OuterSingleton;
}
template<> VCAMCORE_API UScriptStruct* StaticStruct<FVCamViewportLocker>()
{
	return FVCamViewportLocker::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVCamViewportLocker_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Locks_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Locks_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Locks_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Locks_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Locks;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVCamViewportLocker_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Keeps track of which viewports are locked\n */" },
		{ "ModuleRelativePath", "Public/Util/VCamViewportLocker.h" },
		{ "ToolTip", "Keeps track of which viewports are locked" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVCamViewportLocker_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVCamViewportLocker>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVCamViewportLocker_Statics::NewProp_Locks_ValueProp = { "Locks", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FVCamViewportLockState, METADATA_PARAMS(nullptr, 0) }; // 3507090049
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVCamViewportLocker_Statics::NewProp_Locks_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVCamViewportLocker_Statics::NewProp_Locks_Key_KeyProp = { "Locks_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_VCamCore_EVCamTargetViewportID, METADATA_PARAMS(nullptr, 0) }; // 2513585238
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVCamViewportLocker_Statics::NewProp_Locks_MetaData[] = {
		{ "Category", "Viewport" },
		{ "ModuleRelativePath", "Public/Util/VCamViewportLocker.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FVCamViewportLocker_Statics::NewProp_Locks = { "Locks", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVCamViewportLocker, Locks), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVCamViewportLocker_Statics::NewProp_Locks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVCamViewportLocker_Statics::NewProp_Locks_MetaData)) }; // 2513585238 3507090049
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVCamViewportLocker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVCamViewportLocker_Statics::NewProp_Locks_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVCamViewportLocker_Statics::NewProp_Locks_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVCamViewportLocker_Statics::NewProp_Locks_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVCamViewportLocker_Statics::NewProp_Locks,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVCamViewportLocker_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VCamCore,
		nullptr,
		&NewStructOps,
		"VCamViewportLocker",
		sizeof(FVCamViewportLocker),
		alignof(FVCamViewportLocker),
		Z_Construct_UScriptStruct_FVCamViewportLocker_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVCamViewportLocker_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVCamViewportLocker_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVCamViewportLocker_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVCamViewportLocker()
	{
		if (!Z_Registration_Info_UScriptStruct_VCamViewportLocker.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VCamViewportLocker.InnerSingleton, Z_Construct_UScriptStruct_FVCamViewportLocker_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VCamViewportLocker.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Util_VCamViewportLocker_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Util_VCamViewportLocker_h_Statics::ScriptStructInfo[] = {
		{ FVCamViewportLockState::StaticStruct, Z_Construct_UScriptStruct_FVCamViewportLockState_Statics::NewStructOps, TEXT("VCamViewportLockState"), &Z_Registration_Info_UScriptStruct_VCamViewportLockState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVCamViewportLockState), 3507090049U) },
		{ FVCamViewportLocker::StaticStruct, Z_Construct_UScriptStruct_FVCamViewportLocker_Statics::NewStructOps, TEXT("VCamViewportLocker"), &Z_Registration_Info_UScriptStruct_VCamViewportLocker, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVCamViewportLocker), 2391681586U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Util_VCamViewportLocker_h_441377919(TEXT("/Script/VCamCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Util_VCamViewportLocker_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Util_VCamViewportLocker_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
