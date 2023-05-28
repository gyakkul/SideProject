// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseGizmos/ScalableSphereGizmo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScalableSphereGizmo() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UAnyButtonInputBehavior();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmo();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmoBuilder();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UScalableSphereGizmo();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UScalableSphereGizmo_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UScalableSphereGizmoBuilder();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UScalableSphereGizmoBuilder_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UScalableSphereGizmoInputBehavior();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UScalableSphereGizmoInputBehavior_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UTransformProxy_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	void UScalableSphereGizmoBuilder::StaticRegisterNativesUScalableSphereGizmoBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScalableSphereGizmoBuilder);
	UClass* Z_Construct_UClass_UScalableSphereGizmoBuilder_NoRegister()
	{
		return UScalableSphereGizmoBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UScalableSphereGizmoBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScalableSphereGizmoBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveGizmoBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScalableSphereGizmoBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseGizmos/ScalableSphereGizmo.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ScalableSphereGizmo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScalableSphereGizmoBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScalableSphereGizmoBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UScalableSphereGizmoBuilder_Statics::ClassParams = {
		&UScalableSphereGizmoBuilder::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UScalableSphereGizmoBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScalableSphereGizmoBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScalableSphereGizmoBuilder()
	{
		if (!Z_Registration_Info_UClass_UScalableSphereGizmoBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScalableSphereGizmoBuilder.OuterSingleton, Z_Construct_UClass_UScalableSphereGizmoBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UScalableSphereGizmoBuilder.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UScalableSphereGizmoBuilder>()
	{
		return UScalableSphereGizmoBuilder::StaticClass();
	}
	UScalableSphereGizmoBuilder::UScalableSphereGizmoBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScalableSphereGizmoBuilder);
	UScalableSphereGizmoBuilder::~UScalableSphereGizmoBuilder() {}
	void UScalableSphereGizmo::StaticRegisterNativesUScalableSphereGizmo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScalableSphereGizmo);
	UClass* Z_Construct_UClass_UScalableSphereGizmo_NoRegister()
	{
		return UScalableSphereGizmo::StaticClass();
	}
	struct Z_Construct_UClass_UScalableSphereGizmo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitErrorThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HitErrorThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransactionDescription_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_TransactionDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsHovering_MetaData[];
#endif
		static void NewProp_bIsHovering_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHovering;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsDragging_MetaData[];
#endif
		static void NewProp_bIsDragging_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDragging;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActiveTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DragStartWorldPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DragStartWorldPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DragCurrentPositionProjected_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DragCurrentPositionProjected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionStartParameter_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionStartParameter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScalableSphereGizmo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveGizmo,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScalableSphereGizmo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UScalableSphereGizmo provides a sphere that can be scaled in all directions by dragging\n * anywhere on the three axial circles that represent it\n */" },
		{ "IncludePath", "BaseGizmos/ScalableSphereGizmo.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ScalableSphereGizmo.h" },
		{ "ToolTip", "UScalableSphereGizmo provides a sphere that can be scaled in all directions by dragging\nanywhere on the three axial circles that represent it" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_HitErrorThreshold_MetaData[] = {
		{ "Comment", "// The error threshold for hit detection with the sphere\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ScalableSphereGizmo.h" },
		{ "ToolTip", "The error threshold for hit detection with the sphere" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_HitErrorThreshold = { "HitErrorThreshold", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UScalableSphereGizmo, HitErrorThreshold), METADATA_PARAMS(Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_HitErrorThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_HitErrorThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_TransactionDescription_MetaData[] = {
		{ "Comment", "// The text that will be used as the transaction description for undo/redo\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ScalableSphereGizmo.h" },
		{ "ToolTip", "The text that will be used as the transaction description for undo/redo" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_TransactionDescription = { "TransactionDescription", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UScalableSphereGizmo, TransactionDescription), METADATA_PARAMS(Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_TransactionDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_TransactionDescription_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_Radius_MetaData[] = {
		{ "Comment", "// The radius of the sphere\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ScalableSphereGizmo.h" },
		{ "ToolTip", "The radius of the sphere" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UScalableSphereGizmo, Radius), METADATA_PARAMS(Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_bIsHovering_MetaData[] = {
		{ "Comment", "// Whether the sphere is currently being hovered over\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ScalableSphereGizmo.h" },
		{ "ToolTip", "Whether the sphere is currently being hovered over" },
	};
#endif
	void Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_bIsHovering_SetBit(void* Obj)
	{
		((UScalableSphereGizmo*)Obj)->bIsHovering = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_bIsHovering = { "bIsHovering", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UScalableSphereGizmo), &Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_bIsHovering_SetBit, METADATA_PARAMS(Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_bIsHovering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_bIsHovering_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_bIsDragging_MetaData[] = {
		{ "Comment", "// Whether the sphere is currently being dragged\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ScalableSphereGizmo.h" },
		{ "ToolTip", "Whether the sphere is currently being dragged" },
	};
#endif
	void Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_bIsDragging_SetBit(void* Obj)
	{
		((UScalableSphereGizmo*)Obj)->bIsDragging = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_bIsDragging = { "bIsDragging", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UScalableSphereGizmo), &Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_bIsDragging_SetBit, METADATA_PARAMS(Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_bIsDragging_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_bIsDragging_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_ActiveTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/ScalableSphereGizmo.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_ActiveTarget = { "ActiveTarget", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UScalableSphereGizmo, ActiveTarget), Z_Construct_UClass_UTransformProxy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_ActiveTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_ActiveTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_ActiveAxis_MetaData[] = {
		{ "Comment", "// The current axis that is being dragged along\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ScalableSphereGizmo.h" },
		{ "ToolTip", "The current axis that is being dragged along" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_ActiveAxis = { "ActiveAxis", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UScalableSphereGizmo, ActiveAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_ActiveAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_ActiveAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_DragStartWorldPosition_MetaData[] = {
		{ "Comment", "// The position the drag was started on\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ScalableSphereGizmo.h" },
		{ "ToolTip", "The position the drag was started on" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_DragStartWorldPosition = { "DragStartWorldPosition", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UScalableSphereGizmo, DragStartWorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_DragStartWorldPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_DragStartWorldPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_DragCurrentPositionProjected_MetaData[] = {
		{ "Comment", "// The position the drag is on currently (projected onto the line it is being dragged along)\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ScalableSphereGizmo.h" },
		{ "ToolTip", "The position the drag is on currently (projected onto the line it is being dragged along)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_DragCurrentPositionProjected = { "DragCurrentPositionProjected", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UScalableSphereGizmo, DragCurrentPositionProjected), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_DragCurrentPositionProjected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_DragCurrentPositionProjected_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_InteractionStartParameter_MetaData[] = {
		{ "Comment", "// The initial parameter along the drag axist\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ScalableSphereGizmo.h" },
		{ "ToolTip", "The initial parameter along the drag axist" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_InteractionStartParameter = { "InteractionStartParameter", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UScalableSphereGizmo, InteractionStartParameter), METADATA_PARAMS(Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_InteractionStartParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_InteractionStartParameter_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScalableSphereGizmo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_HitErrorThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_TransactionDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_bIsHovering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_bIsDragging,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_ActiveTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_ActiveAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_DragStartWorldPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_DragCurrentPositionProjected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_InteractionStartParameter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScalableSphereGizmo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScalableSphereGizmo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UScalableSphereGizmo_Statics::ClassParams = {
		&UScalableSphereGizmo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UScalableSphereGizmo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UScalableSphereGizmo_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UScalableSphereGizmo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScalableSphereGizmo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScalableSphereGizmo()
	{
		if (!Z_Registration_Info_UClass_UScalableSphereGizmo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScalableSphereGizmo.OuterSingleton, Z_Construct_UClass_UScalableSphereGizmo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UScalableSphereGizmo.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UScalableSphereGizmo>()
	{
		return UScalableSphereGizmo::StaticClass();
	}
	UScalableSphereGizmo::UScalableSphereGizmo() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScalableSphereGizmo);
	UScalableSphereGizmo::~UScalableSphereGizmo() {}
	void UScalableSphereGizmoInputBehavior::StaticRegisterNativesUScalableSphereGizmoInputBehavior()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScalableSphereGizmoInputBehavior);
	UClass* Z_Construct_UClass_UScalableSphereGizmoInputBehavior_NoRegister()
	{
		return UScalableSphereGizmoInputBehavior::StaticClass();
	}
	struct Z_Construct_UClass_UScalableSphereGizmoInputBehavior_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScalableSphereGizmoInputBehavior_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnyButtonInputBehavior,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScalableSphereGizmoInputBehavior_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A behavior that forwards clicking and dragging to the gizmo.\n */" },
		{ "IncludePath", "BaseGizmos/ScalableSphereGizmo.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ScalableSphereGizmo.h" },
		{ "ToolTip", "A behavior that forwards clicking and dragging to the gizmo." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScalableSphereGizmoInputBehavior_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScalableSphereGizmoInputBehavior>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UScalableSphereGizmoInputBehavior_Statics::ClassParams = {
		&UScalableSphereGizmoInputBehavior::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UScalableSphereGizmoInputBehavior_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScalableSphereGizmoInputBehavior_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScalableSphereGizmoInputBehavior()
	{
		if (!Z_Registration_Info_UClass_UScalableSphereGizmoInputBehavior.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScalableSphereGizmoInputBehavior.OuterSingleton, Z_Construct_UClass_UScalableSphereGizmoInputBehavior_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UScalableSphereGizmoInputBehavior.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UScalableSphereGizmoInputBehavior>()
	{
		return UScalableSphereGizmoInputBehavior::StaticClass();
	}
	UScalableSphereGizmoInputBehavior::UScalableSphereGizmoInputBehavior() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScalableSphereGizmoInputBehavior);
	UScalableSphereGizmoInputBehavior::~UScalableSphereGizmoInputBehavior() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ScalableSphereGizmo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ScalableSphereGizmo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UScalableSphereGizmoBuilder, UScalableSphereGizmoBuilder::StaticClass, TEXT("UScalableSphereGizmoBuilder"), &Z_Registration_Info_UClass_UScalableSphereGizmoBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScalableSphereGizmoBuilder), 2010117075U) },
		{ Z_Construct_UClass_UScalableSphereGizmo, UScalableSphereGizmo::StaticClass, TEXT("UScalableSphereGizmo"), &Z_Registration_Info_UClass_UScalableSphereGizmo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScalableSphereGizmo), 3972780828U) },
		{ Z_Construct_UClass_UScalableSphereGizmoInputBehavior, UScalableSphereGizmoInputBehavior::StaticClass, TEXT("UScalableSphereGizmoInputBehavior"), &Z_Registration_Info_UClass_UScalableSphereGizmoInputBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScalableSphereGizmoInputBehavior), 2558221271U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ScalableSphereGizmo_h_350388769(TEXT("/Script/InteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ScalableSphereGizmo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ScalableSphereGizmo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
