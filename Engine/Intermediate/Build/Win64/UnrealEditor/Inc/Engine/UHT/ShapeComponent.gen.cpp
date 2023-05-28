// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShapeComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavAreaBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	ENGINE_API UClass* Z_Construct_UClass_UShapeComponent();
	ENGINE_API UClass* Z_Construct_UClass_UShapeComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UShapeComponent::StaticRegisterNativesUShapeComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UShapeComponent);
	UClass* Z_Construct_UClass_UShapeComponent_NoRegister()
	{
		return UShapeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UShapeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShapeBodySetup_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ShapeBodySetup;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AreaClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AreaClass;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShapeColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShapeColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawOnlyIfSelected_MetaData[];
#endif
		static void NewProp_bDrawOnlyIfSelected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawOnlyIfSelected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldCollideWhenPlacing_MetaData[];
#endif
		static void NewProp_bShouldCollideWhenPlacing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldCollideWhenPlacing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDynamicObstacle_MetaData[];
#endif
		static void NewProp_bDynamicObstacle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDynamicObstacle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AreaClassOverride_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AreaClassOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSystemDefaultObstacleAreaClass_MetaData[];
#endif
		static void NewProp_bUseSystemDefaultObstacleAreaClass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSystemDefaultObstacleAreaClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShapeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShapeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "Comment", "/**\n * ShapeComponent is a PrimitiveComponent that is represented by a simple geometrical shape (sphere, capsule, box, etc).\n */" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "Components/ShapeComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/ShapeComponent.h" },
		{ "ToolTip", "ShapeComponent is a PrimitiveComponent that is represented by a simple geometrical shape (sphere, capsule, box, etc)." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShapeComponent_Statics::NewProp_ShapeBodySetup_MetaData[] = {
		{ "Comment", "/** Description of collision */" },
		{ "ModuleRelativePath", "Classes/Components/ShapeComponent.h" },
		{ "ToolTip", "Description of collision" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UShapeComponent_Statics::NewProp_ShapeBodySetup = { "ShapeBodySetup", nullptr, (EPropertyFlags)0x0014000000202000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShapeComponent, ShapeBodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UShapeComponent_Statics::NewProp_ShapeBodySetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShapeComponent_Statics::NewProp_ShapeBodySetup_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShapeComponent_Statics::NewProp_AreaClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/ShapeComponent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UShapeComponent_Statics::NewProp_AreaClass = { "AreaClass", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShapeComponent, AreaClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNavAreaBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UShapeComponent_Statics::NewProp_AreaClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShapeComponent_Statics::NewProp_AreaClass_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShapeComponent_Statics::NewProp_ShapeColor_MetaData[] = {
		{ "Category", "Shape" },
		{ "Comment", "/** Color used to draw the shape. */" },
		{ "ModuleRelativePath", "Classes/Components/ShapeComponent.h" },
		{ "ToolTip", "Color used to draw the shape." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UShapeComponent_Statics::NewProp_ShapeColor = { "ShapeColor", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShapeComponent, ShapeColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UShapeComponent_Statics::NewProp_ShapeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShapeComponent_Statics::NewProp_ShapeColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShapeComponent_Statics::NewProp_bDrawOnlyIfSelected_MetaData[] = {
		{ "Comment", "/** Only show this component if the actor is selected */" },
		{ "ModuleRelativePath", "Classes/Components/ShapeComponent.h" },
		{ "ToolTip", "Only show this component if the actor is selected" },
	};
#endif
	void Z_Construct_UClass_UShapeComponent_Statics::NewProp_bDrawOnlyIfSelected_SetBit(void* Obj)
	{
		((UShapeComponent*)Obj)->bDrawOnlyIfSelected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UShapeComponent_Statics::NewProp_bDrawOnlyIfSelected = { "bDrawOnlyIfSelected", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UShapeComponent), &Z_Construct_UClass_UShapeComponent_Statics::NewProp_bDrawOnlyIfSelected_SetBit, METADATA_PARAMS(Z_Construct_UClass_UShapeComponent_Statics::NewProp_bDrawOnlyIfSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShapeComponent_Statics::NewProp_bDrawOnlyIfSelected_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShapeComponent_Statics::NewProp_bShouldCollideWhenPlacing_MetaData[] = {
		{ "Comment", "/** If true it allows Collision when placing even if collision is not enabled*/" },
		{ "ModuleRelativePath", "Classes/Components/ShapeComponent.h" },
		{ "ToolTip", "If true it allows Collision when placing even if collision is not enabled" },
	};
#endif
	void Z_Construct_UClass_UShapeComponent_Statics::NewProp_bShouldCollideWhenPlacing_SetBit(void* Obj)
	{
		((UShapeComponent*)Obj)->bShouldCollideWhenPlacing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UShapeComponent_Statics::NewProp_bShouldCollideWhenPlacing = { "bShouldCollideWhenPlacing", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UShapeComponent), &Z_Construct_UClass_UShapeComponent_Statics::NewProp_bShouldCollideWhenPlacing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UShapeComponent_Statics::NewProp_bShouldCollideWhenPlacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShapeComponent_Statics::NewProp_bShouldCollideWhenPlacing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShapeComponent_Statics::NewProp_bDynamicObstacle_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "/** If set, shape will be exported for navigation as dynamic modifier instead of using regular collision data */" },
		{ "ModuleRelativePath", "Classes/Components/ShapeComponent.h" },
		{ "ToolTip", "If set, shape will be exported for navigation as dynamic modifier instead of using regular collision data" },
	};
#endif
	void Z_Construct_UClass_UShapeComponent_Statics::NewProp_bDynamicObstacle_SetBit(void* Obj)
	{
		((UShapeComponent*)Obj)->bDynamicObstacle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UShapeComponent_Statics::NewProp_bDynamicObstacle = { "bDynamicObstacle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UShapeComponent), &Z_Construct_UClass_UShapeComponent_Statics::NewProp_bDynamicObstacle_SetBit, METADATA_PARAMS(Z_Construct_UClass_UShapeComponent_Statics::NewProp_bDynamicObstacle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShapeComponent_Statics::NewProp_bDynamicObstacle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShapeComponent_Statics::NewProp_AreaClassOverride_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "/** Navigation area type override, null / none = no change to nav mesh.\n\x09 *  bDynamicObstacle must be true and bUseSystemDefaultAreaClass false to use this.\n\x09 */" },
		{ "EditCondition", "bDynamicObstacle && !bUseSystemDefaultObstacleAreaClass" },
		{ "ModuleRelativePath", "Classes/Components/ShapeComponent.h" },
		{ "ToolTip", "Navigation area type override, null / none = no change to nav mesh.\nbDynamicObstacle must be true and bUseSystemDefaultAreaClass false to use this." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UShapeComponent_Statics::NewProp_AreaClassOverride = { "AreaClassOverride", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShapeComponent, AreaClassOverride), Z_Construct_UClass_UClass, Z_Construct_UClass_UNavAreaBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UShapeComponent_Statics::NewProp_AreaClassOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShapeComponent_Statics::NewProp_AreaClassOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShapeComponent_Statics::NewProp_bUseSystemDefaultObstacleAreaClass_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "/** Uses FNavigationSystem::GetDefaultObstacleArea() by default instead of AreaClassOverride, bDynamicObstacle must be true to use this.  */" },
		{ "EditCondition", "bDynamicObstacle" },
		{ "ModuleRelativePath", "Classes/Components/ShapeComponent.h" },
		{ "ToolTip", "Uses FNavigationSystem::GetDefaultObstacleArea() by default instead of AreaClassOverride, bDynamicObstacle must be true to use this." },
	};
#endif
	void Z_Construct_UClass_UShapeComponent_Statics::NewProp_bUseSystemDefaultObstacleAreaClass_SetBit(void* Obj)
	{
		((UShapeComponent*)Obj)->bUseSystemDefaultObstacleAreaClass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UShapeComponent_Statics::NewProp_bUseSystemDefaultObstacleAreaClass = { "bUseSystemDefaultObstacleAreaClass", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UShapeComponent), &Z_Construct_UClass_UShapeComponent_Statics::NewProp_bUseSystemDefaultObstacleAreaClass_SetBit, METADATA_PARAMS(Z_Construct_UClass_UShapeComponent_Statics::NewProp_bUseSystemDefaultObstacleAreaClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShapeComponent_Statics::NewProp_bUseSystemDefaultObstacleAreaClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShapeComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShapeComponent_Statics::NewProp_ShapeBodySetup,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShapeComponent_Statics::NewProp_AreaClass,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShapeComponent_Statics::NewProp_ShapeColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShapeComponent_Statics::NewProp_bDrawOnlyIfSelected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShapeComponent_Statics::NewProp_bShouldCollideWhenPlacing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShapeComponent_Statics::NewProp_bDynamicObstacle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShapeComponent_Statics::NewProp_AreaClassOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShapeComponent_Statics::NewProp_bUseSystemDefaultObstacleAreaClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShapeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShapeComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UShapeComponent_Statics::ClassParams = {
		&UShapeComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UShapeComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UShapeComponent_Statics::PropPointers),
		0,
		0x00B010A5u,
		METADATA_PARAMS(Z_Construct_UClass_UShapeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShapeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShapeComponent()
	{
		if (!Z_Registration_Info_UClass_UShapeComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UShapeComponent.OuterSingleton, Z_Construct_UClass_UShapeComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UShapeComponent.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UShapeComponent>()
	{
		return UShapeComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShapeComponent);
	UShapeComponent::~UShapeComponent() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UShapeComponent)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UShapeComponent, UShapeComponent::StaticClass, TEXT("UShapeComponent"), &Z_Registration_Info_UClass_UShapeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UShapeComponent), 3012455918U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h_2230968636(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
