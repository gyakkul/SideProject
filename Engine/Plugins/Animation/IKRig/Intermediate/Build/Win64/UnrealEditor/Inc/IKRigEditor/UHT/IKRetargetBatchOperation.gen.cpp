// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RetargetEditor/IKRetargetBatchOperation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIKRetargetBatchOperation() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	IKRIG_API UClass* Z_Construct_UClass_UIKRetargeter_NoRegister();
	IKRIGEDITOR_API UClass* Z_Construct_UClass_UIKRetargetBatchOperation();
	IKRIGEDITOR_API UClass* Z_Construct_UClass_UIKRetargetBatchOperation_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IKRigEditor();
// End Cross Module References
	DEFINE_FUNCTION(UIKRetargetBatchOperation::execDuplicateAndRetarget)
	{
		P_GET_TARRAY_REF(FAssetData,Z_Param_Out_AssetsToRetarget);
		P_GET_OBJECT(USkeletalMesh,Z_Param_SourceMesh);
		P_GET_OBJECT(USkeletalMesh,Z_Param_TargetMesh);
		P_GET_OBJECT(UIKRetargeter,Z_Param_IKRetargetAsset);
		P_GET_PROPERTY(FStrProperty,Z_Param_Search);
		P_GET_PROPERTY(FStrProperty,Z_Param_Replace);
		P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
		P_GET_PROPERTY(FStrProperty,Z_Param_Suffix);
		P_GET_UBOOL(Z_Param_bRemapReferencedAssets);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FAssetData>*)Z_Param__Result=UIKRetargetBatchOperation::DuplicateAndRetarget(Z_Param_Out_AssetsToRetarget,Z_Param_SourceMesh,Z_Param_TargetMesh,Z_Param_IKRetargetAsset,Z_Param_Search,Z_Param_Replace,Z_Param_Prefix,Z_Param_Suffix,Z_Param_bRemapReferencedAssets);
		P_NATIVE_END;
	}
	void UIKRetargetBatchOperation::StaticRegisterNativesUIKRetargetBatchOperation()
	{
		UClass* Class = UIKRetargetBatchOperation::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DuplicateAndRetarget", &UIKRetargetBatchOperation::execDuplicateAndRetarget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIKRetargetBatchOperation_DuplicateAndRetarget_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct IKRetargetBatchOperation_eventDuplicateAndRetarget_Parms
		{
			TArray<FAssetData> AssetsToRetarget;
			USkeletalMesh* SourceMesh;
			USkeletalMesh* TargetMesh;
			UIKRetargeter* IKRetargetAsset;
			FString Search;
			FString Replace;
			FString Prefix;
			FString Suffix;
			bool bRemapReferencedAssets;
			TArray<FAssetData> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetsToRetarget_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetsToRetarget_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetsToRetarget;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceMesh;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IKRetargetAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Search_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Search;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Replace_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Replace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Prefix_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Suffix_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Suffix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRemapReferencedAssets_MetaData[];
#endif
		static void NewProp_bRemapReferencedAssets_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemapReferencedAssets;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRetargetBatchOperation_DuplicateAndRetarget_Statics::NewProp_AssetsToRetarget_Inner = { "AssetsToRetarget", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargetBatchOperation_DuplicateAndRetarget_Statics::NewProp_AssetsToRetarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UIKRetargetBatchOperation_DuplicateAndRetarget_Statics::NewProp_AssetsToRetarget = { "AssetsToRetarget", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargetBatchOperation_eventDuplicateAndRetarget_Parms, AssetsToRetarget), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargetBatchOperation_DuplicateAndRetarget_Statics::NewProp_AssetsToRetarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargetBatchOperation_DuplicateAndRetarget_Statics::NewProp_AssetsToRetarget_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIKRetargetBatchOperation_DuplicateAndRetarget_Statics::NewProp_SourceMesh = { "SourceMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargetBatchOperation_eventDuplicateAndRetarget_Parms, SourceMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIKRetargetBatchOperation_DuplicateAndRetarget_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargetBatchOperation_eventDuplicateAndRetarget_Parms, TargetMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIKRetargetBatchOperation_DuplicateAndRetarget_Statics::NewProp_IKRetargetAsset = { "IKRetargetAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargetBatchOperation_eventDuplicateAndRetarget_Parms, IKRetargetAsset), Z_Construct_UClass_UIKRetargeter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargetBatchOperation_DuplicateAndRetarget_Statics::NewProp_Search_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIKRetargetBatchOperation_DuplicateAndRetarget_Statics::NewProp_Search = { "Search", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargetBatchOperation_eventDuplicateAndRetarget_Parms, Search), METADATA_PARAMS(Z_Construct_UFunction_UIKRetargetBatchOperation_DuplicateAndRetarget_Statics::NewProp_Search_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargetBatchOperation_DuplicateAndRetarget_Statics::NewProp_Search_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargetBatchOperation_DuplicateAndRetarget_Statics::NewProp_Replace_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIKRetargetBatchOperation_DuplicateAndRetarget_Statics::NewProp_Replace = { "Replace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargetBatchOperation_eventDuplicateAndRetarget_Parms, Replace), METADATA_PARAMS(Z_Construct_UFunction_UIKRetargetBatchOperation_DuplicateAndRetarget_Statics::NewProp_Replace_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargetBatchOperation_DuplicateAndRetarget_Statics::NewProp_Replace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargetBatchOperation_DuplicateAndRetarget_Statics::NewProp_Prefix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIKRetargetBatchOperation_DuplicateAndRetarget_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargetBatchOperation_eventDuplicateAndRetarget_Parms, Prefix), METADATA_PARAMS(Z_Construct_UFunction_UIKRetargetBatchOperation_DuplicateAndRetarget_Statics::NewProp_Prefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargetBatchOperation_DuplicateAndRetarget_Statics::NewProp_Prefix_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargetBatchOperation_DuplicateAndRetarget_Statics::NewProp_Suffix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIKRetargetBatchOperation_DuplicateAndRetarget_Statics::NewProp_Suffix = { "Suffix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargetBatchOperation_eventDuplicateAndRetarget_Parms, Suffix), METADATA_PARAMS(Z_Construct_UFunction_UIKRetargetBatchOperation_DuplicateAndRetarget_Statics::NewProp_Suffix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargetBatchOperation_DuplicateAndRetarget_Statics::NewProp_Suffix_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargetBatchOperation_DuplicateAndRetarget_Statics::NewProp_bRemapReferencedAssets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UIKRetargetBatchOperation_DuplicateAndRetarget_Statics::NewProp_bRemapReferencedAssets_SetBit(void* Obj)
	{
		((IKRetargetBatchOperation_eventDuplicateAndRetarget_Parms*)Obj)->bRemapReferencedAssets = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIKRetargetBatchOperation_DuplicateAndRetarget_Statics::NewProp_bRemapReferencedAssets = { "bRemapReferencedAssets", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(IKRetargetBatchOperation_eventDuplicateAndRetarget_Parms), &Z_Construct_UFunction_UIKRetargetBatchOperation_DuplicateAndRetarget_Statics::NewProp_bRemapReferencedAssets_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargetBatchOperation_DuplicateAndRetarget_Statics::NewProp_bRemapReferencedAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargetBatchOperation_DuplicateAndRetarget_Statics::NewProp_bRemapReferencedAssets_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRetargetBatchOperation_DuplicateAndRetarget_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UIKRetargetBatchOperation_DuplicateAndRetarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargetBatchOperation_eventDuplicateAndRetarget_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRetargetBatchOperation_DuplicateAndRetarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargetBatchOperation_DuplicateAndRetarget_Statics::NewProp_AssetsToRetarget_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargetBatchOperation_DuplicateAndRetarget_Statics::NewProp_AssetsToRetarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargetBatchOperation_DuplicateAndRetarget_Statics::NewProp_SourceMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargetBatchOperation_DuplicateAndRetarget_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargetBatchOperation_DuplicateAndRetarget_Statics::NewProp_IKRetargetAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargetBatchOperation_DuplicateAndRetarget_Statics::NewProp_Search,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargetBatchOperation_DuplicateAndRetarget_Statics::NewProp_Replace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargetBatchOperation_DuplicateAndRetarget_Statics::NewProp_Prefix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargetBatchOperation_DuplicateAndRetarget_Statics::NewProp_Suffix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargetBatchOperation_DuplicateAndRetarget_Statics::NewProp_bRemapReferencedAssets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargetBatchOperation_DuplicateAndRetarget_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargetBatchOperation_DuplicateAndRetarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargetBatchOperation_DuplicateAndRetarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKBatchRetarget" },
		{ "Comment", "/* Convenience function to run a batch animation retarget from Blueprint / Python. This function will duplicate a list of\n\x09 * assets and use the supplied IK Retargeter to retarget the animation from the source to the target using the\n\x09 * settings in the provided IK Retargeter asset.\n\x09 * \n\x09 * @param AssetsToRetarget A list of animation assets to retarget (sequences, blendspaces or montages)\n\x09 * @param SourceMesh The skeletal mesh with desired proportions to playback the assets to retarget\n\x09 * @param TargetMesh The skeletal mesh to retarget the animation onto.\n\x09 * @param IKRetargetAsset The IK Retargeter asset with IK Rigs appropriate for the source and target skeletal mesh\n\x09 * @param Search A string to search for in the file name (replaced with \"Replace\" string)\n\x09 * @param Replace A string to replace with in the file name\n\x09 * @param Suffix A string to add at the end of the new file name\n\x09 * @param Prefix A string to add to the start of the new file name\n\x09 * @param bRemapReferencedAssets Whether to remap existing references in the animation assets\n\x09 * \n\x09 * Return: list of new animation files created. */" },
		{ "CPP_Default_bRemapReferencedAssets", "true" },
		{ "CPP_Default_Prefix", "" },
		{ "CPP_Default_Replace", "" },
		{ "CPP_Default_Search", "" },
		{ "CPP_Default_Suffix", "" },
		{ "ModuleRelativePath", "Public/RetargetEditor/IKRetargetBatchOperation.h" },
		{ "ToolTip", "Convenience function to run a batch animation retarget from Blueprint / Python. This function will duplicate a list of\n       * assets and use the supplied IK Retargeter to retarget the animation from the source to the target using the\n       * settings in the provided IK Retargeter asset.\n       *\n       * @param AssetsToRetarget A list of animation assets to retarget (sequences, blendspaces or montages)\n       * @param SourceMesh The skeletal mesh with desired proportions to playback the assets to retarget\n       * @param TargetMesh The skeletal mesh to retarget the animation onto.\n       * @param IKRetargetAsset The IK Retargeter asset with IK Rigs appropriate for the source and target skeletal mesh\n       * @param Search A string to search for in the file name (replaced with \"Replace\" string)\n       * @param Replace A string to replace with in the file name\n       * @param Suffix A string to add at the end of the new file name\n       * @param Prefix A string to add to the start of the new file name\n       * @param bRemapReferencedAssets Whether to remap existing references in the animation assets\n       *\n       * Return: list of new animation files created." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRetargetBatchOperation_DuplicateAndRetarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRetargetBatchOperation, nullptr, "DuplicateAndRetarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRetargetBatchOperation_DuplicateAndRetarget_Statics::IKRetargetBatchOperation_eventDuplicateAndRetarget_Parms), Z_Construct_UFunction_UIKRetargetBatchOperation_DuplicateAndRetarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargetBatchOperation_DuplicateAndRetarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargetBatchOperation_DuplicateAndRetarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargetBatchOperation_DuplicateAndRetarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRetargetBatchOperation_DuplicateAndRetarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRetargetBatchOperation_DuplicateAndRetarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIKRetargetBatchOperation);
	UClass* Z_Construct_UClass_UIKRetargetBatchOperation_NoRegister()
	{
		return UIKRetargetBatchOperation::StaticClass();
	}
	struct Z_Construct_UClass_UIKRetargetBatchOperation_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIKRetargetBatchOperation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IKRigEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIKRetargetBatchOperation_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIKRetargetBatchOperation_DuplicateAndRetarget, "DuplicateAndRetarget" }, // 518049116
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargetBatchOperation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//** Encapsulate ability to batch duplicate and retarget a set of animation assets */\n" },
		{ "IncludePath", "RetargetEditor/IKRetargetBatchOperation.h" },
		{ "ModuleRelativePath", "Public/RetargetEditor/IKRetargetBatchOperation.h" },
		{ "ToolTip", "/ Encapsulate ability to batch duplicate and retarget a set of animation assets" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIKRetargetBatchOperation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIKRetargetBatchOperation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIKRetargetBatchOperation_Statics::ClassParams = {
		&UIKRetargetBatchOperation::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIKRetargetBatchOperation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargetBatchOperation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIKRetargetBatchOperation()
	{
		if (!Z_Registration_Info_UClass_UIKRetargetBatchOperation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIKRetargetBatchOperation.OuterSingleton, Z_Construct_UClass_UIKRetargetBatchOperation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIKRetargetBatchOperation.OuterSingleton;
	}
	template<> IKRIGEDITOR_API UClass* StaticClass<UIKRetargetBatchOperation>()
	{
		return UIKRetargetBatchOperation::StaticClass();
	}
	UIKRetargetBatchOperation::UIKRetargetBatchOperation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIKRetargetBatchOperation);
	UIKRetargetBatchOperation::~UIKRetargetBatchOperation() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetBatchOperation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetBatchOperation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIKRetargetBatchOperation, UIKRetargetBatchOperation::StaticClass, TEXT("UIKRetargetBatchOperation"), &Z_Registration_Info_UClass_UIKRetargetBatchOperation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIKRetargetBatchOperation), 3533946072U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetBatchOperation_h_1660260750(TEXT("/Script/IKRigEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetBatchOperation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetBatchOperation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
