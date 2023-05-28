// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XRCreativeSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXRCreativeSubsystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	UPackage* Z_Construct_UPackage__Script_XRCreative();
	XRCREATIVE_API UClass* Z_Construct_UClass_UXRCreativeSubsystem();
	XRCREATIVE_API UClass* Z_Construct_UClass_UXRCreativeSubsystem_NoRegister();
	XRCREATIVE_API UClass* Z_Construct_UClass_UXRCreativeSubsystemHelpers();
	XRCREATIVE_API UClass* Z_Construct_UClass_UXRCreativeSubsystemHelpers_NoRegister();
// End Cross Module References
	void UXRCreativeSubsystemHelpers::StaticRegisterNativesUXRCreativeSubsystemHelpers()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UXRCreativeSubsystemHelpers);
	UClass* Z_Construct_UClass_UXRCreativeSubsystemHelpers_NoRegister()
	{
		return UXRCreativeSubsystemHelpers::StaticClass();
	}
	struct Z_Construct_UClass_UXRCreativeSubsystemHelpers_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXRCreativeSubsystemHelpers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_XRCreative,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRCreativeSubsystemHelpers_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "XRCreativeSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/XRCreativeSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXRCreativeSubsystemHelpers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXRCreativeSubsystemHelpers>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UXRCreativeSubsystemHelpers_Statics::ClassParams = {
		&UXRCreativeSubsystemHelpers::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UXRCreativeSubsystemHelpers_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativeSubsystemHelpers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXRCreativeSubsystemHelpers()
	{
		if (!Z_Registration_Info_UClass_UXRCreativeSubsystemHelpers.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UXRCreativeSubsystemHelpers.OuterSingleton, Z_Construct_UClass_UXRCreativeSubsystemHelpers_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UXRCreativeSubsystemHelpers.OuterSingleton;
	}
	template<> XRCREATIVE_API UClass* StaticClass<UXRCreativeSubsystemHelpers>()
	{
		return UXRCreativeSubsystemHelpers::StaticClass();
	}
	UXRCreativeSubsystemHelpers::UXRCreativeSubsystemHelpers(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXRCreativeSubsystemHelpers);
	UXRCreativeSubsystemHelpers::~UXRCreativeSubsystemHelpers() {}
#if WITH_EDITOR
	DEFINE_FUNCTION(UXRCreativeSubsystem::execExitVRMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UXRCreativeSubsystem::ExitVRMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXRCreativeSubsystem::execEnterVRMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UXRCreativeSubsystem::EnterVRMode();
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void UXRCreativeSubsystem::StaticRegisterNativesUXRCreativeSubsystem()
	{
#if WITH_EDITOR
		UClass* Class = UXRCreativeSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnterVRMode", &UXRCreativeSubsystem::execEnterVRMode },
			{ "ExitVRMode", &UXRCreativeSubsystem::execExitVRMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UXRCreativeSubsystem_EnterVRMode_Statics
	{
		struct XRCreativeSubsystem_eventEnterVRMode_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UXRCreativeSubsystem_EnterVRMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XRCreativeSubsystem_eventEnterVRMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXRCreativeSubsystem_EnterVRMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(XRCreativeSubsystem_eventEnterVRMode_Parms), &Z_Construct_UFunction_UXRCreativeSubsystem_EnterVRMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXRCreativeSubsystem_EnterVRMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRCreativeSubsystem_EnterVRMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRCreativeSubsystem_EnterVRMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "XR Creative" },
		{ "Comment", "/** Enter VR Mode */" },
		{ "ModuleRelativePath", "Public/XRCreativeSubsystem.h" },
		{ "ToolTip", "Enter VR Mode" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXRCreativeSubsystem_EnterVRMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXRCreativeSubsystem, nullptr, "EnterVRMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UXRCreativeSubsystem_EnterVRMode_Statics::XRCreativeSubsystem_eventEnterVRMode_Parms), Z_Construct_UFunction_UXRCreativeSubsystem_EnterVRMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativeSubsystem_EnterVRMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXRCreativeSubsystem_EnterVRMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativeSubsystem_EnterVRMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXRCreativeSubsystem_EnterVRMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXRCreativeSubsystem_EnterVRMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UXRCreativeSubsystem_ExitVRMode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRCreativeSubsystem_ExitVRMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "XR Creative" },
		{ "Comment", "/** Exit VR Mode */" },
		{ "ModuleRelativePath", "Public/XRCreativeSubsystem.h" },
		{ "ToolTip", "Exit VR Mode" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXRCreativeSubsystem_ExitVRMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXRCreativeSubsystem, nullptr, "ExitVRMode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXRCreativeSubsystem_ExitVRMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativeSubsystem_ExitVRMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXRCreativeSubsystem_ExitVRMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXRCreativeSubsystem_ExitVRMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UXRCreativeSubsystem);
	UClass* Z_Construct_UClass_UXRCreativeSubsystem_NoRegister()
	{
		return UXRCreativeSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UXRCreativeSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Helpers_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Helpers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXRCreativeSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_XRCreative,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UXRCreativeSubsystem_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UXRCreativeSubsystem_EnterVRMode, "EnterVRMode" }, // 237099827
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UXRCreativeSubsystem_ExitVRMode, "ExitVRMode" }, // 3454103332
#endif //WITH_EDITOR
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRCreativeSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "XRCreativeSubsystem.h" },
		{ "ModuleRelativePath", "Public/XRCreativeSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRCreativeSubsystem_Statics::NewProp_Helpers_MetaData[] = {
		{ "Category", "XR Creative" },
		{ "ModuleRelativePath", "Public/XRCreativeSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UXRCreativeSubsystem_Statics::NewProp_Helpers = { "Helpers", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UXRCreativeSubsystem, Helpers), Z_Construct_UClass_UXRCreativeSubsystemHelpers_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UXRCreativeSubsystem_Statics::NewProp_Helpers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativeSubsystem_Statics::NewProp_Helpers_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UXRCreativeSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRCreativeSubsystem_Statics::NewProp_Helpers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXRCreativeSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXRCreativeSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UXRCreativeSubsystem_Statics::ClassParams = {
		&UXRCreativeSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_UXRCreativeSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativeSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UXRCreativeSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativeSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXRCreativeSubsystem()
	{
		if (!Z_Registration_Info_UClass_UXRCreativeSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UXRCreativeSubsystem.OuterSingleton, Z_Construct_UClass_UXRCreativeSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UXRCreativeSubsystem.OuterSingleton;
	}
	template<> XRCREATIVE_API UClass* StaticClass<UXRCreativeSubsystem>()
	{
		return UXRCreativeSubsystem::StaticClass();
	}
	UXRCreativeSubsystem::UXRCreativeSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXRCreativeSubsystem);
	UXRCreativeSubsystem::~UXRCreativeSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UXRCreativeSubsystemHelpers, UXRCreativeSubsystemHelpers::StaticClass, TEXT("UXRCreativeSubsystemHelpers"), &Z_Registration_Info_UClass_UXRCreativeSubsystemHelpers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UXRCreativeSubsystemHelpers), 2855489986U) },
		{ Z_Construct_UClass_UXRCreativeSubsystem, UXRCreativeSubsystem::StaticClass, TEXT("UXRCreativeSubsystem"), &Z_Registration_Info_UClass_UXRCreativeSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UXRCreativeSubsystem), 3762378743U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeSubsystem_h_3527465003(TEXT("/Script/XRCreative"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
