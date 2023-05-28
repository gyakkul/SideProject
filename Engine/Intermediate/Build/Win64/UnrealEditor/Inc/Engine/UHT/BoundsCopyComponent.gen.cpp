// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Components/BoundsCopyComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoundsCopyComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UBoundsCopyComponent();
	ENGINE_API UClass* Z_Construct_UClass_UBoundsCopyComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
#if WITH_EDITOR
	DEFINE_FUNCTION(UBoundsCopyComponent::execSetTransformToBounds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTransformToBounds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBoundsCopyComponent::execSetRotation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRotation();
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void UBoundsCopyComponent::StaticRegisterNativesUBoundsCopyComponent()
	{
#if WITH_EDITOR
		UClass* Class = UBoundsCopyComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetRotation", &UBoundsCopyComponent::execSetRotation },
			{ "SetTransformToBounds", &UBoundsCopyComponent::execSetTransformToBounds },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UBoundsCopyComponent_SetRotation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBoundsCopyComponent_SetRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "TransformFromBounds" },
		{ "Comment", "/** Copy the rotation from BoundsSourceActor to this component */" },
		{ "DisplayName", "Copy Rotation" },
		{ "ModuleRelativePath", "Classes/Components/BoundsCopyComponent.h" },
		{ "ToolTip", "Copy the rotation from BoundsSourceActor to this component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoundsCopyComponent_SetRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoundsCopyComponent, nullptr, "SetRotation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBoundsCopyComponent_SetRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoundsCopyComponent_SetRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBoundsCopyComponent_SetRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBoundsCopyComponent_SetRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UBoundsCopyComponent_SetTransformToBounds_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBoundsCopyComponent_SetTransformToBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "TransformFromBounds" },
		{ "Comment", "/** Set this component transform to include the BoundsSourceActor bounds */" },
		{ "DisplayName", "Copy Bounds" },
		{ "ModuleRelativePath", "Classes/Components/BoundsCopyComponent.h" },
		{ "ToolTip", "Set this component transform to include the BoundsSourceActor bounds" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoundsCopyComponent_SetTransformToBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoundsCopyComponent, nullptr, "SetTransformToBounds", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBoundsCopyComponent_SetTransformToBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoundsCopyComponent_SetTransformToBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBoundsCopyComponent_SetTransformToBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBoundsCopyComponent_SetTransformToBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBoundsCopyComponent);
	UClass* Z_Construct_UClass_UBoundsCopyComponent_NoRegister()
	{
		return UBoundsCopyComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBoundsCopyComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundsSourceActor_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_BoundsSourceActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCollidingComponentsForSourceBounds_MetaData[];
#endif
		static void NewProp_bUseCollidingComponentsForSourceBounds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCollidingComponentsForSourceBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bKeepOwnBoundsScale_MetaData[];
#endif
		static void NewProp_bKeepOwnBoundsScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepOwnBoundsScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCollidingComponentsForOwnBounds_MetaData[];
#endif
		static void NewProp_bUseCollidingComponentsForOwnBounds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCollidingComponentsForOwnBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PostTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCopyXBounds_MetaData[];
#endif
		static void NewProp_bCopyXBounds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCopyXBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCopyYBounds_MetaData[];
#endif
		static void NewProp_bCopyYBounds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCopyYBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCopyZBounds_MetaData[];
#endif
		static void NewProp_bCopyZBounds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCopyZBounds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBoundsCopyComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UBoundsCopyComponent_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UBoundsCopyComponent_SetRotation, "SetRotation" }, // 2708701560
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UBoundsCopyComponent_SetTransformToBounds, "SetTransformToBounds" }, // 1759826492
#endif //WITH_EDITOR
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoundsCopyComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/** Component used to copy the bounds of another Actor. */" },
		{ "HideCategories", "Activation AssetUserData Collision Cooking Tags" },
		{ "IncludePath", "Components/BoundsCopyComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/BoundsCopyComponent.h" },
		{ "ToolTip", "Component used to copy the bounds of another Actor." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_BoundsSourceActor_MetaData[] = {
		{ "Category", "TransformFromBounds" },
		{ "Comment", "/** Actor to copy the bounds from to set up the transform. */" },
		{ "DisplayName", "Source Actor" },
		{ "DisplayPriority", "3" },
		{ "ModuleRelativePath", "Classes/Components/BoundsCopyComponent.h" },
		{ "ToolTip", "Actor to copy the bounds from to set up the transform." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_BoundsSourceActor = { "BoundsSourceActor", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBoundsCopyComponent, BoundsSourceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_BoundsSourceActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_BoundsSourceActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bUseCollidingComponentsForSourceBounds_MetaData[] = {
		{ "Category", "TransformFromBounds" },
		{ "Comment", "/** If true, the source actor's bounds will include its colliding components bounds. */" },
		{ "EditCondition", "BoundsSourceActor != nullptr" },
		{ "ModuleRelativePath", "Classes/Components/BoundsCopyComponent.h" },
		{ "ToolTip", "If true, the source actor's bounds will include its colliding components bounds." },
	};
#endif
	void Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bUseCollidingComponentsForSourceBounds_SetBit(void* Obj)
	{
		((UBoundsCopyComponent*)Obj)->bUseCollidingComponentsForSourceBounds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bUseCollidingComponentsForSourceBounds = { "bUseCollidingComponentsForSourceBounds", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBoundsCopyComponent), &Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bUseCollidingComponentsForSourceBounds_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bUseCollidingComponentsForSourceBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bUseCollidingComponentsForSourceBounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bKeepOwnBoundsScale_MetaData[] = {
		{ "Category", "TransformFromBounds" },
		{ "Comment", "/** If true, the actor's scale will be changed so that after adjustment, its own bounds match the source bounds.*/" },
		{ "EditCondition", "BoundsSourceActor != nullptr" },
		{ "ModuleRelativePath", "Classes/Components/BoundsCopyComponent.h" },
		{ "ToolTip", "If true, the actor's scale will be changed so that after adjustment, its own bounds match the source bounds." },
	};
#endif
	void Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bKeepOwnBoundsScale_SetBit(void* Obj)
	{
		((UBoundsCopyComponent*)Obj)->bKeepOwnBoundsScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bKeepOwnBoundsScale = { "bKeepOwnBoundsScale", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBoundsCopyComponent), &Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bKeepOwnBoundsScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bKeepOwnBoundsScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bKeepOwnBoundsScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bUseCollidingComponentsForOwnBounds_MetaData[] = {
		{ "Category", "TransformFromBounds" },
		{ "Comment", "/** If true, the actor's own bounds will include its colliding components bounds. */" },
		{ "EditCondition", "bKeepOwnBoundsScale && BoundsSourceActor != nullptr" },
		{ "ModuleRelativePath", "Classes/Components/BoundsCopyComponent.h" },
		{ "ToolTip", "If true, the actor's own bounds will include its colliding components bounds." },
	};
#endif
	void Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bUseCollidingComponentsForOwnBounds_SetBit(void* Obj)
	{
		((UBoundsCopyComponent*)Obj)->bUseCollidingComponentsForOwnBounds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bUseCollidingComponentsForOwnBounds = { "bUseCollidingComponentsForOwnBounds", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBoundsCopyComponent), &Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bUseCollidingComponentsForOwnBounds_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bUseCollidingComponentsForOwnBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bUseCollidingComponentsForOwnBounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_PostTransform_MetaData[] = {
		{ "Comment", "/** Transform to apply to final result.*/" },
		{ "ModuleRelativePath", "Classes/Components/BoundsCopyComponent.h" },
		{ "ToolTip", "Transform to apply to final result." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_PostTransform = { "PostTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBoundsCopyComponent, PostTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_PostTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_PostTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bCopyXBounds_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/BoundsCopyComponent.h" },
	};
#endif
	void Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bCopyXBounds_SetBit(void* Obj)
	{
		((UBoundsCopyComponent*)Obj)->bCopyXBounds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bCopyXBounds = { "bCopyXBounds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBoundsCopyComponent), &Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bCopyXBounds_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bCopyXBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bCopyXBounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bCopyYBounds_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/BoundsCopyComponent.h" },
	};
#endif
	void Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bCopyYBounds_SetBit(void* Obj)
	{
		((UBoundsCopyComponent*)Obj)->bCopyYBounds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bCopyYBounds = { "bCopyYBounds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBoundsCopyComponent), &Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bCopyYBounds_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bCopyYBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bCopyYBounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bCopyZBounds_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/BoundsCopyComponent.h" },
	};
#endif
	void Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bCopyZBounds_SetBit(void* Obj)
	{
		((UBoundsCopyComponent*)Obj)->bCopyZBounds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bCopyZBounds = { "bCopyZBounds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBoundsCopyComponent), &Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bCopyZBounds_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bCopyZBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bCopyZBounds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBoundsCopyComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_BoundsSourceActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bUseCollidingComponentsForSourceBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bKeepOwnBoundsScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bUseCollidingComponentsForOwnBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_PostTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bCopyXBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bCopyYBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bCopyZBounds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBoundsCopyComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBoundsCopyComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBoundsCopyComponent_Statics::ClassParams = {
		&UBoundsCopyComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_UBoundsCopyComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBoundsCopyComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBoundsCopyComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBoundsCopyComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBoundsCopyComponent()
	{
		if (!Z_Registration_Info_UClass_UBoundsCopyComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBoundsCopyComponent.OuterSingleton, Z_Construct_UClass_UBoundsCopyComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBoundsCopyComponent.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UBoundsCopyComponent>()
	{
		return UBoundsCopyComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBoundsCopyComponent);
	UBoundsCopyComponent::~UBoundsCopyComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_BoundsCopyComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_BoundsCopyComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBoundsCopyComponent, UBoundsCopyComponent::StaticClass, TEXT("UBoundsCopyComponent"), &Z_Registration_Info_UClass_UBoundsCopyComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBoundsCopyComponent), 2956764061U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_BoundsCopyComponent_h_2940807890(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_BoundsCopyComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_BoundsCopyComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
