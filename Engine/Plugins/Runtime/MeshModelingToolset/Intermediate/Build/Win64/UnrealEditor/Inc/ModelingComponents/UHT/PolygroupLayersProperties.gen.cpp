// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PropertySets/PolygroupLayersProperties.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePolygroupLayersProperties() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPolygroupLayersProperties();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPolygroupLayersProperties_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References
	DEFINE_FUNCTION(UPolygroupLayersProperties::execGetGroupLayersFunc)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetGroupLayersFunc();
		P_NATIVE_END;
	}
	void UPolygroupLayersProperties::StaticRegisterNativesUPolygroupLayersProperties()
	{
		UClass* Class = UPolygroupLayersProperties::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGroupLayersFunc", &UPolygroupLayersProperties::execGetGroupLayersFunc },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPolygroupLayersProperties_GetGroupLayersFunc_Statics
	{
		struct PolygroupLayersProperties_eventGetGroupLayersFunc_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPolygroupLayersProperties_GetGroupLayersFunc_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPolygroupLayersProperties_GetGroupLayersFunc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PolygroupLayersProperties_eventGetGroupLayersFunc_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolygroupLayersProperties_GetGroupLayersFunc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolygroupLayersProperties_GetGroupLayersFunc_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolygroupLayersProperties_GetGroupLayersFunc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolygroupLayersProperties_GetGroupLayersFunc_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Provides set of available group layers\n" },
		{ "ModuleRelativePath", "Public/PropertySets/PolygroupLayersProperties.h" },
		{ "ToolTip", "Provides set of available group layers" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolygroupLayersProperties_GetGroupLayersFunc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolygroupLayersProperties, nullptr, "GetGroupLayersFunc", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPolygroupLayersProperties_GetGroupLayersFunc_Statics::PolygroupLayersProperties_eventGetGroupLayersFunc_Parms), Z_Construct_UFunction_UPolygroupLayersProperties_GetGroupLayersFunc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolygroupLayersProperties_GetGroupLayersFunc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolygroupLayersProperties_GetGroupLayersFunc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolygroupLayersProperties_GetGroupLayersFunc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolygroupLayersProperties_GetGroupLayersFunc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolygroupLayersProperties_GetGroupLayersFunc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPolygroupLayersProperties);
	UClass* Z_Construct_UClass_UPolygroupLayersProperties_NoRegister()
	{
		return UPolygroupLayersProperties::StaticClass();
	}
	struct Z_Construct_UClass_UPolygroupLayersProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveGroupLayer_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActiveGroupLayer;
		static const UECodeGen_Private::FStrPropertyParams NewProp_GroupLayersList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupLayersList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GroupLayersList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPolygroupLayersProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPolygroupLayersProperties_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPolygroupLayersProperties_GetGroupLayersFunc, "GetGroupLayersFunc" }, // 4091010787
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolygroupLayersProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Basic Tool Property Set that allows for selecting from a list of FNames (that we assume are Polygroup Layers)\n */" },
		{ "IncludePath", "PropertySets/PolygroupLayersProperties.h" },
		{ "ModuleRelativePath", "Public/PropertySets/PolygroupLayersProperties.h" },
		{ "ToolTip", "Basic Tool Property Set that allows for selecting from a list of FNames (that we assume are Polygroup Layers)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolygroupLayersProperties_Statics::NewProp_ActiveGroupLayer_MetaData[] = {
		{ "Category", "PolyGroup Layer" },
		{ "Comment", "/** Select PolyGroup layer to use. */" },
		{ "DisplayName", "Active PolyGroup" },
		{ "GetOptions", "GetGroupLayersFunc" },
		{ "ModuleRelativePath", "Public/PropertySets/PolygroupLayersProperties.h" },
		{ "ToolTip", "Select PolyGroup layer to use." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPolygroupLayersProperties_Statics::NewProp_ActiveGroupLayer = { "ActiveGroupLayer", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPolygroupLayersProperties, ActiveGroupLayer), METADATA_PARAMS(Z_Construct_UClass_UPolygroupLayersProperties_Statics::NewProp_ActiveGroupLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPolygroupLayersProperties_Statics::NewProp_ActiveGroupLayer_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPolygroupLayersProperties_Statics::NewProp_GroupLayersList_Inner = { "GroupLayersList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolygroupLayersProperties_Statics::NewProp_GroupLayersList_MetaData[] = {
		{ "Comment", "// internal list used to implement above\n" },
		{ "ModuleRelativePath", "Public/PropertySets/PolygroupLayersProperties.h" },
		{ "ToolTip", "internal list used to implement above" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPolygroupLayersProperties_Statics::NewProp_GroupLayersList = { "GroupLayersList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPolygroupLayersProperties, GroupLayersList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPolygroupLayersProperties_Statics::NewProp_GroupLayersList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPolygroupLayersProperties_Statics::NewProp_GroupLayersList_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPolygroupLayersProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolygroupLayersProperties_Statics::NewProp_ActiveGroupLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolygroupLayersProperties_Statics::NewProp_GroupLayersList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolygroupLayersProperties_Statics::NewProp_GroupLayersList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPolygroupLayersProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPolygroupLayersProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPolygroupLayersProperties_Statics::ClassParams = {
		&UPolygroupLayersProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPolygroupLayersProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPolygroupLayersProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPolygroupLayersProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPolygroupLayersProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPolygroupLayersProperties()
	{
		if (!Z_Registration_Info_UClass_UPolygroupLayersProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPolygroupLayersProperties.OuterSingleton, Z_Construct_UClass_UPolygroupLayersProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPolygroupLayersProperties.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UClass* StaticClass<UPolygroupLayersProperties>()
	{
		return UPolygroupLayersProperties::StaticClass();
	}
	UPolygroupLayersProperties::UPolygroupLayersProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPolygroupLayersProperties);
	UPolygroupLayersProperties::~UPolygroupLayersProperties() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_PolygroupLayersProperties_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_PolygroupLayersProperties_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPolygroupLayersProperties, UPolygroupLayersProperties::StaticClass, TEXT("UPolygroupLayersProperties"), &Z_Registration_Info_UClass_UPolygroupLayersProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPolygroupLayersProperties), 3293207587U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_PolygroupLayersProperties_h_3232636120(TEXT("/Script/ModelingComponents"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_PolygroupLayersProperties_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_PolygroupLayersProperties_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
