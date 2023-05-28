// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/Animation/AnimNotifyQueue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyQueue() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMirrorDataTable_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyArray();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyContext();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyEventReference();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyQueue();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNotifyEventReference;
class UScriptStruct* FAnimNotifyEventReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNotifyEventReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNotifyEventReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNotifyEventReference, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimNotifyEventReference"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNotifyEventReference.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNotifyEventReference>()
{
	return FAnimNotifyEventReference::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNotifyEventReference_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MirrorTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MirrorTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NotifySource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NotifySource;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNotifyEventReference_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Animation/AnimNotifyQueue.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNotifyEventReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNotifyEventReference>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNotifyEventReference_Statics::NewProp_MirrorTable_MetaData[] = {
		{ "Comment", "// If set, the Notify has been mirrored.  The mirrored name can be found in MirrorTable->AnimNotifyToMirrorAnimNotifyMap\n" },
		{ "ModuleRelativePath", "Public/Animation/AnimNotifyQueue.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "If set, the Notify has been mirrored.  The mirrored name can be found in MirrorTable->AnimNotifyToMirrorAnimNotifyMap" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAnimNotifyEventReference_Statics::NewProp_MirrorTable = { "MirrorTable", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNotifyEventReference, MirrorTable), Z_Construct_UClass_UMirrorDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNotifyEventReference_Statics::NewProp_MirrorTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyEventReference_Statics::NewProp_MirrorTable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNotifyEventReference_Statics::NewProp_NotifySource_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimNotifyQueue.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAnimNotifyEventReference_Statics::NewProp_NotifySource = { "NotifySource", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNotifyEventReference, NotifySource), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNotifyEventReference_Statics::NewProp_NotifySource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyEventReference_Statics::NewProp_NotifySource_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNotifyEventReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyEventReference_Statics::NewProp_MirrorTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyEventReference_Statics::NewProp_NotifySource,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNotifyEventReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimNotifyEventReference",
		sizeof(FAnimNotifyEventReference),
		alignof(FAnimNotifyEventReference),
		Z_Construct_UScriptStruct_FAnimNotifyEventReference_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyEventReference_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNotifyEventReference_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyEventReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyEventReference()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNotifyEventReference.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNotifyEventReference.InnerSingleton, Z_Construct_UScriptStruct_FAnimNotifyEventReference_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNotifyEventReference.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNotifyArray;
class UScriptStruct* FAnimNotifyArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNotifyArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNotifyArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNotifyArray, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimNotifyArray"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNotifyArray.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNotifyArray>()
{
	return FAnimNotifyArray::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNotifyArray_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Notifies_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Notifies_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Notifies;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNotifyArray_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimNotifyQueue.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNotifyArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNotifyArray>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNotifyArray_Statics::NewProp_Notifies_Inner = { "Notifies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAnimNotifyEventReference, METADATA_PARAMS(nullptr, 0) }; // 1168965002
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNotifyArray_Statics::NewProp_Notifies_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimNotifyQueue.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNotifyArray_Statics::NewProp_Notifies = { "Notifies", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNotifyArray, Notifies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNotifyArray_Statics::NewProp_Notifies_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyArray_Statics::NewProp_Notifies_MetaData)) }; // 1168965002
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNotifyArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyArray_Statics::NewProp_Notifies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyArray_Statics::NewProp_Notifies,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNotifyArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimNotifyArray",
		sizeof(FAnimNotifyArray),
		alignof(FAnimNotifyArray),
		Z_Construct_UScriptStruct_FAnimNotifyArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNotifyArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyArray()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNotifyArray.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNotifyArray.InnerSingleton, Z_Construct_UScriptStruct_FAnimNotifyArray_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNotifyArray.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNotifyContext;
class UScriptStruct* FAnimNotifyContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNotifyContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNotifyContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNotifyContext, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimNotifyContext"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNotifyContext.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNotifyContext>()
{
	return FAnimNotifyContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNotifyContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNotifyContext_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimNotifyQueue.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNotifyContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNotifyContext>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNotifyContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimNotifyContext",
		sizeof(FAnimNotifyContext),
		alignof(FAnimNotifyContext),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNotifyContext_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyContext_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyContext()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNotifyContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNotifyContext.InnerSingleton, Z_Construct_UScriptStruct_FAnimNotifyContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNotifyContext.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNotifyQueue;
class UScriptStruct* FAnimNotifyQueue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNotifyQueue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNotifyQueue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNotifyQueue, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimNotifyQueue"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNotifyQueue.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNotifyQueue>()
{
	return FAnimNotifyQueue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimNotifies_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimNotifies_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimNotifies;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UnfilteredMontageAnimNotifies_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_UnfilteredMontageAnimNotifies_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnfilteredMontageAnimNotifies_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_UnfilteredMontageAnimNotifies;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimNotifyQueue.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNotifyQueue>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::NewProp_AnimNotifies_Inner = { "AnimNotifies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAnimNotifyEventReference, METADATA_PARAMS(nullptr, 0) }; // 1168965002
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::NewProp_AnimNotifies_MetaData[] = {
		{ "Comment", "/** Animation Notifies that has been triggered in the latest tick **/" },
		{ "ModuleRelativePath", "Public/Animation/AnimNotifyQueue.h" },
		{ "ToolTip", "Animation Notifies that has been triggered in the latest tick *" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::NewProp_AnimNotifies = { "AnimNotifies", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNotifyQueue, AnimNotifies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::NewProp_AnimNotifies_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::NewProp_AnimNotifies_MetaData)) }; // 1168965002
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::NewProp_UnfilteredMontageAnimNotifies_ValueProp = { "UnfilteredMontageAnimNotifies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FAnimNotifyArray, METADATA_PARAMS(nullptr, 0) }; // 3890670908
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::NewProp_UnfilteredMontageAnimNotifies_Key_KeyProp = { "UnfilteredMontageAnimNotifies_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::NewProp_UnfilteredMontageAnimNotifies_MetaData[] = {
		{ "Comment", "/** Animation Notifies from montages that still need to be filtered by slot weight*/" },
		{ "ModuleRelativePath", "Public/Animation/AnimNotifyQueue.h" },
		{ "ToolTip", "Animation Notifies from montages that still need to be filtered by slot weight" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::NewProp_UnfilteredMontageAnimNotifies = { "UnfilteredMontageAnimNotifies", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNotifyQueue, UnfilteredMontageAnimNotifies), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::NewProp_UnfilteredMontageAnimNotifies_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::NewProp_UnfilteredMontageAnimNotifies_MetaData)) }; // 3890670908
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::NewProp_AnimNotifies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::NewProp_AnimNotifies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::NewProp_UnfilteredMontageAnimNotifies_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::NewProp_UnfilteredMontageAnimNotifies_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::NewProp_UnfilteredMontageAnimNotifies,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimNotifyQueue",
		sizeof(FAnimNotifyQueue),
		alignof(FAnimNotifyQueue),
		Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyQueue()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNotifyQueue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNotifyQueue.InnerSingleton, Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNotifyQueue.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyQueue_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyQueue_h_Statics::ScriptStructInfo[] = {
		{ FAnimNotifyEventReference::StaticStruct, Z_Construct_UScriptStruct_FAnimNotifyEventReference_Statics::NewStructOps, TEXT("AnimNotifyEventReference"), &Z_Registration_Info_UScriptStruct_AnimNotifyEventReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNotifyEventReference), 1168965002U) },
		{ FAnimNotifyArray::StaticStruct, Z_Construct_UScriptStruct_FAnimNotifyArray_Statics::NewStructOps, TEXT("AnimNotifyArray"), &Z_Registration_Info_UScriptStruct_AnimNotifyArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNotifyArray), 3890670908U) },
		{ FAnimNotifyContext::StaticStruct, Z_Construct_UScriptStruct_FAnimNotifyContext_Statics::NewStructOps, TEXT("AnimNotifyContext"), &Z_Registration_Info_UScriptStruct_AnimNotifyContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNotifyContext), 3642741609U) },
		{ FAnimNotifyQueue::StaticStruct, Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::NewStructOps, TEXT("AnimNotifyQueue"), &Z_Registration_Info_UScriptStruct_AnimNotifyQueue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNotifyQueue), 1153152247U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyQueue_h_4117750146(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyQueue_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyQueue_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
