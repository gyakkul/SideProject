// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XRVisualizationFunctionLibrary.h"
#include "HeadMountedDisplayTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXRVisualizationFunctionLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	HEADMOUNTEDDISPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FXRHMDData();
	HEADMOUNTEDDISPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FXRMotionControllerData();
	UPackage* Z_Construct_UPackage__Script_XRVisualization();
	XRVISUALIZATION_API UClass* Z_Construct_UClass_UXRVisualizationFunctionLibrary();
	XRVISUALIZATION_API UClass* Z_Construct_UClass_UXRVisualizationFunctionLibrary_NoRegister();
	XRVISUALIZATION_API UClass* Z_Construct_UClass_UXRVisualizationLoadHelper();
	XRVISUALIZATION_API UClass* Z_Construct_UClass_UXRVisualizationLoadHelper_NoRegister();
// End Cross Module References
	void UXRVisualizationLoadHelper::StaticRegisterNativesUXRVisualizationLoadHelper()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UXRVisualizationLoadHelper);
	UClass* Z_Construct_UClass_UXRVisualizationLoadHelper_NoRegister()
	{
		return UXRVisualizationLoadHelper::StaticClass();
	}
	struct Z_Construct_UClass_UXRVisualizationLoadHelper_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GenericHMD_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GenericHMD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OculusControllerMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OculusControllerMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViveControllerMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ViveControllerMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_STEMControllerMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_STEMControllerMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXRVisualizationLoadHelper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_XRVisualization,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRVisualizationLoadHelper_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "XRVisualizationFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/XRVisualizationFunctionLibrary.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRVisualizationLoadHelper_Statics::NewProp_GenericHMD_MetaData[] = {
		{ "ModuleRelativePath", "Public/XRVisualizationFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UXRVisualizationLoadHelper_Statics::NewProp_GenericHMD = { "GenericHMD", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UXRVisualizationLoadHelper, GenericHMD), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UXRVisualizationLoadHelper_Statics::NewProp_GenericHMD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXRVisualizationLoadHelper_Statics::NewProp_GenericHMD_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRVisualizationLoadHelper_Statics::NewProp_OculusControllerMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/XRVisualizationFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UXRVisualizationLoadHelper_Statics::NewProp_OculusControllerMesh = { "OculusControllerMesh", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UXRVisualizationLoadHelper, OculusControllerMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UXRVisualizationLoadHelper_Statics::NewProp_OculusControllerMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXRVisualizationLoadHelper_Statics::NewProp_OculusControllerMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRVisualizationLoadHelper_Statics::NewProp_ViveControllerMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/XRVisualizationFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UXRVisualizationLoadHelper_Statics::NewProp_ViveControllerMesh = { "ViveControllerMesh", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UXRVisualizationLoadHelper, ViveControllerMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UXRVisualizationLoadHelper_Statics::NewProp_ViveControllerMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXRVisualizationLoadHelper_Statics::NewProp_ViveControllerMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRVisualizationLoadHelper_Statics::NewProp_STEMControllerMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/XRVisualizationFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UXRVisualizationLoadHelper_Statics::NewProp_STEMControllerMesh = { "STEMControllerMesh", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UXRVisualizationLoadHelper, STEMControllerMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UXRVisualizationLoadHelper_Statics::NewProp_STEMControllerMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXRVisualizationLoadHelper_Statics::NewProp_STEMControllerMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UXRVisualizationLoadHelper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRVisualizationLoadHelper_Statics::NewProp_GenericHMD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRVisualizationLoadHelper_Statics::NewProp_OculusControllerMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRVisualizationLoadHelper_Statics::NewProp_ViveControllerMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRVisualizationLoadHelper_Statics::NewProp_STEMControllerMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXRVisualizationLoadHelper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXRVisualizationLoadHelper>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UXRVisualizationLoadHelper_Statics::ClassParams = {
		&UXRVisualizationLoadHelper::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UXRVisualizationLoadHelper_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UXRVisualizationLoadHelper_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UXRVisualizationLoadHelper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXRVisualizationLoadHelper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXRVisualizationLoadHelper()
	{
		if (!Z_Registration_Info_UClass_UXRVisualizationLoadHelper.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UXRVisualizationLoadHelper.OuterSingleton, Z_Construct_UClass_UXRVisualizationLoadHelper_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UXRVisualizationLoadHelper.OuterSingleton;
	}
	template<> XRVISUALIZATION_API UClass* StaticClass<UXRVisualizationLoadHelper>()
	{
		return UXRVisualizationLoadHelper::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXRVisualizationLoadHelper);
	UXRVisualizationLoadHelper::~UXRVisualizationLoadHelper() {}
	DEFINE_FUNCTION(UXRVisualizationFunctionLibrary::execRenderMotionController)
	{
		P_GET_STRUCT_REF(FXRMotionControllerData,Z_Param_Out_XRControllerData);
		P_GET_UBOOL(Z_Param_bRight);
		P_FINISH;
		P_NATIVE_BEGIN;
		UXRVisualizationFunctionLibrary::RenderMotionController(Z_Param_Out_XRControllerData,Z_Param_bRight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXRVisualizationFunctionLibrary::execRenderHMD)
	{
		P_GET_STRUCT_REF(FXRHMDData,Z_Param_Out_XRHMDData);
		P_FINISH;
		P_NATIVE_BEGIN;
		UXRVisualizationFunctionLibrary::RenderHMD(Z_Param_Out_XRHMDData);
		P_NATIVE_END;
	}
	void UXRVisualizationFunctionLibrary::StaticRegisterNativesUXRVisualizationFunctionLibrary()
	{
		UClass* Class = UXRVisualizationFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RenderHMD", &UXRVisualizationFunctionLibrary::execRenderHMD },
			{ "RenderMotionController", &UXRVisualizationFunctionLibrary::execRenderMotionController },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UXRVisualizationFunctionLibrary_RenderHMD_Statics
	{
		struct XRVisualizationFunctionLibrary_eventRenderHMD_Parms
		{
			FXRHMDData XRHMDData;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XRHMDData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_XRHMDData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRVisualizationFunctionLibrary_RenderHMD_Statics::NewProp_XRHMDData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXRVisualizationFunctionLibrary_RenderHMD_Statics::NewProp_XRHMDData = { "XRHMDData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(XRVisualizationFunctionLibrary_eventRenderHMD_Parms, XRHMDData), Z_Construct_UScriptStruct_FXRHMDData, METADATA_PARAMS(Z_Construct_UFunction_UXRVisualizationFunctionLibrary_RenderHMD_Statics::NewProp_XRHMDData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRVisualizationFunctionLibrary_RenderHMD_Statics::NewProp_XRHMDData_MetaData)) }; // 2302025590
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXRVisualizationFunctionLibrary_RenderHMD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRVisualizationFunctionLibrary_RenderHMD_Statics::NewProp_XRHMDData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRVisualizationFunctionLibrary_RenderHMD_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|XRTracking" },
		{ "Comment", "/**\n\x09 * Renders HMD Visualization on a system that might not have that HMD as native\n\x09 */" },
		{ "ModuleRelativePath", "Public/XRVisualizationFunctionLibrary.h" },
		{ "ToolTip", "Renders HMD Visualization on a system that might not have that HMD as native" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXRVisualizationFunctionLibrary_RenderHMD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXRVisualizationFunctionLibrary, nullptr, "RenderHMD", nullptr, nullptr, sizeof(Z_Construct_UFunction_UXRVisualizationFunctionLibrary_RenderHMD_Statics::XRVisualizationFunctionLibrary_eventRenderHMD_Parms), Z_Construct_UFunction_UXRVisualizationFunctionLibrary_RenderHMD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRVisualizationFunctionLibrary_RenderHMD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXRVisualizationFunctionLibrary_RenderHMD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRVisualizationFunctionLibrary_RenderHMD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXRVisualizationFunctionLibrary_RenderHMD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXRVisualizationFunctionLibrary_RenderHMD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXRVisualizationFunctionLibrary_RenderMotionController_Statics
	{
		struct XRVisualizationFunctionLibrary_eventRenderMotionController_Parms
		{
			FXRMotionControllerData XRControllerData;
			bool bRight;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XRControllerData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_XRControllerData;
		static void NewProp_bRight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRVisualizationFunctionLibrary_RenderMotionController_Statics::NewProp_XRControllerData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXRVisualizationFunctionLibrary_RenderMotionController_Statics::NewProp_XRControllerData = { "XRControllerData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(XRVisualizationFunctionLibrary_eventRenderMotionController_Parms, XRControllerData), Z_Construct_UScriptStruct_FXRMotionControllerData, METADATA_PARAMS(Z_Construct_UFunction_UXRVisualizationFunctionLibrary_RenderMotionController_Statics::NewProp_XRControllerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRVisualizationFunctionLibrary_RenderMotionController_Statics::NewProp_XRControllerData_MetaData)) }; // 2470930983
	void Z_Construct_UFunction_UXRVisualizationFunctionLibrary_RenderMotionController_Statics::NewProp_bRight_SetBit(void* Obj)
	{
		((XRVisualizationFunctionLibrary_eventRenderMotionController_Parms*)Obj)->bRight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXRVisualizationFunctionLibrary_RenderMotionController_Statics::NewProp_bRight = { "bRight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(XRVisualizationFunctionLibrary_eventRenderMotionController_Parms), &Z_Construct_UFunction_UXRVisualizationFunctionLibrary_RenderMotionController_Statics::NewProp_bRight_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXRVisualizationFunctionLibrary_RenderMotionController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRVisualizationFunctionLibrary_RenderMotionController_Statics::NewProp_XRControllerData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRVisualizationFunctionLibrary_RenderMotionController_Statics::NewProp_bRight,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRVisualizationFunctionLibrary_RenderMotionController_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|XRTracking" },
		{ "Comment", "/**\n\x09 * Renders Motion Controller Visualization on a system that might not have that HMD as native\n\x09 */" },
		{ "ModuleRelativePath", "Public/XRVisualizationFunctionLibrary.h" },
		{ "ToolTip", "Renders Motion Controller Visualization on a system that might not have that HMD as native" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXRVisualizationFunctionLibrary_RenderMotionController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXRVisualizationFunctionLibrary, nullptr, "RenderMotionController", nullptr, nullptr, sizeof(Z_Construct_UFunction_UXRVisualizationFunctionLibrary_RenderMotionController_Statics::XRVisualizationFunctionLibrary_eventRenderMotionController_Parms), Z_Construct_UFunction_UXRVisualizationFunctionLibrary_RenderMotionController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRVisualizationFunctionLibrary_RenderMotionController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXRVisualizationFunctionLibrary_RenderMotionController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRVisualizationFunctionLibrary_RenderMotionController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXRVisualizationFunctionLibrary_RenderMotionController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXRVisualizationFunctionLibrary_RenderMotionController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UXRVisualizationFunctionLibrary);
	UClass* Z_Construct_UClass_UXRVisualizationFunctionLibrary_NoRegister()
	{
		return UXRVisualizationFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UXRVisualizationFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadHelper_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LoadHelper;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXRVisualizationFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_XRVisualization,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UXRVisualizationFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UXRVisualizationFunctionLibrary_RenderHMD, "RenderHMD" }, // 261441275
		{ &Z_Construct_UFunction_UXRVisualizationFunctionLibrary_RenderMotionController, "RenderMotionController" }, // 3358727369
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRVisualizationFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "XRVisualizationFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/XRVisualizationFunctionLibrary.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRVisualizationFunctionLibrary_Statics::NewProp_LoadHelper_MetaData[] = {
		{ "ModuleRelativePath", "Public/XRVisualizationFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UXRVisualizationFunctionLibrary_Statics::NewProp_LoadHelper = { "LoadHelper", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UXRVisualizationFunctionLibrary, LoadHelper), Z_Construct_UClass_UXRVisualizationLoadHelper_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UXRVisualizationFunctionLibrary_Statics::NewProp_LoadHelper_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXRVisualizationFunctionLibrary_Statics::NewProp_LoadHelper_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UXRVisualizationFunctionLibrary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRVisualizationFunctionLibrary_Statics::NewProp_LoadHelper,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXRVisualizationFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXRVisualizationFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UXRVisualizationFunctionLibrary_Statics::ClassParams = {
		&UXRVisualizationFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UXRVisualizationFunctionLibrary_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UXRVisualizationFunctionLibrary_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UXRVisualizationFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXRVisualizationFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXRVisualizationFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UXRVisualizationFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UXRVisualizationFunctionLibrary.OuterSingleton, Z_Construct_UClass_UXRVisualizationFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UXRVisualizationFunctionLibrary.OuterSingleton;
	}
	template<> XRVISUALIZATION_API UClass* StaticClass<UXRVisualizationFunctionLibrary>()
	{
		return UXRVisualizationFunctionLibrary::StaticClass();
	}
	UXRVisualizationFunctionLibrary::UXRVisualizationFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXRVisualizationFunctionLibrary);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_XR_XRVisualization_Source_XRVisualization_Public_XRVisualizationFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_XR_XRVisualization_Source_XRVisualization_Public_XRVisualizationFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UXRVisualizationLoadHelper, UXRVisualizationLoadHelper::StaticClass, TEXT("UXRVisualizationLoadHelper"), &Z_Registration_Info_UClass_UXRVisualizationLoadHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UXRVisualizationLoadHelper), 3977327710U) },
		{ Z_Construct_UClass_UXRVisualizationFunctionLibrary, UXRVisualizationFunctionLibrary::StaticClass, TEXT("UXRVisualizationFunctionLibrary"), &Z_Registration_Info_UClass_UXRVisualizationFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UXRVisualizationFunctionLibrary), 3265916847U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_XR_XRVisualization_Source_XRVisualization_Public_XRVisualizationFunctionLibrary_h_1281730027(TEXT("/Script/XRVisualization"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_XR_XRVisualization_Source_XRVisualization_Public_XRVisualizationFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_XR_XRVisualization_Source_XRVisualization_Public_XRVisualizationFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
