// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/GenericTeamAgentInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenericTeamAgentInterface() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UGenericTeamAgentInterface();
	AIMODULE_API UClass* Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_ETeamAttitude();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGenericTeamId();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETeamAttitude;
	static UEnum* ETeamAttitude_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETeamAttitude.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETeamAttitude.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_ETeamAttitude, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("ETeamAttitude"));
		}
		return Z_Registration_Info_UEnum_ETeamAttitude.OuterSingleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<ETeamAttitude::Type>()
	{
		return ETeamAttitude_StaticEnum();
	}
	struct Z_Construct_UEnum_AIModule_ETeamAttitude_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AIModule_ETeamAttitude_Statics::Enumerators[] = {
		{ "ETeamAttitude::Friendly", (int64)ETeamAttitude::Friendly },
		{ "ETeamAttitude::Neutral", (int64)ETeamAttitude::Neutral },
		{ "ETeamAttitude::Hostile", (int64)ETeamAttitude::Hostile },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AIModule_ETeamAttitude_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Friendly.Name", "ETeamAttitude::Friendly" },
		{ "Hostile.Name", "ETeamAttitude::Hostile" },
		{ "ModuleRelativePath", "Classes/GenericTeamAgentInterface.h" },
		{ "Neutral.Name", "ETeamAttitude::Neutral" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_ETeamAttitude_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		"ETeamAttitude",
		"ETeamAttitude::Type",
		Z_Construct_UEnum_AIModule_ETeamAttitude_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_ETeamAttitude_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_AIModule_ETeamAttitude_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_ETeamAttitude_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AIModule_ETeamAttitude()
	{
		if (!Z_Registration_Info_UEnum_ETeamAttitude.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETeamAttitude.InnerSingleton, Z_Construct_UEnum_AIModule_ETeamAttitude_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETeamAttitude.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GenericTeamId;
class UScriptStruct* FGenericTeamId::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GenericTeamId.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GenericTeamId.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGenericTeamId, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("GenericTeamId"));
	}
	return Z_Registration_Info_UScriptStruct_GenericTeamId.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FGenericTeamId>()
{
	return FGenericTeamId::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGenericTeamId_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeamID_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TeamID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenericTeamId_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/GenericTeamAgentInterface.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGenericTeamId_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGenericTeamId>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenericTeamId_Statics::NewProp_TeamID_MetaData[] = {
		{ "Category", "TeamID" },
		{ "ModuleRelativePath", "Classes/GenericTeamAgentInterface.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGenericTeamId_Statics::NewProp_TeamID = { "TeamID", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGenericTeamId, TeamID), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FGenericTeamId_Statics::NewProp_TeamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenericTeamId_Statics::NewProp_TeamID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGenericTeamId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenericTeamId_Statics::NewProp_TeamID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGenericTeamId_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		&NewStructOps,
		"GenericTeamId",
		sizeof(FGenericTeamId),
		alignof(FGenericTeamId),
		Z_Construct_UScriptStruct_FGenericTeamId_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenericTeamId_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGenericTeamId_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenericTeamId_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGenericTeamId()
	{
		if (!Z_Registration_Info_UScriptStruct_GenericTeamId.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GenericTeamId.InnerSingleton, Z_Construct_UScriptStruct_FGenericTeamId_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GenericTeamId.InnerSingleton;
	}
	void UGenericTeamAgentInterface::StaticRegisterNativesUGenericTeamAgentInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGenericTeamAgentInterface);
	UClass* Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister()
	{
		return UGenericTeamAgentInterface::StaticClass();
	}
	struct Z_Construct_UClass_UGenericTeamAgentInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGenericTeamAgentInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenericTeamAgentInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GenericTeamAgentInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGenericTeamAgentInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGenericTeamAgentInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenericTeamAgentInterface_Statics::ClassParams = {
		&UGenericTeamAgentInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGenericTeamAgentInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGenericTeamAgentInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGenericTeamAgentInterface()
	{
		if (!Z_Registration_Info_UClass_UGenericTeamAgentInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenericTeamAgentInterface.OuterSingleton, Z_Construct_UClass_UGenericTeamAgentInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGenericTeamAgentInterface.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UGenericTeamAgentInterface>()
	{
		return UGenericTeamAgentInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGenericTeamAgentInterface);
	UGenericTeamAgentInterface::~UGenericTeamAgentInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_Statics::EnumInfo[] = {
		{ ETeamAttitude_StaticEnum, TEXT("ETeamAttitude"), &Z_Registration_Info_UEnum_ETeamAttitude, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3193118051U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_Statics::ScriptStructInfo[] = {
		{ FGenericTeamId::StaticStruct, Z_Construct_UScriptStruct_FGenericTeamId_Statics::NewStructOps, TEXT("GenericTeamId"), &Z_Registration_Info_UScriptStruct_GenericTeamId, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGenericTeamId), 4223950188U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGenericTeamAgentInterface, UGenericTeamAgentInterface::StaticClass, TEXT("UGenericTeamAgentInterface"), &Z_Registration_Info_UClass_UGenericTeamAgentInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenericTeamAgentInterface), 3302830175U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_2001777647(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
