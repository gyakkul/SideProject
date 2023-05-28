// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionNamedReroute.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionNamedReroute() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionNamedRerouteBase();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionNamedRerouteBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionRerouteBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionNamedRerouteBase::StaticRegisterNativesUMaterialExpressionNamedRerouteBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionNamedRerouteBase);
	UClass* Z_Construct_UClass_UMaterialExpressionNamedRerouteBase_NoRegister()
	{
		return UMaterialExpressionNamedRerouteBase::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionNamedRerouteBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionNamedRerouteBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpressionRerouteBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionNamedRerouteBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionNamedReroute.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNamedReroute.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionNamedRerouteBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionNamedRerouteBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionNamedRerouteBase_Statics::ClassParams = {
		&UMaterialExpressionNamedRerouteBase::StaticClass,
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
		0x001000B1u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionNamedRerouteBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNamedRerouteBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionNamedRerouteBase()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionNamedRerouteBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionNamedRerouteBase.OuterSingleton, Z_Construct_UClass_UMaterialExpressionNamedRerouteBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionNamedRerouteBase.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionNamedRerouteBase>()
	{
		return UMaterialExpressionNamedRerouteBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionNamedRerouteBase);
	UMaterialExpressionNamedRerouteBase::~UMaterialExpressionNamedRerouteBase() {}
	void UMaterialExpressionNamedRerouteDeclaration::StaticRegisterNativesUMaterialExpressionNamedRerouteDeclaration()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionNamedRerouteDeclaration);
	UClass* Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_NoRegister()
	{
		return UMaterialExpressionNamedRerouteDeclaration::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariableGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VariableGuid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpressionNamedRerouteBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Named Reroute Declaration" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionNamedReroute.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNamedReroute.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::NewProp_Input_MetaData[] = {
		{ "Comment", "// The input pin\n" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNamedReroute.h" },
		{ "ToolTip", "The input pin" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionNamedRerouteDeclaration, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::NewProp_Input_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "MaterialExpressionNamedRerouteDeclaration" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNamedReroute.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionNamedRerouteDeclaration, Name), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::NewProp_NodeColor_MetaData[] = {
		{ "Category", "MaterialExpressionNamedRerouteDeclaration" },
		{ "Comment", "/** The color of the graph node. The same color will apply to all linked usages of this Declaration node */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNamedReroute.h" },
		{ "ToolTip", "The color of the graph node. The same color will apply to all linked usages of this Declaration node" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::NewProp_NodeColor = { "NodeColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionNamedRerouteDeclaration, NodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::NewProp_NodeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::NewProp_NodeColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::NewProp_VariableGuid_MetaData[] = {
		{ "Comment", "// The variable GUID, to support copy across graphs\n" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNamedReroute.h" },
		{ "ToolTip", "The variable GUID, to support copy across graphs" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::NewProp_VariableGuid = { "VariableGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionNamedRerouteDeclaration, VariableGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::NewProp_VariableGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::NewProp_VariableGuid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::NewProp_NodeColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::NewProp_VariableGuid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionNamedRerouteDeclaration>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::ClassParams = {
		&UMaterialExpressionNamedRerouteDeclaration::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::PropPointers),
		0,
		0x001020B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionNamedRerouteDeclaration.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionNamedRerouteDeclaration.OuterSingleton, Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionNamedRerouteDeclaration.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionNamedRerouteDeclaration>()
	{
		return UMaterialExpressionNamedRerouteDeclaration::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionNamedRerouteDeclaration);
	UMaterialExpressionNamedRerouteDeclaration::~UMaterialExpressionNamedRerouteDeclaration() {}
	void UMaterialExpressionNamedRerouteUsage::StaticRegisterNativesUMaterialExpressionNamedRerouteUsage()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionNamedRerouteUsage);
	UClass* Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_NoRegister()
	{
		return UMaterialExpressionNamedRerouteUsage::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Declaration_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Declaration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeclarationGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeclarationGuid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpressionNamedRerouteBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Named Reroute Usage" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionNamedReroute.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNamedReroute.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_Statics::NewProp_Declaration_MetaData[] = {
		{ "Comment", "// The declaration this node is linked to\n" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNamedReroute.h" },
		{ "ToolTip", "The declaration this node is linked to" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_Statics::NewProp_Declaration = { "Declaration", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionNamedRerouteUsage, Declaration), Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_Statics::NewProp_Declaration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_Statics::NewProp_Declaration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_Statics::NewProp_DeclarationGuid_MetaData[] = {
		{ "Comment", "// The variable GUID, to support copy across graphs\n" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNamedReroute.h" },
		{ "ToolTip", "The variable GUID, to support copy across graphs" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_Statics::NewProp_DeclarationGuid = { "DeclarationGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionNamedRerouteUsage, DeclarationGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_Statics::NewProp_DeclarationGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_Statics::NewProp_DeclarationGuid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_Statics::NewProp_Declaration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_Statics::NewProp_DeclarationGuid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionNamedRerouteUsage>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_Statics::ClassParams = {
		&UMaterialExpressionNamedRerouteUsage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_Statics::PropPointers),
		0,
		0x001020B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionNamedRerouteUsage.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionNamedRerouteUsage.OuterSingleton, Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionNamedRerouteUsage.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionNamedRerouteUsage>()
	{
		return UMaterialExpressionNamedRerouteUsage::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionNamedRerouteUsage);
	UMaterialExpressionNamedRerouteUsage::~UMaterialExpressionNamedRerouteUsage() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNamedReroute_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNamedReroute_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionNamedRerouteBase, UMaterialExpressionNamedRerouteBase::StaticClass, TEXT("UMaterialExpressionNamedRerouteBase"), &Z_Registration_Info_UClass_UMaterialExpressionNamedRerouteBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionNamedRerouteBase), 1085663772U) },
		{ Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration, UMaterialExpressionNamedRerouteDeclaration::StaticClass, TEXT("UMaterialExpressionNamedRerouteDeclaration"), &Z_Registration_Info_UClass_UMaterialExpressionNamedRerouteDeclaration, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionNamedRerouteDeclaration), 1416086180U) },
		{ Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage, UMaterialExpressionNamedRerouteUsage::StaticClass, TEXT("UMaterialExpressionNamedRerouteUsage"), &Z_Registration_Info_UClass_UMaterialExpressionNamedRerouteUsage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionNamedRerouteUsage), 3418692071U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNamedReroute_h_1727259404(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNamedReroute_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNamedReroute_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
