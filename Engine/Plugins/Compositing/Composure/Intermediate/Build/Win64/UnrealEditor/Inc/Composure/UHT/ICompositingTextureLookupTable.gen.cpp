// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CompositingElements/ICompositingTextureLookupTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeICompositingTextureLookupTable() {}
// Cross Module References
	COMPOSURE_API UClass* Z_Construct_UClass_UCompositingTextureLookupTable();
	COMPOSURE_API UClass* Z_Construct_UClass_UCompositingTextureLookupTable_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Composure();
// End Cross Module References
	DEFINE_FUNCTION(ICompositingTextureLookupTable::execFindNamedPassResult)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_LookupName);
		P_GET_OBJECT_REF(UTexture,Z_Param_Out_OutTexture);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FindNamedPassResult(Z_Param_LookupName,Z_Param_Out_OutTexture);
		P_NATIVE_END;
	}
	void UCompositingTextureLookupTable::StaticRegisterNativesUCompositingTextureLookupTable()
	{
		UClass* Class = UCompositingTextureLookupTable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindNamedPassResult", &ICompositingTextureLookupTable::execFindNamedPassResult },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCompositingTextureLookupTable_FindNamedPassResult_Statics
	{
		struct CompositingTextureLookupTable_eventFindNamedPassResult_Parms
		{
			FName LookupName;
			UTexture* OutTexture;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_LookupName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutTexture;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCompositingTextureLookupTable_FindNamedPassResult_Statics::NewProp_LookupName = { "LookupName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingTextureLookupTable_eventFindNamedPassResult_Parms, LookupName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCompositingTextureLookupTable_FindNamedPassResult_Statics::NewProp_OutTexture = { "OutTexture", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingTextureLookupTable_eventFindNamedPassResult_Parms, OutTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCompositingTextureLookupTable_FindNamedPassResult_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CompositingTextureLookupTable_eventFindNamedPassResult_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCompositingTextureLookupTable_FindNamedPassResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CompositingTextureLookupTable_eventFindNamedPassResult_Parms), &Z_Construct_UFunction_UCompositingTextureLookupTable_FindNamedPassResult_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompositingTextureLookupTable_FindNamedPassResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompositingTextureLookupTable_FindNamedPassResult_Statics::NewProp_LookupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompositingTextureLookupTable_FindNamedPassResult_Statics::NewProp_OutTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompositingTextureLookupTable_FindNamedPassResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCompositingTextureLookupTable_FindNamedPassResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composure" },
		{ "ModuleRelativePath", "Classes/CompositingElements/ICompositingTextureLookupTable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompositingTextureLookupTable_FindNamedPassResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompositingTextureLookupTable, nullptr, "FindNamedPassResult", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCompositingTextureLookupTable_FindNamedPassResult_Statics::CompositingTextureLookupTable_eventFindNamedPassResult_Parms), Z_Construct_UFunction_UCompositingTextureLookupTable_FindNamedPassResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositingTextureLookupTable_FindNamedPassResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCompositingTextureLookupTable_FindNamedPassResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositingTextureLookupTable_FindNamedPassResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCompositingTextureLookupTable_FindNamedPassResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompositingTextureLookupTable_FindNamedPassResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCompositingTextureLookupTable);
	UClass* Z_Construct_UClass_UCompositingTextureLookupTable_NoRegister()
	{
		return UCompositingTextureLookupTable::StaticClass();
	}
	struct Z_Construct_UClass_UCompositingTextureLookupTable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCompositingTextureLookupTable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Composure,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCompositingTextureLookupTable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCompositingTextureLookupTable_FindNamedPassResult, "FindNamedPassResult" }, // 1533667970
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositingTextureLookupTable_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Classes/CompositingElements/ICompositingTextureLookupTable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCompositingTextureLookupTable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICompositingTextureLookupTable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCompositingTextureLookupTable_Statics::ClassParams = {
		&UCompositingTextureLookupTable::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCompositingTextureLookupTable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositingTextureLookupTable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCompositingTextureLookupTable()
	{
		if (!Z_Registration_Info_UClass_UCompositingTextureLookupTable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCompositingTextureLookupTable.OuterSingleton, Z_Construct_UClass_UCompositingTextureLookupTable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCompositingTextureLookupTable.OuterSingleton;
	}
	template<> COMPOSURE_API UClass* StaticClass<UCompositingTextureLookupTable>()
	{
		return UCompositingTextureLookupTable::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCompositingTextureLookupTable);
	UCompositingTextureLookupTable::~UCompositingTextureLookupTable() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_ICompositingTextureLookupTable_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_ICompositingTextureLookupTable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCompositingTextureLookupTable, UCompositingTextureLookupTable::StaticClass, TEXT("UCompositingTextureLookupTable"), &Z_Registration_Info_UClass_UCompositingTextureLookupTable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCompositingTextureLookupTable), 3977196376U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_ICompositingTextureLookupTable_h_1976389046(TEXT("/Script/Composure"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_ICompositingTextureLookupTable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_ICompositingTextureLookupTable_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
