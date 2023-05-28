// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenXRBlueprintFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenXRBlueprintFunctionLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	OPENXRHMD_API UClass* Z_Construct_UClass_UOpenXRBlueprintFunctionLibrary();
	OPENXRHMD_API UClass* Z_Construct_UClass_UOpenXRBlueprintFunctionLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OpenXRHMD();
// End Cross Module References
	DEFINE_FUNCTION(UOpenXRBlueprintFunctionLibrary::execSetEnvironmentBlendMode)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewBlendMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOpenXRBlueprintFunctionLibrary::SetEnvironmentBlendMode(Z_Param_NewBlendMode);
		P_NATIVE_END;
	}
	void UOpenXRBlueprintFunctionLibrary::StaticRegisterNativesUOpenXRBlueprintFunctionLibrary()
	{
		UClass* Class = UOpenXRBlueprintFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetEnvironmentBlendMode", &UOpenXRBlueprintFunctionLibrary::execSetEnvironmentBlendMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOpenXRBlueprintFunctionLibrary_SetEnvironmentBlendMode_Statics
	{
		struct OpenXRBlueprintFunctionLibrary_eventSetEnvironmentBlendMode_Parms
		{
			int32 NewBlendMode;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewBlendMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOpenXRBlueprintFunctionLibrary_SetEnvironmentBlendMode_Statics::NewProp_NewBlendMode = { "NewBlendMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenXRBlueprintFunctionLibrary_eventSetEnvironmentBlendMode_Parms, NewBlendMode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenXRBlueprintFunctionLibrary_SetEnvironmentBlendMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRBlueprintFunctionLibrary_SetEnvironmentBlendMode_Statics::NewProp_NewBlendMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenXRBlueprintFunctionLibrary_SetEnvironmentBlendMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "OpenXR|Experimental" },
		{ "Comment", "/**\n\x09 * Allows to change the environment blend mode at runtime.\n\x09 * \n\x09 * @param NewBlendMode\x09\x09The new blend mode to be set, if supported.\n\x09 */" },
		{ "ModuleRelativePath", "Public/OpenXRBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Allows to change the environment blend mode at runtime.\n\n@param NewBlendMode          The new blend mode to be set, if supported." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenXRBlueprintFunctionLibrary_SetEnvironmentBlendMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenXRBlueprintFunctionLibrary, nullptr, "SetEnvironmentBlendMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOpenXRBlueprintFunctionLibrary_SetEnvironmentBlendMode_Statics::OpenXRBlueprintFunctionLibrary_eventSetEnvironmentBlendMode_Parms), Z_Construct_UFunction_UOpenXRBlueprintFunctionLibrary_SetEnvironmentBlendMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRBlueprintFunctionLibrary_SetEnvironmentBlendMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenXRBlueprintFunctionLibrary_SetEnvironmentBlendMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRBlueprintFunctionLibrary_SetEnvironmentBlendMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenXRBlueprintFunctionLibrary_SetEnvironmentBlendMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOpenXRBlueprintFunctionLibrary_SetEnvironmentBlendMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOpenXRBlueprintFunctionLibrary);
	UClass* Z_Construct_UClass_UOpenXRBlueprintFunctionLibrary_NoRegister()
	{
		return UOpenXRBlueprintFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UOpenXRBlueprintFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOpenXRBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OpenXRHMD,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOpenXRBlueprintFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOpenXRBlueprintFunctionLibrary_SetEnvironmentBlendMode, "SetEnvironmentBlendMode" }, // 1172207717
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenXRBlueprintFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OpenXRBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/OpenXRBlueprintFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOpenXRBlueprintFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOpenXRBlueprintFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOpenXRBlueprintFunctionLibrary_Statics::ClassParams = {
		&UOpenXRBlueprintFunctionLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOpenXRBlueprintFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRBlueprintFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOpenXRBlueprintFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UOpenXRBlueprintFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOpenXRBlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_UOpenXRBlueprintFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOpenXRBlueprintFunctionLibrary.OuterSingleton;
	}
	template<> OPENXRHMD_API UClass* StaticClass<UOpenXRBlueprintFunctionLibrary>()
	{
		return UOpenXRBlueprintFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenXRBlueprintFunctionLibrary);
	UOpenXRBlueprintFunctionLibrary::~UOpenXRBlueprintFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OpenXR_Source_OpenXRHMD_Public_OpenXRBlueprintFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OpenXR_Source_OpenXRHMD_Public_OpenXRBlueprintFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOpenXRBlueprintFunctionLibrary, UOpenXRBlueprintFunctionLibrary::StaticClass, TEXT("UOpenXRBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_UOpenXRBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOpenXRBlueprintFunctionLibrary), 579188481U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OpenXR_Source_OpenXRHMD_Public_OpenXRBlueprintFunctionLibrary_h_3944220417(TEXT("/Script/OpenXRHMD"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OpenXR_Source_OpenXRHMD_Public_OpenXRBlueprintFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OpenXR_Source_OpenXRHMD_Public_OpenXRBlueprintFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
