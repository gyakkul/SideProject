// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Properties/MeshUVChannelProperties.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshUVChannelProperties() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UMeshUVChannelProperties();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UMeshUVChannelProperties_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MeshModelingTools();
// End Cross Module References
	DEFINE_FUNCTION(UMeshUVChannelProperties::execGetUVChannelNamesFunc)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetUVChannelNamesFunc();
		P_NATIVE_END;
	}
	void UMeshUVChannelProperties::StaticRegisterNativesUMeshUVChannelProperties()
	{
		UClass* Class = UMeshUVChannelProperties::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetUVChannelNamesFunc", &UMeshUVChannelProperties::execGetUVChannelNamesFunc },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMeshUVChannelProperties_GetUVChannelNamesFunc_Statics
	{
		struct MeshUVChannelProperties_eventGetUVChannelNamesFunc_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMeshUVChannelProperties_GetUVChannelNamesFunc_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshUVChannelProperties_GetUVChannelNamesFunc_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshUVChannelProperties_GetUVChannelNamesFunc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MeshUVChannelProperties_eventGetUVChannelNamesFunc_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMeshUVChannelProperties_GetUVChannelNamesFunc_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshUVChannelProperties_GetUVChannelNamesFunc_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshUVChannelProperties_GetUVChannelNamesFunc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshUVChannelProperties_GetUVChannelNamesFunc_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshUVChannelProperties_GetUVChannelNamesFunc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshUVChannelProperties_GetUVChannelNamesFunc_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Properties/MeshUVChannelProperties.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshUVChannelProperties_GetUVChannelNamesFunc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshUVChannelProperties, nullptr, "GetUVChannelNamesFunc", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMeshUVChannelProperties_GetUVChannelNamesFunc_Statics::MeshUVChannelProperties_eventGetUVChannelNamesFunc_Parms), Z_Construct_UFunction_UMeshUVChannelProperties_GetUVChannelNamesFunc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshUVChannelProperties_GetUVChannelNamesFunc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshUVChannelProperties_GetUVChannelNamesFunc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshUVChannelProperties_GetUVChannelNamesFunc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshUVChannelProperties_GetUVChannelNamesFunc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshUVChannelProperties_GetUVChannelNamesFunc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshUVChannelProperties);
	UClass* Z_Construct_UClass_UMeshUVChannelProperties_NoRegister()
	{
		return UMeshUVChannelProperties::StaticClass();
	}
	struct Z_Construct_UClass_UMeshUVChannelProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVChannel_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UVChannel;
		static const UECodeGen_Private::FStrPropertyParams NewProp_UVChannelNamesList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVChannelNamesList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UVChannelNamesList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshUVChannelProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMeshUVChannelProperties_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMeshUVChannelProperties_GetUVChannelNamesFunc, "GetUVChannelNamesFunc" }, // 4039297274
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshUVChannelProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Properties/MeshUVChannelProperties.h" },
		{ "ModuleRelativePath", "Public/Properties/MeshUVChannelProperties.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshUVChannelProperties_Statics::NewProp_UVChannel_MetaData[] = {
		{ "Category", "UV Channel" },
		{ "Comment", "/** Select UV channel in the mesh */" },
		{ "DisplayName", "UV Channel" },
		{ "GetOptions", "GetUVChannelNamesFunc" },
		{ "ModuleRelativePath", "Public/Properties/MeshUVChannelProperties.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Select UV channel in the mesh" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMeshUVChannelProperties_Statics::NewProp_UVChannel = { "UVChannel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshUVChannelProperties, UVChannel), METADATA_PARAMS(Z_Construct_UClass_UMeshUVChannelProperties_Statics::NewProp_UVChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshUVChannelProperties_Statics::NewProp_UVChannel_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMeshUVChannelProperties_Statics::NewProp_UVChannelNamesList_Inner = { "UVChannelNamesList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshUVChannelProperties_Statics::NewProp_UVChannelNamesList_MetaData[] = {
		{ "ModuleRelativePath", "Public/Properties/MeshUVChannelProperties.h" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMeshUVChannelProperties_Statics::NewProp_UVChannelNamesList = { "UVChannelNamesList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshUVChannelProperties, UVChannelNamesList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMeshUVChannelProperties_Statics::NewProp_UVChannelNamesList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshUVChannelProperties_Statics::NewProp_UVChannelNamesList_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshUVChannelProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshUVChannelProperties_Statics::NewProp_UVChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshUVChannelProperties_Statics::NewProp_UVChannelNamesList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshUVChannelProperties_Statics::NewProp_UVChannelNamesList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshUVChannelProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshUVChannelProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshUVChannelProperties_Statics::ClassParams = {
		&UMeshUVChannelProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMeshUVChannelProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeshUVChannelProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshUVChannelProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshUVChannelProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshUVChannelProperties()
	{
		if (!Z_Registration_Info_UClass_UMeshUVChannelProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshUVChannelProperties.OuterSingleton, Z_Construct_UClass_UMeshUVChannelProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshUVChannelProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLS_API UClass* StaticClass<UMeshUVChannelProperties>()
	{
		return UMeshUVChannelProperties::StaticClass();
	}
	UMeshUVChannelProperties::UMeshUVChannelProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshUVChannelProperties);
	UMeshUVChannelProperties::~UMeshUVChannelProperties() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_MeshUVChannelProperties_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_MeshUVChannelProperties_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMeshUVChannelProperties, UMeshUVChannelProperties::StaticClass, TEXT("UMeshUVChannelProperties"), &Z_Registration_Info_UClass_UMeshUVChannelProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshUVChannelProperties), 719730427U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_MeshUVChannelProperties_h_598504966(TEXT("/Script/MeshModelingTools"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_MeshUVChannelProperties_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_MeshUVChannelProperties_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
