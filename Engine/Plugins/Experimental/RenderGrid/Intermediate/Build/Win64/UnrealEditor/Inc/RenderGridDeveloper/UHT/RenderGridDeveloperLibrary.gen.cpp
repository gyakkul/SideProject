// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RenderGridDeveloperLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRenderGridDeveloperLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	RENDERGRID_API UClass* Z_Construct_UClass_URenderGrid_NoRegister();
	RENDERGRIDDEVELOPER_API UClass* Z_Construct_UClass_URenderGridDeveloperLibrary();
	RENDERGRIDDEVELOPER_API UClass* Z_Construct_UClass_URenderGridDeveloperLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RenderGridDeveloper();
// End Cross Module References
	DEFINE_FUNCTION(URenderGridDeveloperLibrary::execGetRenderGridAsset)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ObjectPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URenderGrid**)Z_Param__Result=URenderGridDeveloperLibrary::GetRenderGridAsset(Z_Param_ObjectPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridDeveloperLibrary::execGetAllRenderGridAssets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<URenderGrid*>*)Z_Param__Result=URenderGridDeveloperLibrary::GetAllRenderGridAssets();
		P_NATIVE_END;
	}
	void URenderGridDeveloperLibrary::StaticRegisterNativesURenderGridDeveloperLibrary()
	{
		UClass* Class = URenderGridDeveloperLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllRenderGridAssets", &URenderGridDeveloperLibrary::execGetAllRenderGridAssets },
			{ "GetRenderGridAsset", &URenderGridDeveloperLibrary::execGetRenderGridAsset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URenderGridDeveloperLibrary_GetAllRenderGridAssets_Statics
	{
		struct RenderGridDeveloperLibrary_eventGetAllRenderGridAssets_Parms
		{
			TArray<URenderGrid*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderGridDeveloperLibrary_GetAllRenderGridAssets_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URenderGrid_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URenderGridDeveloperLibrary_GetAllRenderGridAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGridDeveloperLibrary_eventGetAllRenderGridAssets_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridDeveloperLibrary_GetAllRenderGridAssets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridDeveloperLibrary_GetAllRenderGridAssets_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridDeveloperLibrary_GetAllRenderGridAssets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridDeveloperLibrary_GetAllRenderGridAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid" },
		{ "Comment", "/**\n\x09 * Returns all render grid assets that currently exist in the project (on disk and in memory).\n\x09 * Will load the render grid assets in that are currently unloaded.\n\x09 * \n\x09 * This is a slow operation, so avoid doing this every tick.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RenderGridDeveloperLibrary.h" },
		{ "ToolTip", "Returns all render grid assets that currently exist in the project (on disk and in memory).\nWill load the render grid assets in that are currently unloaded.\n\nThis is a slow operation, so avoid doing this every tick." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridDeveloperLibrary_GetAllRenderGridAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridDeveloperLibrary, nullptr, "GetAllRenderGridAssets", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGridDeveloperLibrary_GetAllRenderGridAssets_Statics::RenderGridDeveloperLibrary_eventGetAllRenderGridAssets_Parms), Z_Construct_UFunction_URenderGridDeveloperLibrary_GetAllRenderGridAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridDeveloperLibrary_GetAllRenderGridAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGridDeveloperLibrary_GetAllRenderGridAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridDeveloperLibrary_GetAllRenderGridAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGridDeveloperLibrary_GetAllRenderGridAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridDeveloperLibrary_GetAllRenderGridAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridDeveloperLibrary_GetRenderGridAsset_Statics
	{
		struct RenderGridDeveloperLibrary_eventGetRenderGridAsset_Parms
		{
			FString ObjectPath;
			URenderGrid* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ObjectPath;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridDeveloperLibrary_GetRenderGridAsset_Statics::NewProp_ObjectPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URenderGridDeveloperLibrary_GetRenderGridAsset_Statics::NewProp_ObjectPath = { "ObjectPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGridDeveloperLibrary_eventGetRenderGridAsset_Parms, ObjectPath), METADATA_PARAMS(Z_Construct_UFunction_URenderGridDeveloperLibrary_GetRenderGridAsset_Statics::NewProp_ObjectPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridDeveloperLibrary_GetRenderGridAsset_Statics::NewProp_ObjectPath_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderGridDeveloperLibrary_GetRenderGridAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGridDeveloperLibrary_eventGetRenderGridAsset_Parms, ReturnValue), Z_Construct_UClass_URenderGrid_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridDeveloperLibrary_GetRenderGridAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridDeveloperLibrary_GetRenderGridAsset_Statics::NewProp_ObjectPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridDeveloperLibrary_GetRenderGridAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridDeveloperLibrary_GetRenderGridAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid" },
		{ "Comment", "/**\n\x09 * Returns the given render grid asset that exists at the given object path (whether it's on disk or in memory).\n\x09 * Will load the render grid asset if it's currently unloaded.\n\x09 * \n\x09 * This is a potentially slow operation, so avoid doing this every tick.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RenderGridDeveloperLibrary.h" },
		{ "ToolTip", "Returns the given render grid asset that exists at the given object path (whether it's on disk or in memory).\nWill load the render grid asset if it's currently unloaded.\n\nThis is a potentially slow operation, so avoid doing this every tick." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridDeveloperLibrary_GetRenderGridAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridDeveloperLibrary, nullptr, "GetRenderGridAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGridDeveloperLibrary_GetRenderGridAsset_Statics::RenderGridDeveloperLibrary_eventGetRenderGridAsset_Parms), Z_Construct_UFunction_URenderGridDeveloperLibrary_GetRenderGridAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridDeveloperLibrary_GetRenderGridAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGridDeveloperLibrary_GetRenderGridAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridDeveloperLibrary_GetRenderGridAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGridDeveloperLibrary_GetRenderGridAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridDeveloperLibrary_GetRenderGridAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URenderGridDeveloperLibrary);
	UClass* Z_Construct_UClass_URenderGridDeveloperLibrary_NoRegister()
	{
		return URenderGridDeveloperLibrary::StaticClass();
	}
	struct Z_Construct_UClass_URenderGridDeveloperLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URenderGridDeveloperLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_RenderGridDeveloper,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URenderGridDeveloperLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URenderGridDeveloperLibrary_GetAllRenderGridAssets, "GetAllRenderGridAssets" }, // 1593996772
		{ &Z_Construct_UFunction_URenderGridDeveloperLibrary_GetRenderGridAsset, "GetRenderGridAsset" }, // 3052305378
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridDeveloperLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RenderGridDeveloperLibrary.h" },
		{ "ModuleRelativePath", "Public/RenderGridDeveloperLibrary.h" },
		{ "ScriptName", "RenderGridDeveloperLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URenderGridDeveloperLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URenderGridDeveloperLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URenderGridDeveloperLibrary_Statics::ClassParams = {
		&URenderGridDeveloperLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URenderGridDeveloperLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridDeveloperLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URenderGridDeveloperLibrary()
	{
		if (!Z_Registration_Info_UClass_URenderGridDeveloperLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URenderGridDeveloperLibrary.OuterSingleton, Z_Construct_UClass_URenderGridDeveloperLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URenderGridDeveloperLibrary.OuterSingleton;
	}
	template<> RENDERGRIDDEVELOPER_API UClass* StaticClass<URenderGridDeveloperLibrary>()
	{
		return URenderGridDeveloperLibrary::StaticClass();
	}
	URenderGridDeveloperLibrary::URenderGridDeveloperLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URenderGridDeveloperLibrary);
	URenderGridDeveloperLibrary::~URenderGridDeveloperLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGridDeveloper_Public_RenderGridDeveloperLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGridDeveloper_Public_RenderGridDeveloperLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URenderGridDeveloperLibrary, URenderGridDeveloperLibrary::StaticClass, TEXT("URenderGridDeveloperLibrary"), &Z_Registration_Info_UClass_URenderGridDeveloperLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URenderGridDeveloperLibrary), 2821335705U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGridDeveloper_Public_RenderGridDeveloperLibrary_h_13480979(TEXT("/Script/RenderGridDeveloper"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGridDeveloper_Public_RenderGridDeveloperLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGridDeveloper_Public_RenderGridDeveloperLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
