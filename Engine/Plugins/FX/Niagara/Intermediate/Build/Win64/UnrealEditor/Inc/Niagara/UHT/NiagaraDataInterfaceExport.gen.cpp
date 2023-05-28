// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/NiagaraDataInterfaceExport.h"
#include "../Public/NiagaraCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceExport() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceExport();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceExport_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraParticleCallbackHandler();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraParticleCallbackHandler_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENDIExport_GPUAllocationMode();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FBasicParticleData();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUserParameterBinding();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BasicParticleData;
class UScriptStruct* FBasicParticleData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BasicParticleData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BasicParticleData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBasicParticleData, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("BasicParticleData"));
	}
	return Z_Registration_Info_UScriptStruct_BasicParticleData.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FBasicParticleData>()
{
	return FBasicParticleData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBasicParticleData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBasicParticleData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceExport.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBasicParticleData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBasicParticleData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBasicParticleData_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Particle Data" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceExport.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBasicParticleData_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBasicParticleData, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FBasicParticleData_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasicParticleData_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBasicParticleData_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "Particle Data" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceExport.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBasicParticleData_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBasicParticleData, Size), METADATA_PARAMS(Z_Construct_UScriptStruct_FBasicParticleData_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasicParticleData_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBasicParticleData_Statics::NewProp_Velocity_MetaData[] = {
		{ "Category", "Particle Data" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceExport.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBasicParticleData_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBasicParticleData, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FBasicParticleData_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasicParticleData_Statics::NewProp_Velocity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBasicParticleData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBasicParticleData_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBasicParticleData_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBasicParticleData_Statics::NewProp_Velocity,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBasicParticleData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"BasicParticleData",
		sizeof(FBasicParticleData),
		alignof(FBasicParticleData),
		Z_Construct_UScriptStruct_FBasicParticleData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasicParticleData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBasicParticleData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasicParticleData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBasicParticleData()
	{
		if (!Z_Registration_Info_UScriptStruct_BasicParticleData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BasicParticleData.InnerSingleton, Z_Construct_UScriptStruct_FBasicParticleData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BasicParticleData.InnerSingleton;
	}
	DEFINE_FUNCTION(INiagaraParticleCallbackHandler::execReceiveParticleData)
	{
		P_GET_TARRAY_REF(FBasicParticleData,Z_Param_Out_Data);
		P_GET_OBJECT(UNiagaraSystem,Z_Param_NiagaraSystem);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_SimulationPositionOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReceiveParticleData_Implementation(Z_Param_Out_Data,Z_Param_NiagaraSystem,Z_Param_Out_SimulationPositionOffset);
		P_NATIVE_END;
	}
	struct NiagaraParticleCallbackHandler_eventReceiveParticleData_Parms
	{
		TArray<FBasicParticleData> Data;
		UNiagaraSystem* NiagaraSystem;
		FVector SimulationPositionOffset;
	};
	void INiagaraParticleCallbackHandler::ReceiveParticleData(TArray<FBasicParticleData> const& Data, UNiagaraSystem* NiagaraSystem, FVector const& SimulationPositionOffset)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ReceiveParticleData instead.");
	}
	void UNiagaraParticleCallbackHandler::StaticRegisterNativesUNiagaraParticleCallbackHandler()
	{
		UClass* Class = UNiagaraParticleCallbackHandler::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReceiveParticleData", &INiagaraParticleCallbackHandler::execReceiveParticleData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNiagaraParticleCallbackHandler_ReceiveParticleData_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimulationPositionOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SimulationPositionOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraParticleCallbackHandler_ReceiveParticleData_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBasicParticleData, METADATA_PARAMS(nullptr, 0) }; // 588603259
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraParticleCallbackHandler_ReceiveParticleData_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraParticleCallbackHandler_ReceiveParticleData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraParticleCallbackHandler_eventReceiveParticleData_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraParticleCallbackHandler_ReceiveParticleData_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParticleCallbackHandler_ReceiveParticleData_Statics::NewProp_Data_MetaData)) }; // 588603259
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraParticleCallbackHandler_ReceiveParticleData_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraParticleCallbackHandler_eventReceiveParticleData_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraParticleCallbackHandler_ReceiveParticleData_Statics::NewProp_SimulationPositionOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraParticleCallbackHandler_ReceiveParticleData_Statics::NewProp_SimulationPositionOffset = { "SimulationPositionOffset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraParticleCallbackHandler_eventReceiveParticleData_Parms, SimulationPositionOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraParticleCallbackHandler_ReceiveParticleData_Statics::NewProp_SimulationPositionOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParticleCallbackHandler_ReceiveParticleData_Statics::NewProp_SimulationPositionOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraParticleCallbackHandler_ReceiveParticleData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParticleCallbackHandler_ReceiveParticleData_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParticleCallbackHandler_ReceiveParticleData_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParticleCallbackHandler_ReceiveParticleData_Statics::NewProp_NiagaraSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParticleCallbackHandler_ReceiveParticleData_Statics::NewProp_SimulationPositionOffset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraParticleCallbackHandler_ReceiveParticleData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** This function is called once per tick with the gathered particle data. It will not be called if there is no particle data to call it with. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceExport.h" },
		{ "ToolTip", "This function is called once per tick with the gathered particle data. It will not be called if there is no particle data to call it with." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraParticleCallbackHandler_ReceiveParticleData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraParticleCallbackHandler, nullptr, "ReceiveParticleData", nullptr, nullptr, sizeof(NiagaraParticleCallbackHandler_eventReceiveParticleData_Parms), Z_Construct_UFunction_UNiagaraParticleCallbackHandler_ReceiveParticleData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParticleCallbackHandler_ReceiveParticleData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraParticleCallbackHandler_ReceiveParticleData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParticleCallbackHandler_ReceiveParticleData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraParticleCallbackHandler_ReceiveParticleData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraParticleCallbackHandler_ReceiveParticleData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraParticleCallbackHandler);
	UClass* Z_Construct_UClass_UNiagaraParticleCallbackHandler_NoRegister()
	{
		return UNiagaraParticleCallbackHandler::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraParticleCallbackHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraParticleCallbackHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNiagaraParticleCallbackHandler_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNiagaraParticleCallbackHandler_ReceiveParticleData, "ReceiveParticleData" }, // 2705587275
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraParticleCallbackHandler_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceExport.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraParticleCallbackHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INiagaraParticleCallbackHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraParticleCallbackHandler_Statics::ClassParams = {
		&UNiagaraParticleCallbackHandler::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraParticleCallbackHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraParticleCallbackHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraParticleCallbackHandler()
	{
		if (!Z_Registration_Info_UClass_UNiagaraParticleCallbackHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraParticleCallbackHandler.OuterSingleton, Z_Construct_UClass_UNiagaraParticleCallbackHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraParticleCallbackHandler.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraParticleCallbackHandler>()
	{
		return UNiagaraParticleCallbackHandler::StaticClass();
	}
	UNiagaraParticleCallbackHandler::UNiagaraParticleCallbackHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraParticleCallbackHandler);
	UNiagaraParticleCallbackHandler::~UNiagaraParticleCallbackHandler() {}
	static FName NAME_UNiagaraParticleCallbackHandler_ReceiveParticleData = FName(TEXT("ReceiveParticleData"));
	void INiagaraParticleCallbackHandler::Execute_ReceiveParticleData(UObject* O, TArray<FBasicParticleData> const& Data, UNiagaraSystem* NiagaraSystem, FVector const& SimulationPositionOffset)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UNiagaraParticleCallbackHandler::StaticClass()));
		NiagaraParticleCallbackHandler_eventReceiveParticleData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UNiagaraParticleCallbackHandler_ReceiveParticleData);
		if (Func)
		{
			Parms.Data=Data;
			Parms.NiagaraSystem=NiagaraSystem;
			Parms.SimulationPositionOffset=SimulationPositionOffset;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (INiagaraParticleCallbackHandler*)(O->GetNativeInterfaceAddress(UNiagaraParticleCallbackHandler::StaticClass())))
		{
			I->ReceiveParticleData_Implementation(Data,NiagaraSystem,SimulationPositionOffset);
		}
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENDIExport_GPUAllocationMode;
	static UEnum* ENDIExport_GPUAllocationMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENDIExport_GPUAllocationMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENDIExport_GPUAllocationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENDIExport_GPUAllocationMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENDIExport_GPUAllocationMode"));
		}
		return Z_Registration_Info_UEnum_ENDIExport_GPUAllocationMode.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENDIExport_GPUAllocationMode>()
	{
		return ENDIExport_GPUAllocationMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENDIExport_GPUAllocationMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENDIExport_GPUAllocationMode_Statics::Enumerators[] = {
		{ "ENDIExport_GPUAllocationMode::FixedSize", (int64)ENDIExport_GPUAllocationMode::FixedSize },
		{ "ENDIExport_GPUAllocationMode::PerParticle", (int64)ENDIExport_GPUAllocationMode::PerParticle },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENDIExport_GPUAllocationMode_Statics::Enum_MetaDataParams[] = {
		{ "FixedSize.Comment", "/** Use a fixed number of elements to write into per frame. */" },
		{ "FixedSize.Name", "ENDIExport_GPUAllocationMode::FixedSize" },
		{ "FixedSize.ToolTip", "Use a fixed number of elements to write into per frame." },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceExport.h" },
		{ "PerParticle.Comment", "/** Use a variable number of elements to write into per frame based on number of emitter property particle count multiplied by the modifier. */" },
		{ "PerParticle.Name", "ENDIExport_GPUAllocationMode::PerParticle" },
		{ "PerParticle.ToolTip", "Use a variable number of elements to write into per frame based on number of emitter property particle count multiplied by the modifier." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENDIExport_GPUAllocationMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENDIExport_GPUAllocationMode",
		"ENDIExport_GPUAllocationMode",
		Z_Construct_UEnum_Niagara_ENDIExport_GPUAllocationMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENDIExport_GPUAllocationMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENDIExport_GPUAllocationMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENDIExport_GPUAllocationMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENDIExport_GPUAllocationMode()
	{
		if (!Z_Registration_Info_UEnum_ENDIExport_GPUAllocationMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENDIExport_GPUAllocationMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENDIExport_GPUAllocationMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENDIExport_GPUAllocationMode.InnerSingleton;
	}
	void UNiagaraDataInterfaceExport::StaticRegisterNativesUNiagaraDataInterfaceExport()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceExport);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceExport_NoRegister()
	{
		return UNiagaraDataInterfaceExport::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CallbackHandlerParameter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CallbackHandlerParameter;
		static const UECodeGen_Private::FBytePropertyParams NewProp_GPUAllocationMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GPUAllocationMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GPUAllocationMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GPUAllocationFixedSize_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_GPUAllocationFixedSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GPUAllocationPerParticleSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GPUAllocationPerParticleSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::Class_MetaDataParams[] = {
		{ "Category", "Export" },
		{ "Comment", "/** This Data Interface can be used to gather particles at execution time and call either a \nC++ or blueprint object with the gathered particle data each tick. */" },
		{ "DisplayName", "Export particle data" },
		{ "IncludePath", "NiagaraDataInterfaceExport.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceExport.h" },
		{ "ToolTip", "This Data Interface can be used to gather particles at execution time and call either a\nC++ or blueprint object with the gathered particle data each tick." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::NewProp_CallbackHandlerParameter_MetaData[] = {
		{ "Category", "Export" },
		{ "Comment", "/** Reference to a user parameter that should receive the particle data after the simulation tick. The supplied parameter object needs to implement the INiagaraParticleCallbackHandler interface. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceExport.h" },
		{ "ToolTip", "Reference to a user parameter that should receive the particle data after the simulation tick. The supplied parameter object needs to implement the INiagaraParticleCallbackHandler interface." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::NewProp_CallbackHandlerParameter = { "CallbackHandlerParameter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceExport, CallbackHandlerParameter), Z_Construct_UScriptStruct_FNiagaraUserParameterBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::NewProp_CallbackHandlerParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::NewProp_CallbackHandlerParameter_MetaData)) }; // 1724214256
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::NewProp_GPUAllocationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::NewProp_GPUAllocationMode_MetaData[] = {
		{ "Category", "Export GPU" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceExport.h" },
		{ "Tooltip", "Sets the allocation scheme for the number of elements we reserve for the GPU.  The number of elements reserved should be as low as possible to improve performance." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::NewProp_GPUAllocationMode = { "GPUAllocationMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceExport, GPUAllocationMode), Z_Construct_UEnum_Niagara_ENDIExport_GPUAllocationMode, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::NewProp_GPUAllocationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::NewProp_GPUAllocationMode_MetaData)) }; // 1162412131
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::NewProp_GPUAllocationFixedSize_MetaData[] = {
		{ "Category", "Export GPU" },
		{ "Comment", "/** Reserve a fixed number of elements we can write per frame.  Once the limit is reached we ignore further writes. */" },
		{ "EditCondition", "GPUAllocationMode == ENDIExport_GPUAllocationMode::FixedSize" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceExport.h" },
		{ "ToolTip", "Reserve a fixed number of elements we can write per frame.  Once the limit is reached we ignore further writes." },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::NewProp_GPUAllocationFixedSize = { "GPUAllocationFixedSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceExport, GPUAllocationFixedSize), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::NewProp_GPUAllocationFixedSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::NewProp_GPUAllocationFixedSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::NewProp_GPUAllocationPerParticleSize_MetaData[] = {
		{ "Category", "Export GPU" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Uses the emitter property particle count * this to determine the number of elements we reserve for write per frame.  The console variable fx.Niagara.NDIExport.GPUMaxReadbackCount is used to cap the maximum.  Once the limit is reached we ignore further writes. */" },
		{ "EditCondition", "GPUAllocationMode == ENDIExport_GPUAllocationMode::PerParticle" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceExport.h" },
		{ "ToolTip", "Uses the emitter property particle count * this to determine the number of elements we reserve for write per frame.  The console variable fx.Niagara.NDIExport.GPUMaxReadbackCount is used to cap the maximum.  Once the limit is reached we ignore further writes." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::NewProp_GPUAllocationPerParticleSize = { "GPUAllocationPerParticleSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceExport, GPUAllocationPerParticleSize), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::NewProp_GPUAllocationPerParticleSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::NewProp_GPUAllocationPerParticleSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::NewProp_CallbackHandlerParameter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::NewProp_GPUAllocationMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::NewProp_GPUAllocationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::NewProp_GPUAllocationFixedSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::NewProp_GPUAllocationPerParticleSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceExport>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::ClassParams = {
		&UNiagaraDataInterfaceExport::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceExport()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceExport.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceExport.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataInterfaceExport.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceExport>()
	{
		return UNiagaraDataInterfaceExport::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceExport);
	UNiagaraDataInterfaceExport::~UNiagaraDataInterfaceExport() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_Statics::EnumInfo[] = {
		{ ENDIExport_GPUAllocationMode_StaticEnum, TEXT("ENDIExport_GPUAllocationMode"), &Z_Registration_Info_UEnum_ENDIExport_GPUAllocationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1162412131U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_Statics::ScriptStructInfo[] = {
		{ FBasicParticleData::StaticStruct, Z_Construct_UScriptStruct_FBasicParticleData_Statics::NewStructOps, TEXT("BasicParticleData"), &Z_Registration_Info_UScriptStruct_BasicParticleData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBasicParticleData), 588603259U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraParticleCallbackHandler, UNiagaraParticleCallbackHandler::StaticClass, TEXT("UNiagaraParticleCallbackHandler"), &Z_Registration_Info_UClass_UNiagaraParticleCallbackHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraParticleCallbackHandler), 3930586379U) },
		{ Z_Construct_UClass_UNiagaraDataInterfaceExport, UNiagaraDataInterfaceExport::StaticClass, TEXT("UNiagaraDataInterfaceExport"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceExport, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceExport), 2475715000U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_3979642451(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
