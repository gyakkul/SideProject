// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Modifier/VCamModifierInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVCamModifierInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_VCamCore();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamComponent_NoRegister();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamModifierInterface();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamModifierInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IVCamModifierInterface::execOnVCamComponentChanged)
	{
		P_GET_OBJECT(UVCamComponent,Z_Param_VCam);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnVCamComponentChanged_Implementation(Z_Param_VCam);
		P_NATIVE_END;
	}
	struct VCamModifierInterface_eventOnVCamComponentChanged_Parms
	{
		UVCamComponent* VCam;
	};
	void IVCamModifierInterface::OnVCamComponentChanged(UVCamComponent* VCam)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnVCamComponentChanged instead.");
	}
	void UVCamModifierInterface::StaticRegisterNativesUVCamModifierInterface()
	{
		UClass* Class = UVCamModifierInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnVCamComponentChanged", &IVCamModifierInterface::execOnVCamComponentChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVCamModifierInterface_OnVCamComponentChanged_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VCam_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VCam;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamModifierInterface_OnVCamComponentChanged_Statics::NewProp_VCam_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVCamModifierInterface_OnVCamComponentChanged_Statics::NewProp_VCam = { "VCam", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamModifierInterface_eventOnVCamComponentChanged_Parms, VCam), Z_Construct_UClass_UVCamComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVCamModifierInterface_OnVCamComponentChanged_Statics::NewProp_VCam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamModifierInterface_OnVCamComponentChanged_Statics::NewProp_VCam_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamModifierInterface_OnVCamComponentChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamModifierInterface_OnVCamComponentChanged_Statics::NewProp_VCam,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamModifierInterface_OnVCamComponentChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Active VCam Update" },
		{ "Comment", "//Function used to monitor the status of a VCam. If it changed, function will be triggered.\n" },
		{ "ModuleRelativePath", "Public/Modifier/VCamModifierInterface.h" },
		{ "ToolTip", "Function used to monitor the status of a VCam. If it changed, function will be triggered." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamModifierInterface_OnVCamComponentChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamModifierInterface, nullptr, "OnVCamComponentChanged", nullptr, nullptr, sizeof(VCamModifierInterface_eventOnVCamComponentChanged_Parms), Z_Construct_UFunction_UVCamModifierInterface_OnVCamComponentChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamModifierInterface_OnVCamComponentChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamModifierInterface_OnVCamComponentChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamModifierInterface_OnVCamComponentChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamModifierInterface_OnVCamComponentChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamModifierInterface_OnVCamComponentChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVCamModifierInterface);
	UClass* Z_Construct_UClass_UVCamModifierInterface_NoRegister()
	{
		return UVCamModifierInterface::StaticClass();
	}
	struct Z_Construct_UClass_UVCamModifierInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVCamModifierInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_VCamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVCamModifierInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVCamModifierInterface_OnVCamComponentChanged, "OnVCamComponentChanged" }, // 1053296766
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamModifierInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Modifier/VCamModifierInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVCamModifierInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IVCamModifierInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVCamModifierInterface_Statics::ClassParams = {
		&UVCamModifierInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVCamModifierInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamModifierInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVCamModifierInterface()
	{
		if (!Z_Registration_Info_UClass_UVCamModifierInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVCamModifierInterface.OuterSingleton, Z_Construct_UClass_UVCamModifierInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVCamModifierInterface.OuterSingleton;
	}
	template<> VCAMCORE_API UClass* StaticClass<UVCamModifierInterface>()
	{
		return UVCamModifierInterface::StaticClass();
	}
	UVCamModifierInterface::UVCamModifierInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVCamModifierInterface);
	UVCamModifierInterface::~UVCamModifierInterface() {}
	static FName NAME_UVCamModifierInterface_OnVCamComponentChanged = FName(TEXT("OnVCamComponentChanged"));
	void IVCamModifierInterface::Execute_OnVCamComponentChanged(UObject* O, UVCamComponent* VCam)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVCamModifierInterface::StaticClass()));
		VCamModifierInterface_eventOnVCamComponentChanged_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVCamModifierInterface_OnVCamComponentChanged);
		if (Func)
		{
			Parms.VCam=VCam;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVCamModifierInterface*)(O->GetNativeInterfaceAddress(UVCamModifierInterface::StaticClass())))
		{
			I->OnVCamComponentChanged_Implementation(VCam);
		}
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifierInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifierInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVCamModifierInterface, UVCamModifierInterface::StaticClass, TEXT("UVCamModifierInterface"), &Z_Registration_Info_UClass_UVCamModifierInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVCamModifierInterface), 895044529U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifierInterface_h_420993612(TEXT("/Script/VCamCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifierInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifierInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
