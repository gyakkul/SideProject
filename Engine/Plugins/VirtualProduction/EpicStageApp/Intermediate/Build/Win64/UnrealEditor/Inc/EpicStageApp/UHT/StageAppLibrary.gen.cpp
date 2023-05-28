// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StageAppLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStageAppLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	EPICSTAGEAPP_API UClass* Z_Construct_UClass_UStageAppFunctionLibrary();
	EPICSTAGEAPP_API UClass* Z_Construct_UClass_UStageAppFunctionLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EpicStageApp();
// End Cross Module References
	DEFINE_FUNCTION(UStageAppFunctionLibrary::execGetRemoteControlWebInterfacePort)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UStageAppFunctionLibrary::GetRemoteControlWebInterfacePort();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStageAppFunctionLibrary::execGetAPIVersion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UStageAppFunctionLibrary::GetAPIVersion();
		P_NATIVE_END;
	}
	void UStageAppFunctionLibrary::StaticRegisterNativesUStageAppFunctionLibrary()
	{
		UClass* Class = UStageAppFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAPIVersion", &UStageAppFunctionLibrary::execGetAPIVersion },
			{ "GetRemoteControlWebInterfacePort", &UStageAppFunctionLibrary::execGetRemoteControlWebInterfacePort },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStageAppFunctionLibrary_GetAPIVersion_Statics
	{
		struct StageAppFunctionLibrary_eventGetAPIVersion_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStageAppFunctionLibrary_GetAPIVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StageAppFunctionLibrary_eventGetAPIVersion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStageAppFunctionLibrary_GetAPIVersion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStageAppFunctionLibrary_GetAPIVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStageAppFunctionLibrary_GetAPIVersion_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Development" },
		{ "Comment", "/** Get the current semantic version for the stage app API as a formatted string. */" },
		{ "ModuleRelativePath", "Public/StageAppLibrary.h" },
		{ "ToolTip", "Get the current semantic version for the stage app API as a formatted string." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStageAppFunctionLibrary_GetAPIVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStageAppFunctionLibrary, nullptr, "GetAPIVersion", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStageAppFunctionLibrary_GetAPIVersion_Statics::StageAppFunctionLibrary_eventGetAPIVersion_Parms), Z_Construct_UFunction_UStageAppFunctionLibrary_GetAPIVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStageAppFunctionLibrary_GetAPIVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStageAppFunctionLibrary_GetAPIVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStageAppFunctionLibrary_GetAPIVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStageAppFunctionLibrary_GetAPIVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStageAppFunctionLibrary_GetAPIVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStageAppFunctionLibrary_GetRemoteControlWebInterfacePort_Statics
	{
		struct StageAppFunctionLibrary_eventGetRemoteControlWebInterfacePort_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStageAppFunctionLibrary_GetRemoteControlWebInterfacePort_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StageAppFunctionLibrary_eventGetRemoteControlWebInterfacePort_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStageAppFunctionLibrary_GetRemoteControlWebInterfacePort_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStageAppFunctionLibrary_GetRemoteControlWebInterfacePort_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStageAppFunctionLibrary_GetRemoteControlWebInterfacePort_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Development" },
		{ "Comment", "/** Get the port number used to access the remote control web interface for this engine instance. */" },
		{ "ModuleRelativePath", "Public/StageAppLibrary.h" },
		{ "ToolTip", "Get the port number used to access the remote control web interface for this engine instance." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStageAppFunctionLibrary_GetRemoteControlWebInterfacePort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStageAppFunctionLibrary, nullptr, "GetRemoteControlWebInterfacePort", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStageAppFunctionLibrary_GetRemoteControlWebInterfacePort_Statics::StageAppFunctionLibrary_eventGetRemoteControlWebInterfacePort_Parms), Z_Construct_UFunction_UStageAppFunctionLibrary_GetRemoteControlWebInterfacePort_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStageAppFunctionLibrary_GetRemoteControlWebInterfacePort_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStageAppFunctionLibrary_GetRemoteControlWebInterfacePort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStageAppFunctionLibrary_GetRemoteControlWebInterfacePort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStageAppFunctionLibrary_GetRemoteControlWebInterfacePort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStageAppFunctionLibrary_GetRemoteControlWebInterfacePort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStageAppFunctionLibrary);
	UClass* Z_Construct_UClass_UStageAppFunctionLibrary_NoRegister()
	{
		return UStageAppFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UStageAppFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStageAppFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_EpicStageApp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStageAppFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStageAppFunctionLibrary_GetAPIVersion, "GetAPIVersion" }, // 3284900265
		{ &Z_Construct_UFunction_UStageAppFunctionLibrary_GetRemoteControlWebInterfacePort, "GetRemoteControlWebInterfacePort" }, // 387167664
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStageAppFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Generally useful Blueprint/remote functions for Epic Stage App integration.\n */" },
		{ "IncludePath", "StageAppLibrary.h" },
		{ "ModuleRelativePath", "Public/StageAppLibrary.h" },
		{ "ToolTip", "Generally useful Blueprint/remote functions for Epic Stage App integration." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStageAppFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStageAppFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStageAppFunctionLibrary_Statics::ClassParams = {
		&UStageAppFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UStageAppFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStageAppFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStageAppFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UStageAppFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStageAppFunctionLibrary.OuterSingleton, Z_Construct_UClass_UStageAppFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStageAppFunctionLibrary.OuterSingleton;
	}
	template<> EPICSTAGEAPP_API UClass* StaticClass<UStageAppFunctionLibrary>()
	{
		return UStageAppFunctionLibrary::StaticClass();
	}
	UStageAppFunctionLibrary::UStageAppFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStageAppFunctionLibrary);
	UStageAppFunctionLibrary::~UStageAppFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Public_StageAppLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Public_StageAppLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStageAppFunctionLibrary, UStageAppFunctionLibrary::StaticClass, TEXT("UStageAppFunctionLibrary"), &Z_Registration_Info_UClass_UStageAppFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStageAppFunctionLibrary), 982237063U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Public_StageAppLibrary_h_847944629(TEXT("/Script/EpicStageApp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Public_StageAppLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Public_StageAppLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
