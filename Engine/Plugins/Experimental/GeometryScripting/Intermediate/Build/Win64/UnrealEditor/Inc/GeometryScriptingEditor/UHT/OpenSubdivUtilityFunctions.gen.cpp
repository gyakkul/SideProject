// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryScript/OpenSubdivUtilityFunctions.h"
#include "GeometryScript/GeometryScriptTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenSubdivUtilityFunctions() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMesh_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptDebug_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptGroupLayer();
	GEOMETRYSCRIPTINGEDITOR_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_OpenSubdivFunctions();
	GEOMETRYSCRIPTINGEDITOR_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_OpenSubdivFunctions_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GeometryScriptingEditor();
// End Cross Module References
	DEFINE_FUNCTION(UGeometryScriptLibrary_OpenSubdivFunctions::execApplyTriangleLoopSubD)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_FromDynamicMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_Subdivisions);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_OpenSubdivFunctions::ApplyTriangleLoopSubD(Z_Param_FromDynamicMesh,Z_Param_Subdivisions,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_OpenSubdivFunctions::execApplyPolygroupCatmullClarkSubD)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_FromDynamicMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_Subdivisions);
		P_GET_STRUCT(FGeometryScriptGroupLayer,Z_Param_GroupLayer);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_OpenSubdivFunctions::ApplyPolygroupCatmullClarkSubD(Z_Param_FromDynamicMesh,Z_Param_Subdivisions,Z_Param_GroupLayer,Z_Param_Debug);
		P_NATIVE_END;
	}
	void UGeometryScriptLibrary_OpenSubdivFunctions::StaticRegisterNativesUGeometryScriptLibrary_OpenSubdivFunctions()
	{
		UClass* Class = UGeometryScriptLibrary_OpenSubdivFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyPolygroupCatmullClarkSubD", &UGeometryScriptLibrary_OpenSubdivFunctions::execApplyPolygroupCatmullClarkSubD },
			{ "ApplyTriangleLoopSubD", &UGeometryScriptLibrary_OpenSubdivFunctions::execApplyTriangleLoopSubD },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_OpenSubdivFunctions_ApplyPolygroupCatmullClarkSubD_Statics
	{
		struct GeometryScriptLibrary_OpenSubdivFunctions_eventApplyPolygroupCatmullClarkSubD_Parms
		{
			UDynamicMesh* FromDynamicMesh;
			int32 Subdivisions;
			FGeometryScriptGroupLayer GroupLayer;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FromDynamicMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Subdivisions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroupLayer;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_OpenSubdivFunctions_ApplyPolygroupCatmullClarkSubD_Statics::NewProp_FromDynamicMesh = { "FromDynamicMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_OpenSubdivFunctions_eventApplyPolygroupCatmullClarkSubD_Parms, FromDynamicMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_OpenSubdivFunctions_ApplyPolygroupCatmullClarkSubD_Statics::NewProp_Subdivisions = { "Subdivisions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_OpenSubdivFunctions_eventApplyPolygroupCatmullClarkSubD_Parms, Subdivisions), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_OpenSubdivFunctions_ApplyPolygroupCatmullClarkSubD_Statics::NewProp_GroupLayer = { "GroupLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_OpenSubdivFunctions_eventApplyPolygroupCatmullClarkSubD_Parms, GroupLayer), Z_Construct_UScriptStruct_FGeometryScriptGroupLayer, METADATA_PARAMS(nullptr, 0) }; // 1149642374
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_OpenSubdivFunctions_ApplyPolygroupCatmullClarkSubD_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_OpenSubdivFunctions_eventApplyPolygroupCatmullClarkSubD_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_OpenSubdivFunctions_ApplyPolygroupCatmullClarkSubD_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_OpenSubdivFunctions_ApplyPolygroupCatmullClarkSubD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_OpenSubdivFunctions_eventApplyPolygroupCatmullClarkSubD_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_OpenSubdivFunctions_ApplyPolygroupCatmullClarkSubD_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_OpenSubdivFunctions_ApplyPolygroupCatmullClarkSubD_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_OpenSubdivFunctions_ApplyPolygroupCatmullClarkSubD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_OpenSubdivFunctions_ApplyPolygroupCatmullClarkSubD_Statics::NewProp_FromDynamicMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_OpenSubdivFunctions_ApplyPolygroupCatmullClarkSubD_Statics::NewProp_Subdivisions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_OpenSubdivFunctions_ApplyPolygroupCatmullClarkSubD_Statics::NewProp_GroupLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_OpenSubdivFunctions_ApplyPolygroupCatmullClarkSubD_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_OpenSubdivFunctions_ApplyPolygroupCatmullClarkSubD_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_OpenSubdivFunctions_ApplyPolygroupCatmullClarkSubD_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|OpenSubdiv" },
		{ "CPP_Default_Debug", "None" },
		{ "DisplayName", "ApplyPolyGroupCatmullClarkSubD" },
		{ "ModuleRelativePath", "Public/GeometryScript/OpenSubdivUtilityFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_OpenSubdivFunctions_ApplyPolygroupCatmullClarkSubD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_OpenSubdivFunctions, nullptr, "ApplyPolygroupCatmullClarkSubD", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_OpenSubdivFunctions_ApplyPolygroupCatmullClarkSubD_Statics::GeometryScriptLibrary_OpenSubdivFunctions_eventApplyPolygroupCatmullClarkSubD_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_OpenSubdivFunctions_ApplyPolygroupCatmullClarkSubD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_OpenSubdivFunctions_ApplyPolygroupCatmullClarkSubD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_OpenSubdivFunctions_ApplyPolygroupCatmullClarkSubD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_OpenSubdivFunctions_ApplyPolygroupCatmullClarkSubD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_OpenSubdivFunctions_ApplyPolygroupCatmullClarkSubD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_OpenSubdivFunctions_ApplyPolygroupCatmullClarkSubD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_OpenSubdivFunctions_ApplyTriangleLoopSubD_Statics
	{
		struct GeometryScriptLibrary_OpenSubdivFunctions_eventApplyTriangleLoopSubD_Parms
		{
			UDynamicMesh* FromDynamicMesh;
			int32 Subdivisions;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FromDynamicMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Subdivisions;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_OpenSubdivFunctions_ApplyTriangleLoopSubD_Statics::NewProp_FromDynamicMesh = { "FromDynamicMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_OpenSubdivFunctions_eventApplyTriangleLoopSubD_Parms, FromDynamicMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_OpenSubdivFunctions_ApplyTriangleLoopSubD_Statics::NewProp_Subdivisions = { "Subdivisions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_OpenSubdivFunctions_eventApplyTriangleLoopSubD_Parms, Subdivisions), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_OpenSubdivFunctions_ApplyTriangleLoopSubD_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_OpenSubdivFunctions_eventApplyTriangleLoopSubD_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_OpenSubdivFunctions_ApplyTriangleLoopSubD_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_OpenSubdivFunctions_ApplyTriangleLoopSubD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_OpenSubdivFunctions_eventApplyTriangleLoopSubD_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_OpenSubdivFunctions_ApplyTriangleLoopSubD_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_OpenSubdivFunctions_ApplyTriangleLoopSubD_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_OpenSubdivFunctions_ApplyTriangleLoopSubD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_OpenSubdivFunctions_ApplyTriangleLoopSubD_Statics::NewProp_FromDynamicMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_OpenSubdivFunctions_ApplyTriangleLoopSubD_Statics::NewProp_Subdivisions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_OpenSubdivFunctions_ApplyTriangleLoopSubD_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_OpenSubdivFunctions_ApplyTriangleLoopSubD_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_OpenSubdivFunctions_ApplyTriangleLoopSubD_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|OpenSubdiv" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/OpenSubdivUtilityFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_OpenSubdivFunctions_ApplyTriangleLoopSubD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_OpenSubdivFunctions, nullptr, "ApplyTriangleLoopSubD", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_OpenSubdivFunctions_ApplyTriangleLoopSubD_Statics::GeometryScriptLibrary_OpenSubdivFunctions_eventApplyTriangleLoopSubD_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_OpenSubdivFunctions_ApplyTriangleLoopSubD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_OpenSubdivFunctions_ApplyTriangleLoopSubD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_OpenSubdivFunctions_ApplyTriangleLoopSubD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_OpenSubdivFunctions_ApplyTriangleLoopSubD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_OpenSubdivFunctions_ApplyTriangleLoopSubD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_OpenSubdivFunctions_ApplyTriangleLoopSubD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryScriptLibrary_OpenSubdivFunctions);
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_OpenSubdivFunctions_NoRegister()
	{
		return UGeometryScriptLibrary_OpenSubdivFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryScriptLibrary_OpenSubdivFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryScriptLibrary_OpenSubdivFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGeometryScriptLibrary_OpenSubdivFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_OpenSubdivFunctions_ApplyPolygroupCatmullClarkSubD, "ApplyPolygroupCatmullClarkSubD" }, // 3165825557
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_OpenSubdivFunctions_ApplyTriangleLoopSubD, "ApplyTriangleLoopSubD" }, // 4223536368
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryScriptLibrary_OpenSubdivFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeometryScript/OpenSubdivUtilityFunctions.h" },
		{ "ModuleRelativePath", "Public/GeometryScript/OpenSubdivUtilityFunctions.h" },
		{ "ScriptName", "GeometryScript_OpenSubdiv" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryScriptLibrary_OpenSubdivFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryScriptLibrary_OpenSubdivFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryScriptLibrary_OpenSubdivFunctions_Statics::ClassParams = {
		&UGeometryScriptLibrary_OpenSubdivFunctions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGeometryScriptLibrary_OpenSubdivFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_OpenSubdivFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_OpenSubdivFunctions()
	{
		if (!Z_Registration_Info_UClass_UGeometryScriptLibrary_OpenSubdivFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryScriptLibrary_OpenSubdivFunctions.OuterSingleton, Z_Construct_UClass_UGeometryScriptLibrary_OpenSubdivFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometryScriptLibrary_OpenSubdivFunctions.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGEDITOR_API UClass* StaticClass<UGeometryScriptLibrary_OpenSubdivFunctions>()
	{
		return UGeometryScriptLibrary_OpenSubdivFunctions::StaticClass();
	}
	UGeometryScriptLibrary_OpenSubdivFunctions::UGeometryScriptLibrary_OpenSubdivFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryScriptLibrary_OpenSubdivFunctions);
	UGeometryScriptLibrary_OpenSubdivFunctions::~UGeometryScriptLibrary_OpenSubdivFunctions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_OpenSubdivUtilityFunctions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_OpenSubdivUtilityFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryScriptLibrary_OpenSubdivFunctions, UGeometryScriptLibrary_OpenSubdivFunctions::StaticClass, TEXT("UGeometryScriptLibrary_OpenSubdivFunctions"), &Z_Registration_Info_UClass_UGeometryScriptLibrary_OpenSubdivFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryScriptLibrary_OpenSubdivFunctions), 271319608U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_OpenSubdivUtilityFunctions_h_696062089(TEXT("/Script/GeometryScriptingEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_OpenSubdivUtilityFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_OpenSubdivUtilityFunctions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
