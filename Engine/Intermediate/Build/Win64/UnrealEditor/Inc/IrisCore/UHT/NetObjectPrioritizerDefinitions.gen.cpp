// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Iris/ReplicationSystem/Prioritization/NetObjectPrioritizerDefinitions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetObjectPrioritizerDefinitions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	IRISCORE_API UClass* Z_Construct_UClass_UNetObjectPrioritizerDefinitions();
	IRISCORE_API UClass* Z_Construct_UClass_UNetObjectPrioritizerDefinitions_NoRegister();
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition();
	UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NetObjectPrioritizerDefinition;
class UScriptStruct* FNetObjectPrioritizerDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NetObjectPrioritizerDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NetObjectPrioritizerDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("NetObjectPrioritizerDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_NetObjectPrioritizerDefinition.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FNetObjectPrioritizerDefinition>()
{
	return FNetObjectPrioritizerDefinition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrioritizerName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PrioritizerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ClassName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_Class;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConfigClassName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ConfigClassName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConfigClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_ConfigClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Prioritizer definition. Configurable via UNetObjectPrioritizerDefinitions. */" },
		{ "ModuleRelativePath", "Private/Iris/ReplicationSystem/Prioritization/NetObjectPrioritizerDefinitions.h" },
		{ "ToolTip", "Prioritizer definition. Configurable via UNetObjectPrioritizerDefinitions." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNetObjectPrioritizerDefinition>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition_Statics::NewProp_PrioritizerName_MetaData[] = {
		{ "Comment", "/** Prioritizer identifier. Used to uniquely identify a prioritizer in various APIs. */" },
		{ "ModuleRelativePath", "Private/Iris/ReplicationSystem/Prioritization/NetObjectPrioritizerDefinitions.h" },
		{ "ToolTip", "Prioritizer identifier. Used to uniquely identify a prioritizer in various APIs." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition_Statics::NewProp_PrioritizerName = { "PrioritizerName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNetObjectPrioritizerDefinition, PrioritizerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition_Statics::NewProp_PrioritizerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition_Statics::NewProp_PrioritizerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition_Statics::NewProp_ClassName_MetaData[] = {
		{ "Comment", "/**\n\x09 * UClass name, specified by its fully qualified path, used to create the UNetObjectPrioritizer. You can have multiple instances of the same prioritizer as long as \n\x09 * their PrioritizerNames are unique.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Iris/ReplicationSystem/Prioritization/NetObjectPrioritizerDefinitions.h" },
		{ "ToolTip", "UClass name, specified by its fully qualified path, used to create the UNetObjectPrioritizer. You can have multiple instances of the same prioritizer as long as\ntheir PrioritizerNames are unique." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNetObjectPrioritizerDefinition, ClassName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition_Statics::NewProp_ClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition_Statics::NewProp_ClassName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition_Statics::NewProp_Class_MetaData[] = {
		{ "Comment", "/** UClass used to create the UNetObjectPrioritizer. Filled in automatically when reading the config. */" },
		{ "ModuleRelativePath", "Private/Iris/ReplicationSystem/Prioritization/NetObjectPrioritizerDefinitions.h" },
		{ "ToolTip", "UClass used to create the UNetObjectPrioritizer. Filled in automatically when reading the config." },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNetObjectPrioritizerDefinition, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition_Statics::NewProp_Class_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition_Statics::NewProp_ConfigClassName_MetaData[] = {
		{ "Comment", "/**\n\x09 * Optional UClass, specified by its fully qualified path, used to create the UNetObjectPrioritizerConfig. The class default instance will be passed at prioritizer initialization.\n\x09 * If you want multiple instances of the same prioritizer then use subclassing to create unique prioritizer configs.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Iris/ReplicationSystem/Prioritization/NetObjectPrioritizerDefinitions.h" },
		{ "ToolTip", "Optional UClass, specified by its fully qualified path, used to create the UNetObjectPrioritizerConfig. The class default instance will be passed at prioritizer initialization.\nIf you want multiple instances of the same prioritizer then use subclassing to create unique prioritizer configs." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition_Statics::NewProp_ConfigClassName = { "ConfigClassName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNetObjectPrioritizerDefinition, ConfigClassName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition_Statics::NewProp_ConfigClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition_Statics::NewProp_ConfigClassName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition_Statics::NewProp_ConfigClass_MetaData[] = {
		{ "Comment", "/** UClass used to create the UNetObjectPrioritizerConfig. Filled in automatically when reading the config. */" },
		{ "ModuleRelativePath", "Private/Iris/ReplicationSystem/Prioritization/NetObjectPrioritizerDefinitions.h" },
		{ "ToolTip", "UClass used to create the UNetObjectPrioritizerConfig. Filled in automatically when reading the config." },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition_Statics::NewProp_ConfigClass = { "ConfigClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNetObjectPrioritizerDefinition, ConfigClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition_Statics::NewProp_ConfigClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition_Statics::NewProp_ConfigClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition_Statics::NewProp_PrioritizerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition_Statics::NewProp_ClassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition_Statics::NewProp_ConfigClassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition_Statics::NewProp_ConfigClass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
		nullptr,
		&NewStructOps,
		"NetObjectPrioritizerDefinition",
		sizeof(FNetObjectPrioritizerDefinition),
		alignof(FNetObjectPrioritizerDefinition),
		Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition()
	{
		if (!Z_Registration_Info_UScriptStruct_NetObjectPrioritizerDefinition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NetObjectPrioritizerDefinition.InnerSingleton, Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NetObjectPrioritizerDefinition.InnerSingleton;
	}
	void UNetObjectPrioritizerDefinitions::StaticRegisterNativesUNetObjectPrioritizerDefinitions()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetObjectPrioritizerDefinitions);
	UClass* Z_Construct_UClass_UNetObjectPrioritizerDefinitions_NoRegister()
	{
		return UNetObjectPrioritizerDefinitions::StaticClass();
	}
	struct Z_Construct_UClass_UNetObjectPrioritizerDefinitions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NetObjectPrioritizerDefinitions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NetObjectPrioritizerDefinitions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NetObjectPrioritizerDefinitions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNetObjectPrioritizerDefinitions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetObjectPrioritizerDefinitions_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Configurable prioritizer definitions. Valid prioritizer definitions are auto-created by the prioritization system. */" },
		{ "IncludePath", "Iris/ReplicationSystem/Prioritization/NetObjectPrioritizerDefinitions.h" },
		{ "ModuleRelativePath", "Private/Iris/ReplicationSystem/Prioritization/NetObjectPrioritizerDefinitions.h" },
		{ "ToolTip", "Configurable prioritizer definitions. Valid prioritizer definitions are auto-created by the prioritization system." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNetObjectPrioritizerDefinitions_Statics::NewProp_NetObjectPrioritizerDefinitions_Inner = { "NetObjectPrioritizerDefinitions", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition, METADATA_PARAMS(nullptr, 0) }; // 4019232445
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetObjectPrioritizerDefinitions_Statics::NewProp_NetObjectPrioritizerDefinitions_MetaData[] = {
		{ "Comment", "/**\n\x09 * Prioritizer definitions.\n\x09 * The first valid definition will assume the role as default spatial prioritizer. All objects with a RepTag_WorldLocation tag will \n\x09 * be added to the default prioritizer. To override the behavior a prioritizer must be set via calls to the ReplicationSystem.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Iris/ReplicationSystem/Prioritization/NetObjectPrioritizerDefinitions.h" },
		{ "ToolTip", "Prioritizer definitions.\nThe first valid definition will assume the role as default spatial prioritizer. All objects with a RepTag_WorldLocation tag will\nbe added to the default prioritizer. To override the behavior a prioritizer must be set via calls to the ReplicationSystem." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNetObjectPrioritizerDefinitions_Statics::NewProp_NetObjectPrioritizerDefinitions = { "NetObjectPrioritizerDefinitions", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNetObjectPrioritizerDefinitions, NetObjectPrioritizerDefinitions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNetObjectPrioritizerDefinitions_Statics::NewProp_NetObjectPrioritizerDefinitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectPrioritizerDefinitions_Statics::NewProp_NetObjectPrioritizerDefinitions_MetaData)) }; // 4019232445
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNetObjectPrioritizerDefinitions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetObjectPrioritizerDefinitions_Statics::NewProp_NetObjectPrioritizerDefinitions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetObjectPrioritizerDefinitions_Statics::NewProp_NetObjectPrioritizerDefinitions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNetObjectPrioritizerDefinitions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetObjectPrioritizerDefinitions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetObjectPrioritizerDefinitions_Statics::ClassParams = {
		&UNetObjectPrioritizerDefinitions::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNetObjectPrioritizerDefinitions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectPrioritizerDefinitions_Statics::PropPointers),
		0,
		0x000000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UNetObjectPrioritizerDefinitions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectPrioritizerDefinitions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNetObjectPrioritizerDefinitions()
	{
		if (!Z_Registration_Info_UClass_UNetObjectPrioritizerDefinitions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetObjectPrioritizerDefinitions.OuterSingleton, Z_Construct_UClass_UNetObjectPrioritizerDefinitions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNetObjectPrioritizerDefinitions.OuterSingleton;
	}
	template<> IRISCORE_API UClass* StaticClass<UNetObjectPrioritizerDefinitions>()
	{
		return UNetObjectPrioritizerDefinitions::StaticClass();
	}
	UNetObjectPrioritizerDefinitions::UNetObjectPrioritizerDefinitions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNetObjectPrioritizerDefinitions);
	UNetObjectPrioritizerDefinitions::~UNetObjectPrioritizerDefinitions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_Prioritization_NetObjectPrioritizerDefinitions_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_Prioritization_NetObjectPrioritizerDefinitions_h_Statics::ScriptStructInfo[] = {
		{ FNetObjectPrioritizerDefinition::StaticStruct, Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition_Statics::NewStructOps, TEXT("NetObjectPrioritizerDefinition"), &Z_Registration_Info_UScriptStruct_NetObjectPrioritizerDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNetObjectPrioritizerDefinition), 4019232445U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_Prioritization_NetObjectPrioritizerDefinitions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNetObjectPrioritizerDefinitions, UNetObjectPrioritizerDefinitions::StaticClass, TEXT("UNetObjectPrioritizerDefinitions"), &Z_Registration_Info_UClass_UNetObjectPrioritizerDefinitions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetObjectPrioritizerDefinitions), 3669373703U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_Prioritization_NetObjectPrioritizerDefinitions_h_2931035592(TEXT("/Script/IrisCore"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_Prioritization_NetObjectPrioritizerDefinitions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_Prioritization_NetObjectPrioritizerDefinitions_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_Prioritization_NetObjectPrioritizerDefinitions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_Prioritization_NetObjectPrioritizerDefinitions_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
