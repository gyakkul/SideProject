// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/DMXControlConsoleActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXControlConsoleActor() {}
// Cross Module References
	DMXCONTROLCONSOLE_API UClass* Z_Construct_UClass_ADMXControlConsoleActor();
	DMXCONTROLCONSOLE_API UClass* Z_Construct_UClass_ADMXControlConsoleActor_NoRegister();
	DMXCONTROLCONSOLE_API UClass* Z_Construct_UClass_UDMXControlConsoleData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DMXControlConsole();
// End Cross Module References
	DEFINE_FUNCTION(ADMXControlConsoleActor::execStopSendingDMX)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopSendingDMX();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADMXControlConsoleActor::execStartSendingDMX)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartSendingDMX();
		P_NATIVE_END;
	}
	void ADMXControlConsoleActor::StaticRegisterNativesADMXControlConsoleActor()
	{
		UClass* Class = ADMXControlConsoleActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartSendingDMX", &ADMXControlConsoleActor::execStartSendingDMX },
			{ "StopSendingDMX", &ADMXControlConsoleActor::execStopSendingDMX },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADMXControlConsoleActor_StartSendingDMX_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADMXControlConsoleActor_StartSendingDMX_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX Control Console" },
		{ "Comment", "/** Sets current DMX Control Console to start sending DMX data */" },
		{ "ModuleRelativePath", "Private/DMXControlConsoleActor.h" },
		{ "ToolTip", "Sets current DMX Control Console to start sending DMX data" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADMXControlConsoleActor_StartSendingDMX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADMXControlConsoleActor, nullptr, "StartSendingDMX", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADMXControlConsoleActor_StartSendingDMX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADMXControlConsoleActor_StartSendingDMX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADMXControlConsoleActor_StartSendingDMX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADMXControlConsoleActor_StartSendingDMX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADMXControlConsoleActor_StopSendingDMX_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADMXControlConsoleActor_StopSendingDMX_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX Control Console" },
		{ "Comment", "/** Sets current DMX Control Console to stop sending DMX data */" },
		{ "ModuleRelativePath", "Private/DMXControlConsoleActor.h" },
		{ "ToolTip", "Sets current DMX Control Console to stop sending DMX data" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADMXControlConsoleActor_StopSendingDMX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADMXControlConsoleActor, nullptr, "StopSendingDMX", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADMXControlConsoleActor_StopSendingDMX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADMXControlConsoleActor_StopSendingDMX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADMXControlConsoleActor_StopSendingDMX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADMXControlConsoleActor_StopSendingDMX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADMXControlConsoleActor);
	UClass* Z_Construct_UClass_ADMXControlConsoleActor_NoRegister()
	{
		return ADMXControlConsoleActor::StaticClass();
	}
	struct Z_Construct_UClass_ADMXControlConsoleActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlConsoleData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ControlConsoleData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoActivate_MetaData[];
#endif
		static void NewProp_bAutoActivate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoActivate;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSendDMXInEditor_MetaData[];
#endif
		static void NewProp_bSendDMXInEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSendDMXInEditor;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootSceneComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RootSceneComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADMXControlConsoleActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXControlConsole,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADMXControlConsoleActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADMXControlConsoleActor_StartSendingDMX, "StartSendingDMX" }, // 2406240133
		{ &Z_Construct_UFunction_ADMXControlConsoleActor_StopSendingDMX, "StopSendingDMX" }, // 615807387
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADMXControlConsoleActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Actor class for DMX Control Console */" },
		{ "IncludePath", "DMXControlConsoleActor.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/DMXControlConsoleActor.h" },
		{ "ToolTip", "Actor class for DMX Control Console" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADMXControlConsoleActor_Statics::NewProp_ControlConsoleData_MetaData[] = {
		{ "Category", "DMX Control Console" },
		{ "Comment", "/** The Control Console Data used in this actor */" },
		{ "ModuleRelativePath", "Private/DMXControlConsoleActor.h" },
		{ "ToolTip", "The Control Console Data used in this actor" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADMXControlConsoleActor_Statics::NewProp_ControlConsoleData = { "ControlConsoleData", nullptr, (EPropertyFlags)0x0044000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADMXControlConsoleActor, ControlConsoleData), Z_Construct_UClass_UDMXControlConsoleData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADMXControlConsoleActor_Statics::NewProp_ControlConsoleData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADMXControlConsoleActor_Statics::NewProp_ControlConsoleData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADMXControlConsoleActor_Statics::NewProp_bAutoActivate_MetaData[] = {
		{ "Category", "DMX Control Console" },
		{ "Comment", "/** True if the Control Console should send DMX data in runtime */" },
		{ "ModuleRelativePath", "Private/DMXControlConsoleActor.h" },
		{ "ToolTip", "True if the Control Console should send DMX data in runtime" },
	};
#endif
	void Z_Construct_UClass_ADMXControlConsoleActor_Statics::NewProp_bAutoActivate_SetBit(void* Obj)
	{
		((ADMXControlConsoleActor*)Obj)->bAutoActivate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADMXControlConsoleActor_Statics::NewProp_bAutoActivate = { "bAutoActivate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ADMXControlConsoleActor), &Z_Construct_UClass_ADMXControlConsoleActor_Statics::NewProp_bAutoActivate_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADMXControlConsoleActor_Statics::NewProp_bAutoActivate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADMXControlConsoleActor_Statics::NewProp_bAutoActivate_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADMXControlConsoleActor_Statics::NewProp_bSendDMXInEditor_MetaData[] = {
		{ "Category", "DMX Control Console" },
		{ "Comment", "/** True if the Control Console should send DMX data in Editor */" },
		{ "DisplayName", "Send DMX in Editor" },
		{ "ModuleRelativePath", "Private/DMXControlConsoleActor.h" },
		{ "ToolTip", "True if the Control Console should send DMX data in Editor" },
	};
#endif
	void Z_Construct_UClass_ADMXControlConsoleActor_Statics::NewProp_bSendDMXInEditor_SetBit(void* Obj)
	{
		((ADMXControlConsoleActor*)Obj)->bSendDMXInEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADMXControlConsoleActor_Statics::NewProp_bSendDMXInEditor = { "bSendDMXInEditor", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ADMXControlConsoleActor), &Z_Construct_UClass_ADMXControlConsoleActor_Statics::NewProp_bSendDMXInEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADMXControlConsoleActor_Statics::NewProp_bSendDMXInEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADMXControlConsoleActor_Statics::NewProp_bSendDMXInEditor_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADMXControlConsoleActor_Statics::NewProp_RootSceneComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Actor" },
		{ "Comment", "/** Scene component to make the Actor easily visible in Editor */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/DMXControlConsoleActor.h" },
		{ "ToolTip", "Scene component to make the Actor easily visible in Editor" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADMXControlConsoleActor_Statics::NewProp_RootSceneComponent = { "RootSceneComponent", nullptr, (EPropertyFlags)0x00440400000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADMXControlConsoleActor, RootSceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADMXControlConsoleActor_Statics::NewProp_RootSceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADMXControlConsoleActor_Statics::NewProp_RootSceneComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADMXControlConsoleActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMXControlConsoleActor_Statics::NewProp_ControlConsoleData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMXControlConsoleActor_Statics::NewProp_bAutoActivate,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMXControlConsoleActor_Statics::NewProp_bSendDMXInEditor,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMXControlConsoleActor_Statics::NewProp_RootSceneComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADMXControlConsoleActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADMXControlConsoleActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADMXControlConsoleActor_Statics::ClassParams = {
		&ADMXControlConsoleActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADMXControlConsoleActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADMXControlConsoleActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADMXControlConsoleActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADMXControlConsoleActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADMXControlConsoleActor()
	{
		if (!Z_Registration_Info_UClass_ADMXControlConsoleActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADMXControlConsoleActor.OuterSingleton, Z_Construct_UClass_ADMXControlConsoleActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADMXControlConsoleActor.OuterSingleton;
	}
	template<> DMXCONTROLCONSOLE_API UClass* StaticClass<ADMXControlConsoleActor>()
	{
		return ADMXControlConsoleActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADMXControlConsoleActor);
	ADMXControlConsoleActor::~ADMXControlConsoleActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Private_DMXControlConsoleActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Private_DMXControlConsoleActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADMXControlConsoleActor, ADMXControlConsoleActor::StaticClass, TEXT("ADMXControlConsoleActor"), &Z_Registration_Info_UClass_ADMXControlConsoleActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADMXControlConsoleActor), 3344377477U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Private_DMXControlConsoleActor_h_1165318024(TEXT("/Script/DMXControlConsole"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Private_DMXControlConsoleActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Private_DMXControlConsoleActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
