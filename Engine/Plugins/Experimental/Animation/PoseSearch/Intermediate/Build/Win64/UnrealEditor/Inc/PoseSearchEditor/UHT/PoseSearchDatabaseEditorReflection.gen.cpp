// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PoseSearchDatabaseEditorReflection.h"
#include "PoseSearch/PoseSearchDatabase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoseSearchDatabaseEditorReflection() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	POSESEARCH_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite();
	POSESEARCH_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace();
	POSESEARCH_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence();
	POSESEARCHEDITOR_API UClass* Z_Construct_UClass_UPoseSearchDatabaseAnimCompositeReflection();
	POSESEARCHEDITOR_API UClass* Z_Construct_UClass_UPoseSearchDatabaseAnimCompositeReflection_NoRegister();
	POSESEARCHEDITOR_API UClass* Z_Construct_UClass_UPoseSearchDatabaseBlendSpaceReflection();
	POSESEARCHEDITOR_API UClass* Z_Construct_UClass_UPoseSearchDatabaseBlendSpaceReflection_NoRegister();
	POSESEARCHEDITOR_API UClass* Z_Construct_UClass_UPoseSearchDatabaseReflectionBase();
	POSESEARCHEDITOR_API UClass* Z_Construct_UClass_UPoseSearchDatabaseReflectionBase_NoRegister();
	POSESEARCHEDITOR_API UClass* Z_Construct_UClass_UPoseSearchDatabaseSequenceReflection();
	POSESEARCHEDITOR_API UClass* Z_Construct_UClass_UPoseSearchDatabaseSequenceReflection_NoRegister();
	POSESEARCHEDITOR_API UClass* Z_Construct_UClass_UPoseSearchDatabaseStatistics();
	POSESEARCHEDITOR_API UClass* Z_Construct_UClass_UPoseSearchDatabaseStatistics_NoRegister();
	POSESEARCHEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats();
	UPackage* Z_Construct_UPackage__Script_PoseSearchEditor();
// End Cross Module References
	void UPoseSearchDatabaseReflectionBase::StaticRegisterNativesUPoseSearchDatabaseReflectionBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPoseSearchDatabaseReflectionBase);
	UClass* Z_Construct_UClass_UPoseSearchDatabaseReflectionBase_NoRegister()
	{
		return UPoseSearchDatabaseReflectionBase::StaticClass();
	}
	struct Z_Construct_UClass_UPoseSearchDatabaseReflectionBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPoseSearchDatabaseReflectionBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearchEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabaseReflectionBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PoseSearchDatabaseEditorReflection.h" },
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPoseSearchDatabaseReflectionBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoseSearchDatabaseReflectionBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoseSearchDatabaseReflectionBase_Statics::ClassParams = {
		&UPoseSearchDatabaseReflectionBase::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPoseSearchDatabaseReflectionBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseReflectionBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPoseSearchDatabaseReflectionBase()
	{
		if (!Z_Registration_Info_UClass_UPoseSearchDatabaseReflectionBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoseSearchDatabaseReflectionBase.OuterSingleton, Z_Construct_UClass_UPoseSearchDatabaseReflectionBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPoseSearchDatabaseReflectionBase.OuterSingleton;
	}
	template<> POSESEARCHEDITOR_API UClass* StaticClass<UPoseSearchDatabaseReflectionBase>()
	{
		return UPoseSearchDatabaseReflectionBase::StaticClass();
	}
	UPoseSearchDatabaseReflectionBase::UPoseSearchDatabaseReflectionBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoseSearchDatabaseReflectionBase);
	UPoseSearchDatabaseReflectionBase::~UPoseSearchDatabaseReflectionBase() {}
	void UPoseSearchDatabaseSequenceReflection::StaticRegisterNativesUPoseSearchDatabaseSequenceReflection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPoseSearchDatabaseSequenceReflection);
	UClass* Z_Construct_UClass_UPoseSearchDatabaseSequenceReflection_NoRegister()
	{
		return UPoseSearchDatabaseSequenceReflection::StaticClass();
	}
	struct Z_Construct_UClass_UPoseSearchDatabaseSequenceReflection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Sequence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPoseSearchDatabaseSequenceReflection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPoseSearchDatabaseReflectionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearchEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabaseSequenceReflection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PoseSearchDatabaseEditorReflection.h" },
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabaseSequenceReflection_Statics::NewProp_Sequence_MetaData[] = {
		{ "Category", "Selected Sequence" },
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPoseSearchDatabaseSequenceReflection_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchDatabaseSequenceReflection, Sequence), Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence, METADATA_PARAMS(Z_Construct_UClass_UPoseSearchDatabaseSequenceReflection_Statics::NewProp_Sequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseSequenceReflection_Statics::NewProp_Sequence_MetaData)) }; // 4209706154
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPoseSearchDatabaseSequenceReflection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabaseSequenceReflection_Statics::NewProp_Sequence,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPoseSearchDatabaseSequenceReflection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoseSearchDatabaseSequenceReflection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoseSearchDatabaseSequenceReflection_Statics::ClassParams = {
		&UPoseSearchDatabaseSequenceReflection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPoseSearchDatabaseSequenceReflection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseSequenceReflection_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPoseSearchDatabaseSequenceReflection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseSequenceReflection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPoseSearchDatabaseSequenceReflection()
	{
		if (!Z_Registration_Info_UClass_UPoseSearchDatabaseSequenceReflection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoseSearchDatabaseSequenceReflection.OuterSingleton, Z_Construct_UClass_UPoseSearchDatabaseSequenceReflection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPoseSearchDatabaseSequenceReflection.OuterSingleton;
	}
	template<> POSESEARCHEDITOR_API UClass* StaticClass<UPoseSearchDatabaseSequenceReflection>()
	{
		return UPoseSearchDatabaseSequenceReflection::StaticClass();
	}
	UPoseSearchDatabaseSequenceReflection::UPoseSearchDatabaseSequenceReflection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoseSearchDatabaseSequenceReflection);
	UPoseSearchDatabaseSequenceReflection::~UPoseSearchDatabaseSequenceReflection() {}
	void UPoseSearchDatabaseBlendSpaceReflection::StaticRegisterNativesUPoseSearchDatabaseBlendSpaceReflection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPoseSearchDatabaseBlendSpaceReflection);
	UClass* Z_Construct_UClass_UPoseSearchDatabaseBlendSpaceReflection_NoRegister()
	{
		return UPoseSearchDatabaseBlendSpaceReflection::StaticClass();
	}
	struct Z_Construct_UClass_UPoseSearchDatabaseBlendSpaceReflection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendSpace_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlendSpace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPoseSearchDatabaseBlendSpaceReflection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPoseSearchDatabaseReflectionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearchEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabaseBlendSpaceReflection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PoseSearchDatabaseEditorReflection.h" },
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabaseBlendSpaceReflection_Statics::NewProp_BlendSpace_MetaData[] = {
		{ "Category", "Selected Blend Space" },
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPoseSearchDatabaseBlendSpaceReflection_Statics::NewProp_BlendSpace = { "BlendSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchDatabaseBlendSpaceReflection, BlendSpace), Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace, METADATA_PARAMS(Z_Construct_UClass_UPoseSearchDatabaseBlendSpaceReflection_Statics::NewProp_BlendSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseBlendSpaceReflection_Statics::NewProp_BlendSpace_MetaData)) }; // 2999495958
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPoseSearchDatabaseBlendSpaceReflection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabaseBlendSpaceReflection_Statics::NewProp_BlendSpace,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPoseSearchDatabaseBlendSpaceReflection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoseSearchDatabaseBlendSpaceReflection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoseSearchDatabaseBlendSpaceReflection_Statics::ClassParams = {
		&UPoseSearchDatabaseBlendSpaceReflection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPoseSearchDatabaseBlendSpaceReflection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseBlendSpaceReflection_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPoseSearchDatabaseBlendSpaceReflection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseBlendSpaceReflection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPoseSearchDatabaseBlendSpaceReflection()
	{
		if (!Z_Registration_Info_UClass_UPoseSearchDatabaseBlendSpaceReflection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoseSearchDatabaseBlendSpaceReflection.OuterSingleton, Z_Construct_UClass_UPoseSearchDatabaseBlendSpaceReflection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPoseSearchDatabaseBlendSpaceReflection.OuterSingleton;
	}
	template<> POSESEARCHEDITOR_API UClass* StaticClass<UPoseSearchDatabaseBlendSpaceReflection>()
	{
		return UPoseSearchDatabaseBlendSpaceReflection::StaticClass();
	}
	UPoseSearchDatabaseBlendSpaceReflection::UPoseSearchDatabaseBlendSpaceReflection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoseSearchDatabaseBlendSpaceReflection);
	UPoseSearchDatabaseBlendSpaceReflection::~UPoseSearchDatabaseBlendSpaceReflection() {}
	void UPoseSearchDatabaseAnimCompositeReflection::StaticRegisterNativesUPoseSearchDatabaseAnimCompositeReflection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPoseSearchDatabaseAnimCompositeReflection);
	UClass* Z_Construct_UClass_UPoseSearchDatabaseAnimCompositeReflection_NoRegister()
	{
		return UPoseSearchDatabaseAnimCompositeReflection::StaticClass();
	}
	struct Z_Construct_UClass_UPoseSearchDatabaseAnimCompositeReflection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimComposite_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimComposite;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPoseSearchDatabaseAnimCompositeReflection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPoseSearchDatabaseReflectionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearchEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabaseAnimCompositeReflection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PoseSearchDatabaseEditorReflection.h" },
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabaseAnimCompositeReflection_Statics::NewProp_AnimComposite_MetaData[] = {
		{ "Category", "Selected Anim Composite" },
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPoseSearchDatabaseAnimCompositeReflection_Statics::NewProp_AnimComposite = { "AnimComposite", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchDatabaseAnimCompositeReflection, AnimComposite), Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite, METADATA_PARAMS(Z_Construct_UClass_UPoseSearchDatabaseAnimCompositeReflection_Statics::NewProp_AnimComposite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseAnimCompositeReflection_Statics::NewProp_AnimComposite_MetaData)) }; // 2000594194
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPoseSearchDatabaseAnimCompositeReflection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabaseAnimCompositeReflection_Statics::NewProp_AnimComposite,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPoseSearchDatabaseAnimCompositeReflection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoseSearchDatabaseAnimCompositeReflection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoseSearchDatabaseAnimCompositeReflection_Statics::ClassParams = {
		&UPoseSearchDatabaseAnimCompositeReflection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPoseSearchDatabaseAnimCompositeReflection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseAnimCompositeReflection_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPoseSearchDatabaseAnimCompositeReflection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseAnimCompositeReflection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPoseSearchDatabaseAnimCompositeReflection()
	{
		if (!Z_Registration_Info_UClass_UPoseSearchDatabaseAnimCompositeReflection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoseSearchDatabaseAnimCompositeReflection.OuterSingleton, Z_Construct_UClass_UPoseSearchDatabaseAnimCompositeReflection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPoseSearchDatabaseAnimCompositeReflection.OuterSingleton;
	}
	template<> POSESEARCHEDITOR_API UClass* StaticClass<UPoseSearchDatabaseAnimCompositeReflection>()
	{
		return UPoseSearchDatabaseAnimCompositeReflection::StaticClass();
	}
	UPoseSearchDatabaseAnimCompositeReflection::UPoseSearchDatabaseAnimCompositeReflection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoseSearchDatabaseAnimCompositeReflection);
	UPoseSearchDatabaseAnimCompositeReflection::~UPoseSearchDatabaseAnimCompositeReflection() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PoseSearchDatabaseMemoryStats;
class UScriptStruct* FPoseSearchDatabaseMemoryStats::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PoseSearchDatabaseMemoryStats.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PoseSearchDatabaseMemoryStats.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats, (UObject*)Z_Construct_UPackage__Script_PoseSearchEditor(), TEXT("PoseSearchDatabaseMemoryStats"));
	}
	return Z_Registration_Info_UScriptStruct_PoseSearchDatabaseMemoryStats.OuterSingleton;
}
template<> POSESEARCHEDITOR_API UScriptStruct* StaticStruct<FPoseSearchDatabaseMemoryStats>()
{
	return FPoseSearchDatabaseMemoryStats::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EstimatedDatabaseSize_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_EstimatedDatabaseSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValuesSize_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ValuesSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PCAValuesSize_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_PCAValuesSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KDTreeSize_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_KDTreeSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoseMetadataSize_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_PoseMetadataSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetsSize_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_AssetsSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseSearchDatabaseMemoryStats>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewProp_EstimatedDatabaseSize_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewProp_EstimatedDatabaseSize = { "EstimatedDatabaseSize", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseSearchDatabaseMemoryStats, EstimatedDatabaseSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewProp_EstimatedDatabaseSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewProp_EstimatedDatabaseSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewProp_ValuesSize_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewProp_ValuesSize = { "ValuesSize", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseSearchDatabaseMemoryStats, ValuesSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewProp_ValuesSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewProp_ValuesSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewProp_PCAValuesSize_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewProp_PCAValuesSize = { "PCAValuesSize", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseSearchDatabaseMemoryStats, PCAValuesSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewProp_PCAValuesSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewProp_PCAValuesSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewProp_KDTreeSize_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewProp_KDTreeSize = { "KDTreeSize", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseSearchDatabaseMemoryStats, KDTreeSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewProp_KDTreeSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewProp_KDTreeSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewProp_PoseMetadataSize_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewProp_PoseMetadataSize = { "PoseMetadataSize", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseSearchDatabaseMemoryStats, PoseMetadataSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewProp_PoseMetadataSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewProp_PoseMetadataSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewProp_AssetsSize_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewProp_AssetsSize = { "AssetsSize", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseSearchDatabaseMemoryStats, AssetsSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewProp_AssetsSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewProp_AssetsSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewProp_EstimatedDatabaseSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewProp_ValuesSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewProp_PCAValuesSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewProp_KDTreeSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewProp_PoseMetadataSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewProp_AssetsSize,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearchEditor,
		nullptr,
		&NewStructOps,
		"PoseSearchDatabaseMemoryStats",
		sizeof(FPoseSearchDatabaseMemoryStats),
		alignof(FPoseSearchDatabaseMemoryStats),
		Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats()
	{
		if (!Z_Registration_Info_UScriptStruct_PoseSearchDatabaseMemoryStats.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PoseSearchDatabaseMemoryStats.InnerSingleton, Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PoseSearchDatabaseMemoryStats.InnerSingleton;
	}
	void UPoseSearchDatabaseStatistics::StaticRegisterNativesUPoseSearchDatabaseStatistics()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPoseSearchDatabaseStatistics);
	UClass* Z_Construct_UClass_UPoseSearchDatabaseStatistics_NoRegister()
	{
		return UPoseSearchDatabaseStatistics::StaticClass();
	}
	struct Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSequences_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_AnimationSequences;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalAnimationPosesInFrames_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_TotalAnimationPosesInFrames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalAnimationPosesInTime_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_TotalAnimationPosesInTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SearchableFrames_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_SearchableFrames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SearchableTime_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_SearchableTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AverageVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_AverageVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AverageAcceleration_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_AverageAcceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAcceleration_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxAcceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExplainedVariance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExplainedVariance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EstimatedDatabaseSize_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_EstimatedDatabaseSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValuesSize_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ValuesSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PCAValuesSize_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_PCAValuesSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KDTreeSize_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_KDTreeSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoseMetadataSize_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_PoseMetadataSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetsSize_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_AssetsSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearchEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PoseSearchDatabaseEditorReflection.h" },
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_AnimationSequences_MetaData[] = {
		{ "Category", "General Information" },
		{ "Comment", "// General information\n" },
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
		{ "ToolTip", "General information" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_AnimationSequences = { "AnimationSequences", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchDatabaseStatistics, AnimationSequences), METADATA_PARAMS(Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_AnimationSequences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_AnimationSequences_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_TotalAnimationPosesInFrames_MetaData[] = {
		{ "Category", "General Information" },
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_TotalAnimationPosesInFrames = { "TotalAnimationPosesInFrames", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchDatabaseStatistics, TotalAnimationPosesInFrames), METADATA_PARAMS(Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_TotalAnimationPosesInFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_TotalAnimationPosesInFrames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_TotalAnimationPosesInTime_MetaData[] = {
		{ "Category", "General Information" },
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_TotalAnimationPosesInTime = { "TotalAnimationPosesInTime", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchDatabaseStatistics, TotalAnimationPosesInTime), METADATA_PARAMS(Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_TotalAnimationPosesInTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_TotalAnimationPosesInTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_SearchableFrames_MetaData[] = {
		{ "Category", "General Information" },
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_SearchableFrames = { "SearchableFrames", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchDatabaseStatistics, SearchableFrames), METADATA_PARAMS(Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_SearchableFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_SearchableFrames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_SearchableTime_MetaData[] = {
		{ "Category", "General Information" },
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_SearchableTime = { "SearchableTime", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchDatabaseStatistics, SearchableTime), METADATA_PARAMS(Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_SearchableTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_SearchableTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_AverageVelocity_MetaData[] = {
		{ "Category", "Velocity Information" },
		{ "Comment", "// Velocity Information\n" },
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
		{ "ToolTip", "Velocity Information" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_AverageVelocity = { "AverageVelocity", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchDatabaseStatistics, AverageVelocity), METADATA_PARAMS(Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_AverageVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_AverageVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_MaxVelocity_MetaData[] = {
		{ "Category", "Velocity Information" },
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_MaxVelocity = { "MaxVelocity", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchDatabaseStatistics, MaxVelocity), METADATA_PARAMS(Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_MaxVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_MaxVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_AverageAcceleration_MetaData[] = {
		{ "Category", "Velocity Information" },
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_AverageAcceleration = { "AverageAcceleration", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchDatabaseStatistics, AverageAcceleration), METADATA_PARAMS(Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_AverageAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_AverageAcceleration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_MaxAcceleration_MetaData[] = {
		{ "Category", "Velocity Information" },
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_MaxAcceleration = { "MaxAcceleration", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchDatabaseStatistics, MaxAcceleration), METADATA_PARAMS(Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_MaxAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_MaxAcceleration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_ExplainedVariance_MetaData[] = {
		{ "Category", "Principal Component Analysis (PCA) Information" },
		{ "Comment", "// Principal Component Analysis (PCA) Information\n" },
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
		{ "ToolTip", "Principal Component Analysis (PCA) Information" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_ExplainedVariance = { "ExplainedVariance", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchDatabaseStatistics, ExplainedVariance), METADATA_PARAMS(Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_ExplainedVariance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_ExplainedVariance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_EstimatedDatabaseSize_MetaData[] = {
		{ "Category", "Memory Information" },
		{ "Comment", "// Memory information\n" },
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
		{ "ToolTip", "Memory information" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_EstimatedDatabaseSize = { "EstimatedDatabaseSize", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchDatabaseStatistics, EstimatedDatabaseSize), METADATA_PARAMS(Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_EstimatedDatabaseSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_EstimatedDatabaseSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_ValuesSize_MetaData[] = {
		{ "Category", "Memory Information" },
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_ValuesSize = { "ValuesSize", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchDatabaseStatistics, ValuesSize), METADATA_PARAMS(Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_ValuesSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_ValuesSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_PCAValuesSize_MetaData[] = {
		{ "Category", "Memory Information" },
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_PCAValuesSize = { "PCAValuesSize", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchDatabaseStatistics, PCAValuesSize), METADATA_PARAMS(Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_PCAValuesSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_PCAValuesSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_KDTreeSize_MetaData[] = {
		{ "Category", "Memory Information" },
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_KDTreeSize = { "KDTreeSize", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchDatabaseStatistics, KDTreeSize), METADATA_PARAMS(Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_KDTreeSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_KDTreeSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_PoseMetadataSize_MetaData[] = {
		{ "Category", "Memory Information" },
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_PoseMetadataSize = { "PoseMetadataSize", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchDatabaseStatistics, PoseMetadataSize), METADATA_PARAMS(Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_PoseMetadataSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_PoseMetadataSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_AssetsSize_MetaData[] = {
		{ "Category", "Memory Information" },
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_AssetsSize = { "AssetsSize", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchDatabaseStatistics, AssetsSize), METADATA_PARAMS(Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_AssetsSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_AssetsSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_AnimationSequences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_TotalAnimationPosesInFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_TotalAnimationPosesInTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_SearchableFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_SearchableTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_AverageVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_MaxVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_AverageAcceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_MaxAcceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_ExplainedVariance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_EstimatedDatabaseSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_ValuesSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_PCAValuesSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_KDTreeSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_PoseMetadataSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_AssetsSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoseSearchDatabaseStatistics>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::ClassParams = {
		&UPoseSearchDatabaseStatistics::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPoseSearchDatabaseStatistics()
	{
		if (!Z_Registration_Info_UClass_UPoseSearchDatabaseStatistics.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoseSearchDatabaseStatistics.OuterSingleton, Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPoseSearchDatabaseStatistics.OuterSingleton;
	}
	template<> POSESEARCHEDITOR_API UClass* StaticClass<UPoseSearchDatabaseStatistics>()
	{
		return UPoseSearchDatabaseStatistics::StaticClass();
	}
	UPoseSearchDatabaseStatistics::UPoseSearchDatabaseStatistics(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoseSearchDatabaseStatistics);
	UPoseSearchDatabaseStatistics::~UPoseSearchDatabaseStatistics() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Editor_Public_PoseSearchDatabaseEditorReflection_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Editor_Public_PoseSearchDatabaseEditorReflection_h_Statics::ScriptStructInfo[] = {
		{ FPoseSearchDatabaseMemoryStats::StaticStruct, Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewStructOps, TEXT("PoseSearchDatabaseMemoryStats"), &Z_Registration_Info_UScriptStruct_PoseSearchDatabaseMemoryStats, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPoseSearchDatabaseMemoryStats), 3008085896U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Editor_Public_PoseSearchDatabaseEditorReflection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPoseSearchDatabaseReflectionBase, UPoseSearchDatabaseReflectionBase::StaticClass, TEXT("UPoseSearchDatabaseReflectionBase"), &Z_Registration_Info_UClass_UPoseSearchDatabaseReflectionBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoseSearchDatabaseReflectionBase), 2837855690U) },
		{ Z_Construct_UClass_UPoseSearchDatabaseSequenceReflection, UPoseSearchDatabaseSequenceReflection::StaticClass, TEXT("UPoseSearchDatabaseSequenceReflection"), &Z_Registration_Info_UClass_UPoseSearchDatabaseSequenceReflection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoseSearchDatabaseSequenceReflection), 3714508228U) },
		{ Z_Construct_UClass_UPoseSearchDatabaseBlendSpaceReflection, UPoseSearchDatabaseBlendSpaceReflection::StaticClass, TEXT("UPoseSearchDatabaseBlendSpaceReflection"), &Z_Registration_Info_UClass_UPoseSearchDatabaseBlendSpaceReflection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoseSearchDatabaseBlendSpaceReflection), 1170105527U) },
		{ Z_Construct_UClass_UPoseSearchDatabaseAnimCompositeReflection, UPoseSearchDatabaseAnimCompositeReflection::StaticClass, TEXT("UPoseSearchDatabaseAnimCompositeReflection"), &Z_Registration_Info_UClass_UPoseSearchDatabaseAnimCompositeReflection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoseSearchDatabaseAnimCompositeReflection), 2601899668U) },
		{ Z_Construct_UClass_UPoseSearchDatabaseStatistics, UPoseSearchDatabaseStatistics::StaticClass, TEXT("UPoseSearchDatabaseStatistics"), &Z_Registration_Info_UClass_UPoseSearchDatabaseStatistics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoseSearchDatabaseStatistics), 2231379940U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Editor_Public_PoseSearchDatabaseEditorReflection_h_561385304(TEXT("/Script/PoseSearchEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Editor_Public_PoseSearchDatabaseEditorReflection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Editor_Public_PoseSearchDatabaseEditorReflection_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Editor_Public_PoseSearchDatabaseEditorReflection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Editor_Public_PoseSearchDatabaseEditorReflection_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
