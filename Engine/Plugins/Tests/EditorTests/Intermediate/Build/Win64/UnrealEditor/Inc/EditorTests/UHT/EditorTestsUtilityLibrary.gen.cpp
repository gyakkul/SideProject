// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/EditorTestsUtilityLibrary.h"
#include "../../Source/Runtime/Engine/Classes/Engine/MeshMerging.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorTestsUtilityLibrary() {}
// Cross Module References
	EDITORTESTS_API UClass* Z_Construct_UClass_UEditorTestsUtilityLibrary();
	EDITORTESTS_API UClass* Z_Construct_UClass_UEditorTestsUtilityLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshMergingSettings();
	MATERIALBAKING_API UClass* Z_Construct_UClass_UMaterialMergeOptions_NoRegister();
	MATERIALBAKING_API UClass* Z_Construct_UClass_UMaterialOptions_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EditorTests();
// End Cross Module References
	DEFINE_FUNCTION(UEditorTestsUtilityLibrary::execMergeStaticMeshComponents)
	{
		P_GET_TARRAY(UStaticMeshComponent*,Z_Param_InStaticMeshComponents);
		P_GET_STRUCT_REF(FMeshMergingSettings,Z_Param_Out_MergeSettings);
		P_GET_UBOOL(Z_Param_bReplaceActors);
		P_GET_TARRAY_REF(int32,Z_Param_Out_OutLODIndices);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEditorTestsUtilityLibrary::MergeStaticMeshComponents(Z_Param_InStaticMeshComponents,Z_Param_Out_MergeSettings,Z_Param_bReplaceActors,Z_Param_Out_OutLODIndices);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorTestsUtilityLibrary::execBakeMaterialsForComponent)
	{
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_InStaticMeshComponent);
		P_GET_OBJECT(UMaterialOptions,Z_Param_MaterialOptions);
		P_GET_OBJECT(UMaterialMergeOptions,Z_Param_MaterialMergeOptions);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEditorTestsUtilityLibrary::BakeMaterialsForComponent(Z_Param_InStaticMeshComponent,Z_Param_MaterialOptions,Z_Param_MaterialMergeOptions);
		P_NATIVE_END;
	}
	void UEditorTestsUtilityLibrary::StaticRegisterNativesUEditorTestsUtilityLibrary()
	{
		UClass* Class = UEditorTestsUtilityLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BakeMaterialsForComponent", &UEditorTestsUtilityLibrary::execBakeMaterialsForComponent },
			{ "MergeStaticMeshComponents", &UEditorTestsUtilityLibrary::execMergeStaticMeshComponents },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEditorTestsUtilityLibrary_BakeMaterialsForComponent_Statics
	{
		struct EditorTestsUtilityLibrary_eventBakeMaterialsForComponent_Parms
		{
			UStaticMeshComponent* InStaticMeshComponent;
			const UMaterialOptions* MaterialOptions;
			const UMaterialMergeOptions* MaterialMergeOptions;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InStaticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InStaticMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialOptions_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialMergeOptions_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialMergeOptions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorTestsUtilityLibrary_BakeMaterialsForComponent_Statics::NewProp_InStaticMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorTestsUtilityLibrary_BakeMaterialsForComponent_Statics::NewProp_InStaticMeshComponent = { "InStaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorTestsUtilityLibrary_eventBakeMaterialsForComponent_Parms, InStaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEditorTestsUtilityLibrary_BakeMaterialsForComponent_Statics::NewProp_InStaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorTestsUtilityLibrary_BakeMaterialsForComponent_Statics::NewProp_InStaticMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorTestsUtilityLibrary_BakeMaterialsForComponent_Statics::NewProp_MaterialOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorTestsUtilityLibrary_BakeMaterialsForComponent_Statics::NewProp_MaterialOptions = { "MaterialOptions", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorTestsUtilityLibrary_eventBakeMaterialsForComponent_Parms, MaterialOptions), Z_Construct_UClass_UMaterialOptions_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEditorTestsUtilityLibrary_BakeMaterialsForComponent_Statics::NewProp_MaterialOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorTestsUtilityLibrary_BakeMaterialsForComponent_Statics::NewProp_MaterialOptions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorTestsUtilityLibrary_BakeMaterialsForComponent_Statics::NewProp_MaterialMergeOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorTestsUtilityLibrary_BakeMaterialsForComponent_Statics::NewProp_MaterialMergeOptions = { "MaterialMergeOptions", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorTestsUtilityLibrary_eventBakeMaterialsForComponent_Parms, MaterialMergeOptions), Z_Construct_UClass_UMaterialMergeOptions_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEditorTestsUtilityLibrary_BakeMaterialsForComponent_Statics::NewProp_MaterialMergeOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorTestsUtilityLibrary_BakeMaterialsForComponent_Statics::NewProp_MaterialMergeOptions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorTestsUtilityLibrary_BakeMaterialsForComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorTestsUtilityLibrary_BakeMaterialsForComponent_Statics::NewProp_InStaticMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorTestsUtilityLibrary_BakeMaterialsForComponent_Statics::NewProp_MaterialOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorTestsUtilityLibrary_BakeMaterialsForComponent_Statics::NewProp_MaterialMergeOptions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorTestsUtilityLibrary_BakeMaterialsForComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshMergingLibrary|Test" },
		{ "Comment", "/** Bakes out material in-place for the given set of static mesh components using the MaterialMergeOptions */" },
		{ "ModuleRelativePath", "Public/EditorTestsUtilityLibrary.h" },
		{ "ToolTip", "Bakes out material in-place for the given set of static mesh components using the MaterialMergeOptions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorTestsUtilityLibrary_BakeMaterialsForComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorTestsUtilityLibrary, nullptr, "BakeMaterialsForComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorTestsUtilityLibrary_BakeMaterialsForComponent_Statics::EditorTestsUtilityLibrary_eventBakeMaterialsForComponent_Parms), Z_Construct_UFunction_UEditorTestsUtilityLibrary_BakeMaterialsForComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorTestsUtilityLibrary_BakeMaterialsForComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorTestsUtilityLibrary_BakeMaterialsForComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorTestsUtilityLibrary_BakeMaterialsForComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorTestsUtilityLibrary_BakeMaterialsForComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorTestsUtilityLibrary_BakeMaterialsForComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorTestsUtilityLibrary_MergeStaticMeshComponents_Statics
	{
		struct EditorTestsUtilityLibrary_eventMergeStaticMeshComponents_Parms
		{
			TArray<UStaticMeshComponent*> InStaticMeshComponents;
			FMeshMergingSettings MergeSettings;
			bool bReplaceActors;
			TArray<int32> OutLODIndices;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InStaticMeshComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InStaticMeshComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InStaticMeshComponents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MergeSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MergeSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReplaceActors_MetaData[];
#endif
		static void NewProp_bReplaceActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplaceActors;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutLODIndices_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutLODIndices;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorTestsUtilityLibrary_MergeStaticMeshComponents_Statics::NewProp_InStaticMeshComponents_Inner = { "InStaticMeshComponents", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorTestsUtilityLibrary_MergeStaticMeshComponents_Statics::NewProp_InStaticMeshComponents_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorTestsUtilityLibrary_MergeStaticMeshComponents_Statics::NewProp_InStaticMeshComponents = { "InStaticMeshComponents", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorTestsUtilityLibrary_eventMergeStaticMeshComponents_Parms, InStaticMeshComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEditorTestsUtilityLibrary_MergeStaticMeshComponents_Statics::NewProp_InStaticMeshComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorTestsUtilityLibrary_MergeStaticMeshComponents_Statics::NewProp_InStaticMeshComponents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorTestsUtilityLibrary_MergeStaticMeshComponents_Statics::NewProp_MergeSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorTestsUtilityLibrary_MergeStaticMeshComponents_Statics::NewProp_MergeSettings = { "MergeSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorTestsUtilityLibrary_eventMergeStaticMeshComponents_Parms, MergeSettings), Z_Construct_UScriptStruct_FMeshMergingSettings, METADATA_PARAMS(Z_Construct_UFunction_UEditorTestsUtilityLibrary_MergeStaticMeshComponents_Statics::NewProp_MergeSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorTestsUtilityLibrary_MergeStaticMeshComponents_Statics::NewProp_MergeSettings_MetaData)) }; // 1528135240
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorTestsUtilityLibrary_MergeStaticMeshComponents_Statics::NewProp_bReplaceActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UEditorTestsUtilityLibrary_MergeStaticMeshComponents_Statics::NewProp_bReplaceActors_SetBit(void* Obj)
	{
		((EditorTestsUtilityLibrary_eventMergeStaticMeshComponents_Parms*)Obj)->bReplaceActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorTestsUtilityLibrary_MergeStaticMeshComponents_Statics::NewProp_bReplaceActors = { "bReplaceActors", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorTestsUtilityLibrary_eventMergeStaticMeshComponents_Parms), &Z_Construct_UFunction_UEditorTestsUtilityLibrary_MergeStaticMeshComponents_Statics::NewProp_bReplaceActors_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UEditorTestsUtilityLibrary_MergeStaticMeshComponents_Statics::NewProp_bReplaceActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorTestsUtilityLibrary_MergeStaticMeshComponents_Statics::NewProp_bReplaceActors_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorTestsUtilityLibrary_MergeStaticMeshComponents_Statics::NewProp_OutLODIndices_Inner = { "OutLODIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorTestsUtilityLibrary_MergeStaticMeshComponents_Statics::NewProp_OutLODIndices = { "OutLODIndices", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorTestsUtilityLibrary_eventMergeStaticMeshComponents_Parms, OutLODIndices), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorTestsUtilityLibrary_MergeStaticMeshComponents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorTestsUtilityLibrary_MergeStaticMeshComponents_Statics::NewProp_InStaticMeshComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorTestsUtilityLibrary_MergeStaticMeshComponents_Statics::NewProp_InStaticMeshComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorTestsUtilityLibrary_MergeStaticMeshComponents_Statics::NewProp_MergeSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorTestsUtilityLibrary_MergeStaticMeshComponents_Statics::NewProp_bReplaceActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorTestsUtilityLibrary_MergeStaticMeshComponents_Statics::NewProp_OutLODIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorTestsUtilityLibrary_MergeStaticMeshComponents_Statics::NewProp_OutLODIndices,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorTestsUtilityLibrary_MergeStaticMeshComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeshMergingLibrary|Test" },
		{ "Comment", "/** Merges meshes and bakes out materials into a atlas-material for the given set of static mesh components using the MergeSettings */" },
		{ "ModuleRelativePath", "Public/EditorTestsUtilityLibrary.h" },
		{ "ToolTip", "Merges meshes and bakes out materials into a atlas-material for the given set of static mesh components using the MergeSettings" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorTestsUtilityLibrary_MergeStaticMeshComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorTestsUtilityLibrary, nullptr, "MergeStaticMeshComponents", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorTestsUtilityLibrary_MergeStaticMeshComponents_Statics::EditorTestsUtilityLibrary_eventMergeStaticMeshComponents_Parms), Z_Construct_UFunction_UEditorTestsUtilityLibrary_MergeStaticMeshComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorTestsUtilityLibrary_MergeStaticMeshComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorTestsUtilityLibrary_MergeStaticMeshComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorTestsUtilityLibrary_MergeStaticMeshComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorTestsUtilityLibrary_MergeStaticMeshComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorTestsUtilityLibrary_MergeStaticMeshComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorTestsUtilityLibrary);
	UClass* Z_Construct_UClass_UEditorTestsUtilityLibrary_NoRegister()
	{
		return UEditorTestsUtilityLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UEditorTestsUtilityLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorTestsUtilityLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorTests,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEditorTestsUtilityLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEditorTestsUtilityLibrary_BakeMaterialsForComponent, "BakeMaterialsForComponent" }, // 1547831065
		{ &Z_Construct_UFunction_UEditorTestsUtilityLibrary_MergeStaticMeshComponents, "MergeStaticMeshComponents" }, // 3617697894
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorTestsUtilityLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Blueprint library for altering and analyzing animation / skeletal data */" },
		{ "IncludePath", "EditorTestsUtilityLibrary.h" },
		{ "ModuleRelativePath", "Public/EditorTestsUtilityLibrary.h" },
		{ "ToolTip", "Blueprint library for altering and analyzing animation / skeletal data" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorTestsUtilityLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorTestsUtilityLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorTestsUtilityLibrary_Statics::ClassParams = {
		&UEditorTestsUtilityLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEditorTestsUtilityLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorTestsUtilityLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorTestsUtilityLibrary()
	{
		if (!Z_Registration_Info_UClass_UEditorTestsUtilityLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorTestsUtilityLibrary.OuterSingleton, Z_Construct_UClass_UEditorTestsUtilityLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorTestsUtilityLibrary.OuterSingleton;
	}
	template<> EDITORTESTS_API UClass* StaticClass<UEditorTestsUtilityLibrary>()
	{
		return UEditorTestsUtilityLibrary::StaticClass();
	}
	UEditorTestsUtilityLibrary::UEditorTestsUtilityLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorTestsUtilityLibrary);
	UEditorTestsUtilityLibrary::~UEditorTestsUtilityLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Public_EditorTestsUtilityLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Public_EditorTestsUtilityLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorTestsUtilityLibrary, UEditorTestsUtilityLibrary::StaticClass, TEXT("UEditorTestsUtilityLibrary"), &Z_Registration_Info_UClass_UEditorTestsUtilityLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorTestsUtilityLibrary), 3200449108U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Public_EditorTestsUtilityLibrary_h_2747419237(TEXT("/Script/EditorTests"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Public_EditorTestsUtilityLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Public_EditorTestsUtilityLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
