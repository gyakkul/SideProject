// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseMovementComponent.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseMovementComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APhysicsVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	NETWORKPREDICTION_API UClass* Z_Construct_UClass_UNetworkPredictionComponent();
	NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_UBaseMovementComponent();
	NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_UBaseMovementComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NetworkPredictionExtras();
// End Cross Module References
	DEFINE_FUNCTION(UBaseMovementComponent::execPhysicsVolumeChanged)
	{
		P_GET_OBJECT(APhysicsVolume,Z_Param_NewVolume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PhysicsVolumeChanged(Z_Param_NewVolume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseMovementComponent::execOnBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_Other);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginOverlap(Z_Param_OverlappedComp,Z_Param_Other,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void UBaseMovementComponent::StaticRegisterNativesUBaseMovementComponent()
	{
		UClass* Class = UBaseMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBeginOverlap", &UBaseMovementComponent::execOnBeginOverlap },
			{ "PhysicsVolumeChanged", &UBaseMovementComponent::execPhysicsVolumeChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBaseMovementComponent_OnBeginOverlap_Statics
	{
		struct BaseMovementComponent_eventOnBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* Other;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Other;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseMovementComponent_OnBeginOverlap_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseMovementComponent_OnBeginOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseMovementComponent_eventOnBeginOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBaseMovementComponent_OnBeginOverlap_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseMovementComponent_OnBeginOverlap_Statics::NewProp_OverlappedComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseMovementComponent_OnBeginOverlap_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseMovementComponent_eventOnBeginOverlap_Parms, Other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseMovementComponent_OnBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseMovementComponent_OnBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseMovementComponent_eventOnBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBaseMovementComponent_OnBeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseMovementComponent_OnBeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseMovementComponent_OnBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseMovementComponent_eventOnBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseMovementComponent_OnBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((BaseMovementComponent_eventOnBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseMovementComponent_OnBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseMovementComponent_eventOnBeginOverlap_Parms), &Z_Construct_UFunction_UBaseMovementComponent_OnBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseMovementComponent_OnBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseMovementComponent_OnBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseMovementComponent_eventOnBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UBaseMovementComponent_OnBeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseMovementComponent_OnBeginOverlap_Statics::NewProp_SweepResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseMovementComponent_OnBeginOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseMovementComponent_OnBeginOverlap_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseMovementComponent_OnBeginOverlap_Statics::NewProp_Other,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseMovementComponent_OnBeginOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseMovementComponent_OnBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseMovementComponent_OnBeginOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseMovementComponent_OnBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseMovementComponent_OnBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Callbacks \n" },
		{ "ModuleRelativePath", "Public/BaseMovementComponent.h" },
		{ "ToolTip", "Callbacks" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseMovementComponent_OnBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseMovementComponent, nullptr, "OnBeginOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseMovementComponent_OnBeginOverlap_Statics::BaseMovementComponent_eventOnBeginOverlap_Parms), Z_Construct_UFunction_UBaseMovementComponent_OnBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseMovementComponent_OnBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseMovementComponent_OnBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseMovementComponent_OnBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseMovementComponent_OnBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseMovementComponent_OnBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseMovementComponent_PhysicsVolumeChanged_Statics
	{
		struct BaseMovementComponent_eventPhysicsVolumeChanged_Parms
		{
			APhysicsVolume* NewVolume;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewVolume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseMovementComponent_PhysicsVolumeChanged_Statics::NewProp_NewVolume = { "NewVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseMovementComponent_eventPhysicsVolumeChanged_Parms, NewVolume), Z_Construct_UClass_APhysicsVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseMovementComponent_PhysicsVolumeChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseMovementComponent_PhysicsVolumeChanged_Statics::NewProp_NewVolume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseMovementComponent_PhysicsVolumeChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseMovementComponent_PhysicsVolumeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseMovementComponent, nullptr, "PhysicsVolumeChanged", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseMovementComponent_PhysicsVolumeChanged_Statics::BaseMovementComponent_eventPhysicsVolumeChanged_Parms), Z_Construct_UFunction_UBaseMovementComponent_PhysicsVolumeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseMovementComponent_PhysicsVolumeChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseMovementComponent_PhysicsVolumeChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseMovementComponent_PhysicsVolumeChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseMovementComponent_PhysicsVolumeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseMovementComponent_PhysicsVolumeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseMovementComponent);
	UClass* Z_Construct_UClass_UBaseMovementComponent_NoRegister()
	{
		return UBaseMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBaseMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdatedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UpdatedComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdatedPrimitive_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UpdatedPrimitive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNetworkPredictionComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkPredictionExtras,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseMovementComponent_OnBeginOverlap, "OnBeginOverlap" }, // 1481711469
		{ &Z_Construct_UFunction_UBaseMovementComponent_PhysicsVolumeChanged, "PhysicsVolumeChanged" }, // 603802669
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// -------------------------------------------------------------------------------------------------------------------------------\n//\x09""Base component for movement. This essentially has the generic glue for selecting an UpdatedComponent and moving it along the world\n//\x09It is abstract in that you still need to define which simulation the component runs (via ::InstantiateNetworkedSimulation)\n// -------------------------------------------------------------------------------------------------------------------------------\n" },
		{ "IncludePath", "BaseMovementComponent.h" },
		{ "ModuleRelativePath", "Public/BaseMovementComponent.h" },
		{ "ToolTip", "Base component for movement. This essentially has the generic glue for selecting an UpdatedComponent and moving it along the world\nIt is abstract in that you still need to define which simulation the component runs (via ::InstantiateNetworkedSimulation)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseMovementComponent_Statics::NewProp_UpdatedComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBaseMovementComponent_Statics::NewProp_UpdatedComponent = { "UpdatedComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseMovementComponent, UpdatedComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseMovementComponent_Statics::NewProp_UpdatedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseMovementComponent_Statics::NewProp_UpdatedComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseMovementComponent_Statics::NewProp_UpdatedPrimitive_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBaseMovementComponent_Statics::NewProp_UpdatedPrimitive = { "UpdatedPrimitive", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseMovementComponent, UpdatedPrimitive), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseMovementComponent_Statics::NewProp_UpdatedPrimitive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseMovementComponent_Statics::NewProp_UpdatedPrimitive_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseMovementComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseMovementComponent_Statics::NewProp_UpdatedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseMovementComponent_Statics::NewProp_UpdatedPrimitive,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseMovementComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseMovementComponent_Statics::ClassParams = {
		&UBaseMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBaseMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseMovementComponent_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseMovementComponent()
	{
		if (!Z_Registration_Info_UClass_UBaseMovementComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseMovementComponent.OuterSingleton, Z_Construct_UClass_UBaseMovementComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseMovementComponent.OuterSingleton;
	}
	template<> NETWORKPREDICTIONEXTRAS_API UClass* StaticClass<UBaseMovementComponent>()
	{
		return UBaseMovementComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseMovementComponent);
	UBaseMovementComponent::~UBaseMovementComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_BaseMovementComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_BaseMovementComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseMovementComponent, UBaseMovementComponent::StaticClass, TEXT("UBaseMovementComponent"), &Z_Registration_Info_UClass_UBaseMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseMovementComponent), 3501324210U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_BaseMovementComponent_h_2509330378(TEXT("/Script/NetworkPredictionExtras"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_BaseMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_BaseMovementComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
