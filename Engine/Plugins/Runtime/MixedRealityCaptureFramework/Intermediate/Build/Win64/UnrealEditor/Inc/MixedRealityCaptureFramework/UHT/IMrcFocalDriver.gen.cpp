// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IMrcFocalDriver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIMrcFocalDriver() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	MIXEDREALITYCAPTUREFRAMEWORK_API UClass* Z_Construct_UClass_UMrcFocalDriver();
	MIXEDREALITYCAPTUREFRAMEWORK_API UClass* Z_Construct_UClass_UMrcFocalDriver_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MixedRealityCaptureFramework();
// End Cross Module References
	DEFINE_FUNCTION(IMrcFocalDriver::execGetHorizontalFieldOfView)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHorizontalFieldOfView_Implementation();
		P_NATIVE_END;
	}
	struct MrcFocalDriver_eventGetHorizontalFieldOfView_Parms
	{
		float ReturnValue;

		/** Constructor, initializes return property only **/
		MrcFocalDriver_eventGetHorizontalFieldOfView_Parms()
			: ReturnValue(0)
		{
		}
	};
	float IMrcFocalDriver::GetHorizontalFieldOfView() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetHorizontalFieldOfView instead.");
		MrcFocalDriver_eventGetHorizontalFieldOfView_Parms Parms;
		return Parms.ReturnValue;
	}
	void UMrcFocalDriver::StaticRegisterNativesUMrcFocalDriver()
	{
		UClass* Class = UMrcFocalDriver::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHorizontalFieldOfView", &IMrcFocalDriver::execGetHorizontalFieldOfView },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMrcFocalDriver_GetHorizontalFieldOfView_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMrcFocalDriver_GetHorizontalFieldOfView_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MrcFocalDriver_eventGetHorizontalFieldOfView_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMrcFocalDriver_GetHorizontalFieldOfView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMrcFocalDriver_GetHorizontalFieldOfView_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMrcFocalDriver_GetHorizontalFieldOfView_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "MixedRealityCapture" },
		{ "Comment", "/** Get the horizontal field of view of this provider. */" },
		{ "DisplayName", "GetHorizontalFieldOfView" },
		{ "ModuleRelativePath", "Public/IMrcFocalDriver.h" },
		{ "ToolTip", "Get the horizontal field of view of this provider." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMrcFocalDriver_GetHorizontalFieldOfView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMrcFocalDriver, nullptr, "GetHorizontalFieldOfView", nullptr, nullptr, sizeof(MrcFocalDriver_eventGetHorizontalFieldOfView_Parms), Z_Construct_UFunction_UMrcFocalDriver_GetHorizontalFieldOfView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMrcFocalDriver_GetHorizontalFieldOfView_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMrcFocalDriver_GetHorizontalFieldOfView_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMrcFocalDriver_GetHorizontalFieldOfView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMrcFocalDriver_GetHorizontalFieldOfView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMrcFocalDriver_GetHorizontalFieldOfView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMrcFocalDriver);
	UClass* Z_Construct_UClass_UMrcFocalDriver_NoRegister()
	{
		return UMrcFocalDriver::StaticClass();
	}
	struct Z_Construct_UClass_UMrcFocalDriver_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMrcFocalDriver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_MixedRealityCaptureFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMrcFocalDriver_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMrcFocalDriver_GetHorizontalFieldOfView, "GetHorizontalFieldOfView" }, // 2345195478
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMrcFocalDriver_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "MixedRealityCapture" },
		{ "DisplayName", "Focal Driver" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/IMrcFocalDriver.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMrcFocalDriver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMrcFocalDriver>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMrcFocalDriver_Statics::ClassParams = {
		&UMrcFocalDriver::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMrcFocalDriver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMrcFocalDriver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMrcFocalDriver()
	{
		if (!Z_Registration_Info_UClass_UMrcFocalDriver.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMrcFocalDriver.OuterSingleton, Z_Construct_UClass_UMrcFocalDriver_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMrcFocalDriver.OuterSingleton;
	}
	template<> MIXEDREALITYCAPTUREFRAMEWORK_API UClass* StaticClass<UMrcFocalDriver>()
	{
		return UMrcFocalDriver::StaticClass();
	}
	UMrcFocalDriver::UMrcFocalDriver(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMrcFocalDriver);
	UMrcFocalDriver::~UMrcFocalDriver() {}
	static FName NAME_UMrcFocalDriver_GetHorizontalFieldOfView = FName(TEXT("GetHorizontalFieldOfView"));
	float IMrcFocalDriver::Execute_GetHorizontalFieldOfView(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UMrcFocalDriver::StaticClass()));
		MrcFocalDriver_eventGetHorizontalFieldOfView_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UMrcFocalDriver_GetHorizontalFieldOfView);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IMrcFocalDriver*)(O->GetNativeInterfaceAddress(UMrcFocalDriver::StaticClass())))
		{
			Parms.ReturnValue = I->GetHorizontalFieldOfView_Implementation();
		}
		return Parms.ReturnValue;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_IMrcFocalDriver_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_IMrcFocalDriver_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMrcFocalDriver, UMrcFocalDriver::StaticClass, TEXT("UMrcFocalDriver"), &Z_Registration_Info_UClass_UMrcFocalDriver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMrcFocalDriver), 2489152960U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_IMrcFocalDriver_h_992816032(TEXT("/Script/MixedRealityCaptureFramework"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_IMrcFocalDriver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_IMrcFocalDriver_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
