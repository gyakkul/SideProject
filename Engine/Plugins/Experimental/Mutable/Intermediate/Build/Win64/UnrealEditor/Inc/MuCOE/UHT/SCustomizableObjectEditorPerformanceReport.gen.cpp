// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/MuCOE/SCustomizableObjectEditorPerformanceReport.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSCustomizableObjectEditorPerformanceReport() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableObjectInstance_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UPerformanceReportHelper();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UPerformanceReportHelper_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UWorstCasePerformanceReportInstance();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UWorstCasePerformanceReportInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectEditor();
// End Cross Module References
	void UWorstCasePerformanceReportInstance::StaticRegisterNativesUWorstCasePerformanceReportInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorstCasePerformanceReportInstance);
	UClass* Z_Construct_UClass_UWorstCasePerformanceReportInstance_NoRegister()
	{
		return UWorstCasePerformanceReportInstance::StaticClass();
	}
	struct Z_Construct_UClass_UWorstCasePerformanceReportInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorstCaseInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WorstCaseInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LOD_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LOD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureBytes_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TextureBytes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumFaces_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumFaces;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UpdateTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LongestUpdateTimeStateIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LongestUpdateTimeStateIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LongestUpdateTimeParameterIndexInCO_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LongestUpdateTimeParameterIndexInCO;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorstCasePerformanceReportInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorstCasePerformanceReportInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Instances performing worst in some aspect\n" },
		{ "IncludePath", "MuCOE/SCustomizableObjectEditorPerformanceReport.h" },
		{ "ModuleRelativePath", "Private/MuCOE/SCustomizableObjectEditorPerformanceReport.h" },
		{ "ToolTip", "Instances performing worst in some aspect" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorstCasePerformanceReportInstance_Statics::NewProp_WorstCaseInstance_MetaData[] = {
		{ "Category", "Stats|PerformanceReport" },
		{ "ColumnWidth", "90" },
		{ "Comment", "/*\"PerformanceReport|BiggestTextureSize\"*/" },
		{ "DisplayName", "Instance" },
		{ "ModuleRelativePath", "Private/MuCOE/SCustomizableObjectEditorPerformanceReport.h" },
		{ "ToolTip", "\"PerformanceReport|BiggestTextureSize\"" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWorstCasePerformanceReportInstance_Statics::NewProp_WorstCaseInstance = { "WorstCaseInstance", nullptr, (EPropertyFlags)0x0014010002022001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorstCasePerformanceReportInstance, WorstCaseInstance), Z_Construct_UClass_UCustomizableObjectInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorstCasePerformanceReportInstance_Statics::NewProp_WorstCaseInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorstCasePerformanceReportInstance_Statics::NewProp_WorstCaseInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorstCasePerformanceReportInstance_Statics::NewProp_LOD_MetaData[] = {
		{ "Category", "Stats|PerformanceReport" },
		{ "ColumnWidth", "10" },
		{ "Comment", "/*\"PerformanceReport|BiggestTextureSize\"*/" },
		{ "DisplayName", "LOD" },
		{ "DisplayRight", "true" },
		{ "ModuleRelativePath", "Private/MuCOE/SCustomizableObjectEditorPerformanceReport.h" },
		{ "ToolTip", "\"PerformanceReport|BiggestTextureSize\"" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWorstCasePerformanceReportInstance_Statics::NewProp_LOD = { "LOD", nullptr, (EPropertyFlags)0x0010010002022001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorstCasePerformanceReportInstance, LOD), METADATA_PARAMS(Z_Construct_UClass_UWorstCasePerformanceReportInstance_Statics::NewProp_LOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorstCasePerformanceReportInstance_Statics::NewProp_LOD_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorstCasePerformanceReportInstance_Statics::NewProp_TextureBytes_MetaData[] = {
		{ "Category", "Stats|PerformanceReport|Texture" },
		{ "ColumnWidth", "60" },
		{ "Comment", "// Total texture memory size that this instance had when the worst case was recorded (currently only relevant when LARGEST_TEXTURE_SIZE)\n" },
		{ "DisplayName", "Textures Total Size" },
		{ "DisplayRight", "true" },
		{ "ModuleRelativePath", "Private/MuCOE/SCustomizableObjectEditorPerformanceReport.h" },
		{ "ToolTip", "Total texture memory size that this instance had when the worst case was recorded (currently only relevant when LARGEST_TEXTURE_SIZE)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWorstCasePerformanceReportInstance_Statics::NewProp_TextureBytes = { "TextureBytes", nullptr, (EPropertyFlags)0x0010010002022001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorstCasePerformanceReportInstance, TextureBytes), METADATA_PARAMS(Z_Construct_UClass_UWorstCasePerformanceReportInstance_Statics::NewProp_TextureBytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorstCasePerformanceReportInstance_Statics::NewProp_TextureBytes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorstCasePerformanceReportInstance_Statics::NewProp_NumFaces_MetaData[] = {
		{ "Category", "Stats|PerformanceReport|Geometry" },
		{ "ColumnWidth", "60" },
		{ "Comment", "// Amount of triangles this instance had when the worst case was recorded (currently only relevant when MOST_TRIANGLES)\n" },
		{ "DisplayName", "Number of Triangles" },
		{ "DisplayRight", "true" },
		{ "ModuleRelativePath", "Private/MuCOE/SCustomizableObjectEditorPerformanceReport.h" },
		{ "ToolTip", "Amount of triangles this instance had when the worst case was recorded (currently only relevant when MOST_TRIANGLES)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWorstCasePerformanceReportInstance_Statics::NewProp_NumFaces = { "NumFaces", nullptr, (EPropertyFlags)0x0010010002022001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorstCasePerformanceReportInstance, NumFaces), METADATA_PARAMS(Z_Construct_UClass_UWorstCasePerformanceReportInstance_Statics::NewProp_NumFaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorstCasePerformanceReportInstance_Statics::NewProp_NumFaces_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorstCasePerformanceReportInstance_Statics::NewProp_UpdateTime_MetaData[] = {
		{ "Category", "Stats|PerformanceReport|Time" },
		{ "ColumnWidth", "60" },
		{ "Comment", "// How long it took this instance to update when the worst case was recorded (currently only relevant when SLOWEST_UPDATE_PARAM_IN_RELEVANT_STATE or SLOWEST_UPDATE_PARAM_IN_RELEVANT_STATE)\n" },
		{ "DisplayName", "Update Time" },
		{ "DisplayRight", "true" },
		{ "ModuleRelativePath", "Private/MuCOE/SCustomizableObjectEditorPerformanceReport.h" },
		{ "ToolTip", "How long it took this instance to update when the worst case was recorded (currently only relevant when SLOWEST_UPDATE_PARAM_IN_RELEVANT_STATE or SLOWEST_UPDATE_PARAM_IN_RELEVANT_STATE)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWorstCasePerformanceReportInstance_Statics::NewProp_UpdateTime = { "UpdateTime", nullptr, (EPropertyFlags)0x0010010002022001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorstCasePerformanceReportInstance, UpdateTime), METADATA_PARAMS(Z_Construct_UClass_UWorstCasePerformanceReportInstance_Statics::NewProp_UpdateTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorstCasePerformanceReportInstance_Statics::NewProp_UpdateTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorstCasePerformanceReportInstance_Statics::NewProp_LongestUpdateTimeStateIndex_MetaData[] = {
		{ "Category", "Stats|PerformanceReport|Time" },
		{ "ColumnWidth", "60" },
		{ "Comment", "// State CO index where this instance took most cycles to update (currently only relevant when SLOWEST_UPDATE_ENTER_STATE or SLOWEST_UPDATE_PARAM_IN_RELEVANT_STATE)\n" },
		{ "DisplayName", "State ID" },
		{ "DisplayRight", "true" },
		{ "ModuleRelativePath", "Private/MuCOE/SCustomizableObjectEditorPerformanceReport.h" },
		{ "ToolTip", "State CO index where this instance took most cycles to update (currently only relevant when SLOWEST_UPDATE_ENTER_STATE or SLOWEST_UPDATE_PARAM_IN_RELEVANT_STATE)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWorstCasePerformanceReportInstance_Statics::NewProp_LongestUpdateTimeStateIndex = { "LongestUpdateTimeStateIndex", nullptr, (EPropertyFlags)0x0010010002022001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorstCasePerformanceReportInstance, LongestUpdateTimeStateIndex), METADATA_PARAMS(Z_Construct_UClass_UWorstCasePerformanceReportInstance_Statics::NewProp_LongestUpdateTimeStateIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorstCasePerformanceReportInstance_Statics::NewProp_LongestUpdateTimeStateIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorstCasePerformanceReportInstance_Statics::NewProp_LongestUpdateTimeParameterIndexInCO_MetaData[] = {
		{ "Category", "Stats|PerformanceReport|Time" },
		{ "ColumnWidth", "60" },
		{ "Comment", "// Parameter CO index where this instance took most cycles to update (currently only relevant when SLOWEST_UPDATE_PARAM_IN_RELEVANT_STATE)\n" },
		{ "DisplayName", "Parameter ID" },
		{ "DisplayRight", "true" },
		{ "ModuleRelativePath", "Private/MuCOE/SCustomizableObjectEditorPerformanceReport.h" },
		{ "ToolTip", "Parameter CO index where this instance took most cycles to update (currently only relevant when SLOWEST_UPDATE_PARAM_IN_RELEVANT_STATE)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWorstCasePerformanceReportInstance_Statics::NewProp_LongestUpdateTimeParameterIndexInCO = { "LongestUpdateTimeParameterIndexInCO", nullptr, (EPropertyFlags)0x0010010002022001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorstCasePerformanceReportInstance, LongestUpdateTimeParameterIndexInCO), METADATA_PARAMS(Z_Construct_UClass_UWorstCasePerformanceReportInstance_Statics::NewProp_LongestUpdateTimeParameterIndexInCO_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorstCasePerformanceReportInstance_Statics::NewProp_LongestUpdateTimeParameterIndexInCO_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorstCasePerformanceReportInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorstCasePerformanceReportInstance_Statics::NewProp_WorstCaseInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorstCasePerformanceReportInstance_Statics::NewProp_LOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorstCasePerformanceReportInstance_Statics::NewProp_TextureBytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorstCasePerformanceReportInstance_Statics::NewProp_NumFaces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorstCasePerformanceReportInstance_Statics::NewProp_UpdateTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorstCasePerformanceReportInstance_Statics::NewProp_LongestUpdateTimeStateIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorstCasePerformanceReportInstance_Statics::NewProp_LongestUpdateTimeParameterIndexInCO,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorstCasePerformanceReportInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorstCasePerformanceReportInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorstCasePerformanceReportInstance_Statics::ClassParams = {
		&UWorstCasePerformanceReportInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWorstCasePerformanceReportInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWorstCasePerformanceReportInstance_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWorstCasePerformanceReportInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorstCasePerformanceReportInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorstCasePerformanceReportInstance()
	{
		if (!Z_Registration_Info_UClass_UWorstCasePerformanceReportInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorstCasePerformanceReportInstance.OuterSingleton, Z_Construct_UClass_UWorstCasePerformanceReportInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorstCasePerformanceReportInstance.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UWorstCasePerformanceReportInstance>()
	{
		return UWorstCasePerformanceReportInstance::StaticClass();
	}
	UWorstCasePerformanceReportInstance::UWorstCasePerformanceReportInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorstCasePerformanceReportInstance);
	UWorstCasePerformanceReportInstance::~UWorstCasePerformanceReportInstance() {}
	DEFINE_FUNCTION(UPerformanceReportHelper::execDelegatedCallback)
	{
		P_GET_OBJECT(UCustomizableObjectInstance,Z_Param_Instance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DelegatedCallback(Z_Param_Instance);
		P_NATIVE_END;
	}
	void UPerformanceReportHelper::StaticRegisterNativesUPerformanceReportHelper()
	{
		UClass* Class = UPerformanceReportHelper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DelegatedCallback", &UPerformanceReportHelper::execDelegatedCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPerformanceReportHelper_DelegatedCallback_Statics
	{
		struct PerformanceReportHelper_eventDelegatedCallback_Parms
		{
			UCustomizableObjectInstance* Instance;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerformanceReportHelper_DelegatedCallback_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PerformanceReportHelper_eventDelegatedCallback_Parms, Instance), Z_Construct_UClass_UCustomizableObjectInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerformanceReportHelper_DelegatedCallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerformanceReportHelper_DelegatedCallback_Statics::NewProp_Instance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerformanceReportHelper_DelegatedCallback_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Method to assign for the callback\n" },
		{ "ModuleRelativePath", "Private/MuCOE/SCustomizableObjectEditorPerformanceReport.h" },
		{ "ToolTip", "Method to assign for the callback" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerformanceReportHelper_DelegatedCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerformanceReportHelper, nullptr, "DelegatedCallback", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPerformanceReportHelper_DelegatedCallback_Statics::PerformanceReportHelper_eventDelegatedCallback_Parms), Z_Construct_UFunction_UPerformanceReportHelper_DelegatedCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerformanceReportHelper_DelegatedCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerformanceReportHelper_DelegatedCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerformanceReportHelper_DelegatedCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerformanceReportHelper_DelegatedCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPerformanceReportHelper_DelegatedCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPerformanceReportHelper);
	UClass* Z_Construct_UClass_UPerformanceReportHelper_NoRegister()
	{
		return UPerformanceReportHelper::StaticClass();
	}
	struct Z_Construct_UClass_UPerformanceReportHelper_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPerformanceReportHelper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPerformanceReportHelper_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPerformanceReportHelper_DelegatedCallback, "DelegatedCallback" }, // 110563432
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerformanceReportHelper_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuCOE/SCustomizableObjectEditorPerformanceReport.h" },
		{ "ModuleRelativePath", "Private/MuCOE/SCustomizableObjectEditorPerformanceReport.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPerformanceReportHelper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPerformanceReportHelper>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPerformanceReportHelper_Statics::ClassParams = {
		&UPerformanceReportHelper::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPerformanceReportHelper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPerformanceReportHelper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPerformanceReportHelper()
	{
		if (!Z_Registration_Info_UClass_UPerformanceReportHelper.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPerformanceReportHelper.OuterSingleton, Z_Construct_UClass_UPerformanceReportHelper_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPerformanceReportHelper.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UPerformanceReportHelper>()
	{
		return UPerformanceReportHelper::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPerformanceReportHelper);
	UPerformanceReportHelper::~UPerformanceReportHelper() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_SCustomizableObjectEditorPerformanceReport_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_SCustomizableObjectEditorPerformanceReport_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWorstCasePerformanceReportInstance, UWorstCasePerformanceReportInstance::StaticClass, TEXT("UWorstCasePerformanceReportInstance"), &Z_Registration_Info_UClass_UWorstCasePerformanceReportInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorstCasePerformanceReportInstance), 1927328929U) },
		{ Z_Construct_UClass_UPerformanceReportHelper, UPerformanceReportHelper::StaticClass, TEXT("UPerformanceReportHelper"), &Z_Registration_Info_UClass_UPerformanceReportHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPerformanceReportHelper), 3688932843U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_SCustomizableObjectEditorPerformanceReport_h_2269106463(TEXT("/Script/CustomizableObjectEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_SCustomizableObjectEditorPerformanceReport_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_SCustomizableObjectEditorPerformanceReport_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
