// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SetHighPrecisionOnMesh.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSetHighPrecisionOnMesh() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_UserToolBoxBasicCommand();
	USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_USetHighPrecisionOnMesh();
	USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_USetHighPrecisionOnMesh_NoRegister();
	USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UUTBBaseCommand();
// End Cross Module References
	void USetHighPrecisionOnMesh::StaticRegisterNativesUSetHighPrecisionOnMesh()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USetHighPrecisionOnMesh);
	UClass* Z_Construct_UClass_USetHighPrecisionOnMesh_NoRegister()
	{
		return USetHighPrecisionOnMesh::StaticClass();
	}
	struct Z_Construct_UClass_USetHighPrecisionOnMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHighPrecisionTangent_MetaData[];
#endif
		static void NewProp_bHighPrecisionTangent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHighPrecisionTangent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHighPrecisionUV_MetaData[];
#endif
		static void NewProp_bHighPrecisionUV_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHighPrecisionUV;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USetHighPrecisionOnMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUTBBaseCommand,
		(UObject* (*)())Z_Construct_UPackage__Script_UserToolBoxBasicCommand,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USetHighPrecisionOnMesh_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SetHighPrecisionOnMesh.h" },
		{ "ModuleRelativePath", "Public/SetHighPrecisionOnMesh.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USetHighPrecisionOnMesh_Statics::NewProp_bHighPrecisionTangent_MetaData[] = {
		{ "Category", "HighPrecisionCommand" },
		{ "ModuleRelativePath", "Public/SetHighPrecisionOnMesh.h" },
	};
#endif
	void Z_Construct_UClass_USetHighPrecisionOnMesh_Statics::NewProp_bHighPrecisionTangent_SetBit(void* Obj)
	{
		((USetHighPrecisionOnMesh*)Obj)->bHighPrecisionTangent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USetHighPrecisionOnMesh_Statics::NewProp_bHighPrecisionTangent = { "bHighPrecisionTangent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USetHighPrecisionOnMesh), &Z_Construct_UClass_USetHighPrecisionOnMesh_Statics::NewProp_bHighPrecisionTangent_SetBit, METADATA_PARAMS(Z_Construct_UClass_USetHighPrecisionOnMesh_Statics::NewProp_bHighPrecisionTangent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USetHighPrecisionOnMesh_Statics::NewProp_bHighPrecisionTangent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USetHighPrecisionOnMesh_Statics::NewProp_bHighPrecisionUV_MetaData[] = {
		{ "Category", "HighPrecisionCommand" },
		{ "ModuleRelativePath", "Public/SetHighPrecisionOnMesh.h" },
	};
#endif
	void Z_Construct_UClass_USetHighPrecisionOnMesh_Statics::NewProp_bHighPrecisionUV_SetBit(void* Obj)
	{
		((USetHighPrecisionOnMesh*)Obj)->bHighPrecisionUV = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USetHighPrecisionOnMesh_Statics::NewProp_bHighPrecisionUV = { "bHighPrecisionUV", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USetHighPrecisionOnMesh), &Z_Construct_UClass_USetHighPrecisionOnMesh_Statics::NewProp_bHighPrecisionUV_SetBit, METADATA_PARAMS(Z_Construct_UClass_USetHighPrecisionOnMesh_Statics::NewProp_bHighPrecisionUV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USetHighPrecisionOnMesh_Statics::NewProp_bHighPrecisionUV_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USetHighPrecisionOnMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetHighPrecisionOnMesh_Statics::NewProp_bHighPrecisionTangent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetHighPrecisionOnMesh_Statics::NewProp_bHighPrecisionUV,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USetHighPrecisionOnMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USetHighPrecisionOnMesh>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USetHighPrecisionOnMesh_Statics::ClassParams = {
		&USetHighPrecisionOnMesh::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USetHighPrecisionOnMesh_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USetHighPrecisionOnMesh_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USetHighPrecisionOnMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USetHighPrecisionOnMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USetHighPrecisionOnMesh()
	{
		if (!Z_Registration_Info_UClass_USetHighPrecisionOnMesh.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USetHighPrecisionOnMesh.OuterSingleton, Z_Construct_UClass_USetHighPrecisionOnMesh_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USetHighPrecisionOnMesh.OuterSingleton;
	}
	template<> USERTOOLBOXBASICCOMMAND_API UClass* StaticClass<USetHighPrecisionOnMesh>()
	{
		return USetHighPrecisionOnMesh::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USetHighPrecisionOnMesh);
	USetHighPrecisionOnMesh::~USetHighPrecisionOnMesh() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_SetHighPrecisionOnMesh_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_SetHighPrecisionOnMesh_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USetHighPrecisionOnMesh, USetHighPrecisionOnMesh::StaticClass, TEXT("USetHighPrecisionOnMesh"), &Z_Registration_Info_UClass_USetHighPrecisionOnMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USetHighPrecisionOnMesh), 956882177U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_SetHighPrecisionOnMesh_h_1571624098(TEXT("/Script/UserToolBoxBasicCommand"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_SetHighPrecisionOnMesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_SetHighPrecisionOnMesh_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
