// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChildActorComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UChildActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UChildActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EChildActorComponentTreeViewVisualizationMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChildActorAttachedActorInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChildActorComponentInstanceData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSceneComponentInstanceData();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChildActorAttachedActorInfo;
class UScriptStruct* FChildActorAttachedActorInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChildActorAttachedActorInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChildActorAttachedActorInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChildActorAttachedActorInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ChildActorAttachedActorInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ChildActorAttachedActorInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FChildActorAttachedActorInfo>()
{
	return FChildActorAttachedActorInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChildActorAttachedActorInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChildActorAttachedActorInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/ChildActorComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChildActorAttachedActorInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChildActorAttachedActorInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChildActorAttachedActorInfo_Statics::NewProp_Actor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/ChildActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FChildActorAttachedActorInfo_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChildActorAttachedActorInfo, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FChildActorAttachedActorInfo_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChildActorAttachedActorInfo_Statics::NewProp_Actor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChildActorAttachedActorInfo_Statics::NewProp_SocketName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/ChildActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FChildActorAttachedActorInfo_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChildActorAttachedActorInfo, SocketName), METADATA_PARAMS(Z_Construct_UScriptStruct_FChildActorAttachedActorInfo_Statics::NewProp_SocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChildActorAttachedActorInfo_Statics::NewProp_SocketName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChildActorAttachedActorInfo_Statics::NewProp_RelativeTransform_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/ChildActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChildActorAttachedActorInfo_Statics::NewProp_RelativeTransform = { "RelativeTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChildActorAttachedActorInfo, RelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FChildActorAttachedActorInfo_Statics::NewProp_RelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChildActorAttachedActorInfo_Statics::NewProp_RelativeTransform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChildActorAttachedActorInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChildActorAttachedActorInfo_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChildActorAttachedActorInfo_Statics::NewProp_SocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChildActorAttachedActorInfo_Statics::NewProp_RelativeTransform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChildActorAttachedActorInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ChildActorAttachedActorInfo",
		sizeof(FChildActorAttachedActorInfo),
		alignof(FChildActorAttachedActorInfo),
		Z_Construct_UScriptStruct_FChildActorAttachedActorInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChildActorAttachedActorInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChildActorAttachedActorInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChildActorAttachedActorInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChildActorAttachedActorInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_ChildActorAttachedActorInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChildActorAttachedActorInfo.InnerSingleton, Z_Construct_UScriptStruct_FChildActorAttachedActorInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChildActorAttachedActorInfo.InnerSingleton;
	}

static_assert(std::is_polymorphic<FChildActorComponentInstanceData>() == std::is_polymorphic<FSceneComponentInstanceData>(), "USTRUCT FChildActorComponentInstanceData cannot be polymorphic unless super FSceneComponentInstanceData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChildActorComponentInstanceData;
class UScriptStruct* FChildActorComponentInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChildActorComponentInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChildActorComponentInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChildActorComponentInstanceData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ChildActorComponentInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_ChildActorComponentInstanceData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FChildActorComponentInstanceData>()
{
	return FChildActorComponentInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChildActorComponentInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ChildActorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildActorName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ChildActorName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttachedActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachedActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AttachedActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChildActorComponentInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/ChildActorComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChildActorComponentInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChildActorComponentInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChildActorComponentInstanceData_Statics::NewProp_ChildActorClass_MetaData[] = {
		{ "Comment", "// The class of the child actor when the instance data cache was stored\n" },
		{ "ModuleRelativePath", "Classes/Components/ChildActorComponent.h" },
		{ "ToolTip", "The class of the child actor when the instance data cache was stored" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FChildActorComponentInstanceData_Statics::NewProp_ChildActorClass = { "ChildActorClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChildActorComponentInstanceData, ChildActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FChildActorComponentInstanceData_Statics::NewProp_ChildActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChildActorComponentInstanceData_Statics::NewProp_ChildActorClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChildActorComponentInstanceData_Statics::NewProp_ChildActorName_MetaData[] = {
		{ "Comment", "// The name of the spawned child actor so it (attempts to) remain constant across construction script reruns\n" },
		{ "ModuleRelativePath", "Classes/Components/ChildActorComponent.h" },
		{ "ToolTip", "The name of the spawned child actor so it (attempts to) remain constant across construction script reruns" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FChildActorComponentInstanceData_Statics::NewProp_ChildActorName = { "ChildActorName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChildActorComponentInstanceData, ChildActorName), METADATA_PARAMS(Z_Construct_UScriptStruct_FChildActorComponentInstanceData_Statics::NewProp_ChildActorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChildActorComponentInstanceData_Statics::NewProp_ChildActorName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChildActorComponentInstanceData_Statics::NewProp_AttachedActors_Inner = { "AttachedActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FChildActorAttachedActorInfo, METADATA_PARAMS(nullptr, 0) }; // 3835210475
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChildActorComponentInstanceData_Statics::NewProp_AttachedActors_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/ChildActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChildActorComponentInstanceData_Statics::NewProp_AttachedActors = { "AttachedActors", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChildActorComponentInstanceData, AttachedActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FChildActorComponentInstanceData_Statics::NewProp_AttachedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChildActorComponentInstanceData_Statics::NewProp_AttachedActors_MetaData)) }; // 3835210475
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChildActorComponentInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChildActorComponentInstanceData_Statics::NewProp_ChildActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChildActorComponentInstanceData_Statics::NewProp_ChildActorName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChildActorComponentInstanceData_Statics::NewProp_AttachedActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChildActorComponentInstanceData_Statics::NewProp_AttachedActors,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChildActorComponentInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FSceneComponentInstanceData,
		&NewStructOps,
		"ChildActorComponentInstanceData",
		sizeof(FChildActorComponentInstanceData),
		alignof(FChildActorComponentInstanceData),
		Z_Construct_UScriptStruct_FChildActorComponentInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChildActorComponentInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChildActorComponentInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChildActorComponentInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChildActorComponentInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_ChildActorComponentInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChildActorComponentInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FChildActorComponentInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChildActorComponentInstanceData.InnerSingleton;
	}
#if WITH_EDITORONLY_DATA
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChildActorComponentTreeViewVisualizationMode;
	static UEnum* EChildActorComponentTreeViewVisualizationMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EChildActorComponentTreeViewVisualizationMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EChildActorComponentTreeViewVisualizationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EChildActorComponentTreeViewVisualizationMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EChildActorComponentTreeViewVisualizationMode"));
		}
		return Z_Registration_Info_UEnum_EChildActorComponentTreeViewVisualizationMode.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EChildActorComponentTreeViewVisualizationMode>()
	{
		return EChildActorComponentTreeViewVisualizationMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EChildActorComponentTreeViewVisualizationMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EChildActorComponentTreeViewVisualizationMode_Statics::Enumerators[] = {
		{ "EChildActorComponentTreeViewVisualizationMode::UseDefault", (int64)EChildActorComponentTreeViewVisualizationMode::UseDefault },
		{ "EChildActorComponentTreeViewVisualizationMode::ComponentOnly", (int64)EChildActorComponentTreeViewVisualizationMode::ComponentOnly },
		{ "EChildActorComponentTreeViewVisualizationMode::ComponentWithChildActor", (int64)EChildActorComponentTreeViewVisualizationMode::ComponentWithChildActor },
		{ "EChildActorComponentTreeViewVisualizationMode::ChildActorOnly", (int64)EChildActorComponentTreeViewVisualizationMode::ChildActorOnly },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EChildActorComponentTreeViewVisualizationMode_Statics::Enum_MetaDataParams[] = {
		{ "ChildActorOnly.Comment", "/** Show only as a child actor hierarchy (i.e. do not show the outer component node as the root). */" },
		{ "ChildActorOnly.Name", "EChildActorComponentTreeViewVisualizationMode::ChildActorOnly" },
		{ "ChildActorOnly.ToolTip", "Show only as a child actor hierarchy (i.e. do not show the outer component node as the root)." },
		{ "ComponentOnly.Comment", "/** Show only the outer component as a single component node. */" },
		{ "ComponentOnly.Name", "EChildActorComponentTreeViewVisualizationMode::ComponentOnly" },
		{ "ComponentOnly.ToolTip", "Show only the outer component as a single component node." },
		{ "ComponentWithChildActor.Comment", "/** Include the child actor hierarchy attached to the outer component as the root node. */" },
		{ "ComponentWithChildActor.Name", "EChildActorComponentTreeViewVisualizationMode::ComponentWithChildActor" },
		{ "ComponentWithChildActor.ToolTip", "Include the child actor hierarchy attached to the outer component as the root node." },
		{ "ModuleRelativePath", "Classes/Components/ChildActorComponent.h" },
		{ "UseDefault.Comment", "/** Use the editor's default setting. */" },
		{ "UseDefault.Hidden", "" },
		{ "UseDefault.Name", "EChildActorComponentTreeViewVisualizationMode::UseDefault" },
		{ "UseDefault.ToolTip", "Use the editor's default setting." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EChildActorComponentTreeViewVisualizationMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EChildActorComponentTreeViewVisualizationMode",
		"EChildActorComponentTreeViewVisualizationMode",
		Z_Construct_UEnum_Engine_EChildActorComponentTreeViewVisualizationMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EChildActorComponentTreeViewVisualizationMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EChildActorComponentTreeViewVisualizationMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EChildActorComponentTreeViewVisualizationMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EChildActorComponentTreeViewVisualizationMode()
	{
		if (!Z_Registration_Info_UEnum_EChildActorComponentTreeViewVisualizationMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChildActorComponentTreeViewVisualizationMode.InnerSingleton, Z_Construct_UEnum_Engine_EChildActorComponentTreeViewVisualizationMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EChildActorComponentTreeViewVisualizationMode.InnerSingleton;
	}
#endif // WITH_EDITORONLY_DATA
	DEFINE_FUNCTION(UChildActorComponent::execOnChildActorDestroyed)
	{
		P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnChildActorDestroyed(Z_Param_DestroyedActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChildActorComponent::execSetChildActorClass)
	{
		P_GET_OBJECT(UClass,Z_Param_InClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetChildActorClass(Z_Param_InClass);
		P_NATIVE_END;
	}
	void UChildActorComponent::StaticRegisterNativesUChildActorComponent()
	{
		UClass* Class = UChildActorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnChildActorDestroyed", &UChildActorComponent::execOnChildActorDestroyed },
			{ "SetChildActorClass", &UChildActorComponent::execSetChildActorClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UChildActorComponent_OnChildActorDestroyed_Statics
	{
		struct ChildActorComponent_eventOnChildActorDestroyed_Parms
		{
			AActor* DestroyedActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UChildActorComponent_OnChildActorDestroyed_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChildActorComponent_eventOnChildActorDestroyed_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChildActorComponent_OnChildActorDestroyed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChildActorComponent_OnChildActorDestroyed_Statics::NewProp_DestroyedActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChildActorComponent_OnChildActorDestroyed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/ChildActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChildActorComponent_OnChildActorDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChildActorComponent, nullptr, "OnChildActorDestroyed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChildActorComponent_OnChildActorDestroyed_Statics::ChildActorComponent_eventOnChildActorDestroyed_Parms), Z_Construct_UFunction_UChildActorComponent_OnChildActorDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChildActorComponent_OnChildActorDestroyed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChildActorComponent_OnChildActorDestroyed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChildActorComponent_OnChildActorDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChildActorComponent_OnChildActorDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChildActorComponent_OnChildActorDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChildActorComponent_SetChildActorClass_Statics
	{
		struct ChildActorComponent_eventSetChildActorClass_Parms
		{
			TSubclassOf<AActor>  InClass;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_InClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UChildActorComponent_SetChildActorClass_Statics::NewProp_InClass = { "InClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChildActorComponent_eventSetChildActorClass_Parms, InClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChildActorComponent_SetChildActorClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChildActorComponent_SetChildActorClass_Statics::NewProp_InClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChildActorComponent_SetChildActorClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "ChildActorComponent" },
		{ "Comment", "/**\n\x09 * Sets the class to use for the child actor. \n\x09 * If called on a template component (owned by a CDO), the properties of any existing child actor template will be copied as best possible to the template. \n\x09 * If called on a component instance in a world (and the class is changing), the created ChildActor will use the class defaults as template.\n\x09 * @param InClass The Actor subclass to spawn as a child actor\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/ChildActorComponent.h" },
		{ "ToolTip", "Sets the class to use for the child actor.\nIf called on a template component (owned by a CDO), the properties of any existing child actor template will be copied as best possible to the template.\nIf called on a component instance in a world (and the class is changing), the created ChildActor will use the class defaults as template.\n@param InClass The Actor subclass to spawn as a child actor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChildActorComponent_SetChildActorClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChildActorComponent, nullptr, "SetChildActorClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChildActorComponent_SetChildActorClass_Statics::ChildActorComponent_eventSetChildActorClass_Parms), Z_Construct_UFunction_UChildActorComponent_SetChildActorClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChildActorComponent_SetChildActorClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChildActorComponent_SetChildActorClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChildActorComponent_SetChildActorClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChildActorComponent_SetChildActorClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChildActorComponent_SetChildActorClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChildActorComponent);
	UClass* Z_Construct_UClass_UChildActorComponent_NoRegister()
	{
		return UChildActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UChildActorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ChildActorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ChildActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildActorTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ChildActorTemplate;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FBytePropertyParams NewProp_EditorTreeViewVisualizationMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorTreeViewVisualizationMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EditorTreeViewVisualizationMode;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChildActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UChildActorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UChildActorComponent_OnChildActorDestroyed, "OnChildActorDestroyed" }, // 3738454240
		{ &Z_Construct_UFunction_UChildActorComponent_SetChildActorClass, "SetChildActorClass" }, // 3912696413
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChildActorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Utility" },
		{ "Comment", "/** A component that spawns an Actor when registered, and destroys it when unregistered.*/" },
		{ "HideCategories", "Object LOD Physics Lighting TextureStreaming Activation Components|Activation Collision Trigger PhysicsVolume" },
		{ "IncludePath", "Components/ChildActorComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/ChildActorComponent.h" },
		{ "ToolTip", "A component that spawns an Actor when registered, and destroys it when unregistered." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChildActorComponent_Statics::NewProp_ChildActorClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ChildActorComponent" },
		{ "Comment", "/** The class of Actor to spawn */" },
		{ "ForceRebuildProperty", "ChildActorTemplate" },
		{ "ModuleRelativePath", "Classes/Components/ChildActorComponent.h" },
		{ "OnlyPlaceable", "" },
		{ "ToolTip", "The class of Actor to spawn" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UChildActorComponent_Statics::NewProp_ChildActorClass = { "ChildActorClass", nullptr, (EPropertyFlags)0x0044000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChildActorComponent, ChildActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UChildActorComponent_Statics::NewProp_ChildActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChildActorComponent_Statics::NewProp_ChildActorClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChildActorComponent_Statics::NewProp_ChildActor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ChildActorComponent" },
		{ "Comment", "/** The actor that we spawned and own */" },
		{ "ModuleRelativePath", "Classes/Components/ChildActorComponent.h" },
		{ "ToolTip", "The actor that we spawned and own" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UChildActorComponent_Statics::NewProp_ChildActor = { "ChildActor", nullptr, (EPropertyFlags)0x0044c00000000034, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChildActorComponent, ChildActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UChildActorComponent_Statics::NewProp_ChildActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChildActorComponent_Statics::NewProp_ChildActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChildActorComponent_Statics::NewProp_ChildActorTemplate_MetaData[] = {
		{ "Category", "ChildActorComponent" },
		{ "Comment", "/** Property to point to the template child actor for details panel purposes */" },
		{ "ModuleRelativePath", "Classes/Components/ChildActorComponent.h" },
		{ "ShowInnerProperties", "" },
		{ "ToolTip", "Property to point to the template child actor for details panel purposes" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UChildActorComponent_Statics::NewProp_ChildActorTemplate = { "ChildActorTemplate", nullptr, (EPropertyFlags)0x0044000000230001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChildActorComponent, ChildActorTemplate), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UChildActorComponent_Statics::NewProp_ChildActorTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChildActorComponent_Statics::NewProp_ChildActorTemplate_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UChildActorComponent_Statics::NewProp_EditorTreeViewVisualizationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChildActorComponent_Statics::NewProp_EditorTreeViewVisualizationMode_MetaData[] = {
		{ "Comment", "/** Indicates how this component will be visualized for editing in a tree view. Users can change this setting per instance via the context menu in the Blueprint/SCS editor. */" },
		{ "ModuleRelativePath", "Classes/Components/ChildActorComponent.h" },
		{ "ToolTip", "Indicates how this component will be visualized for editing in a tree view. Users can change this setting per instance via the context menu in the Blueprint/SCS editor." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UChildActorComponent_Statics::NewProp_EditorTreeViewVisualizationMode = { "EditorTreeViewVisualizationMode", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChildActorComponent, EditorTreeViewVisualizationMode), Z_Construct_UEnum_Engine_EChildActorComponentTreeViewVisualizationMode, METADATA_PARAMS(Z_Construct_UClass_UChildActorComponent_Statics::NewProp_EditorTreeViewVisualizationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChildActorComponent_Statics::NewProp_EditorTreeViewVisualizationMode_MetaData)) }; // 2630047071
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChildActorComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChildActorComponent_Statics::NewProp_ChildActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChildActorComponent_Statics::NewProp_ChildActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChildActorComponent_Statics::NewProp_ChildActorTemplate,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChildActorComponent_Statics::NewProp_EditorTreeViewVisualizationMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChildActorComponent_Statics::NewProp_EditorTreeViewVisualizationMode,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChildActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChildActorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UChildActorComponent_Statics::ClassParams = {
		&UChildActorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UChildActorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UChildActorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UChildActorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChildActorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChildActorComponent()
	{
		if (!Z_Registration_Info_UClass_UChildActorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChildActorComponent.OuterSingleton, Z_Construct_UClass_UChildActorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UChildActorComponent.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UChildActorComponent>()
	{
		return UChildActorComponent::StaticClass();
	}

	void UChildActorComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ChildActor(TEXT("ChildActor"));

		const bool bIsValid = true
			&& Name_ChildActor == ClassReps[(int32)ENetFields_Private::ChildActor].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UChildActorComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChildActorComponent);
	UChildActorComponent::~UChildActorComponent() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UChildActorComponent)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_Statics
	{
#if WITH_EDITORONLY_DATA
		static const FEnumRegisterCompiledInInfo EnumInfo[];
#endif
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
#if WITH_EDITORONLY_DATA
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_Statics::EnumInfo[] = {
		{ EChildActorComponentTreeViewVisualizationMode_StaticEnum, TEXT("EChildActorComponentTreeViewVisualizationMode"), &Z_Registration_Info_UEnum_EChildActorComponentTreeViewVisualizationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2630047071U) },
	};
#endif
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_Statics::ScriptStructInfo[] = {
		{ FChildActorAttachedActorInfo::StaticStruct, Z_Construct_UScriptStruct_FChildActorAttachedActorInfo_Statics::NewStructOps, TEXT("ChildActorAttachedActorInfo"), &Z_Registration_Info_UScriptStruct_ChildActorAttachedActorInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChildActorAttachedActorInfo), 3835210475U) },
		{ FChildActorComponentInstanceData::StaticStruct, Z_Construct_UScriptStruct_FChildActorComponentInstanceData_Statics::NewStructOps, TEXT("ChildActorComponentInstanceData"), &Z_Registration_Info_UScriptStruct_ChildActorComponentInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChildActorComponentInstanceData), 4224838995U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UChildActorComponent, UChildActorComponent::StaticClass, TEXT("UChildActorComponent"), &Z_Registration_Info_UClass_UChildActorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChildActorComponent), 1366034323U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_1895735428(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_Statics::ScriptStructInfo),
		IF_WITH_EDITORONLY_DATA(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_Statics::EnumInfo, nullptr), IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_Statics::EnumInfo), 0));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
