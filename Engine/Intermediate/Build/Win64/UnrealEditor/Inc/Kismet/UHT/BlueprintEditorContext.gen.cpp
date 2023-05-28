// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/BlueprintEditorContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintEditorContext() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint_NoRegister();
	KISMET_API UClass* Z_Construct_UClass_UBlueprintEditorToolMenuContext();
	KISMET_API UClass* Z_Construct_UClass_UBlueprintEditorToolMenuContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Kismet();
// End Cross Module References
	DEFINE_FUNCTION(UBlueprintEditorToolMenuContext::execGetBlueprintObj)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBlueprint**)Z_Param__Result=P_THIS->GetBlueprintObj();
		P_NATIVE_END;
	}
	void UBlueprintEditorToolMenuContext::StaticRegisterNativesUBlueprintEditorToolMenuContext()
	{
		UClass* Class = UBlueprintEditorToolMenuContext::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBlueprintObj", &UBlueprintEditorToolMenuContext::execGetBlueprintObj },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBlueprintEditorToolMenuContext_GetBlueprintObj_Statics
	{
		struct BlueprintEditorToolMenuContext_eventGetBlueprintObj_Parms
		{
			UBlueprint* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintEditorToolMenuContext_GetBlueprintObj_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintEditorToolMenuContext_eventGetBlueprintObj_Parms, ReturnValue), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintEditorToolMenuContext_GetBlueprintObj_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintEditorToolMenuContext_GetBlueprintObj_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintEditorToolMenuContext_GetBlueprintObj_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/BlueprintEditorContext.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintEditorToolMenuContext_GetBlueprintObj_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintEditorToolMenuContext, nullptr, "GetBlueprintObj", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintEditorToolMenuContext_GetBlueprintObj_Statics::BlueprintEditorToolMenuContext_eventGetBlueprintObj_Parms), Z_Construct_UFunction_UBlueprintEditorToolMenuContext_GetBlueprintObj_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintEditorToolMenuContext_GetBlueprintObj_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintEditorToolMenuContext_GetBlueprintObj_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintEditorToolMenuContext_GetBlueprintObj_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintEditorToolMenuContext_GetBlueprintObj()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintEditorToolMenuContext_GetBlueprintObj_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlueprintEditorToolMenuContext);
	UClass* Z_Construct_UClass_UBlueprintEditorToolMenuContext_NoRegister()
	{
		return UBlueprintEditorToolMenuContext::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintEditorToolMenuContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintEditorToolMenuContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Kismet,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBlueprintEditorToolMenuContext_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlueprintEditorToolMenuContext_GetBlueprintObj, "GetBlueprintObj" }, // 3745299850
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorToolMenuContext_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintEditorContext.h" },
		{ "ModuleRelativePath", "Public/BlueprintEditorContext.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintEditorToolMenuContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintEditorToolMenuContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintEditorToolMenuContext_Statics::ClassParams = {
		&UBlueprintEditorToolMenuContext::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorToolMenuContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorToolMenuContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintEditorToolMenuContext()
	{
		if (!Z_Registration_Info_UClass_UBlueprintEditorToolMenuContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintEditorToolMenuContext.OuterSingleton, Z_Construct_UClass_UBlueprintEditorToolMenuContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlueprintEditorToolMenuContext.OuterSingleton;
	}
	template<> KISMET_API UClass* StaticClass<UBlueprintEditorToolMenuContext>()
	{
		return UBlueprintEditorToolMenuContext::StaticClass();
	}
	UBlueprintEditorToolMenuContext::UBlueprintEditorToolMenuContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintEditorToolMenuContext);
	UBlueprintEditorToolMenuContext::~UBlueprintEditorToolMenuContext() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Kismet_Public_BlueprintEditorContext_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Kismet_Public_BlueprintEditorContext_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlueprintEditorToolMenuContext, UBlueprintEditorToolMenuContext::StaticClass, TEXT("UBlueprintEditorToolMenuContext"), &Z_Registration_Info_UClass_UBlueprintEditorToolMenuContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintEditorToolMenuContext), 2091910776U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Kismet_Public_BlueprintEditorContext_h_1875524318(TEXT("/Script/Kismet"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Kismet_Public_BlueprintEditorContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Kismet_Public_BlueprintEditorContext_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
