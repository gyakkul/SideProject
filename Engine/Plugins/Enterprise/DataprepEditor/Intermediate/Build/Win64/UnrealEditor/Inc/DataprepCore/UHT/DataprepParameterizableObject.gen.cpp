// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataprepParameterizableObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataprepParameterizableObject() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepParameterizableObject();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepParameterizableObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DataprepCore();
// End Cross Module References
	void UDataprepParameterizableObject::StaticRegisterNativesUDataprepParameterizableObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataprepParameterizableObject);
	UClass* Z_Construct_UClass_UDataprepParameterizableObject_NoRegister()
	{
		return UDataprepParameterizableObject::StaticClass();
	}
	struct Z_Construct_UClass_UDataprepParameterizableObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataprepParameterizableObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepParameterizableObject_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The base class of all the object that can interact with the dataprep parameterization\n * This include all the parameterizable object and the parameterization object itself\n * Also all the object that can be place in a dataprep action derive from it\n */" },
		{ "IncludePath", "DataprepParameterizableObject.h" },
		{ "ModuleRelativePath", "Public/DataprepParameterizableObject.h" },
		{ "ToolTip", "The base class of all the object that can interact with the dataprep parameterization\nThis include all the parameterizable object and the parameterization object itself\nAlso all the object that can be place in a dataprep action derive from it" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataprepParameterizableObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataprepParameterizableObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataprepParameterizableObject_Statics::ClassParams = {
		&UDataprepParameterizableObject::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDataprepParameterizableObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepParameterizableObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataprepParameterizableObject()
	{
		if (!Z_Registration_Info_UClass_UDataprepParameterizableObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataprepParameterizableObject.OuterSingleton, Z_Construct_UClass_UDataprepParameterizableObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataprepParameterizableObject.OuterSingleton;
	}
	template<> DATAPREPCORE_API UClass* StaticClass<UDataprepParameterizableObject>()
	{
		return UDataprepParameterizableObject::StaticClass();
	}
	UDataprepParameterizableObject::UDataprepParameterizableObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataprepParameterizableObject);
	UDataprepParameterizableObject::~UDataprepParameterizableObject() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepParameterizableObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepParameterizableObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataprepParameterizableObject, UDataprepParameterizableObject::StaticClass, TEXT("UDataprepParameterizableObject"), &Z_Registration_Info_UClass_UDataprepParameterizableObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataprepParameterizableObject), 1628396221U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepParameterizableObject_h_1398786840(TEXT("/Script/DataprepCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepParameterizableObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepParameterizableObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
