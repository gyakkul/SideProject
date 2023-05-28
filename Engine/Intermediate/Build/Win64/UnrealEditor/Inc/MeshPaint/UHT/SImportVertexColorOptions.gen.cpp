// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/SImportVertexColorOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSImportVertexColorOptions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MESHPAINT_API UClass* Z_Construct_UClass_UVertexColorImportOptions();
	MESHPAINT_API UClass* Z_Construct_UClass_UVertexColorImportOptions_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MeshPaint();
// End Cross Module References
	void UVertexColorImportOptions::StaticRegisterNativesUVertexColorImportOptions()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVertexColorImportOptions);
	UClass* Z_Construct_UClass_UVertexColorImportOptions_NoRegister()
	{
		return UVertexColorImportOptions::StaticClass();
	}
	struct Z_Construct_UClass_UVertexColorImportOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_UVIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_LODIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRed_MetaData[];
#endif
		static void NewProp_bRed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBlue_MetaData[];
#endif
		static void NewProp_bBlue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGreen_MetaData[];
#endif
		static void NewProp_bGreen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGreen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlpha_MetaData[];
#endif
		static void NewProp_bAlpha_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportToInstance_MetaData[];
#endif
		static void NewProp_bImportToInstance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportToInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanImportToInstance_MetaData[];
#endif
		static void NewProp_bCanImportToInstance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanImportToInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVertexColorImportOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshPaint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexColorImportOptions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SImportVertexColorOptions.h" },
		{ "ModuleRelativePath", "Private/SImportVertexColorOptions.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_UVIndex_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Texture Coordinate Channel to use for Sampling the Texture*/" },
		{ "ModuleRelativePath", "Private/SImportVertexColorOptions.h" },
		{ "ToolTip", "Texture Coordinate Channel to use for Sampling the Texture" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_UVIndex = { "UVIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVertexColorImportOptions, UVIndex), METADATA_PARAMS(Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_UVIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_UVIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_LODIndex_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** LOD Index to import the Vertex Colors to */" },
		{ "ModuleRelativePath", "Private/SImportVertexColorOptions.h" },
		{ "ToolTip", "LOD Index to import the Vertex Colors to" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVertexColorImportOptions, LODIndex), METADATA_PARAMS(Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_LODIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_LODIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bRed_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Red Texture Channel */" },
		{ "ModuleRelativePath", "Private/SImportVertexColorOptions.h" },
		{ "ToolTip", "Red Texture Channel" },
	};
#endif
	void Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bRed_SetBit(void* Obj)
	{
		((UVertexColorImportOptions*)Obj)->bRed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bRed = { "bRed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVertexColorImportOptions), &Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bRed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bRed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bRed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bBlue_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Blue Texture Channel */" },
		{ "ModuleRelativePath", "Private/SImportVertexColorOptions.h" },
		{ "ToolTip", "Blue Texture Channel" },
	};
#endif
	void Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bBlue_SetBit(void* Obj)
	{
		((UVertexColorImportOptions*)Obj)->bBlue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bBlue = { "bBlue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVertexColorImportOptions), &Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bBlue_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bBlue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bBlue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bGreen_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Green Texture Channel */" },
		{ "ModuleRelativePath", "Private/SImportVertexColorOptions.h" },
		{ "ToolTip", "Green Texture Channel" },
	};
#endif
	void Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bGreen_SetBit(void* Obj)
	{
		((UVertexColorImportOptions*)Obj)->bGreen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bGreen = { "bGreen", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVertexColorImportOptions), &Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bGreen_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bGreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bGreen_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bAlpha_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Alpha Texture Channel */" },
		{ "ModuleRelativePath", "Private/SImportVertexColorOptions.h" },
		{ "ToolTip", "Alpha Texture Channel" },
	};
#endif
	void Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bAlpha_SetBit(void* Obj)
	{
		((UVertexColorImportOptions*)Obj)->bAlpha = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bAlpha = { "bAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVertexColorImportOptions), &Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bAlpha_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bImportToInstance_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Whether or not to import the Vertex Colors to Mesh Component instance or the underlying Static Mesh */" },
		{ "ModuleRelativePath", "Private/SImportVertexColorOptions.h" },
		{ "ToolTip", "Whether or not to import the Vertex Colors to Mesh Component instance or the underlying Static Mesh" },
	};
#endif
	void Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bImportToInstance_SetBit(void* Obj)
	{
		((UVertexColorImportOptions*)Obj)->bImportToInstance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bImportToInstance = { "bImportToInstance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVertexColorImportOptions), &Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bImportToInstance_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bImportToInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bImportToInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bCanImportToInstance_MetaData[] = {
		{ "ModuleRelativePath", "Private/SImportVertexColorOptions.h" },
	};
#endif
	void Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bCanImportToInstance_SetBit(void* Obj)
	{
		((UVertexColorImportOptions*)Obj)->bCanImportToInstance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bCanImportToInstance = { "bCanImportToInstance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVertexColorImportOptions), &Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bCanImportToInstance_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bCanImportToInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bCanImportToInstance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVertexColorImportOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_UVIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bRed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bBlue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bGreen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bImportToInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bCanImportToInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVertexColorImportOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVertexColorImportOptions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVertexColorImportOptions_Statics::ClassParams = {
		&UVertexColorImportOptions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVertexColorImportOptions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVertexColorImportOptions_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVertexColorImportOptions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexColorImportOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVertexColorImportOptions()
	{
		if (!Z_Registration_Info_UClass_UVertexColorImportOptions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVertexColorImportOptions.OuterSingleton, Z_Construct_UClass_UVertexColorImportOptions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVertexColorImportOptions.OuterSingleton;
	}
	template<> MESHPAINT_API UClass* StaticClass<UVertexColorImportOptions>()
	{
		return UVertexColorImportOptions::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVertexColorImportOptions);
	UVertexColorImportOptions::~UVertexColorImportOptions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_MeshPaint_Private_SImportVertexColorOptions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_MeshPaint_Private_SImportVertexColorOptions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVertexColorImportOptions, UVertexColorImportOptions::StaticClass, TEXT("UVertexColorImportOptions"), &Z_Registration_Info_UClass_UVertexColorImportOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVertexColorImportOptions), 735346355U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_MeshPaint_Private_SImportVertexColorOptions_h_382472264(TEXT("/Script/MeshPaint"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_MeshPaint_Private_SImportVertexColorOptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_MeshPaint_Private_SImportVertexColorOptions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
