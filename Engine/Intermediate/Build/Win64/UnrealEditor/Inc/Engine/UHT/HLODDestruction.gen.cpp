// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/WorldPartition/HLOD/HLODDestruction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHLODDestruction() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionDestructibleInHLODInterface();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionDestructibleInHLODInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionDestructibleInHLODSupportLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionDestructibleInHLODSupportLibrary_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWorldPartitionHLODDestructionTag();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WorldPartitionHLODDestructionTag;
class UScriptStruct* FWorldPartitionHLODDestructionTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WorldPartitionHLODDestructionTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WorldPartitionHLODDestructionTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorldPartitionHLODDestructionTag, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("WorldPartitionHLODDestructionTag"));
	}
	return Z_Registration_Info_UScriptStruct_WorldPartitionHLODDestructionTag.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FWorldPartitionHLODDestructionTag>()
{
	return FWorldPartitionHLODDestructionTag::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWorldPartitionHLODDestructionTag_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HLODDestructionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HLODDestructionComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ActorIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldPartitionHLODDestructionTag_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODDestruction.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWorldPartitionHLODDestructionTag_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorldPartitionHLODDestructionTag>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldPartitionHLODDestructionTag_Statics::NewProp_HLODDestructionComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODDestruction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FWorldPartitionHLODDestructionTag_Statics::NewProp_HLODDestructionComponent = { "HLODDestructionComponent", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWorldPartitionHLODDestructionTag, HLODDestructionComponent), Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldPartitionHLODDestructionTag_Statics::NewProp_HLODDestructionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionHLODDestructionTag_Statics::NewProp_HLODDestructionComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldPartitionHLODDestructionTag_Statics::NewProp_ActorIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODDestruction.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWorldPartitionHLODDestructionTag_Statics::NewProp_ActorIndex = { "ActorIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWorldPartitionHLODDestructionTag, ActorIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldPartitionHLODDestructionTag_Statics::NewProp_ActorIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionHLODDestructionTag_Statics::NewProp_ActorIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWorldPartitionHLODDestructionTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionHLODDestructionTag_Statics::NewProp_HLODDestructionComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionHLODDestructionTag_Statics::NewProp_ActorIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorldPartitionHLODDestructionTag_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"WorldPartitionHLODDestructionTag",
		sizeof(FWorldPartitionHLODDestructionTag),
		alignof(FWorldPartitionHLODDestructionTag),
		Z_Construct_UScriptStruct_FWorldPartitionHLODDestructionTag_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionHLODDestructionTag_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldPartitionHLODDestructionTag_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionHLODDestructionTag_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWorldPartitionHLODDestructionTag()
	{
		if (!Z_Registration_Info_UScriptStruct_WorldPartitionHLODDestructionTag.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WorldPartitionHLODDestructionTag.InnerSingleton, Z_Construct_UScriptStruct_FWorldPartitionHLODDestructionTag_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WorldPartitionHLODDestructionTag.InnerSingleton;
	}
	DEFINE_FUNCTION(IWorldPartitionDestructibleInHLODInterface::execGetHLODDestructionTag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FWorldPartitionHLODDestructionTag*)Z_Param__Result=P_THIS->GetHLODDestructionTag_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IWorldPartitionDestructibleInHLODInterface::execSetHLODDestructionTag)
	{
		P_GET_STRUCT_REF(FWorldPartitionHLODDestructionTag,Z_Param_Out_InDestructionTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHLODDestructionTag_Implementation(Z_Param_Out_InDestructionTag);
		P_NATIVE_END;
	}
	struct WorldPartitionDestructibleInHLODInterface_eventGetHLODDestructionTag_Parms
	{
		FWorldPartitionHLODDestructionTag ReturnValue;
	};
	struct WorldPartitionDestructibleInHLODInterface_eventSetHLODDestructionTag_Parms
	{
		FWorldPartitionHLODDestructionTag InDestructionTag;
	};
	FWorldPartitionHLODDestructionTag IWorldPartitionDestructibleInHLODInterface::GetHLODDestructionTag() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetHLODDestructionTag instead.");
		WorldPartitionDestructibleInHLODInterface_eventGetHLODDestructionTag_Parms Parms;
		return Parms.ReturnValue;
	}
	void IWorldPartitionDestructibleInHLODInterface::SetHLODDestructionTag(FWorldPartitionHLODDestructionTag const& InDestructionTag)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetHLODDestructionTag instead.");
	}
	void UWorldPartitionDestructibleInHLODInterface::StaticRegisterNativesUWorldPartitionDestructibleInHLODInterface()
	{
		UClass* Class = UWorldPartitionDestructibleInHLODInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHLODDestructionTag", &IWorldPartitionDestructibleInHLODInterface::execGetHLODDestructionTag },
			{ "SetHLODDestructionTag", &IWorldPartitionDestructibleInHLODInterface::execSetHLODDestructionTag },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWorldPartitionDestructibleInHLODInterface_GetHLODDestructionTag_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldPartitionDestructibleInHLODInterface_GetHLODDestructionTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldPartitionDestructibleInHLODInterface_eventGetHLODDestructionTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FWorldPartitionHLODDestructionTag, METADATA_PARAMS(nullptr, 0) }; // 3591298170
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldPartitionDestructibleInHLODInterface_GetHLODDestructionTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPartitionDestructibleInHLODInterface_GetHLODDestructionTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorldPartitionDestructibleInHLODInterface_GetHLODDestructionTag_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODDestruction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldPartitionDestructibleInHLODInterface_GetHLODDestructionTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldPartitionDestructibleInHLODInterface, nullptr, "GetHLODDestructionTag", nullptr, nullptr, sizeof(WorldPartitionDestructibleInHLODInterface_eventGetHLODDestructionTag_Parms), Z_Construct_UFunction_UWorldPartitionDestructibleInHLODInterface_GetHLODDestructionTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionDestructibleInHLODInterface_GetHLODDestructionTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWorldPartitionDestructibleInHLODInterface_GetHLODDestructionTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionDestructibleInHLODInterface_GetHLODDestructionTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWorldPartitionDestructibleInHLODInterface_GetHLODDestructionTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldPartitionDestructibleInHLODInterface_GetHLODDestructionTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWorldPartitionDestructibleInHLODInterface_SetHLODDestructionTag_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDestructionTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InDestructionTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorldPartitionDestructibleInHLODInterface_SetHLODDestructionTag_Statics::NewProp_InDestructionTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldPartitionDestructibleInHLODInterface_SetHLODDestructionTag_Statics::NewProp_InDestructionTag = { "InDestructionTag", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldPartitionDestructibleInHLODInterface_eventSetHLODDestructionTag_Parms, InDestructionTag), Z_Construct_UScriptStruct_FWorldPartitionHLODDestructionTag, METADATA_PARAMS(Z_Construct_UFunction_UWorldPartitionDestructibleInHLODInterface_SetHLODDestructionTag_Statics::NewProp_InDestructionTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionDestructibleInHLODInterface_SetHLODDestructionTag_Statics::NewProp_InDestructionTag_MetaData)) }; // 3591298170
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldPartitionDestructibleInHLODInterface_SetHLODDestructionTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPartitionDestructibleInHLODInterface_SetHLODDestructionTag_Statics::NewProp_InDestructionTag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorldPartitionDestructibleInHLODInterface_SetHLODDestructionTag_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODDestruction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldPartitionDestructibleInHLODInterface_SetHLODDestructionTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldPartitionDestructibleInHLODInterface, nullptr, "SetHLODDestructionTag", nullptr, nullptr, sizeof(WorldPartitionDestructibleInHLODInterface_eventSetHLODDestructionTag_Parms), Z_Construct_UFunction_UWorldPartitionDestructibleInHLODInterface_SetHLODDestructionTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionDestructibleInHLODInterface_SetHLODDestructionTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWorldPartitionDestructibleInHLODInterface_SetHLODDestructionTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionDestructibleInHLODInterface_SetHLODDestructionTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWorldPartitionDestructibleInHLODInterface_SetHLODDestructionTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldPartitionDestructibleInHLODInterface_SetHLODDestructionTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionDestructibleInHLODInterface);
	UClass* Z_Construct_UClass_UWorldPartitionDestructibleInHLODInterface_NoRegister()
	{
		return UWorldPartitionDestructibleInHLODInterface::StaticClass();
	}
	struct Z_Construct_UClass_UWorldPartitionDestructibleInHLODInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldPartitionDestructibleInHLODInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWorldPartitionDestructibleInHLODInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWorldPartitionDestructibleInHLODInterface_GetHLODDestructionTag, "GetHLODDestructionTag" }, // 2158624319
		{ &Z_Construct_UFunction_UWorldPartitionDestructibleInHLODInterface_SetHLODDestructionTag, "SetHLODDestructionTag" }, // 4168653334
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionDestructibleInHLODInterface_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Destructible in HLOD Interface" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODDestruction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldPartitionDestructibleInHLODInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IWorldPartitionDestructibleInHLODInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionDestructibleInHLODInterface_Statics::ClassParams = {
		&UWorldPartitionDestructibleInHLODInterface::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionDestructibleInHLODInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionDestructibleInHLODInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldPartitionDestructibleInHLODInterface()
	{
		if (!Z_Registration_Info_UClass_UWorldPartitionDestructibleInHLODInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionDestructibleInHLODInterface.OuterSingleton, Z_Construct_UClass_UWorldPartitionDestructibleInHLODInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldPartitionDestructibleInHLODInterface.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UWorldPartitionDestructibleInHLODInterface>()
	{
		return UWorldPartitionDestructibleInHLODInterface::StaticClass();
	}
	UWorldPartitionDestructibleInHLODInterface::UWorldPartitionDestructibleInHLODInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionDestructibleInHLODInterface);
	UWorldPartitionDestructibleInHLODInterface::~UWorldPartitionDestructibleInHLODInterface() {}
	static FName NAME_UWorldPartitionDestructibleInHLODInterface_GetHLODDestructionTag = FName(TEXT("GetHLODDestructionTag"));
	FWorldPartitionHLODDestructionTag IWorldPartitionDestructibleInHLODInterface::Execute_GetHLODDestructionTag(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UWorldPartitionDestructibleInHLODInterface::StaticClass()));
		WorldPartitionDestructibleInHLODInterface_eventGetHLODDestructionTag_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UWorldPartitionDestructibleInHLODInterface_GetHLODDestructionTag);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IWorldPartitionDestructibleInHLODInterface*)(O->GetNativeInterfaceAddress(UWorldPartitionDestructibleInHLODInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetHLODDestructionTag_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UWorldPartitionDestructibleInHLODInterface_SetHLODDestructionTag = FName(TEXT("SetHLODDestructionTag"));
	void IWorldPartitionDestructibleInHLODInterface::Execute_SetHLODDestructionTag(UObject* O, FWorldPartitionHLODDestructionTag const& InDestructionTag)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UWorldPartitionDestructibleInHLODInterface::StaticClass()));
		WorldPartitionDestructibleInHLODInterface_eventSetHLODDestructionTag_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UWorldPartitionDestructibleInHLODInterface_SetHLODDestructionTag);
		if (Func)
		{
			Parms.InDestructionTag=InDestructionTag;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IWorldPartitionDestructibleInHLODInterface*)(O->GetNativeInterfaceAddress(UWorldPartitionDestructibleInHLODInterface::StaticClass())))
		{
			I->SetHLODDestructionTag_Implementation(InDestructionTag);
		}
	}
	DEFINE_FUNCTION(UWorldPartitionDestructibleInHLODSupportLibrary::execDamageInHLOD)
	{
		P_GET_TINTERFACE_REF(IWorldPartitionDestructibleInHLODInterface,Z_Param_Out_DestructibleInHLOD);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DamagePercent);
		P_FINISH;
		P_NATIVE_BEGIN;
		UWorldPartitionDestructibleInHLODSupportLibrary::DamageInHLOD(Z_Param_Out_DestructibleInHLOD,Z_Param_DamagePercent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWorldPartitionDestructibleInHLODSupportLibrary::execDestroyInHLOD)
	{
		P_GET_TINTERFACE_REF(IWorldPartitionDestructibleInHLODInterface,Z_Param_Out_DestructibleInHLOD);
		P_FINISH;
		P_NATIVE_BEGIN;
		UWorldPartitionDestructibleInHLODSupportLibrary::DestroyInHLOD(Z_Param_Out_DestructibleInHLOD);
		P_NATIVE_END;
	}
	void UWorldPartitionDestructibleInHLODSupportLibrary::StaticRegisterNativesUWorldPartitionDestructibleInHLODSupportLibrary()
	{
		UClass* Class = UWorldPartitionDestructibleInHLODSupportLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DamageInHLOD", &UWorldPartitionDestructibleInHLODSupportLibrary::execDamageInHLOD },
			{ "DestroyInHLOD", &UWorldPartitionDestructibleInHLODSupportLibrary::execDestroyInHLOD },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DamageInHLOD_Statics
	{
		struct WorldPartitionDestructibleInHLODSupportLibrary_eventDamageInHLOD_Parms
		{
			TScriptInterface<IWorldPartitionDestructibleInHLODInterface> DestructibleInHLOD;
			float DamagePercent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestructibleInHLOD_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_DestructibleInHLOD;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamagePercent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DamageInHLOD_Statics::NewProp_DestructibleInHLOD_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DamageInHLOD_Statics::NewProp_DestructibleInHLOD = { "DestructibleInHLOD", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldPartitionDestructibleInHLODSupportLibrary_eventDamageInHLOD_Parms, DestructibleInHLOD), Z_Construct_UClass_UWorldPartitionDestructibleInHLODInterface_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DamageInHLOD_Statics::NewProp_DestructibleInHLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DamageInHLOD_Statics::NewProp_DestructibleInHLOD_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DamageInHLOD_Statics::NewProp_DamagePercent = { "DamagePercent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldPartitionDestructibleInHLODSupportLibrary_eventDamageInHLOD_Parms, DamagePercent), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DamageInHLOD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DamageInHLOD_Statics::NewProp_DestructibleInHLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DamageInHLOD_Statics::NewProp_DamagePercent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DamageInHLOD_Statics::Function_MetaDataParams[] = {
		{ "Category", "HLOD Destruction" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODDestruction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DamageInHLOD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldPartitionDestructibleInHLODSupportLibrary, nullptr, "DamageInHLOD", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DamageInHLOD_Statics::WorldPartitionDestructibleInHLODSupportLibrary_eventDamageInHLOD_Parms), Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DamageInHLOD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DamageInHLOD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DamageInHLOD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DamageInHLOD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DamageInHLOD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DamageInHLOD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DestroyInHLOD_Statics
	{
		struct WorldPartitionDestructibleInHLODSupportLibrary_eventDestroyInHLOD_Parms
		{
			TScriptInterface<IWorldPartitionDestructibleInHLODInterface> DestructibleInHLOD;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestructibleInHLOD_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_DestructibleInHLOD;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DestroyInHLOD_Statics::NewProp_DestructibleInHLOD_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DestroyInHLOD_Statics::NewProp_DestructibleInHLOD = { "DestructibleInHLOD", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldPartitionDestructibleInHLODSupportLibrary_eventDestroyInHLOD_Parms, DestructibleInHLOD), Z_Construct_UClass_UWorldPartitionDestructibleInHLODInterface_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DestroyInHLOD_Statics::NewProp_DestructibleInHLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DestroyInHLOD_Statics::NewProp_DestructibleInHLOD_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DestroyInHLOD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DestroyInHLOD_Statics::NewProp_DestructibleInHLOD,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DestroyInHLOD_Statics::Function_MetaDataParams[] = {
		{ "Category", "HLOD Destruction" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODDestruction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DestroyInHLOD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldPartitionDestructibleInHLODSupportLibrary, nullptr, "DestroyInHLOD", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DestroyInHLOD_Statics::WorldPartitionDestructibleInHLODSupportLibrary_eventDestroyInHLOD_Parms), Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DestroyInHLOD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DestroyInHLOD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DestroyInHLOD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DestroyInHLOD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DestroyInHLOD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DestroyInHLOD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionDestructibleInHLODSupportLibrary);
	UClass* Z_Construct_UClass_UWorldPartitionDestructibleInHLODSupportLibrary_NoRegister()
	{
		return UWorldPartitionDestructibleInHLODSupportLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UWorldPartitionDestructibleInHLODSupportLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldPartitionDestructibleInHLODSupportLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWorldPartitionDestructibleInHLODSupportLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DamageInHLOD, "DamageInHLOD" }, // 2354176696
		{ &Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DestroyInHLOD, "DestroyInHLOD" }, // 1039691307
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionDestructibleInHLODSupportLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/HLOD/HLODDestruction.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODDestruction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldPartitionDestructibleInHLODSupportLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionDestructibleInHLODSupportLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionDestructibleInHLODSupportLibrary_Statics::ClassParams = {
		&UWorldPartitionDestructibleInHLODSupportLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionDestructibleInHLODSupportLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionDestructibleInHLODSupportLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldPartitionDestructibleInHLODSupportLibrary()
	{
		if (!Z_Registration_Info_UClass_UWorldPartitionDestructibleInHLODSupportLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionDestructibleInHLODSupportLibrary.OuterSingleton, Z_Construct_UClass_UWorldPartitionDestructibleInHLODSupportLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldPartitionDestructibleInHLODSupportLibrary.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UWorldPartitionDestructibleInHLODSupportLibrary>()
	{
		return UWorldPartitionDestructibleInHLODSupportLibrary::StaticClass();
	}
	UWorldPartitionDestructibleInHLODSupportLibrary::UWorldPartitionDestructibleInHLODSupportLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionDestructibleInHLODSupportLibrary);
	UWorldPartitionDestructibleInHLODSupportLibrary::~UWorldPartitionDestructibleInHLODSupportLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODDestruction_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODDestruction_h_Statics::ScriptStructInfo[] = {
		{ FWorldPartitionHLODDestructionTag::StaticStruct, Z_Construct_UScriptStruct_FWorldPartitionHLODDestructionTag_Statics::NewStructOps, TEXT("WorldPartitionHLODDestructionTag"), &Z_Registration_Info_UScriptStruct_WorldPartitionHLODDestructionTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWorldPartitionHLODDestructionTag), 3591298170U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODDestruction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartitionDestructibleInHLODInterface, UWorldPartitionDestructibleInHLODInterface::StaticClass, TEXT("UWorldPartitionDestructibleInHLODInterface"), &Z_Registration_Info_UClass_UWorldPartitionDestructibleInHLODInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionDestructibleInHLODInterface), 3882665447U) },
		{ Z_Construct_UClass_UWorldPartitionDestructibleInHLODSupportLibrary, UWorldPartitionDestructibleInHLODSupportLibrary::StaticClass, TEXT("UWorldPartitionDestructibleInHLODSupportLibrary"), &Z_Registration_Info_UClass_UWorldPartitionDestructibleInHLODSupportLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionDestructibleInHLODSupportLibrary), 2899702746U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODDestruction_h_2996924328(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODDestruction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODDestruction_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODDestruction_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODDestruction_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
