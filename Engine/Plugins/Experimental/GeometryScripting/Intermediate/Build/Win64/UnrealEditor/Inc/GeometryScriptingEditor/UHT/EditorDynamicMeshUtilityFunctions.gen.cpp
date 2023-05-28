// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryScript/EditorDynamicMeshUtilityFunctions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorDynamicMeshUtilityFunctions() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMesh_NoRegister();
	GEOMETRYSCRIPTINGEDITOR_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_EditorDynamicMeshFunctions();
	GEOMETRYSCRIPTINGEDITOR_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_EditorDynamicMeshFunctions_NoRegister();
	GEOMETRYSCRIPTINGEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDynamicMeshChangeContainer();
	UPackage* Z_Construct_UPackage__Script_GeometryScriptingEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DynamicMeshChangeContainer;
class UScriptStruct* FDynamicMeshChangeContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DynamicMeshChangeContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DynamicMeshChangeContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDynamicMeshChangeContainer, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingEditor(), TEXT("DynamicMeshChangeContainer"));
	}
	return Z_Registration_Info_UScriptStruct_DynamicMeshChangeContainer.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGEDITOR_API UScriptStruct* StaticStruct<FDynamicMeshChangeContainer>()
{
	return FDynamicMeshChangeContainer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDynamicMeshChangeContainer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDynamicMeshChangeContainer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FDynamicMeshChangeContainer is a temporary struct usable in Blueprints to\n * emit \"change\" transactions for a UDynamicMesh. The internals are hidden\n * and this type is only intended to be used with the BeginTrackedMeshChange()\n * and EmitTrackedMeshChange() functions\n */" },
		{ "DisplayName", "Dynamic Mesh ChangeTracker" },
		{ "ModuleRelativePath", "Public/GeometryScript/EditorDynamicMeshUtilityFunctions.h" },
		{ "ToolTip", "FDynamicMeshChangeContainer is a temporary struct usable in Blueprints to\nemit \"change\" transactions for a UDynamicMesh. The internals are hidden\nand this type is only intended to be used with the BeginTrackedMeshChange()\nand EmitTrackedMeshChange() functions" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDynamicMeshChangeContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDynamicMeshChangeContainer>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDynamicMeshChangeContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingEditor,
		nullptr,
		&NewStructOps,
		"DynamicMeshChangeContainer",
		sizeof(FDynamicMeshChangeContainer),
		alignof(FDynamicMeshChangeContainer),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDynamicMeshChangeContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicMeshChangeContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDynamicMeshChangeContainer()
	{
		if (!Z_Registration_Info_UScriptStruct_DynamicMeshChangeContainer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DynamicMeshChangeContainer.InnerSingleton, Z_Construct_UScriptStruct_FDynamicMeshChangeContainer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DynamicMeshChangeContainer.InnerSingleton;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_EditorDynamicMeshFunctions::execEmitTrackedMeshChange)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT_REF(FDynamicMeshChangeContainer,Z_Param_Out_ChangeTracker);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_EditorDynamicMeshFunctions::EmitTrackedMeshChange(Z_Param_TargetMesh,Z_Param_Out_ChangeTracker);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_EditorDynamicMeshFunctions::execBeginTrackedMeshChange)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT_REF(FDynamicMeshChangeContainer,Z_Param_Out_ChangeTracker);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_EditorDynamicMeshFunctions::BeginTrackedMeshChange(Z_Param_TargetMesh,Z_Param_Out_ChangeTracker);
		P_NATIVE_END;
	}
	void UGeometryScriptLibrary_EditorDynamicMeshFunctions::StaticRegisterNativesUGeometryScriptLibrary_EditorDynamicMeshFunctions()
	{
		UClass* Class = UGeometryScriptLibrary_EditorDynamicMeshFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginTrackedMeshChange", &UGeometryScriptLibrary_EditorDynamicMeshFunctions::execBeginTrackedMeshChange },
			{ "EmitTrackedMeshChange", &UGeometryScriptLibrary_EditorDynamicMeshFunctions::execEmitTrackedMeshChange },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_BeginTrackedMeshChange_Statics
	{
		struct GeometryScriptLibrary_EditorDynamicMeshFunctions_eventBeginTrackedMeshChange_Parms
		{
			UDynamicMesh* TargetMesh;
			FDynamicMeshChangeContainer ChangeTracker;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChangeTracker;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_BeginTrackedMeshChange_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_EditorDynamicMeshFunctions_eventBeginTrackedMeshChange_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_BeginTrackedMeshChange_Statics::NewProp_ChangeTracker = { "ChangeTracker", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_EditorDynamicMeshFunctions_eventBeginTrackedMeshChange_Parms, ChangeTracker), Z_Construct_UScriptStruct_FDynamicMeshChangeContainer, METADATA_PARAMS(nullptr, 0) }; // 3982391854
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_BeginTrackedMeshChange_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Dynamic Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_BeginTrackedMeshChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_EditorDynamicMeshFunctions_eventBeginTrackedMeshChange_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_BeginTrackedMeshChange_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_BeginTrackedMeshChange_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_BeginTrackedMeshChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_BeginTrackedMeshChange_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_BeginTrackedMeshChange_Statics::NewProp_ChangeTracker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_BeginTrackedMeshChange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_BeginTrackedMeshChange_Statics::Function_MetaDataParams[] = {
		{ "Category", "DynamicMesh|Changes" },
		{ "Comment", "/**\n\x09 * Save current state of TargetMesh so that an undoable/redoable Change can be emitted \n\x09 * after TargetMesh is modified, using EmitTrackedMeshChange().\n\x09 * @param ChangeTracker output structure containing initial TargetMesh state\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/EditorDynamicMeshUtilityFunctions.h" },
		{ "ToolTip", "Save current state of TargetMesh so that an undoable/redoable Change can be emitted\nafter TargetMesh is modified, using EmitTrackedMeshChange().\n@param ChangeTracker output structure containing initial TargetMesh state" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_BeginTrackedMeshChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_EditorDynamicMeshFunctions, nullptr, "BeginTrackedMeshChange", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_BeginTrackedMeshChange_Statics::GeometryScriptLibrary_EditorDynamicMeshFunctions_eventBeginTrackedMeshChange_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_BeginTrackedMeshChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_BeginTrackedMeshChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_BeginTrackedMeshChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_BeginTrackedMeshChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_BeginTrackedMeshChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_BeginTrackedMeshChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_EmitTrackedMeshChange_Statics
	{
		struct GeometryScriptLibrary_EditorDynamicMeshFunctions_eventEmitTrackedMeshChange_Parms
		{
			UDynamicMesh* TargetMesh;
			FDynamicMeshChangeContainer ChangeTracker;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChangeTracker;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_EmitTrackedMeshChange_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_EditorDynamicMeshFunctions_eventEmitTrackedMeshChange_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_EmitTrackedMeshChange_Statics::NewProp_ChangeTracker = { "ChangeTracker", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_EditorDynamicMeshFunctions_eventEmitTrackedMeshChange_Parms, ChangeTracker), Z_Construct_UScriptStruct_FDynamicMeshChangeContainer, METADATA_PARAMS(nullptr, 0) }; // 3982391854
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_EmitTrackedMeshChange_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Dynamic Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_EmitTrackedMeshChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_EditorDynamicMeshFunctions_eventEmitTrackedMeshChange_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_EmitTrackedMeshChange_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_EmitTrackedMeshChange_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_EmitTrackedMeshChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_EmitTrackedMeshChange_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_EmitTrackedMeshChange_Statics::NewProp_ChangeTracker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_EmitTrackedMeshChange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_EmitTrackedMeshChange_Statics::Function_MetaDataParams[] = {
		{ "Category", "DynamicMesh|Changes" },
		{ "Comment", "/**\n\x09 * Emit an undo/redo Change for a modified TargetMesh, based on the ChangeTracker information that was \n\x09 * saved (via call to BeginTrackedMeshChange) before TargetMesh was modified. This function must be\n\x09 * called in the context of a Transaction (ie BeginTransaction / EndTransaction pair)\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/EditorDynamicMeshUtilityFunctions.h" },
		{ "ToolTip", "Emit an undo/redo Change for a modified TargetMesh, based on the ChangeTracker information that was\nsaved (via call to BeginTrackedMeshChange) before TargetMesh was modified. This function must be\ncalled in the context of a Transaction (ie BeginTransaction / EndTransaction pair)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_EmitTrackedMeshChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_EditorDynamicMeshFunctions, nullptr, "EmitTrackedMeshChange", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_EmitTrackedMeshChange_Statics::GeometryScriptLibrary_EditorDynamicMeshFunctions_eventEmitTrackedMeshChange_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_EmitTrackedMeshChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_EmitTrackedMeshChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_EmitTrackedMeshChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_EmitTrackedMeshChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_EmitTrackedMeshChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_EmitTrackedMeshChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryScriptLibrary_EditorDynamicMeshFunctions);
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_EditorDynamicMeshFunctions_NoRegister()
	{
		return UGeometryScriptLibrary_EditorDynamicMeshFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryScriptLibrary_EditorDynamicMeshFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryScriptLibrary_EditorDynamicMeshFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGeometryScriptLibrary_EditorDynamicMeshFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_BeginTrackedMeshChange, "BeginTrackedMeshChange" }, // 2024917732
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_EditorDynamicMeshFunctions_EmitTrackedMeshChange, "EmitTrackedMeshChange" }, // 1195603526
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryScriptLibrary_EditorDynamicMeshFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeometryScript/EditorDynamicMeshUtilityFunctions.h" },
		{ "ModuleRelativePath", "Public/GeometryScript/EditorDynamicMeshUtilityFunctions.h" },
		{ "ScriptName", "GeometryScript_EditorDynamicMeshUtil" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryScriptLibrary_EditorDynamicMeshFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryScriptLibrary_EditorDynamicMeshFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryScriptLibrary_EditorDynamicMeshFunctions_Statics::ClassParams = {
		&UGeometryScriptLibrary_EditorDynamicMeshFunctions::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGeometryScriptLibrary_EditorDynamicMeshFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_EditorDynamicMeshFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_EditorDynamicMeshFunctions()
	{
		if (!Z_Registration_Info_UClass_UGeometryScriptLibrary_EditorDynamicMeshFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryScriptLibrary_EditorDynamicMeshFunctions.OuterSingleton, Z_Construct_UClass_UGeometryScriptLibrary_EditorDynamicMeshFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometryScriptLibrary_EditorDynamicMeshFunctions.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGEDITOR_API UClass* StaticClass<UGeometryScriptLibrary_EditorDynamicMeshFunctions>()
	{
		return UGeometryScriptLibrary_EditorDynamicMeshFunctions::StaticClass();
	}
	UGeometryScriptLibrary_EditorDynamicMeshFunctions::UGeometryScriptLibrary_EditorDynamicMeshFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryScriptLibrary_EditorDynamicMeshFunctions);
	UGeometryScriptLibrary_EditorDynamicMeshFunctions::~UGeometryScriptLibrary_EditorDynamicMeshFunctions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorDynamicMeshUtilityFunctions_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorDynamicMeshUtilityFunctions_h_Statics::ScriptStructInfo[] = {
		{ FDynamicMeshChangeContainer::StaticStruct, Z_Construct_UScriptStruct_FDynamicMeshChangeContainer_Statics::NewStructOps, TEXT("DynamicMeshChangeContainer"), &Z_Registration_Info_UScriptStruct_DynamicMeshChangeContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDynamicMeshChangeContainer), 3982391854U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorDynamicMeshUtilityFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryScriptLibrary_EditorDynamicMeshFunctions, UGeometryScriptLibrary_EditorDynamicMeshFunctions::StaticClass, TEXT("UGeometryScriptLibrary_EditorDynamicMeshFunctions"), &Z_Registration_Info_UClass_UGeometryScriptLibrary_EditorDynamicMeshFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryScriptLibrary_EditorDynamicMeshFunctions), 1022194547U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorDynamicMeshUtilityFunctions_h_989120901(TEXT("/Script/GeometryScriptingEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorDynamicMeshUtilityFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorDynamicMeshUtilityFunctions_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorDynamicMeshUtilityFunctions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorDynamicMeshUtilityFunctions_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
