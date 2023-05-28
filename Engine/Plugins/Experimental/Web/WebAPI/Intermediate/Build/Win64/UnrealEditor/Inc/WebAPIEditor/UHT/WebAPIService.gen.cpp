// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dom/WebAPIService.h"
#include "Dom/WebAPISchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebAPIService() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WebAPIEditor();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPIModelBase();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPIOperation_NoRegister();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPIService();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPIService_NoRegister();
	WEBAPIEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FWebAPITypeNameVariant();
// End Cross Module References
	void UWebAPIService::StaticRegisterNativesUWebAPIService()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebAPIService);
	UClass* Z_Construct_UClass_UWebAPIService_NoRegister()
	{
		return UWebAPIService::StaticClass();
	}
	struct Z_Construct_UClass_UWebAPIService_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerate_MetaData[];
#endif
		static void NewProp_bGenerate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerate;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Operations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Operations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Operations;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebAPIService_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWebAPIModelBase,
		(UObject* (*)())Z_Construct_UPackage__Script_WebAPIEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIService_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A service generally contains a sub-section of the API containing operations related to a particular subject. */" },
		{ "IncludePath", "Dom/WebAPIService.h" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIService.h" },
		{ "ToolTip", "A service generally contains a sub-section of the API containing operations related to a particular subject." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIService_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** Name of the Service. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIService.h" },
		{ "ToolTip", "Name of the Service." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWebAPIService_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIService, Name), Z_Construct_UScriptStruct_FWebAPITypeNameVariant, METADATA_PARAMS(Z_Construct_UClass_UWebAPIService_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIService_Statics::NewProp_Name_MetaData)) }; // 4040585277
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIService_Statics::NewProp_bGenerate_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** Can be disabled to skip generation of this Service and it's operations. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIService.h" },
		{ "ToolTip", "Can be disabled to skip generation of this Service and it's operations." },
	};
#endif
	void Z_Construct_UClass_UWebAPIService_Statics::NewProp_bGenerate_SetBit(void* Obj)
	{
		((UWebAPIService*)Obj)->bGenerate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWebAPIService_Statics::NewProp_bGenerate = { "bGenerate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWebAPIService), &Z_Construct_UClass_UWebAPIService_Statics::NewProp_bGenerate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWebAPIService_Statics::NewProp_bGenerate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIService_Statics::NewProp_bGenerate_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWebAPIService_Statics::NewProp_Operations_Inner = { "Operations", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UWebAPIOperation_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIService_Statics::NewProp_Operations_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** Operations contained within the service. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIService.h" },
		{ "ToolTip", "Operations contained within the service." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWebAPIService_Statics::NewProp_Operations = { "Operations", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIService, Operations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWebAPIService_Statics::NewProp_Operations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIService_Statics::NewProp_Operations_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWebAPIService_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIService_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIService_Statics::NewProp_bGenerate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIService_Statics::NewProp_Operations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIService_Statics::NewProp_Operations,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebAPIService_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebAPIService>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebAPIService_Statics::ClassParams = {
		&UWebAPIService::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWebAPIService_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIService_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWebAPIService_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIService_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebAPIService()
	{
		if (!Z_Registration_Info_UClass_UWebAPIService.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebAPIService.OuterSingleton, Z_Construct_UClass_UWebAPIService_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebAPIService.OuterSingleton;
	}
	template<> WEBAPIEDITOR_API UClass* StaticClass<UWebAPIService>()
	{
		return UWebAPIService::StaticClass();
	}
	UWebAPIService::UWebAPIService(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebAPIService);
	UWebAPIService::~UWebAPIService() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIService_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIService_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWebAPIService, UWebAPIService::StaticClass, TEXT("UWebAPIService"), &Z_Registration_Info_UClass_UWebAPIService, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebAPIService), 1763139788U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIService_h_3723505842(TEXT("/Script/WebAPIEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIService_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIService_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
