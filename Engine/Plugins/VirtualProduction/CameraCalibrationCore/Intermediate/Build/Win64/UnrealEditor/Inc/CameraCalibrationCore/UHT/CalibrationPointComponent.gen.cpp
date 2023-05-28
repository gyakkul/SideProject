// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CalibrationPointComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCalibrationPointComponent() {}
// Cross Module References
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_UCalibrationPointComponent();
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_UCalibrationPointComponent_NoRegister();
	CAMERACALIBRATIONCORE_API UEnum* Z_Construct_UEnum_CameraCalibrationCore_ECalibrationPointVisualization();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent();
	UPackage* Z_Construct_UPackage__Script_CameraCalibrationCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECalibrationPointVisualization;
	static UEnum* ECalibrationPointVisualization_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECalibrationPointVisualization.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECalibrationPointVisualization.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CameraCalibrationCore_ECalibrationPointVisualization, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationCore(), TEXT("ECalibrationPointVisualization"));
		}
		return Z_Registration_Info_UEnum_ECalibrationPointVisualization.OuterSingleton;
	}
	template<> CAMERACALIBRATIONCORE_API UEnum* StaticEnum<ECalibrationPointVisualization>()
	{
		return ECalibrationPointVisualization_StaticEnum();
	}
	struct Z_Construct_UEnum_CameraCalibrationCore_ECalibrationPointVisualization_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CameraCalibrationCore_ECalibrationPointVisualization_Statics::Enumerators[] = {
		{ "CalibrationPointVisualizationCube", (int64)CalibrationPointVisualizationCube },
		{ "CalibrationPointVisualizationPyramid", (int64)CalibrationPointVisualizationPyramid },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CameraCalibrationCore_ECalibrationPointVisualization_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CalibrationPointVisualizationCube.DisplayName", "Cubes" },
		{ "CalibrationPointVisualizationCube.Name", "CalibrationPointVisualizationCube" },
		{ "CalibrationPointVisualizationPyramid.DisplayName", "Pyramids" },
		{ "CalibrationPointVisualizationPyramid.Name", "CalibrationPointVisualizationPyramid" },
		{ "Comment", "/** Ways of visualizing the calibration points */" },
		{ "ModuleRelativePath", "Public/CalibrationPointComponent.h" },
		{ "ToolTip", "Ways of visualizing the calibration points" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CameraCalibrationCore_ECalibrationPointVisualization_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
		nullptr,
		"ECalibrationPointVisualization",
		"ECalibrationPointVisualization",
		Z_Construct_UEnum_CameraCalibrationCore_ECalibrationPointVisualization_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CameraCalibrationCore_ECalibrationPointVisualization_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_CameraCalibrationCore_ECalibrationPointVisualization_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CameraCalibrationCore_ECalibrationPointVisualization_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CameraCalibrationCore_ECalibrationPointVisualization()
	{
		if (!Z_Registration_Info_UEnum_ECalibrationPointVisualization.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECalibrationPointVisualization.InnerSingleton, Z_Construct_UEnum_CameraCalibrationCore_ECalibrationPointVisualization_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECalibrationPointVisualization.InnerSingleton;
	}
	DEFINE_FUNCTION(UCalibrationPointComponent::execRebuildVertices)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RebuildVertices();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCalibrationPointComponent::execGetNamespacedPointNames)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutNamespacedNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetNamespacedPointNames(Z_Param_Out_OutNamespacedNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCalibrationPointComponent::execNamespacedSubpointName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InSubpointName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutNamespacedName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->NamespacedSubpointName(Z_Param_InSubpointName,Z_Param_Out_OutNamespacedName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCalibrationPointComponent::execGetWorldLocation)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InPointName);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetWorldLocation(Z_Param_InPointName,Z_Param_Out_OutLocation);
		P_NATIVE_END;
	}
	void UCalibrationPointComponent::StaticRegisterNativesUCalibrationPointComponent()
	{
		UClass* Class = UCalibrationPointComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNamespacedPointNames", &UCalibrationPointComponent::execGetNamespacedPointNames },
			{ "GetWorldLocation", &UCalibrationPointComponent::execGetWorldLocation },
			{ "NamespacedSubpointName", &UCalibrationPointComponent::execNamespacedSubpointName },
			{ "RebuildVertices", &UCalibrationPointComponent::execRebuildVertices },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCalibrationPointComponent_GetNamespacedPointNames_Statics
	{
		struct CalibrationPointComponent_eventGetNamespacedPointNames_Parms
		{
			TArray<FString> OutNamespacedNames;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutNamespacedNames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutNamespacedNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCalibrationPointComponent_GetNamespacedPointNames_Statics::NewProp_OutNamespacedNames_Inner = { "OutNamespacedNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCalibrationPointComponent_GetNamespacedPointNames_Statics::NewProp_OutNamespacedNames = { "OutNamespacedNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CalibrationPointComponent_eventGetNamespacedPointNames_Parms, OutNamespacedNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCalibrationPointComponent_GetNamespacedPointNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCalibrationPointComponent_GetNamespacedPointNames_Statics::NewProp_OutNamespacedNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCalibrationPointComponent_GetNamespacedPointNames_Statics::NewProp_OutNamespacedNames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCalibrationPointComponent_GetNamespacedPointNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Calibration" },
		{ "Comment", "/** \n\x09 * Gathers the namespaced names of the subpoints and the component itself.\n\x09 * \n\x09 * @param OutNamespacedNames Array of names to be filled out by this function. Will not empty it.\n\x09 */" },
		{ "ModuleRelativePath", "Public/CalibrationPointComponent.h" },
		{ "ToolTip", "Gathers the namespaced names of the subpoints and the component itself.\n\n@param OutNamespacedNames Array of names to be filled out by this function. Will not empty it." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCalibrationPointComponent_GetNamespacedPointNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCalibrationPointComponent, nullptr, "GetNamespacedPointNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCalibrationPointComponent_GetNamespacedPointNames_Statics::CalibrationPointComponent_eventGetNamespacedPointNames_Parms), Z_Construct_UFunction_UCalibrationPointComponent_GetNamespacedPointNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCalibrationPointComponent_GetNamespacedPointNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCalibrationPointComponent_GetNamespacedPointNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCalibrationPointComponent_GetNamespacedPointNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCalibrationPointComponent_GetNamespacedPointNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCalibrationPointComponent_GetNamespacedPointNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCalibrationPointComponent_GetWorldLocation_Statics
	{
		struct CalibrationPointComponent_eventGetWorldLocation_Parms
		{
			FString InPointName;
			FVector OutLocation;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPointName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InPointName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutLocation;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCalibrationPointComponent_GetWorldLocation_Statics::NewProp_InPointName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCalibrationPointComponent_GetWorldLocation_Statics::NewProp_InPointName = { "InPointName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CalibrationPointComponent_eventGetWorldLocation_Parms, InPointName), METADATA_PARAMS(Z_Construct_UFunction_UCalibrationPointComponent_GetWorldLocation_Statics::NewProp_InPointName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCalibrationPointComponent_GetWorldLocation_Statics::NewProp_InPointName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCalibrationPointComponent_GetWorldLocation_Statics::NewProp_OutLocation = { "OutLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CalibrationPointComponent_eventGetWorldLocation_Parms, OutLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCalibrationPointComponent_GetWorldLocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CalibrationPointComponent_eventGetWorldLocation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCalibrationPointComponent_GetWorldLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CalibrationPointComponent_eventGetWorldLocation_Parms), &Z_Construct_UFunction_UCalibrationPointComponent_GetWorldLocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCalibrationPointComponent_GetWorldLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCalibrationPointComponent_GetWorldLocation_Statics::NewProp_InPointName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCalibrationPointComponent_GetWorldLocation_Statics::NewProp_OutLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCalibrationPointComponent_GetWorldLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCalibrationPointComponent_GetWorldLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Calibration" },
		{ "Comment", "/** \n\x09 * Returns the World location of the subpoint (or the component) specified by name \n\x09 * \n\x09 * @param InPointName Name of the point or subpoint. If not namespaced the component name will have priority over subpoint name.\n\x09 * @param OutLocation World location of the specified subpoint.\n\x09 * \n\x09 * @return True if successful.\n\x09 */" },
		{ "ModuleRelativePath", "Public/CalibrationPointComponent.h" },
		{ "ToolTip", "Returns the World location of the subpoint (or the component) specified by name\n\n@param InPointName Name of the point or subpoint. If not namespaced the component name will have priority over subpoint name.\n@param OutLocation World location of the specified subpoint.\n\n@return True if successful." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCalibrationPointComponent_GetWorldLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCalibrationPointComponent, nullptr, "GetWorldLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCalibrationPointComponent_GetWorldLocation_Statics::CalibrationPointComponent_eventGetWorldLocation_Parms), Z_Construct_UFunction_UCalibrationPointComponent_GetWorldLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCalibrationPointComponent_GetWorldLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCalibrationPointComponent_GetWorldLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCalibrationPointComponent_GetWorldLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCalibrationPointComponent_GetWorldLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCalibrationPointComponent_GetWorldLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCalibrationPointComponent_NamespacedSubpointName_Statics
	{
		struct CalibrationPointComponent_eventNamespacedSubpointName_Parms
		{
			FString InSubpointName;
			FString OutNamespacedName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSubpointName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InSubpointName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutNamespacedName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCalibrationPointComponent_NamespacedSubpointName_Statics::NewProp_InSubpointName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCalibrationPointComponent_NamespacedSubpointName_Statics::NewProp_InSubpointName = { "InSubpointName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CalibrationPointComponent_eventNamespacedSubpointName_Parms, InSubpointName), METADATA_PARAMS(Z_Construct_UFunction_UCalibrationPointComponent_NamespacedSubpointName_Statics::NewProp_InSubpointName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCalibrationPointComponent_NamespacedSubpointName_Statics::NewProp_InSubpointName_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCalibrationPointComponent_NamespacedSubpointName_Statics::NewProp_OutNamespacedName = { "OutNamespacedName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CalibrationPointComponent_eventNamespacedSubpointName_Parms, OutNamespacedName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCalibrationPointComponent_NamespacedSubpointName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CalibrationPointComponent_eventNamespacedSubpointName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCalibrationPointComponent_NamespacedSubpointName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CalibrationPointComponent_eventNamespacedSubpointName_Parms), &Z_Construct_UFunction_UCalibrationPointComponent_NamespacedSubpointName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCalibrationPointComponent_NamespacedSubpointName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCalibrationPointComponent_NamespacedSubpointName_Statics::NewProp_InSubpointName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCalibrationPointComponent_NamespacedSubpointName_Statics::NewProp_OutNamespacedName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCalibrationPointComponent_NamespacedSubpointName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCalibrationPointComponent_NamespacedSubpointName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Calibration" },
		{ "Comment", "/**\n\x09 * Namespaces the given subpoint name. Does not check that the subpoint exists.\n\x09 * \n\x09 * @param InSubpointName Name of the subpoint to namespace\n\x09 * @param OutNamespacedName The output namespaced subpoint name\n\x09 * \n\x09 * @return True if successful\n\x09 */" },
		{ "ModuleRelativePath", "Public/CalibrationPointComponent.h" },
		{ "ToolTip", "Namespaces the given subpoint name. Does not check that the subpoint exists.\n\n@param InSubpointName Name of the subpoint to namespace\n@param OutNamespacedName The output namespaced subpoint name\n\n@return True if successful" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCalibrationPointComponent_NamespacedSubpointName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCalibrationPointComponent, nullptr, "NamespacedSubpointName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCalibrationPointComponent_NamespacedSubpointName_Statics::CalibrationPointComponent_eventNamespacedSubpointName_Parms), Z_Construct_UFunction_UCalibrationPointComponent_NamespacedSubpointName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCalibrationPointComponent_NamespacedSubpointName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCalibrationPointComponent_NamespacedSubpointName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCalibrationPointComponent_NamespacedSubpointName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCalibrationPointComponent_NamespacedSubpointName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCalibrationPointComponent_NamespacedSubpointName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCalibrationPointComponent_RebuildVertices_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCalibrationPointComponent_RebuildVertices_Statics::Function_MetaDataParams[] = {
		{ "Category", "Calibration" },
		{ "Comment", "/** Rebuilds the point visualization. */" },
		{ "ModuleRelativePath", "Public/CalibrationPointComponent.h" },
		{ "ToolTip", "Rebuilds the point visualization." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCalibrationPointComponent_RebuildVertices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCalibrationPointComponent, nullptr, "RebuildVertices", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCalibrationPointComponent_RebuildVertices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCalibrationPointComponent_RebuildVertices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCalibrationPointComponent_RebuildVertices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCalibrationPointComponent_RebuildVertices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCalibrationPointComponent);
	UClass* Z_Construct_UClass_UCalibrationPointComponent_NoRegister()
	{
		return UCalibrationPointComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCalibrationPointComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubPoints_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SubPoints_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubPoints_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SubPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVisualizePointsInEditor_MetaData[];
#endif
		static void NewProp_bVisualizePointsInEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisualizePointsInEditor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointVisualizationScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PointVisualizationScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisualizationShape_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_VisualizationShape;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCalibrationPointComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UProceduralMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCalibrationPointComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCalibrationPointComponent_GetNamespacedPointNames, "GetNamespacedPointNames" }, // 3787808634
		{ &Z_Construct_UFunction_UCalibrationPointComponent_GetWorldLocation, "GetWorldLocation" }, // 1509097409
		{ &Z_Construct_UFunction_UCalibrationPointComponent_NamespacedSubpointName, "NamespacedSubpointName" }, // 3194176941
		{ &Z_Construct_UFunction_UCalibrationPointComponent_RebuildVertices, "RebuildVertices" }, // 208264394
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCalibrationPointComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Calibration" },
		{ "Comment", "/**\n * One or more instances of this component can be added to an actor (e.g. a static mesh actor blueprint), \n * and should be placed at geometrically and visually distinct landmarks of the object.\n * These 3d points will then be optionally used by any given nodal offset tool implementation to\n * make a 3d-2d correspondence with the 2d points detected in the live action media.\n */" },
		{ "DisplayName", "Calibration Point" },
		{ "HideCategories", "Object LOD Mobility Trigger" },
		{ "IncludePath", "CalibrationPointComponent.h" },
		{ "ModuleRelativePath", "Public/CalibrationPointComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "One or more instances of this component can be added to an actor (e.g. a static mesh actor blueprint),\nand should be placed at geometrically and visually distinct landmarks of the object.\nThese 3d points will then be optionally used by any given nodal offset tool implementation to\nmake a 3d-2d correspondence with the 2d points detected in the live action media." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCalibrationPointComponent_Statics::NewProp_SubPoints_ValueProp = { "SubPoints", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCalibrationPointComponent_Statics::NewProp_SubPoints_Key_KeyProp = { "SubPoints_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCalibrationPointComponent_Statics::NewProp_SubPoints_MetaData[] = {
		{ "Category", "Calibration" },
		{ "Comment", "/** A way to group many points in a single component */" },
		{ "ModuleRelativePath", "Public/CalibrationPointComponent.h" },
		{ "ToolTip", "A way to group many points in a single component" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCalibrationPointComponent_Statics::NewProp_SubPoints = { "SubPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCalibrationPointComponent, SubPoints), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCalibrationPointComponent_Statics::NewProp_SubPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCalibrationPointComponent_Statics::NewProp_SubPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCalibrationPointComponent_Statics::NewProp_bVisualizePointsInEditor_MetaData[] = {
		{ "Category", "Calibration" },
		{ "Comment", "/** Draws a visual representation of the calibration points */" },
		{ "ModuleRelativePath", "Public/CalibrationPointComponent.h" },
		{ "ToolTip", "Draws a visual representation of the calibration points" },
	};
#endif
	void Z_Construct_UClass_UCalibrationPointComponent_Statics::NewProp_bVisualizePointsInEditor_SetBit(void* Obj)
	{
		((UCalibrationPointComponent*)Obj)->bVisualizePointsInEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCalibrationPointComponent_Statics::NewProp_bVisualizePointsInEditor = { "bVisualizePointsInEditor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCalibrationPointComponent), &Z_Construct_UClass_UCalibrationPointComponent_Statics::NewProp_bVisualizePointsInEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCalibrationPointComponent_Statics::NewProp_bVisualizePointsInEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCalibrationPointComponent_Statics::NewProp_bVisualizePointsInEditor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCalibrationPointComponent_Statics::NewProp_PointVisualizationScale_MetaData[] = {
		{ "Category", "Calibration" },
		{ "Comment", "/** Scales up/down the size of the point visualization meshes */" },
		{ "ModuleRelativePath", "Public/CalibrationPointComponent.h" },
		{ "ToolTip", "Scales up/down the size of the point visualization meshes" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCalibrationPointComponent_Statics::NewProp_PointVisualizationScale = { "PointVisualizationScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCalibrationPointComponent, PointVisualizationScale), METADATA_PARAMS(Z_Construct_UClass_UCalibrationPointComponent_Statics::NewProp_PointVisualizationScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCalibrationPointComponent_Statics::NewProp_PointVisualizationScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCalibrationPointComponent_Statics::NewProp_VisualizationShape_MetaData[] = {
		{ "Category", "Calibration" },
		{ "Comment", "/** Shape used to visualize the calibration (sub)points */" },
		{ "ModuleRelativePath", "Public/CalibrationPointComponent.h" },
		{ "ToolTip", "Shape used to visualize the calibration (sub)points" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCalibrationPointComponent_Statics::NewProp_VisualizationShape = { "VisualizationShape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCalibrationPointComponent, VisualizationShape), Z_Construct_UEnum_CameraCalibrationCore_ECalibrationPointVisualization, METADATA_PARAMS(Z_Construct_UClass_UCalibrationPointComponent_Statics::NewProp_VisualizationShape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCalibrationPointComponent_Statics::NewProp_VisualizationShape_MetaData)) }; // 1196565117
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCalibrationPointComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCalibrationPointComponent_Statics::NewProp_SubPoints_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCalibrationPointComponent_Statics::NewProp_SubPoints_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCalibrationPointComponent_Statics::NewProp_SubPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCalibrationPointComponent_Statics::NewProp_bVisualizePointsInEditor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCalibrationPointComponent_Statics::NewProp_PointVisualizationScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCalibrationPointComponent_Statics::NewProp_VisualizationShape,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCalibrationPointComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCalibrationPointComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCalibrationPointComponent_Statics::ClassParams = {
		&UCalibrationPointComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCalibrationPointComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCalibrationPointComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCalibrationPointComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCalibrationPointComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCalibrationPointComponent()
	{
		if (!Z_Registration_Info_UClass_UCalibrationPointComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCalibrationPointComponent.OuterSingleton, Z_Construct_UClass_UCalibrationPointComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCalibrationPointComponent.OuterSingleton;
	}
	template<> CAMERACALIBRATIONCORE_API UClass* StaticClass<UCalibrationPointComponent>()
	{
		return UCalibrationPointComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCalibrationPointComponent);
	UCalibrationPointComponent::~UCalibrationPointComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CalibrationPointComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CalibrationPointComponent_h_Statics::EnumInfo[] = {
		{ ECalibrationPointVisualization_StaticEnum, TEXT("ECalibrationPointVisualization"), &Z_Registration_Info_UEnum_ECalibrationPointVisualization, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1196565117U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CalibrationPointComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCalibrationPointComponent, UCalibrationPointComponent::StaticClass, TEXT("UCalibrationPointComponent"), &Z_Registration_Info_UClass_UCalibrationPointComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCalibrationPointComponent), 1631132622U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CalibrationPointComponent_h_1110353285(TEXT("/Script/CameraCalibrationCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CalibrationPointComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CalibrationPointComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CalibrationPointComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CalibrationPointComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
