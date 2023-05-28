// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeuralMorphTrainingModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNeuralMorphTrainingModel() {}
// Cross Module References
	MLDEFORMERFRAMEWORKEDITOR_API UClass* Z_Construct_UClass_UMLDeformerTrainingModel();
	NEURALMORPHMODELEDITOR_API UClass* Z_Construct_UClass_UNeuralMorphTrainingModel();
	NEURALMORPHMODELEDITOR_API UClass* Z_Construct_UClass_UNeuralMorphTrainingModel_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NeuralMorphModelEditor();
// End Cross Module References
	DEFINE_FUNCTION(UNeuralMorphTrainingModel::execGenerateCurveGroupIndices)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->GenerateCurveGroupIndices();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNeuralMorphTrainingModel::execGenerateBoneGroupIndices)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->GenerateBoneGroupIndices();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNeuralMorphTrainingModel::execGetNumCurveGroups)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumCurveGroups();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNeuralMorphTrainingModel::execGetNumBoneGroups)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumBoneGroups();
		P_NATIVE_END;
	}
	struct NeuralMorphTrainingModel_eventTrain_Parms
	{
		int32 ReturnValue;

		/** Constructor, initializes return property only **/
		NeuralMorphTrainingModel_eventTrain_Parms()
			: ReturnValue(0)
		{
		}
	};
	static FName NAME_UNeuralMorphTrainingModel_Train = FName(TEXT("Train"));
	int32 UNeuralMorphTrainingModel::Train() const
	{
		NeuralMorphTrainingModel_eventTrain_Parms Parms;
		const_cast<UNeuralMorphTrainingModel*>(this)->ProcessEvent(FindFunctionChecked(NAME_UNeuralMorphTrainingModel_Train),&Parms);
		return Parms.ReturnValue;
	}
	void UNeuralMorphTrainingModel::StaticRegisterNativesUNeuralMorphTrainingModel()
	{
		UClass* Class = UNeuralMorphTrainingModel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerateBoneGroupIndices", &UNeuralMorphTrainingModel::execGenerateBoneGroupIndices },
			{ "GenerateCurveGroupIndices", &UNeuralMorphTrainingModel::execGenerateCurveGroupIndices },
			{ "GetNumBoneGroups", &UNeuralMorphTrainingModel::execGetNumBoneGroups },
			{ "GetNumCurveGroups", &UNeuralMorphTrainingModel::execGetNumCurveGroups },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNeuralMorphTrainingModel_GenerateBoneGroupIndices_Statics
	{
		struct NeuralMorphTrainingModel_eventGenerateBoneGroupIndices_Parms
		{
			TArray<int32> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNeuralMorphTrainingModel_GenerateBoneGroupIndices_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNeuralMorphTrainingModel_GenerateBoneGroupIndices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NeuralMorphTrainingModel_eventGenerateBoneGroupIndices_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNeuralMorphTrainingModel_GenerateBoneGroupIndices_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuralMorphTrainingModel_GenerateBoneGroupIndices_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuralMorphTrainingModel_GenerateBoneGroupIndices_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNeuralMorphTrainingModel_GenerateBoneGroupIndices_Statics::Function_MetaDataParams[] = {
		{ "Category", "Training Model" },
		{ "ModuleRelativePath", "Public/NeuralMorphTrainingModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNeuralMorphTrainingModel_GenerateBoneGroupIndices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNeuralMorphTrainingModel, nullptr, "GenerateBoneGroupIndices", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNeuralMorphTrainingModel_GenerateBoneGroupIndices_Statics::NeuralMorphTrainingModel_eventGenerateBoneGroupIndices_Parms), Z_Construct_UFunction_UNeuralMorphTrainingModel_GenerateBoneGroupIndices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuralMorphTrainingModel_GenerateBoneGroupIndices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNeuralMorphTrainingModel_GenerateBoneGroupIndices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuralMorphTrainingModel_GenerateBoneGroupIndices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNeuralMorphTrainingModel_GenerateBoneGroupIndices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNeuralMorphTrainingModel_GenerateBoneGroupIndices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNeuralMorphTrainingModel_GenerateCurveGroupIndices_Statics
	{
		struct NeuralMorphTrainingModel_eventGenerateCurveGroupIndices_Parms
		{
			TArray<int32> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNeuralMorphTrainingModel_GenerateCurveGroupIndices_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNeuralMorphTrainingModel_GenerateCurveGroupIndices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NeuralMorphTrainingModel_eventGenerateCurveGroupIndices_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNeuralMorphTrainingModel_GenerateCurveGroupIndices_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuralMorphTrainingModel_GenerateCurveGroupIndices_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuralMorphTrainingModel_GenerateCurveGroupIndices_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNeuralMorphTrainingModel_GenerateCurveGroupIndices_Statics::Function_MetaDataParams[] = {
		{ "Category", "Training Model" },
		{ "ModuleRelativePath", "Public/NeuralMorphTrainingModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNeuralMorphTrainingModel_GenerateCurveGroupIndices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNeuralMorphTrainingModel, nullptr, "GenerateCurveGroupIndices", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNeuralMorphTrainingModel_GenerateCurveGroupIndices_Statics::NeuralMorphTrainingModel_eventGenerateCurveGroupIndices_Parms), Z_Construct_UFunction_UNeuralMorphTrainingModel_GenerateCurveGroupIndices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuralMorphTrainingModel_GenerateCurveGroupIndices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNeuralMorphTrainingModel_GenerateCurveGroupIndices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuralMorphTrainingModel_GenerateCurveGroupIndices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNeuralMorphTrainingModel_GenerateCurveGroupIndices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNeuralMorphTrainingModel_GenerateCurveGroupIndices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNeuralMorphTrainingModel_GetNumBoneGroups_Statics
	{
		struct NeuralMorphTrainingModel_eventGetNumBoneGroups_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNeuralMorphTrainingModel_GetNumBoneGroups_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NeuralMorphTrainingModel_eventGetNumBoneGroups_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNeuralMorphTrainingModel_GetNumBoneGroups_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuralMorphTrainingModel_GetNumBoneGroups_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNeuralMorphTrainingModel_GetNumBoneGroups_Statics::Function_MetaDataParams[] = {
		{ "Category", "Training Model" },
		{ "ModuleRelativePath", "Public/NeuralMorphTrainingModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNeuralMorphTrainingModel_GetNumBoneGroups_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNeuralMorphTrainingModel, nullptr, "GetNumBoneGroups", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNeuralMorphTrainingModel_GetNumBoneGroups_Statics::NeuralMorphTrainingModel_eventGetNumBoneGroups_Parms), Z_Construct_UFunction_UNeuralMorphTrainingModel_GetNumBoneGroups_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuralMorphTrainingModel_GetNumBoneGroups_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNeuralMorphTrainingModel_GetNumBoneGroups_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuralMorphTrainingModel_GetNumBoneGroups_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNeuralMorphTrainingModel_GetNumBoneGroups()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNeuralMorphTrainingModel_GetNumBoneGroups_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNeuralMorphTrainingModel_GetNumCurveGroups_Statics
	{
		struct NeuralMorphTrainingModel_eventGetNumCurveGroups_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNeuralMorphTrainingModel_GetNumCurveGroups_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NeuralMorphTrainingModel_eventGetNumCurveGroups_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNeuralMorphTrainingModel_GetNumCurveGroups_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuralMorphTrainingModel_GetNumCurveGroups_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNeuralMorphTrainingModel_GetNumCurveGroups_Statics::Function_MetaDataParams[] = {
		{ "Category", "Training Model" },
		{ "ModuleRelativePath", "Public/NeuralMorphTrainingModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNeuralMorphTrainingModel_GetNumCurveGroups_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNeuralMorphTrainingModel, nullptr, "GetNumCurveGroups", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNeuralMorphTrainingModel_GetNumCurveGroups_Statics::NeuralMorphTrainingModel_eventGetNumCurveGroups_Parms), Z_Construct_UFunction_UNeuralMorphTrainingModel_GetNumCurveGroups_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuralMorphTrainingModel_GetNumCurveGroups_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNeuralMorphTrainingModel_GetNumCurveGroups_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuralMorphTrainingModel_GetNumCurveGroups_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNeuralMorphTrainingModel_GetNumCurveGroups()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNeuralMorphTrainingModel_GetNumCurveGroups_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNeuralMorphTrainingModel_Train_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNeuralMorphTrainingModel_Train_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NeuralMorphTrainingModel_eventTrain_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNeuralMorphTrainingModel_Train_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuralMorphTrainingModel_Train_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNeuralMorphTrainingModel_Train_Statics::Function_MetaDataParams[] = {
		{ "Category", "Training Model" },
		{ "Comment", "/**\n\x09 * Main training function, with implementation in python.\n\x09 * You need to implement this method. See the UMLDeformerTrainingModel documentation for more details.\n\x09 * @see UMLDeformerTrainingModel\n\x09 */" },
		{ "ModuleRelativePath", "Public/NeuralMorphTrainingModel.h" },
		{ "ToolTip", "Main training function, with implementation in python.\nYou need to implement this method. See the UMLDeformerTrainingModel documentation for more details.\n@see UMLDeformerTrainingModel" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNeuralMorphTrainingModel_Train_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNeuralMorphTrainingModel, nullptr, "Train", nullptr, nullptr, sizeof(NeuralMorphTrainingModel_eventTrain_Parms), Z_Construct_UFunction_UNeuralMorphTrainingModel_Train_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuralMorphTrainingModel_Train_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNeuralMorphTrainingModel_Train_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuralMorphTrainingModel_Train_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNeuralMorphTrainingModel_Train()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNeuralMorphTrainingModel_Train_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNeuralMorphTrainingModel);
	UClass* Z_Construct_UClass_UNeuralMorphTrainingModel_NoRegister()
	{
		return UNeuralMorphTrainingModel::StaticClass();
	}
	struct Z_Construct_UClass_UNeuralMorphTrainingModel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNeuralMorphTrainingModel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMLDeformerTrainingModel,
		(UObject* (*)())Z_Construct_UPackage__Script_NeuralMorphModelEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNeuralMorphTrainingModel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNeuralMorphTrainingModel_GenerateBoneGroupIndices, "GenerateBoneGroupIndices" }, // 797492115
		{ &Z_Construct_UFunction_UNeuralMorphTrainingModel_GenerateCurveGroupIndices, "GenerateCurveGroupIndices" }, // 985459119
		{ &Z_Construct_UFunction_UNeuralMorphTrainingModel_GetNumBoneGroups, "GetNumBoneGroups" }, // 2590263663
		{ &Z_Construct_UFunction_UNeuralMorphTrainingModel_GetNumCurveGroups, "GetNumCurveGroups" }, // 2294258671
		{ &Z_Construct_UFunction_UNeuralMorphTrainingModel_Train, "Train" }, // 2870245315
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralMorphTrainingModel_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The training model for the neural morph model.\n * This class is our link to the Python training.\n */" },
		{ "IncludePath", "NeuralMorphTrainingModel.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NeuralMorphTrainingModel.h" },
		{ "ToolTip", "The training model for the neural morph model.\nThis class is our link to the Python training." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNeuralMorphTrainingModel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNeuralMorphTrainingModel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNeuralMorphTrainingModel_Statics::ClassParams = {
		&UNeuralMorphTrainingModel::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNeuralMorphTrainingModel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralMorphTrainingModel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNeuralMorphTrainingModel()
	{
		if (!Z_Registration_Info_UClass_UNeuralMorphTrainingModel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNeuralMorphTrainingModel.OuterSingleton, Z_Construct_UClass_UNeuralMorphTrainingModel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNeuralMorphTrainingModel.OuterSingleton;
	}
	template<> NEURALMORPHMODELEDITOR_API UClass* StaticClass<UNeuralMorphTrainingModel>()
	{
		return UNeuralMorphTrainingModel::StaticClass();
	}
	UNeuralMorphTrainingModel::UNeuralMorphTrainingModel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNeuralMorphTrainingModel);
	UNeuralMorphTrainingModel::~UNeuralMorphTrainingModel() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModelEditor_Public_NeuralMorphTrainingModel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModelEditor_Public_NeuralMorphTrainingModel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNeuralMorphTrainingModel, UNeuralMorphTrainingModel::StaticClass, TEXT("UNeuralMorphTrainingModel"), &Z_Registration_Info_UClass_UNeuralMorphTrainingModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNeuralMorphTrainingModel), 4015122151U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModelEditor_Public_NeuralMorphTrainingModel_h_4139350393(TEXT("/Script/NeuralMorphModelEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModelEditor_Public_NeuralMorphTrainingModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModelEditor_Public_NeuralMorphTrainingModel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
