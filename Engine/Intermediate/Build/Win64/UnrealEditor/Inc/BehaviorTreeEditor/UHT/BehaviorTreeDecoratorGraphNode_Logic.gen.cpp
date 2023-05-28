// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BehaviorTreeDecoratorGraphNode_Logic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBehaviorTreeDecoratorGraphNode_Logic() {}
// Cross Module References
	BEHAVIORTREEEDITOR_API UClass* Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode();
	BEHAVIORTREEEDITOR_API UClass* Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Logic();
	BEHAVIORTREEEDITOR_API UClass* Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Logic_NoRegister();
	BEHAVIORTREEEDITOR_API UEnum* Z_Construct_UEnum_BehaviorTreeEditor_EDecoratorLogicMode();
	UPackage* Z_Construct_UPackage__Script_BehaviorTreeEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDecoratorLogicMode;
	static UEnum* EDecoratorLogicMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDecoratorLogicMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDecoratorLogicMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BehaviorTreeEditor_EDecoratorLogicMode, (UObject*)Z_Construct_UPackage__Script_BehaviorTreeEditor(), TEXT("EDecoratorLogicMode"));
		}
		return Z_Registration_Info_UEnum_EDecoratorLogicMode.OuterSingleton;
	}
	template<> BEHAVIORTREEEDITOR_API UEnum* StaticEnum<EDecoratorLogicMode::Type>()
	{
		return EDecoratorLogicMode_StaticEnum();
	}
	struct Z_Construct_UEnum_BehaviorTreeEditor_EDecoratorLogicMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_BehaviorTreeEditor_EDecoratorLogicMode_Statics::Enumerators[] = {
		{ "EDecoratorLogicMode::Sink", (int64)EDecoratorLogicMode::Sink },
		{ "EDecoratorLogicMode::And", (int64)EDecoratorLogicMode::And },
		{ "EDecoratorLogicMode::Or", (int64)EDecoratorLogicMode::Or },
		{ "EDecoratorLogicMode::Not", (int64)EDecoratorLogicMode::Not },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_BehaviorTreeEditor_EDecoratorLogicMode_Statics::Enum_MetaDataParams[] = {
		{ "And.Name", "EDecoratorLogicMode::And" },
		{ "ModuleRelativePath", "Classes/BehaviorTreeDecoratorGraphNode_Logic.h" },
		{ "Not.Name", "EDecoratorLogicMode::Not" },
		{ "Or.Name", "EDecoratorLogicMode::Or" },
		{ "Sink.Name", "EDecoratorLogicMode::Sink" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BehaviorTreeEditor_EDecoratorLogicMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_BehaviorTreeEditor,
		nullptr,
		"EDecoratorLogicMode",
		"EDecoratorLogicMode::Type",
		Z_Construct_UEnum_BehaviorTreeEditor_EDecoratorLogicMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_BehaviorTreeEditor_EDecoratorLogicMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_BehaviorTreeEditor_EDecoratorLogicMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_BehaviorTreeEditor_EDecoratorLogicMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_BehaviorTreeEditor_EDecoratorLogicMode()
	{
		if (!Z_Registration_Info_UEnum_EDecoratorLogicMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDecoratorLogicMode.InnerSingleton, Z_Construct_UEnum_BehaviorTreeEditor_EDecoratorLogicMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDecoratorLogicMode.InnerSingleton;
	}
	void UBehaviorTreeDecoratorGraphNode_Logic::StaticRegisterNativesUBehaviorTreeDecoratorGraphNode_Logic()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviorTreeDecoratorGraphNode_Logic);
	UClass* Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Logic_NoRegister()
	{
		return UBehaviorTreeDecoratorGraphNode_Logic::StaticClass();
	}
	struct Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Logic_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LogicMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LogicMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Logic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_BehaviorTreeEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Logic_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTreeDecoratorGraphNode_Logic.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTreeDecoratorGraphNode_Logic.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Logic_Statics::NewProp_LogicMode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTreeDecoratorGraphNode_Logic.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Logic_Statics::NewProp_LogicMode = { "LogicMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBehaviorTreeDecoratorGraphNode_Logic, LogicMode), Z_Construct_UEnum_BehaviorTreeEditor_EDecoratorLogicMode, METADATA_PARAMS(Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Logic_Statics::NewProp_LogicMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Logic_Statics::NewProp_LogicMode_MetaData)) }; // 1633393309
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Logic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Logic_Statics::NewProp_LogicMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Logic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviorTreeDecoratorGraphNode_Logic>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Logic_Statics::ClassParams = {
		&UBehaviorTreeDecoratorGraphNode_Logic::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Logic_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Logic_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Logic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Logic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Logic()
	{
		if (!Z_Registration_Info_UClass_UBehaviorTreeDecoratorGraphNode_Logic.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviorTreeDecoratorGraphNode_Logic.OuterSingleton, Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Logic_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBehaviorTreeDecoratorGraphNode_Logic.OuterSingleton;
	}
	template<> BEHAVIORTREEEDITOR_API UClass* StaticClass<UBehaviorTreeDecoratorGraphNode_Logic>()
	{
		return UBehaviorTreeDecoratorGraphNode_Logic::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviorTreeDecoratorGraphNode_Logic);
	UBehaviorTreeDecoratorGraphNode_Logic::~UBehaviorTreeDecoratorGraphNode_Logic() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraphNode_Logic_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraphNode_Logic_h_Statics::EnumInfo[] = {
		{ EDecoratorLogicMode_StaticEnum, TEXT("EDecoratorLogicMode"), &Z_Registration_Info_UEnum_EDecoratorLogicMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1633393309U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraphNode_Logic_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Logic, UBehaviorTreeDecoratorGraphNode_Logic::StaticClass, TEXT("UBehaviorTreeDecoratorGraphNode_Logic"), &Z_Registration_Info_UClass_UBehaviorTreeDecoratorGraphNode_Logic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviorTreeDecoratorGraphNode_Logic), 4063001274U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraphNode_Logic_h_2926710062(TEXT("/Script/BehaviorTreeEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraphNode_Logic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraphNode_Logic_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraphNode_Logic_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraphNode_Logic_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
