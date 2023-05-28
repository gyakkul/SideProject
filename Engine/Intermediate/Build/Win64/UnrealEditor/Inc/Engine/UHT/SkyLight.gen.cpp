// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/SkyLight.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkyLight() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	ENGINE_API UClass* Z_Construct_UClass_ASkyLight();
	ENGINE_API UClass* Z_Construct_UClass_ASkyLight_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkyLightComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(ASkyLight::execOnRep_bEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_bEnabled();
		P_NATIVE_END;
	}
	void ASkyLight::StaticRegisterNativesASkyLight()
	{
		UClass* Class = ASkyLight::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_bEnabled", &ASkyLight::execOnRep_bEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASkyLight_OnRep_bEnabled_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASkyLight_OnRep_bEnabled_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Replication Notification Callbacks */" },
		{ "ModuleRelativePath", "Classes/Engine/SkyLight.h" },
		{ "ToolTip", "Replication Notification Callbacks" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASkyLight_OnRep_bEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASkyLight, nullptr, "OnRep_bEnabled", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASkyLight_OnRep_bEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASkyLight_OnRep_bEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASkyLight_OnRep_bEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASkyLight_OnRep_bEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASkyLight);
	UClass* Z_Construct_UClass_ASkyLight_NoRegister()
	{
		return ASkyLight::StaticClass();
	}
	struct Z_Construct_UClass_ASkyLight_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LightComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASkyLight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASkyLight_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASkyLight_OnRep_bEnabled, "OnRep_bEnabled" }, // 319942169
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkyLight_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Lights" },
		{ "HideCategories", "Input Collision Replication Info Input Movement Collision Transformation HLOD WorldPartition" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "Engine/SkyLight.h" },
		{ "IsBlueprintBase", "true" },
		{ "IsConversionRoot", "true" },
		{ "ModuleRelativePath", "Classes/Engine/SkyLight.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkyLight_Statics::NewProp_LightComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Light" },
		{ "Comment", "/** @todo document */" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Light,Rendering,Rendering|Components|SkyLight" },
		{ "ModuleRelativePath", "Classes/Engine/SkyLight.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASkyLight_Statics::NewProp_LightComponent = { "LightComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASkyLight, LightComponent), Z_Construct_UClass_USkyLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASkyLight_Statics::NewProp_LightComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASkyLight_Statics::NewProp_LightComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkyLight_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Comment", "/** replicated copy of LightComponent's bEnabled property */" },
		{ "ModuleRelativePath", "Classes/Engine/SkyLight.h" },
		{ "ToolTip", "replicated copy of LightComponent's bEnabled property" },
	};
#endif
	void Z_Construct_UClass_ASkyLight_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((ASkyLight*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASkyLight_Statics::NewProp_bEnabled = { "bEnabled", "OnRep_bEnabled", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ASkyLight), &Z_Construct_UClass_ASkyLight_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASkyLight_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASkyLight_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASkyLight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkyLight_Statics::NewProp_LightComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkyLight_Statics::NewProp_bEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASkyLight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASkyLight>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASkyLight_Statics::ClassParams = {
		&ASkyLight::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASkyLight_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASkyLight_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASkyLight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASkyLight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASkyLight()
	{
		if (!Z_Registration_Info_UClass_ASkyLight.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASkyLight.OuterSingleton, Z_Construct_UClass_ASkyLight_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASkyLight.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ASkyLight>()
	{
		return ASkyLight::StaticClass();
	}

	void ASkyLight::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bEnabled(TEXT("bEnabled"));

		const bool bIsValid = true
			&& Name_bEnabled == ClassReps[(int32)ENetFields_Private::bEnabled].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASkyLight"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASkyLight);
	ASkyLight::~ASkyLight() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkyLight_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkyLight_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASkyLight, ASkyLight::StaticClass, TEXT("ASkyLight"), &Z_Registration_Info_UClass_ASkyLight, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASkyLight), 903379274U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkyLight_h_2052316099(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkyLight_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkyLight_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
