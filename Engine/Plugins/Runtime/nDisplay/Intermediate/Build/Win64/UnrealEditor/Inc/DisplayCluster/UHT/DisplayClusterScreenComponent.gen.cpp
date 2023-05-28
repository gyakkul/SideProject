// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/DisplayClusterScreenComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterScreenComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterScreenComponent();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterScreenComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_DisplayCluster();
// End Cross Module References
	DEFINE_FUNCTION(UDisplayClusterScreenComponent::execSetScreenSize)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Size);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScreenSize(Z_Param_Out_Size);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDisplayClusterScreenComponent::execGetScreenSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetScreenSize();
		P_NATIVE_END;
	}
	void UDisplayClusterScreenComponent::StaticRegisterNativesUDisplayClusterScreenComponent()
	{
		UClass* Class = UDisplayClusterScreenComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetScreenSize", &UDisplayClusterScreenComponent::execGetScreenSize },
			{ "SetScreenSize", &UDisplayClusterScreenComponent::execSetScreenSize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDisplayClusterScreenComponent_GetScreenSize_Statics
	{
		struct DisplayClusterScreenComponent_eventGetScreenSize_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDisplayClusterScreenComponent_GetScreenSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterScreenComponent_eventGetScreenSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayClusterScreenComponent_GetScreenSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterScreenComponent_GetScreenSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterScreenComponent_GetScreenSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDisplay" },
		{ "Comment", "/** Return the screen size adjusted by its transform scale. */" },
		{ "DisplayName", "Get screen size" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterScreenComponent.h" },
		{ "ToolTip", "Return the screen size adjusted by its transform scale." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayClusterScreenComponent_GetScreenSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayClusterScreenComponent, nullptr, "GetScreenSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDisplayClusterScreenComponent_GetScreenSize_Statics::DisplayClusterScreenComponent_eventGetScreenSize_Parms), Z_Construct_UFunction_UDisplayClusterScreenComponent_GetScreenSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterScreenComponent_GetScreenSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterScreenComponent_GetScreenSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterScreenComponent_GetScreenSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDisplayClusterScreenComponent_GetScreenSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDisplayClusterScreenComponent_GetScreenSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDisplayClusterScreenComponent_SetScreenSize_Statics
	{
		struct DisplayClusterScreenComponent_eventSetScreenSize_Parms
		{
			FVector2D Size;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterScreenComponent_SetScreenSize_Statics::NewProp_Size_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDisplayClusterScreenComponent_SetScreenSize_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterScreenComponent_eventSetScreenSize_Parms, Size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterScreenComponent_SetScreenSize_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterScreenComponent_SetScreenSize_Statics::NewProp_Size_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayClusterScreenComponent_SetScreenSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterScreenComponent_SetScreenSize_Statics::NewProp_Size,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterScreenComponent_SetScreenSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDisplay" },
		{ "Comment", "/** Set screen size (update transform scale). */" },
		{ "DisplayName", "Set screen size" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterScreenComponent.h" },
		{ "ToolTip", "Set screen size (update transform scale)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayClusterScreenComponent_SetScreenSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayClusterScreenComponent, nullptr, "SetScreenSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDisplayClusterScreenComponent_SetScreenSize_Statics::DisplayClusterScreenComponent_eventSetScreenSize_Parms), Z_Construct_UFunction_UDisplayClusterScreenComponent_SetScreenSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterScreenComponent_SetScreenSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterScreenComponent_SetScreenSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterScreenComponent_SetScreenSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDisplayClusterScreenComponent_SetScreenSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDisplayClusterScreenComponent_SetScreenSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplayClusterScreenComponent);
	UClass* Z_Construct_UClass_UDisplayClusterScreenComponent_NoRegister()
	{
		return UDisplayClusterScreenComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayClusterScreenComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayClusterScreenComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayCluster,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDisplayClusterScreenComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDisplayClusterScreenComponent_GetScreenSize, "GetScreenSize" }, // 3837465126
		{ &Z_Construct_UFunction_UDisplayClusterScreenComponent_SetScreenSize, "SetScreenSize" }, // 3684585386
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterScreenComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "DisplayCluster" },
		{ "Comment", "/**\n * Simple projection policy screen component\n */" },
		{ "DisplayName", "NDisplay Screen" },
		{ "HideCategories", "StaticMesh Materials ComponentTick Physics Collision Lighting Navigation VirtualTexture ComponentReplication Cooking LOD MaterialParameters HLOD RayTracing TextureStreaming Mobile Object Activation Components|Activation Trigger" },
		{ "IncludePath", "Components/DisplayClusterScreenComponent.h" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterScreenComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Simple projection policy screen component" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterScreenComponent_Statics::NewProp_Size_MetaData[] = {
		{ "AllowPreserveRatio", "" },
		{ "Category", "Screen Size" },
		{ "Comment", "/** Adjust the size of the screen. */" },
		{ "DisplayName", "Size" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterScreenComponent.h" },
		{ "ToolTip", "Adjust the size of the screen." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplayClusterScreenComponent_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0020080800010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterScreenComponent, Size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterScreenComponent_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterScreenComponent_Statics::NewProp_Size_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDisplayClusterScreenComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterScreenComponent_Statics::NewProp_Size,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayClusterScreenComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayClusterScreenComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplayClusterScreenComponent_Statics::ClassParams = {
		&UDisplayClusterScreenComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UDisplayClusterScreenComponent_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterScreenComponent_Statics::PropPointers), 0),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterScreenComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterScreenComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplayClusterScreenComponent()
	{
		if (!Z_Registration_Info_UClass_UDisplayClusterScreenComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplayClusterScreenComponent.OuterSingleton, Z_Construct_UClass_UDisplayClusterScreenComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplayClusterScreenComponent.OuterSingleton;
	}
	template<> DISPLAYCLUSTER_API UClass* StaticClass<UDisplayClusterScreenComponent>()
	{
		return UDisplayClusterScreenComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayClusterScreenComponent);
	UDisplayClusterScreenComponent::~UDisplayClusterScreenComponent() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UDisplayClusterScreenComponent)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterScreenComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterScreenComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDisplayClusterScreenComponent, UDisplayClusterScreenComponent::StaticClass, TEXT("UDisplayClusterScreenComponent"), &Z_Registration_Info_UClass_UDisplayClusterScreenComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplayClusterScreenComponent), 3095524338U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterScreenComponent_h_3620671405(TEXT("/Script/DisplayCluster"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterScreenComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterScreenComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
