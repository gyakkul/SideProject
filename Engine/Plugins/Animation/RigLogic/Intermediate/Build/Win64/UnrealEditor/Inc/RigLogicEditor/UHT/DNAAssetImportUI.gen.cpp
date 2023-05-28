// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DNAAssetImportUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDNAAssetImportUI() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	RIGLOGICEDITOR_API UClass* Z_Construct_UClass_UDNAAssetImportUI();
	RIGLOGICEDITOR_API UClass* Z_Construct_UClass_UDNAAssetImportUI_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RigLogicEditor();
// End Cross Module References
	DEFINE_FUNCTION(UDNAAssetImportUI::execResetToDefault)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetToDefault();
		P_NATIVE_END;
	}
	void UDNAAssetImportUI::StaticRegisterNativesUDNAAssetImportUI()
	{
		UClass* Class = UDNAAssetImportUI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ResetToDefault", &UDNAAssetImportUI::execResetToDefault },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDNAAssetImportUI_ResetToDefault_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDNAAssetImportUI_ResetToDefault_Statics::Function_MetaDataParams[] = {
		{ "Category", "Miscellaneous" },
		{ "ModuleRelativePath", "Public/DNAAssetImportUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDNAAssetImportUI_ResetToDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDNAAssetImportUI, nullptr, "ResetToDefault", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDNAAssetImportUI_ResetToDefault_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDNAAssetImportUI_ResetToDefault_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDNAAssetImportUI_ResetToDefault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDNAAssetImportUI_ResetToDefault_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDNAAssetImportUI);
	UClass* Z_Construct_UClass_UDNAAssetImportUI_NoRegister()
	{
		return UDNAAssetImportUI::StaticClass();
	}
	struct Z_Construct_UClass_UDNAAssetImportUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDNAAssetImportUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RigLogicEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDNAAssetImportUI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDNAAssetImportUI_ResetToDefault, "ResetToDefault" }, // 3008395535
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDNAAssetImportUI_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Mesh" },
		{ "IncludePath", "DNAAssetImportUI.h" },
		{ "ModuleRelativePath", "Public/DNAAssetImportUI.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDNAAssetImportUI_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Skeletal mesh to use for imported DNA asset. When importing DNA, leaving this as \"None\" will generate new skeletal mesh. */" },
		{ "ImportType", "DNAAsset" },
		{ "ModuleRelativePath", "Public/DNAAssetImportUI.h" },
		{ "ToolTip", "Skeletal mesh to use for imported DNA asset. When importing DNA, leaving this as \"None\" will generate new skeletal mesh." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDNAAssetImportUI_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDNAAssetImportUI, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDNAAssetImportUI_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDNAAssetImportUI_Statics::NewProp_SkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDNAAssetImportUI_Statics::NewProp_FileName_MetaData[] = {
		{ "Category", "DNAFileInformation" },
		{ "Comment", "/* The DNA file name */" },
		{ "DisplayName", "File Name" },
		{ "ImportType", "DNAAsset" },
		{ "ModuleRelativePath", "Public/DNAAssetImportUI.h" },
		{ "ToolTip", "The DNA file name" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDNAAssetImportUI_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDNAAssetImportUI, FileName), METADATA_PARAMS(Z_Construct_UClass_UDNAAssetImportUI_Statics::NewProp_FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDNAAssetImportUI_Statics::NewProp_FileName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDNAAssetImportUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDNAAssetImportUI_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDNAAssetImportUI_Statics::NewProp_FileName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDNAAssetImportUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDNAAssetImportUI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDNAAssetImportUI_Statics::ClassParams = {
		&UDNAAssetImportUI::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDNAAssetImportUI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDNAAssetImportUI_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDNAAssetImportUI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDNAAssetImportUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDNAAssetImportUI()
	{
		if (!Z_Registration_Info_UClass_UDNAAssetImportUI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDNAAssetImportUI.OuterSingleton, Z_Construct_UClass_UDNAAssetImportUI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDNAAssetImportUI.OuterSingleton;
	}
	template<> RIGLOGICEDITOR_API UClass* StaticClass<UDNAAssetImportUI>()
	{
		return UDNAAssetImportUI::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDNAAssetImportUI);
	UDNAAssetImportUI::~UDNAAssetImportUI() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicEditor_Public_DNAAssetImportUI_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicEditor_Public_DNAAssetImportUI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDNAAssetImportUI, UDNAAssetImportUI::StaticClass, TEXT("UDNAAssetImportUI"), &Z_Registration_Info_UClass_UDNAAssetImportUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDNAAssetImportUI), 3028331989U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicEditor_Public_DNAAssetImportUI_h_2403225486(TEXT("/Script/RigLogicEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicEditor_Public_DNAAssetImportUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicEditor_Public_DNAAssetImportUI_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
