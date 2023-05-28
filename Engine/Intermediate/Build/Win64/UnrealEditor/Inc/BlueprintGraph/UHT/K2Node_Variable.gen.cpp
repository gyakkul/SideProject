// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_Variable.h"
#include "../../Source/Runtime/Engine/Classes/Engine/MemberReference.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_Variable() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Variable();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Variable_NoRegister();
	BLUEPRINTGRAPH_API UEnum* Z_Construct_UEnum_BlueprintGraph_ESelfContextInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMemberReference();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESelfContextInfo;
	static UEnum* ESelfContextInfo_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESelfContextInfo.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESelfContextInfo.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BlueprintGraph_ESelfContextInfo, (UObject*)Z_Construct_UPackage__Script_BlueprintGraph(), TEXT("ESelfContextInfo"));
		}
		return Z_Registration_Info_UEnum_ESelfContextInfo.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UEnum* StaticEnum<ESelfContextInfo::Type>()
	{
		return ESelfContextInfo_StaticEnum();
	}
	struct Z_Construct_UEnum_BlueprintGraph_ESelfContextInfo_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_BlueprintGraph_ESelfContextInfo_Statics::Enumerators[] = {
		{ "ESelfContextInfo::Unspecified", (int64)ESelfContextInfo::Unspecified },
		{ "ESelfContextInfo::NotSelfContext", (int64)ESelfContextInfo::NotSelfContext },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_BlueprintGraph_ESelfContextInfo_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/K2Node_Variable.h" },
		{ "NotSelfContext.Name", "ESelfContextInfo::NotSelfContext" },
		{ "Unspecified.Name", "ESelfContextInfo::Unspecified" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BlueprintGraph_ESelfContextInfo_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_BlueprintGraph,
		nullptr,
		"ESelfContextInfo",
		"ESelfContextInfo::Type",
		Z_Construct_UEnum_BlueprintGraph_ESelfContextInfo_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_BlueprintGraph_ESelfContextInfo_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_BlueprintGraph_ESelfContextInfo_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_BlueprintGraph_ESelfContextInfo_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_BlueprintGraph_ESelfContextInfo()
	{
		if (!Z_Registration_Info_UEnum_ESelfContextInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESelfContextInfo.InnerSingleton, Z_Construct_UEnum_BlueprintGraph_ESelfContextInfo_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESelfContextInfo.InnerSingleton;
	}
	void UK2Node_Variable::StaticRegisterNativesUK2Node_Variable()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_Variable);
	UClass* Z_Construct_UClass_UK2Node_Variable_NoRegister()
	{
		return UK2Node_Variable::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_Variable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariableReference_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VariableReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelfContextInfo_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SelfContextInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariableSourceClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_VariableSourceClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariableName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_VariableName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSelfContext_MetaData[];
#endif
		static void NewProp_bSelfContext_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelfContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_Variable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Variable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_Variable.h" },
		{ "ModuleRelativePath", "Classes/K2Node_Variable.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Variable_Statics::NewProp_VariableReference_MetaData[] = {
		{ "BlueprintSearchable", "true" },
		{ "BlueprintSearchableFormatVersion", "FIB_VER_VARIABLE_REFERENCE" },
		{ "BlueprintSearchableHiddenExplicit", "true" },
		{ "Comment", "/** Reference to variable we want to set/get */" },
		{ "ModuleRelativePath", "Classes/K2Node_Variable.h" },
		{ "ToolTip", "Reference to variable we want to set/get" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK2Node_Variable_Statics::NewProp_VariableReference = { "VariableReference", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_Variable, VariableReference), Z_Construct_UScriptStruct_FMemberReference, METADATA_PARAMS(Z_Construct_UClass_UK2Node_Variable_Statics::NewProp_VariableReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_Variable_Statics::NewProp_VariableReference_MetaData)) }; // 2112165407
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Variable_Statics::NewProp_SelfContextInfo_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_Variable.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UK2Node_Variable_Statics::NewProp_SelfContextInfo = { "SelfContextInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_Variable, SelfContextInfo), Z_Construct_UEnum_BlueprintGraph_ESelfContextInfo, METADATA_PARAMS(Z_Construct_UClass_UK2Node_Variable_Statics::NewProp_SelfContextInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_Variable_Statics::NewProp_SelfContextInfo_MetaData)) }; // 1109796606
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Variable_Statics::NewProp_VariableSourceClass_MetaData[] = {
		{ "Comment", "/** Class that this variable is defined in. Should be NULL if bSelfContext is true.  */" },
		{ "ModuleRelativePath", "Classes/K2Node_Variable.h" },
		{ "ToolTip", "Class that this variable is defined in. Should be NULL if bSelfContext is true." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UK2Node_Variable_Statics::NewProp_VariableSourceClass = { "VariableSourceClass", nullptr, (EPropertyFlags)0x0024080020000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_Variable, VariableSourceClass_DEPRECATED), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK2Node_Variable_Statics::NewProp_VariableSourceClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_Variable_Statics::NewProp_VariableSourceClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Variable_Statics::NewProp_VariableName_MetaData[] = {
		{ "Comment", "/** Name of variable */" },
		{ "ModuleRelativePath", "Classes/K2Node_Variable.h" },
		{ "ToolTip", "Name of variable" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UK2Node_Variable_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0020080020000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_Variable, VariableName_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UK2Node_Variable_Statics::NewProp_VariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_Variable_Statics::NewProp_VariableName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Variable_Statics::NewProp_bSelfContext_MetaData[] = {
		{ "Comment", "/** Whether or not this should be a \"self\" context */" },
		{ "ModuleRelativePath", "Classes/K2Node_Variable.h" },
		{ "ToolTip", "Whether or not this should be a \"self\" context" },
	};
#endif
	void Z_Construct_UClass_UK2Node_Variable_Statics::NewProp_bSelfContext_SetBit(void* Obj)
	{
		((UK2Node_Variable*)Obj)->bSelfContext_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_Variable_Statics::NewProp_bSelfContext = { "bSelfContext", nullptr, (EPropertyFlags)0x0020080020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UK2Node_Variable), &Z_Construct_UClass_UK2Node_Variable_Statics::NewProp_bSelfContext_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_Variable_Statics::NewProp_bSelfContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_Variable_Statics::NewProp_bSelfContext_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_Variable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Variable_Statics::NewProp_VariableReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Variable_Statics::NewProp_SelfContextInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Variable_Statics::NewProp_VariableSourceClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Variable_Statics::NewProp_VariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Variable_Statics::NewProp_bSelfContext,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_Variable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_Variable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_Variable_Statics::ClassParams = {
		&UK2Node_Variable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_Variable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_Variable_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_Variable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_Variable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_Variable()
	{
		if (!Z_Registration_Info_UClass_UK2Node_Variable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_Variable.OuterSingleton, Z_Construct_UClass_UK2Node_Variable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_Variable.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_Variable>()
	{
		return UK2Node_Variable::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_Variable);
	UK2Node_Variable::~UK2Node_Variable() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UK2Node_Variable)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h_Statics::EnumInfo[] = {
		{ ESelfContextInfo_StaticEnum, TEXT("ESelfContextInfo"), &Z_Registration_Info_UEnum_ESelfContextInfo, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1109796606U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_Variable, UK2Node_Variable::StaticClass, TEXT("UK2Node_Variable"), &Z_Registration_Info_UClass_UK2Node_Variable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_Variable), 1303348160U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h_4192732462(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
