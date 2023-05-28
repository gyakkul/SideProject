// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Library/DMXImport.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXImport() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXImport();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXImport_NoRegister();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXImportAttributeDefinitions();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXImportAttributeDefinitions_NoRegister();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXImportDMXModes();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXImportDMXModes_NoRegister();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXImportFixtureType();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXImportFixtureType_NoRegister();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXImportGeometries();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXImportGeometries_NoRegister();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXImportModels();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXImportModels_NoRegister();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXImportPhysicalDescriptions();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXImportPhysicalDescriptions_NoRegister();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXImportProtocols();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXImportProtocols_NoRegister();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXImportWheels();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXImportWheels_NoRegister();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXColorCIE();
	UPackage* Z_Construct_UPackage__Script_DMXRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DMXColorCIE;
class UScriptStruct* FDMXColorCIE::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DMXColorCIE.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DMXColorCIE.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDMXColorCIE, (UObject*)Z_Construct_UPackage__Script_DMXRuntime(), TEXT("DMXColorCIE"));
	}
	return Z_Registration_Info_UScriptStruct_DMXColorCIE.OuterSingleton;
}
template<> DMXRUNTIME_API UScriptStruct* StaticStruct<FDMXColorCIE>()
{
	return FDMXColorCIE::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDMXColorCIE_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_X;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Y;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YY_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_YY;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXColorCIE_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Library/DMXImport.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDMXColorCIE_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDMXColorCIE>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXColorCIE_Statics::NewProp_X_MetaData[] = {
		{ "Category", "Color" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Library/DMXImport.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDMXColorCIE_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXColorCIE, X), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXColorCIE_Statics::NewProp_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXColorCIE_Statics::NewProp_X_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXColorCIE_Statics::NewProp_Y_MetaData[] = {
		{ "Category", "Color" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Library/DMXImport.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDMXColorCIE_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXColorCIE, Y), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXColorCIE_Statics::NewProp_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXColorCIE_Statics::NewProp_Y_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXColorCIE_Statics::NewProp_YY_MetaData[] = {
		{ "Category", "Color" },
		{ "ClampMax", "255" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Library/DMXImport.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDMXColorCIE_Statics::NewProp_YY = { "YY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXColorCIE, YY), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXColorCIE_Statics::NewProp_YY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXColorCIE_Statics::NewProp_YY_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDMXColorCIE_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXColorCIE_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXColorCIE_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXColorCIE_Statics::NewProp_YY,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDMXColorCIE_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
		nullptr,
		&NewStructOps,
		"DMXColorCIE",
		sizeof(FDMXColorCIE),
		alignof(FDMXColorCIE),
		Z_Construct_UScriptStruct_FDMXColorCIE_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXColorCIE_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXColorCIE_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXColorCIE_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDMXColorCIE()
	{
		if (!Z_Registration_Info_UScriptStruct_DMXColorCIE.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DMXColorCIE.InnerSingleton, Z_Construct_UScriptStruct_FDMXColorCIE_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DMXColorCIE.InnerSingleton;
	}
	void UDMXImportFixtureType::StaticRegisterNativesUDMXImportFixtureType()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXImportFixtureType);
	UClass* Z_Construct_UClass_UDMXImportFixtureType_NoRegister()
	{
		return UDMXImportFixtureType::StaticClass();
	}
	struct Z_Construct_UClass_UDMXImportFixtureType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXImportFixtureType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXImportFixtureType_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Library/DMXImport.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Library/DMXImport.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXImportFixtureType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXImportFixtureType>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXImportFixtureType_Statics::ClassParams = {
		&UDMXImportFixtureType::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXImportFixtureType_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXImportFixtureType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXImportFixtureType()
	{
		if (!Z_Registration_Info_UClass_UDMXImportFixtureType.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXImportFixtureType.OuterSingleton, Z_Construct_UClass_UDMXImportFixtureType_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXImportFixtureType.OuterSingleton;
	}
	template<> DMXRUNTIME_API UClass* StaticClass<UDMXImportFixtureType>()
	{
		return UDMXImportFixtureType::StaticClass();
	}
	UDMXImportFixtureType::UDMXImportFixtureType(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXImportFixtureType);
	UDMXImportFixtureType::~UDMXImportFixtureType() {}
	void UDMXImportAttributeDefinitions::StaticRegisterNativesUDMXImportAttributeDefinitions()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXImportAttributeDefinitions);
	UClass* Z_Construct_UClass_UDMXImportAttributeDefinitions_NoRegister()
	{
		return UDMXImportAttributeDefinitions::StaticClass();
	}
	struct Z_Construct_UClass_UDMXImportAttributeDefinitions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXImportAttributeDefinitions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXImportAttributeDefinitions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Library/DMXImport.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Library/DMXImport.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXImportAttributeDefinitions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXImportAttributeDefinitions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXImportAttributeDefinitions_Statics::ClassParams = {
		&UDMXImportAttributeDefinitions::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXImportAttributeDefinitions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXImportAttributeDefinitions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXImportAttributeDefinitions()
	{
		if (!Z_Registration_Info_UClass_UDMXImportAttributeDefinitions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXImportAttributeDefinitions.OuterSingleton, Z_Construct_UClass_UDMXImportAttributeDefinitions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXImportAttributeDefinitions.OuterSingleton;
	}
	template<> DMXRUNTIME_API UClass* StaticClass<UDMXImportAttributeDefinitions>()
	{
		return UDMXImportAttributeDefinitions::StaticClass();
	}
	UDMXImportAttributeDefinitions::UDMXImportAttributeDefinitions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXImportAttributeDefinitions);
	UDMXImportAttributeDefinitions::~UDMXImportAttributeDefinitions() {}
	void UDMXImportWheels::StaticRegisterNativesUDMXImportWheels()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXImportWheels);
	UClass* Z_Construct_UClass_UDMXImportWheels_NoRegister()
	{
		return UDMXImportWheels::StaticClass();
	}
	struct Z_Construct_UClass_UDMXImportWheels_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXImportWheels_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXImportWheels_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Library/DMXImport.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Library/DMXImport.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXImportWheels_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXImportWheels>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXImportWheels_Statics::ClassParams = {
		&UDMXImportWheels::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXImportWheels_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXImportWheels_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXImportWheels()
	{
		if (!Z_Registration_Info_UClass_UDMXImportWheels.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXImportWheels.OuterSingleton, Z_Construct_UClass_UDMXImportWheels_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXImportWheels.OuterSingleton;
	}
	template<> DMXRUNTIME_API UClass* StaticClass<UDMXImportWheels>()
	{
		return UDMXImportWheels::StaticClass();
	}
	UDMXImportWheels::UDMXImportWheels(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXImportWheels);
	UDMXImportWheels::~UDMXImportWheels() {}
	void UDMXImportPhysicalDescriptions::StaticRegisterNativesUDMXImportPhysicalDescriptions()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXImportPhysicalDescriptions);
	UClass* Z_Construct_UClass_UDMXImportPhysicalDescriptions_NoRegister()
	{
		return UDMXImportPhysicalDescriptions::StaticClass();
	}
	struct Z_Construct_UClass_UDMXImportPhysicalDescriptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXImportPhysicalDescriptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXImportPhysicalDescriptions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Library/DMXImport.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Library/DMXImport.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXImportPhysicalDescriptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXImportPhysicalDescriptions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXImportPhysicalDescriptions_Statics::ClassParams = {
		&UDMXImportPhysicalDescriptions::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXImportPhysicalDescriptions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXImportPhysicalDescriptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXImportPhysicalDescriptions()
	{
		if (!Z_Registration_Info_UClass_UDMXImportPhysicalDescriptions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXImportPhysicalDescriptions.OuterSingleton, Z_Construct_UClass_UDMXImportPhysicalDescriptions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXImportPhysicalDescriptions.OuterSingleton;
	}
	template<> DMXRUNTIME_API UClass* StaticClass<UDMXImportPhysicalDescriptions>()
	{
		return UDMXImportPhysicalDescriptions::StaticClass();
	}
	UDMXImportPhysicalDescriptions::UDMXImportPhysicalDescriptions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXImportPhysicalDescriptions);
	UDMXImportPhysicalDescriptions::~UDMXImportPhysicalDescriptions() {}
	void UDMXImportModels::StaticRegisterNativesUDMXImportModels()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXImportModels);
	UClass* Z_Construct_UClass_UDMXImportModels_NoRegister()
	{
		return UDMXImportModels::StaticClass();
	}
	struct Z_Construct_UClass_UDMXImportModels_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXImportModels_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXImportModels_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Library/DMXImport.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Library/DMXImport.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXImportModels_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXImportModels>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXImportModels_Statics::ClassParams = {
		&UDMXImportModels::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXImportModels_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXImportModels_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXImportModels()
	{
		if (!Z_Registration_Info_UClass_UDMXImportModels.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXImportModels.OuterSingleton, Z_Construct_UClass_UDMXImportModels_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXImportModels.OuterSingleton;
	}
	template<> DMXRUNTIME_API UClass* StaticClass<UDMXImportModels>()
	{
		return UDMXImportModels::StaticClass();
	}
	UDMXImportModels::UDMXImportModels(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXImportModels);
	UDMXImportModels::~UDMXImportModels() {}
	void UDMXImportGeometries::StaticRegisterNativesUDMXImportGeometries()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXImportGeometries);
	UClass* Z_Construct_UClass_UDMXImportGeometries_NoRegister()
	{
		return UDMXImportGeometries::StaticClass();
	}
	struct Z_Construct_UClass_UDMXImportGeometries_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXImportGeometries_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXImportGeometries_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Library/DMXImport.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Library/DMXImport.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXImportGeometries_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXImportGeometries>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXImportGeometries_Statics::ClassParams = {
		&UDMXImportGeometries::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXImportGeometries_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXImportGeometries_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXImportGeometries()
	{
		if (!Z_Registration_Info_UClass_UDMXImportGeometries.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXImportGeometries.OuterSingleton, Z_Construct_UClass_UDMXImportGeometries_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXImportGeometries.OuterSingleton;
	}
	template<> DMXRUNTIME_API UClass* StaticClass<UDMXImportGeometries>()
	{
		return UDMXImportGeometries::StaticClass();
	}
	UDMXImportGeometries::UDMXImportGeometries(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXImportGeometries);
	UDMXImportGeometries::~UDMXImportGeometries() {}
	void UDMXImportDMXModes::StaticRegisterNativesUDMXImportDMXModes()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXImportDMXModes);
	UClass* Z_Construct_UClass_UDMXImportDMXModes_NoRegister()
	{
		return UDMXImportDMXModes::StaticClass();
	}
	struct Z_Construct_UClass_UDMXImportDMXModes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXImportDMXModes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXImportDMXModes_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Library/DMXImport.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Library/DMXImport.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXImportDMXModes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXImportDMXModes>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXImportDMXModes_Statics::ClassParams = {
		&UDMXImportDMXModes::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXImportDMXModes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXImportDMXModes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXImportDMXModes()
	{
		if (!Z_Registration_Info_UClass_UDMXImportDMXModes.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXImportDMXModes.OuterSingleton, Z_Construct_UClass_UDMXImportDMXModes_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXImportDMXModes.OuterSingleton;
	}
	template<> DMXRUNTIME_API UClass* StaticClass<UDMXImportDMXModes>()
	{
		return UDMXImportDMXModes::StaticClass();
	}
	UDMXImportDMXModes::UDMXImportDMXModes(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXImportDMXModes);
	UDMXImportDMXModes::~UDMXImportDMXModes() {}
	void UDMXImportProtocols::StaticRegisterNativesUDMXImportProtocols()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXImportProtocols);
	UClass* Z_Construct_UClass_UDMXImportProtocols_NoRegister()
	{
		return UDMXImportProtocols::StaticClass();
	}
	struct Z_Construct_UClass_UDMXImportProtocols_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXImportProtocols_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXImportProtocols_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Library/DMXImport.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Library/DMXImport.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXImportProtocols_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXImportProtocols>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXImportProtocols_Statics::ClassParams = {
		&UDMXImportProtocols::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXImportProtocols_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXImportProtocols_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXImportProtocols()
	{
		if (!Z_Registration_Info_UClass_UDMXImportProtocols.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXImportProtocols.OuterSingleton, Z_Construct_UClass_UDMXImportProtocols_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXImportProtocols.OuterSingleton;
	}
	template<> DMXRUNTIME_API UClass* StaticClass<UDMXImportProtocols>()
	{
		return UDMXImportProtocols::StaticClass();
	}
	UDMXImportProtocols::UDMXImportProtocols(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXImportProtocols);
	UDMXImportProtocols::~UDMXImportProtocols() {}
	void UDMXImport::StaticRegisterNativesUDMXImport()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXImport);
	UClass* Z_Construct_UClass_UDMXImport_NoRegister()
	{
		return UDMXImport::StaticClass();
	}
	struct Z_Construct_UClass_UDMXImport_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FixtureType_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FixtureType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeDefinitions_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AttributeDefinitions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Wheels_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Wheels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalDescriptions_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PhysicalDescriptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Models_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Models;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Geometries_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Geometries;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DMXModes_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DMXModes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Protocols_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Protocols;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXImport_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXImport_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Library/DMXImport.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Library/DMXImport.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXImport_Statics::NewProp_FixtureType_MetaData[] = {
		{ "Category", "Fixture Type" },
		{ "EditInline", "" },
		{ "ModuleRelativePath", "Public/Library/DMXImport.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDMXImport_Statics::NewProp_FixtureType = { "FixtureType", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXImport, FixtureType), Z_Construct_UClass_UDMXImportFixtureType_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDMXImport_Statics::NewProp_FixtureType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXImport_Statics::NewProp_FixtureType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXImport_Statics::NewProp_AttributeDefinitions_MetaData[] = {
		{ "Category", "Attribute Definitions" },
		{ "EditInline", "" },
		{ "ModuleRelativePath", "Public/Library/DMXImport.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDMXImport_Statics::NewProp_AttributeDefinitions = { "AttributeDefinitions", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXImport, AttributeDefinitions), Z_Construct_UClass_UDMXImportAttributeDefinitions_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDMXImport_Statics::NewProp_AttributeDefinitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXImport_Statics::NewProp_AttributeDefinitions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXImport_Statics::NewProp_Wheels_MetaData[] = {
		{ "Category", "Wheels" },
		{ "EditInline", "" },
		{ "ModuleRelativePath", "Public/Library/DMXImport.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDMXImport_Statics::NewProp_Wheels = { "Wheels", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXImport, Wheels), Z_Construct_UClass_UDMXImportWheels_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDMXImport_Statics::NewProp_Wheels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXImport_Statics::NewProp_Wheels_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXImport_Statics::NewProp_PhysicalDescriptions_MetaData[] = {
		{ "Category", "Physical Descriptions" },
		{ "EditInline", "" },
		{ "ModuleRelativePath", "Public/Library/DMXImport.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDMXImport_Statics::NewProp_PhysicalDescriptions = { "PhysicalDescriptions", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXImport, PhysicalDescriptions), Z_Construct_UClass_UDMXImportPhysicalDescriptions_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDMXImport_Statics::NewProp_PhysicalDescriptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXImport_Statics::NewProp_PhysicalDescriptions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXImport_Statics::NewProp_Models_MetaData[] = {
		{ "Category", "Models" },
		{ "EditInline", "" },
		{ "ModuleRelativePath", "Public/Library/DMXImport.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDMXImport_Statics::NewProp_Models = { "Models", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXImport, Models), Z_Construct_UClass_UDMXImportModels_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDMXImport_Statics::NewProp_Models_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXImport_Statics::NewProp_Models_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXImport_Statics::NewProp_Geometries_MetaData[] = {
		{ "Category", "Geometries" },
		{ "EditInline", "" },
		{ "ModuleRelativePath", "Public/Library/DMXImport.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDMXImport_Statics::NewProp_Geometries = { "Geometries", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXImport, Geometries), Z_Construct_UClass_UDMXImportGeometries_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDMXImport_Statics::NewProp_Geometries_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXImport_Statics::NewProp_Geometries_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXImport_Statics::NewProp_DMXModes_MetaData[] = {
		{ "Category", "DMXModes" },
		{ "EditInline", "" },
		{ "ModuleRelativePath", "Public/Library/DMXImport.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDMXImport_Statics::NewProp_DMXModes = { "DMXModes", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXImport, DMXModes), Z_Construct_UClass_UDMXImportDMXModes_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDMXImport_Statics::NewProp_DMXModes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXImport_Statics::NewProp_DMXModes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXImport_Statics::NewProp_Protocols_MetaData[] = {
		{ "Category", "Protocols" },
		{ "EditInline", "" },
		{ "ModuleRelativePath", "Public/Library/DMXImport.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDMXImport_Statics::NewProp_Protocols = { "Protocols", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXImport, Protocols), Z_Construct_UClass_UDMXImportProtocols_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDMXImport_Statics::NewProp_Protocols_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXImport_Statics::NewProp_Protocols_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXImport_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXImport_Statics::NewProp_FixtureType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXImport_Statics::NewProp_AttributeDefinitions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXImport_Statics::NewProp_Wheels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXImport_Statics::NewProp_PhysicalDescriptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXImport_Statics::NewProp_Models,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXImport_Statics::NewProp_Geometries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXImport_Statics::NewProp_DMXModes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXImport_Statics::NewProp_Protocols,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXImport_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXImport>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXImport_Statics::ClassParams = {
		&UDMXImport::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXImport_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXImport_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXImport_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXImport_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXImport()
	{
		if (!Z_Registration_Info_UClass_UDMXImport.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXImport.OuterSingleton, Z_Construct_UClass_UDMXImport_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXImport.OuterSingleton;
	}
	template<> DMXRUNTIME_API UClass* StaticClass<UDMXImport>()
	{
		return UDMXImport::StaticClass();
	}
	UDMXImport::UDMXImport(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXImport);
	UDMXImport::~UDMXImport() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImport_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImport_h_Statics::ScriptStructInfo[] = {
		{ FDMXColorCIE::StaticStruct, Z_Construct_UScriptStruct_FDMXColorCIE_Statics::NewStructOps, TEXT("DMXColorCIE"), &Z_Registration_Info_UScriptStruct_DMXColorCIE, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDMXColorCIE), 2195148182U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImport_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXImportFixtureType, UDMXImportFixtureType::StaticClass, TEXT("UDMXImportFixtureType"), &Z_Registration_Info_UClass_UDMXImportFixtureType, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXImportFixtureType), 2439873553U) },
		{ Z_Construct_UClass_UDMXImportAttributeDefinitions, UDMXImportAttributeDefinitions::StaticClass, TEXT("UDMXImportAttributeDefinitions"), &Z_Registration_Info_UClass_UDMXImportAttributeDefinitions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXImportAttributeDefinitions), 3841074665U) },
		{ Z_Construct_UClass_UDMXImportWheels, UDMXImportWheels::StaticClass, TEXT("UDMXImportWheels"), &Z_Registration_Info_UClass_UDMXImportWheels, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXImportWheels), 2497454177U) },
		{ Z_Construct_UClass_UDMXImportPhysicalDescriptions, UDMXImportPhysicalDescriptions::StaticClass, TEXT("UDMXImportPhysicalDescriptions"), &Z_Registration_Info_UClass_UDMXImportPhysicalDescriptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXImportPhysicalDescriptions), 119601665U) },
		{ Z_Construct_UClass_UDMXImportModels, UDMXImportModels::StaticClass, TEXT("UDMXImportModels"), &Z_Registration_Info_UClass_UDMXImportModels, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXImportModels), 597050492U) },
		{ Z_Construct_UClass_UDMXImportGeometries, UDMXImportGeometries::StaticClass, TEXT("UDMXImportGeometries"), &Z_Registration_Info_UClass_UDMXImportGeometries, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXImportGeometries), 2313900827U) },
		{ Z_Construct_UClass_UDMXImportDMXModes, UDMXImportDMXModes::StaticClass, TEXT("UDMXImportDMXModes"), &Z_Registration_Info_UClass_UDMXImportDMXModes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXImportDMXModes), 1701495443U) },
		{ Z_Construct_UClass_UDMXImportProtocols, UDMXImportProtocols::StaticClass, TEXT("UDMXImportProtocols"), &Z_Registration_Info_UClass_UDMXImportProtocols, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXImportProtocols), 557707143U) },
		{ Z_Construct_UClass_UDMXImport, UDMXImport::StaticClass, TEXT("UDMXImport"), &Z_Registration_Info_UClass_UDMXImport, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXImport), 1164717099U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImport_h_4178670852(TEXT("/Script/DMXRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImport_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImport_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImport_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXImport_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
