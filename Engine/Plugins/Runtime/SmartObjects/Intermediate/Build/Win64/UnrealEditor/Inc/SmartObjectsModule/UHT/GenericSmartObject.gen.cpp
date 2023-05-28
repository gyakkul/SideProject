// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GenericSmartObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenericSmartObject() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_AGenericSmartObject();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_AGenericSmartObject_NoRegister();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectComponent_NoRegister();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectRenderingComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SmartObjectsModule();
// End Cross Module References
	void AGenericSmartObject::StaticRegisterNativesAGenericSmartObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGenericSmartObject);
	UClass* Z_Construct_UClass_AGenericSmartObject_NoRegister()
	{
		return AGenericSmartObject::StaticClass();
	}
	struct Z_Construct_UClass_AGenericSmartObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SOComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SOComponent;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderingComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RenderingComponent;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGenericSmartObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGenericSmartObject_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input" },
		{ "IncludePath", "GenericSmartObject.h" },
		{ "ModuleRelativePath", "Public/GenericSmartObject.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGenericSmartObject_Statics::NewProp_SOComponent_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GenericSmartObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AGenericSmartObject_Statics::NewProp_SOComponent = { "SOComponent", nullptr, (EPropertyFlags)0x0024080002080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGenericSmartObject, SOComponent), Z_Construct_UClass_USmartObjectComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGenericSmartObject_Statics::NewProp_SOComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGenericSmartObject_Statics::NewProp_SOComponent_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGenericSmartObject_Statics::NewProp_RenderingComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GenericSmartObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AGenericSmartObject_Statics::NewProp_RenderingComponent = { "RenderingComponent", nullptr, (EPropertyFlags)0x0024080802080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGenericSmartObject, RenderingComponent), Z_Construct_UClass_USmartObjectRenderingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGenericSmartObject_Statics::NewProp_RenderingComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGenericSmartObject_Statics::NewProp_RenderingComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGenericSmartObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGenericSmartObject_Statics::NewProp_SOComponent,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGenericSmartObject_Statics::NewProp_RenderingComponent,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGenericSmartObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGenericSmartObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGenericSmartObject_Statics::ClassParams = {
		&AGenericSmartObject::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGenericSmartObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGenericSmartObject_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGenericSmartObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGenericSmartObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGenericSmartObject()
	{
		if (!Z_Registration_Info_UClass_AGenericSmartObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGenericSmartObject.OuterSingleton, Z_Construct_UClass_AGenericSmartObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGenericSmartObject.OuterSingleton;
	}
	template<> SMARTOBJECTSMODULE_API UClass* StaticClass<AGenericSmartObject>()
	{
		return AGenericSmartObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGenericSmartObject);
	AGenericSmartObject::~AGenericSmartObject() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_GenericSmartObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_GenericSmartObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGenericSmartObject, AGenericSmartObject::StaticClass, TEXT("AGenericSmartObject"), &Z_Registration_Info_UClass_AGenericSmartObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGenericSmartObject), 3911667144U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_GenericSmartObject_h_394094714(TEXT("/Script/SmartObjectsModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_GenericSmartObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_GenericSmartObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
