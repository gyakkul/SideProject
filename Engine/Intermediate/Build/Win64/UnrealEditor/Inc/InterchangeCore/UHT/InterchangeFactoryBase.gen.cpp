// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeFactoryBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeFactoryBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeFactoryBase();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeFactoryBase_NoRegister();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeResultsContainer_NoRegister();
	INTERCHANGECORE_API UEnum* Z_Construct_UEnum_InterchangeCore_EInterchangeFactoryAssetType();
	UPackage* Z_Construct_UPackage__Script_InterchangeCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInterchangeFactoryAssetType;
	static UEnum* EInterchangeFactoryAssetType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInterchangeFactoryAssetType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInterchangeFactoryAssetType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InterchangeCore_EInterchangeFactoryAssetType, (UObject*)Z_Construct_UPackage__Script_InterchangeCore(), TEXT("EInterchangeFactoryAssetType"));
		}
		return Z_Registration_Info_UEnum_EInterchangeFactoryAssetType.OuterSingleton;
	}
	template<> INTERCHANGECORE_API UEnum* StaticEnum<EInterchangeFactoryAssetType>()
	{
		return EInterchangeFactoryAssetType_StaticEnum();
	}
	struct Z_Construct_UEnum_InterchangeCore_EInterchangeFactoryAssetType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_InterchangeCore_EInterchangeFactoryAssetType_Statics::Enumerators[] = {
		{ "EInterchangeFactoryAssetType::None", (int64)EInterchangeFactoryAssetType::None },
		{ "EInterchangeFactoryAssetType::Textures", (int64)EInterchangeFactoryAssetType::Textures },
		{ "EInterchangeFactoryAssetType::Materials", (int64)EInterchangeFactoryAssetType::Materials },
		{ "EInterchangeFactoryAssetType::Meshes", (int64)EInterchangeFactoryAssetType::Meshes },
		{ "EInterchangeFactoryAssetType::Animations", (int64)EInterchangeFactoryAssetType::Animations },
		{ "EInterchangeFactoryAssetType::Physics", (int64)EInterchangeFactoryAssetType::Physics },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_InterchangeCore_EInterchangeFactoryAssetType_Statics::Enum_MetaDataParams[] = {
		{ "Animations.Name", "EInterchangeFactoryAssetType::Animations" },
		{ "BlueprintType", "true" },
		{ "Materials.Name", "EInterchangeFactoryAssetType::Materials" },
		{ "Meshes.Name", "EInterchangeFactoryAssetType::Meshes" },
		{ "ModuleRelativePath", "Public/InterchangeFactoryBase.h" },
		{ "None.Name", "EInterchangeFactoryAssetType::None" },
		{ "Physics.Name", "EInterchangeFactoryAssetType::Physics" },
		{ "Textures.Name", "EInterchangeFactoryAssetType::Textures" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InterchangeCore_EInterchangeFactoryAssetType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_InterchangeCore,
		nullptr,
		"EInterchangeFactoryAssetType",
		"EInterchangeFactoryAssetType",
		Z_Construct_UEnum_InterchangeCore_EInterchangeFactoryAssetType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeCore_EInterchangeFactoryAssetType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_InterchangeCore_EInterchangeFactoryAssetType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeCore_EInterchangeFactoryAssetType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_InterchangeCore_EInterchangeFactoryAssetType()
	{
		if (!Z_Registration_Info_UEnum_EInterchangeFactoryAssetType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInterchangeFactoryAssetType.InnerSingleton, Z_Construct_UEnum_InterchangeCore_EInterchangeFactoryAssetType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInterchangeFactoryAssetType.InnerSingleton;
	}
	DEFINE_FUNCTION(UInterchangeFactoryBase::execGetFactoryClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UClass**)Z_Param__Result=P_THIS->GetFactoryClass();
		P_NATIVE_END;
	}
	void UInterchangeFactoryBase::StaticRegisterNativesUInterchangeFactoryBase()
	{
		UClass* Class = UInterchangeFactoryBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFactoryClass", &UInterchangeFactoryBase::execGetFactoryClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInterchangeFactoryBase_GetFactoryClass_Statics
	{
		struct InterchangeFactoryBase_eventGetFactoryClass_Parms
		{
			UClass* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInterchangeFactoryBase_GetFactoryClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeFactoryBase_eventGetFactoryClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeFactoryBase_GetFactoryClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFactoryBase_GetFactoryClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeFactoryBase_GetFactoryClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Factory" },
		{ "Comment", "/**\n\x09 * return the UClass this factory can create.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeFactoryBase.h" },
		{ "ToolTip", "return the UClass this factory can create." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeFactoryBase_GetFactoryClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeFactoryBase, nullptr, "GetFactoryClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeFactoryBase_GetFactoryClass_Statics::InterchangeFactoryBase_eventGetFactoryClass_Parms), Z_Construct_UFunction_UInterchangeFactoryBase_GetFactoryClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBase_GetFactoryClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeFactoryBase_GetFactoryClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBase_GetFactoryClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeFactoryBase_GetFactoryClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeFactoryBase_GetFactoryClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeFactoryBase);
	UClass* Z_Construct_UClass_UInterchangeFactoryBase_NoRegister()
	{
		return UInterchangeFactoryBase::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeFactoryBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Results_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Results;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeFactoryBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInterchangeFactoryBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeFactoryBase_GetFactoryClass, "GetFactoryClass" }, // 2923110630
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeFactoryBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * UObject asset factory implementation:\n * 1. ImportAssetObject_GameThread - Create the asset UObject, and you can also import source data and setup properties synchronously.\n * 2. ImportAssetObject_Async - Import source data and setup properties asynchronously.\n * 3. SetupObject_GameThread - Do any UObject setup required before the build (before PostEditChange), the UObject dependencies should exist and have all the source data and properties imported.\n * 4. FinalizeObject_GameThread - Do any final UObject setup after the build (after PostEditChange)\n * \n * Actor factory implementation\n * 1. ImportSceneObject_GameThread - Create an actor in a level.\n */" },
		{ "IncludePath", "InterchangeFactoryBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InterchangeFactoryBase.h" },
		{ "ToolTip", "UObject asset factory implementation:\n1. ImportAssetObject_GameThread - Create the asset UObject, and you can also import source data and setup properties synchronously.\n2. ImportAssetObject_Async - Import source data and setup properties asynchronously.\n3. SetupObject_GameThread - Do any UObject setup required before the build (before PostEditChange), the UObject dependencies should exist and have all the source data and properties imported.\n4. FinalizeObject_GameThread - Do any final UObject setup after the build (after PostEditChange)\n\nActor factory implementation\n1. ImportSceneObject_GameThread - Create an actor in a level." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeFactoryBase_Statics::NewProp_Results_MetaData[] = {
		{ "ModuleRelativePath", "Public/InterchangeFactoryBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInterchangeFactoryBase_Statics::NewProp_Results = { "Results", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeFactoryBase, Results), Z_Construct_UClass_UInterchangeResultsContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterchangeFactoryBase_Statics::NewProp_Results_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeFactoryBase_Statics::NewProp_Results_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangeFactoryBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeFactoryBase_Statics::NewProp_Results,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeFactoryBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeFactoryBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeFactoryBase_Statics::ClassParams = {
		&UInterchangeFactoryBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInterchangeFactoryBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeFactoryBase_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeFactoryBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeFactoryBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeFactoryBase()
	{
		if (!Z_Registration_Info_UClass_UInterchangeFactoryBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeFactoryBase.OuterSingleton, Z_Construct_UClass_UInterchangeFactoryBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeFactoryBase.OuterSingleton;
	}
	template<> INTERCHANGECORE_API UClass* StaticClass<UInterchangeFactoryBase>()
	{
		return UInterchangeFactoryBase::StaticClass();
	}
	UInterchangeFactoryBase::UInterchangeFactoryBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeFactoryBase);
	UInterchangeFactoryBase::~UInterchangeFactoryBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeFactoryBase_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeFactoryBase_h_Statics::EnumInfo[] = {
		{ EInterchangeFactoryAssetType_StaticEnum, TEXT("EInterchangeFactoryAssetType"), &Z_Registration_Info_UEnum_EInterchangeFactoryAssetType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4057192772U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeFactoryBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeFactoryBase, UInterchangeFactoryBase::StaticClass, TEXT("UInterchangeFactoryBase"), &Z_Registration_Info_UClass_UInterchangeFactoryBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeFactoryBase), 588373140U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeFactoryBase_h_251664384(TEXT("/Script/InterchangeCore"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeFactoryBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeFactoryBase_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeFactoryBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeFactoryBase_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
