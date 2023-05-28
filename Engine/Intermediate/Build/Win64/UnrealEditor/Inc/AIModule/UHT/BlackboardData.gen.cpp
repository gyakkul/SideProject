// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/BehaviorTree/BlackboardData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlackboardData() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardData();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardData_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardEntry();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlackboardEntry;
class UScriptStruct* FBlackboardEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlackboardEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlackboardEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlackboardEntry, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("BlackboardEntry"));
	}
	return Z_Registration_Info_UScriptStruct_BlackboardEntry.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FBlackboardEntry>()
{
	return FBlackboardEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBlackboardEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntryName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EntryName;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntryDescription_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EntryDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntryCategory_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EntryCategory;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyType_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_KeyType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInstanceSynced_MetaData[];
#endif
		static void NewProp_bInstanceSynced_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInstanceSynced;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlackboardEntry_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** blackboard entry definition */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardData.h" },
		{ "ToolTip", "blackboard entry definition" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlackboardEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewProp_EntryName_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardData.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewProp_EntryName = { "EntryName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlackboardEntry, EntryName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewProp_EntryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewProp_EntryName_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewProp_EntryDescription_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardData.h" },
		{ "ToolTip", "Optional description to explain what this blackboard entry does." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewProp_EntryDescription = { "EntryDescription", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlackboardEntry, EntryDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewProp_EntryDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewProp_EntryDescription_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewProp_EntryCategory_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardData.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewProp_EntryCategory = { "EntryCategory", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlackboardEntry, EntryCategory), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewProp_EntryCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewProp_EntryCategory_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewProp_KeyType_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** key type and additional properties */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardData.h" },
		{ "ToolTip", "key type and additional properties" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewProp_KeyType = { "KeyType", nullptr, (EPropertyFlags)0x0016000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlackboardEntry, KeyType), Z_Construct_UClass_UBlackboardKeyType_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewProp_KeyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewProp_KeyType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewProp_bInstanceSynced_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** if set to true then this field will be synchronized across all instances of this blackboard */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardData.h" },
		{ "ToolTip", "if set to true then this field will be synchronized across all instances of this blackboard" },
	};
#endif
	void Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewProp_bInstanceSynced_SetBit(void* Obj)
	{
		((FBlackboardEntry*)Obj)->bInstanceSynced = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewProp_bInstanceSynced = { "bInstanceSynced", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FBlackboardEntry), &Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewProp_bInstanceSynced_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewProp_bInstanceSynced_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewProp_bInstanceSynced_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlackboardEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewProp_EntryName,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewProp_EntryDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewProp_EntryCategory,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewProp_KeyType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewProp_bInstanceSynced,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlackboardEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		&NewStructOps,
		"BlackboardEntry",
		sizeof(FBlackboardEntry),
		alignof(FBlackboardEntry),
		Z_Construct_UScriptStruct_FBlackboardEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlackboardEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlackboardEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlackboardEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlackboardEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_BlackboardEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlackboardEntry.InnerSingleton, Z_Construct_UScriptStruct_FBlackboardEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BlackboardEntry.InnerSingleton;
	}
	void UBlackboardData::StaticRegisterNativesUBlackboardData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlackboardData);
	UClass* Z_Construct_UClass_UBlackboardData_NoRegister()
	{
		return UBlackboardData::StaticClass();
	}
	struct Z_Construct_UClass_UBlackboardData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Parent;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParentKeys_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentKeys_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ParentKeys;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_Keys_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Keys_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Keys;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasSynchronizedKeys_MetaData[];
#endif
		static void NewProp_bHasSynchronizedKeys_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasSynchronizedKeys;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlackboardData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackboardData_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Blackboard" },
		{ "BlueprintType", "true" },
		{ "IncludePath", "BehaviorTree/BlackboardData.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackboardData_Statics::NewProp_Parent_MetaData[] = {
		{ "Category", "Parent" },
		{ "Comment", "/** parent blackboard (keys can be overridden) */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardData.h" },
		{ "ToolTip", "parent blackboard (keys can be overridden)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBlackboardData_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlackboardData, Parent), Z_Construct_UClass_UBlackboardData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlackboardData_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackboardData_Statics::NewProp_Parent_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlackboardData_Statics::NewProp_ParentKeys_Inner = { "ParentKeys", nullptr, (EPropertyFlags)0x0000008800020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBlackboardEntry, METADATA_PARAMS(nullptr, 0) }; // 1527105344
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackboardData_Statics::NewProp_ParentKeys_MetaData[] = {
		{ "Category", "Parent" },
		{ "Comment", "/** all keys inherited from parent chain */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardData.h" },
		{ "ToolTip", "all keys inherited from parent chain" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlackboardData_Statics::NewProp_ParentKeys = { "ParentKeys", nullptr, (EPropertyFlags)0x0010008800032001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlackboardData, ParentKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlackboardData_Statics::NewProp_ParentKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackboardData_Statics::NewProp_ParentKeys_MetaData)) }; // 1527105344
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlackboardData_Statics::NewProp_Keys_Inner = { "Keys", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBlackboardEntry, METADATA_PARAMS(nullptr, 0) }; // 1527105344
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackboardData_Statics::NewProp_Keys_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** blackboard keys */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardData.h" },
		{ "ToolTip", "blackboard keys" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlackboardData_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlackboardData, Keys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlackboardData_Statics::NewProp_Keys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackboardData_Statics::NewProp_Keys_MetaData)) }; // 1527105344
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackboardData_Statics::NewProp_bHasSynchronizedKeys_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardData.h" },
	};
#endif
	void Z_Construct_UClass_UBlackboardData_Statics::NewProp_bHasSynchronizedKeys_SetBit(void* Obj)
	{
		((UBlackboardData*)Obj)->bHasSynchronizedKeys = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlackboardData_Statics::NewProp_bHasSynchronizedKeys = { "bHasSynchronizedKeys", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UBlackboardData), &Z_Construct_UClass_UBlackboardData_Statics::NewProp_bHasSynchronizedKeys_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlackboardData_Statics::NewProp_bHasSynchronizedKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackboardData_Statics::NewProp_bHasSynchronizedKeys_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlackboardData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackboardData_Statics::NewProp_Parent,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackboardData_Statics::NewProp_ParentKeys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackboardData_Statics::NewProp_ParentKeys,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackboardData_Statics::NewProp_Keys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackboardData_Statics::NewProp_Keys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackboardData_Statics::NewProp_bHasSynchronizedKeys,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlackboardData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlackboardData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlackboardData_Statics::ClassParams = {
		&UBlackboardData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBlackboardData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlackboardData_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBlackboardData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackboardData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlackboardData()
	{
		if (!Z_Registration_Info_UClass_UBlackboardData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlackboardData.OuterSingleton, Z_Construct_UClass_UBlackboardData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlackboardData.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UBlackboardData>()
	{
		return UBlackboardData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlackboardData);
	UBlackboardData::~UBlackboardData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h_Statics::ScriptStructInfo[] = {
		{ FBlackboardEntry::StaticStruct, Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewStructOps, TEXT("BlackboardEntry"), &Z_Registration_Info_UScriptStruct_BlackboardEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlackboardEntry), 1527105344U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlackboardData, UBlackboardData::StaticClass, TEXT("UBlackboardData"), &Z_Registration_Info_UClass_UBlackboardData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlackboardData), 326355233U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h_2570584487(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
