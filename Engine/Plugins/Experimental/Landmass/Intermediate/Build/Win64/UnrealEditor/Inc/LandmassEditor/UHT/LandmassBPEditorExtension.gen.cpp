// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LandmassBPEditorExtension.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandmassBPEditorExtension() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	LANDMASSEDITOR_API UClass* Z_Construct_UClass_ULandmassBlueprintFunctionLibrary();
	LANDMASSEDITOR_API UClass* Z_Construct_UClass_ULandmassBlueprintFunctionLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LandmassEditor();
// End Cross Module References
	DEFINE_FUNCTION(ULandmassBlueprintFunctionLibrary::execGetCursorWorldRay)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_CameraLocation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_RayOrigin);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_RayDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULandmassBlueprintFunctionLibrary::GetCursorWorldRay(Z_Param_Out_CameraLocation,Z_Param_Out_RayOrigin,Z_Param_Out_RayDirection);
		P_NATIVE_END;
	}
	void ULandmassBlueprintFunctionLibrary::StaticRegisterNativesULandmassBlueprintFunctionLibrary()
	{
		UClass* Class = ULandmassBlueprintFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCursorWorldRay", &ULandmassBlueprintFunctionLibrary::execGetCursorWorldRay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULandmassBlueprintFunctionLibrary_GetCursorWorldRay_Statics
	{
		struct LandmassBlueprintFunctionLibrary_eventGetCursorWorldRay_Parms
		{
			FVector CameraLocation;
			FVector RayOrigin;
			FVector RayDirection;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RayOrigin;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RayDirection;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULandmassBlueprintFunctionLibrary_GetCursorWorldRay_Statics::NewProp_CameraLocation = { "CameraLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LandmassBlueprintFunctionLibrary_eventGetCursorWorldRay_Parms, CameraLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULandmassBlueprintFunctionLibrary_GetCursorWorldRay_Statics::NewProp_RayOrigin = { "RayOrigin", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LandmassBlueprintFunctionLibrary_eventGetCursorWorldRay_Parms, RayOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULandmassBlueprintFunctionLibrary_GetCursorWorldRay_Statics::NewProp_RayDirection = { "RayDirection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LandmassBlueprintFunctionLibrary_eventGetCursorWorldRay_Parms, RayDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULandmassBlueprintFunctionLibrary_GetCursorWorldRay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LandmassBlueprintFunctionLibrary_eventGetCursorWorldRay_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULandmassBlueprintFunctionLibrary_GetCursorWorldRay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LandmassBlueprintFunctionLibrary_eventGetCursorWorldRay_Parms), &Z_Construct_UFunction_ULandmassBlueprintFunctionLibrary_GetCursorWorldRay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULandmassBlueprintFunctionLibrary_GetCursorWorldRay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandmassBlueprintFunctionLibrary_GetCursorWorldRay_Statics::NewProp_CameraLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandmassBlueprintFunctionLibrary_GetCursorWorldRay_Statics::NewProp_RayOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandmassBlueprintFunctionLibrary_GetCursorWorldRay_Statics::NewProp_RayDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandmassBlueprintFunctionLibrary_GetCursorWorldRay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandmassBlueprintFunctionLibrary_GetCursorWorldRay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "DisplayName", "Get Cursor World Ray" },
		{ "Keywords", "Get Cursor World Ray" },
		{ "ModuleRelativePath", "Public/LandmassBPEditorExtension.h" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandmassBlueprintFunctionLibrary_GetCursorWorldRay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandmassBlueprintFunctionLibrary, nullptr, "GetCursorWorldRay", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULandmassBlueprintFunctionLibrary_GetCursorWorldRay_Statics::LandmassBlueprintFunctionLibrary_eventGetCursorWorldRay_Parms), Z_Construct_UFunction_ULandmassBlueprintFunctionLibrary_GetCursorWorldRay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandmassBlueprintFunctionLibrary_GetCursorWorldRay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULandmassBlueprintFunctionLibrary_GetCursorWorldRay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandmassBlueprintFunctionLibrary_GetCursorWorldRay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULandmassBlueprintFunctionLibrary_GetCursorWorldRay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULandmassBlueprintFunctionLibrary_GetCursorWorldRay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULandmassBlueprintFunctionLibrary);
	UClass* Z_Construct_UClass_ULandmassBlueprintFunctionLibrary_NoRegister()
	{
		return ULandmassBlueprintFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_ULandmassBlueprintFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULandmassBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_LandmassEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULandmassBlueprintFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULandmassBlueprintFunctionLibrary_GetCursorWorldRay, "GetCursorWorldRay" }, // 2594394032
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandmassBlueprintFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LandmassBPEditorExtension.h" },
		{ "ModuleRelativePath", "Public/LandmassBPEditorExtension.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULandmassBlueprintFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandmassBlueprintFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULandmassBlueprintFunctionLibrary_Statics::ClassParams = {
		&ULandmassBlueprintFunctionLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULandmassBlueprintFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULandmassBlueprintFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULandmassBlueprintFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_ULandmassBlueprintFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULandmassBlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_ULandmassBlueprintFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULandmassBlueprintFunctionLibrary.OuterSingleton;
	}
	template<> LANDMASSEDITOR_API UClass* StaticClass<ULandmassBlueprintFunctionLibrary>()
	{
		return ULandmassBlueprintFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULandmassBlueprintFunctionLibrary);
	ULandmassBlueprintFunctionLibrary::~ULandmassBlueprintFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassBPEditorExtension_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassBPEditorExtension_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULandmassBlueprintFunctionLibrary, ULandmassBlueprintFunctionLibrary::StaticClass, TEXT("ULandmassBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_ULandmassBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULandmassBlueprintFunctionLibrary), 4197341167U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassBPEditorExtension_h_1888497718(TEXT("/Script/LandmassEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassBPEditorExtension_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassBPEditorExtension_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
