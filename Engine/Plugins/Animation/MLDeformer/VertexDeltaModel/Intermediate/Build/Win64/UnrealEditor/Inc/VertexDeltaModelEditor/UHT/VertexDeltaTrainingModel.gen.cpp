// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VertexDeltaTrainingModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVertexDeltaTrainingModel() {}
// Cross Module References
	MLDEFORMERFRAMEWORKEDITOR_API UClass* Z_Construct_UClass_UMLDeformerTrainingModel();
	UPackage* Z_Construct_UPackage__Script_VertexDeltaModelEditor();
	VERTEXDELTAMODELEDITOR_API UClass* Z_Construct_UClass_UVertexDeltaTrainingModel();
	VERTEXDELTAMODELEDITOR_API UClass* Z_Construct_UClass_UVertexDeltaTrainingModel_NoRegister();
// End Cross Module References
	struct VertexDeltaTrainingModel_eventTrain_Parms
	{
		int32 ReturnValue;

		/** Constructor, initializes return property only **/
		VertexDeltaTrainingModel_eventTrain_Parms()
			: ReturnValue(0)
		{
		}
	};
	static FName NAME_UVertexDeltaTrainingModel_Train = FName(TEXT("Train"));
	int32 UVertexDeltaTrainingModel::Train() const
	{
		VertexDeltaTrainingModel_eventTrain_Parms Parms;
		const_cast<UVertexDeltaTrainingModel*>(this)->ProcessEvent(FindFunctionChecked(NAME_UVertexDeltaTrainingModel_Train),&Parms);
		return Parms.ReturnValue;
	}
	void UVertexDeltaTrainingModel::StaticRegisterNativesUVertexDeltaTrainingModel()
	{
	}
	struct Z_Construct_UFunction_UVertexDeltaTrainingModel_Train_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVertexDeltaTrainingModel_Train_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexDeltaTrainingModel_eventTrain_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexDeltaTrainingModel_Train_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexDeltaTrainingModel_Train_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexDeltaTrainingModel_Train_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "Comment", "/**\n\x09 * Main training function, with implementation in python.\n\x09 * You need to implement this method. See the UMLDeformerTrainingModel documentation for more details.\n\x09 * @see UMLDeformerTrainingModel\n\x09 */" },
		{ "ModuleRelativePath", "Public/VertexDeltaTrainingModel.h" },
		{ "ToolTip", "Main training function, with implementation in python.\nYou need to implement this method. See the UMLDeformerTrainingModel documentation for more details.\n@see UMLDeformerTrainingModel" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexDeltaTrainingModel_Train_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexDeltaTrainingModel, nullptr, "Train", nullptr, nullptr, sizeof(VertexDeltaTrainingModel_eventTrain_Parms), Z_Construct_UFunction_UVertexDeltaTrainingModel_Train_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexDeltaTrainingModel_Train_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexDeltaTrainingModel_Train_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexDeltaTrainingModel_Train_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexDeltaTrainingModel_Train()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexDeltaTrainingModel_Train_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVertexDeltaTrainingModel);
	UClass* Z_Construct_UClass_UVertexDeltaTrainingModel_NoRegister()
	{
		return UVertexDeltaTrainingModel::StaticClass();
	}
	struct Z_Construct_UClass_UVertexDeltaTrainingModel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVertexDeltaTrainingModel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMLDeformerTrainingModel,
		(UObject* (*)())Z_Construct_UPackage__Script_VertexDeltaModelEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVertexDeltaTrainingModel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVertexDeltaTrainingModel_Train, "Train" }, // 1075170036
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexDeltaTrainingModel_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The training model for the vertex delta model.\n * This class is our link to the Python training.\n */" },
		{ "IncludePath", "VertexDeltaTrainingModel.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VertexDeltaTrainingModel.h" },
		{ "ToolTip", "The training model for the vertex delta model.\nThis class is our link to the Python training." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVertexDeltaTrainingModel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVertexDeltaTrainingModel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVertexDeltaTrainingModel_Statics::ClassParams = {
		&UVertexDeltaTrainingModel::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVertexDeltaTrainingModel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexDeltaTrainingModel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVertexDeltaTrainingModel()
	{
		if (!Z_Registration_Info_UClass_UVertexDeltaTrainingModel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVertexDeltaTrainingModel.OuterSingleton, Z_Construct_UClass_UVertexDeltaTrainingModel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVertexDeltaTrainingModel.OuterSingleton;
	}
	template<> VERTEXDELTAMODELEDITOR_API UClass* StaticClass<UVertexDeltaTrainingModel>()
	{
		return UVertexDeltaTrainingModel::StaticClass();
	}
	UVertexDeltaTrainingModel::UVertexDeltaTrainingModel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVertexDeltaTrainingModel);
	UVertexDeltaTrainingModel::~UVertexDeltaTrainingModel() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_VertexDeltaModel_Source_VertexDeltaModelEditor_Public_VertexDeltaTrainingModel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_VertexDeltaModel_Source_VertexDeltaModelEditor_Public_VertexDeltaTrainingModel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVertexDeltaTrainingModel, UVertexDeltaTrainingModel::StaticClass, TEXT("UVertexDeltaTrainingModel"), &Z_Registration_Info_UClass_UVertexDeltaTrainingModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVertexDeltaTrainingModel), 653838468U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_VertexDeltaModel_Source_VertexDeltaModelEditor_Public_VertexDeltaTrainingModel_h_17300783(TEXT("/Script/VertexDeltaModelEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_VertexDeltaModel_Source_VertexDeltaModelEditor_Public_VertexDeltaTrainingModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_VertexDeltaModel_Source_VertexDeltaModelEditor_Public_VertexDeltaTrainingModel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
