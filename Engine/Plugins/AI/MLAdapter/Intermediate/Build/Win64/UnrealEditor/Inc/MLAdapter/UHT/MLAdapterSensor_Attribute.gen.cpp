// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/AI/MLAdapter/Source/MLAdapter/Public/Sensors/MLAdapterSensor_Attribute.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMLAdapterSensor_Attribute() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet_NoRegister();
	MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterSensor();
	MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterSensor_Attribute();
	MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterSensor_Attribute_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MLAdapter();
// End Cross Module References
	void UMLAdapterSensor_Attribute::StaticRegisterNativesUMLAdapterSensor_Attribute()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMLAdapterSensor_Attribute);
	UClass* Z_Construct_UClass_UMLAdapterSensor_Attribute_NoRegister()
	{
		return UMLAdapterSensor_Attribute::StaticClass();
	}
	struct Z_Construct_UClass_UMLAdapterSensor_Attribute_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AttributeSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMLAdapterSensor_Attribute_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMLAdapterSensor,
		(UObject* (*)())Z_Construct_UPackage__Script_MLAdapter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterSensor_Attribute_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Sensors/MLAdapterSensor_Attribute.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Sensors/MLAdapterSensor_Attribute.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterSensor_Attribute_Statics::NewProp_AttributeSet_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Sensors/MLAdapterSensor_Attribute.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMLAdapterSensor_Attribute_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLAdapterSensor_Attribute, AttributeSet), Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMLAdapterSensor_Attribute_Statics::NewProp_AttributeSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterSensor_Attribute_Statics::NewProp_AttributeSet_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMLAdapterSensor_Attribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterSensor_Attribute_Statics::NewProp_AttributeSet,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMLAdapterSensor_Attribute_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMLAdapterSensor_Attribute>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMLAdapterSensor_Attribute_Statics::ClassParams = {
		&UMLAdapterSensor_Attribute::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMLAdapterSensor_Attribute_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterSensor_Attribute_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMLAdapterSensor_Attribute_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterSensor_Attribute_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMLAdapterSensor_Attribute()
	{
		if (!Z_Registration_Info_UClass_UMLAdapterSensor_Attribute.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMLAdapterSensor_Attribute.OuterSingleton, Z_Construct_UClass_UMLAdapterSensor_Attribute_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMLAdapterSensor_Attribute.OuterSingleton;
	}
	template<> MLADAPTER_API UClass* StaticClass<UMLAdapterSensor_Attribute>()
	{
		return UMLAdapterSensor_Attribute::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMLAdapterSensor_Attribute);
	UMLAdapterSensor_Attribute::~UMLAdapterSensor_Attribute() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_Attribute_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_Attribute_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMLAdapterSensor_Attribute, UMLAdapterSensor_Attribute::StaticClass, TEXT("UMLAdapterSensor_Attribute"), &Z_Registration_Info_UClass_UMLAdapterSensor_Attribute, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMLAdapterSensor_Attribute), 828596852U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_Attribute_h_2909080751(TEXT("/Script/MLAdapter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_Attribute_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_Attribute_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
