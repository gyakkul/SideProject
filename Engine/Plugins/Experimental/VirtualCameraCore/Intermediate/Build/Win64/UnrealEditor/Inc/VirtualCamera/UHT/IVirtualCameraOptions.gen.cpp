// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IVirtualCameraOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIVirtualCameraOptions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EUnit();
	UPackage* Z_Construct_UPackage__Script_VirtualCamera();
	VIRTUALCAMERA_API UClass* Z_Construct_UClass_UVirtualCameraOptions();
	VIRTUALCAMERA_API UClass* Z_Construct_UClass_UVirtualCameraOptions_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IVirtualCameraOptions::execIsFocusVisualizationAllowed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsFocusVisualizationAllowed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVirtualCameraOptions::execGetDesiredDistanceUnits)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EUnit*)Z_Param__Result=P_THIS->GetDesiredDistanceUnits_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVirtualCameraOptions::execSetDesiredDistanceUnits)
	{
		P_GET_ENUM(EUnit,Z_Param_DesiredUnits);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDesiredDistanceUnits_Implementation(EUnit(Z_Param_DesiredUnits));
		P_NATIVE_END;
	}
	struct VirtualCameraOptions_eventGetDesiredDistanceUnits_Parms
	{
		EUnit ReturnValue;

		/** Constructor, initializes return property only **/
		VirtualCameraOptions_eventGetDesiredDistanceUnits_Parms()
			: ReturnValue((EUnit)0)
		{
		}
	};
	struct VirtualCameraOptions_eventIsFocusVisualizationAllowed_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		VirtualCameraOptions_eventIsFocusVisualizationAllowed_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct VirtualCameraOptions_eventSetDesiredDistanceUnits_Parms
	{
		EUnit DesiredUnits;
	};
	EUnit IVirtualCameraOptions::GetDesiredDistanceUnits()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetDesiredDistanceUnits instead.");
		VirtualCameraOptions_eventGetDesiredDistanceUnits_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IVirtualCameraOptions::IsFocusVisualizationAllowed()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsFocusVisualizationAllowed instead.");
		VirtualCameraOptions_eventIsFocusVisualizationAllowed_Parms Parms;
		return Parms.ReturnValue;
	}
	void IVirtualCameraOptions::SetDesiredDistanceUnits(const EUnit DesiredUnits)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetDesiredDistanceUnits instead.");
	}
	void UVirtualCameraOptions::StaticRegisterNativesUVirtualCameraOptions()
	{
		UClass* Class = UVirtualCameraOptions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDesiredDistanceUnits", &IVirtualCameraOptions::execGetDesiredDistanceUnits },
			{ "IsFocusVisualizationAllowed", &IVirtualCameraOptions::execIsFocusVisualizationAllowed },
			{ "SetDesiredDistanceUnits", &IVirtualCameraOptions::execSetDesiredDistanceUnits },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVirtualCameraOptions_GetDesiredDistanceUnits_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVirtualCameraOptions_GetDesiredDistanceUnits_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVirtualCameraOptions_GetDesiredDistanceUnits_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraOptions_eventGetDesiredDistanceUnits_Parms, ReturnValue), Z_Construct_UEnum_CoreUObject_EUnit, METADATA_PARAMS(nullptr, 0) }; // 1931954769
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraOptions_GetDesiredDistanceUnits_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraOptions_GetDesiredDistanceUnits_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraOptions_GetDesiredDistanceUnits_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraOptions_GetDesiredDistanceUnits_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera | Options" },
		{ "Comment", "/**\n\x09 * Returns previously set unit of distance.\n\x09 * @return DesiredUnits - The unit that is used for distance measures like focus distance\n\x09 */" },
		{ "ModuleRelativePath", "Public/IVirtualCameraOptions.h" },
		{ "ToolTip", "Returns previously set unit of distance.\n@return DesiredUnits - The unit that is used for distance measures like focus distance" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraOptions_GetDesiredDistanceUnits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraOptions, nullptr, "GetDesiredDistanceUnits", nullptr, nullptr, sizeof(VirtualCameraOptions_eventGetDesiredDistanceUnits_Parms), Z_Construct_UFunction_UVirtualCameraOptions_GetDesiredDistanceUnits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraOptions_GetDesiredDistanceUnits_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraOptions_GetDesiredDistanceUnits_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraOptions_GetDesiredDistanceUnits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCameraOptions_GetDesiredDistanceUnits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraOptions_GetDesiredDistanceUnits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraOptions_IsFocusVisualizationAllowed_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVirtualCameraOptions_IsFocusVisualizationAllowed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VirtualCameraOptions_eventIsFocusVisualizationAllowed_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVirtualCameraOptions_IsFocusVisualizationAllowed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VirtualCameraOptions_eventIsFocusVisualizationAllowed_Parms), &Z_Construct_UFunction_UVirtualCameraOptions_IsFocusVisualizationAllowed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraOptions_IsFocusVisualizationAllowed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraOptions_IsFocusVisualizationAllowed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraOptions_IsFocusVisualizationAllowed_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera | Options" },
		{ "Comment", "/**\n\x09 * Checks whether or not focus visualization can activate\n\x09 * @return the current state of touch event visualization\n\x09 */" },
		{ "ModuleRelativePath", "Public/IVirtualCameraOptions.h" },
		{ "ToolTip", "Checks whether or not focus visualization can activate\n@return the current state of touch event visualization" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraOptions_IsFocusVisualizationAllowed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraOptions, nullptr, "IsFocusVisualizationAllowed", nullptr, nullptr, sizeof(VirtualCameraOptions_eventIsFocusVisualizationAllowed_Parms), Z_Construct_UFunction_UVirtualCameraOptions_IsFocusVisualizationAllowed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraOptions_IsFocusVisualizationAllowed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraOptions_IsFocusVisualizationAllowed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraOptions_IsFocusVisualizationAllowed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCameraOptions_IsFocusVisualizationAllowed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraOptions_IsFocusVisualizationAllowed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraOptions_SetDesiredDistanceUnits_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_DesiredUnits_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredUnits_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DesiredUnits;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVirtualCameraOptions_SetDesiredDistanceUnits_Statics::NewProp_DesiredUnits_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraOptions_SetDesiredDistanceUnits_Statics::NewProp_DesiredUnits_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVirtualCameraOptions_SetDesiredDistanceUnits_Statics::NewProp_DesiredUnits = { "DesiredUnits", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraOptions_eventSetDesiredDistanceUnits_Parms, DesiredUnits), Z_Construct_UEnum_CoreUObject_EUnit, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraOptions_SetDesiredDistanceUnits_Statics::NewProp_DesiredUnits_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraOptions_SetDesiredDistanceUnits_Statics::NewProp_DesiredUnits_MetaData)) }; // 1931954769
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraOptions_SetDesiredDistanceUnits_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraOptions_SetDesiredDistanceUnits_Statics::NewProp_DesiredUnits_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraOptions_SetDesiredDistanceUnits_Statics::NewProp_DesiredUnits,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraOptions_SetDesiredDistanceUnits_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera | Options" },
		{ "Comment", "/**\n\x09 * Sets unit of distance.\n\x09 * @param DesiredUnits - The new unit to use for distance measures like focus distance\n\x09 */" },
		{ "ModuleRelativePath", "Public/IVirtualCameraOptions.h" },
		{ "ToolTip", "Sets unit of distance.\n@param DesiredUnits - The new unit to use for distance measures like focus distance" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraOptions_SetDesiredDistanceUnits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraOptions, nullptr, "SetDesiredDistanceUnits", nullptr, nullptr, sizeof(VirtualCameraOptions_eventSetDesiredDistanceUnits_Parms), Z_Construct_UFunction_UVirtualCameraOptions_SetDesiredDistanceUnits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraOptions_SetDesiredDistanceUnits_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraOptions_SetDesiredDistanceUnits_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraOptions_SetDesiredDistanceUnits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCameraOptions_SetDesiredDistanceUnits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraOptions_SetDesiredDistanceUnits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVirtualCameraOptions);
	UClass* Z_Construct_UClass_UVirtualCameraOptions_NoRegister()
	{
		return UVirtualCameraOptions::StaticClass();
	}
	struct Z_Construct_UClass_UVirtualCameraOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVirtualCameraOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_VirtualCamera,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVirtualCameraOptions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVirtualCameraOptions_GetDesiredDistanceUnits, "GetDesiredDistanceUnits" }, // 2464906729
		{ &Z_Construct_UFunction_UVirtualCameraOptions_IsFocusVisualizationAllowed, "IsFocusVisualizationAllowed" }, // 1209314417
		{ &Z_Construct_UFunction_UVirtualCameraOptions_SetDesiredDistanceUnits, "SetDesiredDistanceUnits" }, // 17895201
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualCameraOptions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/IVirtualCameraOptions.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVirtualCameraOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IVirtualCameraOptions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVirtualCameraOptions_Statics::ClassParams = {
		&UVirtualCameraOptions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVirtualCameraOptions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVirtualCameraOptions()
	{
		if (!Z_Registration_Info_UClass_UVirtualCameraOptions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVirtualCameraOptions.OuterSingleton, Z_Construct_UClass_UVirtualCameraOptions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVirtualCameraOptions.OuterSingleton;
	}
	template<> VIRTUALCAMERA_API UClass* StaticClass<UVirtualCameraOptions>()
	{
		return UVirtualCameraOptions::StaticClass();
	}
	UVirtualCameraOptions::UVirtualCameraOptions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVirtualCameraOptions);
	UVirtualCameraOptions::~UVirtualCameraOptions() {}
	static FName NAME_UVirtualCameraOptions_GetDesiredDistanceUnits = FName(TEXT("GetDesiredDistanceUnits"));
	EUnit IVirtualCameraOptions::Execute_GetDesiredDistanceUnits(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVirtualCameraOptions::StaticClass()));
		VirtualCameraOptions_eventGetDesiredDistanceUnits_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVirtualCameraOptions_GetDesiredDistanceUnits);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVirtualCameraOptions*)(O->GetNativeInterfaceAddress(UVirtualCameraOptions::StaticClass())))
		{
			Parms.ReturnValue = I->GetDesiredDistanceUnits_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVirtualCameraOptions_IsFocusVisualizationAllowed = FName(TEXT("IsFocusVisualizationAllowed"));
	bool IVirtualCameraOptions::Execute_IsFocusVisualizationAllowed(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVirtualCameraOptions::StaticClass()));
		VirtualCameraOptions_eventIsFocusVisualizationAllowed_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVirtualCameraOptions_IsFocusVisualizationAllowed);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVirtualCameraOptions*)(O->GetNativeInterfaceAddress(UVirtualCameraOptions::StaticClass())))
		{
			Parms.ReturnValue = I->IsFocusVisualizationAllowed_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVirtualCameraOptions_SetDesiredDistanceUnits = FName(TEXT("SetDesiredDistanceUnits"));
	void IVirtualCameraOptions::Execute_SetDesiredDistanceUnits(UObject* O, const EUnit DesiredUnits)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVirtualCameraOptions::StaticClass()));
		VirtualCameraOptions_eventSetDesiredDistanceUnits_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVirtualCameraOptions_SetDesiredDistanceUnits);
		if (Func)
		{
			Parms.DesiredUnits=DesiredUnits;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVirtualCameraOptions*)(O->GetNativeInterfaceAddress(UVirtualCameraOptions::StaticClass())))
		{
			I->SetDesiredDistanceUnits_Implementation(DesiredUnits);
		}
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraOptions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraOptions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVirtualCameraOptions, UVirtualCameraOptions::StaticClass, TEXT("UVirtualCameraOptions"), &Z_Registration_Info_UClass_UVirtualCameraOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVirtualCameraOptions), 1664845038U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraOptions_h_2496094707(TEXT("/Script/VirtualCamera"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraOptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraOptions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
