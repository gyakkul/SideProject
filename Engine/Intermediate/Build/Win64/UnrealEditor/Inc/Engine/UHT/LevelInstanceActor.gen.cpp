// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/LevelInstance/LevelInstanceActor.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelInstanceActor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_ALevelInstance();
	ENGINE_API UClass* Z_Construct_UClass_ALevelInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULevelInstanceInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELevelInstanceRuntimeBehavior();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(ALevelInstance::execOnRep_LevelInstanceSpawnGuid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_LevelInstanceSpawnGuid();
		P_NATIVE_END;
	}
	void ALevelInstance::StaticRegisterNativesALevelInstance()
	{
		UClass* Class = ALevelInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_LevelInstanceSpawnGuid", &ALevelInstance::execOnRep_LevelInstanceSpawnGuid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALevelInstance_OnRep_LevelInstanceSpawnGuid_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelInstance_OnRep_LevelInstanceSpawnGuid_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelInstance_OnRep_LevelInstanceSpawnGuid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelInstance, nullptr, "OnRep_LevelInstanceSpawnGuid", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelInstance_OnRep_LevelInstanceSpawnGuid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelInstance_OnRep_LevelInstanceSpawnGuid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelInstance_OnRep_LevelInstanceSpawnGuid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelInstance_OnRep_LevelInstanceSpawnGuid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALevelInstance);
	UClass* Z_Construct_UClass_ALevelInstance_NoRegister()
	{
		return ALevelInstance::StaticClass();
	}
	struct Z_Construct_UClass_ALevelInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldAsset_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_WorldAsset;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CookedWorldAsset_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_CookedWorldAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelInstanceSpawnGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LevelInstanceSpawnGuid;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FBytePropertyParams NewProp_DesiredRuntimeBehavior_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredRuntimeBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DesiredRuntimeBehavior;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALevelInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALevelInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALevelInstance_OnRep_LevelInstanceSpawnGuid, "OnRep_LevelInstanceSpawnGuid" }, // 3099900601
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LevelInstance/LevelInstanceActor.h" },
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceActor.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelInstance_Statics::NewProp_WorldAsset_MetaData[] = {
		{ "Category", "Level" },
		{ "Comment", "/** Level LevelInstance */" },
		{ "DisplayName", "Level" },
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceActor.h" },
		{ "NoCreate", "" },
		{ "ToolTip", "Level LevelInstance" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ALevelInstance_Statics::NewProp_WorldAsset = { "WorldAsset", nullptr, (EPropertyFlags)0x0024080800000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALevelInstance, WorldAsset), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelInstance_Statics::NewProp_WorldAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelInstance_Statics::NewProp_WorldAsset_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelInstance_Statics::NewProp_CookedWorldAsset_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceActor.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ALevelInstance_Statics::NewProp_CookedWorldAsset = { "CookedWorldAsset", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALevelInstance, CookedWorldAsset), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelInstance_Statics::NewProp_CookedWorldAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelInstance_Statics::NewProp_CookedWorldAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelInstance_Statics::NewProp_LevelInstanceSpawnGuid_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALevelInstance_Statics::NewProp_LevelInstanceSpawnGuid = { "LevelInstanceSpawnGuid", "OnRep_LevelInstanceSpawnGuid", (EPropertyFlags)0x0020080100002020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALevelInstance, LevelInstanceSpawnGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_ALevelInstance_Statics::NewProp_LevelInstanceSpawnGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelInstance_Statics::NewProp_LevelInstanceSpawnGuid_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ALevelInstance_Statics::NewProp_DesiredRuntimeBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelInstance_Statics::NewProp_DesiredRuntimeBehavior_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceActor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ALevelInstance_Statics::NewProp_DesiredRuntimeBehavior = { "DesiredRuntimeBehavior", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALevelInstance, DesiredRuntimeBehavior), Z_Construct_UEnum_Engine_ELevelInstanceRuntimeBehavior, METADATA_PARAMS(Z_Construct_UClass_ALevelInstance_Statics::NewProp_DesiredRuntimeBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelInstance_Statics::NewProp_DesiredRuntimeBehavior_MetaData)) }; // 3078225530
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALevelInstance_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelInstance_Statics::NewProp_WorldAsset,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelInstance_Statics::NewProp_CookedWorldAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelInstance_Statics::NewProp_LevelInstanceSpawnGuid,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelInstance_Statics::NewProp_DesiredRuntimeBehavior_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelInstance_Statics::NewProp_DesiredRuntimeBehavior,
#endif // WITH_EDITORONLY_DATA
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALevelInstance_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_ULevelInstanceInterface_NoRegister, (int32)VTABLE_OFFSET(ALevelInstance, ILevelInstanceInterface), false },  // 990147043
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALevelInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALevelInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALevelInstance_Statics::ClassParams = {
		&ALevelInstance::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALevelInstance_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALevelInstance_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALevelInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALevelInstance()
	{
		if (!Z_Registration_Info_UClass_ALevelInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALevelInstance.OuterSingleton, Z_Construct_UClass_ALevelInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALevelInstance.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ALevelInstance>()
	{
		return ALevelInstance::StaticClass();
	}

	void ALevelInstance::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_LevelInstanceSpawnGuid(TEXT("LevelInstanceSpawnGuid"));

		const bool bIsValid = true
			&& Name_LevelInstanceSpawnGuid == ClassReps[(int32)ENetFields_Private::LevelInstanceSpawnGuid].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ALevelInstance"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALevelInstance);
	ALevelInstance::~ALevelInstance() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ALevelInstance)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALevelInstance, ALevelInstance::StaticClass, TEXT("ALevelInstance"), &Z_Registration_Info_UClass_ALevelInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALevelInstance), 2441911351U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_3997946275(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
