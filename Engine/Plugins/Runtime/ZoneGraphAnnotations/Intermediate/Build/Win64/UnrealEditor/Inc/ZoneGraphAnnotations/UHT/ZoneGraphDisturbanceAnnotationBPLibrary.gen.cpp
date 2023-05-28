// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/ZoneGraphAnnotations/Source/ZoneGraphAnnotations/Public/Annotations/ZoneGraphDisturbanceAnnotationBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZoneGraphDisturbanceAnnotationBPLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ZoneGraphAnnotations();
	ZONEGRAPHANNOTATIONS_API UClass* Z_Construct_UClass_UZoneGraphDisturbanceAnnotationBPLibrary();
	ZONEGRAPHANNOTATIONS_API UClass* Z_Construct_UClass_UZoneGraphDisturbanceAnnotationBPLibrary_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UZoneGraphDisturbanceAnnotationBPLibrary::execTriggerDanger)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(AActor,Z_Param_Instigator);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		UZoneGraphDisturbanceAnnotationBPLibrary::TriggerDanger(Z_Param_WorldContextObject,Z_Param_Instigator,Z_Param_Position,Z_Param_Radius,Z_Param_Duration);
		P_NATIVE_END;
	}
	void UZoneGraphDisturbanceAnnotationBPLibrary::StaticRegisterNativesUZoneGraphDisturbanceAnnotationBPLibrary()
	{
		UClass* Class = UZoneGraphDisturbanceAnnotationBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TriggerDanger", &UZoneGraphDisturbanceAnnotationBPLibrary::execTriggerDanger },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UZoneGraphDisturbanceAnnotationBPLibrary_TriggerDanger_Statics
	{
		struct ZoneGraphDisturbanceAnnotationBPLibrary_eventTriggerDanger_Parms
		{
			UObject* WorldContextObject;
			const AActor* Instigator;
			FVector Position;
			float Radius;
			float Duration;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UZoneGraphDisturbanceAnnotationBPLibrary_TriggerDanger_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ZoneGraphDisturbanceAnnotationBPLibrary_eventTriggerDanger_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoneGraphDisturbanceAnnotationBPLibrary_TriggerDanger_Statics::NewProp_Instigator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UZoneGraphDisturbanceAnnotationBPLibrary_TriggerDanger_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ZoneGraphDisturbanceAnnotationBPLibrary_eventTriggerDanger_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UZoneGraphDisturbanceAnnotationBPLibrary_TriggerDanger_Statics::NewProp_Instigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoneGraphDisturbanceAnnotationBPLibrary_TriggerDanger_Statics::NewProp_Instigator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoneGraphDisturbanceAnnotationBPLibrary_TriggerDanger_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UZoneGraphDisturbanceAnnotationBPLibrary_TriggerDanger_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ZoneGraphDisturbanceAnnotationBPLibrary_eventTriggerDanger_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UZoneGraphDisturbanceAnnotationBPLibrary_TriggerDanger_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoneGraphDisturbanceAnnotationBPLibrary_TriggerDanger_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoneGraphDisturbanceAnnotationBPLibrary_TriggerDanger_Statics::NewProp_Radius_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UZoneGraphDisturbanceAnnotationBPLibrary_TriggerDanger_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ZoneGraphDisturbanceAnnotationBPLibrary_eventTriggerDanger_Parms, Radius), METADATA_PARAMS(Z_Construct_UFunction_UZoneGraphDisturbanceAnnotationBPLibrary_TriggerDanger_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoneGraphDisturbanceAnnotationBPLibrary_TriggerDanger_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoneGraphDisturbanceAnnotationBPLibrary_TriggerDanger_Statics::NewProp_Duration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UZoneGraphDisturbanceAnnotationBPLibrary_TriggerDanger_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ZoneGraphDisturbanceAnnotationBPLibrary_eventTriggerDanger_Parms, Duration), METADATA_PARAMS(Z_Construct_UFunction_UZoneGraphDisturbanceAnnotationBPLibrary_TriggerDanger_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoneGraphDisturbanceAnnotationBPLibrary_TriggerDanger_Statics::NewProp_Duration_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoneGraphDisturbanceAnnotationBPLibrary_TriggerDanger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoneGraphDisturbanceAnnotationBPLibrary_TriggerDanger_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoneGraphDisturbanceAnnotationBPLibrary_TriggerDanger_Statics::NewProp_Instigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoneGraphDisturbanceAnnotationBPLibrary_TriggerDanger_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoneGraphDisturbanceAnnotationBPLibrary_TriggerDanger_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoneGraphDisturbanceAnnotationBPLibrary_TriggerDanger_Statics::NewProp_Duration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoneGraphDisturbanceAnnotationBPLibrary_TriggerDanger_Statics::Function_MetaDataParams[] = {
		{ "Category", "ZoneGraphAnnotations" },
		{ "Comment", "/*\n\x09 * Triggers Danger event at specific location.\n\x09 * @param Instigator (optional) identifies this event coming from specific Instigator, only one danger will persist per instigator.\n\x09 * @param Position Position of the danger.\n\x09 * @param Radius Radius of the danger.\n\x09 * @param Duration Duration of the danger.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Annotations/ZoneGraphDisturbanceAnnotationBPLibrary.h" },
		{ "ToolTip", "* Triggers Danger event at specific location.\n* @param Instigator (optional) identifies this event coming from specific Instigator, only one danger will persist per instigator.\n* @param Position Position of the danger.\n* @param Radius Radius of the danger.\n* @param Duration Duration of the danger." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoneGraphDisturbanceAnnotationBPLibrary_TriggerDanger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoneGraphDisturbanceAnnotationBPLibrary, nullptr, "TriggerDanger", nullptr, nullptr, sizeof(Z_Construct_UFunction_UZoneGraphDisturbanceAnnotationBPLibrary_TriggerDanger_Statics::ZoneGraphDisturbanceAnnotationBPLibrary_eventTriggerDanger_Parms), Z_Construct_UFunction_UZoneGraphDisturbanceAnnotationBPLibrary_TriggerDanger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoneGraphDisturbanceAnnotationBPLibrary_TriggerDanger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UZoneGraphDisturbanceAnnotationBPLibrary_TriggerDanger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoneGraphDisturbanceAnnotationBPLibrary_TriggerDanger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UZoneGraphDisturbanceAnnotationBPLibrary_TriggerDanger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoneGraphDisturbanceAnnotationBPLibrary_TriggerDanger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UZoneGraphDisturbanceAnnotationBPLibrary);
	UClass* Z_Construct_UClass_UZoneGraphDisturbanceAnnotationBPLibrary_NoRegister()
	{
		return UZoneGraphDisturbanceAnnotationBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UZoneGraphDisturbanceAnnotationBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZoneGraphDisturbanceAnnotationBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ZoneGraphAnnotations,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UZoneGraphDisturbanceAnnotationBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UZoneGraphDisturbanceAnnotationBPLibrary_TriggerDanger, "TriggerDanger" }, // 3350285621
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneGraphDisturbanceAnnotationBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09Set of utilities for dealing with Disturbance Annotation.\n */" },
		{ "IncludePath", "Annotations/ZoneGraphDisturbanceAnnotationBPLibrary.h" },
		{ "ModuleRelativePath", "Public/Annotations/ZoneGraphDisturbanceAnnotationBPLibrary.h" },
		{ "ToolTip", "Set of utilities for dealing with Disturbance Annotation." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZoneGraphDisturbanceAnnotationBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZoneGraphDisturbanceAnnotationBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UZoneGraphDisturbanceAnnotationBPLibrary_Statics::ClassParams = {
		&UZoneGraphDisturbanceAnnotationBPLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UZoneGraphDisturbanceAnnotationBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphDisturbanceAnnotationBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UZoneGraphDisturbanceAnnotationBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UZoneGraphDisturbanceAnnotationBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZoneGraphDisturbanceAnnotationBPLibrary.OuterSingleton, Z_Construct_UClass_UZoneGraphDisturbanceAnnotationBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UZoneGraphDisturbanceAnnotationBPLibrary.OuterSingleton;
	}
	template<> ZONEGRAPHANNOTATIONS_API UClass* StaticClass<UZoneGraphDisturbanceAnnotationBPLibrary>()
	{
		return UZoneGraphDisturbanceAnnotationBPLibrary::StaticClass();
	}
	UZoneGraphDisturbanceAnnotationBPLibrary::UZoneGraphDisturbanceAnnotationBPLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZoneGraphDisturbanceAnnotationBPLibrary);
	UZoneGraphDisturbanceAnnotationBPLibrary::~UZoneGraphDisturbanceAnnotationBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_Annotations_ZoneGraphDisturbanceAnnotationBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_Annotations_ZoneGraphDisturbanceAnnotationBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UZoneGraphDisturbanceAnnotationBPLibrary, UZoneGraphDisturbanceAnnotationBPLibrary::StaticClass, TEXT("UZoneGraphDisturbanceAnnotationBPLibrary"), &Z_Registration_Info_UClass_UZoneGraphDisturbanceAnnotationBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZoneGraphDisturbanceAnnotationBPLibrary), 2082118320U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_Annotations_ZoneGraphDisturbanceAnnotationBPLibrary_h_1649609770(TEXT("/Script/ZoneGraphAnnotations"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_Annotations_ZoneGraphDisturbanceAnnotationBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_Annotations_ZoneGraphDisturbanceAnnotationBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
