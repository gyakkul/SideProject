// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Tests/Types/SnapshotTestActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapshotTestActor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	LEVELSNAPSHOTS_API UClass* Z_Construct_UClass_ASnapshotTestActor();
	LEVELSNAPSHOTS_API UClass* Z_Construct_UClass_ASnapshotTestActor_NoRegister();
	LEVELSNAPSHOTS_API UClass* Z_Construct_UClass_USnapshotTestComponent();
	LEVELSNAPSHOTS_API UClass* Z_Construct_UClass_USnapshotTestComponent_NoRegister();
	LEVELSNAPSHOTS_API UClass* Z_Construct_UClass_USubobject();
	LEVELSNAPSHOTS_API UClass* Z_Construct_UClass_USubobject_NoRegister();
	LEVELSNAPSHOTS_API UClass* Z_Construct_UClass_USubSubobject();
	LEVELSNAPSHOTS_API UClass* Z_Construct_UClass_USubSubobject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LevelSnapshots();
// End Cross Module References
	void USubSubobject::StaticRegisterNativesUSubSubobject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USubSubobject);
	UClass* Z_Construct_UClass_USubSubobject_NoRegister()
	{
		return USubSubobject::StaticClass();
	}
	struct Z_Construct_UClass_USubSubobject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntProperty_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatProperty_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatProperty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USubSubobject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshots,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubSubobject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/Types/SnapshotTestActor.h" },
		{ "ModuleRelativePath", "Private/Tests/Types/SnapshotTestActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubSubobject_Statics::NewProp_IntProperty_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "ModuleRelativePath", "Private/Tests/Types/SnapshotTestActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USubSubobject_Statics::NewProp_IntProperty = { "IntProperty", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubSubobject, IntProperty), METADATA_PARAMS(Z_Construct_UClass_USubSubobject_Statics::NewProp_IntProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubSubobject_Statics::NewProp_IntProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubSubobject_Statics::NewProp_FloatProperty_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "ModuleRelativePath", "Private/Tests/Types/SnapshotTestActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USubSubobject_Statics::NewProp_FloatProperty = { "FloatProperty", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubSubobject, FloatProperty), METADATA_PARAMS(Z_Construct_UClass_USubSubobject_Statics::NewProp_FloatProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubSubobject_Statics::NewProp_FloatProperty_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubSubobject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubSubobject_Statics::NewProp_IntProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubSubobject_Statics::NewProp_FloatProperty,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubSubobject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubSubobject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USubSubobject_Statics::ClassParams = {
		&USubSubobject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USubSubobject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USubSubobject_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USubSubobject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubSubobject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubSubobject()
	{
		if (!Z_Registration_Info_UClass_USubSubobject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubSubobject.OuterSingleton, Z_Construct_UClass_USubSubobject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USubSubobject.OuterSingleton;
	}
	template<> LEVELSNAPSHOTS_API UClass* StaticClass<USubSubobject>()
	{
		return USubSubobject::StaticClass();
	}
	USubSubobject::USubSubobject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubSubobject);
	USubSubobject::~USubSubobject() {}
	void USubobject::StaticRegisterNativesUSubobject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USubobject);
	UClass* Z_Construct_UClass_USubobject_NoRegister()
	{
		return USubobject::StaticClass();
	}
	struct Z_Construct_UClass_USubobject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntProperty_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatProperty_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NestedChild_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NestedChild;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UneditableNestedChild_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UneditableNestedChild;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USubobject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshots,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubobject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/Types/SnapshotTestActor.h" },
		{ "ModuleRelativePath", "Private/Tests/Types/SnapshotTestActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubobject_Statics::NewProp_IntProperty_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "ModuleRelativePath", "Private/Tests/Types/SnapshotTestActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USubobject_Statics::NewProp_IntProperty = { "IntProperty", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubobject, IntProperty), METADATA_PARAMS(Z_Construct_UClass_USubobject_Statics::NewProp_IntProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubobject_Statics::NewProp_IntProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubobject_Statics::NewProp_FloatProperty_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "ModuleRelativePath", "Private/Tests/Types/SnapshotTestActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USubobject_Statics::NewProp_FloatProperty = { "FloatProperty", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubobject, FloatProperty), METADATA_PARAMS(Z_Construct_UClass_USubobject_Statics::NewProp_FloatProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubobject_Statics::NewProp_FloatProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubobject_Statics::NewProp_NestedChild_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/Types/SnapshotTestActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USubobject_Statics::NewProp_NestedChild = { "NestedChild", nullptr, (EPropertyFlags)0x0016000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubobject, NestedChild), Z_Construct_UClass_USubSubobject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USubobject_Statics::NewProp_NestedChild_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubobject_Statics::NewProp_NestedChild_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubobject_Statics::NewProp_UneditableNestedChild_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/Types/SnapshotTestActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USubobject_Statics::NewProp_UneditableNestedChild = { "UneditableNestedChild", nullptr, (EPropertyFlags)0x0016000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubobject, UneditableNestedChild), Z_Construct_UClass_USubSubobject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USubobject_Statics::NewProp_UneditableNestedChild_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubobject_Statics::NewProp_UneditableNestedChild_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubobject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubobject_Statics::NewProp_IntProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubobject_Statics::NewProp_FloatProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubobject_Statics::NewProp_NestedChild,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubobject_Statics::NewProp_UneditableNestedChild,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubobject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubobject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USubobject_Statics::ClassParams = {
		&USubobject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USubobject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USubobject_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USubobject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubobject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubobject()
	{
		if (!Z_Registration_Info_UClass_USubobject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubobject.OuterSingleton, Z_Construct_UClass_USubobject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USubobject.OuterSingleton;
	}
	template<> LEVELSNAPSHOTS_API UClass* StaticClass<USubobject>()
	{
		return USubobject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubobject);
	USubobject::~USubobject() {}
	void USnapshotTestComponent::StaticRegisterNativesUSnapshotTestComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapshotTestComponent);
	UClass* Z_Construct_UClass_USnapshotTestComponent_NoRegister()
	{
		return USnapshotTestComponent::StaticClass();
	}
	struct Z_Construct_UClass_USnapshotTestComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntProperty_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatProperty_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Subobject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Subobject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USnapshotTestComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshots,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapshotTestComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/Types/SnapshotTestActor.h" },
		{ "ModuleRelativePath", "Private/Tests/Types/SnapshotTestActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapshotTestComponent_Statics::NewProp_IntProperty_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "ModuleRelativePath", "Private/Tests/Types/SnapshotTestActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USnapshotTestComponent_Statics::NewProp_IntProperty = { "IntProperty", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USnapshotTestComponent, IntProperty), METADATA_PARAMS(Z_Construct_UClass_USnapshotTestComponent_Statics::NewProp_IntProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapshotTestComponent_Statics::NewProp_IntProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapshotTestComponent_Statics::NewProp_FloatProperty_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "ModuleRelativePath", "Private/Tests/Types/SnapshotTestActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USnapshotTestComponent_Statics::NewProp_FloatProperty = { "FloatProperty", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USnapshotTestComponent, FloatProperty), METADATA_PARAMS(Z_Construct_UClass_USnapshotTestComponent_Statics::NewProp_FloatProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapshotTestComponent_Statics::NewProp_FloatProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapshotTestComponent_Statics::NewProp_Subobject_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/Types/SnapshotTestActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USnapshotTestComponent_Statics::NewProp_Subobject = { "Subobject", nullptr, (EPropertyFlags)0x0016000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USnapshotTestComponent, Subobject), Z_Construct_UClass_USubobject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USnapshotTestComponent_Statics::NewProp_Subobject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapshotTestComponent_Statics::NewProp_Subobject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USnapshotTestComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapshotTestComponent_Statics::NewProp_IntProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapshotTestComponent_Statics::NewProp_FloatProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapshotTestComponent_Statics::NewProp_Subobject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USnapshotTestComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapshotTestComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapshotTestComponent_Statics::ClassParams = {
		&USnapshotTestComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USnapshotTestComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USnapshotTestComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USnapshotTestComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USnapshotTestComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USnapshotTestComponent()
	{
		if (!Z_Registration_Info_UClass_USnapshotTestComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapshotTestComponent.OuterSingleton, Z_Construct_UClass_USnapshotTestComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USnapshotTestComponent.OuterSingleton;
	}
	template<> LEVELSNAPSHOTS_API UClass* StaticClass<USnapshotTestComponent>()
	{
		return USnapshotTestComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USnapshotTestComponent);
	USnapshotTestComponent::~USnapshotTestComponent() {}
	void ASnapshotTestActor::StaticRegisterNativesASnapshotTestActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASnapshotTestActor);
	UClass* Z_Construct_UClass_ASnapshotTestActor_NoRegister()
	{
		return ASnapshotTestActor::StaticClass();
	}
	struct Z_Construct_UClass_ASnapshotTestActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeprecatedProperty_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DeprecatedProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransientProperty_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TransientProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntProperty_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectReference_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ObjectReference;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ObjectArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectArray;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ObjectSet_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectSet_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_ObjectSet;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ObjectMap_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ObjectMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ObjectMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoftPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SoftPath;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SoftPathArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoftPathArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SoftPathArray;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SoftPathSet_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoftPathSet_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_SoftPathSet;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SoftPathMap_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SoftPathMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoftPathMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SoftPathMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoftObjectPtr_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SoftObjectPtr;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SoftObjectPtrArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoftObjectPtrArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SoftObjectPtrArray;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SoftObjectPtrSet_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoftObjectPtrSet_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_SoftObjectPtrSet;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SoftObjectPtrMap_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SoftObjectPtrMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoftObjectPtrMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SoftObjectPtrMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeakObjectPtr_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_WeakObjectPtr;
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_WeakObjectPtrArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeakObjectPtrArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WeakObjectPtrArray;
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_WeakObjectPtrSet_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeakObjectPtrSet_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_WeakObjectPtrSet;
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_WeakObjectPtrMap_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_WeakObjectPtrMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeakObjectPtrMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_WeakObjectPtrMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalComponentReference_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ExternalComponentReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalComponentReferenceAsUObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ExternalComponentReferenceAsUObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GradientLinearMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GradientLinearMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GradientRadialMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GradientRadialMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CubeMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CubeMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CylinderMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CylinderMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StaticMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstancedMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InstancedMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointLightComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PointLightComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TestComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditableInstancedSubobject_DefaultSubobject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EditableInstancedSubobject_DefaultSubobject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstancedOnlySubobject_DefaultSubobject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InstancedOnlySubobject_DefaultSubobject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NakedSubobject_DefaultSubobject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NakedSubobject_DefaultSubobject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditOnlySubobject_OptionalSubobject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EditOnlySubobject_OptionalSubobject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditableInstancedSubobjectArray_OptionalSubobject_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EditableInstancedSubobjectArray_OptionalSubobject_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditableInstancedSubobjectArray_OptionalSubobject_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EditableInstancedSubobjectArray_OptionalSubobject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditableInstancedSubobjectMap_OptionalSubobject_ValueProp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EditableInstancedSubobjectMap_OptionalSubobject_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_EditableInstancedSubobjectMap_OptionalSubobject_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditableInstancedSubobjectMap_OptionalSubobject_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_EditableInstancedSubobjectMap_OptionalSubobject;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EditOnlySubobjectArray_OptionalSubobject_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditOnlySubobjectArray_OptionalSubobject_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EditOnlySubobjectArray_OptionalSubobject;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EditOnlySubobjectMap_OptionalSubobject_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_EditOnlySubobjectMap_OptionalSubobject_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditOnlySubobjectMap_OptionalSubobject_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_EditOnlySubobjectMap_OptionalSubobject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASnapshotTestActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshots,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnapshotTestActor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Tests/Types/SnapshotTestActor.h" },
		{ "ModuleRelativePath", "Private/Tests/Types/SnapshotTestActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_DeprecatedProperty_MetaData[] = {
		{ "Comment", "/******************** Skipped properties  ********************/" },
		{ "ModuleRelativePath", "Private/Tests/Types/SnapshotTestActor.h" },
		{ "ToolTip", "***************** Skipped properties  *******************" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_DeprecatedProperty = { "DeprecatedProperty", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASnapshotTestActor, DeprecatedProperty_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_DeprecatedProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_DeprecatedProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_TransientProperty_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "ModuleRelativePath", "Private/Tests/Types/SnapshotTestActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_TransientProperty = { "TransientProperty", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASnapshotTestActor, TransientProperty), METADATA_PARAMS(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_TransientProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_TransientProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_IntProperty_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "ModuleRelativePath", "Private/Tests/Types/SnapshotTestActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_IntProperty = { "IntProperty", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASnapshotTestActor, IntProperty), METADATA_PARAMS(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_IntProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_IntProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_ObjectReference_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "Comment", "/******************** Raw references  ********************/" },
		{ "ModuleRelativePath", "Private/Tests/Types/SnapshotTestActor.h" },
		{ "ToolTip", "***************** Raw references  *******************" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_ObjectReference = { "ObjectReference", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASnapshotTestActor, ObjectReference), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_ObjectReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_ObjectReference_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_ObjectArray_Inner = { "ObjectArray", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_ObjectArray_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "ModuleRelativePath", "Private/Tests/Types/SnapshotTestActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_ObjectArray = { "ObjectArray", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASnapshotTestActor, ObjectArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_ObjectArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_ObjectArray_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_ObjectSet_ElementProp = { "ObjectSet", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_ObjectSet_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "ModuleRelativePath", "Private/Tests/Types/SnapshotTestActor.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_ObjectSet = { "ObjectSet", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASnapshotTestActor, ObjectSet), METADATA_PARAMS(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_ObjectSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_ObjectSet_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_ObjectMap_ValueProp = { "ObjectMap", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_ObjectMap_Key_KeyProp = { "ObjectMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_ObjectMap_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "ModuleRelativePath", "Private/Tests/Types/SnapshotTestActor.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_ObjectMap = { "ObjectMap", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASnapshotTestActor, ObjectMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_ObjectMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_ObjectMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_SoftPath_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "Comment", "/******************** FSoftObjectPath  ********************/" },
		{ "ModuleRelativePath", "Private/Tests/Types/SnapshotTestActor.h" },
		{ "ToolTip", "***************** FSoftObjectPath  *******************" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_SoftPath = { "SoftPath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASnapshotTestActor, SoftPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_SoftPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_SoftPath_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_SoftPathArray_Inner = { "SoftPathArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_SoftPathArray_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "ModuleRelativePath", "Private/Tests/Types/SnapshotTestActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_SoftPathArray = { "SoftPathArray", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASnapshotTestActor, SoftPathArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_SoftPathArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_SoftPathArray_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_SoftPathSet_ElementProp = { "SoftPathSet", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_SoftPathSet_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "ModuleRelativePath", "Private/Tests/Types/SnapshotTestActor.h" },
	};
#endif
	static_assert(TModels<CGetTypeHashable, FSoftObjectPath>::Value, "The structure 'FSoftObjectPath' is used in a TSet but does not have a GetValueTypeHash defined");
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_SoftPathSet = { "SoftPathSet", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASnapshotTestActor, SoftPathSet), METADATA_PARAMS(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_SoftPathSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_SoftPathSet_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_SoftPathMap_ValueProp = { "SoftPathMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_SoftPathMap_Key_KeyProp = { "SoftPathMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_SoftPathMap_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "ModuleRelativePath", "Private/Tests/Types/SnapshotTestActor.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_SoftPathMap = { "SoftPathMap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASnapshotTestActor, SoftPathMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_SoftPathMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_SoftPathMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_SoftObjectPtr_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "Comment", "/******************** TSoftObjectPtr  ********************/" },
		{ "ModuleRelativePath", "Private/Tests/Types/SnapshotTestActor.h" },
		{ "ToolTip", "***************** TSoftObjectPtr  *******************" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_SoftObjectPtr = { "SoftObjectPtr", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASnapshotTestActor, SoftObjectPtr), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_SoftObjectPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_SoftObjectPtr_MetaData)) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_SoftObjectPtrArray_Inner = { "SoftObjectPtrArray", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_SoftObjectPtrArray_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "ModuleRelativePath", "Private/Tests/Types/SnapshotTestActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_SoftObjectPtrArray = { "SoftObjectPtrArray", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASnapshotTestActor, SoftObjectPtrArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_SoftObjectPtrArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_SoftObjectPtrArray_MetaData)) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_SoftObjectPtrSet_ElementProp = { "SoftObjectPtrSet", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_SoftObjectPtrSet_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "ModuleRelativePath", "Private/Tests/Types/SnapshotTestActor.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_SoftObjectPtrSet = { "SoftObjectPtrSet", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASnapshotTestActor, SoftObjectPtrSet), METADATA_PARAMS(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_SoftObjectPtrSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_SoftObjectPtrSet_MetaData)) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_SoftObjectPtrMap_ValueProp = { "SoftObjectPtrMap", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_SoftObjectPtrMap_Key_KeyProp = { "SoftObjectPtrMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_SoftObjectPtrMap_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "ModuleRelativePath", "Private/Tests/Types/SnapshotTestActor.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_SoftObjectPtrMap = { "SoftObjectPtrMap", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASnapshotTestActor, SoftObjectPtrMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_SoftObjectPtrMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_SoftObjectPtrMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_WeakObjectPtr_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "Comment", "/******************** TWeakObjectPtr  ********************/" },
		{ "ModuleRelativePath", "Private/Tests/Types/SnapshotTestActor.h" },
		{ "ToolTip", "***************** TWeakObjectPtr  *******************" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_WeakObjectPtr = { "WeakObjectPtr", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASnapshotTestActor, WeakObjectPtr), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_WeakObjectPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_WeakObjectPtr_MetaData)) };
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_WeakObjectPtrArray_Inner = { "WeakObjectPtrArray", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_WeakObjectPtrArray_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "ModuleRelativePath", "Private/Tests/Types/SnapshotTestActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_WeakObjectPtrArray = { "WeakObjectPtrArray", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASnapshotTestActor, WeakObjectPtrArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_WeakObjectPtrArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_WeakObjectPtrArray_MetaData)) };
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_WeakObjectPtrSet_ElementProp = { "WeakObjectPtrSet", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_WeakObjectPtrSet_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "ModuleRelativePath", "Private/Tests/Types/SnapshotTestActor.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_WeakObjectPtrSet = { "WeakObjectPtrSet", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASnapshotTestActor, WeakObjectPtrSet), METADATA_PARAMS(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_WeakObjectPtrSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_WeakObjectPtrSet_MetaData)) };
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_WeakObjectPtrMap_ValueProp = { "WeakObjectPtrMap", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_WeakObjectPtrMap_Key_KeyProp = { "WeakObjectPtrMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_WeakObjectPtrMap_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "ModuleRelativePath", "Private/Tests/Types/SnapshotTestActor.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_WeakObjectPtrMap = { "WeakObjectPtrMap", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASnapshotTestActor, WeakObjectPtrMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_WeakObjectPtrMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_WeakObjectPtrMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_ExternalComponentReference_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "Comment", "/******************** External component references  ********************/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/Types/SnapshotTestActor.h" },
		{ "ToolTip", "***************** External component references  *******************" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_ExternalComponentReference = { "ExternalComponentReference", nullptr, (EPropertyFlags)0x0014000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASnapshotTestActor, ExternalComponentReference), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_ExternalComponentReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_ExternalComponentReference_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_ExternalComponentReferenceAsUObject_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "ModuleRelativePath", "Private/Tests/Types/SnapshotTestActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_ExternalComponentReferenceAsUObject = { "ExternalComponentReferenceAsUObject", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASnapshotTestActor, ExternalComponentReferenceAsUObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_ExternalComponentReferenceAsUObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_ExternalComponentReferenceAsUObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_GradientLinearMaterial_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "Comment", "/******************** External references  ********************/" },
		{ "ModuleRelativePath", "Private/Tests/Types/SnapshotTestActor.h" },
		{ "ToolTip", "***************** External references  *******************" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_GradientLinearMaterial = { "GradientLinearMaterial", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASnapshotTestActor, GradientLinearMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_GradientLinearMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_GradientLinearMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_GradientRadialMaterial_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "ModuleRelativePath", "Private/Tests/Types/SnapshotTestActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_GradientRadialMaterial = { "GradientRadialMaterial", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASnapshotTestActor, GradientRadialMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_GradientRadialMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_GradientRadialMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_CubeMesh_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "ModuleRelativePath", "Private/Tests/Types/SnapshotTestActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_CubeMesh = { "CubeMesh", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASnapshotTestActor, CubeMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_CubeMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_CubeMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_CylinderMesh_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "ModuleRelativePath", "Private/Tests/Types/SnapshotTestActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_CylinderMesh = { "CylinderMesh", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASnapshotTestActor, CylinderMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_CylinderMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_CylinderMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "Comment", "/******************** Subobject Component references  ********************/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/Types/SnapshotTestActor.h" },
		{ "ToolTip", "***************** Subobject Component references  *******************" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x0014000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASnapshotTestActor, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_StaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_StaticMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_InstancedMeshComponent_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/Types/SnapshotTestActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_InstancedMeshComponent = { "InstancedMeshComponent", nullptr, (EPropertyFlags)0x0014000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASnapshotTestActor, InstancedMeshComponent), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_InstancedMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_InstancedMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_PointLightComponent_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/Types/SnapshotTestActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_PointLightComponent = { "PointLightComponent", nullptr, (EPropertyFlags)0x0014000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASnapshotTestActor, PointLightComponent), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_PointLightComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_PointLightComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_TestComponent_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/Types/SnapshotTestActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_TestComponent = { "TestComponent", nullptr, (EPropertyFlags)0x0014000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASnapshotTestActor, TestComponent), Z_Construct_UClass_USnapshotTestComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_TestComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_TestComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_EditableInstancedSubobject_DefaultSubobject_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "Comment", "/******************** Subobject references  ********************/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/Types/SnapshotTestActor.h" },
		{ "ToolTip", "***************** Subobject references  *******************" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_EditableInstancedSubobject_DefaultSubobject = { "EditableInstancedSubobject_DefaultSubobject", nullptr, (EPropertyFlags)0x0016000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASnapshotTestActor, EditableInstancedSubobject_DefaultSubobject), Z_Construct_UClass_USubobject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_EditableInstancedSubobject_DefaultSubobject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_EditableInstancedSubobject_DefaultSubobject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_InstancedOnlySubobject_DefaultSubobject_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/Types/SnapshotTestActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_InstancedOnlySubobject_DefaultSubobject = { "InstancedOnlySubobject_DefaultSubobject", nullptr, (EPropertyFlags)0x0016000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASnapshotTestActor, InstancedOnlySubobject_DefaultSubobject), Z_Construct_UClass_USubobject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_InstancedOnlySubobject_DefaultSubobject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_InstancedOnlySubobject_DefaultSubobject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_NakedSubobject_DefaultSubobject_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Types/SnapshotTestActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_NakedSubobject_DefaultSubobject = { "NakedSubobject_DefaultSubobject", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASnapshotTestActor, NakedSubobject_DefaultSubobject), Z_Construct_UClass_USubobject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_NakedSubobject_DefaultSubobject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_NakedSubobject_DefaultSubobject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_EditOnlySubobject_OptionalSubobject_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "ModuleRelativePath", "Private/Tests/Types/SnapshotTestActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_EditOnlySubobject_OptionalSubobject = { "EditOnlySubobject_OptionalSubobject", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASnapshotTestActor, EditOnlySubobject_OptionalSubobject), Z_Construct_UClass_USubobject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_EditOnlySubobject_OptionalSubobject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_EditOnlySubobject_OptionalSubobject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_EditableInstancedSubobjectArray_OptionalSubobject_Inner_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/Types/SnapshotTestActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_EditableInstancedSubobjectArray_OptionalSubobject_Inner = { "EditableInstancedSubobjectArray_OptionalSubobject", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USubobject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_EditableInstancedSubobjectArray_OptionalSubobject_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_EditableInstancedSubobjectArray_OptionalSubobject_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_EditableInstancedSubobjectArray_OptionalSubobject_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/Types/SnapshotTestActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_EditableInstancedSubobjectArray_OptionalSubobject = { "EditableInstancedSubobjectArray_OptionalSubobject", nullptr, (EPropertyFlags)0x0014008000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASnapshotTestActor, EditableInstancedSubobjectArray_OptionalSubobject), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_EditableInstancedSubobjectArray_OptionalSubobject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_EditableInstancedSubobjectArray_OptionalSubobject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_EditableInstancedSubobjectMap_OptionalSubobject_ValueProp_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/Types/SnapshotTestActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_EditableInstancedSubobjectMap_OptionalSubobject_ValueProp = { "EditableInstancedSubobjectMap_OptionalSubobject", nullptr, (EPropertyFlags)0x0006000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_USubobject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_EditableInstancedSubobjectMap_OptionalSubobject_ValueProp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_EditableInstancedSubobjectMap_OptionalSubobject_ValueProp_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_EditableInstancedSubobjectMap_OptionalSubobject_Key_KeyProp = { "EditableInstancedSubobjectMap_OptionalSubobject_Key", nullptr, (EPropertyFlags)0x0002000000080009, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_EditableInstancedSubobjectMap_OptionalSubobject_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/Types/SnapshotTestActor.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_EditableInstancedSubobjectMap_OptionalSubobject = { "EditableInstancedSubobjectMap_OptionalSubobject", nullptr, (EPropertyFlags)0x0014008000000009, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASnapshotTestActor, EditableInstancedSubobjectMap_OptionalSubobject), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_EditableInstancedSubobjectMap_OptionalSubobject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_EditableInstancedSubobjectMap_OptionalSubobject_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_EditOnlySubobjectArray_OptionalSubobject_Inner = { "EditOnlySubobjectArray_OptionalSubobject", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USubobject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_EditOnlySubobjectArray_OptionalSubobject_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "ModuleRelativePath", "Private/Tests/Types/SnapshotTestActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_EditOnlySubobjectArray_OptionalSubobject = { "EditOnlySubobjectArray_OptionalSubobject", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASnapshotTestActor, EditOnlySubobjectArray_OptionalSubobject), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_EditOnlySubobjectArray_OptionalSubobject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_EditOnlySubobjectArray_OptionalSubobject_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_EditOnlySubobjectMap_OptionalSubobject_ValueProp = { "EditOnlySubobjectMap_OptionalSubobject", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_USubobject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_EditOnlySubobjectMap_OptionalSubobject_Key_KeyProp = { "EditOnlySubobjectMap_OptionalSubobject_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_EditOnlySubobjectMap_OptionalSubobject_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "ModuleRelativePath", "Private/Tests/Types/SnapshotTestActor.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_EditOnlySubobjectMap_OptionalSubobject = { "EditOnlySubobjectMap_OptionalSubobject", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASnapshotTestActor, EditOnlySubobjectMap_OptionalSubobject), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_EditOnlySubobjectMap_OptionalSubobject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_EditOnlySubobjectMap_OptionalSubobject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASnapshotTestActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_DeprecatedProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_TransientProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_IntProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_ObjectReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_ObjectArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_ObjectArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_ObjectSet_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_ObjectSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_ObjectMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_ObjectMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_ObjectMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_SoftPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_SoftPathArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_SoftPathArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_SoftPathSet_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_SoftPathSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_SoftPathMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_SoftPathMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_SoftPathMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_SoftObjectPtr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_SoftObjectPtrArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_SoftObjectPtrArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_SoftObjectPtrSet_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_SoftObjectPtrSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_SoftObjectPtrMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_SoftObjectPtrMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_SoftObjectPtrMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_WeakObjectPtr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_WeakObjectPtrArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_WeakObjectPtrArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_WeakObjectPtrSet_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_WeakObjectPtrSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_WeakObjectPtrMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_WeakObjectPtrMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_WeakObjectPtrMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_ExternalComponentReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_ExternalComponentReferenceAsUObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_GradientLinearMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_GradientRadialMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_CubeMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_CylinderMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_StaticMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_InstancedMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_PointLightComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_TestComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_EditableInstancedSubobject_DefaultSubobject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_InstancedOnlySubobject_DefaultSubobject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_NakedSubobject_DefaultSubobject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_EditOnlySubobject_OptionalSubobject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_EditableInstancedSubobjectArray_OptionalSubobject_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_EditableInstancedSubobjectArray_OptionalSubobject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_EditableInstancedSubobjectMap_OptionalSubobject_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_EditableInstancedSubobjectMap_OptionalSubobject_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_EditableInstancedSubobjectMap_OptionalSubobject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_EditOnlySubobjectArray_OptionalSubobject_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_EditOnlySubobjectArray_OptionalSubobject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_EditOnlySubobjectMap_OptionalSubobject_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_EditOnlySubobjectMap_OptionalSubobject_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapshotTestActor_Statics::NewProp_EditOnlySubobjectMap_OptionalSubobject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASnapshotTestActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASnapshotTestActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASnapshotTestActor_Statics::ClassParams = {
		&ASnapshotTestActor::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASnapshotTestActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASnapshotTestActor_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASnapshotTestActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASnapshotTestActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASnapshotTestActor()
	{
		if (!Z_Registration_Info_UClass_ASnapshotTestActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASnapshotTestActor.OuterSingleton, Z_Construct_UClass_ASnapshotTestActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASnapshotTestActor.OuterSingleton;
	}
	template<> LEVELSNAPSHOTS_API UClass* StaticClass<ASnapshotTestActor>()
	{
		return ASnapshotTestActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASnapshotTestActor);
	ASnapshotTestActor::~ASnapshotTestActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Private_Tests_Types_SnapshotTestActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Private_Tests_Types_SnapshotTestActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USubSubobject, USubSubobject::StaticClass, TEXT("USubSubobject"), &Z_Registration_Info_UClass_USubSubobject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubSubobject), 3791550444U) },
		{ Z_Construct_UClass_USubobject, USubobject::StaticClass, TEXT("USubobject"), &Z_Registration_Info_UClass_USubobject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubobject), 4251990703U) },
		{ Z_Construct_UClass_USnapshotTestComponent, USnapshotTestComponent::StaticClass, TEXT("USnapshotTestComponent"), &Z_Registration_Info_UClass_USnapshotTestComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapshotTestComponent), 3849324202U) },
		{ Z_Construct_UClass_ASnapshotTestActor, ASnapshotTestActor::StaticClass, TEXT("ASnapshotTestActor"), &Z_Registration_Info_UClass_ASnapshotTestActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASnapshotTestActor), 650183552U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Private_Tests_Types_SnapshotTestActor_h_1006857976(TEXT("/Script/LevelSnapshots"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Private_Tests_Types_SnapshotTestActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Private_Tests_Types_SnapshotTestActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
