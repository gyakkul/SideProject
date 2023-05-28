// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/Navigation/GridPathFollowingComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridPathFollowingComponent() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UGridPathFollowingComponent();
	AIMODULE_API UClass* Z_Construct_UClass_UGridPathFollowingComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UNavLocalGridManager_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UPathFollowingComponent();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UGridPathFollowingComponent::StaticRegisterNativesUGridPathFollowingComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridPathFollowingComponent);
	UClass* Z_Construct_UClass_UGridPathFollowingComponent_NoRegister()
	{
		return UGridPathFollowingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGridPathFollowingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GridManager;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGridPathFollowingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPathFollowingComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridPathFollowingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *  Path following augmented with local navigation grids\n *\n *  Keeps track of nearby grids and use them instead of navigation path when agent is inside.\n *  Once outside grid, regular path following is resumed.\n *\n *  This allows creating dynamic navigation obstacles with fully static navigation (e.g. static navmesh),\n *  as long as they are minor modifications for path. Not recommended for blocking off entire corridors.\n *\n *  Does not replace proper avoidance for dynamic obstacles!\n */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "Navigation/GridPathFollowingComponent.h" },
		{ "ModuleRelativePath", "Classes/Navigation/GridPathFollowingComponent.h" },
		{ "ToolTip", "Path following augmented with local navigation grids\n\nKeeps track of nearby grids and use them instead of navigation path when agent is inside.\nOnce outside grid, regular path following is resumed.\n\nThis allows creating dynamic navigation obstacles with fully static navigation (e.g. static navmesh),\nas long as they are minor modifications for path. Not recommended for blocking off entire corridors.\n\nDoes not replace proper avoidance for dynamic obstacles!" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridPathFollowingComponent_Statics::NewProp_GridManager_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Navigation/GridPathFollowingComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGridPathFollowingComponent_Statics::NewProp_GridManager = { "GridManager", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGridPathFollowingComponent, GridManager), Z_Construct_UClass_UNavLocalGridManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGridPathFollowingComponent_Statics::NewProp_GridManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridPathFollowingComponent_Statics::NewProp_GridManager_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridPathFollowingComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridPathFollowingComponent_Statics::NewProp_GridManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGridPathFollowingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridPathFollowingComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridPathFollowingComponent_Statics::ClassParams = {
		&UGridPathFollowingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGridPathFollowingComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGridPathFollowingComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGridPathFollowingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGridPathFollowingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGridPathFollowingComponent()
	{
		if (!Z_Registration_Info_UClass_UGridPathFollowingComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridPathFollowingComponent.OuterSingleton, Z_Construct_UClass_UGridPathFollowingComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGridPathFollowingComponent.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UGridPathFollowingComponent>()
	{
		return UGridPathFollowingComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridPathFollowingComponent);
	UGridPathFollowingComponent::~UGridPathFollowingComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_GridPathFollowingComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_GridPathFollowingComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGridPathFollowingComponent, UGridPathFollowingComponent::StaticClass, TEXT("UGridPathFollowingComponent"), &Z_Registration_Info_UClass_UGridPathFollowingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridPathFollowingComponent), 3657802771U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_GridPathFollowingComponent_h_2310885355(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_GridPathFollowingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_GridPathFollowingComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
