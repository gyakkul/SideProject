// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamVRHQLayerShape.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamVRHQLayerShape() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UStereoLayerShapeQuad();
	STEAMVR_API UClass* Z_Construct_UClass_USteamVRHQStereoLayerShape();
	STEAMVR_API UClass* Z_Construct_UClass_USteamVRHQStereoLayerShape_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SteamVR();
// End Cross Module References
	DEFINE_FUNCTION(USteamVRHQStereoLayerShape::execSetAutoCurveMaxDistance)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAutoCurveMaxDistance(Z_Param_InDistance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamVRHQStereoLayerShape::execSetAutoCurveMinDistance)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAutoCurveMinDistance(Z_Param_InDistance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamVRHQStereoLayerShape::execSetAntiAlias)
	{
		P_GET_UBOOL(Z_Param_InAntiAlias);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAntiAlias(Z_Param_InAntiAlias);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamVRHQStereoLayerShape::execSetCurved)
	{
		P_GET_UBOOL(Z_Param_InCurved);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurved(Z_Param_InCurved);
		P_NATIVE_END;
	}
	void USteamVRHQStereoLayerShape::StaticRegisterNativesUSteamVRHQStereoLayerShape()
	{
		UClass* Class = USteamVRHQStereoLayerShape::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetAntiAlias", &USteamVRHQStereoLayerShape::execSetAntiAlias },
			{ "SetAutoCurveMaxDistance", &USteamVRHQStereoLayerShape::execSetAutoCurveMaxDistance },
			{ "SetAutoCurveMinDistance", &USteamVRHQStereoLayerShape::execSetAutoCurveMinDistance },
			{ "SetCurved", &USteamVRHQStereoLayerShape::execSetCurved },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamVRHQStereoLayerShape_SetAntiAlias_Statics
	{
		struct SteamVRHQStereoLayerShape_eventSetAntiAlias_Parms
		{
			bool InAntiAlias;
		};
		static void NewProp_InAntiAlias_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InAntiAlias;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USteamVRHQStereoLayerShape_SetAntiAlias_Statics::NewProp_InAntiAlias_SetBit(void* Obj)
	{
		((SteamVRHQStereoLayerShape_eventSetAntiAlias_Parms*)Obj)->InAntiAlias = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamVRHQStereoLayerShape_SetAntiAlias_Statics::NewProp_InAntiAlias = { "InAntiAlias", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamVRHQStereoLayerShape_eventSetAntiAlias_Parms), &Z_Construct_UFunction_USteamVRHQStereoLayerShape_SetAntiAlias_Statics::NewProp_InAntiAlias_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamVRHQStereoLayerShape_SetAntiAlias_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRHQStereoLayerShape_SetAntiAlias_Statics::NewProp_InAntiAlias,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamVRHQStereoLayerShape_SetAntiAlias_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Stereo Layer" },
		{ "ModuleRelativePath", "Classes/SteamVRHQLayerShape.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamVRHQStereoLayerShape_SetAntiAlias_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamVRHQStereoLayerShape, nullptr, "SetAntiAlias", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamVRHQStereoLayerShape_SetAntiAlias_Statics::SteamVRHQStereoLayerShape_eventSetAntiAlias_Parms), Z_Construct_UFunction_USteamVRHQStereoLayerShape_SetAntiAlias_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRHQStereoLayerShape_SetAntiAlias_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamVRHQStereoLayerShape_SetAntiAlias_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRHQStereoLayerShape_SetAntiAlias_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamVRHQStereoLayerShape_SetAntiAlias()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamVRHQStereoLayerShape_SetAntiAlias_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamVRHQStereoLayerShape_SetAutoCurveMaxDistance_Statics
	{
		struct SteamVRHQStereoLayerShape_eventSetAutoCurveMaxDistance_Parms
		{
			float InDistance;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamVRHQStereoLayerShape_SetAutoCurveMaxDistance_Statics::NewProp_InDistance = { "InDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamVRHQStereoLayerShape_eventSetAutoCurveMaxDistance_Parms, InDistance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamVRHQStereoLayerShape_SetAutoCurveMaxDistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRHQStereoLayerShape_SetAutoCurveMaxDistance_Statics::NewProp_InDistance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamVRHQStereoLayerShape_SetAutoCurveMaxDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Stereo Layer" },
		{ "ModuleRelativePath", "Classes/SteamVRHQLayerShape.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamVRHQStereoLayerShape_SetAutoCurveMaxDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamVRHQStereoLayerShape, nullptr, "SetAutoCurveMaxDistance", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamVRHQStereoLayerShape_SetAutoCurveMaxDistance_Statics::SteamVRHQStereoLayerShape_eventSetAutoCurveMaxDistance_Parms), Z_Construct_UFunction_USteamVRHQStereoLayerShape_SetAutoCurveMaxDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRHQStereoLayerShape_SetAutoCurveMaxDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamVRHQStereoLayerShape_SetAutoCurveMaxDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRHQStereoLayerShape_SetAutoCurveMaxDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamVRHQStereoLayerShape_SetAutoCurveMaxDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamVRHQStereoLayerShape_SetAutoCurveMaxDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamVRHQStereoLayerShape_SetAutoCurveMinDistance_Statics
	{
		struct SteamVRHQStereoLayerShape_eventSetAutoCurveMinDistance_Parms
		{
			float InDistance;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamVRHQStereoLayerShape_SetAutoCurveMinDistance_Statics::NewProp_InDistance = { "InDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamVRHQStereoLayerShape_eventSetAutoCurveMinDistance_Parms, InDistance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamVRHQStereoLayerShape_SetAutoCurveMinDistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRHQStereoLayerShape_SetAutoCurveMinDistance_Statics::NewProp_InDistance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamVRHQStereoLayerShape_SetAutoCurveMinDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Stereo Layer" },
		{ "ModuleRelativePath", "Classes/SteamVRHQLayerShape.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamVRHQStereoLayerShape_SetAutoCurveMinDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamVRHQStereoLayerShape, nullptr, "SetAutoCurveMinDistance", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamVRHQStereoLayerShape_SetAutoCurveMinDistance_Statics::SteamVRHQStereoLayerShape_eventSetAutoCurveMinDistance_Parms), Z_Construct_UFunction_USteamVRHQStereoLayerShape_SetAutoCurveMinDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRHQStereoLayerShape_SetAutoCurveMinDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamVRHQStereoLayerShape_SetAutoCurveMinDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRHQStereoLayerShape_SetAutoCurveMinDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamVRHQStereoLayerShape_SetAutoCurveMinDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamVRHQStereoLayerShape_SetAutoCurveMinDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamVRHQStereoLayerShape_SetCurved_Statics
	{
		struct SteamVRHQStereoLayerShape_eventSetCurved_Parms
		{
			bool InCurved;
		};
		static void NewProp_InCurved_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InCurved;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USteamVRHQStereoLayerShape_SetCurved_Statics::NewProp_InCurved_SetBit(void* Obj)
	{
		((SteamVRHQStereoLayerShape_eventSetCurved_Parms*)Obj)->InCurved = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamVRHQStereoLayerShape_SetCurved_Statics::NewProp_InCurved = { "InCurved", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamVRHQStereoLayerShape_eventSetCurved_Parms), &Z_Construct_UFunction_USteamVRHQStereoLayerShape_SetCurved_Statics::NewProp_InCurved_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamVRHQStereoLayerShape_SetCurved_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRHQStereoLayerShape_SetCurved_Statics::NewProp_InCurved,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamVRHQStereoLayerShape_SetCurved_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Stereo Layer" },
		{ "ModuleRelativePath", "Classes/SteamVRHQLayerShape.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamVRHQStereoLayerShape_SetCurved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamVRHQStereoLayerShape, nullptr, "SetCurved", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamVRHQStereoLayerShape_SetCurved_Statics::SteamVRHQStereoLayerShape_eventSetCurved_Parms), Z_Construct_UFunction_USteamVRHQStereoLayerShape_SetCurved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRHQStereoLayerShape_SetCurved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamVRHQStereoLayerShape_SetCurved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRHQStereoLayerShape_SetCurved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamVRHQStereoLayerShape_SetCurved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamVRHQStereoLayerShape_SetCurved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamVRHQStereoLayerShape);
	UClass* Z_Construct_UClass_USteamVRHQStereoLayerShape_NoRegister()
	{
		return USteamVRHQStereoLayerShape::StaticClass();
	}
	struct Z_Construct_UClass_USteamVRHQStereoLayerShape_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCurved_MetaData[];
#endif
		static void NewProp_bCurved_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCurved;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAntiAlias_MetaData[];
#endif
		static void NewProp_bAntiAlias_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAntiAlias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoCurveMinDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoCurveMinDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoCurveMaxDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoCurveMaxDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamVRHQStereoLayerShape_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStereoLayerShapeQuad,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamVR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamVRHQStereoLayerShape_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamVRHQStereoLayerShape_SetAntiAlias, "SetAntiAlias" }, // 1095028022
		{ &Z_Construct_UFunction_USteamVRHQStereoLayerShape_SetAutoCurveMaxDistance, "SetAutoCurveMaxDistance" }, // 3426349288
		{ &Z_Construct_UFunction_USteamVRHQStereoLayerShape_SetAutoCurveMinDistance, "SetAutoCurveMinDistance" }, // 3520879522
		{ &Z_Construct_UFunction_USteamVRHQStereoLayerShape_SetCurved, "SetCurved" }, // 1829152841
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamVRHQStereoLayerShape_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "High Quality Layer (SteamVR)" },
		{ "IncludePath", "SteamVRHQLayerShape.h" },
		{ "ModuleRelativePath", "Classes/SteamVRHQLayerShape.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamVRHQStereoLayerShape_Statics::NewProp_bCurved_MetaData[] = {
		{ "Category", "HQ Layer Properties" },
		{ "ModuleRelativePath", "Classes/SteamVRHQLayerShape.h" },
	};
#endif
	void Z_Construct_UClass_USteamVRHQStereoLayerShape_Statics::NewProp_bCurved_SetBit(void* Obj)
	{
		((USteamVRHQStereoLayerShape*)Obj)->bCurved = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamVRHQStereoLayerShape_Statics::NewProp_bCurved = { "bCurved", nullptr, (EPropertyFlags)0x001000000000001d, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USteamVRHQStereoLayerShape), &Z_Construct_UClass_USteamVRHQStereoLayerShape_Statics::NewProp_bCurved_SetBit, METADATA_PARAMS(Z_Construct_UClass_USteamVRHQStereoLayerShape_Statics::NewProp_bCurved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamVRHQStereoLayerShape_Statics::NewProp_bCurved_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamVRHQStereoLayerShape_Statics::NewProp_bAntiAlias_MetaData[] = {
		{ "Category", "HQ Layer Properties" },
		{ "ModuleRelativePath", "Classes/SteamVRHQLayerShape.h" },
	};
#endif
	void Z_Construct_UClass_USteamVRHQStereoLayerShape_Statics::NewProp_bAntiAlias_SetBit(void* Obj)
	{
		((USteamVRHQStereoLayerShape*)Obj)->bAntiAlias = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamVRHQStereoLayerShape_Statics::NewProp_bAntiAlias = { "bAntiAlias", nullptr, (EPropertyFlags)0x001000000000001d, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USteamVRHQStereoLayerShape), &Z_Construct_UClass_USteamVRHQStereoLayerShape_Statics::NewProp_bAntiAlias_SetBit, METADATA_PARAMS(Z_Construct_UClass_USteamVRHQStereoLayerShape_Statics::NewProp_bAntiAlias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamVRHQStereoLayerShape_Statics::NewProp_bAntiAlias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamVRHQStereoLayerShape_Statics::NewProp_AutoCurveMinDistance_MetaData[] = {
		{ "Category", "HQ Layer Properties" },
		{ "Comment", "/** For curved layers, sets the minimum distance from the layer used to automatically curve\n      * the surface around the viewer.  The minimum distance is when the layer is most curved. */" },
		{ "ModuleRelativePath", "Classes/SteamVRHQLayerShape.h" },
		{ "ToolTip", "For curved layers, sets the minimum distance from the layer used to automatically curve\nthe surface around the viewer.  The minimum distance is when the layer is most curved." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamVRHQStereoLayerShape_Statics::NewProp_AutoCurveMinDistance = { "AutoCurveMinDistance", nullptr, (EPropertyFlags)0x001000000000001d, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamVRHQStereoLayerShape, AutoCurveMinDistance), METADATA_PARAMS(Z_Construct_UClass_USteamVRHQStereoLayerShape_Statics::NewProp_AutoCurveMinDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamVRHQStereoLayerShape_Statics::NewProp_AutoCurveMinDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamVRHQStereoLayerShape_Statics::NewProp_AutoCurveMaxDistance_MetaData[] = {
		{ "Category", "HQ Layer Properties" },
		{ "Comment", "/** For curved layers, sets the maximum distance from the layer used to automatically curve\n\x09  * the surface around the viewer.  The maximum distance is when the layer is the least curved. */" },
		{ "ModuleRelativePath", "Classes/SteamVRHQLayerShape.h" },
		{ "ToolTip", "For curved layers, sets the maximum distance from the layer used to automatically curve\nthe surface around the viewer.  The maximum distance is when the layer is the least curved." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamVRHQStereoLayerShape_Statics::NewProp_AutoCurveMaxDistance = { "AutoCurveMaxDistance", nullptr, (EPropertyFlags)0x001000000000001d, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamVRHQStereoLayerShape, AutoCurveMaxDistance), METADATA_PARAMS(Z_Construct_UClass_USteamVRHQStereoLayerShape_Statics::NewProp_AutoCurveMaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamVRHQStereoLayerShape_Statics::NewProp_AutoCurveMaxDistance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamVRHQStereoLayerShape_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamVRHQStereoLayerShape_Statics::NewProp_bCurved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamVRHQStereoLayerShape_Statics::NewProp_bAntiAlias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamVRHQStereoLayerShape_Statics::NewProp_AutoCurveMinDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamVRHQStereoLayerShape_Statics::NewProp_AutoCurveMaxDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamVRHQStereoLayerShape_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamVRHQStereoLayerShape>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamVRHQStereoLayerShape_Statics::ClassParams = {
		&USteamVRHQStereoLayerShape::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USteamVRHQStereoLayerShape_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USteamVRHQStereoLayerShape_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamVRHQStereoLayerShape_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamVRHQStereoLayerShape_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamVRHQStereoLayerShape()
	{
		if (!Z_Registration_Info_UClass_USteamVRHQStereoLayerShape.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamVRHQStereoLayerShape.OuterSingleton, Z_Construct_UClass_USteamVRHQStereoLayerShape_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamVRHQStereoLayerShape.OuterSingleton;
	}
	template<> STEAMVR_API UClass* StaticClass<USteamVRHQStereoLayerShape>()
	{
		return USteamVRHQStereoLayerShape::StaticClass();
	}
	USteamVRHQStereoLayerShape::USteamVRHQStereoLayerShape(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamVRHQStereoLayerShape);
	USteamVRHQStereoLayerShape::~USteamVRHQStereoLayerShape() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVR_Classes_SteamVRHQLayerShape_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVR_Classes_SteamVRHQLayerShape_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USteamVRHQStereoLayerShape, USteamVRHQStereoLayerShape::StaticClass, TEXT("USteamVRHQStereoLayerShape"), &Z_Registration_Info_UClass_USteamVRHQStereoLayerShape, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamVRHQStereoLayerShape), 3536253144U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVR_Classes_SteamVRHQLayerShape_h_3368098480(TEXT("/Script/SteamVR"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVR_Classes_SteamVRHQLayerShape_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVR_Classes_SteamVRHQLayerShape_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
