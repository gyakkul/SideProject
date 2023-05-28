// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARActor() {}
// Cross Module References
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_AARActor();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_AARActor_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARComponent_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTrackedGeometry_NoRegister();
	AUGMENTEDREALITY_API UScriptStruct* Z_Construct_UScriptStruct_FTrackedGeometryGroup();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AugmentedReality();
// End Cross Module References
	DEFINE_FUNCTION(AARActor::execAddARComponent)
	{
		P_GET_OBJECT(UClass,Z_Param_InComponentClass);
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_NativeID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UARComponent**)Z_Param__Result=P_THIS->AddARComponent(Z_Param_InComponentClass,Z_Param_Out_NativeID);
		P_NATIVE_END;
	}
	void AARActor::StaticRegisterNativesAARActor()
	{
		UClass* Class = AARActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddARComponent", &AARActor::execAddARComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AARActor_AddARComponent_Statics
	{
		struct ARActor_eventAddARComponent_Parms
		{
			TSubclassOf<UARComponent>  InComponentClass;
			FGuid NativeID;
			UARComponent* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_InComponentClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NativeID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NativeID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AARActor_AddARComponent_Statics::NewProp_InComponentClass = { "InComponentClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARActor_eventAddARComponent_Parms, InComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UARComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARActor_AddARComponent_Statics::NewProp_NativeID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AARActor_AddARComponent_Statics::NewProp_NativeID = { "NativeID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARActor_eventAddARComponent_Parms, NativeID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_AARActor_AddARComponent_Statics::NewProp_NativeID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AARActor_AddARComponent_Statics::NewProp_NativeID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARActor_AddARComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AARActor_AddARComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARActor_eventAddARComponent_Parms, ReturnValue), Z_Construct_UClass_UARComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AARActor_AddARComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AARActor_AddARComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AARActor_AddARComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AARActor_AddARComponent_Statics::NewProp_InComponentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AARActor_AddARComponent_Statics::NewProp_NativeID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AARActor_AddARComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARActor_AddARComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Gameplay" },
		{ "ModuleRelativePath", "Public/ARActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AARActor_AddARComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AARActor, nullptr, "AddARComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_AARActor_AddARComponent_Statics::ARActor_eventAddARComponent_Parms), Z_Construct_UFunction_AARActor_AddARComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AARActor_AddARComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AARActor_AddARComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AARActor_AddARComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AARActor_AddARComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AARActor_AddARComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AARActor);
	UClass* Z_Construct_UClass_AARActor_NoRegister()
	{
		return AARActor::StaticClass();
	}
	struct Z_Construct_UClass_AARActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AARActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AARActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AARActor_AddARComponent, "AddARComponent" }, // 2774715907
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR Gameplay" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "ARActor.h" },
		{ "ModuleRelativePath", "Public/ARActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AARActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AARActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AARActor_Statics::ClassParams = {
		&AARActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AARActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AARActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AARActor()
	{
		if (!Z_Registration_Info_UClass_AARActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AARActor.OuterSingleton, Z_Construct_UClass_AARActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AARActor.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UClass* StaticClass<AARActor>()
	{
		return AARActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AARActor);
	AARActor::~AARActor() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TrackedGeometryGroup;
class UScriptStruct* FTrackedGeometryGroup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TrackedGeometryGroup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TrackedGeometryGroup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTrackedGeometryGroup, (UObject*)Z_Construct_UPackage__Script_AugmentedReality(), TEXT("TrackedGeometryGroup"));
	}
	return Z_Registration_Info_UScriptStruct_TrackedGeometryGroup.OuterSingleton;
}
template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<FTrackedGeometryGroup>()
{
	return FTrackedGeometryGroup::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTrackedGeometryGroup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ARActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ARActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ARComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ARComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackedGeometry_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TrackedGeometry;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackedGeometryGroup_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ARActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTrackedGeometryGroup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTrackedGeometryGroup>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackedGeometryGroup_Statics::NewProp_ARActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FTrackedGeometryGroup_Statics::NewProp_ARActor = { "ARActor", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTrackedGeometryGroup, ARActor), Z_Construct_UClass_AARActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackedGeometryGroup_Statics::NewProp_ARActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackedGeometryGroup_Statics::NewProp_ARActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackedGeometryGroup_Statics::NewProp_ARComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ARActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FTrackedGeometryGroup_Statics::NewProp_ARComponent = { "ARComponent", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTrackedGeometryGroup, ARComponent), Z_Construct_UClass_UARComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackedGeometryGroup_Statics::NewProp_ARComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackedGeometryGroup_Statics::NewProp_ARComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackedGeometryGroup_Statics::NewProp_TrackedGeometry_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FTrackedGeometryGroup_Statics::NewProp_TrackedGeometry = { "TrackedGeometry", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTrackedGeometryGroup, TrackedGeometry), Z_Construct_UClass_UARTrackedGeometry_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackedGeometryGroup_Statics::NewProp_TrackedGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackedGeometryGroup_Statics::NewProp_TrackedGeometry_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTrackedGeometryGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackedGeometryGroup_Statics::NewProp_ARActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackedGeometryGroup_Statics::NewProp_ARComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackedGeometryGroup_Statics::NewProp_TrackedGeometry,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTrackedGeometryGroup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		&NewStructOps,
		"TrackedGeometryGroup",
		sizeof(FTrackedGeometryGroup),
		alignof(FTrackedGeometryGroup),
		Z_Construct_UScriptStruct_FTrackedGeometryGroup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackedGeometryGroup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackedGeometryGroup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackedGeometryGroup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTrackedGeometryGroup()
	{
		if (!Z_Registration_Info_UScriptStruct_TrackedGeometryGroup.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TrackedGeometryGroup.InnerSingleton, Z_Construct_UScriptStruct_FTrackedGeometryGroup_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TrackedGeometryGroup.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARActor_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARActor_h_Statics::ScriptStructInfo[] = {
		{ FTrackedGeometryGroup::StaticStruct, Z_Construct_UScriptStruct_FTrackedGeometryGroup_Statics::NewStructOps, TEXT("TrackedGeometryGroup"), &Z_Registration_Info_UScriptStruct_TrackedGeometryGroup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTrackedGeometryGroup), 289183413U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AARActor, AARActor::StaticClass, TEXT("AARActor"), &Z_Registration_Info_UClass_AARActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AARActor), 1066405695U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARActor_h_3498962245(TEXT("/Script/AugmentedReality"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARActor_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARActor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARActor_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
