// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MockGameplayTasks.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMockGameplayTasks() {}
// Cross Module References
	AITESTSUITE_API UClass* Z_Construct_UClass_UMockGameplayTaskOwner();
	AITESTSUITE_API UClass* Z_Construct_UClass_UMockGameplayTaskOwner_NoRegister();
	AITESTSUITE_API UClass* Z_Construct_UClass_UMockGameplayTasksComponent();
	AITESTSUITE_API UClass* Z_Construct_UClass_UMockGameplayTasksComponent_NoRegister();
	AITESTSUITE_API UClass* Z_Construct_UClass_UMockTask_Log();
	AITESTSUITE_API UClass* Z_Construct_UClass_UMockTask_Log_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTasksComponent();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTasksComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AITestSuite();
// End Cross Module References
	void UMockTask_Log::StaticRegisterNativesUMockTask_Log()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMockTask_Log);
	UClass* Z_Construct_UClass_UMockTask_Log_NoRegister()
	{
		return UMockTask_Log::StaticClass();
	}
	struct Z_Construct_UClass_UMockTask_Log_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMockTask_Log_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayTask,
		(UObject* (*)())Z_Construct_UPackage__Script_AITestSuite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockTask_Log_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MockGameplayTasks.h" },
		{ "ModuleRelativePath", "Classes/MockGameplayTasks.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMockTask_Log_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMockTask_Log>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMockTask_Log_Statics::ClassParams = {
		&UMockTask_Log::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMockTask_Log_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMockTask_Log_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMockTask_Log()
	{
		if (!Z_Registration_Info_UClass_UMockTask_Log.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMockTask_Log.OuterSingleton, Z_Construct_UClass_UMockTask_Log_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMockTask_Log.OuterSingleton;
	}
	template<> AITESTSUITE_API UClass* StaticClass<UMockTask_Log>()
	{
		return UMockTask_Log::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMockTask_Log);
	UMockTask_Log::~UMockTask_Log() {}
	void UMockGameplayTasksComponent::StaticRegisterNativesUMockGameplayTasksComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMockGameplayTasksComponent);
	UClass* Z_Construct_UClass_UMockGameplayTasksComponent_NoRegister()
	{
		return UMockGameplayTasksComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMockGameplayTasksComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMockGameplayTasksComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayTasksComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AITestSuite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockGameplayTasksComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//\n// a Testing-time component that is a way to access UGameplayTasksComponent's protected properties\n//\n" },
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "MockGameplayTasks.h" },
		{ "ModuleRelativePath", "Classes/MockGameplayTasks.h" },
		{ "ToolTip", "a Testing-time component that is a way to access UGameplayTasksComponent's protected properties" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMockGameplayTasksComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMockGameplayTasksComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMockGameplayTasksComponent_Statics::ClassParams = {
		&UMockGameplayTasksComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMockGameplayTasksComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMockGameplayTasksComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMockGameplayTasksComponent()
	{
		if (!Z_Registration_Info_UClass_UMockGameplayTasksComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMockGameplayTasksComponent.OuterSingleton, Z_Construct_UClass_UMockGameplayTasksComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMockGameplayTasksComponent.OuterSingleton;
	}
	template<> AITESTSUITE_API UClass* StaticClass<UMockGameplayTasksComponent>()
	{
		return UMockGameplayTasksComponent::StaticClass();
	}
	UMockGameplayTasksComponent::UMockGameplayTasksComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMockGameplayTasksComponent);
	UMockGameplayTasksComponent::~UMockGameplayTasksComponent() {}
	void UMockGameplayTaskOwner::StaticRegisterNativesUMockGameplayTaskOwner()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMockGameplayTaskOwner);
	UClass* Z_Construct_UClass_UMockGameplayTaskOwner_NoRegister()
	{
		return UMockGameplayTaskOwner::StaticClass();
	}
	struct Z_Construct_UClass_UMockGameplayTaskOwner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GTComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GTComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMockGameplayTaskOwner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AITestSuite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockGameplayTaskOwner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MockGameplayTasks.h" },
		{ "ModuleRelativePath", "Classes/MockGameplayTasks.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockGameplayTaskOwner_Statics::NewProp_GTComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/MockGameplayTasks.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMockGameplayTaskOwner_Statics::NewProp_GTComponent = { "GTComponent", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMockGameplayTaskOwner, GTComponent), Z_Construct_UClass_UGameplayTasksComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMockGameplayTaskOwner_Statics::NewProp_GTComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMockGameplayTaskOwner_Statics::NewProp_GTComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMockGameplayTaskOwner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockGameplayTaskOwner_Statics::NewProp_GTComponent,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMockGameplayTaskOwner_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister, (int32)VTABLE_OFFSET(UMockGameplayTaskOwner, IGameplayTaskOwnerInterface), false },  // 2384509100
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMockGameplayTaskOwner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMockGameplayTaskOwner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMockGameplayTaskOwner_Statics::ClassParams = {
		&UMockGameplayTaskOwner::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMockGameplayTaskOwner_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMockGameplayTaskOwner_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMockGameplayTaskOwner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMockGameplayTaskOwner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMockGameplayTaskOwner()
	{
		if (!Z_Registration_Info_UClass_UMockGameplayTaskOwner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMockGameplayTaskOwner.OuterSingleton, Z_Construct_UClass_UMockGameplayTaskOwner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMockGameplayTaskOwner.OuterSingleton;
	}
	template<> AITESTSUITE_API UClass* StaticClass<UMockGameplayTaskOwner>()
	{
		return UMockGameplayTaskOwner::StaticClass();
	}
	UMockGameplayTaskOwner::UMockGameplayTaskOwner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMockGameplayTaskOwner);
	UMockGameplayTaskOwner::~UMockGameplayTaskOwner() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_MockGameplayTasks_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_MockGameplayTasks_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMockTask_Log, UMockTask_Log::StaticClass, TEXT("UMockTask_Log"), &Z_Registration_Info_UClass_UMockTask_Log, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMockTask_Log), 2375001228U) },
		{ Z_Construct_UClass_UMockGameplayTasksComponent, UMockGameplayTasksComponent::StaticClass, TEXT("UMockGameplayTasksComponent"), &Z_Registration_Info_UClass_UMockGameplayTasksComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMockGameplayTasksComponent), 1026563107U) },
		{ Z_Construct_UClass_UMockGameplayTaskOwner, UMockGameplayTaskOwner::StaticClass, TEXT("UMockGameplayTaskOwner"), &Z_Registration_Info_UClass_UMockGameplayTaskOwner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMockGameplayTaskOwner), 2875131930U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_MockGameplayTasks_h_2557046523(TEXT("/Script/AITestSuite"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_MockGameplayTasks_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_MockGameplayTasks_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
