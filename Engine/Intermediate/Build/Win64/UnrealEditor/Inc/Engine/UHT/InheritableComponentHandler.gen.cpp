// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/InheritableComponentHandler.h"
#include "../../Source/Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInheritableComponentHandler() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInheritableComponentHandler();
	ENGINE_API UClass* Z_Construct_UClass_UInheritableComponentHandler_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentKey();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentOverrideRecord();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComponentKey;
class UScriptStruct* FComponentKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComponentKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComponentKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComponentKey, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ComponentKey"));
	}
	return Z_Registration_Info_UScriptStruct_ComponentKey.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FComponentKey>()
{
	return FComponentKey::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FComponentKey_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_OwnerClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SCSVariableName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SCSVariableName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssociatedGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssociatedGuid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentKey_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/InheritableComponentHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComponentKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComponentKey>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentKey_Statics::NewProp_OwnerClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InheritableComponentHandler.h" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UScriptStruct_FComponentKey_Statics::NewProp_OwnerClass = { "OwnerClass", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComponentKey, OwnerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FComponentKey_Statics::NewProp_OwnerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentKey_Statics::NewProp_OwnerClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentKey_Statics::NewProp_SCSVariableName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InheritableComponentHandler.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FComponentKey_Statics::NewProp_SCSVariableName = { "SCSVariableName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComponentKey, SCSVariableName), METADATA_PARAMS(Z_Construct_UScriptStruct_FComponentKey_Statics::NewProp_SCSVariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentKey_Statics::NewProp_SCSVariableName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentKey_Statics::NewProp_AssociatedGuid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InheritableComponentHandler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComponentKey_Statics::NewProp_AssociatedGuid = { "AssociatedGuid", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComponentKey, AssociatedGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FComponentKey_Statics::NewProp_AssociatedGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentKey_Statics::NewProp_AssociatedGuid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComponentKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentKey_Statics::NewProp_OwnerClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentKey_Statics::NewProp_SCSVariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentKey_Statics::NewProp_AssociatedGuid,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComponentKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ComponentKey",
		sizeof(FComponentKey),
		alignof(FComponentKey),
		Z_Construct_UScriptStruct_FComponentKey_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FComponentKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FComponentKey()
	{
		if (!Z_Registration_Info_UScriptStruct_ComponentKey.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComponentKey.InnerSingleton, Z_Construct_UScriptStruct_FComponentKey_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ComponentKey.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComponentOverrideRecord;
class UScriptStruct* FComponentOverrideRecord::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComponentOverrideRecord.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComponentOverrideRecord.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComponentOverrideRecord, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ComponentOverrideRecord"));
	}
	return Z_Registration_Info_UScriptStruct_ComponentOverrideRecord.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FComponentOverrideRecord>()
{
	return FComponentOverrideRecord::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_ComponentClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ComponentTemplate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CookedComponentInstancingData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CookedComponentInstancingData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/InheritableComponentHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComponentOverrideRecord>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::NewProp_ComponentClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InheritableComponentHandler.h" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::NewProp_ComponentClass = { "ComponentClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComponentOverrideRecord, ComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::NewProp_ComponentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::NewProp_ComponentClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::NewProp_ComponentTemplate_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/InheritableComponentHandler.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::NewProp_ComponentTemplate = { "ComponentTemplate", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComponentOverrideRecord, ComponentTemplate), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::NewProp_ComponentTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::NewProp_ComponentTemplate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::NewProp_ComponentKey_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InheritableComponentHandler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::NewProp_ComponentKey = { "ComponentKey", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComponentOverrideRecord, ComponentKey), Z_Construct_UScriptStruct_FComponentKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::NewProp_ComponentKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::NewProp_ComponentKey_MetaData)) }; // 267440318
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::NewProp_CookedComponentInstancingData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InheritableComponentHandler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::NewProp_CookedComponentInstancingData = { "CookedComponentInstancingData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComponentOverrideRecord, CookedComponentInstancingData), Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData, METADATA_PARAMS(Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::NewProp_CookedComponentInstancingData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::NewProp_CookedComponentInstancingData_MetaData)) }; // 3484312318
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::NewProp_ComponentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::NewProp_ComponentTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::NewProp_ComponentKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::NewProp_CookedComponentInstancingData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ComponentOverrideRecord",
		sizeof(FComponentOverrideRecord),
		alignof(FComponentOverrideRecord),
		Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FComponentOverrideRecord()
	{
		if (!Z_Registration_Info_UScriptStruct_ComponentOverrideRecord.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComponentOverrideRecord.InnerSingleton, Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ComponentOverrideRecord.InnerSingleton;
	}
	void UInheritableComponentHandler::StaticRegisterNativesUInheritableComponentHandler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInheritableComponentHandler);
	UClass* Z_Construct_UClass_UInheritableComponentHandler_NoRegister()
	{
		return UInheritableComponentHandler::StaticClass();
	}
	struct Z_Construct_UClass_UInheritableComponentHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Records_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Records_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Records;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UnnecessaryComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnnecessaryComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UnnecessaryComponents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInheritableComponentHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInheritableComponentHandler_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/InheritableComponentHandler.h" },
		{ "ModuleRelativePath", "Classes/Engine/InheritableComponentHandler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInheritableComponentHandler_Statics::NewProp_Records_Inner = { "Records", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FComponentOverrideRecord, METADATA_PARAMS(nullptr, 0) }; // 2460802742
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInheritableComponentHandler_Statics::NewProp_Records_MetaData[] = {
		{ "Comment", "/** All component records */" },
		{ "ModuleRelativePath", "Classes/Engine/InheritableComponentHandler.h" },
		{ "ToolTip", "All component records" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInheritableComponentHandler_Statics::NewProp_Records = { "Records", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInheritableComponentHandler, Records), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInheritableComponentHandler_Statics::NewProp_Records_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInheritableComponentHandler_Statics::NewProp_Records_MetaData)) }; // 2460802742
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInheritableComponentHandler_Statics::NewProp_UnnecessaryComponents_Inner = { "UnnecessaryComponents", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInheritableComponentHandler_Statics::NewProp_UnnecessaryComponents_MetaData[] = {
		{ "Comment", "/** List of components that were marked unnecessary, need to keep these around so it doesn't regenerate them when a child asks for one */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/InheritableComponentHandler.h" },
		{ "ToolTip", "List of components that were marked unnecessary, need to keep these around so it doesn't regenerate them when a child asks for one" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInheritableComponentHandler_Statics::NewProp_UnnecessaryComponents = { "UnnecessaryComponents", nullptr, (EPropertyFlags)0x0044008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInheritableComponentHandler, UnnecessaryComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInheritableComponentHandler_Statics::NewProp_UnnecessaryComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInheritableComponentHandler_Statics::NewProp_UnnecessaryComponents_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInheritableComponentHandler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInheritableComponentHandler_Statics::NewProp_Records_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInheritableComponentHandler_Statics::NewProp_Records,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInheritableComponentHandler_Statics::NewProp_UnnecessaryComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInheritableComponentHandler_Statics::NewProp_UnnecessaryComponents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInheritableComponentHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInheritableComponentHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInheritableComponentHandler_Statics::ClassParams = {
		&UInheritableComponentHandler::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInheritableComponentHandler_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInheritableComponentHandler_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInheritableComponentHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInheritableComponentHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInheritableComponentHandler()
	{
		if (!Z_Registration_Info_UClass_UInheritableComponentHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInheritableComponentHandler.OuterSingleton, Z_Construct_UClass_UInheritableComponentHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInheritableComponentHandler.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInheritableComponentHandler>()
	{
		return UInheritableComponentHandler::StaticClass();
	}
	UInheritableComponentHandler::UInheritableComponentHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInheritableComponentHandler);
	UInheritableComponentHandler::~UInheritableComponentHandler() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UInheritableComponentHandler)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InheritableComponentHandler_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InheritableComponentHandler_h_Statics::ScriptStructInfo[] = {
		{ FComponentKey::StaticStruct, Z_Construct_UScriptStruct_FComponentKey_Statics::NewStructOps, TEXT("ComponentKey"), &Z_Registration_Info_UScriptStruct_ComponentKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComponentKey), 267440318U) },
		{ FComponentOverrideRecord::StaticStruct, Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::NewStructOps, TEXT("ComponentOverrideRecord"), &Z_Registration_Info_UScriptStruct_ComponentOverrideRecord, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComponentOverrideRecord), 2460802742U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InheritableComponentHandler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInheritableComponentHandler, UInheritableComponentHandler::StaticClass, TEXT("UInheritableComponentHandler"), &Z_Registration_Info_UClass_UInheritableComponentHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInheritableComponentHandler), 4005124364U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InheritableComponentHandler_h_3180660205(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InheritableComponentHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InheritableComponentHandler_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InheritableComponentHandler_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InheritableComponentHandler_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
