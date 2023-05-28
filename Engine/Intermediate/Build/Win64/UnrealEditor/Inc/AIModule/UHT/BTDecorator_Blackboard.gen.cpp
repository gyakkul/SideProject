// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/BehaviorTree/Decorators/BTDecorator_Blackboard.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_Blackboard() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_Blackboard();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_Blackboard_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_BlackboardBase();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EArithmeticKeyOperation();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EBasicKeyOperation();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EBTBlackboardRestart();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_ETextKeyOperation();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBTBlackboardRestart;
	static UEnum* EBTBlackboardRestart_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBTBlackboardRestart.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBTBlackboardRestart.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EBTBlackboardRestart, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EBTBlackboardRestart"));
		}
		return Z_Registration_Info_UEnum_EBTBlackboardRestart.OuterSingleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EBTBlackboardRestart::Type>()
	{
		return EBTBlackboardRestart_StaticEnum();
	}
	struct Z_Construct_UEnum_AIModule_EBTBlackboardRestart_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AIModule_EBTBlackboardRestart_Statics::Enumerators[] = {
		{ "EBTBlackboardRestart::ValueChange", (int64)EBTBlackboardRestart::ValueChange },
		{ "EBTBlackboardRestart::ResultChange", (int64)EBTBlackboardRestart::ResultChange },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AIModule_EBTBlackboardRestart_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n *  Decorator for accessing blackboard values\n */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_Blackboard.h" },
		{ "ResultChange.DisplayName", "On Result Change" },
		{ "ResultChange.Name", "EBTBlackboardRestart::ResultChange" },
		{ "ResultChange.ToolTip", "Restart only when result of evaluated condition is changed" },
		{ "ToolTip", "Decorator for accessing blackboard values" },
		{ "ValueChange.DisplayName", "On Value Change" },
		{ "ValueChange.Name", "EBTBlackboardRestart::ValueChange" },
		{ "ValueChange.ToolTip", "Restart on every change of observed blackboard value" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EBTBlackboardRestart_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		"EBTBlackboardRestart",
		"EBTBlackboardRestart::Type",
		Z_Construct_UEnum_AIModule_EBTBlackboardRestart_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EBTBlackboardRestart_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_AIModule_EBTBlackboardRestart_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EBTBlackboardRestart_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AIModule_EBTBlackboardRestart()
	{
		if (!Z_Registration_Info_UEnum_EBTBlackboardRestart.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBTBlackboardRestart.InnerSingleton, Z_Construct_UEnum_AIModule_EBTBlackboardRestart_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBTBlackboardRestart.InnerSingleton;
	}
	void UBTDecorator_Blackboard::StaticRegisterNativesUBTDecorator_Blackboard()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTDecorator_Blackboard);
	UClass* Z_Construct_UClass_UBTDecorator_Blackboard_NoRegister()
	{
		return UBTDecorator_Blackboard::StaticClass();
	}
	struct Z_Construct_UClass_UBTDecorator_Blackboard_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedDescription_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CachedDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OperationType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_OperationType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NotifyObserver_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_NotifyObserver;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BasicOperation_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_BasicOperation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArithmeticOperation_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ArithmeticOperation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextOperation_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TextOperation;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTDecorator_Blackboard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_Blackboard_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Blackboard decorator node.\n * A decorator node that bases its condition on a Blackboard key.\n */" },
		{ "HideCategories", "Condition" },
		{ "IncludePath", "BehaviorTree/Decorators/BTDecorator_Blackboard.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_Blackboard.h" },
		{ "ToolTip", "Blackboard decorator node.\nA decorator node that bases its condition on a Blackboard key." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_IntValue_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** value for arithmetic operations */" },
		{ "DisplayName", "Key Value" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_Blackboard.h" },
		{ "ToolTip", "value for arithmetic operations" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_IntValue = { "IntValue", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTDecorator_Blackboard, IntValue), METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_IntValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_IntValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_FloatValue_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** value for arithmetic operations */" },
		{ "DisplayName", "Key Value" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_Blackboard.h" },
		{ "ToolTip", "value for arithmetic operations" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_FloatValue = { "FloatValue", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTDecorator_Blackboard, FloatValue), METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_FloatValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_FloatValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_StringValue_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** value for string operations */" },
		{ "DisplayName", "Key Value" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_Blackboard.h" },
		{ "ToolTip", "value for string operations" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_StringValue = { "StringValue", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTDecorator_Blackboard, StringValue), METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_StringValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_StringValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_CachedDescription_MetaData[] = {
		{ "Comment", "/** cached description */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_Blackboard.h" },
		{ "ToolTip", "cached description" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_CachedDescription = { "CachedDescription", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTDecorator_Blackboard, CachedDescription), METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_CachedDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_CachedDescription_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_OperationType_MetaData[] = {
		{ "Comment", "/** operation type */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_Blackboard.h" },
		{ "ToolTip", "operation type" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_OperationType = { "OperationType", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTDecorator_Blackboard, OperationType), nullptr, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_OperationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_OperationType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_NotifyObserver_MetaData[] = {
		{ "Category", "FlowControl" },
		{ "Comment", "/** when observer can try to request abort? */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_Blackboard.h" },
		{ "ToolTip", "when observer can try to request abort?" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_NotifyObserver = { "NotifyObserver", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTDecorator_Blackboard, NotifyObserver), Z_Construct_UEnum_AIModule_EBTBlackboardRestart, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_NotifyObserver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_NotifyObserver_MetaData)) }; // 4129176482
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_BasicOperation_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "DisplayName", "Key Query" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_Blackboard.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_BasicOperation = { "BasicOperation", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTDecorator_Blackboard, BasicOperation), Z_Construct_UEnum_AIModule_EBasicKeyOperation, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_BasicOperation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_BasicOperation_MetaData)) }; // 3567586789
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_ArithmeticOperation_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "DisplayName", "Key Query" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_Blackboard.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_ArithmeticOperation = { "ArithmeticOperation", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTDecorator_Blackboard, ArithmeticOperation), Z_Construct_UEnum_AIModule_EArithmeticKeyOperation, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_ArithmeticOperation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_ArithmeticOperation_MetaData)) }; // 3439700953
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_TextOperation_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "DisplayName", "Key Query" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_Blackboard.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_TextOperation = { "TextOperation", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTDecorator_Blackboard, TextOperation), Z_Construct_UEnum_AIModule_ETextKeyOperation, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_TextOperation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_TextOperation_MetaData)) }; // 1272835210
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_Blackboard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_IntValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_FloatValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_StringValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_CachedDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_OperationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_NotifyObserver,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_BasicOperation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_ArithmeticOperation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_TextOperation,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTDecorator_Blackboard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_Blackboard>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_Blackboard_Statics::ClassParams = {
		&UBTDecorator_Blackboard::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTDecorator_Blackboard_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_Blackboard_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_Blackboard_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_Blackboard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTDecorator_Blackboard()
	{
		if (!Z_Registration_Info_UClass_UBTDecorator_Blackboard.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTDecorator_Blackboard.OuterSingleton, Z_Construct_UClass_UBTDecorator_Blackboard_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTDecorator_Blackboard.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UBTDecorator_Blackboard>()
	{
		return UBTDecorator_Blackboard::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_Blackboard);
	UBTDecorator_Blackboard::~UBTDecorator_Blackboard() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Blackboard_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Blackboard_h_Statics::EnumInfo[] = {
		{ EBTBlackboardRestart_StaticEnum, TEXT("EBTBlackboardRestart"), &Z_Registration_Info_UEnum_EBTBlackboardRestart, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4129176482U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Blackboard_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTDecorator_Blackboard, UBTDecorator_Blackboard::StaticClass, TEXT("UBTDecorator_Blackboard"), &Z_Registration_Info_UClass_UBTDecorator_Blackboard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTDecorator_Blackboard), 2755534176U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Blackboard_h_3882879848(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Blackboard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Blackboard_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Blackboard_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Blackboard_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
