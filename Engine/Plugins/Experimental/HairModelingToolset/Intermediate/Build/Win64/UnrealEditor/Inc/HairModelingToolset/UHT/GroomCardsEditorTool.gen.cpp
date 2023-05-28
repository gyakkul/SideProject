// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GroomCardsEditorTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroomCardsEditorTool() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	HAIRMODELINGTOOLSET_API UClass* Z_Construct_UClass_UEditGroomCardsToolActionPropertySet();
	HAIRMODELINGTOOLSET_API UClass* Z_Construct_UClass_UEditGroomCardsToolActionPropertySet_NoRegister();
	HAIRMODELINGTOOLSET_API UClass* Z_Construct_UClass_UEditGroomCardsToolActions();
	HAIRMODELINGTOOLSET_API UClass* Z_Construct_UClass_UEditGroomCardsToolActions_NoRegister();
	HAIRMODELINGTOOLSET_API UClass* Z_Construct_UClass_UGroomCardsEditorTool();
	HAIRMODELINGTOOLSET_API UClass* Z_Construct_UClass_UGroomCardsEditorTool_NoRegister();
	HAIRMODELINGTOOLSET_API UClass* Z_Construct_UClass_UGroomCardsEditorToolBuilder();
	HAIRMODELINGTOOLSET_API UClass* Z_Construct_UClass_UGroomCardsEditorToolBuilder_NoRegister();
	HAIRMODELINGTOOLSET_API UClass* Z_Construct_UClass_UGroomCardsInfoToolProperties();
	HAIRMODELINGTOOLSET_API UClass* Z_Construct_UClass_UGroomCardsInfoToolProperties_NoRegister();
	HAIRMODELINGTOOLSET_API UClass* Z_Construct_UClass_USelectGroomCardsToolActions();
	HAIRMODELINGTOOLSET_API UClass* Z_Construct_UClass_USelectGroomCardsToolActions_NoRegister();
	HAIRMODELINGTOOLSET_API UEnum* Z_Construct_UEnum_HairModelingToolset_EEditGroomCardsToolActions();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_AGroomActor_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMeshSurfacePointTool();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshSurfacePointMeshEditingToolBuilder();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPolygonSelectionMechanic_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewGeometry_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewMesh_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USpaceCurveDeformationMechanic_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HairModelingToolset();
// End Cross Module References
	void UGroomCardsEditorToolBuilder::StaticRegisterNativesUGroomCardsEditorToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGroomCardsEditorToolBuilder);
	UClass* Z_Construct_UClass_UGroomCardsEditorToolBuilder_NoRegister()
	{
		return UGroomCardsEditorToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UGroomCardsEditorToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGroomCardsEditorToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshSurfacePointMeshEditingToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_HairModelingToolset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomCardsEditorToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "GroomCardsEditorTool.h" },
		{ "ModuleRelativePath", "Public/GroomCardsEditorTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGroomCardsEditorToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGroomCardsEditorToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGroomCardsEditorToolBuilder_Statics::ClassParams = {
		&UGroomCardsEditorToolBuilder::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UGroomCardsEditorToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomCardsEditorToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGroomCardsEditorToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UGroomCardsEditorToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGroomCardsEditorToolBuilder.OuterSingleton, Z_Construct_UClass_UGroomCardsEditorToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGroomCardsEditorToolBuilder.OuterSingleton;
	}
	template<> HAIRMODELINGTOOLSET_API UClass* StaticClass<UGroomCardsEditorToolBuilder>()
	{
		return UGroomCardsEditorToolBuilder::StaticClass();
	}
	UGroomCardsEditorToolBuilder::UGroomCardsEditorToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGroomCardsEditorToolBuilder);
	UGroomCardsEditorToolBuilder::~UGroomCardsEditorToolBuilder() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEditGroomCardsToolActions;
	static UEnum* EEditGroomCardsToolActions_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEditGroomCardsToolActions.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEditGroomCardsToolActions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HairModelingToolset_EEditGroomCardsToolActions, (UObject*)Z_Construct_UPackage__Script_HairModelingToolset(), TEXT("EEditGroomCardsToolActions"));
		}
		return Z_Registration_Info_UEnum_EEditGroomCardsToolActions.OuterSingleton;
	}
	template<> HAIRMODELINGTOOLSET_API UEnum* StaticEnum<EEditGroomCardsToolActions>()
	{
		return EEditGroomCardsToolActions_StaticEnum();
	}
	struct Z_Construct_UEnum_HairModelingToolset_EEditGroomCardsToolActions_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HairModelingToolset_EEditGroomCardsToolActions_Statics::Enumerators[] = {
		{ "EEditGroomCardsToolActions::NoAction", (int64)EEditGroomCardsToolActions::NoAction },
		{ "EEditGroomCardsToolActions::Delete", (int64)EEditGroomCardsToolActions::Delete },
		{ "EEditGroomCardsToolActions::SelectionClear", (int64)EEditGroomCardsToolActions::SelectionClear },
		{ "EEditGroomCardsToolActions::SelectionFill", (int64)EEditGroomCardsToolActions::SelectionFill },
		{ "EEditGroomCardsToolActions::SelectionAddNext", (int64)EEditGroomCardsToolActions::SelectionAddNext },
		{ "EEditGroomCardsToolActions::SelectionAddPrevious", (int64)EEditGroomCardsToolActions::SelectionAddPrevious },
		{ "EEditGroomCardsToolActions::SelectionAddToEnd", (int64)EEditGroomCardsToolActions::SelectionAddToEnd },
		{ "EEditGroomCardsToolActions::SelectionAddToStart", (int64)EEditGroomCardsToolActions::SelectionAddToStart },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HairModelingToolset_EEditGroomCardsToolActions_Statics::Enum_MetaDataParams[] = {
		{ "Delete.Name", "EEditGroomCardsToolActions::Delete" },
		{ "ModuleRelativePath", "Public/GroomCardsEditorTool.h" },
		{ "NoAction.Name", "EEditGroomCardsToolActions::NoAction" },
		{ "SelectionAddNext.Name", "EEditGroomCardsToolActions::SelectionAddNext" },
		{ "SelectionAddPrevious.Name", "EEditGroomCardsToolActions::SelectionAddPrevious" },
		{ "SelectionAddToEnd.Name", "EEditGroomCardsToolActions::SelectionAddToEnd" },
		{ "SelectionAddToStart.Name", "EEditGroomCardsToolActions::SelectionAddToStart" },
		{ "SelectionClear.Name", "EEditGroomCardsToolActions::SelectionClear" },
		{ "SelectionFill.Name", "EEditGroomCardsToolActions::SelectionFill" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HairModelingToolset_EEditGroomCardsToolActions_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HairModelingToolset,
		nullptr,
		"EEditGroomCardsToolActions",
		"EEditGroomCardsToolActions",
		Z_Construct_UEnum_HairModelingToolset_EEditGroomCardsToolActions_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HairModelingToolset_EEditGroomCardsToolActions_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HairModelingToolset_EEditGroomCardsToolActions_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HairModelingToolset_EEditGroomCardsToolActions_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HairModelingToolset_EEditGroomCardsToolActions()
	{
		if (!Z_Registration_Info_UEnum_EEditGroomCardsToolActions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEditGroomCardsToolActions.InnerSingleton, Z_Construct_UEnum_HairModelingToolset_EEditGroomCardsToolActions_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEditGroomCardsToolActions.InnerSingleton;
	}
	void UEditGroomCardsToolActionPropertySet::StaticRegisterNativesUEditGroomCardsToolActionPropertySet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditGroomCardsToolActionPropertySet);
	UClass* Z_Construct_UClass_UEditGroomCardsToolActionPropertySet_NoRegister()
	{
		return UEditGroomCardsToolActionPropertySet::StaticClass();
	}
	struct Z_Construct_UClass_UEditGroomCardsToolActionPropertySet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditGroomCardsToolActionPropertySet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_HairModelingToolset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditGroomCardsToolActionPropertySet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GroomCardsEditorTool.h" },
		{ "ModuleRelativePath", "Public/GroomCardsEditorTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditGroomCardsToolActionPropertySet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditGroomCardsToolActionPropertySet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditGroomCardsToolActionPropertySet_Statics::ClassParams = {
		&UEditGroomCardsToolActionPropertySet::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UEditGroomCardsToolActionPropertySet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditGroomCardsToolActionPropertySet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditGroomCardsToolActionPropertySet()
	{
		if (!Z_Registration_Info_UClass_UEditGroomCardsToolActionPropertySet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditGroomCardsToolActionPropertySet.OuterSingleton, Z_Construct_UClass_UEditGroomCardsToolActionPropertySet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditGroomCardsToolActionPropertySet.OuterSingleton;
	}
	template<> HAIRMODELINGTOOLSET_API UClass* StaticClass<UEditGroomCardsToolActionPropertySet>()
	{
		return UEditGroomCardsToolActionPropertySet::StaticClass();
	}
	UEditGroomCardsToolActionPropertySet::UEditGroomCardsToolActionPropertySet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditGroomCardsToolActionPropertySet);
	UEditGroomCardsToolActionPropertySet::~UEditGroomCardsToolActionPropertySet() {}
	DEFINE_FUNCTION(USelectGroomCardsToolActions::execToStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USelectGroomCardsToolActions::execToEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USelectGroomCardsToolActions::execAddPrevious)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddPrevious();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USelectGroomCardsToolActions::execAddNext)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddNext();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USelectGroomCardsToolActions::execFill)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Fill();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USelectGroomCardsToolActions::execClear)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Clear();
		P_NATIVE_END;
	}
	void USelectGroomCardsToolActions::StaticRegisterNativesUSelectGroomCardsToolActions()
	{
		UClass* Class = USelectGroomCardsToolActions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddNext", &USelectGroomCardsToolActions::execAddNext },
			{ "AddPrevious", &USelectGroomCardsToolActions::execAddPrevious },
			{ "Clear", &USelectGroomCardsToolActions::execClear },
			{ "Fill", &USelectGroomCardsToolActions::execFill },
			{ "ToEnd", &USelectGroomCardsToolActions::execToEnd },
			{ "ToStart", &USelectGroomCardsToolActions::execToStart },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USelectGroomCardsToolActions_AddNext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USelectGroomCardsToolActions_AddNext_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Selection" },
		{ "Comment", "/** Add the next vertex along the card curve to the selection */" },
		{ "DisplayPriority", "3" },
		{ "ModuleRelativePath", "Public/GroomCardsEditorTool.h" },
		{ "ToolTip", "Add the next vertex along the card curve to the selection" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USelectGroomCardsToolActions_AddNext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USelectGroomCardsToolActions, nullptr, "AddNext", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USelectGroomCardsToolActions_AddNext_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USelectGroomCardsToolActions_AddNext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USelectGroomCardsToolActions_AddNext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USelectGroomCardsToolActions_AddNext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USelectGroomCardsToolActions_AddPrevious_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USelectGroomCardsToolActions_AddPrevious_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Selection" },
		{ "Comment", "/** Add the previous vertex along the card curve to the selection */" },
		{ "DisplayPriority", "4" },
		{ "ModuleRelativePath", "Public/GroomCardsEditorTool.h" },
		{ "ToolTip", "Add the previous vertex along the card curve to the selection" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USelectGroomCardsToolActions_AddPrevious_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USelectGroomCardsToolActions, nullptr, "AddPrevious", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USelectGroomCardsToolActions_AddPrevious_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USelectGroomCardsToolActions_AddPrevious_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USelectGroomCardsToolActions_AddPrevious()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USelectGroomCardsToolActions_AddPrevious_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USelectGroomCardsToolActions_Clear_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USelectGroomCardsToolActions_Clear_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Selection" },
		{ "Comment", "/** Clear the current selection */" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/GroomCardsEditorTool.h" },
		{ "ToolTip", "Clear the current selection" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USelectGroomCardsToolActions_Clear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USelectGroomCardsToolActions, nullptr, "Clear", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USelectGroomCardsToolActions_Clear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USelectGroomCardsToolActions_Clear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USelectGroomCardsToolActions_Clear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USelectGroomCardsToolActions_Clear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USelectGroomCardsToolActions_Fill_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USelectGroomCardsToolActions_Fill_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Selection" },
		{ "Comment", "/** Select unselected points along curve between selected points */" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/GroomCardsEditorTool.h" },
		{ "ToolTip", "Select unselected points along curve between selected points" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USelectGroomCardsToolActions_Fill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USelectGroomCardsToolActions, nullptr, "Fill", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USelectGroomCardsToolActions_Fill_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USelectGroomCardsToolActions_Fill_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USelectGroomCardsToolActions_Fill()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USelectGroomCardsToolActions_Fill_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USelectGroomCardsToolActions_ToEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USelectGroomCardsToolActions_ToEnd_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Selection" },
		{ "Comment", "/** Select all vertices to the end of the card */" },
		{ "DisplayPriority", "5" },
		{ "ModuleRelativePath", "Public/GroomCardsEditorTool.h" },
		{ "ToolTip", "Select all vertices to the end of the card" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USelectGroomCardsToolActions_ToEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USelectGroomCardsToolActions, nullptr, "ToEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USelectGroomCardsToolActions_ToEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USelectGroomCardsToolActions_ToEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USelectGroomCardsToolActions_ToEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USelectGroomCardsToolActions_ToEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USelectGroomCardsToolActions_ToStart_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USelectGroomCardsToolActions_ToStart_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Selection" },
		{ "Comment", "/** Select all vertices to the start of the card */" },
		{ "DisplayPriority", "6" },
		{ "ModuleRelativePath", "Public/GroomCardsEditorTool.h" },
		{ "ToolTip", "Select all vertices to the start of the card" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USelectGroomCardsToolActions_ToStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USelectGroomCardsToolActions, nullptr, "ToStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USelectGroomCardsToolActions_ToStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USelectGroomCardsToolActions_ToStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USelectGroomCardsToolActions_ToStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USelectGroomCardsToolActions_ToStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USelectGroomCardsToolActions);
	UClass* Z_Construct_UClass_USelectGroomCardsToolActions_NoRegister()
	{
		return USelectGroomCardsToolActions::StaticClass();
	}
	struct Z_Construct_UClass_USelectGroomCardsToolActions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USelectGroomCardsToolActions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditGroomCardsToolActionPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_HairModelingToolset,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USelectGroomCardsToolActions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USelectGroomCardsToolActions_AddNext, "AddNext" }, // 2868214677
		{ &Z_Construct_UFunction_USelectGroomCardsToolActions_AddPrevious, "AddPrevious" }, // 730964298
		{ &Z_Construct_UFunction_USelectGroomCardsToolActions_Clear, "Clear" }, // 700929831
		{ &Z_Construct_UFunction_USelectGroomCardsToolActions_Fill, "Fill" }, // 1458615496
		{ &Z_Construct_UFunction_USelectGroomCardsToolActions_ToEnd, "ToEnd" }, // 3947467983
		{ &Z_Construct_UFunction_USelectGroomCardsToolActions_ToStart, "ToStart" }, // 4273553012
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USelectGroomCardsToolActions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GroomCardsEditorTool.h" },
		{ "ModuleRelativePath", "Public/GroomCardsEditorTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USelectGroomCardsToolActions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USelectGroomCardsToolActions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USelectGroomCardsToolActions_Statics::ClassParams = {
		&USelectGroomCardsToolActions::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USelectGroomCardsToolActions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USelectGroomCardsToolActions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USelectGroomCardsToolActions()
	{
		if (!Z_Registration_Info_UClass_USelectGroomCardsToolActions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USelectGroomCardsToolActions.OuterSingleton, Z_Construct_UClass_USelectGroomCardsToolActions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USelectGroomCardsToolActions.OuterSingleton;
	}
	template<> HAIRMODELINGTOOLSET_API UClass* StaticClass<USelectGroomCardsToolActions>()
	{
		return USelectGroomCardsToolActions::StaticClass();
	}
	USelectGroomCardsToolActions::USelectGroomCardsToolActions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USelectGroomCardsToolActions);
	USelectGroomCardsToolActions::~USelectGroomCardsToolActions() {}
	DEFINE_FUNCTION(UEditGroomCardsToolActions::execDelete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Delete();
		P_NATIVE_END;
	}
	void UEditGroomCardsToolActions::StaticRegisterNativesUEditGroomCardsToolActions()
	{
		UClass* Class = UEditGroomCardsToolActions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Delete", &UEditGroomCardsToolActions::execDelete },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEditGroomCardsToolActions_Delete_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditGroomCardsToolActions_Delete_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "FaceEdits" },
		{ "Comment", "/** Delete the current selected cards */" },
		{ "DisplayName", "Delete" },
		{ "DisplayPriority", "10" },
		{ "ModuleRelativePath", "Public/GroomCardsEditorTool.h" },
		{ "ToolTip", "Delete the current selected cards" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditGroomCardsToolActions_Delete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditGroomCardsToolActions, nullptr, "Delete", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditGroomCardsToolActions_Delete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditGroomCardsToolActions_Delete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditGroomCardsToolActions_Delete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditGroomCardsToolActions_Delete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditGroomCardsToolActions);
	UClass* Z_Construct_UClass_UEditGroomCardsToolActions_NoRegister()
	{
		return UEditGroomCardsToolActions::StaticClass();
	}
	struct Z_Construct_UClass_UEditGroomCardsToolActions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditGroomCardsToolActions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditGroomCardsToolActionPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_HairModelingToolset,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEditGroomCardsToolActions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEditGroomCardsToolActions_Delete, "Delete" }, // 4175286954
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditGroomCardsToolActions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GroomCardsEditorTool.h" },
		{ "ModuleRelativePath", "Public/GroomCardsEditorTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditGroomCardsToolActions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditGroomCardsToolActions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditGroomCardsToolActions_Statics::ClassParams = {
		&UEditGroomCardsToolActions::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UEditGroomCardsToolActions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditGroomCardsToolActions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditGroomCardsToolActions()
	{
		if (!Z_Registration_Info_UClass_UEditGroomCardsToolActions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditGroomCardsToolActions.OuterSingleton, Z_Construct_UClass_UEditGroomCardsToolActions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditGroomCardsToolActions.OuterSingleton;
	}
	template<> HAIRMODELINGTOOLSET_API UClass* StaticClass<UEditGroomCardsToolActions>()
	{
		return UEditGroomCardsToolActions::StaticClass();
	}
	UEditGroomCardsToolActions::UEditGroomCardsToolActions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditGroomCardsToolActions);
	UEditGroomCardsToolActions::~UEditGroomCardsToolActions() {}
	void UGroomCardsInfoToolProperties::StaticRegisterNativesUGroomCardsInfoToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGroomCardsInfoToolProperties);
	UClass* Z_Construct_UClass_UGroomCardsInfoToolProperties_NoRegister()
	{
		return UGroomCardsInfoToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UGroomCardsInfoToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumCards_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumCards;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumVertices_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumVertices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumTriangles_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumTriangles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGroomCardsInfoToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_HairModelingToolset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomCardsInfoToolProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GroomCardsEditorTool.h" },
		{ "ModuleRelativePath", "Public/GroomCardsEditorTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomCardsInfoToolProperties_Statics::NewProp_NumCards_MetaData[] = {
		{ "Category", "Statistics" },
		{ "ModuleRelativePath", "Public/GroomCardsEditorTool.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGroomCardsInfoToolProperties_Statics::NewProp_NumCards = { "NumCards", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomCardsInfoToolProperties, NumCards), METADATA_PARAMS(Z_Construct_UClass_UGroomCardsInfoToolProperties_Statics::NewProp_NumCards_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomCardsInfoToolProperties_Statics::NewProp_NumCards_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomCardsInfoToolProperties_Statics::NewProp_NumVertices_MetaData[] = {
		{ "Category", "Statistics" },
		{ "ModuleRelativePath", "Public/GroomCardsEditorTool.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGroomCardsInfoToolProperties_Statics::NewProp_NumVertices = { "NumVertices", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomCardsInfoToolProperties, NumVertices), METADATA_PARAMS(Z_Construct_UClass_UGroomCardsInfoToolProperties_Statics::NewProp_NumVertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomCardsInfoToolProperties_Statics::NewProp_NumVertices_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomCardsInfoToolProperties_Statics::NewProp_NumTriangles_MetaData[] = {
		{ "Category", "Statistics" },
		{ "ModuleRelativePath", "Public/GroomCardsEditorTool.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGroomCardsInfoToolProperties_Statics::NewProp_NumTriangles = { "NumTriangles", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomCardsInfoToolProperties, NumTriangles), METADATA_PARAMS(Z_Construct_UClass_UGroomCardsInfoToolProperties_Statics::NewProp_NumTriangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomCardsInfoToolProperties_Statics::NewProp_NumTriangles_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGroomCardsInfoToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCardsInfoToolProperties_Statics::NewProp_NumCards,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCardsInfoToolProperties_Statics::NewProp_NumVertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCardsInfoToolProperties_Statics::NewProp_NumTriangles,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGroomCardsInfoToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGroomCardsInfoToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGroomCardsInfoToolProperties_Statics::ClassParams = {
		&UGroomCardsInfoToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGroomCardsInfoToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGroomCardsInfoToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UGroomCardsInfoToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomCardsInfoToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGroomCardsInfoToolProperties()
	{
		if (!Z_Registration_Info_UClass_UGroomCardsInfoToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGroomCardsInfoToolProperties.OuterSingleton, Z_Construct_UClass_UGroomCardsInfoToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGroomCardsInfoToolProperties.OuterSingleton;
	}
	template<> HAIRMODELINGTOOLSET_API UClass* StaticClass<UGroomCardsInfoToolProperties>()
	{
		return UGroomCardsInfoToolProperties::StaticClass();
	}
	UGroomCardsInfoToolProperties::UGroomCardsInfoToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGroomCardsInfoToolProperties);
	UGroomCardsInfoToolProperties::~UGroomCardsInfoToolProperties() {}
	void UGroomCardsEditorTool::StaticRegisterNativesUGroomCardsEditorTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGroomCardsEditorTool);
	UClass* Z_Construct_UClass_UGroomCardsEditorTool_NoRegister()
	{
		return UGroomCardsEditorTool::StaticClass();
	}
	struct Z_Construct_UClass_UGroomCardsEditorTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectActions_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SelectActions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditActions_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EditActions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InfoProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InfoProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetGroom_MetaData[];
#endif
		static const UECodeGen_Private::FLazyObjectPropertyParams NewProp_TargetGroom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewGeom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewGeom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MeshMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UVMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardMeshSelectionMechanic_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CardMeshSelectionMechanic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlPointsMechanic_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ControlPointsMechanic;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGroomCardsEditorTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshSurfacePointTool,
		(UObject* (*)())Z_Construct_UPackage__Script_HairModelingToolset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomCardsEditorTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "GroomCardsEditorTool.h" },
		{ "ModuleRelativePath", "Public/GroomCardsEditorTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomCardsEditorTool_Statics::NewProp_SelectActions_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomCardsEditorTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGroomCardsEditorTool_Statics::NewProp_SelectActions = { "SelectActions", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomCardsEditorTool, SelectActions), Z_Construct_UClass_USelectGroomCardsToolActions_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGroomCardsEditorTool_Statics::NewProp_SelectActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomCardsEditorTool_Statics::NewProp_SelectActions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomCardsEditorTool_Statics::NewProp_EditActions_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomCardsEditorTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGroomCardsEditorTool_Statics::NewProp_EditActions = { "EditActions", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomCardsEditorTool, EditActions), Z_Construct_UClass_UEditGroomCardsToolActions_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGroomCardsEditorTool_Statics::NewProp_EditActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomCardsEditorTool_Statics::NewProp_EditActions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomCardsEditorTool_Statics::NewProp_InfoProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomCardsEditorTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGroomCardsEditorTool_Statics::NewProp_InfoProperties = { "InfoProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomCardsEditorTool, InfoProperties), Z_Construct_UClass_UGroomCardsInfoToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGroomCardsEditorTool_Statics::NewProp_InfoProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomCardsEditorTool_Statics::NewProp_InfoProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomCardsEditorTool_Statics::NewProp_PreviewMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomCardsEditorTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGroomCardsEditorTool_Statics::NewProp_PreviewMesh = { "PreviewMesh", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomCardsEditorTool, PreviewMesh), Z_Construct_UClass_UPreviewMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGroomCardsEditorTool_Statics::NewProp_PreviewMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomCardsEditorTool_Statics::NewProp_PreviewMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomCardsEditorTool_Statics::NewProp_TargetGroom_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomCardsEditorTool.h" },
	};
#endif
	const UECodeGen_Private::FLazyObjectPropertyParams Z_Construct_UClass_UGroomCardsEditorTool_Statics::NewProp_TargetGroom = { "TargetGroom", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::LazyObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomCardsEditorTool, TargetGroom), Z_Construct_UClass_AGroomActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGroomCardsEditorTool_Statics::NewProp_TargetGroom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomCardsEditorTool_Statics::NewProp_TargetGroom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomCardsEditorTool_Statics::NewProp_PreviewGeom_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomCardsEditorTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGroomCardsEditorTool_Statics::NewProp_PreviewGeom = { "PreviewGeom", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomCardsEditorTool, PreviewGeom), Z_Construct_UClass_UPreviewGeometry_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGroomCardsEditorTool_Statics::NewProp_PreviewGeom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomCardsEditorTool_Statics::NewProp_PreviewGeom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomCardsEditorTool_Statics::NewProp_MeshMaterial_MetaData[] = {
		{ "Comment", "// materials\n" },
		{ "ModuleRelativePath", "Public/GroomCardsEditorTool.h" },
		{ "ToolTip", "materials" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGroomCardsEditorTool_Statics::NewProp_MeshMaterial = { "MeshMaterial", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomCardsEditorTool, MeshMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGroomCardsEditorTool_Statics::NewProp_MeshMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomCardsEditorTool_Statics::NewProp_MeshMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomCardsEditorTool_Statics::NewProp_UVMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomCardsEditorTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGroomCardsEditorTool_Statics::NewProp_UVMaterial = { "UVMaterial", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomCardsEditorTool, UVMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGroomCardsEditorTool_Statics::NewProp_UVMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomCardsEditorTool_Statics::NewProp_UVMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomCardsEditorTool_Statics::NewProp_CardMeshSelectionMechanic_MetaData[] = {
		{ "Comment", "// mechanics\n" },
		{ "ModuleRelativePath", "Public/GroomCardsEditorTool.h" },
		{ "ToolTip", "mechanics" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGroomCardsEditorTool_Statics::NewProp_CardMeshSelectionMechanic = { "CardMeshSelectionMechanic", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomCardsEditorTool, CardMeshSelectionMechanic), Z_Construct_UClass_UPolygonSelectionMechanic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGroomCardsEditorTool_Statics::NewProp_CardMeshSelectionMechanic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomCardsEditorTool_Statics::NewProp_CardMeshSelectionMechanic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomCardsEditorTool_Statics::NewProp_ControlPointsMechanic_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomCardsEditorTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGroomCardsEditorTool_Statics::NewProp_ControlPointsMechanic = { "ControlPointsMechanic", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomCardsEditorTool, ControlPointsMechanic), Z_Construct_UClass_USpaceCurveDeformationMechanic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGroomCardsEditorTool_Statics::NewProp_ControlPointsMechanic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomCardsEditorTool_Statics::NewProp_ControlPointsMechanic_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGroomCardsEditorTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCardsEditorTool_Statics::NewProp_SelectActions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCardsEditorTool_Statics::NewProp_EditActions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCardsEditorTool_Statics::NewProp_InfoProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCardsEditorTool_Statics::NewProp_PreviewMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCardsEditorTool_Statics::NewProp_TargetGroom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCardsEditorTool_Statics::NewProp_PreviewGeom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCardsEditorTool_Statics::NewProp_MeshMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCardsEditorTool_Statics::NewProp_UVMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCardsEditorTool_Statics::NewProp_CardMeshSelectionMechanic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCardsEditorTool_Statics::NewProp_ControlPointsMechanic,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGroomCardsEditorTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGroomCardsEditorTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGroomCardsEditorTool_Statics::ClassParams = {
		&UGroomCardsEditorTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGroomCardsEditorTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGroomCardsEditorTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UGroomCardsEditorTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomCardsEditorTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGroomCardsEditorTool()
	{
		if (!Z_Registration_Info_UClass_UGroomCardsEditorTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGroomCardsEditorTool.OuterSingleton, Z_Construct_UClass_UGroomCardsEditorTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGroomCardsEditorTool.OuterSingleton;
	}
	template<> HAIRMODELINGTOOLSET_API UClass* StaticClass<UGroomCardsEditorTool>()
	{
		return UGroomCardsEditorTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGroomCardsEditorTool);
	UGroomCardsEditorTool::~UGroomCardsEditorTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_HairModelingToolset_Source_HairModelingToolset_Public_GroomCardsEditorTool_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_HairModelingToolset_Source_HairModelingToolset_Public_GroomCardsEditorTool_h_Statics::EnumInfo[] = {
		{ EEditGroomCardsToolActions_StaticEnum, TEXT("EEditGroomCardsToolActions"), &Z_Registration_Info_UEnum_EEditGroomCardsToolActions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3405625947U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_HairModelingToolset_Source_HairModelingToolset_Public_GroomCardsEditorTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGroomCardsEditorToolBuilder, UGroomCardsEditorToolBuilder::StaticClass, TEXT("UGroomCardsEditorToolBuilder"), &Z_Registration_Info_UClass_UGroomCardsEditorToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGroomCardsEditorToolBuilder), 3261859948U) },
		{ Z_Construct_UClass_UEditGroomCardsToolActionPropertySet, UEditGroomCardsToolActionPropertySet::StaticClass, TEXT("UEditGroomCardsToolActionPropertySet"), &Z_Registration_Info_UClass_UEditGroomCardsToolActionPropertySet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditGroomCardsToolActionPropertySet), 1092508240U) },
		{ Z_Construct_UClass_USelectGroomCardsToolActions, USelectGroomCardsToolActions::StaticClass, TEXT("USelectGroomCardsToolActions"), &Z_Registration_Info_UClass_USelectGroomCardsToolActions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USelectGroomCardsToolActions), 1195573307U) },
		{ Z_Construct_UClass_UEditGroomCardsToolActions, UEditGroomCardsToolActions::StaticClass, TEXT("UEditGroomCardsToolActions"), &Z_Registration_Info_UClass_UEditGroomCardsToolActions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditGroomCardsToolActions), 4288174008U) },
		{ Z_Construct_UClass_UGroomCardsInfoToolProperties, UGroomCardsInfoToolProperties::StaticClass, TEXT("UGroomCardsInfoToolProperties"), &Z_Registration_Info_UClass_UGroomCardsInfoToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGroomCardsInfoToolProperties), 2186971951U) },
		{ Z_Construct_UClass_UGroomCardsEditorTool, UGroomCardsEditorTool::StaticClass, TEXT("UGroomCardsEditorTool"), &Z_Registration_Info_UClass_UGroomCardsEditorTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGroomCardsEditorTool), 2390175071U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_HairModelingToolset_Source_HairModelingToolset_Public_GroomCardsEditorTool_h_1168846442(TEXT("/Script/HairModelingToolset"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_HairModelingToolset_Source_HairModelingToolset_Public_GroomCardsEditorTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_HairModelingToolset_Source_HairModelingToolset_Public_GroomCardsEditorTool_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_HairModelingToolset_Source_HairModelingToolset_Public_GroomCardsEditorTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_HairModelingToolset_Source_HairModelingToolset_Public_GroomCardsEditorTool_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
