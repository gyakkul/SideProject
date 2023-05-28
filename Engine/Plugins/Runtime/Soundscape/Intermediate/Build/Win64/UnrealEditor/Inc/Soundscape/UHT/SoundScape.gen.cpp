// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoundScape.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundScape() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	SOUNDSCAPE_API UClass* Z_Construct_UClass_UActiveSoundscapeColor_NoRegister();
	SOUNDSCAPE_API UClass* Z_Construct_UClass_UActiveSoundscapePalette_NoRegister();
	SOUNDSCAPE_API UClass* Z_Construct_UClass_USoundscapeBPFunctionLibrary();
	SOUNDSCAPE_API UClass* Z_Construct_UClass_USoundscapeBPFunctionLibrary_NoRegister();
	SOUNDSCAPE_API UClass* Z_Construct_UClass_USoundscapeColor_NoRegister();
	SOUNDSCAPE_API UClass* Z_Construct_UClass_USoundscapePalette_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Soundscape();
// End Cross Module References
	DEFINE_FUNCTION(USoundscapeBPFunctionLibrary::execSpawnSoundscapePalette)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundscapePalette,Z_Param_SoundscapePaletteIn);
		P_GET_OBJECT_REF(UActiveSoundscapePalette,Z_Param_Out_SoundscapePaletteAgentsOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USoundscapeBPFunctionLibrary::SpawnSoundscapePalette(Z_Param_WorldContextObject,Z_Param_SoundscapePaletteIn,Z_Param_Out_SoundscapePaletteAgentsOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundscapeBPFunctionLibrary::execSpawnSoundscapeColor)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundscapeColor,Z_Param_SoundscapeColorIn);
		P_GET_OBJECT_REF(UActiveSoundscapeColor,Z_Param_Out_ActiveSoundscapeColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USoundscapeBPFunctionLibrary::SpawnSoundscapeColor(Z_Param_WorldContextObject,Z_Param_SoundscapeColorIn,Z_Param_Out_ActiveSoundscapeColor);
		P_NATIVE_END;
	}
	void USoundscapeBPFunctionLibrary::StaticRegisterNativesUSoundscapeBPFunctionLibrary()
	{
		UClass* Class = USoundscapeBPFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnSoundscapeColor", &USoundscapeBPFunctionLibrary::execSpawnSoundscapeColor },
			{ "SpawnSoundscapePalette", &USoundscapeBPFunctionLibrary::execSpawnSoundscapePalette },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USoundscapeBPFunctionLibrary_SpawnSoundscapeColor_Statics
	{
		struct SoundscapeBPFunctionLibrary_eventSpawnSoundscapeColor_Parms
		{
			UObject* WorldContextObject;
			USoundscapeColor* SoundscapeColorIn;
			UActiveSoundscapeColor* ActiveSoundscapeColor;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundscapeColorIn;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveSoundscapeColor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundscapeBPFunctionLibrary_SpawnSoundscapeColor_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundscapeBPFunctionLibrary_eventSpawnSoundscapeColor_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundscapeBPFunctionLibrary_SpawnSoundscapeColor_Statics::NewProp_SoundscapeColorIn = { "SoundscapeColorIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundscapeBPFunctionLibrary_eventSpawnSoundscapeColor_Parms, SoundscapeColorIn), Z_Construct_UClass_USoundscapeColor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundscapeBPFunctionLibrary_SpawnSoundscapeColor_Statics::NewProp_ActiveSoundscapeColor = { "ActiveSoundscapeColor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundscapeBPFunctionLibrary_eventSpawnSoundscapeColor_Parms, ActiveSoundscapeColor), Z_Construct_UClass_UActiveSoundscapeColor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USoundscapeBPFunctionLibrary_SpawnSoundscapeColor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SoundscapeBPFunctionLibrary_eventSpawnSoundscapeColor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USoundscapeBPFunctionLibrary_SpawnSoundscapeColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SoundscapeBPFunctionLibrary_eventSpawnSoundscapeColor_Parms), &Z_Construct_UFunction_USoundscapeBPFunctionLibrary_SpawnSoundscapeColor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundscapeBPFunctionLibrary_SpawnSoundscapeColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundscapeBPFunctionLibrary_SpawnSoundscapeColor_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundscapeBPFunctionLibrary_SpawnSoundscapeColor_Statics::NewProp_SoundscapeColorIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundscapeBPFunctionLibrary_SpawnSoundscapeColor_Statics::NewProp_ActiveSoundscapeColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundscapeBPFunctionLibrary_SpawnSoundscapeColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundscapeBPFunctionLibrary_SpawnSoundscapeColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Soundscape" },
		{ "Comment", "/** Spawns a new Soundscape Elemental Agent. Returns true if spawn was successful. */" },
		{ "ModuleRelativePath", "Public/SoundScape.h" },
		{ "ToolTip", "Spawns a new Soundscape Elemental Agent. Returns true if spawn was successful." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundscapeBPFunctionLibrary_SpawnSoundscapeColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundscapeBPFunctionLibrary, nullptr, "SpawnSoundscapeColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_USoundscapeBPFunctionLibrary_SpawnSoundscapeColor_Statics::SoundscapeBPFunctionLibrary_eventSpawnSoundscapeColor_Parms), Z_Construct_UFunction_USoundscapeBPFunctionLibrary_SpawnSoundscapeColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundscapeBPFunctionLibrary_SpawnSoundscapeColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundscapeBPFunctionLibrary_SpawnSoundscapeColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundscapeBPFunctionLibrary_SpawnSoundscapeColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundscapeBPFunctionLibrary_SpawnSoundscapeColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundscapeBPFunctionLibrary_SpawnSoundscapeColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundscapeBPFunctionLibrary_SpawnSoundscapePalette_Statics
	{
		struct SoundscapeBPFunctionLibrary_eventSpawnSoundscapePalette_Parms
		{
			UObject* WorldContextObject;
			USoundscapePalette* SoundscapePaletteIn;
			UActiveSoundscapePalette* SoundscapePaletteAgentsOut;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundscapePaletteIn;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundscapePaletteAgentsOut;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundscapeBPFunctionLibrary_SpawnSoundscapePalette_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundscapeBPFunctionLibrary_eventSpawnSoundscapePalette_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundscapeBPFunctionLibrary_SpawnSoundscapePalette_Statics::NewProp_SoundscapePaletteIn = { "SoundscapePaletteIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundscapeBPFunctionLibrary_eventSpawnSoundscapePalette_Parms, SoundscapePaletteIn), Z_Construct_UClass_USoundscapePalette_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundscapeBPFunctionLibrary_SpawnSoundscapePalette_Statics::NewProp_SoundscapePaletteAgentsOut = { "SoundscapePaletteAgentsOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundscapeBPFunctionLibrary_eventSpawnSoundscapePalette_Parms, SoundscapePaletteAgentsOut), Z_Construct_UClass_UActiveSoundscapePalette_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USoundscapeBPFunctionLibrary_SpawnSoundscapePalette_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SoundscapeBPFunctionLibrary_eventSpawnSoundscapePalette_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USoundscapeBPFunctionLibrary_SpawnSoundscapePalette_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SoundscapeBPFunctionLibrary_eventSpawnSoundscapePalette_Parms), &Z_Construct_UFunction_USoundscapeBPFunctionLibrary_SpawnSoundscapePalette_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundscapeBPFunctionLibrary_SpawnSoundscapePalette_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundscapeBPFunctionLibrary_SpawnSoundscapePalette_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundscapeBPFunctionLibrary_SpawnSoundscapePalette_Statics::NewProp_SoundscapePaletteIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundscapeBPFunctionLibrary_SpawnSoundscapePalette_Statics::NewProp_SoundscapePaletteAgentsOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundscapeBPFunctionLibrary_SpawnSoundscapePalette_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundscapeBPFunctionLibrary_SpawnSoundscapePalette_Statics::Function_MetaDataParams[] = {
		{ "Category", "Soundscape" },
		{ "Comment", "/** Spawns a new Soundscape Palette Agent. Returns true if spawn was successful. */" },
		{ "ModuleRelativePath", "Public/SoundScape.h" },
		{ "ToolTip", "Spawns a new Soundscape Palette Agent. Returns true if spawn was successful." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundscapeBPFunctionLibrary_SpawnSoundscapePalette_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundscapeBPFunctionLibrary, nullptr, "SpawnSoundscapePalette", nullptr, nullptr, sizeof(Z_Construct_UFunction_USoundscapeBPFunctionLibrary_SpawnSoundscapePalette_Statics::SoundscapeBPFunctionLibrary_eventSpawnSoundscapePalette_Parms), Z_Construct_UFunction_USoundscapeBPFunctionLibrary_SpawnSoundscapePalette_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundscapeBPFunctionLibrary_SpawnSoundscapePalette_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundscapeBPFunctionLibrary_SpawnSoundscapePalette_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundscapeBPFunctionLibrary_SpawnSoundscapePalette_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundscapeBPFunctionLibrary_SpawnSoundscapePalette()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundscapeBPFunctionLibrary_SpawnSoundscapePalette_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundscapeBPFunctionLibrary);
	UClass* Z_Construct_UClass_USoundscapeBPFunctionLibrary_NoRegister()
	{
		return USoundscapeBPFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USoundscapeBPFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundscapeBPFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Soundscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USoundscapeBPFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USoundscapeBPFunctionLibrary_SpawnSoundscapeColor, "SpawnSoundscapeColor" }, // 2829008975
		{ &Z_Construct_UFunction_USoundscapeBPFunctionLibrary_SpawnSoundscapePalette, "SpawnSoundscapePalette" }, // 3794120539
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundscapeBPFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SoundScape.h" },
		{ "ModuleRelativePath", "Public/SoundScape.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundscapeBPFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundscapeBPFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundscapeBPFunctionLibrary_Statics::ClassParams = {
		&USoundscapeBPFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USoundscapeBPFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeBPFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundscapeBPFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_USoundscapeBPFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundscapeBPFunctionLibrary.OuterSingleton, Z_Construct_UClass_USoundscapeBPFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundscapeBPFunctionLibrary.OuterSingleton;
	}
	template<> SOUNDSCAPE_API UClass* StaticClass<USoundscapeBPFunctionLibrary>()
	{
		return USoundscapeBPFunctionLibrary::StaticClass();
	}
	USoundscapeBPFunctionLibrary::USoundscapeBPFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundscapeBPFunctionLibrary);
	USoundscapeBPFunctionLibrary::~USoundscapeBPFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundScape_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundScape_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundscapeBPFunctionLibrary, USoundscapeBPFunctionLibrary::StaticClass, TEXT("USoundscapeBPFunctionLibrary"), &Z_Registration_Info_UClass_USoundscapeBPFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundscapeBPFunctionLibrary), 719410080U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundScape_h_1054231896(TEXT("/Script/Soundscape"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundScape_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundScape_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
