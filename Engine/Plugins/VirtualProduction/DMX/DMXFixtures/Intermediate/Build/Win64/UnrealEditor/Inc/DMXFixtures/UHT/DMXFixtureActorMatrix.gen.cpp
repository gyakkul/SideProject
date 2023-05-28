// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DMXFixtureActorMatrix.h"
#include "Library/DMXEntityFixtureType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXFixtureActorMatrix() {}
// Cross Module References
	DMXFIXTURES_API UClass* Z_Construct_UClass_ADMXFixtureActor();
	DMXFIXTURES_API UClass* Z_Construct_UClass_ADMXFixtureActorMatrix();
	DMXFIXTURES_API UClass* Z_Construct_UClass_ADMXFixtureActorMatrix_NoRegister();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXCell();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DMXFixtures();
// End Cross Module References
	DEFINE_FUNCTION(ADMXFixtureActorMatrix::execGenerateEditorMatrixMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerateEditorMatrixMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADMXFixtureActorMatrix::execInitializeMatrixFixture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeMatrixFixture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADMXFixtureActorMatrix::execPushFixtureMatrixCellData)
	{
		P_GET_TARRAY(FDMXCell,Z_Param_MatrixPixelData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PushFixtureMatrixCellData(Z_Param_MatrixPixelData);
		P_NATIVE_END;
	}
	void ADMXFixtureActorMatrix::StaticRegisterNativesADMXFixtureActorMatrix()
	{
		UClass* Class = ADMXFixtureActorMatrix::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerateEditorMatrixMesh", &ADMXFixtureActorMatrix::execGenerateEditorMatrixMesh },
			{ "InitializeMatrixFixture", &ADMXFixtureActorMatrix::execInitializeMatrixFixture },
			{ "PushFixtureMatrixCellData", &ADMXFixtureActorMatrix::execPushFixtureMatrixCellData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADMXFixtureActorMatrix_GenerateEditorMatrixMesh_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADMXFixtureActorMatrix_GenerateEditorMatrixMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX Matrix Fixture" },
		{ "ModuleRelativePath", "Public/DMXFixtureActorMatrix.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADMXFixtureActorMatrix_GenerateEditorMatrixMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADMXFixtureActorMatrix, nullptr, "GenerateEditorMatrixMesh", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADMXFixtureActorMatrix_GenerateEditorMatrixMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADMXFixtureActorMatrix_GenerateEditorMatrixMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADMXFixtureActorMatrix_GenerateEditorMatrixMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADMXFixtureActorMatrix_GenerateEditorMatrixMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADMXFixtureActorMatrix_InitializeMatrixFixture_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADMXFixtureActorMatrix_InitializeMatrixFixture_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX Matrix Fixture" },
		{ "ModuleRelativePath", "Public/DMXFixtureActorMatrix.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADMXFixtureActorMatrix_InitializeMatrixFixture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADMXFixtureActorMatrix, nullptr, "InitializeMatrixFixture", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADMXFixtureActorMatrix_InitializeMatrixFixture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADMXFixtureActorMatrix_InitializeMatrixFixture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADMXFixtureActorMatrix_InitializeMatrixFixture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADMXFixtureActorMatrix_InitializeMatrixFixture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADMXFixtureActorMatrix_PushFixtureMatrixCellData_Statics
	{
		struct DMXFixtureActorMatrix_eventPushFixtureMatrixCellData_Parms
		{
			TArray<FDMXCell> MatrixPixelData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_MatrixPixelData_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MatrixPixelData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADMXFixtureActorMatrix_PushFixtureMatrixCellData_Statics::NewProp_MatrixPixelData_Inner = { "MatrixPixelData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDMXCell, METADATA_PARAMS(nullptr, 0) }; // 2201996212
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADMXFixtureActorMatrix_PushFixtureMatrixCellData_Statics::NewProp_MatrixPixelData = { "MatrixPixelData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXFixtureActorMatrix_eventPushFixtureMatrixCellData_Parms, MatrixPixelData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2201996212
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADMXFixtureActorMatrix_PushFixtureMatrixCellData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADMXFixtureActorMatrix_PushFixtureMatrixCellData_Statics::NewProp_MatrixPixelData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADMXFixtureActorMatrix_PushFixtureMatrixCellData_Statics::NewProp_MatrixPixelData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADMXFixtureActorMatrix_PushFixtureMatrixCellData_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX Matrix Fixture" },
		{ "ModuleRelativePath", "Public/DMXFixtureActorMatrix.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADMXFixtureActorMatrix_PushFixtureMatrixCellData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADMXFixtureActorMatrix, nullptr, "PushFixtureMatrixCellData", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADMXFixtureActorMatrix_PushFixtureMatrixCellData_Statics::DMXFixtureActorMatrix_eventPushFixtureMatrixCellData_Parms), Z_Construct_UFunction_ADMXFixtureActorMatrix_PushFixtureMatrixCellData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADMXFixtureActorMatrix_PushFixtureMatrixCellData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADMXFixtureActorMatrix_PushFixtureMatrixCellData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADMXFixtureActorMatrix_PushFixtureMatrixCellData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADMXFixtureActorMatrix_PushFixtureMatrixCellData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADMXFixtureActorMatrix_PushFixtureMatrixCellData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADMXFixtureActorMatrix);
	UClass* Z_Construct_UClass_ADMXFixtureActorMatrix_NoRegister()
	{
		return ADMXFixtureActorMatrix::StaticClass();
	}
	struct Z_Construct_UClass_ADMXFixtureActorMatrix_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MatrixHead_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MatrixHead;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MatrixWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MatrixWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MatrixHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MatrixHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MatrixDepth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MatrixDepth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnorePixelMappingDistributionOfFixturePatch_MetaData[];
#endif
		static void NewProp_bIgnorePixelMappingDistributionOfFixturePatch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnorePixelMappingDistributionOfFixturePatch;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADMXFixtureActorMatrix_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADMXFixtureActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXFixtures,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADMXFixtureActorMatrix_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADMXFixtureActorMatrix_GenerateEditorMatrixMesh, "GenerateEditorMatrixMesh" }, // 2522834241
		{ &Z_Construct_UFunction_ADMXFixtureActorMatrix_InitializeMatrixFixture, "InitializeMatrixFixture" }, // 1463085052
		{ &Z_Construct_UFunction_ADMXFixtureActorMatrix_PushFixtureMatrixCellData, "PushFixtureMatrixCellData" }, // 2886064882
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADMXFixtureActorMatrix_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DMXFixtureActorMatrix.h" },
		{ "ModuleRelativePath", "Public/DMXFixtureActorMatrix.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADMXFixtureActorMatrix_Statics::NewProp_MatrixHead_MetaData[] = {
		{ "Category", "DMX Matrix Fixture" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DMXFixtureActorMatrix.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADMXFixtureActorMatrix_Statics::NewProp_MatrixHead = { "MatrixHead", nullptr, (EPropertyFlags)0x001400000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADMXFixtureActorMatrix, MatrixHead), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADMXFixtureActorMatrix_Statics::NewProp_MatrixHead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADMXFixtureActorMatrix_Statics::NewProp_MatrixHead_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADMXFixtureActorMatrix_Statics::NewProp_MatrixWidth_MetaData[] = {
		{ "Category", "DMX Matrix Fixture" },
		{ "ModuleRelativePath", "Public/DMXFixtureActorMatrix.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADMXFixtureActorMatrix_Statics::NewProp_MatrixWidth = { "MatrixWidth", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADMXFixtureActorMatrix, MatrixWidth), METADATA_PARAMS(Z_Construct_UClass_ADMXFixtureActorMatrix_Statics::NewProp_MatrixWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADMXFixtureActorMatrix_Statics::NewProp_MatrixWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADMXFixtureActorMatrix_Statics::NewProp_MatrixHeight_MetaData[] = {
		{ "Category", "DMX Matrix Fixture" },
		{ "ModuleRelativePath", "Public/DMXFixtureActorMatrix.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADMXFixtureActorMatrix_Statics::NewProp_MatrixHeight = { "MatrixHeight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADMXFixtureActorMatrix, MatrixHeight), METADATA_PARAMS(Z_Construct_UClass_ADMXFixtureActorMatrix_Statics::NewProp_MatrixHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADMXFixtureActorMatrix_Statics::NewProp_MatrixHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADMXFixtureActorMatrix_Statics::NewProp_MatrixDepth_MetaData[] = {
		{ "Category", "DMX Matrix Fixture" },
		{ "ModuleRelativePath", "Public/DMXFixtureActorMatrix.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADMXFixtureActorMatrix_Statics::NewProp_MatrixDepth = { "MatrixDepth", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADMXFixtureActorMatrix, MatrixDepth), METADATA_PARAMS(Z_Construct_UClass_ADMXFixtureActorMatrix_Statics::NewProp_MatrixDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADMXFixtureActorMatrix_Statics::NewProp_MatrixDepth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADMXFixtureActorMatrix_Statics::NewProp_bIgnorePixelMappingDistributionOfFixturePatch_MetaData[] = {
		{ "Category", "DMX Matrix Fixture" },
		{ "Comment", "/** If set to true, ignores the distribution set in the patch (hence the distribution becomes visible when not left to right, top to bottom) */" },
		{ "ModuleRelativePath", "Public/DMXFixtureActorMatrix.h" },
		{ "ToolTip", "If set to true, ignores the distribution set in the patch (hence the distribution becomes visible when not left to right, top to bottom)" },
	};
#endif
	void Z_Construct_UClass_ADMXFixtureActorMatrix_Statics::NewProp_bIgnorePixelMappingDistributionOfFixturePatch_SetBit(void* Obj)
	{
		((ADMXFixtureActorMatrix*)Obj)->bIgnorePixelMappingDistributionOfFixturePatch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADMXFixtureActorMatrix_Statics::NewProp_bIgnorePixelMappingDistributionOfFixturePatch = { "bIgnorePixelMappingDistributionOfFixturePatch", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ADMXFixtureActorMatrix), &Z_Construct_UClass_ADMXFixtureActorMatrix_Statics::NewProp_bIgnorePixelMappingDistributionOfFixturePatch_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADMXFixtureActorMatrix_Statics::NewProp_bIgnorePixelMappingDistributionOfFixturePatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADMXFixtureActorMatrix_Statics::NewProp_bIgnorePixelMappingDistributionOfFixturePatch_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADMXFixtureActorMatrix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMXFixtureActorMatrix_Statics::NewProp_MatrixHead,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMXFixtureActorMatrix_Statics::NewProp_MatrixWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMXFixtureActorMatrix_Statics::NewProp_MatrixHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMXFixtureActorMatrix_Statics::NewProp_MatrixDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMXFixtureActorMatrix_Statics::NewProp_bIgnorePixelMappingDistributionOfFixturePatch,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADMXFixtureActorMatrix_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADMXFixtureActorMatrix>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADMXFixtureActorMatrix_Statics::ClassParams = {
		&ADMXFixtureActorMatrix::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADMXFixtureActorMatrix_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADMXFixtureActorMatrix_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADMXFixtureActorMatrix_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADMXFixtureActorMatrix_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADMXFixtureActorMatrix()
	{
		if (!Z_Registration_Info_UClass_ADMXFixtureActorMatrix.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADMXFixtureActorMatrix.OuterSingleton, Z_Construct_UClass_ADMXFixtureActorMatrix_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADMXFixtureActorMatrix.OuterSingleton;
	}
	template<> DMXFIXTURES_API UClass* StaticClass<ADMXFixtureActorMatrix>()
	{
		return ADMXFixtureActorMatrix::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADMXFixtureActorMatrix);
	ADMXFixtureActorMatrix::~ADMXFixtureActorMatrix() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureActorMatrix_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureActorMatrix_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADMXFixtureActorMatrix, ADMXFixtureActorMatrix::StaticClass, TEXT("ADMXFixtureActorMatrix"), &Z_Registration_Info_UClass_ADMXFixtureActorMatrix, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADMXFixtureActorMatrix), 167576100U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureActorMatrix_h_2042100756(TEXT("/Script/DMXFixtures"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureActorMatrix_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureActorMatrix_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
