// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DMXMVRFixtureActorInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXMVRFixtureActorInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	DMXFIXTUREACTORINTERFACE_API UClass* Z_Construct_UClass_UDMXMVRFixtureActorInterface();
	DMXFIXTUREACTORINTERFACE_API UClass* Z_Construct_UClass_UDMXMVRFixtureActorInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DMXFixtureActorInterface();
// End Cross Module References
	DEFINE_FUNCTION(IDMXMVRFixtureActorInterface::execOnMVRGetSupportedDMXAttributes)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_OutAttributeNames);
		P_GET_TARRAY_REF(FName,Z_Param_Out_OutMatrixAttributeNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMVRGetSupportedDMXAttributes_Implementation(Z_Param_Out_OutAttributeNames,Z_Param_Out_OutMatrixAttributeNames);
		P_NATIVE_END;
	}
	struct DMXMVRFixtureActorInterface_eventOnMVRGetSupportedDMXAttributes_Parms
	{
		TArray<FName> OutAttributeNames;
		TArray<FName> OutMatrixAttributeNames;
	};
	void IDMXMVRFixtureActorInterface::OnMVRGetSupportedDMXAttributes(TArray<FName>& OutAttributeNames, TArray<FName>& OutMatrixAttributeNames) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnMVRGetSupportedDMXAttributes instead.");
	}
	void UDMXMVRFixtureActorInterface::StaticRegisterNativesUDMXMVRFixtureActorInterface()
	{
		UClass* Class = UDMXMVRFixtureActorInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnMVRGetSupportedDMXAttributes", &IDMXMVRFixtureActorInterface::execOnMVRGetSupportedDMXAttributes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDMXMVRFixtureActorInterface_OnMVRGetSupportedDMXAttributes_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutAttributeNames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutAttributeNames;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutMatrixAttributeNames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutMatrixAttributeNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDMXMVRFixtureActorInterface_OnMVRGetSupportedDMXAttributes_Statics::NewProp_OutAttributeNames_Inner = { "OutAttributeNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDMXMVRFixtureActorInterface_OnMVRGetSupportedDMXAttributes_Statics::NewProp_OutAttributeNames = { "OutAttributeNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXMVRFixtureActorInterface_eventOnMVRGetSupportedDMXAttributes_Parms, OutAttributeNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDMXMVRFixtureActorInterface_OnMVRGetSupportedDMXAttributes_Statics::NewProp_OutMatrixAttributeNames_Inner = { "OutMatrixAttributeNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDMXMVRFixtureActorInterface_OnMVRGetSupportedDMXAttributes_Statics::NewProp_OutMatrixAttributeNames = { "OutMatrixAttributeNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXMVRFixtureActorInterface_eventOnMVRGetSupportedDMXAttributes_Parms, OutMatrixAttributeNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXMVRFixtureActorInterface_OnMVRGetSupportedDMXAttributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXMVRFixtureActorInterface_OnMVRGetSupportedDMXAttributes_Statics::NewProp_OutAttributeNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXMVRFixtureActorInterface_OnMVRGetSupportedDMXAttributes_Statics::NewProp_OutAttributeNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXMVRFixtureActorInterface_OnMVRGetSupportedDMXAttributes_Statics::NewProp_OutMatrixAttributeNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXMVRFixtureActorInterface_OnMVRGetSupportedDMXAttributes_Statics::NewProp_OutMatrixAttributeNames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXMVRFixtureActorInterface_OnMVRGetSupportedDMXAttributes_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/** Should return the DMX Attributes the Actor supports */" },
		{ "DisplayName", "On MVR Get Supported DMX Attributes" },
		{ "ModuleRelativePath", "Public/DMXMVRFixtureActorInterface.h" },
		{ "ToolTip", "Should return the DMX Attributes the Actor supports" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXMVRFixtureActorInterface_OnMVRGetSupportedDMXAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXMVRFixtureActorInterface, nullptr, "OnMVRGetSupportedDMXAttributes", nullptr, nullptr, sizeof(DMXMVRFixtureActorInterface_eventOnMVRGetSupportedDMXAttributes_Parms), Z_Construct_UFunction_UDMXMVRFixtureActorInterface_OnMVRGetSupportedDMXAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXMVRFixtureActorInterface_OnMVRGetSupportedDMXAttributes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXMVRFixtureActorInterface_OnMVRGetSupportedDMXAttributes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXMVRFixtureActorInterface_OnMVRGetSupportedDMXAttributes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXMVRFixtureActorInterface_OnMVRGetSupportedDMXAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXMVRFixtureActorInterface_OnMVRGetSupportedDMXAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXMVRFixtureActorInterface);
	UClass* Z_Construct_UClass_UDMXMVRFixtureActorInterface_NoRegister()
	{
		return UDMXMVRFixtureActorInterface::StaticClass();
	}
	struct Z_Construct_UClass_UDMXMVRFixtureActorInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXMVRFixtureActorInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXFixtureActorInterface,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDMXMVRFixtureActorInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDMXMVRFixtureActorInterface_OnMVRGetSupportedDMXAttributes, "OnMVRGetSupportedDMXAttributes" }, // 3451315536
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXMVRFixtureActorInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DMXMVRFixtureActorInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXMVRFixtureActorInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDMXMVRFixtureActorInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXMVRFixtureActorInterface_Statics::ClassParams = {
		&UDMXMVRFixtureActorInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDMXMVRFixtureActorInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXMVRFixtureActorInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXMVRFixtureActorInterface()
	{
		if (!Z_Registration_Info_UClass_UDMXMVRFixtureActorInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXMVRFixtureActorInterface.OuterSingleton, Z_Construct_UClass_UDMXMVRFixtureActorInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXMVRFixtureActorInterface.OuterSingleton;
	}
	template<> DMXFIXTUREACTORINTERFACE_API UClass* StaticClass<UDMXMVRFixtureActorInterface>()
	{
		return UDMXMVRFixtureActorInterface::StaticClass();
	}
	UDMXMVRFixtureActorInterface::UDMXMVRFixtureActorInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXMVRFixtureActorInterface);
	UDMXMVRFixtureActorInterface::~UDMXMVRFixtureActorInterface() {}
	static FName NAME_UDMXMVRFixtureActorInterface_OnMVRGetSupportedDMXAttributes = FName(TEXT("OnMVRGetSupportedDMXAttributes"));
	void IDMXMVRFixtureActorInterface::Execute_OnMVRGetSupportedDMXAttributes(const UObject* O, TArray<FName>& OutAttributeNames, TArray<FName>& OutMatrixAttributeNames)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UDMXMVRFixtureActorInterface::StaticClass()));
		DMXMVRFixtureActorInterface_eventOnMVRGetSupportedDMXAttributes_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UDMXMVRFixtureActorInterface_OnMVRGetSupportedDMXAttributes);
		if (Func)
		{
			Parms.OutAttributeNames=OutAttributeNames;
			Parms.OutMatrixAttributeNames=OutMatrixAttributeNames;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
			OutAttributeNames=Parms.OutAttributeNames;
			OutMatrixAttributeNames=Parms.OutMatrixAttributeNames;
		}
		else if (auto I = (const IDMXMVRFixtureActorInterface*)(O->GetNativeInterfaceAddress(UDMXMVRFixtureActorInterface::StaticClass())))
		{
			I->OnMVRGetSupportedDMXAttributes_Implementation(OutAttributeNames,OutMatrixAttributeNames);
		}
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXModularFeatures_Source_DMXFixtureActorInterface_Public_DMXMVRFixtureActorInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXModularFeatures_Source_DMXFixtureActorInterface_Public_DMXMVRFixtureActorInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXMVRFixtureActorInterface, UDMXMVRFixtureActorInterface::StaticClass, TEXT("UDMXMVRFixtureActorInterface"), &Z_Registration_Info_UClass_UDMXMVRFixtureActorInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXMVRFixtureActorInterface), 2993284076U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXModularFeatures_Source_DMXFixtureActorInterface_Public_DMXMVRFixtureActorInterface_h_7065146(TEXT("/Script/DMXFixtureActorInterface"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXModularFeatures_Source_DMXFixtureActorInterface_Public_DMXMVRFixtureActorInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXModularFeatures_Source_DMXFixtureActorInterface_Public_DMXMVRFixtureActorInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
