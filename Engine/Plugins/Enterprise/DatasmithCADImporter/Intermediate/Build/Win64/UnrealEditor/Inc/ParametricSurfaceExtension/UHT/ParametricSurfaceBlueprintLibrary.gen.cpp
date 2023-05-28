// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ParametricSurfaceBlueprintLibrary.h"
#include "DatasmithImportOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParametricSurfaceBlueprintLibrary() {}
// Cross Module References
	DATASMITHCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FDatasmithRetessellationOptions();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	PARAMETRICSURFACEEXTENSION_API UClass* Z_Construct_UClass_UParametricSurfaceBlueprintLibrary();
	PARAMETRICSURFACEEXTENSION_API UClass* Z_Construct_UClass_UParametricSurfaceBlueprintLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ParametricSurfaceExtension();
// End Cross Module References
	DEFINE_FUNCTION(UParametricSurfaceBlueprintLibrary::execRetessellateStaticMeshWithNotification)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_STRUCT_REF(FDatasmithRetessellationOptions,Z_Param_Out_TessellationSettings);
		P_GET_UBOOL(Z_Param_bApplyChanges);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_FailureReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UParametricSurfaceBlueprintLibrary::RetessellateStaticMeshWithNotification(Z_Param_StaticMesh,Z_Param_Out_TessellationSettings,Z_Param_bApplyChanges,Z_Param_Out_FailureReason);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UParametricSurfaceBlueprintLibrary::execRetessellateStaticMesh)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_STRUCT_REF(FDatasmithRetessellationOptions,Z_Param_Out_TessellationSettings);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_FailureReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UParametricSurfaceBlueprintLibrary::RetessellateStaticMesh(Z_Param_StaticMesh,Z_Param_Out_TessellationSettings,Z_Param_Out_FailureReason);
		P_NATIVE_END;
	}
	void UParametricSurfaceBlueprintLibrary::StaticRegisterNativesUParametricSurfaceBlueprintLibrary()
	{
		UClass* Class = UParametricSurfaceBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RetessellateStaticMesh", &UParametricSurfaceBlueprintLibrary::execRetessellateStaticMesh },
			{ "RetessellateStaticMeshWithNotification", &UParametricSurfaceBlueprintLibrary::execRetessellateStaticMeshWithNotification },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UParametricSurfaceBlueprintLibrary_RetessellateStaticMesh_Statics
	{
		struct ParametricSurfaceBlueprintLibrary_eventRetessellateStaticMesh_Parms
		{
			UStaticMesh* StaticMesh;
			FDatasmithRetessellationOptions TessellationSettings;
			FText FailureReason;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TessellationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TessellationSettings;
		static const UECodeGen_Private::FTextPropertyParams NewProp_FailureReason;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UParametricSurfaceBlueprintLibrary_RetessellateStaticMesh_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParametricSurfaceBlueprintLibrary_eventRetessellateStaticMesh_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParametricSurfaceBlueprintLibrary_RetessellateStaticMesh_Statics::NewProp_TessellationSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UParametricSurfaceBlueprintLibrary_RetessellateStaticMesh_Statics::NewProp_TessellationSettings = { "TessellationSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParametricSurfaceBlueprintLibrary_eventRetessellateStaticMesh_Parms, TessellationSettings), Z_Construct_UScriptStruct_FDatasmithRetessellationOptions, METADATA_PARAMS(Z_Construct_UFunction_UParametricSurfaceBlueprintLibrary_RetessellateStaticMesh_Statics::NewProp_TessellationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UParametricSurfaceBlueprintLibrary_RetessellateStaticMesh_Statics::NewProp_TessellationSettings_MetaData)) }; // 3889835244
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UParametricSurfaceBlueprintLibrary_RetessellateStaticMesh_Statics::NewProp_FailureReason = { "FailureReason", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParametricSurfaceBlueprintLibrary_eventRetessellateStaticMesh_Parms, FailureReason), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UParametricSurfaceBlueprintLibrary_RetessellateStaticMesh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ParametricSurfaceBlueprintLibrary_eventRetessellateStaticMesh_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UParametricSurfaceBlueprintLibrary_RetessellateStaticMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ParametricSurfaceBlueprintLibrary_eventRetessellateStaticMesh_Parms), &Z_Construct_UFunction_UParametricSurfaceBlueprintLibrary_RetessellateStaticMesh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParametricSurfaceBlueprintLibrary_RetessellateStaticMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParametricSurfaceBlueprintLibrary_RetessellateStaticMesh_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParametricSurfaceBlueprintLibrary_RetessellateStaticMesh_Statics::NewProp_TessellationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParametricSurfaceBlueprintLibrary_RetessellateStaticMesh_Statics::NewProp_FailureReason,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParametricSurfaceBlueprintLibrary_RetessellateStaticMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParametricSurfaceBlueprintLibrary_RetessellateStaticMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Surface Operations" },
		{ "Comment", "/**\n\x09 * Re-tessellate LOD 0 of a static mesh if it contains parametric surface data.\n\x09 * @param\x09StaticMesh\x09\x09\x09\x09Static mesh to re-tessellate.\n\x09 * @param\x09TessellationSettings\x09Tessellation settings to use.\n\x09 * @param\x09""FailureReason\x09\x09\x09Text describing the reason of failure.\n\x09 * @return True if successful, false otherwise\n\x09 */" },
		{ "ModuleRelativePath", "Public/ParametricSurfaceBlueprintLibrary.h" },
		{ "ToolTip", "Re-tessellate LOD 0 of a static mesh if it contains parametric surface data.\n@param       StaticMesh                              Static mesh to re-tessellate.\n@param       TessellationSettings    Tessellation settings to use.\n@param       FailureReason                   Text describing the reason of failure.\n@return True if successful, false otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParametricSurfaceBlueprintLibrary_RetessellateStaticMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParametricSurfaceBlueprintLibrary, nullptr, "RetessellateStaticMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UParametricSurfaceBlueprintLibrary_RetessellateStaticMesh_Statics::ParametricSurfaceBlueprintLibrary_eventRetessellateStaticMesh_Parms), Z_Construct_UFunction_UParametricSurfaceBlueprintLibrary_RetessellateStaticMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParametricSurfaceBlueprintLibrary_RetessellateStaticMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UParametricSurfaceBlueprintLibrary_RetessellateStaticMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UParametricSurfaceBlueprintLibrary_RetessellateStaticMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UParametricSurfaceBlueprintLibrary_RetessellateStaticMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParametricSurfaceBlueprintLibrary_RetessellateStaticMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UParametricSurfaceBlueprintLibrary_RetessellateStaticMeshWithNotification_Statics
	{
		struct ParametricSurfaceBlueprintLibrary_eventRetessellateStaticMeshWithNotification_Parms
		{
			UStaticMesh* StaticMesh;
			FDatasmithRetessellationOptions TessellationSettings;
			bool bApplyChanges;
			FText FailureReason;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TessellationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TessellationSettings;
		static void NewProp_bApplyChanges_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyChanges;
		static const UECodeGen_Private::FTextPropertyParams NewProp_FailureReason;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UParametricSurfaceBlueprintLibrary_RetessellateStaticMeshWithNotification_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParametricSurfaceBlueprintLibrary_eventRetessellateStaticMeshWithNotification_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParametricSurfaceBlueprintLibrary_RetessellateStaticMeshWithNotification_Statics::NewProp_TessellationSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UParametricSurfaceBlueprintLibrary_RetessellateStaticMeshWithNotification_Statics::NewProp_TessellationSettings = { "TessellationSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParametricSurfaceBlueprintLibrary_eventRetessellateStaticMeshWithNotification_Parms, TessellationSettings), Z_Construct_UScriptStruct_FDatasmithRetessellationOptions, METADATA_PARAMS(Z_Construct_UFunction_UParametricSurfaceBlueprintLibrary_RetessellateStaticMeshWithNotification_Statics::NewProp_TessellationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UParametricSurfaceBlueprintLibrary_RetessellateStaticMeshWithNotification_Statics::NewProp_TessellationSettings_MetaData)) }; // 3889835244
	void Z_Construct_UFunction_UParametricSurfaceBlueprintLibrary_RetessellateStaticMeshWithNotification_Statics::NewProp_bApplyChanges_SetBit(void* Obj)
	{
		((ParametricSurfaceBlueprintLibrary_eventRetessellateStaticMeshWithNotification_Parms*)Obj)->bApplyChanges = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UParametricSurfaceBlueprintLibrary_RetessellateStaticMeshWithNotification_Statics::NewProp_bApplyChanges = { "bApplyChanges", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ParametricSurfaceBlueprintLibrary_eventRetessellateStaticMeshWithNotification_Parms), &Z_Construct_UFunction_UParametricSurfaceBlueprintLibrary_RetessellateStaticMeshWithNotification_Statics::NewProp_bApplyChanges_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UParametricSurfaceBlueprintLibrary_RetessellateStaticMeshWithNotification_Statics::NewProp_FailureReason = { "FailureReason", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParametricSurfaceBlueprintLibrary_eventRetessellateStaticMeshWithNotification_Parms, FailureReason), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UParametricSurfaceBlueprintLibrary_RetessellateStaticMeshWithNotification_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ParametricSurfaceBlueprintLibrary_eventRetessellateStaticMeshWithNotification_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UParametricSurfaceBlueprintLibrary_RetessellateStaticMeshWithNotification_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ParametricSurfaceBlueprintLibrary_eventRetessellateStaticMeshWithNotification_Parms), &Z_Construct_UFunction_UParametricSurfaceBlueprintLibrary_RetessellateStaticMeshWithNotification_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParametricSurfaceBlueprintLibrary_RetessellateStaticMeshWithNotification_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParametricSurfaceBlueprintLibrary_RetessellateStaticMeshWithNotification_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParametricSurfaceBlueprintLibrary_RetessellateStaticMeshWithNotification_Statics::NewProp_TessellationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParametricSurfaceBlueprintLibrary_RetessellateStaticMeshWithNotification_Statics::NewProp_bApplyChanges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParametricSurfaceBlueprintLibrary_RetessellateStaticMeshWithNotification_Statics::NewProp_FailureReason,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParametricSurfaceBlueprintLibrary_RetessellateStaticMeshWithNotification_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParametricSurfaceBlueprintLibrary_RetessellateStaticMeshWithNotification_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Surface Operations" },
		{ "Comment", "/**\n\x09 * Re-tessellate LOD 0 of a static mesh if it contains parametric surface data.\n\x09 * This implementations allows to skip post edit operations (bApplyChanges=false),\n\x09 * the caller is then responsible to handle those operations.\n\x09 * @param\x09StaticMesh\x09\x09\x09\x09Static mesh to re-tessellate.\n\x09 * @param\x09TessellationSettings\x09Tessellation settings to use.\n\x09 * @param\x09""bApplyChanges\x09\x09\x09Indicates if change must be notified.\n\x09 * @param\x09""FailureReason\x09\x09\x09Text describing the reason of failure, or a warning if the operation was successful.\n\x09 * @return True if successful, false otherwise\n\x09 */" },
		{ "ModuleRelativePath", "Public/ParametricSurfaceBlueprintLibrary.h" },
		{ "ToolTip", "Re-tessellate LOD 0 of a static mesh if it contains parametric surface data.\nThis implementations allows to skip post edit operations (bApplyChanges=false),\nthe caller is then responsible to handle those operations.\n@param       StaticMesh                              Static mesh to re-tessellate.\n@param       TessellationSettings    Tessellation settings to use.\n@param       bApplyChanges                   Indicates if change must be notified.\n@param       FailureReason                   Text describing the reason of failure, or a warning if the operation was successful.\n@return True if successful, false otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParametricSurfaceBlueprintLibrary_RetessellateStaticMeshWithNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParametricSurfaceBlueprintLibrary, nullptr, "RetessellateStaticMeshWithNotification", nullptr, nullptr, sizeof(Z_Construct_UFunction_UParametricSurfaceBlueprintLibrary_RetessellateStaticMeshWithNotification_Statics::ParametricSurfaceBlueprintLibrary_eventRetessellateStaticMeshWithNotification_Parms), Z_Construct_UFunction_UParametricSurfaceBlueprintLibrary_RetessellateStaticMeshWithNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParametricSurfaceBlueprintLibrary_RetessellateStaticMeshWithNotification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UParametricSurfaceBlueprintLibrary_RetessellateStaticMeshWithNotification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UParametricSurfaceBlueprintLibrary_RetessellateStaticMeshWithNotification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UParametricSurfaceBlueprintLibrary_RetessellateStaticMeshWithNotification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParametricSurfaceBlueprintLibrary_RetessellateStaticMeshWithNotification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParametricSurfaceBlueprintLibrary);
	UClass* Z_Construct_UClass_UParametricSurfaceBlueprintLibrary_NoRegister()
	{
		return UParametricSurfaceBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UParametricSurfaceBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParametricSurfaceBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ParametricSurfaceExtension,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UParametricSurfaceBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UParametricSurfaceBlueprintLibrary_RetessellateStaticMesh, "RetessellateStaticMesh" }, // 290031791
		{ &Z_Construct_UFunction_UParametricSurfaceBlueprintLibrary_RetessellateStaticMeshWithNotification, "RetessellateStaticMeshWithNotification" }, // 3632687159
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParametricSurfaceBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "CAD Surface Operations Library" },
		{ "IncludePath", "ParametricSurfaceBlueprintLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ParametricSurfaceBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParametricSurfaceBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParametricSurfaceBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParametricSurfaceBlueprintLibrary_Statics::ClassParams = {
		&UParametricSurfaceBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UParametricSurfaceBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParametricSurfaceBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParametricSurfaceBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UParametricSurfaceBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParametricSurfaceBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UParametricSurfaceBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParametricSurfaceBlueprintLibrary.OuterSingleton;
	}
	template<> PARAMETRICSURFACEEXTENSION_API UClass* StaticClass<UParametricSurfaceBlueprintLibrary>()
	{
		return UParametricSurfaceBlueprintLibrary::StaticClass();
	}
	UParametricSurfaceBlueprintLibrary::UParametricSurfaceBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParametricSurfaceBlueprintLibrary);
	UParametricSurfaceBlueprintLibrary::~UParametricSurfaceBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_ParametricSurfaceExtension_Public_ParametricSurfaceBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_ParametricSurfaceExtension_Public_ParametricSurfaceBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParametricSurfaceBlueprintLibrary, UParametricSurfaceBlueprintLibrary::StaticClass, TEXT("UParametricSurfaceBlueprintLibrary"), &Z_Registration_Info_UClass_UParametricSurfaceBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParametricSurfaceBlueprintLibrary), 3856653103U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_ParametricSurfaceExtension_Public_ParametricSurfaceBlueprintLibrary_h_1128241916(TEXT("/Script/ParametricSurfaceExtension"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_ParametricSurfaceExtension_Public_ParametricSurfaceBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_ParametricSurfaceExtension_Public_ParametricSurfaceBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
