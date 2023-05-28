// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Components/WorldPartitionStreamingSourceComponent.h"
#include "../../Source/Runtime/Engine/Public/WorldPartition/WorldPartitionStreamingSource.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionStreamingSourceComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UHLODLayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionStreamingSourceComponent();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EStreamingSourcePriority();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EStreamingSourceTargetBehavior();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EStreamingSourceTargetState();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStreamingSourceShape();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(UWorldPartitionStreamingSourceComponent::execIsStreamingCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsStreamingCompleted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWorldPartitionStreamingSourceComponent::execIsStreamingSourceEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsStreamingSourceEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWorldPartitionStreamingSourceComponent::execDisableStreamingSource)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableStreamingSource();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWorldPartitionStreamingSourceComponent::execEnableStreamingSource)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableStreamingSource();
		P_NATIVE_END;
	}
	void UWorldPartitionStreamingSourceComponent::StaticRegisterNativesUWorldPartitionStreamingSourceComponent()
	{
		UClass* Class = UWorldPartitionStreamingSourceComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisableStreamingSource", &UWorldPartitionStreamingSourceComponent::execDisableStreamingSource },
			{ "EnableStreamingSource", &UWorldPartitionStreamingSourceComponent::execEnableStreamingSource },
			{ "IsStreamingCompleted", &UWorldPartitionStreamingSourceComponent::execIsStreamingCompleted },
			{ "IsStreamingSourceEnabled", &UWorldPartitionStreamingSourceComponent::execIsStreamingSourceEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_DisableStreamingSource_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_DisableStreamingSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Streaming" },
		{ "Comment", "/** Disable the component */" },
		{ "ModuleRelativePath", "Classes/Components/WorldPartitionStreamingSourceComponent.h" },
		{ "ToolTip", "Disable the component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_DisableStreamingSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldPartitionStreamingSourceComponent, nullptr, "DisableStreamingSource", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_DisableStreamingSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_DisableStreamingSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_DisableStreamingSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_DisableStreamingSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_EnableStreamingSource_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_EnableStreamingSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Streaming" },
		{ "Comment", "/** Enable the component */" },
		{ "ModuleRelativePath", "Classes/Components/WorldPartitionStreamingSourceComponent.h" },
		{ "ToolTip", "Enable the component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_EnableStreamingSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldPartitionStreamingSourceComponent, nullptr, "EnableStreamingSource", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_EnableStreamingSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_EnableStreamingSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_EnableStreamingSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_EnableStreamingSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingCompleted_Statics
	{
		struct WorldPartitionStreamingSourceComponent_eventIsStreamingCompleted_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingCompleted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WorldPartitionStreamingSourceComponent_eventIsStreamingCompleted_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingCompleted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WorldPartitionStreamingSourceComponent_eventIsStreamingCompleted_Parms), &Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingCompleted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingCompleted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingCompleted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingCompleted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Streaming" },
		{ "Comment", "/** Returns true if streaming is completed for this streaming source component. */" },
		{ "ModuleRelativePath", "Classes/Components/WorldPartitionStreamingSourceComponent.h" },
		{ "ToolTip", "Returns true if streaming is completed for this streaming source component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldPartitionStreamingSourceComponent, nullptr, "IsStreamingCompleted", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingCompleted_Statics::WorldPartitionStreamingSourceComponent_eventIsStreamingCompleted_Parms), Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingSourceEnabled_Statics
	{
		struct WorldPartitionStreamingSourceComponent_eventIsStreamingSourceEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingSourceEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WorldPartitionStreamingSourceComponent_eventIsStreamingSourceEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingSourceEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WorldPartitionStreamingSourceComponent_eventIsStreamingSourceEnabled_Parms), &Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingSourceEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingSourceEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingSourceEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingSourceEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Streaming" },
		{ "Comment", "/** Returns true if the component is active. */" },
		{ "ModuleRelativePath", "Classes/Components/WorldPartitionStreamingSourceComponent.h" },
		{ "ToolTip", "Returns true if the component is active." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingSourceEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldPartitionStreamingSourceComponent, nullptr, "IsStreamingSourceEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingSourceEnabled_Statics::WorldPartitionStreamingSourceComponent_eventIsStreamingSourceEnabled_Parms), Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingSourceEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingSourceEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingSourceEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingSourceEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingSourceEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingSourceEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionStreamingSourceComponent);
	UClass* Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_NoRegister()
	{
		return UWorldPartitionStreamingSourceComponent::StaticClass();
	}
	struct Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultVisualizerLoadingRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultVisualizerLoadingRange;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FBytePropertyParams NewProp_TargetBehavior_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetBehavior;
		static const UECodeGen_Private::FNamePropertyParams NewProp_TargetGrids_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetGrids_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetGrids;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetGrid_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TargetGrid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebugColor;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TargetHLODLayers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetHLODLayers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetHLODLayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetHLODLayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TargetHLODLayer;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Shapes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Shapes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Shapes;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Priority_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStreamingSourceEnabled_MetaData[];
#endif
		static void NewProp_bStreamingSourceEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStreamingSourceEnabled;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TargetState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_DisableStreamingSource, "DisableStreamingSource" }, // 2353609279
		{ &Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_EnableStreamingSource, "EnableStreamingSource" }, // 420806222
		{ &Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingCompleted, "IsStreamingCompleted" }, // 4155152328
		{ &Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingSourceEnabled, "IsStreamingSourceEnabled" }, // 3078870757
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "HideCategories", "Tags Sockets ComponentTick ComponentReplication Activation Cooking Events AssetUserData Collision" },
		{ "IncludePath", "Components/WorldPartitionStreamingSourceComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/WorldPartitionStreamingSourceComponent.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_DefaultVisualizerLoadingRange_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Value used by debug visualizer when grid loading range is chosen. */" },
		{ "ModuleRelativePath", "Classes/Components/WorldPartitionStreamingSourceComponent.h" },
		{ "ToolTip", "Value used by debug visualizer when grid loading range is chosen." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_DefaultVisualizerLoadingRange = { "DefaultVisualizerLoadingRange", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldPartitionStreamingSourceComponent, DefaultVisualizerLoadingRange), METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_DefaultVisualizerLoadingRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_DefaultVisualizerLoadingRange_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_TargetBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_TargetBehavior_MetaData[] = {
		{ "Category", "Streaming" },
		{ "Comment", "/** When TargetGrids or TargetHLODLayers are specified, this indicates the behavior. */" },
		{ "ModuleRelativePath", "Classes/Components/WorldPartitionStreamingSourceComponent.h" },
		{ "ToolTip", "When TargetGrids or TargetHLODLayers are specified, this indicates the behavior." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_TargetBehavior = { "TargetBehavior", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldPartitionStreamingSourceComponent, TargetBehavior), Z_Construct_UEnum_Engine_EStreamingSourceTargetBehavior, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_TargetBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_TargetBehavior_MetaData)) }; // 2813496413
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_TargetGrids_Inner = { "TargetGrids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_TargetGrids_MetaData[] = {
		{ "Category", "Streaming" },
		{ "Comment", "/** Optional target grids affected by streaming source. */" },
		{ "ModuleRelativePath", "Classes/Components/WorldPartitionStreamingSourceComponent.h" },
		{ "ToolTip", "Optional target grids affected by streaming source." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_TargetGrids = { "TargetGrids", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldPartitionStreamingSourceComponent, TargetGrids), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_TargetGrids_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_TargetGrids_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_TargetGrid_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use TargetGrids instead." },
		{ "ModuleRelativePath", "Classes/Components/WorldPartitionStreamingSourceComponent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_TargetGrid = { "TargetGrid", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldPartitionStreamingSourceComponent, TargetGrid_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_TargetGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_TargetGrid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_DebugColor_MetaData[] = {
		{ "Category", "Streaming" },
		{ "Comment", "/** Color used for debugging. */" },
		{ "ModuleRelativePath", "Classes/Components/WorldPartitionStreamingSourceComponent.h" },
		{ "ToolTip", "Color used for debugging." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_DebugColor = { "DebugColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldPartitionStreamingSourceComponent, DebugColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_DebugColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_DebugColor_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_TargetHLODLayers_Inner = { "TargetHLODLayers", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UHLODLayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_TargetHLODLayers_MetaData[] = {
		{ "Category", "Streaming" },
		{ "Comment", "/** Optional target HLODLayers affected by the streaming source. */" },
		{ "ModuleRelativePath", "Classes/Components/WorldPartitionStreamingSourceComponent.h" },
		{ "ToolTip", "Optional target HLODLayers affected by the streaming source." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_TargetHLODLayers = { "TargetHLODLayers", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldPartitionStreamingSourceComponent, TargetHLODLayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_TargetHLODLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_TargetHLODLayers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_TargetHLODLayer_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use TargetHLODLayers instead." },
		{ "ModuleRelativePath", "Classes/Components/WorldPartitionStreamingSourceComponent.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_TargetHLODLayer = { "TargetHLODLayer", nullptr, (EPropertyFlags)0x0014000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldPartitionStreamingSourceComponent, TargetHLODLayer_DEPRECATED), Z_Construct_UClass_UHLODLayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_TargetHLODLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_TargetHLODLayer_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_Shapes_Inner = { "Shapes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FStreamingSourceShape, METADATA_PARAMS(nullptr, 0) }; // 3692713845
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_Shapes_MetaData[] = {
		{ "Category", "Streaming" },
		{ "Comment", "/** Optional aggregated shape list used to build a custom shape for the streaming source. When empty, fallbacks sphere shape with a radius equal to grid's loading range. */" },
		{ "ModuleRelativePath", "Classes/Components/WorldPartitionStreamingSourceComponent.h" },
		{ "ToolTip", "Optional aggregated shape list used to build a custom shape for the streaming source. When empty, fallbacks sphere shape with a radius equal to grid's loading range." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_Shapes = { "Shapes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldPartitionStreamingSourceComponent, Shapes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_Shapes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_Shapes_MetaData)) }; // 3692713845
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_Priority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "Streaming" },
		{ "ModuleRelativePath", "Classes/Components/WorldPartitionStreamingSourceComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldPartitionStreamingSourceComponent, Priority), Z_Construct_UEnum_Engine_EStreamingSourcePriority, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_Priority_MetaData)) }; // 294550985
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_bStreamingSourceEnabled_MetaData[] = {
		{ "Category", "Streaming" },
		{ "Comment", "/** Whether this component is enabled or not */" },
		{ "ModuleRelativePath", "Classes/Components/WorldPartitionStreamingSourceComponent.h" },
		{ "ToolTip", "Whether this component is enabled or not" },
	};
#endif
	void Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_bStreamingSourceEnabled_SetBit(void* Obj)
	{
		((UWorldPartitionStreamingSourceComponent*)Obj)->bStreamingSourceEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_bStreamingSourceEnabled = { "bStreamingSourceEnabled", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWorldPartitionStreamingSourceComponent), &Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_bStreamingSourceEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_bStreamingSourceEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_bStreamingSourceEnabled_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_TargetState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_TargetState_MetaData[] = {
		{ "Category", "Streaming" },
		{ "ModuleRelativePath", "Classes/Components/WorldPartitionStreamingSourceComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_TargetState = { "TargetState", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldPartitionStreamingSourceComponent, TargetState), Z_Construct_UEnum_Engine_EStreamingSourceTargetState, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_TargetState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_TargetState_MetaData)) }; // 1809651394
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_DefaultVisualizerLoadingRange,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_TargetBehavior_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_TargetBehavior,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_TargetGrids_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_TargetGrids,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_TargetGrid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_DebugColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_TargetHLODLayers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_TargetHLODLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_TargetHLODLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_Shapes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_Shapes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_Priority_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_bStreamingSourceEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_TargetState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_TargetState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionStreamingSourceComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::ClassParams = {
		&UWorldPartitionStreamingSourceComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldPartitionStreamingSourceComponent()
	{
		if (!Z_Registration_Info_UClass_UWorldPartitionStreamingSourceComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionStreamingSourceComponent.OuterSingleton, Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldPartitionStreamingSourceComponent.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UWorldPartitionStreamingSourceComponent>()
	{
		return UWorldPartitionStreamingSourceComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionStreamingSourceComponent);
	UWorldPartitionStreamingSourceComponent::~UWorldPartitionStreamingSourceComponent() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UWorldPartitionStreamingSourceComponent)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_WorldPartitionStreamingSourceComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_WorldPartitionStreamingSourceComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartitionStreamingSourceComponent, UWorldPartitionStreamingSourceComponent::StaticClass, TEXT("UWorldPartitionStreamingSourceComponent"), &Z_Registration_Info_UClass_UWorldPartitionStreamingSourceComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionStreamingSourceComponent), 4030954559U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_WorldPartitionStreamingSourceComponent_h_4039706487(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_WorldPartitionStreamingSourceComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_WorldPartitionStreamingSourceComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
