// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/CurveSourceInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurveSourceInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_UCurveSourceInterface();
	ENGINE_API UClass* Z_Construct_UClass_UCurveSourceInterface_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNamedCurveValue();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NamedCurveValue;
class UScriptStruct* FNamedCurveValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NamedCurveValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NamedCurveValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNamedCurveValue, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("NamedCurveValue"));
	}
	return Z_Registration_Info_UScriptStruct_NamedCurveValue.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNamedCurveValue>()
{
	return FNamedCurveValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNamedCurveValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedCurveValue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Name/value pair for retrieving curve values */" },
		{ "ModuleRelativePath", "Classes/Animation/CurveSourceInterface.h" },
		{ "ToolTip", "Name/value pair for retrieving curve values" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNamedCurveValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNamedCurveValue>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedCurveValue_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Curve" },
		{ "Comment", "/** The name of the curve */" },
		{ "ModuleRelativePath", "Classes/Animation/CurveSourceInterface.h" },
		{ "ToolTip", "The name of the curve" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNamedCurveValue_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNamedCurveValue, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedCurveValue_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedCurveValue_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedCurveValue_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Curve" },
		{ "Comment", "/** The value of the curve */" },
		{ "ModuleRelativePath", "Classes/Animation/CurveSourceInterface.h" },
		{ "ToolTip", "The value of the curve" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNamedCurveValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNamedCurveValue, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedCurveValue_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedCurveValue_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNamedCurveValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedCurveValue_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedCurveValue_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNamedCurveValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"NamedCurveValue",
		sizeof(FNamedCurveValue),
		alignof(FNamedCurveValue),
		Z_Construct_UScriptStruct_FNamedCurveValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedCurveValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedCurveValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedCurveValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNamedCurveValue()
	{
		if (!Z_Registration_Info_UScriptStruct_NamedCurveValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NamedCurveValue.InnerSingleton, Z_Construct_UScriptStruct_FNamedCurveValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NamedCurveValue.InnerSingleton;
	}
	DEFINE_FUNCTION(ICurveSourceInterface::execGetCurves)
	{
		P_GET_TARRAY_REF(FNamedCurveValue,Z_Param_Out_OutValues);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCurves_Implementation(Z_Param_Out_OutValues);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ICurveSourceInterface::execGetCurveValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_CurveName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurveValue_Implementation(Z_Param_CurveName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ICurveSourceInterface::execGetBindingName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetBindingName_Implementation();
		P_NATIVE_END;
	}
	struct CurveSourceInterface_eventGetBindingName_Parms
	{
		FName ReturnValue;
	};
	struct CurveSourceInterface_eventGetCurves_Parms
	{
		TArray<FNamedCurveValue> OutValues;
	};
	struct CurveSourceInterface_eventGetCurveValue_Parms
	{
		FName CurveName;
		float ReturnValue;

		/** Constructor, initializes return property only **/
		CurveSourceInterface_eventGetCurveValue_Parms()
			: ReturnValue(0)
		{
		}
	};
	FName ICurveSourceInterface::GetBindingName() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetBindingName instead.");
		CurveSourceInterface_eventGetBindingName_Parms Parms;
		return Parms.ReturnValue;
	}
	void ICurveSourceInterface::GetCurves(TArray<FNamedCurveValue>& OutValues) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetCurves instead.");
	}
	float ICurveSourceInterface::GetCurveValue(FName CurveName) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetCurveValue instead.");
		CurveSourceInterface_eventGetCurveValue_Parms Parms;
		return Parms.ReturnValue;
	}
	void UCurveSourceInterface::StaticRegisterNativesUCurveSourceInterface()
	{
		UClass* Class = UCurveSourceInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBindingName", &ICurveSourceInterface::execGetBindingName },
			{ "GetCurves", &ICurveSourceInterface::execGetCurves },
			{ "GetCurveValue", &ICurveSourceInterface::execGetCurveValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCurveSourceInterface_GetBindingName_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCurveSourceInterface_GetBindingName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CurveSourceInterface_eventGetBindingName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCurveSourceInterface_GetBindingName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveSourceInterface_GetBindingName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCurveSourceInterface_GetBindingName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Curves" },
		{ "Comment", "/** \n\x09 * Get the name that this curve source can be bound to by.\n\x09 * Clients of this curve source will use this name to identify this source.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/CurveSourceInterface.h" },
		{ "ToolTip", "Get the name that this curve source can be bound to by.\nClients of this curve source will use this name to identify this source." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCurveSourceInterface_GetBindingName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCurveSourceInterface, nullptr, "GetBindingName", nullptr, nullptr, sizeof(CurveSourceInterface_eventGetBindingName_Parms), Z_Construct_UFunction_UCurveSourceInterface_GetBindingName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCurveSourceInterface_GetBindingName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCurveSourceInterface_GetBindingName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCurveSourceInterface_GetBindingName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCurveSourceInterface_GetBindingName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCurveSourceInterface_GetBindingName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCurveSourceInterface_GetCurves_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutValues_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutValues;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCurveSourceInterface_GetCurves_Statics::NewProp_OutValues_Inner = { "OutValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNamedCurveValue, METADATA_PARAMS(nullptr, 0) }; // 3751343754
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCurveSourceInterface_GetCurves_Statics::NewProp_OutValues = { "OutValues", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CurveSourceInterface_eventGetCurves_Parms, OutValues), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3751343754
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCurveSourceInterface_GetCurves_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveSourceInterface_GetCurves_Statics::NewProp_OutValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveSourceInterface_GetCurves_Statics::NewProp_OutValues,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCurveSourceInterface_GetCurves_Statics::Function_MetaDataParams[] = {
		{ "Category", "Curves" },
		{ "Comment", "/** Evaluate all curves that this source provides */" },
		{ "ModuleRelativePath", "Classes/Animation/CurveSourceInterface.h" },
		{ "ToolTip", "Evaluate all curves that this source provides" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCurveSourceInterface_GetCurves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCurveSourceInterface, nullptr, "GetCurves", nullptr, nullptr, sizeof(CurveSourceInterface_eventGetCurves_Parms), Z_Construct_UFunction_UCurveSourceInterface_GetCurves_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCurveSourceInterface_GetCurves_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCurveSourceInterface_GetCurves_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCurveSourceInterface_GetCurves_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCurveSourceInterface_GetCurves()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCurveSourceInterface_GetCurves_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCurveSourceInterface_GetCurveValue_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurveName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCurveSourceInterface_GetCurveValue_Statics::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CurveSourceInterface_eventGetCurveValue_Parms, CurveName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCurveSourceInterface_GetCurveValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CurveSourceInterface_eventGetCurveValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCurveSourceInterface_GetCurveValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveSourceInterface_GetCurveValue_Statics::NewProp_CurveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveSourceInterface_GetCurveValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCurveSourceInterface_GetCurveValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Curves" },
		{ "Comment", "/** Get the value for a specified curve */" },
		{ "ModuleRelativePath", "Classes/Animation/CurveSourceInterface.h" },
		{ "ToolTip", "Get the value for a specified curve" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCurveSourceInterface_GetCurveValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCurveSourceInterface, nullptr, "GetCurveValue", nullptr, nullptr, sizeof(CurveSourceInterface_eventGetCurveValue_Parms), Z_Construct_UFunction_UCurveSourceInterface_GetCurveValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCurveSourceInterface_GetCurveValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCurveSourceInterface_GetCurveValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCurveSourceInterface_GetCurveValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCurveSourceInterface_GetCurveValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCurveSourceInterface_GetCurveValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCurveSourceInterface);
	UClass* Z_Construct_UClass_UCurveSourceInterface_NoRegister()
	{
		return UCurveSourceInterface::StaticClass();
	}
	struct Z_Construct_UClass_UCurveSourceInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCurveSourceInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCurveSourceInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCurveSourceInterface_GetBindingName, "GetBindingName" }, // 2990870053
		{ &Z_Construct_UFunction_UCurveSourceInterface_GetCurves, "GetCurves" }, // 4042008022
		{ &Z_Construct_UFunction_UCurveSourceInterface_GetCurveValue, "GetCurveValue" }, // 2533260721
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveSourceInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/CurveSourceInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCurveSourceInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICurveSourceInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCurveSourceInterface_Statics::ClassParams = {
		&UCurveSourceInterface::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCurveSourceInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveSourceInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCurveSourceInterface()
	{
		if (!Z_Registration_Info_UClass_UCurveSourceInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCurveSourceInterface.OuterSingleton, Z_Construct_UClass_UCurveSourceInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCurveSourceInterface.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UCurveSourceInterface>()
	{
		return UCurveSourceInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCurveSourceInterface);
	UCurveSourceInterface::~UCurveSourceInterface() {}
	static FName NAME_UCurveSourceInterface_GetBindingName = FName(TEXT("GetBindingName"));
	FName ICurveSourceInterface::Execute_GetBindingName(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCurveSourceInterface::StaticClass()));
		CurveSourceInterface_eventGetBindingName_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UCurveSourceInterface_GetBindingName);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ICurveSourceInterface*)(O->GetNativeInterfaceAddress(UCurveSourceInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetBindingName_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UCurveSourceInterface_GetCurves = FName(TEXT("GetCurves"));
	void ICurveSourceInterface::Execute_GetCurves(const UObject* O, TArray<FNamedCurveValue>& OutValues)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCurveSourceInterface::StaticClass()));
		CurveSourceInterface_eventGetCurves_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UCurveSourceInterface_GetCurves);
		if (Func)
		{
			Parms.OutValues=OutValues;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
			OutValues=Parms.OutValues;
		}
		else if (auto I = (const ICurveSourceInterface*)(O->GetNativeInterfaceAddress(UCurveSourceInterface::StaticClass())))
		{
			I->GetCurves_Implementation(OutValues);
		}
	}
	static FName NAME_UCurveSourceInterface_GetCurveValue = FName(TEXT("GetCurveValue"));
	float ICurveSourceInterface::Execute_GetCurveValue(const UObject* O, FName CurveName)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCurveSourceInterface::StaticClass()));
		CurveSourceInterface_eventGetCurveValue_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UCurveSourceInterface_GetCurveValue);
		if (Func)
		{
			Parms.CurveName=CurveName;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ICurveSourceInterface*)(O->GetNativeInterfaceAddress(UCurveSourceInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetCurveValue_Implementation(CurveName);
		}
		return Parms.ReturnValue;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_Statics::ScriptStructInfo[] = {
		{ FNamedCurveValue::StaticStruct, Z_Construct_UScriptStruct_FNamedCurveValue_Statics::NewStructOps, TEXT("NamedCurveValue"), &Z_Registration_Info_UScriptStruct_NamedCurveValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNamedCurveValue), 3751343754U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCurveSourceInterface, UCurveSourceInterface::StaticClass, TEXT("UCurveSourceInterface"), &Z_Registration_Info_UClass_UCurveSourceInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCurveSourceInterface), 2300983895U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_1624784969(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
