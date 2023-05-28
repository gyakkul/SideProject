// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldConditionSchema.h"
#include "WorldConditionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldConditionSchema() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_WorldConditions();
	WORLDCONDITIONS_API UClass* Z_Construct_UClass_UWorldConditionSchema();
	WORLDCONDITIONS_API UClass* Z_Construct_UClass_UWorldConditionSchema_NoRegister();
	WORLDCONDITIONS_API UScriptStruct* Z_Construct_UScriptStruct_FWorldConditionContextDataDesc();
// End Cross Module References
	void UWorldConditionSchema::StaticRegisterNativesUWorldConditionSchema()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldConditionSchema);
	UClass* Z_Construct_UClass_UWorldConditionSchema_NoRegister()
	{
		return UWorldConditionSchema::StaticClass();
	}
	struct Z_Construct_UClass_UWorldConditionSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ContextDataDescs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextDataDescs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ContextDataDescs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldConditionSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldConditions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldConditionSchema_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Describes the context data and allowed world conditions for a specific use case.\n *\n * Each schema adds the context data they can provide in their class constructor. This allows\n * the derived classes to add more data as needed.\n *\n *\x09UCLASS()\n *\x09""class UFantasticWorldConditionSchema : public UWorldConditionSchema\n *\x09{\n *\x09\x09GENERATED_BODY()\n *\x09public:\n *\x09\x09UFantasticWorldConditionSchema::UFantasticWorldConditionSchema(const FObjectInitializer& ObjectInitializer)\n *\x09\x09\x09: Super(ObjectInitializer)\n *\x09\x09{\n *\x09\x09\x09""ActorRef = AddContextDataDesc(TEXT(\"Actor\"), AActor::StaticClass(), EWorldConditionContextDataType::Dynamic);\n *\x09\x09}\n *\n *\x09\x09// For convenience, when the schema is known, makes it easy to set the context data.\n *\x09\x09""FWorldConditionContextDataRef GetActorRef() const { return ActorRef; }\n *\n *\x09protected:\n *\x09\x09// Filter condition classes that make sense for this context.\n *\x09\x09virtual bool IsStructAllowed(const UScriptStruct* InScriptStruct) const override;\n *\x09\x09{\n *\x09\x09\x09return Super::IsStructAllowed(InScriptStruct)\n *\x09\x09\x09\x09|| InScriptStruct->IsChildOf(TBaseStructure<FFantasticWorldConditionBase>::Get());\n * \x09\x09}\n *\x09\x09\n *\x09\x09""FWorldConditionContextDataRef ActorRef;\n *\x09};\n*/" },
		{ "IncludePath", "WorldConditionSchema.h" },
		{ "ModuleRelativePath", "Public/WorldConditionSchema.h" },
		{ "ToolTip", "Describes the context data and allowed world conditions for a specific use case.\n\nEach schema adds the context data they can provide in their class constructor. This allows\nthe derived classes to add more data as needed.\n\n    UCLASS()\n    class UFantasticWorldConditionSchema : public UWorldConditionSchema\n    {\n            GENERATED_BODY()\n    public:\n            UFantasticWorldConditionSchema::UFantasticWorldConditionSchema(const FObjectInitializer& ObjectInitializer)\n                    : Super(ObjectInitializer)\n            {\n                    ActorRef = AddContextDataDesc(TEXT(\"Actor\"), AActor::StaticClass(), EWorldConditionContextDataType::Dynamic);\n            }\n\n            // For convenience, when the schema is known, makes it easy to set the context data.\n            FWorldConditionContextDataRef GetActorRef() const { return ActorRef; }\n\n    protected:\n            // Filter condition classes that make sense for this context.\n            virtual bool IsStructAllowed(const UScriptStruct* InScriptStruct) const override;\n            {\n                    return Super::IsStructAllowed(InScriptStruct)\n                            || InScriptStruct->IsChildOf(TBaseStructure<FFantasticWorldConditionBase>::Get());\n            }\n\n            FWorldConditionContextDataRef ActorRef;\n    };" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldConditionSchema_Statics::NewProp_ContextDataDescs_Inner = { "ContextDataDescs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FWorldConditionContextDataDesc, METADATA_PARAMS(nullptr, 0) }; // 2790061242
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldConditionSchema_Statics::NewProp_ContextDataDescs_MetaData[] = {
		{ "Comment", "/** All context data descriptors. */" },
		{ "ModuleRelativePath", "Public/WorldConditionSchema.h" },
		{ "ToolTip", "All context data descriptors." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorldConditionSchema_Statics::NewProp_ContextDataDescs = { "ContextDataDescs", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldConditionSchema, ContextDataDescs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWorldConditionSchema_Statics::NewProp_ContextDataDescs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldConditionSchema_Statics::NewProp_ContextDataDescs_MetaData)) }; // 2790061242
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldConditionSchema_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldConditionSchema_Statics::NewProp_ContextDataDescs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldConditionSchema_Statics::NewProp_ContextDataDescs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldConditionSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldConditionSchema>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldConditionSchema_Statics::ClassParams = {
		&UWorldConditionSchema::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWorldConditionSchema_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWorldConditionSchema_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWorldConditionSchema_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldConditionSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldConditionSchema()
	{
		if (!Z_Registration_Info_UClass_UWorldConditionSchema.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldConditionSchema.OuterSingleton, Z_Construct_UClass_UWorldConditionSchema_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldConditionSchema.OuterSingleton;
	}
	template<> WORLDCONDITIONS_API UClass* StaticClass<UWorldConditionSchema>()
	{
		return UWorldConditionSchema::StaticClass();
	}
	UWorldConditionSchema::UWorldConditionSchema(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldConditionSchema);
	UWorldConditionSchema::~UWorldConditionSchema() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WorldConditions_Source_WorldConditions_Public_WorldConditionSchema_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WorldConditions_Source_WorldConditions_Public_WorldConditionSchema_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWorldConditionSchema, UWorldConditionSchema::StaticClass, TEXT("UWorldConditionSchema"), &Z_Registration_Info_UClass_UWorldConditionSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldConditionSchema), 4002689378U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WorldConditions_Source_WorldConditions_Public_WorldConditionSchema_h_2767669610(TEXT("/Script/WorldConditions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WorldConditions_Source_WorldConditions_Public_WorldConditionSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WorldConditions_Source_WorldConditions_Public_WorldConditionSchema_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
