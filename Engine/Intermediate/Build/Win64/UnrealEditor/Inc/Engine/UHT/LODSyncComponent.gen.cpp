// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Components/LODSyncComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLODSyncComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_ULODSyncComponent();
	ENGINE_API UClass* Z_Construct_UClass_ULODSyncComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESyncOption();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentSync();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLODMappingData();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LODMappingData;
class UScriptStruct* FLODMappingData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LODMappingData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LODMappingData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLODMappingData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("LODMappingData"));
	}
	return Z_Registration_Info_UScriptStruct_LODMappingData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FLODMappingData>()
{
	return FLODMappingData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLODMappingData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FIntPropertyParams NewProp_Mapping_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mapping_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Mapping;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InverseMapping_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InverseMapping_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InverseMapping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLODMappingData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Components/LODSyncComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLODMappingData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLODMappingData>();
	}
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLODMappingData_Statics::NewProp_Mapping_Inner = { "Mapping", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLODMappingData_Statics::NewProp_Mapping_MetaData[] = {
		{ "Category", "FLODMappingData" },
		{ "ModuleRelativePath", "Classes/Components/LODSyncComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLODMappingData_Statics::NewProp_Mapping = { "Mapping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLODMappingData, Mapping), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLODMappingData_Statics::NewProp_Mapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLODMappingData_Statics::NewProp_Mapping_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLODMappingData_Statics::NewProp_InverseMapping_Inner = { "InverseMapping", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLODMappingData_Statics::NewProp_InverseMapping_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/LODSyncComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLODMappingData_Statics::NewProp_InverseMapping = { "InverseMapping", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLODMappingData, InverseMapping), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLODMappingData_Statics::NewProp_InverseMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLODMappingData_Statics::NewProp_InverseMapping_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLODMappingData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLODMappingData_Statics::NewProp_Mapping_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLODMappingData_Statics::NewProp_Mapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLODMappingData_Statics::NewProp_InverseMapping_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLODMappingData_Statics::NewProp_InverseMapping,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLODMappingData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"LODMappingData",
		sizeof(FLODMappingData),
		alignof(FLODMappingData),
		Z_Construct_UScriptStruct_FLODMappingData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLODMappingData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLODMappingData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLODMappingData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLODMappingData()
	{
		if (!Z_Registration_Info_UScriptStruct_LODMappingData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LODMappingData.InnerSingleton, Z_Construct_UScriptStruct_FLODMappingData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LODMappingData.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESyncOption;
	static UEnum* ESyncOption_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESyncOption.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESyncOption.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESyncOption, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ESyncOption"));
		}
		return Z_Registration_Info_UEnum_ESyncOption.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ESyncOption>()
	{
		return ESyncOption_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ESyncOption_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ESyncOption_Statics::Enumerators[] = {
		{ "ESyncOption::Drive", (int64)ESyncOption::Drive },
		{ "ESyncOption::Passive", (int64)ESyncOption::Passive },
		{ "ESyncOption::Disabled", (int64)ESyncOption::Disabled },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ESyncOption_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Disabled.Comment", "/** It is disabled, it doesn't do anything */" },
		{ "Disabled.Name", "ESyncOption::Disabled" },
		{ "Disabled.ToolTip", "It is disabled, it doesn't do anything" },
		{ "Drive.Comment", "/** Drive LOD from this component. It will contribute to the change of LOD */" },
		{ "Drive.Name", "ESyncOption::Drive" },
		{ "Drive.ToolTip", "Drive LOD from this component. It will contribute to the change of LOD" },
		{ "ModuleRelativePath", "Classes/Components/LODSyncComponent.h" },
		{ "Passive.Comment", "/** It follows what's currently driven by other components. It doesn't contribute to the change of LOD*/" },
		{ "Passive.Name", "ESyncOption::Passive" },
		{ "Passive.ToolTip", "It follows what's currently driven by other components. It doesn't contribute to the change of LOD" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ESyncOption_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ESyncOption",
		"ESyncOption",
		Z_Construct_UEnum_Engine_ESyncOption_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESyncOption_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ESyncOption_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESyncOption_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ESyncOption()
	{
		if (!Z_Registration_Info_UEnum_ESyncOption.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESyncOption.InnerSingleton, Z_Construct_UEnum_Engine_ESyncOption_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESyncOption.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComponentSync;
class UScriptStruct* FComponentSync::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComponentSync.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComponentSync.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComponentSync, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ComponentSync"));
	}
	return Z_Registration_Info_UScriptStruct_ComponentSync.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FComponentSync>()
{
	return FComponentSync::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FComponentSync_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SyncOption_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SyncOption_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SyncOption;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentSync_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Components/LODSyncComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComponentSync_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComponentSync>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentSync_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "FComponentSync" },
		{ "ModuleRelativePath", "Classes/Components/LODSyncComponent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FComponentSync_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComponentSync, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FComponentSync_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentSync_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FComponentSync_Statics::NewProp_SyncOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentSync_Statics::NewProp_SyncOption_MetaData[] = {
		{ "Category", "FComponentSync" },
		{ "ModuleRelativePath", "Classes/Components/LODSyncComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FComponentSync_Statics::NewProp_SyncOption = { "SyncOption", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComponentSync, SyncOption), Z_Construct_UEnum_Engine_ESyncOption, METADATA_PARAMS(Z_Construct_UScriptStruct_FComponentSync_Statics::NewProp_SyncOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentSync_Statics::NewProp_SyncOption_MetaData)) }; // 842199345
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComponentSync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentSync_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentSync_Statics::NewProp_SyncOption_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentSync_Statics::NewProp_SyncOption,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComponentSync_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ComponentSync",
		sizeof(FComponentSync),
		alignof(FComponentSync),
		Z_Construct_UScriptStruct_FComponentSync_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentSync_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FComponentSync_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentSync_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FComponentSync()
	{
		if (!Z_Registration_Info_UScriptStruct_ComponentSync.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComponentSync.InnerSingleton, Z_Construct_UScriptStruct_FComponentSync_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ComponentSync.InnerSingleton;
	}
	DEFINE_FUNCTION(ULODSyncComponent::execGetLODSyncDebugText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetLODSyncDebugText();
		P_NATIVE_END;
	}
	void ULODSyncComponent::StaticRegisterNativesULODSyncComponent()
	{
		UClass* Class = ULODSyncComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLODSyncDebugText", &ULODSyncComponent::execGetLODSyncDebugText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULODSyncComponent_GetLODSyncDebugText_Statics
	{
		struct LODSyncComponent_eventGetLODSyncDebugText_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULODSyncComponent_GetLODSyncDebugText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LODSyncComponent_eventGetLODSyncDebugText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULODSyncComponent_GetLODSyncDebugText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULODSyncComponent_GetLODSyncDebugText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULODSyncComponent_GetLODSyncDebugText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkeletalMesh" },
		{ "Comment", "/** Returns a string detailing  */" },
		{ "ModuleRelativePath", "Classes/Components/LODSyncComponent.h" },
		{ "ToolTip", "Returns a string detailing" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULODSyncComponent_GetLODSyncDebugText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULODSyncComponent, nullptr, "GetLODSyncDebugText", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULODSyncComponent_GetLODSyncDebugText_Statics::LODSyncComponent_eventGetLODSyncDebugText_Parms), Z_Construct_UFunction_ULODSyncComponent_GetLODSyncDebugText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULODSyncComponent_GetLODSyncDebugText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULODSyncComponent_GetLODSyncDebugText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULODSyncComponent_GetLODSyncDebugText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULODSyncComponent_GetLODSyncDebugText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULODSyncComponent_GetLODSyncDebugText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULODSyncComponent);
	UClass* Z_Construct_UClass_ULODSyncComponent_NoRegister()
	{
		return ULODSyncComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULODSyncComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumLODs_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumLODs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForcedLOD_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ForcedLOD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinLOD_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinLOD;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentsToSync_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentsToSync_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ComponentsToSync;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomLODMapping_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CustomLODMapping_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomLODMapping_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CustomLODMapping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLOD_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentLOD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentNumLODs_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentNumLODs;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DriveComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DriveComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DriveComponents;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SubComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SubComponents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULODSyncComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULODSyncComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULODSyncComponent_GetLODSyncDebugText, "GetLODSyncDebugText" }, // 248728866
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULODSyncComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Component" },
		{ "Comment", "/**\n * Implement an Actor component for LOD Sync of different components\n *\n * This is a component that allows multiple different components to sync together of their LOD\n *\n * This allows to find the highest LOD of all the parts, and sync to that LOD\n */" },
		{ "IncludePath", "Components/LODSyncComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Components/LODSyncComponent.h" },
		{ "ToolTip", "Implement an Actor component for LOD Sync of different components\n\nThis is a component that allows multiple different components to sync together of their LOD\n\nThis allows to find the highest LOD of all the parts, and sync to that LOD" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_NumLODs_MetaData[] = {
		{ "Category", "LOD" },
		{ "Comment", "// if -1, it's default and it will calculate the max number of LODs from all sub components\n// if not, it is a number of LODs (not the max index of LODs)\n" },
		{ "ModuleRelativePath", "Classes/Components/LODSyncComponent.h" },
		{ "ToolTip", "if -1, it's default and it will calculate the max number of LODs from all sub components\nif not, it is a number of LODs (not the max index of LODs)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_NumLODs = { "NumLODs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULODSyncComponent, NumLODs), METADATA_PARAMS(Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_NumLODs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_NumLODs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_ForcedLOD_MetaData[] = {
		{ "Category", "LOD" },
		{ "Comment", "// if -1, it's automatically switching\n" },
		{ "ModuleRelativePath", "Classes/Components/LODSyncComponent.h" },
		{ "ToolTip", "if -1, it's automatically switching" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_ForcedLOD = { "ForcedLOD", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULODSyncComponent, ForcedLOD), METADATA_PARAMS(Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_ForcedLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_ForcedLOD_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_MinLOD_MetaData[] = {
		{ "Category", "LOD" },
		{ "Comment", "// Minimum LOD to use when syncing components\n" },
		{ "ModuleRelativePath", "Classes/Components/LODSyncComponent.h" },
		{ "ToolTip", "Minimum LOD to use when syncing components" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_MinLOD = { "MinLOD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULODSyncComponent, MinLOD), METADATA_PARAMS(Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_MinLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_MinLOD_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_ComponentsToSync_Inner = { "ComponentsToSync", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FComponentSync, METADATA_PARAMS(nullptr, 0) }; // 3013356462
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_ComponentsToSync_MetaData[] = {
		{ "Category", "LOD" },
		{ "Comment", "/** \n\x09 *\x09""Array of components whose LOD may drive or be driven by this component.\n\x09 *  Components that are flagged as 'Drive' are treated as being in priority order, with the last component having highest priority. The highest priority\n\x09 *  visible component will set the LOD for all other components. If no components are visible, then the highest priority non-visible component will set LOD.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/LODSyncComponent.h" },
		{ "ToolTip", "Array of components whose LOD may drive or be driven by this component.\nComponents that are flagged as 'Drive' are treated as being in priority order, with the last component having highest priority. The highest priority\nvisible component will set the LOD for all other components. If no components are visible, then the highest priority non-visible component will set LOD." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_ComponentsToSync = { "ComponentsToSync", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULODSyncComponent, ComponentsToSync), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_ComponentsToSync_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_ComponentsToSync_MetaData)) }; // 3013356462
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_CustomLODMapping_ValueProp = { "CustomLODMapping", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FLODMappingData, METADATA_PARAMS(nullptr, 0) }; // 1756294627
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_CustomLODMapping_Key_KeyProp = { "CustomLODMapping_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_CustomLODMapping_MetaData[] = {
		{ "Category", "LOD" },
		{ "Comment", "// by default, the mapping will be one to one\n// but if you want custom, add here. \n" },
		{ "ModuleRelativePath", "Classes/Components/LODSyncComponent.h" },
		{ "ToolTip", "by default, the mapping will be one to one\nbut if you want custom, add here." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_CustomLODMapping = { "CustomLODMapping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULODSyncComponent, CustomLODMapping), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_CustomLODMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_CustomLODMapping_MetaData)) }; // 1756294627
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_CurrentLOD_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/LODSyncComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_CurrentLOD = { "CurrentLOD", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULODSyncComponent, CurrentLOD), METADATA_PARAMS(Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_CurrentLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_CurrentLOD_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_CurrentNumLODs_MetaData[] = {
		{ "Comment", "// num of LODs\n" },
		{ "ModuleRelativePath", "Classes/Components/LODSyncComponent.h" },
		{ "ToolTip", "num of LODs" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_CurrentNumLODs = { "CurrentNumLODs", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULODSyncComponent, CurrentNumLODs), METADATA_PARAMS(Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_CurrentNumLODs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_CurrentNumLODs_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_DriveComponents_Inner = { "DriveComponents", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_DriveComponents_MetaData[] = {
		{ "Comment", "// component that drives the LOD\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Components/LODSyncComponent.h" },
		{ "ToolTip", "component that drives the LOD" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_DriveComponents = { "DriveComponents", nullptr, (EPropertyFlags)0x0044008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULODSyncComponent, DriveComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_DriveComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_DriveComponents_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_SubComponents_Inner = { "SubComponents", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_SubComponents_MetaData[] = {
		{ "Comment", "// all the components that ticks\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Components/LODSyncComponent.h" },
		{ "ToolTip", "all the components that ticks" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_SubComponents = { "SubComponents", nullptr, (EPropertyFlags)0x0044008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULODSyncComponent, SubComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_SubComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_SubComponents_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULODSyncComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_NumLODs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_ForcedLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_MinLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_ComponentsToSync_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_ComponentsToSync,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_CustomLODMapping_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_CustomLODMapping_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_CustomLODMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_CurrentLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_CurrentNumLODs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_DriveComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_DriveComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_SubComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_SubComponents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULODSyncComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULODSyncComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULODSyncComponent_Statics::ClassParams = {
		&ULODSyncComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULODSyncComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULODSyncComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULODSyncComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULODSyncComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULODSyncComponent()
	{
		if (!Z_Registration_Info_UClass_ULODSyncComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULODSyncComponent.OuterSingleton, Z_Construct_UClass_ULODSyncComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULODSyncComponent.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ULODSyncComponent>()
	{
		return ULODSyncComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULODSyncComponent);
	ULODSyncComponent::~ULODSyncComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LODSyncComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LODSyncComponent_h_Statics::EnumInfo[] = {
		{ ESyncOption_StaticEnum, TEXT("ESyncOption"), &Z_Registration_Info_UEnum_ESyncOption, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 842199345U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LODSyncComponent_h_Statics::ScriptStructInfo[] = {
		{ FLODMappingData::StaticStruct, Z_Construct_UScriptStruct_FLODMappingData_Statics::NewStructOps, TEXT("LODMappingData"), &Z_Registration_Info_UScriptStruct_LODMappingData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLODMappingData), 1756294627U) },
		{ FComponentSync::StaticStruct, Z_Construct_UScriptStruct_FComponentSync_Statics::NewStructOps, TEXT("ComponentSync"), &Z_Registration_Info_UScriptStruct_ComponentSync, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComponentSync), 3013356462U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LODSyncComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULODSyncComponent, ULODSyncComponent::StaticClass, TEXT("ULODSyncComponent"), &Z_Registration_Info_UClass_ULODSyncComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULODSyncComponent), 1235767264U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LODSyncComponent_h_2622558877(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LODSyncComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LODSyncComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LODSyncComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LODSyncComponent_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LODSyncComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LODSyncComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
