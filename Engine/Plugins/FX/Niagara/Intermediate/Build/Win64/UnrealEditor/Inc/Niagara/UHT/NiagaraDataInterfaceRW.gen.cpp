// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/NiagaraDataInterfaceRW.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceRW() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceGrid2D();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceGrid3D();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceRWBase();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceRWBase_NoRegister();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ESetResolutionMethod();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESetResolutionMethod;
	static UEnum* ESetResolutionMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESetResolutionMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESetResolutionMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ESetResolutionMethod, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ESetResolutionMethod"));
		}
		return Z_Registration_Info_UEnum_ESetResolutionMethod.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ESetResolutionMethod>()
	{
		return ESetResolutionMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ESetResolutionMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ESetResolutionMethod_Statics::Enumerators[] = {
		{ "ESetResolutionMethod::Independent", (int64)ESetResolutionMethod::Independent },
		{ "ESetResolutionMethod::MaxAxis", (int64)ESetResolutionMethod::MaxAxis },
		{ "ESetResolutionMethod::CellSize", (int64)ESetResolutionMethod::CellSize },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ESetResolutionMethod_Statics::Enum_MetaDataParams[] = {
		{ "CellSize.Name", "ESetResolutionMethod::CellSize" },
		{ "Independent.Name", "ESetResolutionMethod::Independent" },
		{ "MaxAxis.Name", "ESetResolutionMethod::MaxAxis" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRW.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ESetResolutionMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ESetResolutionMethod",
		"ESetResolutionMethod",
		Z_Construct_UEnum_Niagara_ESetResolutionMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ESetResolutionMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ESetResolutionMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ESetResolutionMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ESetResolutionMethod()
	{
		if (!Z_Registration_Info_UEnum_ESetResolutionMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESetResolutionMethod.InnerSingleton, Z_Construct_UEnum_Niagara_ESetResolutionMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESetResolutionMethod.InnerSingleton;
	}
	void UNiagaraDataInterfaceRWBase::StaticRegisterNativesUNiagaraDataInterfaceRWBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceRWBase);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceRWBase_NoRegister()
	{
		return UNiagaraDataInterfaceRWBase::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceRWBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceRWBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceRWBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraDataInterfaceRW.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRW.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceRWBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceRWBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceRWBase_Statics::ClassParams = {
		&UNiagaraDataInterfaceRWBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceRWBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceRWBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceRWBase()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceRWBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceRWBase.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceRWBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataInterfaceRWBase.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceRWBase>()
	{
		return UNiagaraDataInterfaceRWBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceRWBase);
	UNiagaraDataInterfaceRWBase::~UNiagaraDataInterfaceRWBase() {}
	void UNiagaraDataInterfaceGrid3D::StaticRegisterNativesUNiagaraDataInterfaceGrid3D()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceGrid3D);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_NoRegister()
	{
		return UNiagaraDataInterfaceGrid3D::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClearBeforeNonIterationStage_MetaData[];
#endif
		static void NewProp_ClearBeforeNonIterationStage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ClearBeforeNonIterationStage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumCells_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NumCells;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CellSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CellSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumCellsMaxAxis_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumCellsMaxAxis;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SetResolutionMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetResolutionMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SetResolutionMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldBBoxSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldBBoxSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterfaceRWBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraDataInterfaceRW.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRW.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_ClearBeforeNonIterationStage_MetaData[] = {
		{ "Category", "Grid" },
		{ "Comment", "// Option to clear the buffer prior to a stage where the iteration count does not match the grid resolution.  Useful for stages where one wants to do sparse writes\n// and accumulate values.\n" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRW.h" },
		{ "ToolTip", "Option to clear the buffer prior to a stage where the iteration count does not match the grid resolution.  Useful for stages where one wants to do sparse writes\nand accumulate values." },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_ClearBeforeNonIterationStage_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceGrid3D*)Obj)->ClearBeforeNonIterationStage = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_ClearBeforeNonIterationStage = { "ClearBeforeNonIterationStage", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraDataInterfaceGrid3D), &Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_ClearBeforeNonIterationStage_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_ClearBeforeNonIterationStage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_ClearBeforeNonIterationStage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_NumCells_MetaData[] = {
		{ "Category", "Grid" },
		{ "Comment", "// Number of cells\n" },
		{ "EditCondition", "false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRW.h" },
		{ "ToolTip", "Number of cells" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_NumCells = { "NumCells", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceGrid3D, NumCells), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_NumCells_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_NumCells_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_CellSize_MetaData[] = {
		{ "Category", "Grid" },
		{ "Comment", "// World space size of a cell\n" },
		{ "EditCondition", "false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRW.h" },
		{ "ToolTip", "World space size of a cell" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_CellSize = { "CellSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceGrid3D, CellSize), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_CellSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_CellSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_NumCellsMaxAxis_MetaData[] = {
		{ "Category", "Grid" },
		{ "Comment", "// Number of cells on the longest axis\n" },
		{ "EditCondition", "false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRW.h" },
		{ "ToolTip", "Number of cells on the longest axis" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_NumCellsMaxAxis = { "NumCellsMaxAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceGrid3D, NumCellsMaxAxis), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_NumCellsMaxAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_NumCellsMaxAxis_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_SetResolutionMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_SetResolutionMethod_MetaData[] = {
		{ "Category", "Grid" },
		{ "Comment", "// Method for setting the grid resolution\n" },
		{ "EditCondition", "false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRW.h" },
		{ "ToolTip", "Method for setting the grid resolution" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_SetResolutionMethod = { "SetResolutionMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceGrid3D, SetResolutionMethod), Z_Construct_UEnum_Niagara_ESetResolutionMethod, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_SetResolutionMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_SetResolutionMethod_MetaData)) }; // 2225265332
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_WorldBBoxSize_MetaData[] = {
		{ "Category", "Grid" },
		{ "Comment", "// World size of the grid\n" },
		{ "EditCondition", "false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRW.h" },
		{ "ToolTip", "World size of the grid" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_WorldBBoxSize = { "WorldBBoxSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceGrid3D, WorldBBoxSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_WorldBBoxSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_WorldBBoxSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_ClearBeforeNonIterationStage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_NumCells,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_CellSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_NumCellsMaxAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_SetResolutionMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_SetResolutionMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_WorldBBoxSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceGrid3D>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::ClassParams = {
		&UNiagaraDataInterfaceGrid3D::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceGrid3D()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid3D.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid3D.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid3D.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceGrid3D>()
	{
		return UNiagaraDataInterfaceGrid3D::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceGrid3D);
	UNiagaraDataInterfaceGrid3D::~UNiagaraDataInterfaceGrid3D() {}
	void UNiagaraDataInterfaceGrid2D::StaticRegisterNativesUNiagaraDataInterfaceGrid2D()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceGrid2D);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_NoRegister()
	{
		return UNiagaraDataInterfaceGrid2D::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClearBeforeNonIterationStage_MetaData[];
#endif
		static void NewProp_ClearBeforeNonIterationStage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ClearBeforeNonIterationStage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumCellsX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumCellsX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumCellsY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumCellsY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumCellsMaxAxis_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumCellsMaxAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumAttributes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetGridFromMaxAxis_MetaData[];
#endif
		static void NewProp_SetGridFromMaxAxis_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SetGridFromMaxAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldBBoxSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldBBoxSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterfaceRWBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraDataInterfaceRW.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRW.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_ClearBeforeNonIterationStage_MetaData[] = {
		{ "Category", "Grid" },
		{ "Comment", "// Option to clear the buffer prior to a stage where the iteration count does not match the grid resolution.  Useful for stages where one wants to do sparse writes\n// and accumulate values.\n" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRW.h" },
		{ "ToolTip", "Option to clear the buffer prior to a stage where the iteration count does not match the grid resolution.  Useful for stages where one wants to do sparse writes\nand accumulate values." },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_ClearBeforeNonIterationStage_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceGrid2D*)Obj)->ClearBeforeNonIterationStage = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_ClearBeforeNonIterationStage = { "ClearBeforeNonIterationStage", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraDataInterfaceGrid2D), &Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_ClearBeforeNonIterationStage_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_ClearBeforeNonIterationStage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_ClearBeforeNonIterationStage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_NumCellsX_MetaData[] = {
		{ "Category", "Grid" },
		{ "Comment", "// Number of cells in X\n" },
		{ "EditCondition", "false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRW.h" },
		{ "ToolTip", "Number of cells in X" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_NumCellsX = { "NumCellsX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceGrid2D, NumCellsX), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_NumCellsX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_NumCellsX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_NumCellsY_MetaData[] = {
		{ "Category", "Grid" },
		{ "Comment", "// Number of cells in Y\n" },
		{ "EditCondition", "false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRW.h" },
		{ "ToolTip", "Number of cells in Y" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_NumCellsY = { "NumCellsY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceGrid2D, NumCellsY), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_NumCellsY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_NumCellsY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_NumCellsMaxAxis_MetaData[] = {
		{ "Category", "Grid" },
		{ "Comment", "// Number of cells on the longest axis\n" },
		{ "EditCondition", "false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRW.h" },
		{ "ToolTip", "Number of cells on the longest axis" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_NumCellsMaxAxis = { "NumCellsMaxAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceGrid2D, NumCellsMaxAxis), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_NumCellsMaxAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_NumCellsMaxAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_NumAttributes_MetaData[] = {
		{ "Category", "Grid" },
		{ "Comment", "// Number of Attributes\n" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRW.h" },
		{ "ToolTip", "Number of Attributes" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_NumAttributes = { "NumAttributes", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceGrid2D, NumAttributes), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_NumAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_NumAttributes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_SetGridFromMaxAxis_MetaData[] = {
		{ "Category", "Grid" },
		{ "Comment", "// Set grid resolution according to longest axis\n" },
		{ "EditCondition", "false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRW.h" },
		{ "ToolTip", "Set grid resolution according to longest axis" },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_SetGridFromMaxAxis_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceGrid2D*)Obj)->SetGridFromMaxAxis = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_SetGridFromMaxAxis = { "SetGridFromMaxAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraDataInterfaceGrid2D), &Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_SetGridFromMaxAxis_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_SetGridFromMaxAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_SetGridFromMaxAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_WorldBBoxSize_MetaData[] = {
		{ "Category", "Grid" },
		{ "Comment", "// World size of the grid\n" },
		{ "EditCondition", "false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRW.h" },
		{ "ToolTip", "World size of the grid" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_WorldBBoxSize = { "WorldBBoxSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceGrid2D, WorldBBoxSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_WorldBBoxSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_WorldBBoxSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_ClearBeforeNonIterationStage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_NumCellsX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_NumCellsY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_NumCellsMaxAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_NumAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_SetGridFromMaxAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_WorldBBoxSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceGrid2D>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::ClassParams = {
		&UNiagaraDataInterfaceGrid2D::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceGrid2D()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid2D.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid2D.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid2D.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceGrid2D>()
	{
		return UNiagaraDataInterfaceGrid2D::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceGrid2D);
	UNiagaraDataInterfaceGrid2D::~UNiagaraDataInterfaceGrid2D() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UNiagaraDataInterfaceGrid2D)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRW_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRW_h_Statics::EnumInfo[] = {
		{ ESetResolutionMethod_StaticEnum, TEXT("ESetResolutionMethod"), &Z_Registration_Info_UEnum_ESetResolutionMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2225265332U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRW_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceRWBase, UNiagaraDataInterfaceRWBase::StaticClass, TEXT("UNiagaraDataInterfaceRWBase"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceRWBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceRWBase), 1358870980U) },
		{ Z_Construct_UClass_UNiagaraDataInterfaceGrid3D, UNiagaraDataInterfaceGrid3D::StaticClass, TEXT("UNiagaraDataInterfaceGrid3D"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid3D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceGrid3D), 3443092268U) },
		{ Z_Construct_UClass_UNiagaraDataInterfaceGrid2D, UNiagaraDataInterfaceGrid2D::StaticClass, TEXT("UNiagaraDataInterfaceGrid2D"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid2D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceGrid2D), 2060214628U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRW_h_3489773101(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRW_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRW_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRW_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRW_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
