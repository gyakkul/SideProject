// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseGizmos/GizmoInterfaces.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGizmoInterfaces() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoAxisSource();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoAxisSource_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoClickMultiTarget();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoClickMultiTarget_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoClickTarget();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoClickTarget_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoFloatParameterSource();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoFloatParameterSource_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoRenderMultiTarget();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoRenderMultiTarget_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoRenderTarget();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoRenderTarget_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoStateTarget();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoStateTarget_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoTransformSource();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoTransformSource_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoVec2ParameterSource();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoVec2ParameterSource_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	DEFINE_FUNCTION(IGizmoTransformSource::execSetTransform)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NewTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTransform(Z_Param_Out_NewTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGizmoTransformSource::execGetTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetTransform();
		P_NATIVE_END;
	}
	void UGizmoTransformSource::StaticRegisterNativesUGizmoTransformSource()
	{
		UClass* Class = UGizmoTransformSource::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTransform", &IGizmoTransformSource::execGetTransform },
			{ "SetTransform", &IGizmoTransformSource::execSetTransform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGizmoTransformSource_GetTransform_Statics
	{
		struct GizmoTransformSource_eventGetTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGizmoTransformSource_GetTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GizmoTransformSource_eventGetTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGizmoTransformSource_GetTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGizmoTransformSource_GetTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGizmoTransformSource_GetTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoInterfaces.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGizmoTransformSource_GetTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGizmoTransformSource, nullptr, "GetTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGizmoTransformSource_GetTransform_Statics::GizmoTransformSource_eventGetTransform_Parms), Z_Construct_UFunction_UGizmoTransformSource_GetTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoTransformSource_GetTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGizmoTransformSource_GetTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoTransformSource_GetTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGizmoTransformSource_GetTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGizmoTransformSource_GetTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGizmoTransformSource_SetTransform_Statics
	{
		struct GizmoTransformSource_eventSetTransform_Parms
		{
			FTransform NewTransform;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGizmoTransformSource_SetTransform_Statics::NewProp_NewTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGizmoTransformSource_SetTransform_Statics::NewProp_NewTransform = { "NewTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GizmoTransformSource_eventSetTransform_Parms, NewTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UGizmoTransformSource_SetTransform_Statics::NewProp_NewTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoTransformSource_SetTransform_Statics::NewProp_NewTransform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGizmoTransformSource_SetTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGizmoTransformSource_SetTransform_Statics::NewProp_NewTransform,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGizmoTransformSource_SetTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoInterfaces.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGizmoTransformSource_SetTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGizmoTransformSource, nullptr, "SetTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGizmoTransformSource_SetTransform_Statics::GizmoTransformSource_eventSetTransform_Parms), Z_Construct_UFunction_UGizmoTransformSource_SetTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoTransformSource_SetTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGizmoTransformSource_SetTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoTransformSource_SetTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGizmoTransformSource_SetTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGizmoTransformSource_SetTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoTransformSource);
	UClass* Z_Construct_UClass_UGizmoTransformSource_NoRegister()
	{
		return UGizmoTransformSource::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoTransformSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoTransformSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGizmoTransformSource_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGizmoTransformSource_GetTransform, "GetTransform" }, // 1054031125
		{ &Z_Construct_UFunction_UGizmoTransformSource_SetTransform, "SetTransform" }, // 762832706
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoTransformSource_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoInterfaces.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoTransformSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGizmoTransformSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoTransformSource_Statics::ClassParams = {
		&UGizmoTransformSource::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoTransformSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoTransformSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoTransformSource()
	{
		if (!Z_Registration_Info_UClass_UGizmoTransformSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoTransformSource.OuterSingleton, Z_Construct_UClass_UGizmoTransformSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGizmoTransformSource.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoTransformSource>()
	{
		return UGizmoTransformSource::StaticClass();
	}
	UGizmoTransformSource::UGizmoTransformSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoTransformSource);
	UGizmoTransformSource::~UGizmoTransformSource() {}
	DEFINE_FUNCTION(IGizmoAxisSource::execGetTangentVectors)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TangentXOut);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TangentYOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTangentVectors(Z_Param_Out_TangentXOut,Z_Param_Out_TangentYOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGizmoAxisSource::execHasTangentVectors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasTangentVectors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGizmoAxisSource::execGetDirection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetDirection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGizmoAxisSource::execGetOrigin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetOrigin();
		P_NATIVE_END;
	}
	void UGizmoAxisSource::StaticRegisterNativesUGizmoAxisSource()
	{
		UClass* Class = UGizmoAxisSource::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDirection", &IGizmoAxisSource::execGetDirection },
			{ "GetOrigin", &IGizmoAxisSource::execGetOrigin },
			{ "GetTangentVectors", &IGizmoAxisSource::execGetTangentVectors },
			{ "HasTangentVectors", &IGizmoAxisSource::execHasTangentVectors },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGizmoAxisSource_GetDirection_Statics
	{
		struct GizmoAxisSource_eventGetDirection_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGizmoAxisSource_GetDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GizmoAxisSource_eventGetDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGizmoAxisSource_GetDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGizmoAxisSource_GetDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGizmoAxisSource_GetDirection_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** @return Direction Vector of axis */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoInterfaces.h" },
		{ "ToolTip", "@return Direction Vector of axis" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGizmoAxisSource_GetDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGizmoAxisSource, nullptr, "GetDirection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGizmoAxisSource_GetDirection_Statics::GizmoAxisSource_eventGetDirection_Parms), Z_Construct_UFunction_UGizmoAxisSource_GetDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoAxisSource_GetDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGizmoAxisSource_GetDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoAxisSource_GetDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGizmoAxisSource_GetDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGizmoAxisSource_GetDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGizmoAxisSource_GetOrigin_Statics
	{
		struct GizmoAxisSource_eventGetOrigin_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGizmoAxisSource_GetOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GizmoAxisSource_eventGetOrigin_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGizmoAxisSource_GetOrigin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGizmoAxisSource_GetOrigin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGizmoAxisSource_GetOrigin_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** @return Origin Point of axis */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoInterfaces.h" },
		{ "ToolTip", "@return Origin Point of axis" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGizmoAxisSource_GetOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGizmoAxisSource, nullptr, "GetOrigin", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGizmoAxisSource_GetOrigin_Statics::GizmoAxisSource_eventGetOrigin_Parms), Z_Construct_UFunction_UGizmoAxisSource_GetOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoAxisSource_GetOrigin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGizmoAxisSource_GetOrigin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoAxisSource_GetOrigin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGizmoAxisSource_GetOrigin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGizmoAxisSource_GetOrigin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGizmoAxisSource_GetTangentVectors_Statics
	{
		struct GizmoAxisSource_eventGetTangentVectors_Parms
		{
			FVector TangentXOut;
			FVector TangentYOut;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TangentXOut;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TangentYOut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGizmoAxisSource_GetTangentVectors_Statics::NewProp_TangentXOut = { "TangentXOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GizmoAxisSource_eventGetTangentVectors_Parms, TangentXOut), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGizmoAxisSource_GetTangentVectors_Statics::NewProp_TangentYOut = { "TangentYOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GizmoAxisSource_eventGetTangentVectors_Parms, TangentYOut), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGizmoAxisSource_GetTangentVectors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGizmoAxisSource_GetTangentVectors_Statics::NewProp_TangentXOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGizmoAxisSource_GetTangentVectors_Statics::NewProp_TangentYOut,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGizmoAxisSource_GetTangentVectors_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Get the two tangent vectors that are orthogonal to the Direction vector. \n\x09 * @warning Only valid if HasTangentVectors() returns true\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoInterfaces.h" },
		{ "ToolTip", "Get the two tangent vectors that are orthogonal to the Direction vector.\n@warning Only valid if HasTangentVectors() returns true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGizmoAxisSource_GetTangentVectors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGizmoAxisSource, nullptr, "GetTangentVectors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGizmoAxisSource_GetTangentVectors_Statics::GizmoAxisSource_eventGetTangentVectors_Parms), Z_Construct_UFunction_UGizmoAxisSource_GetTangentVectors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoAxisSource_GetTangentVectors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGizmoAxisSource_GetTangentVectors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoAxisSource_GetTangentVectors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGizmoAxisSource_GetTangentVectors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGizmoAxisSource_GetTangentVectors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGizmoAxisSource_HasTangentVectors_Statics
	{
		struct GizmoAxisSource_eventHasTangentVectors_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGizmoAxisSource_HasTangentVectors_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GizmoAxisSource_eventHasTangentVectors_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGizmoAxisSource_HasTangentVectors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GizmoAxisSource_eventHasTangentVectors_Parms), &Z_Construct_UFunction_UGizmoAxisSource_HasTangentVectors_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGizmoAxisSource_HasTangentVectors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGizmoAxisSource_HasTangentVectors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGizmoAxisSource_HasTangentVectors_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** @return true if this AxisSource has tangent vectors orthogonal to the Direction vector */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoInterfaces.h" },
		{ "ToolTip", "@return true if this AxisSource has tangent vectors orthogonal to the Direction vector" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGizmoAxisSource_HasTangentVectors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGizmoAxisSource, nullptr, "HasTangentVectors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGizmoAxisSource_HasTangentVectors_Statics::GizmoAxisSource_eventHasTangentVectors_Parms), Z_Construct_UFunction_UGizmoAxisSource_HasTangentVectors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoAxisSource_HasTangentVectors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGizmoAxisSource_HasTangentVectors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoAxisSource_HasTangentVectors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGizmoAxisSource_HasTangentVectors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGizmoAxisSource_HasTangentVectors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoAxisSource);
	UClass* Z_Construct_UClass_UGizmoAxisSource_NoRegister()
	{
		return UGizmoAxisSource::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoAxisSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoAxisSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGizmoAxisSource_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGizmoAxisSource_GetDirection, "GetDirection" }, // 4138969503
		{ &Z_Construct_UFunction_UGizmoAxisSource_GetOrigin, "GetOrigin" }, // 2998970167
		{ &Z_Construct_UFunction_UGizmoAxisSource_GetTangentVectors, "GetTangentVectors" }, // 3475771272
		{ &Z_Construct_UFunction_UGizmoAxisSource_HasTangentVectors, "HasTangentVectors" }, // 1514005744
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoAxisSource_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoInterfaces.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoAxisSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGizmoAxisSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoAxisSource_Statics::ClassParams = {
		&UGizmoAxisSource::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoAxisSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoAxisSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoAxisSource()
	{
		if (!Z_Registration_Info_UClass_UGizmoAxisSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoAxisSource.OuterSingleton, Z_Construct_UClass_UGizmoAxisSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGizmoAxisSource.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoAxisSource>()
	{
		return UGizmoAxisSource::StaticClass();
	}
	UGizmoAxisSource::UGizmoAxisSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoAxisSource);
	UGizmoAxisSource::~UGizmoAxisSource() {}
	DEFINE_FUNCTION(IGizmoClickTarget::execUpdateInteractingState)
	{
		P_GET_UBOOL(Z_Param_bInteracting);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateInteractingState(Z_Param_bInteracting);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGizmoClickTarget::execUpdateHoverState)
	{
		P_GET_UBOOL(Z_Param_bHovering);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateHoverState(Z_Param_bHovering);
		P_NATIVE_END;
	}
	void UGizmoClickTarget::StaticRegisterNativesUGizmoClickTarget()
	{
		UClass* Class = UGizmoClickTarget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateHoverState", &IGizmoClickTarget::execUpdateHoverState },
			{ "UpdateInteractingState", &IGizmoClickTarget::execUpdateInteractingState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGizmoClickTarget_UpdateHoverState_Statics
	{
		struct GizmoClickTarget_eventUpdateHoverState_Parms
		{
			bool bHovering;
		};
		static void NewProp_bHovering_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHovering;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGizmoClickTarget_UpdateHoverState_Statics::NewProp_bHovering_SetBit(void* Obj)
	{
		((GizmoClickTarget_eventUpdateHoverState_Parms*)Obj)->bHovering = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGizmoClickTarget_UpdateHoverState_Statics::NewProp_bHovering = { "bHovering", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GizmoClickTarget_eventUpdateHoverState_Parms), &Z_Construct_UFunction_UGizmoClickTarget_UpdateHoverState_Statics::NewProp_bHovering_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGizmoClickTarget_UpdateHoverState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGizmoClickTarget_UpdateHoverState_Statics::NewProp_bHovering,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGizmoClickTarget_UpdateHoverState_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09 * Updates the hover state indicating whether the input device is currently hovering over the Standard gizmo.\n\x09 * This should be be set to false once interaction with the gizmo commences.\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoInterfaces.h" },
		{ "ToolTip", "* Updates the hover state indicating whether the input device is currently hovering over the Standard gizmo.\n* This should be be set to false once interaction with the gizmo commences." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGizmoClickTarget_UpdateHoverState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGizmoClickTarget, nullptr, "UpdateHoverState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGizmoClickTarget_UpdateHoverState_Statics::GizmoClickTarget_eventUpdateHoverState_Parms), Z_Construct_UFunction_UGizmoClickTarget_UpdateHoverState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoClickTarget_UpdateHoverState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGizmoClickTarget_UpdateHoverState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoClickTarget_UpdateHoverState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGizmoClickTarget_UpdateHoverState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGizmoClickTarget_UpdateHoverState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGizmoClickTarget_UpdateInteractingState_Statics
	{
		struct GizmoClickTarget_eventUpdateInteractingState_Parms
		{
			bool bInteracting;
		};
		static void NewProp_bInteracting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInteracting;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGizmoClickTarget_UpdateInteractingState_Statics::NewProp_bInteracting_SetBit(void* Obj)
	{
		((GizmoClickTarget_eventUpdateInteractingState_Parms*)Obj)->bInteracting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGizmoClickTarget_UpdateInteractingState_Statics::NewProp_bInteracting = { "bInteracting", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GizmoClickTarget_eventUpdateInteractingState_Parms), &Z_Construct_UFunction_UGizmoClickTarget_UpdateInteractingState_Statics::NewProp_bInteracting_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGizmoClickTarget_UpdateInteractingState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGizmoClickTarget_UpdateInteractingState_Statics::NewProp_bInteracting,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGizmoClickTarget_UpdateInteractingState_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09 * Updates the interacting state indicating when interaction with the Standard gizmo is actively occurring, \n\x09 * typically upon the input device clicking and dragging the Standard gizmo.\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoInterfaces.h" },
		{ "ToolTip", "* Updates the interacting state indicating when interaction with the Standard gizmo is actively occurring,\n* typically upon the input device clicking and dragging the Standard gizmo." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGizmoClickTarget_UpdateInteractingState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGizmoClickTarget, nullptr, "UpdateInteractingState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGizmoClickTarget_UpdateInteractingState_Statics::GizmoClickTarget_eventUpdateInteractingState_Parms), Z_Construct_UFunction_UGizmoClickTarget_UpdateInteractingState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoClickTarget_UpdateInteractingState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGizmoClickTarget_UpdateInteractingState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoClickTarget_UpdateInteractingState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGizmoClickTarget_UpdateInteractingState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGizmoClickTarget_UpdateInteractingState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoClickTarget);
	UClass* Z_Construct_UClass_UGizmoClickTarget_NoRegister()
	{
		return UGizmoClickTarget::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoClickTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoClickTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGizmoClickTarget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGizmoClickTarget_UpdateHoverState, "UpdateHoverState" }, // 3525168348
		{ &Z_Construct_UFunction_UGizmoClickTarget_UpdateInteractingState, "UpdateInteractingState" }, // 1342256819
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoClickTarget_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoInterfaces.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoClickTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGizmoClickTarget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoClickTarget_Statics::ClassParams = {
		&UGizmoClickTarget::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoClickTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoClickTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoClickTarget()
	{
		if (!Z_Registration_Info_UClass_UGizmoClickTarget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoClickTarget.OuterSingleton, Z_Construct_UClass_UGizmoClickTarget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGizmoClickTarget.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoClickTarget>()
	{
		return UGizmoClickTarget::StaticClass();
	}
	UGizmoClickTarget::UGizmoClickTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoClickTarget);
	UGizmoClickTarget::~UGizmoClickTarget() {}
	DEFINE_FUNCTION(IGizmoClickMultiTarget::execUpdateHittableState)
	{
		P_GET_UBOOL(Z_Param_bHittable);
		P_GET_PROPERTY(FUInt32Property,Z_Param_InPartIdentifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateHittableState(Z_Param_bHittable,Z_Param_InPartIdentifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGizmoClickMultiTarget::execUpdateInteractingState)
	{
		P_GET_UBOOL(Z_Param_bInteracting);
		P_GET_PROPERTY(FUInt32Property,Z_Param_InPartIdentifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateInteractingState(Z_Param_bInteracting,Z_Param_InPartIdentifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGizmoClickMultiTarget::execUpdateHoverState)
	{
		P_GET_UBOOL(Z_Param_bHovering);
		P_GET_PROPERTY(FUInt32Property,Z_Param_InPartIdentifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateHoverState(Z_Param_bHovering,Z_Param_InPartIdentifier);
		P_NATIVE_END;
	}
	void UGizmoClickMultiTarget::StaticRegisterNativesUGizmoClickMultiTarget()
	{
		UClass* Class = UGizmoClickMultiTarget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateHittableState", &IGizmoClickMultiTarget::execUpdateHittableState },
			{ "UpdateHoverState", &IGizmoClickMultiTarget::execUpdateHoverState },
			{ "UpdateInteractingState", &IGizmoClickMultiTarget::execUpdateInteractingState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateHittableState_Statics
	{
		struct GizmoClickMultiTarget_eventUpdateHittableState_Parms
		{
			bool bHittable;
			uint32 InPartIdentifier;
		};
		static void NewProp_bHittable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHittable;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_InPartIdentifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateHittableState_Statics::NewProp_bHittable_SetBit(void* Obj)
	{
		((GizmoClickMultiTarget_eventUpdateHittableState_Parms*)Obj)->bHittable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateHittableState_Statics::NewProp_bHittable = { "bHittable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GizmoClickMultiTarget_eventUpdateHittableState_Parms), &Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateHittableState_Statics::NewProp_bHittable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateHittableState_Statics::NewProp_InPartIdentifier = { "InPartIdentifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GizmoClickMultiTarget_eventUpdateHittableState_Parms, InPartIdentifier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateHittableState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateHittableState_Statics::NewProp_bHittable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateHittableState_Statics::NewProp_InPartIdentifier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateHittableState_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09 * Updates the hittable state of the specified gizmo part. \n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoInterfaces.h" },
		{ "ToolTip", "* Updates the hittable state of the specified gizmo part." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateHittableState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGizmoClickMultiTarget, nullptr, "UpdateHittableState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateHittableState_Statics::GizmoClickMultiTarget_eventUpdateHittableState_Parms), Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateHittableState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateHittableState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateHittableState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateHittableState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateHittableState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateHittableState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateHoverState_Statics
	{
		struct GizmoClickMultiTarget_eventUpdateHoverState_Parms
		{
			bool bHovering;
			uint32 InPartIdentifier;
		};
		static void NewProp_bHovering_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHovering;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_InPartIdentifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateHoverState_Statics::NewProp_bHovering_SetBit(void* Obj)
	{
		((GizmoClickMultiTarget_eventUpdateHoverState_Parms*)Obj)->bHovering = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateHoverState_Statics::NewProp_bHovering = { "bHovering", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GizmoClickMultiTarget_eventUpdateHoverState_Parms), &Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateHoverState_Statics::NewProp_bHovering_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateHoverState_Statics::NewProp_InPartIdentifier = { "InPartIdentifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GizmoClickMultiTarget_eventUpdateHoverState_Parms, InPartIdentifier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateHoverState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateHoverState_Statics::NewProp_bHovering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateHoverState_Statics::NewProp_InPartIdentifier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateHoverState_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09 * Updates the hover state of the specified gizmo part, indicating whether the input device is currently hovering \n\x09 * over the Standard gizmo.\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoInterfaces.h" },
		{ "ToolTip", "* Updates the hover state of the specified gizmo part, indicating whether the input device is currently hovering\n* over the Standard gizmo." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateHoverState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGizmoClickMultiTarget, nullptr, "UpdateHoverState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateHoverState_Statics::GizmoClickMultiTarget_eventUpdateHoverState_Parms), Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateHoverState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateHoverState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateHoverState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateHoverState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateHoverState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateHoverState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateInteractingState_Statics
	{
		struct GizmoClickMultiTarget_eventUpdateInteractingState_Parms
		{
			bool bInteracting;
			uint32 InPartIdentifier;
		};
		static void NewProp_bInteracting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInteracting;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_InPartIdentifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateInteractingState_Statics::NewProp_bInteracting_SetBit(void* Obj)
	{
		((GizmoClickMultiTarget_eventUpdateInteractingState_Parms*)Obj)->bInteracting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateInteractingState_Statics::NewProp_bInteracting = { "bInteracting", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GizmoClickMultiTarget_eventUpdateInteractingState_Parms), &Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateInteractingState_Statics::NewProp_bInteracting_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateInteractingState_Statics::NewProp_InPartIdentifier = { "InPartIdentifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GizmoClickMultiTarget_eventUpdateInteractingState_Parms, InPartIdentifier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateInteractingState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateInteractingState_Statics::NewProp_bInteracting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateInteractingState_Statics::NewProp_InPartIdentifier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateInteractingState_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09 * Updates the interacting state of the specified gizmo part, indicating when interaction with the \n\x09 * Standard gizmo is actively occurring, typically upon the input device clicking and dragging the Standard gizmo. \n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoInterfaces.h" },
		{ "ToolTip", "* Updates the interacting state of the specified gizmo part, indicating when interaction with the\n* Standard gizmo is actively occurring, typically upon the input device clicking and dragging the Standard gizmo." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateInteractingState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGizmoClickMultiTarget, nullptr, "UpdateInteractingState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateInteractingState_Statics::GizmoClickMultiTarget_eventUpdateInteractingState_Parms), Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateInteractingState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateInteractingState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateInteractingState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateInteractingState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateInteractingState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateInteractingState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoClickMultiTarget);
	UClass* Z_Construct_UClass_UGizmoClickMultiTarget_NoRegister()
	{
		return UGizmoClickMultiTarget::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoClickMultiTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoClickMultiTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGizmoClickMultiTarget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateHittableState, "UpdateHittableState" }, // 2637979212
		{ &Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateHoverState, "UpdateHoverState" }, // 2333997249
		{ &Z_Construct_UFunction_UGizmoClickMultiTarget_UpdateInteractingState, "UpdateInteractingState" }, // 2194708893
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoClickMultiTarget_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoInterfaces.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoClickMultiTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGizmoClickMultiTarget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoClickMultiTarget_Statics::ClassParams = {
		&UGizmoClickMultiTarget::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoClickMultiTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoClickMultiTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoClickMultiTarget()
	{
		if (!Z_Registration_Info_UClass_UGizmoClickMultiTarget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoClickMultiTarget.OuterSingleton, Z_Construct_UClass_UGizmoClickMultiTarget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGizmoClickMultiTarget.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoClickMultiTarget>()
	{
		return UGizmoClickMultiTarget::StaticClass();
	}
	UGizmoClickMultiTarget::UGizmoClickMultiTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoClickMultiTarget);
	UGizmoClickMultiTarget::~UGizmoClickMultiTarget() {}
	void UGizmoRenderTarget::StaticRegisterNativesUGizmoRenderTarget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoRenderTarget);
	UClass* Z_Construct_UClass_UGizmoRenderTarget_NoRegister()
	{
		return UGizmoRenderTarget::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoRenderTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoRenderTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoRenderTarget_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoInterfaces.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoRenderTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGizmoRenderTarget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoRenderTarget_Statics::ClassParams = {
		&UGizmoRenderTarget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoRenderTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoRenderTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoRenderTarget()
	{
		if (!Z_Registration_Info_UClass_UGizmoRenderTarget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoRenderTarget.OuterSingleton, Z_Construct_UClass_UGizmoRenderTarget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGizmoRenderTarget.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoRenderTarget>()
	{
		return UGizmoRenderTarget::StaticClass();
	}
	UGizmoRenderTarget::UGizmoRenderTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoRenderTarget);
	UGizmoRenderTarget::~UGizmoRenderTarget() {}
	DEFINE_FUNCTION(IGizmoRenderMultiTarget::execUpdateVisibilityState)
	{
		P_GET_UBOOL(Z_Param_bVisible);
		P_GET_PROPERTY(FUInt32Property,Z_Param_InPartIdentifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateVisibilityState(Z_Param_bVisible,Z_Param_InPartIdentifier);
		P_NATIVE_END;
	}
	void UGizmoRenderMultiTarget::StaticRegisterNativesUGizmoRenderMultiTarget()
	{
		UClass* Class = UGizmoRenderMultiTarget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateVisibilityState", &IGizmoRenderMultiTarget::execUpdateVisibilityState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGizmoRenderMultiTarget_UpdateVisibilityState_Statics
	{
		struct GizmoRenderMultiTarget_eventUpdateVisibilityState_Parms
		{
			bool bVisible;
			uint32 InPartIdentifier;
		};
		static void NewProp_bVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisible;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_InPartIdentifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGizmoRenderMultiTarget_UpdateVisibilityState_Statics::NewProp_bVisible_SetBit(void* Obj)
	{
		((GizmoRenderMultiTarget_eventUpdateVisibilityState_Parms*)Obj)->bVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGizmoRenderMultiTarget_UpdateVisibilityState_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GizmoRenderMultiTarget_eventUpdateVisibilityState_Parms), &Z_Construct_UFunction_UGizmoRenderMultiTarget_UpdateVisibilityState_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_UGizmoRenderMultiTarget_UpdateVisibilityState_Statics::NewProp_InPartIdentifier = { "InPartIdentifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GizmoRenderMultiTarget_eventUpdateVisibilityState_Parms, InPartIdentifier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGizmoRenderMultiTarget_UpdateVisibilityState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGizmoRenderMultiTarget_UpdateVisibilityState_Statics::NewProp_bVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGizmoRenderMultiTarget_UpdateVisibilityState_Statics::NewProp_InPartIdentifier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGizmoRenderMultiTarget_UpdateVisibilityState_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09 * Updates the visibility state of the specified gizmo part.\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoInterfaces.h" },
		{ "ToolTip", "* Updates the visibility state of the specified gizmo part." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGizmoRenderMultiTarget_UpdateVisibilityState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGizmoRenderMultiTarget, nullptr, "UpdateVisibilityState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGizmoRenderMultiTarget_UpdateVisibilityState_Statics::GizmoRenderMultiTarget_eventUpdateVisibilityState_Parms), Z_Construct_UFunction_UGizmoRenderMultiTarget_UpdateVisibilityState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoRenderMultiTarget_UpdateVisibilityState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGizmoRenderMultiTarget_UpdateVisibilityState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoRenderMultiTarget_UpdateVisibilityState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGizmoRenderMultiTarget_UpdateVisibilityState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGizmoRenderMultiTarget_UpdateVisibilityState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoRenderMultiTarget);
	UClass* Z_Construct_UClass_UGizmoRenderMultiTarget_NoRegister()
	{
		return UGizmoRenderMultiTarget::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoRenderMultiTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoRenderMultiTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGizmoRenderMultiTarget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGizmoRenderMultiTarget_UpdateVisibilityState, "UpdateVisibilityState" }, // 833751222
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoRenderMultiTarget_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoInterfaces.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoRenderMultiTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGizmoRenderMultiTarget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoRenderMultiTarget_Statics::ClassParams = {
		&UGizmoRenderMultiTarget::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoRenderMultiTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoRenderMultiTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoRenderMultiTarget()
	{
		if (!Z_Registration_Info_UClass_UGizmoRenderMultiTarget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoRenderMultiTarget.OuterSingleton, Z_Construct_UClass_UGizmoRenderMultiTarget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGizmoRenderMultiTarget.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoRenderMultiTarget>()
	{
		return UGizmoRenderMultiTarget::StaticClass();
	}
	UGizmoRenderMultiTarget::UGizmoRenderMultiTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoRenderMultiTarget);
	UGizmoRenderMultiTarget::~UGizmoRenderMultiTarget() {}
	DEFINE_FUNCTION(IGizmoStateTarget::execEndUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndUpdate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGizmoStateTarget::execBeginUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginUpdate();
		P_NATIVE_END;
	}
	void UGizmoStateTarget::StaticRegisterNativesUGizmoStateTarget()
	{
		UClass* Class = UGizmoStateTarget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginUpdate", &IGizmoStateTarget::execBeginUpdate },
			{ "EndUpdate", &IGizmoStateTarget::execEndUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGizmoStateTarget_BeginUpdate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGizmoStateTarget_BeginUpdate_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * BeginUpdate is called before a standard Gizmo begins changing a parameter (via a ParameterSource)\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoInterfaces.h" },
		{ "ToolTip", "BeginUpdate is called before a standard Gizmo begins changing a parameter (via a ParameterSource)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGizmoStateTarget_BeginUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGizmoStateTarget, nullptr, "BeginUpdate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGizmoStateTarget_BeginUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoStateTarget_BeginUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGizmoStateTarget_BeginUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGizmoStateTarget_BeginUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGizmoStateTarget_EndUpdate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGizmoStateTarget_EndUpdate_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * EndUpdate is called when a standard Gizmo is finished changing a parameter (via a ParameterSource)\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoInterfaces.h" },
		{ "ToolTip", "EndUpdate is called when a standard Gizmo is finished changing a parameter (via a ParameterSource)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGizmoStateTarget_EndUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGizmoStateTarget, nullptr, "EndUpdate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGizmoStateTarget_EndUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoStateTarget_EndUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGizmoStateTarget_EndUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGizmoStateTarget_EndUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoStateTarget);
	UClass* Z_Construct_UClass_UGizmoStateTarget_NoRegister()
	{
		return UGizmoStateTarget::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoStateTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoStateTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGizmoStateTarget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGizmoStateTarget_BeginUpdate, "BeginUpdate" }, // 3157532909
		{ &Z_Construct_UFunction_UGizmoStateTarget_EndUpdate, "EndUpdate" }, // 4157902871
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoStateTarget_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoInterfaces.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoStateTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGizmoStateTarget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoStateTarget_Statics::ClassParams = {
		&UGizmoStateTarget::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoStateTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoStateTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoStateTarget()
	{
		if (!Z_Registration_Info_UClass_UGizmoStateTarget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoStateTarget.OuterSingleton, Z_Construct_UClass_UGizmoStateTarget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGizmoStateTarget.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoStateTarget>()
	{
		return UGizmoStateTarget::StaticClass();
	}
	UGizmoStateTarget::UGizmoStateTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoStateTarget);
	UGizmoStateTarget::~UGizmoStateTarget() {}
	DEFINE_FUNCTION(IGizmoFloatParameterSource::execEndModify)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndModify();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGizmoFloatParameterSource::execSetParameter)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetParameter(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGizmoFloatParameterSource::execBeginModify)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginModify();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGizmoFloatParameterSource::execGetParameter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetParameter();
		P_NATIVE_END;
	}
	void UGizmoFloatParameterSource::StaticRegisterNativesUGizmoFloatParameterSource()
	{
		UClass* Class = UGizmoFloatParameterSource::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginModify", &IGizmoFloatParameterSource::execBeginModify },
			{ "EndModify", &IGizmoFloatParameterSource::execEndModify },
			{ "GetParameter", &IGizmoFloatParameterSource::execGetParameter },
			{ "SetParameter", &IGizmoFloatParameterSource::execSetParameter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGizmoFloatParameterSource_BeginModify_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGizmoFloatParameterSource_BeginModify_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** notify ParameterSource that a parameter modification is about to begin */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoInterfaces.h" },
		{ "ToolTip", "notify ParameterSource that a parameter modification is about to begin" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGizmoFloatParameterSource_BeginModify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGizmoFloatParameterSource, nullptr, "BeginModify", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGizmoFloatParameterSource_BeginModify_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoFloatParameterSource_BeginModify_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGizmoFloatParameterSource_BeginModify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGizmoFloatParameterSource_BeginModify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGizmoFloatParameterSource_EndModify_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGizmoFloatParameterSource_EndModify_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** notify ParameterSource that a parameter modification is complete */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoInterfaces.h" },
		{ "ToolTip", "notify ParameterSource that a parameter modification is complete" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGizmoFloatParameterSource_EndModify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGizmoFloatParameterSource, nullptr, "EndModify", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGizmoFloatParameterSource_EndModify_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoFloatParameterSource_EndModify_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGizmoFloatParameterSource_EndModify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGizmoFloatParameterSource_EndModify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGizmoFloatParameterSource_GetParameter_Statics
	{
		struct GizmoFloatParameterSource_eventGetParameter_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGizmoFloatParameterSource_GetParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GizmoFloatParameterSource_eventGetParameter_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGizmoFloatParameterSource_GetParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGizmoFloatParameterSource_GetParameter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGizmoFloatParameterSource_GetParameter_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** @return value of parameter */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoInterfaces.h" },
		{ "ToolTip", "@return value of parameter" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGizmoFloatParameterSource_GetParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGizmoFloatParameterSource, nullptr, "GetParameter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGizmoFloatParameterSource_GetParameter_Statics::GizmoFloatParameterSource_eventGetParameter_Parms), Z_Construct_UFunction_UGizmoFloatParameterSource_GetParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoFloatParameterSource_GetParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGizmoFloatParameterSource_GetParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoFloatParameterSource_GetParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGizmoFloatParameterSource_GetParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGizmoFloatParameterSource_GetParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGizmoFloatParameterSource_SetParameter_Statics
	{
		struct GizmoFloatParameterSource_eventSetParameter_Parms
		{
			float NewValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGizmoFloatParameterSource_SetParameter_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GizmoFloatParameterSource_eventSetParameter_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGizmoFloatParameterSource_SetParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGizmoFloatParameterSource_SetParameter_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGizmoFloatParameterSource_SetParameter_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** set value of parameter */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoInterfaces.h" },
		{ "ToolTip", "set value of parameter" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGizmoFloatParameterSource_SetParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGizmoFloatParameterSource, nullptr, "SetParameter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGizmoFloatParameterSource_SetParameter_Statics::GizmoFloatParameterSource_eventSetParameter_Parms), Z_Construct_UFunction_UGizmoFloatParameterSource_SetParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoFloatParameterSource_SetParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGizmoFloatParameterSource_SetParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoFloatParameterSource_SetParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGizmoFloatParameterSource_SetParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGizmoFloatParameterSource_SetParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoFloatParameterSource);
	UClass* Z_Construct_UClass_UGizmoFloatParameterSource_NoRegister()
	{
		return UGizmoFloatParameterSource::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoFloatParameterSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoFloatParameterSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGizmoFloatParameterSource_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGizmoFloatParameterSource_BeginModify, "BeginModify" }, // 542815465
		{ &Z_Construct_UFunction_UGizmoFloatParameterSource_EndModify, "EndModify" }, // 1024422434
		{ &Z_Construct_UFunction_UGizmoFloatParameterSource_GetParameter, "GetParameter" }, // 146531129
		{ &Z_Construct_UFunction_UGizmoFloatParameterSource_SetParameter, "SetParameter" }, // 2386015839
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoFloatParameterSource_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoInterfaces.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoFloatParameterSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGizmoFloatParameterSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoFloatParameterSource_Statics::ClassParams = {
		&UGizmoFloatParameterSource::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoFloatParameterSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoFloatParameterSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoFloatParameterSource()
	{
		if (!Z_Registration_Info_UClass_UGizmoFloatParameterSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoFloatParameterSource.OuterSingleton, Z_Construct_UClass_UGizmoFloatParameterSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGizmoFloatParameterSource.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoFloatParameterSource>()
	{
		return UGizmoFloatParameterSource::StaticClass();
	}
	UGizmoFloatParameterSource::UGizmoFloatParameterSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoFloatParameterSource);
	UGizmoFloatParameterSource::~UGizmoFloatParameterSource() {}
	DEFINE_FUNCTION(IGizmoVec2ParameterSource::execEndModify)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndModify();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGizmoVec2ParameterSource::execSetParameter)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetParameter(Z_Param_Out_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGizmoVec2ParameterSource::execBeginModify)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginModify();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGizmoVec2ParameterSource::execGetParameter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetParameter();
		P_NATIVE_END;
	}
	void UGizmoVec2ParameterSource::StaticRegisterNativesUGizmoVec2ParameterSource()
	{
		UClass* Class = UGizmoVec2ParameterSource::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginModify", &IGizmoVec2ParameterSource::execBeginModify },
			{ "EndModify", &IGizmoVec2ParameterSource::execEndModify },
			{ "GetParameter", &IGizmoVec2ParameterSource::execGetParameter },
			{ "SetParameter", &IGizmoVec2ParameterSource::execSetParameter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGizmoVec2ParameterSource_BeginModify_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGizmoVec2ParameterSource_BeginModify_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** notify ParameterSource that a parameter modification is about to begin */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoInterfaces.h" },
		{ "ToolTip", "notify ParameterSource that a parameter modification is about to begin" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGizmoVec2ParameterSource_BeginModify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGizmoVec2ParameterSource, nullptr, "BeginModify", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGizmoVec2ParameterSource_BeginModify_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoVec2ParameterSource_BeginModify_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGizmoVec2ParameterSource_BeginModify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGizmoVec2ParameterSource_BeginModify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGizmoVec2ParameterSource_EndModify_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGizmoVec2ParameterSource_EndModify_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** notify ParameterSource that a parameter modification is complete */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoInterfaces.h" },
		{ "ToolTip", "notify ParameterSource that a parameter modification is complete" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGizmoVec2ParameterSource_EndModify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGizmoVec2ParameterSource, nullptr, "EndModify", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGizmoVec2ParameterSource_EndModify_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoVec2ParameterSource_EndModify_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGizmoVec2ParameterSource_EndModify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGizmoVec2ParameterSource_EndModify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGizmoVec2ParameterSource_GetParameter_Statics
	{
		struct GizmoVec2ParameterSource_eventGetParameter_Parms
		{
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGizmoVec2ParameterSource_GetParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GizmoVec2ParameterSource_eventGetParameter_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGizmoVec2ParameterSource_GetParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGizmoVec2ParameterSource_GetParameter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGizmoVec2ParameterSource_GetParameter_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** @return value of parameter */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoInterfaces.h" },
		{ "ToolTip", "@return value of parameter" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGizmoVec2ParameterSource_GetParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGizmoVec2ParameterSource, nullptr, "GetParameter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGizmoVec2ParameterSource_GetParameter_Statics::GizmoVec2ParameterSource_eventGetParameter_Parms), Z_Construct_UFunction_UGizmoVec2ParameterSource_GetParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoVec2ParameterSource_GetParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGizmoVec2ParameterSource_GetParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoVec2ParameterSource_GetParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGizmoVec2ParameterSource_GetParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGizmoVec2ParameterSource_GetParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGizmoVec2ParameterSource_SetParameter_Statics
	{
		struct GizmoVec2ParameterSource_eventSetParameter_Parms
		{
			FVector2D NewValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGizmoVec2ParameterSource_SetParameter_Statics::NewProp_NewValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGizmoVec2ParameterSource_SetParameter_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GizmoVec2ParameterSource_eventSetParameter_Parms, NewValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UGizmoVec2ParameterSource_SetParameter_Statics::NewProp_NewValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoVec2ParameterSource_SetParameter_Statics::NewProp_NewValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGizmoVec2ParameterSource_SetParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGizmoVec2ParameterSource_SetParameter_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGizmoVec2ParameterSource_SetParameter_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** set value of parameter */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoInterfaces.h" },
		{ "ToolTip", "set value of parameter" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGizmoVec2ParameterSource_SetParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGizmoVec2ParameterSource, nullptr, "SetParameter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGizmoVec2ParameterSource_SetParameter_Statics::GizmoVec2ParameterSource_eventSetParameter_Parms), Z_Construct_UFunction_UGizmoVec2ParameterSource_SetParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoVec2ParameterSource_SetParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGizmoVec2ParameterSource_SetParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoVec2ParameterSource_SetParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGizmoVec2ParameterSource_SetParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGizmoVec2ParameterSource_SetParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoVec2ParameterSource);
	UClass* Z_Construct_UClass_UGizmoVec2ParameterSource_NoRegister()
	{
		return UGizmoVec2ParameterSource::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoVec2ParameterSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoVec2ParameterSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGizmoVec2ParameterSource_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGizmoVec2ParameterSource_BeginModify, "BeginModify" }, // 1042857877
		{ &Z_Construct_UFunction_UGizmoVec2ParameterSource_EndModify, "EndModify" }, // 2880816531
		{ &Z_Construct_UFunction_UGizmoVec2ParameterSource_GetParameter, "GetParameter" }, // 1424101889
		{ &Z_Construct_UFunction_UGizmoVec2ParameterSource_SetParameter, "SetParameter" }, // 4286716209
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoVec2ParameterSource_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoInterfaces.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoVec2ParameterSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGizmoVec2ParameterSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoVec2ParameterSource_Statics::ClassParams = {
		&UGizmoVec2ParameterSource::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoVec2ParameterSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoVec2ParameterSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoVec2ParameterSource()
	{
		if (!Z_Registration_Info_UClass_UGizmoVec2ParameterSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoVec2ParameterSource.OuterSingleton, Z_Construct_UClass_UGizmoVec2ParameterSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGizmoVec2ParameterSource.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoVec2ParameterSource>()
	{
		return UGizmoVec2ParameterSource::StaticClass();
	}
	UGizmoVec2ParameterSource::UGizmoVec2ParameterSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoVec2ParameterSource);
	UGizmoVec2ParameterSource::~UGizmoVec2ParameterSource() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGizmoTransformSource, UGizmoTransformSource::StaticClass, TEXT("UGizmoTransformSource"), &Z_Registration_Info_UClass_UGizmoTransformSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoTransformSource), 2029107895U) },
		{ Z_Construct_UClass_UGizmoAxisSource, UGizmoAxisSource::StaticClass, TEXT("UGizmoAxisSource"), &Z_Registration_Info_UClass_UGizmoAxisSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoAxisSource), 3604796101U) },
		{ Z_Construct_UClass_UGizmoClickTarget, UGizmoClickTarget::StaticClass, TEXT("UGizmoClickTarget"), &Z_Registration_Info_UClass_UGizmoClickTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoClickTarget), 3567146117U) },
		{ Z_Construct_UClass_UGizmoClickMultiTarget, UGizmoClickMultiTarget::StaticClass, TEXT("UGizmoClickMultiTarget"), &Z_Registration_Info_UClass_UGizmoClickMultiTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoClickMultiTarget), 3930136021U) },
		{ Z_Construct_UClass_UGizmoRenderTarget, UGizmoRenderTarget::StaticClass, TEXT("UGizmoRenderTarget"), &Z_Registration_Info_UClass_UGizmoRenderTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoRenderTarget), 4046122099U) },
		{ Z_Construct_UClass_UGizmoRenderMultiTarget, UGizmoRenderMultiTarget::StaticClass, TEXT("UGizmoRenderMultiTarget"), &Z_Registration_Info_UClass_UGizmoRenderMultiTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoRenderMultiTarget), 3454083895U) },
		{ Z_Construct_UClass_UGizmoStateTarget, UGizmoStateTarget::StaticClass, TEXT("UGizmoStateTarget"), &Z_Registration_Info_UClass_UGizmoStateTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoStateTarget), 1620912124U) },
		{ Z_Construct_UClass_UGizmoFloatParameterSource, UGizmoFloatParameterSource::StaticClass, TEXT("UGizmoFloatParameterSource"), &Z_Registration_Info_UClass_UGizmoFloatParameterSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoFloatParameterSource), 918597738U) },
		{ Z_Construct_UClass_UGizmoVec2ParameterSource, UGizmoVec2ParameterSource::StaticClass, TEXT("UGizmoVec2ParameterSource"), &Z_Registration_Info_UClass_UGizmoVec2ParameterSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoVec2ParameterSource), 252723469U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_1914504948(TEXT("/Script/InteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
