// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/ReimportFbxSceneFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReimportFbxSceneFactory() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFbxSceneImportFactory();
	UNREALED_API UClass* Z_Construct_UClass_UReimportFbxSceneFactory();
	UNREALED_API UClass* Z_Construct_UClass_UReimportFbxSceneFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	DEFINE_FUNCTION(UReimportFbxSceneFactory::execScriptReimportHelper)
	{
		P_GET_OBJECT(UObject,Z_Param_Obj);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ScriptReimportHelper(Z_Param_Obj);
		P_NATIVE_END;
	}
	void UReimportFbxSceneFactory::StaticRegisterNativesUReimportFbxSceneFactory()
	{
		UClass* Class = UReimportFbxSceneFactory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ScriptReimportHelper", &UReimportFbxSceneFactory::execScriptReimportHelper },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UReimportFbxSceneFactory_ScriptReimportHelper_Statics
	{
		struct ReimportFbxSceneFactory_eventScriptReimportHelper_Parms
		{
			UObject* Obj;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Obj;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReimportFbxSceneFactory_ScriptReimportHelper_Statics::NewProp_Obj = { "Obj", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReimportFbxSceneFactory_eventScriptReimportHelper_Parms, Obj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReimportFbxSceneFactory_ScriptReimportHelper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReimportFbxSceneFactory_ScriptReimportHelper_Statics::NewProp_Obj,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReimportFbxSceneFactory_ScriptReimportHelper_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Fbx Scene Reimport" },
		{ "Comment", "/* Script helper to allow fbx scene reimport from scripted language\n\x09 * @param Obj: type must be one of the following type\n\x09 * UFbxSceneImportData\n\x09 * UStaticMesh, USkeletalMesh, UAnimSequence: It must have been imported with the scene import so the AssetImportData point on a UFbxSceneImportData\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Factories/ReimportFbxSceneFactory.h" },
		{ "ToolTip", "Script helper to allow fbx scene reimport from scripted language\n       * @param Obj: type must be one of the following type\n       * UFbxSceneImportData\n       * UStaticMesh, USkeletalMesh, UAnimSequence: It must have been imported with the scene import so the AssetImportData point on a UFbxSceneImportData" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReimportFbxSceneFactory_ScriptReimportHelper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReimportFbxSceneFactory, nullptr, "ScriptReimportHelper", nullptr, nullptr, sizeof(Z_Construct_UFunction_UReimportFbxSceneFactory_ScriptReimportHelper_Statics::ReimportFbxSceneFactory_eventScriptReimportHelper_Parms), Z_Construct_UFunction_UReimportFbxSceneFactory_ScriptReimportHelper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReimportFbxSceneFactory_ScriptReimportHelper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReimportFbxSceneFactory_ScriptReimportHelper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReimportFbxSceneFactory_ScriptReimportHelper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReimportFbxSceneFactory_ScriptReimportHelper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReimportFbxSceneFactory_ScriptReimportHelper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReimportFbxSceneFactory);
	UClass* Z_Construct_UClass_UReimportFbxSceneFactory_NoRegister()
	{
		return UReimportFbxSceneFactory::StaticClass();
	}
	struct Z_Construct_UClass_UReimportFbxSceneFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReimportFbxSceneFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFbxSceneImportFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UReimportFbxSceneFactory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UReimportFbxSceneFactory_ScriptReimportHelper, "ScriptReimportHelper" }, // 1304998008
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReimportFbxSceneFactory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/ReimportFbxSceneFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/ReimportFbxSceneFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReimportFbxSceneFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReimportFbxSceneFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReimportFbxSceneFactory_Statics::ClassParams = {
		&UReimportFbxSceneFactory::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UReimportFbxSceneFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReimportFbxSceneFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReimportFbxSceneFactory()
	{
		if (!Z_Registration_Info_UClass_UReimportFbxSceneFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReimportFbxSceneFactory.OuterSingleton, Z_Construct_UClass_UReimportFbxSceneFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReimportFbxSceneFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UReimportFbxSceneFactory>()
	{
		return UReimportFbxSceneFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReimportFbxSceneFactory);
	UReimportFbxSceneFactory::~UReimportFbxSceneFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportFbxSceneFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportFbxSceneFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReimportFbxSceneFactory, UReimportFbxSceneFactory::StaticClass, TEXT("UReimportFbxSceneFactory"), &Z_Registration_Info_UClass_UReimportFbxSceneFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReimportFbxSceneFactory), 3825150259U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportFbxSceneFactory_h_2659330235(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportFbxSceneFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportFbxSceneFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
