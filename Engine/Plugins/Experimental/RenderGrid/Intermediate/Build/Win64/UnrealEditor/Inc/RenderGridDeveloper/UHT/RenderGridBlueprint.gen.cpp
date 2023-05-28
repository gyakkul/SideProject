// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blueprints/RenderGridBlueprint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRenderGridBlueprint() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint();
	RENDERGRID_API UClass* Z_Construct_UClass_URenderGrid_NoRegister();
	RENDERGRIDDEVELOPER_API UClass* Z_Construct_UClass_URenderGridBlueprint();
	RENDERGRIDDEVELOPER_API UClass* Z_Construct_UClass_URenderGridBlueprint_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RenderGridDeveloper();
// End Cross Module References
	DEFINE_FUNCTION(URenderGridBlueprint::execGetRenderGridClassDefaultObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URenderGrid**)Z_Param__Result=P_THIS->GetRenderGridClassDefaultObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridBlueprint::execGetRenderGridWithBlueprintGraph)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URenderGrid**)Z_Param__Result=P_THIS->GetRenderGridWithBlueprintGraph();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridBlueprint::execGetRenderGrid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URenderGrid**)Z_Param__Result=P_THIS->GetRenderGrid();
		P_NATIVE_END;
	}
	void URenderGridBlueprint::StaticRegisterNativesURenderGridBlueprint()
	{
		UClass* Class = URenderGridBlueprint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRenderGrid", &URenderGridBlueprint::execGetRenderGrid },
			{ "GetRenderGridClassDefaultObject", &URenderGridBlueprint::execGetRenderGridClassDefaultObject },
			{ "GetRenderGridWithBlueprintGraph", &URenderGridBlueprint::execGetRenderGridWithBlueprintGraph },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URenderGridBlueprint_GetRenderGrid_Statics
	{
		struct RenderGridBlueprint_eventGetRenderGrid_Parms
		{
			URenderGrid* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderGridBlueprint_GetRenderGrid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGridBlueprint_eventGetRenderGrid_Parms, ReturnValue), Z_Construct_UClass_URenderGrid_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridBlueprint_GetRenderGrid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridBlueprint_GetRenderGrid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridBlueprint_GetRenderGrid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid" },
		{ "Comment", "/** Returns the RenderGrid reference that this RenderGrid asset contains. This is simply the data representation of the render grid, meaning that it won't contain a blueprint graph or any user code. */" },
		{ "ModuleRelativePath", "Public/Blueprints/RenderGridBlueprint.h" },
		{ "ToolTip", "Returns the RenderGrid reference that this RenderGrid asset contains. This is simply the data representation of the render grid, meaning that it won't contain a blueprint graph or any user code." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridBlueprint_GetRenderGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridBlueprint, nullptr, "GetRenderGrid", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGridBlueprint_GetRenderGrid_Statics::RenderGridBlueprint_eventGetRenderGrid_Parms), Z_Construct_UFunction_URenderGridBlueprint_GetRenderGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridBlueprint_GetRenderGrid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGridBlueprint_GetRenderGrid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridBlueprint_GetRenderGrid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGridBlueprint_GetRenderGrid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridBlueprint_GetRenderGrid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridBlueprint_GetRenderGridClassDefaultObject_Statics
	{
		struct RenderGridBlueprint_eventGetRenderGridClassDefaultObject_Parms
		{
			URenderGrid* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderGridBlueprint_GetRenderGridClassDefaultObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGridBlueprint_eventGetRenderGridClassDefaultObject_Parms, ReturnValue), Z_Construct_UClass_URenderGrid_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridBlueprint_GetRenderGridClassDefaultObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridBlueprint_GetRenderGridClassDefaultObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridBlueprint_GetRenderGridClassDefaultObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid" },
		{ "Comment", "/** Returns the RenderGrid reference that this RenderGrid asset contains. This will be the default object of the subclass of the blueprint class, meaning it will contain a blueprint graph. */" },
		{ "ModuleRelativePath", "Public/Blueprints/RenderGridBlueprint.h" },
		{ "ToolTip", "Returns the RenderGrid reference that this RenderGrid asset contains. This will be the default object of the subclass of the blueprint class, meaning it will contain a blueprint graph." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridBlueprint_GetRenderGridClassDefaultObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridBlueprint, nullptr, "GetRenderGridClassDefaultObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGridBlueprint_GetRenderGridClassDefaultObject_Statics::RenderGridBlueprint_eventGetRenderGridClassDefaultObject_Parms), Z_Construct_UFunction_URenderGridBlueprint_GetRenderGridClassDefaultObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridBlueprint_GetRenderGridClassDefaultObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGridBlueprint_GetRenderGridClassDefaultObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridBlueprint_GetRenderGridClassDefaultObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGridBlueprint_GetRenderGridClassDefaultObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridBlueprint_GetRenderGridClassDefaultObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridBlueprint_GetRenderGridWithBlueprintGraph_Statics
	{
		struct RenderGridBlueprint_eventGetRenderGridWithBlueprintGraph_Parms
		{
			URenderGrid* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderGridBlueprint_GetRenderGridWithBlueprintGraph_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGridBlueprint_eventGetRenderGridWithBlueprintGraph_Parms, ReturnValue), Z_Construct_UClass_URenderGrid_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridBlueprint_GetRenderGridWithBlueprintGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridBlueprint_GetRenderGridWithBlueprintGraph_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridBlueprint_GetRenderGridWithBlueprintGraph_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid" },
		{ "Comment", "/** Returns the RenderGrid reference that this RenderGrid asset contains. This will be the subclass of the blueprint class, meaning it will contain a blueprint graph. */" },
		{ "ModuleRelativePath", "Public/Blueprints/RenderGridBlueprint.h" },
		{ "ToolTip", "Returns the RenderGrid reference that this RenderGrid asset contains. This will be the subclass of the blueprint class, meaning it will contain a blueprint graph." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridBlueprint_GetRenderGridWithBlueprintGraph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridBlueprint, nullptr, "GetRenderGridWithBlueprintGraph", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGridBlueprint_GetRenderGridWithBlueprintGraph_Statics::RenderGridBlueprint_eventGetRenderGridWithBlueprintGraph_Parms), Z_Construct_UFunction_URenderGridBlueprint_GetRenderGridWithBlueprintGraph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridBlueprint_GetRenderGridWithBlueprintGraph_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGridBlueprint_GetRenderGridWithBlueprintGraph_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridBlueprint_GetRenderGridWithBlueprintGraph_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGridBlueprint_GetRenderGridWithBlueprintGraph()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridBlueprint_GetRenderGridWithBlueprintGraph_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URenderGridBlueprint);
	UClass* Z_Construct_UClass_URenderGridBlueprint_NoRegister()
	{
		return URenderGridBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_URenderGridBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderGrid_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RenderGrid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URenderGridBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprint,
		(UObject* (*)())Z_Construct_UPackage__Script_RenderGridDeveloper,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URenderGridBlueprint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URenderGridBlueprint_GetRenderGrid, "GetRenderGrid" }, // 597157953
		{ &Z_Construct_UFunction_URenderGridBlueprint_GetRenderGridClassDefaultObject, "GetRenderGridClassDefaultObject" }, // 644657600
		{ &Z_Construct_UFunction_URenderGridBlueprint_GetRenderGridWithBlueprintGraph, "GetRenderGridWithBlueprintGraph" }, // 926555042
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridBlueprint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A UBlueprint child class for the RenderGrid modules.\n *\n * Required in order for a RenderGrid to be able to have a blueprint graph.\n */" },
		{ "IgnoreClassThumbnail", "" },
		{ "IncludePath", "Blueprints/RenderGridBlueprint.h" },
		{ "ModuleRelativePath", "Public/Blueprints/RenderGridBlueprint.h" },
		{ "ToolTip", "A UBlueprint child class for the RenderGrid modules.\n\nRequired in order for a RenderGrid to be able to have a blueprint graph." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridBlueprint_Statics::NewProp_RenderGrid_MetaData[] = {
		{ "ModuleRelativePath", "Public/Blueprints/RenderGridBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URenderGridBlueprint_Statics::NewProp_RenderGrid = { "RenderGrid", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URenderGridBlueprint, RenderGrid), Z_Construct_UClass_URenderGrid_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URenderGridBlueprint_Statics::NewProp_RenderGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridBlueprint_Statics::NewProp_RenderGrid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URenderGridBlueprint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderGridBlueprint_Statics::NewProp_RenderGrid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URenderGridBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URenderGridBlueprint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URenderGridBlueprint_Statics::ClassParams = {
		&URenderGridBlueprint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URenderGridBlueprint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridBlueprint_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URenderGridBlueprint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridBlueprint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URenderGridBlueprint()
	{
		if (!Z_Registration_Info_UClass_URenderGridBlueprint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URenderGridBlueprint.OuterSingleton, Z_Construct_UClass_URenderGridBlueprint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URenderGridBlueprint.OuterSingleton;
	}
	template<> RENDERGRIDDEVELOPER_API UClass* StaticClass<URenderGridBlueprint>()
	{
		return URenderGridBlueprint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URenderGridBlueprint);
	URenderGridBlueprint::~URenderGridBlueprint() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGridDeveloper_Public_Blueprints_RenderGridBlueprint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGridDeveloper_Public_Blueprints_RenderGridBlueprint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URenderGridBlueprint, URenderGridBlueprint::StaticClass, TEXT("URenderGridBlueprint"), &Z_Registration_Info_UClass_URenderGridBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URenderGridBlueprint), 1757255802U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGridDeveloper_Public_Blueprints_RenderGridBlueprint_h_2337954129(TEXT("/Script/RenderGridDeveloper"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGridDeveloper_Public_Blueprints_RenderGridBlueprint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGridDeveloper_Public_Blueprints_RenderGridBlueprint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
