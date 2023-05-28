// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditMeshMaterialsTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditMeshMaterialsTool() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UEditMeshMaterialsEditActions();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UEditMeshMaterialsEditActions_NoRegister();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UEditMeshMaterialsTool();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UEditMeshMaterialsTool_NoRegister();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UEditMeshMaterialsToolBuilder();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UEditMeshMaterialsToolBuilder_NoRegister();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UEditMeshMaterialsToolProperties();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UEditMeshMaterialsToolProperties_NoRegister();
	MESHMODELINGTOOLSEDITORONLYEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EEditMeshMaterialsToolActions();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshSelectionTool();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshSelectionToolActionPropertySet();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshSelectionToolBuilder();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp();
// End Cross Module References
	void UEditMeshMaterialsToolBuilder::StaticRegisterNativesUEditMeshMaterialsToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditMeshMaterialsToolBuilder);
	UClass* Z_Construct_UClass_UEditMeshMaterialsToolBuilder_NoRegister()
	{
		return UEditMeshMaterialsToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UEditMeshMaterialsToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditMeshMaterialsToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshSelectionToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditMeshMaterialsToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "EditMeshMaterialsTool.h" },
		{ "ModuleRelativePath", "Public/EditMeshMaterialsTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditMeshMaterialsToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditMeshMaterialsToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditMeshMaterialsToolBuilder_Statics::ClassParams = {
		&UEditMeshMaterialsToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEditMeshMaterialsToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditMeshMaterialsToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditMeshMaterialsToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UEditMeshMaterialsToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditMeshMaterialsToolBuilder.OuterSingleton, Z_Construct_UClass_UEditMeshMaterialsToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditMeshMaterialsToolBuilder.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UClass* StaticClass<UEditMeshMaterialsToolBuilder>()
	{
		return UEditMeshMaterialsToolBuilder::StaticClass();
	}
	UEditMeshMaterialsToolBuilder::UEditMeshMaterialsToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditMeshMaterialsToolBuilder);
	UEditMeshMaterialsToolBuilder::~UEditMeshMaterialsToolBuilder() {}
	DEFINE_FUNCTION(UEditMeshMaterialsToolProperties::execGetMaterialNamesFunc)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetMaterialNamesFunc();
		P_NATIVE_END;
	}
	void UEditMeshMaterialsToolProperties::StaticRegisterNativesUEditMeshMaterialsToolProperties()
	{
		UClass* Class = UEditMeshMaterialsToolProperties::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMaterialNamesFunc", &UEditMeshMaterialsToolProperties::execGetMaterialNamesFunc },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEditMeshMaterialsToolProperties_GetMaterialNamesFunc_Statics
	{
		struct EditMeshMaterialsToolProperties_eventGetMaterialNamesFunc_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditMeshMaterialsToolProperties_GetMaterialNamesFunc_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditMeshMaterialsToolProperties_GetMaterialNamesFunc_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditMeshMaterialsToolProperties_GetMaterialNamesFunc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditMeshMaterialsToolProperties_eventGetMaterialNamesFunc_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEditMeshMaterialsToolProperties_GetMaterialNamesFunc_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditMeshMaterialsToolProperties_GetMaterialNamesFunc_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditMeshMaterialsToolProperties_GetMaterialNamesFunc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditMeshMaterialsToolProperties_GetMaterialNamesFunc_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditMeshMaterialsToolProperties_GetMaterialNamesFunc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditMeshMaterialsToolProperties_GetMaterialNamesFunc_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EditMeshMaterialsTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditMeshMaterialsToolProperties_GetMaterialNamesFunc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditMeshMaterialsToolProperties, nullptr, "GetMaterialNamesFunc", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditMeshMaterialsToolProperties_GetMaterialNamesFunc_Statics::EditMeshMaterialsToolProperties_eventGetMaterialNamesFunc_Parms), Z_Construct_UFunction_UEditMeshMaterialsToolProperties_GetMaterialNamesFunc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditMeshMaterialsToolProperties_GetMaterialNamesFunc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditMeshMaterialsToolProperties_GetMaterialNamesFunc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditMeshMaterialsToolProperties_GetMaterialNamesFunc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditMeshMaterialsToolProperties_GetMaterialNamesFunc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditMeshMaterialsToolProperties_GetMaterialNamesFunc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditMeshMaterialsToolProperties);
	UClass* Z_Construct_UClass_UEditMeshMaterialsToolProperties_NoRegister()
	{
		return UEditMeshMaterialsToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UEditMeshMaterialsToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ActiveMaterial;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MaterialNamesList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialNamesList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialNamesList;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Materials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditMeshMaterialsToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEditMeshMaterialsToolProperties_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEditMeshMaterialsToolProperties_GetMaterialNamesFunc, "GetMaterialNamesFunc" }, // 463844063
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditMeshMaterialsToolProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditMeshMaterialsTool.h" },
		{ "ModuleRelativePath", "Public/EditMeshMaterialsTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditMeshMaterialsToolProperties_Statics::NewProp_ActiveMaterial_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "/** */" },
		{ "DisplayName", "Active Material" },
		{ "GetOptions", "GetMaterialNamesFunc" },
		{ "ModuleRelativePath", "Public/EditMeshMaterialsTool.h" },
		{ "NoResetToDefault", "" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEditMeshMaterialsToolProperties_Statics::NewProp_ActiveMaterial = { "ActiveMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditMeshMaterialsToolProperties, ActiveMaterial), METADATA_PARAMS(Z_Construct_UClass_UEditMeshMaterialsToolProperties_Statics::NewProp_ActiveMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditMeshMaterialsToolProperties_Statics::NewProp_ActiveMaterial_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEditMeshMaterialsToolProperties_Statics::NewProp_MaterialNamesList_Inner = { "MaterialNamesList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditMeshMaterialsToolProperties_Statics::NewProp_MaterialNamesList_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditMeshMaterialsTool.h" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditMeshMaterialsToolProperties_Statics::NewProp_MaterialNamesList = { "MaterialNamesList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditMeshMaterialsToolProperties, MaterialNamesList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEditMeshMaterialsToolProperties_Statics::NewProp_MaterialNamesList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditMeshMaterialsToolProperties_Statics::NewProp_MaterialNamesList_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditMeshMaterialsToolProperties_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditMeshMaterialsToolProperties_Statics::NewProp_Materials_MetaData[] = {
		{ "Category", "Materials" },
		{ "ModuleRelativePath", "Public/EditMeshMaterialsTool.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditMeshMaterialsToolProperties_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditMeshMaterialsToolProperties, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEditMeshMaterialsToolProperties_Statics::NewProp_Materials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditMeshMaterialsToolProperties_Statics::NewProp_Materials_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditMeshMaterialsToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditMeshMaterialsToolProperties_Statics::NewProp_ActiveMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditMeshMaterialsToolProperties_Statics::NewProp_MaterialNamesList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditMeshMaterialsToolProperties_Statics::NewProp_MaterialNamesList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditMeshMaterialsToolProperties_Statics::NewProp_Materials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditMeshMaterialsToolProperties_Statics::NewProp_Materials,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditMeshMaterialsToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditMeshMaterialsToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditMeshMaterialsToolProperties_Statics::ClassParams = {
		&UEditMeshMaterialsToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEditMeshMaterialsToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditMeshMaterialsToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UEditMeshMaterialsToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditMeshMaterialsToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditMeshMaterialsToolProperties()
	{
		if (!Z_Registration_Info_UClass_UEditMeshMaterialsToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditMeshMaterialsToolProperties.OuterSingleton, Z_Construct_UClass_UEditMeshMaterialsToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditMeshMaterialsToolProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UClass* StaticClass<UEditMeshMaterialsToolProperties>()
	{
		return UEditMeshMaterialsToolProperties::StaticClass();
	}
	UEditMeshMaterialsToolProperties::UEditMeshMaterialsToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditMeshMaterialsToolProperties);
	UEditMeshMaterialsToolProperties::~UEditMeshMaterialsToolProperties() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEditMeshMaterialsToolActions;
	static UEnum* EEditMeshMaterialsToolActions_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEditMeshMaterialsToolActions.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEditMeshMaterialsToolActions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EEditMeshMaterialsToolActions, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp(), TEXT("EEditMeshMaterialsToolActions"));
		}
		return Z_Registration_Info_UEnum_EEditMeshMaterialsToolActions.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UEnum* StaticEnum<EEditMeshMaterialsToolActions>()
	{
		return EEditMeshMaterialsToolActions_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EEditMeshMaterialsToolActions_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EEditMeshMaterialsToolActions_Statics::Enumerators[] = {
		{ "EEditMeshMaterialsToolActions::NoAction", (int64)EEditMeshMaterialsToolActions::NoAction },
		{ "EEditMeshMaterialsToolActions::AssignMaterial", (int64)EEditMeshMaterialsToolActions::AssignMaterial },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EEditMeshMaterialsToolActions_Statics::Enum_MetaDataParams[] = {
		{ "AssignMaterial.Name", "EEditMeshMaterialsToolActions::AssignMaterial" },
		{ "ModuleRelativePath", "Public/EditMeshMaterialsTool.h" },
		{ "NoAction.Name", "EEditMeshMaterialsToolActions::NoAction" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EEditMeshMaterialsToolActions_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
		nullptr,
		"EEditMeshMaterialsToolActions",
		"EEditMeshMaterialsToolActions",
		Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EEditMeshMaterialsToolActions_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EEditMeshMaterialsToolActions_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EEditMeshMaterialsToolActions_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EEditMeshMaterialsToolActions_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EEditMeshMaterialsToolActions()
	{
		if (!Z_Registration_Info_UEnum_EEditMeshMaterialsToolActions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEditMeshMaterialsToolActions.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EEditMeshMaterialsToolActions_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEditMeshMaterialsToolActions.InnerSingleton;
	}
	DEFINE_FUNCTION(UEditMeshMaterialsEditActions::execAssignActiveMaterial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AssignActiveMaterial();
		P_NATIVE_END;
	}
	void UEditMeshMaterialsEditActions::StaticRegisterNativesUEditMeshMaterialsEditActions()
	{
		UClass* Class = UEditMeshMaterialsEditActions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AssignActiveMaterial", &UEditMeshMaterialsEditActions::execAssignActiveMaterial },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEditMeshMaterialsEditActions_AssignActiveMaterial_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditMeshMaterialsEditActions_AssignActiveMaterial_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "MaterialEdits" },
		{ "DisplayName", "Assign Active Material" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/EditMeshMaterialsTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditMeshMaterialsEditActions_AssignActiveMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditMeshMaterialsEditActions, nullptr, "AssignActiveMaterial", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditMeshMaterialsEditActions_AssignActiveMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditMeshMaterialsEditActions_AssignActiveMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditMeshMaterialsEditActions_AssignActiveMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditMeshMaterialsEditActions_AssignActiveMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditMeshMaterialsEditActions);
	UClass* Z_Construct_UClass_UEditMeshMaterialsEditActions_NoRegister()
	{
		return UEditMeshMaterialsEditActions::StaticClass();
	}
	struct Z_Construct_UClass_UEditMeshMaterialsEditActions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditMeshMaterialsEditActions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshSelectionToolActionPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEditMeshMaterialsEditActions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEditMeshMaterialsEditActions_AssignActiveMaterial, "AssignActiveMaterial" }, // 3749449099
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditMeshMaterialsEditActions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditMeshMaterialsTool.h" },
		{ "ModuleRelativePath", "Public/EditMeshMaterialsTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditMeshMaterialsEditActions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditMeshMaterialsEditActions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditMeshMaterialsEditActions_Statics::ClassParams = {
		&UEditMeshMaterialsEditActions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEditMeshMaterialsEditActions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditMeshMaterialsEditActions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditMeshMaterialsEditActions()
	{
		if (!Z_Registration_Info_UClass_UEditMeshMaterialsEditActions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditMeshMaterialsEditActions.OuterSingleton, Z_Construct_UClass_UEditMeshMaterialsEditActions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditMeshMaterialsEditActions.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UClass* StaticClass<UEditMeshMaterialsEditActions>()
	{
		return UEditMeshMaterialsEditActions::StaticClass();
	}
	UEditMeshMaterialsEditActions::UEditMeshMaterialsEditActions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditMeshMaterialsEditActions);
	UEditMeshMaterialsEditActions::~UEditMeshMaterialsEditActions() {}
	void UEditMeshMaterialsTool::StaticRegisterNativesUEditMeshMaterialsTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditMeshMaterialsTool);
	UClass* Z_Construct_UClass_UEditMeshMaterialsTool_NoRegister()
	{
		return UEditMeshMaterialsTool::StaticClass();
	}
	struct Z_Construct_UClass_UEditMeshMaterialsTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialProps_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MaterialProps;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditMeshMaterialsTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshSelectionTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditMeshMaterialsTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "EditMeshMaterialsTool.h" },
		{ "ModuleRelativePath", "Public/EditMeshMaterialsTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditMeshMaterialsTool_Statics::NewProp_MaterialProps_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditMeshMaterialsTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditMeshMaterialsTool_Statics::NewProp_MaterialProps = { "MaterialProps", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditMeshMaterialsTool, MaterialProps), Z_Construct_UClass_UEditMeshMaterialsToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditMeshMaterialsTool_Statics::NewProp_MaterialProps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditMeshMaterialsTool_Statics::NewProp_MaterialProps_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditMeshMaterialsTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditMeshMaterialsTool_Statics::NewProp_MaterialProps,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditMeshMaterialsTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditMeshMaterialsTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditMeshMaterialsTool_Statics::ClassParams = {
		&UEditMeshMaterialsTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditMeshMaterialsTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditMeshMaterialsTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UEditMeshMaterialsTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditMeshMaterialsTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditMeshMaterialsTool()
	{
		if (!Z_Registration_Info_UClass_UEditMeshMaterialsTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditMeshMaterialsTool.OuterSingleton, Z_Construct_UClass_UEditMeshMaterialsTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditMeshMaterialsTool.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UClass* StaticClass<UEditMeshMaterialsTool>()
	{
		return UEditMeshMaterialsTool::StaticClass();
	}
	UEditMeshMaterialsTool::UEditMeshMaterialsTool() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditMeshMaterialsTool);
	UEditMeshMaterialsTool::~UEditMeshMaterialsTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_EditMeshMaterialsTool_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_EditMeshMaterialsTool_h_Statics::EnumInfo[] = {
		{ EEditMeshMaterialsToolActions_StaticEnum, TEXT("EEditMeshMaterialsToolActions"), &Z_Registration_Info_UEnum_EEditMeshMaterialsToolActions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2849561519U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_EditMeshMaterialsTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditMeshMaterialsToolBuilder, UEditMeshMaterialsToolBuilder::StaticClass, TEXT("UEditMeshMaterialsToolBuilder"), &Z_Registration_Info_UClass_UEditMeshMaterialsToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditMeshMaterialsToolBuilder), 210439394U) },
		{ Z_Construct_UClass_UEditMeshMaterialsToolProperties, UEditMeshMaterialsToolProperties::StaticClass, TEXT("UEditMeshMaterialsToolProperties"), &Z_Registration_Info_UClass_UEditMeshMaterialsToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditMeshMaterialsToolProperties), 1690309927U) },
		{ Z_Construct_UClass_UEditMeshMaterialsEditActions, UEditMeshMaterialsEditActions::StaticClass, TEXT("UEditMeshMaterialsEditActions"), &Z_Registration_Info_UClass_UEditMeshMaterialsEditActions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditMeshMaterialsEditActions), 2556237046U) },
		{ Z_Construct_UClass_UEditMeshMaterialsTool, UEditMeshMaterialsTool::StaticClass, TEXT("UEditMeshMaterialsTool"), &Z_Registration_Info_UClass_UEditMeshMaterialsTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditMeshMaterialsTool), 1505920262U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_EditMeshMaterialsTool_h_2326575211(TEXT("/Script/MeshModelingToolsEditorOnlyExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_EditMeshMaterialsTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_EditMeshMaterialsTool_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_EditMeshMaterialsTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_EditMeshMaterialsTool_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
