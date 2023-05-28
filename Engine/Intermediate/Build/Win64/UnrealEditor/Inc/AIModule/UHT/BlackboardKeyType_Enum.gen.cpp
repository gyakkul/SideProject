// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyType_Enum.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlackboardKeyType_Enum() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType_Enum();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType_Enum_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UEnum();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UBlackboardKeyType_Enum::StaticRegisterNativesUBlackboardKeyType_Enum()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlackboardKeyType_Enum);
	UClass* Z_Construct_UClass_UBlackboardKeyType_Enum_NoRegister()
	{
		return UBlackboardKeyType_Enum::StaticClass();
	}
	struct Z_Construct_UClass_UBlackboardKeyType_Enum_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnumType_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EnumType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnumName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EnumName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnumNameValid_MetaData[];
#endif
		static void NewProp_bIsEnumNameValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnumNameValid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlackboardKeyType,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Blackboard" },
		{ "DisplayName", "Enum" },
		{ "IncludePath", "BehaviorTree/Blackboard/BlackboardKeyType_Enum.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Blackboard/BlackboardKeyType_Enum.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::NewProp_EnumType_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Blackboard/BlackboardKeyType_Enum.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::NewProp_EnumType = { "EnumType", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlackboardKeyType_Enum, EnumType), Z_Construct_UClass_UEnum, METADATA_PARAMS(Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::NewProp_EnumType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::NewProp_EnumType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::NewProp_EnumName_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** name of enum defined in c++ code, will take priority over asset from EnumType property */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Blackboard/BlackboardKeyType_Enum.h" },
		{ "ToolTip", "name of enum defined in c++ code, will take priority over asset from EnumType property" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::NewProp_EnumName = { "EnumName", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlackboardKeyType_Enum, EnumName), METADATA_PARAMS(Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::NewProp_EnumName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::NewProp_EnumName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::NewProp_bIsEnumNameValid_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** set when EnumName override is valid and active */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Blackboard/BlackboardKeyType_Enum.h" },
		{ "ToolTip", "set when EnumName override is valid and active" },
	};
#endif
	void Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::NewProp_bIsEnumNameValid_SetBit(void* Obj)
	{
		((UBlackboardKeyType_Enum*)Obj)->bIsEnumNameValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::NewProp_bIsEnumNameValid = { "bIsEnumNameValid", nullptr, (EPropertyFlags)0x0010000000030001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UBlackboardKeyType_Enum), &Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::NewProp_bIsEnumNameValid_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::NewProp_bIsEnumNameValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::NewProp_bIsEnumNameValid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::NewProp_EnumType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::NewProp_EnumName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::NewProp_bIsEnumNameValid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlackboardKeyType_Enum>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::ClassParams = {
		&UBlackboardKeyType_Enum::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlackboardKeyType_Enum()
	{
		if (!Z_Registration_Info_UClass_UBlackboardKeyType_Enum.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlackboardKeyType_Enum.OuterSingleton, Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlackboardKeyType_Enum.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UBlackboardKeyType_Enum>()
	{
		return UBlackboardKeyType_Enum::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlackboardKeyType_Enum);
	UBlackboardKeyType_Enum::~UBlackboardKeyType_Enum() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_Enum_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_Enum_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlackboardKeyType_Enum, UBlackboardKeyType_Enum::StaticClass, TEXT("UBlackboardKeyType_Enum"), &Z_Registration_Info_UClass_UBlackboardKeyType_Enum, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlackboardKeyType_Enum), 410541126U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_Enum_h_1254713725(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_Enum_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_Enum_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
