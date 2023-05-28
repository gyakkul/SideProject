// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorLayerUtilities.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorLayerUtilities() {}
// Cross Module References
	ACTORLAYERUTILITIES_API UClass* Z_Construct_UClass_ULayersBlueprintLibrary();
	ACTORLAYERUTILITIES_API UClass* Z_Construct_UClass_ULayersBlueprintLibrary_NoRegister();
	ACTORLAYERUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActorLayer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ActorLayerUtilities();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActorLayer;
class UScriptStruct* FActorLayer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActorLayer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActorLayer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorLayer, (UObject*)Z_Construct_UPackage__Script_ActorLayerUtilities(), TEXT("ActorLayer"));
	}
	return Z_Registration_Info_UScriptStruct_ActorLayer.OuterSingleton;
}
template<> ACTORLAYERUTILITIES_API UScriptStruct* StaticStruct<FActorLayer>()
{
	return FActorLayer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FActorLayer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorLayer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ActorLayerUtilities.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorLayer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorLayer>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorLayer_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Layer" },
		{ "Comment", "/** The name of this layer */" },
		{ "ModuleRelativePath", "Public/ActorLayerUtilities.h" },
		{ "ToolTip", "The name of this layer" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FActorLayer_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActorLayer, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FActorLayer_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorLayer_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorLayer_Statics::NewProp_Name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorLayer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ActorLayerUtilities,
		nullptr,
		&NewStructOps,
		"ActorLayer",
		sizeof(FActorLayer),
		alignof(FActorLayer),
		Z_Construct_UScriptStruct_FActorLayer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorLayer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorLayer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorLayer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorLayer()
	{
		if (!Z_Registration_Info_UScriptStruct_ActorLayer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActorLayer.InnerSingleton, Z_Construct_UScriptStruct_FActorLayer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ActorLayer.InnerSingleton;
	}
	DEFINE_FUNCTION(ULayersBlueprintLibrary::execRemoveActorFromLayer)
	{
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_GET_STRUCT_REF(FActorLayer,Z_Param_Out_Layer);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULayersBlueprintLibrary::RemoveActorFromLayer(Z_Param_InActor,Z_Param_Out_Layer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULayersBlueprintLibrary::execAddActorToLayer)
	{
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_GET_STRUCT_REF(FActorLayer,Z_Param_Out_Layer);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULayersBlueprintLibrary::AddActorToLayer(Z_Param_InActor,Z_Param_Out_Layer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULayersBlueprintLibrary::execGetActors)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FActorLayer,Z_Param_Out_ActorLayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=ULayersBlueprintLibrary::GetActors(Z_Param_WorldContextObject,Z_Param_Out_ActorLayer);
		P_NATIVE_END;
	}
	void ULayersBlueprintLibrary::StaticRegisterNativesULayersBlueprintLibrary()
	{
		UClass* Class = ULayersBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddActorToLayer", &ULayersBlueprintLibrary::execAddActorToLayer },
			{ "GetActors", &ULayersBlueprintLibrary::execGetActors },
			{ "RemoveActorFromLayer", &ULayersBlueprintLibrary::execRemoveActorFromLayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULayersBlueprintLibrary_AddActorToLayer_Statics
	{
		struct LayersBlueprintLibrary_eventAddActorToLayer_Parms
		{
			AActor* InActor;
			FActorLayer Layer;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Layer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Layer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULayersBlueprintLibrary_AddActorToLayer_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersBlueprintLibrary_eventAddActorToLayer_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersBlueprintLibrary_AddActorToLayer_Statics::NewProp_Layer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULayersBlueprintLibrary_AddActorToLayer_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersBlueprintLibrary_eventAddActorToLayer_Parms, Layer), Z_Construct_UScriptStruct_FActorLayer, METADATA_PARAMS(Z_Construct_UFunction_ULayersBlueprintLibrary_AddActorToLayer_Statics::NewProp_Layer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersBlueprintLibrary_AddActorToLayer_Statics::NewProp_Layer_MetaData)) }; // 4104610653
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayersBlueprintLibrary_AddActorToLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersBlueprintLibrary_AddActorToLayer_Statics::NewProp_InActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersBlueprintLibrary_AddActorToLayer_Statics::NewProp_Layer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersBlueprintLibrary_AddActorToLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layer" },
		{ "Comment", "/** \n\x09 * Adds the actor to the specified layer\n\x09 */" },
		{ "ModuleRelativePath", "Public/ActorLayerUtilities.h" },
		{ "ToolTip", "Adds the actor to the specified layer" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayersBlueprintLibrary_AddActorToLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayersBlueprintLibrary, nullptr, "AddActorToLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULayersBlueprintLibrary_AddActorToLayer_Statics::LayersBlueprintLibrary_eventAddActorToLayer_Parms), Z_Construct_UFunction_ULayersBlueprintLibrary_AddActorToLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersBlueprintLibrary_AddActorToLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULayersBlueprintLibrary_AddActorToLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersBlueprintLibrary_AddActorToLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULayersBlueprintLibrary_AddActorToLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayersBlueprintLibrary_AddActorToLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors_Statics
	{
		struct LayersBlueprintLibrary_eventGetActors_Parms
		{
			UObject* WorldContextObject;
			FActorLayer ActorLayer;
			TArray<AActor*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorLayer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorLayer;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersBlueprintLibrary_eventGetActors_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors_Statics::NewProp_ActorLayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors_Statics::NewProp_ActorLayer = { "ActorLayer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersBlueprintLibrary_eventGetActors_Parms, ActorLayer), Z_Construct_UScriptStruct_FActorLayer, METADATA_PARAMS(Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors_Statics::NewProp_ActorLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors_Statics::NewProp_ActorLayer_MetaData)) }; // 4104610653
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersBlueprintLibrary_eventGetActors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors_Statics::NewProp_ActorLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layer" },
		{ "Comment", "/**\n\x09 * Get all the actors in this layer\n\x09 */" },
		{ "ModuleRelativePath", "Public/ActorLayerUtilities.h" },
		{ "ToolTip", "Get all the actors in this layer" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayersBlueprintLibrary, nullptr, "GetActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors_Statics::LayersBlueprintLibrary_eventGetActors_Parms), Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULayersBlueprintLibrary_RemoveActorFromLayer_Statics
	{
		struct LayersBlueprintLibrary_eventRemoveActorFromLayer_Parms
		{
			AActor* InActor;
			FActorLayer Layer;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Layer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Layer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULayersBlueprintLibrary_RemoveActorFromLayer_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersBlueprintLibrary_eventRemoveActorFromLayer_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersBlueprintLibrary_RemoveActorFromLayer_Statics::NewProp_Layer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULayersBlueprintLibrary_RemoveActorFromLayer_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersBlueprintLibrary_eventRemoveActorFromLayer_Parms, Layer), Z_Construct_UScriptStruct_FActorLayer, METADATA_PARAMS(Z_Construct_UFunction_ULayersBlueprintLibrary_RemoveActorFromLayer_Statics::NewProp_Layer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersBlueprintLibrary_RemoveActorFromLayer_Statics::NewProp_Layer_MetaData)) }; // 4104610653
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayersBlueprintLibrary_RemoveActorFromLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersBlueprintLibrary_RemoveActorFromLayer_Statics::NewProp_InActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersBlueprintLibrary_RemoveActorFromLayer_Statics::NewProp_Layer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersBlueprintLibrary_RemoveActorFromLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layer" },
		{ "Comment", "/**\n\x09 * Removes the actor from the specified layer\n\x09 */" },
		{ "ModuleRelativePath", "Public/ActorLayerUtilities.h" },
		{ "ToolTip", "Removes the actor from the specified layer" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayersBlueprintLibrary_RemoveActorFromLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayersBlueprintLibrary, nullptr, "RemoveActorFromLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULayersBlueprintLibrary_RemoveActorFromLayer_Statics::LayersBlueprintLibrary_eventRemoveActorFromLayer_Parms), Z_Construct_UFunction_ULayersBlueprintLibrary_RemoveActorFromLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersBlueprintLibrary_RemoveActorFromLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULayersBlueprintLibrary_RemoveActorFromLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersBlueprintLibrary_RemoveActorFromLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULayersBlueprintLibrary_RemoveActorFromLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayersBlueprintLibrary_RemoveActorFromLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULayersBlueprintLibrary);
	UClass* Z_Construct_UClass_ULayersBlueprintLibrary_NoRegister()
	{
		return ULayersBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_ULayersBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULayersBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ActorLayerUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULayersBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULayersBlueprintLibrary_AddActorToLayer, "AddActorToLayer" }, // 1356903626
		{ &Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors, "GetActors" }, // 3034805323
		{ &Z_Construct_UFunction_ULayersBlueprintLibrary_RemoveActorFromLayer, "RemoveActorFromLayer" }, // 1072913798
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULayersBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Function library containing methods for interacting with editor layers\n */" },
		{ "IncludePath", "ActorLayerUtilities.h" },
		{ "ModuleRelativePath", "Public/ActorLayerUtilities.h" },
		{ "ToolTip", "Function library containing methods for interacting with editor layers" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULayersBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULayersBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULayersBlueprintLibrary_Statics::ClassParams = {
		&ULayersBlueprintLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULayersBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULayersBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULayersBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_ULayersBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULayersBlueprintLibrary.OuterSingleton, Z_Construct_UClass_ULayersBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULayersBlueprintLibrary.OuterSingleton;
	}
	template<> ACTORLAYERUTILITIES_API UClass* StaticClass<ULayersBlueprintLibrary>()
	{
		return ULayersBlueprintLibrary::StaticClass();
	}
	ULayersBlueprintLibrary::ULayersBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULayersBlueprintLibrary);
	ULayersBlueprintLibrary::~ULayersBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_Statics::ScriptStructInfo[] = {
		{ FActorLayer::StaticStruct, Z_Construct_UScriptStruct_FActorLayer_Statics::NewStructOps, TEXT("ActorLayer"), &Z_Registration_Info_UScriptStruct_ActorLayer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorLayer), 4104610653U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULayersBlueprintLibrary, ULayersBlueprintLibrary::StaticClass, TEXT("ULayersBlueprintLibrary"), &Z_Registration_Info_UClass_ULayersBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULayersBlueprintLibrary), 2796873904U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_2965400368(TEXT("/Script/ActorLayerUtilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
