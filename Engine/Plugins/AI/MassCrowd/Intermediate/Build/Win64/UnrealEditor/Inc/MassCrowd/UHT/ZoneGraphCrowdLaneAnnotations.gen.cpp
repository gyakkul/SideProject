// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/AI/MassCrowd/Source/MassCrowd/Public/ZoneGraphCrowdLaneAnnotations.h"
#include "../../../../Plugins/Runtime/ZoneGraph/Source/ZoneGraph/Public/ZoneGraphTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZoneGraphCrowdLaneAnnotations() {}
// Cross Module References
	MASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdSubsystem_NoRegister();
	MASSCROWD_API UClass* Z_Construct_UClass_UZoneGraphCrowdLaneAnnotations();
	MASSCROWD_API UClass* Z_Construct_UClass_UZoneGraphCrowdLaneAnnotations_NoRegister();
	MASSCROWD_API UEnum* Z_Construct_UEnum_MassCrowd_ECrowdLaneState();
	MASSCROWD_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphCrowdLaneStateChangeEvent();
	UPackage* Z_Construct_UPackage__Script_MassCrowd();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphLaneHandle();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTag();
	ZONEGRAPHANNOTATIONS_API UClass* Z_Construct_UClass_UZoneGraphAnnotationComponent();
	ZONEGRAPHANNOTATIONS_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphAnnotationEventBase();
// End Cross Module References

static_assert(std::is_polymorphic<FZoneGraphCrowdLaneStateChangeEvent>() == std::is_polymorphic<FZoneGraphAnnotationEventBase>(), "USTRUCT FZoneGraphCrowdLaneStateChangeEvent cannot be polymorphic unless super FZoneGraphAnnotationEventBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ZoneGraphCrowdLaneStateChangeEvent;
class UScriptStruct* FZoneGraphCrowdLaneStateChangeEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ZoneGraphCrowdLaneStateChangeEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ZoneGraphCrowdLaneStateChangeEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FZoneGraphCrowdLaneStateChangeEvent, (UObject*)Z_Construct_UPackage__Script_MassCrowd(), TEXT("ZoneGraphCrowdLaneStateChangeEvent"));
	}
	return Z_Registration_Info_UScriptStruct_ZoneGraphCrowdLaneStateChangeEvent.OuterSingleton;
}
template<> MASSCROWD_API UScriptStruct* StaticStruct<FZoneGraphCrowdLaneStateChangeEvent>()
{
	return FZoneGraphCrowdLaneStateChangeEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FZoneGraphCrowdLaneStateChangeEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Lane_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Lane;
		static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphCrowdLaneStateChangeEvent_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Event indicating the new state of a lane. */" },
		{ "ModuleRelativePath", "Public/ZoneGraphCrowdLaneAnnotations.h" },
		{ "ToolTip", "Event indicating the new state of a lane." },
	};
#endif
	void* Z_Construct_UScriptStruct_FZoneGraphCrowdLaneStateChangeEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZoneGraphCrowdLaneStateChangeEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphCrowdLaneStateChangeEvent_Statics::NewProp_Lane_MetaData[] = {
		{ "Comment", "/** Affected lane. */" },
		{ "ModuleRelativePath", "Public/ZoneGraphCrowdLaneAnnotations.h" },
		{ "ToolTip", "Affected lane." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneGraphCrowdLaneStateChangeEvent_Statics::NewProp_Lane = { "Lane", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphCrowdLaneStateChangeEvent, Lane), Z_Construct_UScriptStruct_FZoneGraphLaneHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphCrowdLaneStateChangeEvent_Statics::NewProp_Lane_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphCrowdLaneStateChangeEvent_Statics::NewProp_Lane_MetaData)) }; // 439458847
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FZoneGraphCrowdLaneStateChangeEvent_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphCrowdLaneStateChangeEvent_Statics::NewProp_State_MetaData[] = {
		{ "Comment", "/** New state. */" },
		{ "ModuleRelativePath", "Public/ZoneGraphCrowdLaneAnnotations.h" },
		{ "ToolTip", "New state." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FZoneGraphCrowdLaneStateChangeEvent_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphCrowdLaneStateChangeEvent, State), Z_Construct_UEnum_MassCrowd_ECrowdLaneState, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphCrowdLaneStateChangeEvent_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphCrowdLaneStateChangeEvent_Statics::NewProp_State_MetaData)) }; // 654836309
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FZoneGraphCrowdLaneStateChangeEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphCrowdLaneStateChangeEvent_Statics::NewProp_Lane,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphCrowdLaneStateChangeEvent_Statics::NewProp_State_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphCrowdLaneStateChangeEvent_Statics::NewProp_State,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZoneGraphCrowdLaneStateChangeEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassCrowd,
		Z_Construct_UScriptStruct_FZoneGraphAnnotationEventBase,
		&NewStructOps,
		"ZoneGraphCrowdLaneStateChangeEvent",
		sizeof(FZoneGraphCrowdLaneStateChangeEvent),
		alignof(FZoneGraphCrowdLaneStateChangeEvent),
		Z_Construct_UScriptStruct_FZoneGraphCrowdLaneStateChangeEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphCrowdLaneStateChangeEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphCrowdLaneStateChangeEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphCrowdLaneStateChangeEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphCrowdLaneStateChangeEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_ZoneGraphCrowdLaneStateChangeEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ZoneGraphCrowdLaneStateChangeEvent.InnerSingleton, Z_Construct_UScriptStruct_FZoneGraphCrowdLaneStateChangeEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ZoneGraphCrowdLaneStateChangeEvent.InnerSingleton;
	}
	void UZoneGraphCrowdLaneAnnotations::StaticRegisterNativesUZoneGraphCrowdLaneAnnotations()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UZoneGraphCrowdLaneAnnotations);
	UClass* Z_Construct_UClass_UZoneGraphCrowdLaneAnnotations_NoRegister()
	{
		return UZoneGraphCrowdLaneAnnotations::StaticClass();
	}
	struct Z_Construct_UClass_UZoneGraphCrowdLaneAnnotations_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloseLaneTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CloseLaneTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaitingLaneTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaitingLaneTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayTags_MetaData[];
#endif
		static void NewProp_bDisplayTags_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrowdSubsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CrowdSubsystem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZoneGraphCrowdLaneAnnotations_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UZoneGraphAnnotationComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MassCrowd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneGraphCrowdLaneAnnotations_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "AI" },
		{ "Comment", "/**\n * Zone graph blocking behavior\n */" },
		{ "HideCategories", "Activation AssetUserData Collision Cooking HLOD Lighting LOD Mobile Navigation Physics RayTracing Rendering Tags TextureStreaming Mobility VirtualTexture Trigger" },
		{ "IncludePath", "ZoneGraphCrowdLaneAnnotations.h" },
		{ "ModuleRelativePath", "Public/ZoneGraphCrowdLaneAnnotations.h" },
		{ "ToolTip", "Zone graph blocking behavior" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneGraphCrowdLaneAnnotations_Statics::NewProp_CloseLaneTag_MetaData[] = {
		{ "Category", "CrowdLane" },
		{ "Comment", "/** Annotation Tag to mark a closed lane. */" },
		{ "ModuleRelativePath", "Public/ZoneGraphCrowdLaneAnnotations.h" },
		{ "ToolTip", "Annotation Tag to mark a closed lane." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZoneGraphCrowdLaneAnnotations_Statics::NewProp_CloseLaneTag = { "CloseLaneTag", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UZoneGraphCrowdLaneAnnotations, CloseLaneTag), Z_Construct_UScriptStruct_FZoneGraphTag, METADATA_PARAMS(Z_Construct_UClass_UZoneGraphCrowdLaneAnnotations_Statics::NewProp_CloseLaneTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphCrowdLaneAnnotations_Statics::NewProp_CloseLaneTag_MetaData)) }; // 1504622355
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneGraphCrowdLaneAnnotations_Statics::NewProp_WaitingLaneTag_MetaData[] = {
		{ "Category", "CrowdLane" },
		{ "Comment", "/** Annotation Tag to mark a waiting lane. */" },
		{ "ModuleRelativePath", "Public/ZoneGraphCrowdLaneAnnotations.h" },
		{ "ToolTip", "Annotation Tag to mark a waiting lane." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZoneGraphCrowdLaneAnnotations_Statics::NewProp_WaitingLaneTag = { "WaitingLaneTag", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UZoneGraphCrowdLaneAnnotations, WaitingLaneTag), Z_Construct_UScriptStruct_FZoneGraphTag, METADATA_PARAMS(Z_Construct_UClass_UZoneGraphCrowdLaneAnnotations_Statics::NewProp_WaitingLaneTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphCrowdLaneAnnotations_Statics::NewProp_WaitingLaneTag_MetaData)) }; // 1504622355
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneGraphCrowdLaneAnnotations_Statics::NewProp_bDisplayTags_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/ZoneGraphCrowdLaneAnnotations.h" },
	};
#endif
	void Z_Construct_UClass_UZoneGraphCrowdLaneAnnotations_Statics::NewProp_bDisplayTags_SetBit(void* Obj)
	{
		((UZoneGraphCrowdLaneAnnotations*)Obj)->bDisplayTags = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZoneGraphCrowdLaneAnnotations_Statics::NewProp_bDisplayTags = { "bDisplayTags", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UZoneGraphCrowdLaneAnnotations), &Z_Construct_UClass_UZoneGraphCrowdLaneAnnotations_Statics::NewProp_bDisplayTags_SetBit, METADATA_PARAMS(Z_Construct_UClass_UZoneGraphCrowdLaneAnnotations_Statics::NewProp_bDisplayTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphCrowdLaneAnnotations_Statics::NewProp_bDisplayTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneGraphCrowdLaneAnnotations_Statics::NewProp_CrowdSubsystem_MetaData[] = {
		{ "Comment", "/** Cached ZoneGraphSubsystem */" },
		{ "ModuleRelativePath", "Public/ZoneGraphCrowdLaneAnnotations.h" },
		{ "ToolTip", "Cached ZoneGraphSubsystem" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UZoneGraphCrowdLaneAnnotations_Statics::NewProp_CrowdSubsystem = { "CrowdSubsystem", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UZoneGraphCrowdLaneAnnotations, CrowdSubsystem), Z_Construct_UClass_UMassCrowdSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UZoneGraphCrowdLaneAnnotations_Statics::NewProp_CrowdSubsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphCrowdLaneAnnotations_Statics::NewProp_CrowdSubsystem_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZoneGraphCrowdLaneAnnotations_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneGraphCrowdLaneAnnotations_Statics::NewProp_CloseLaneTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneGraphCrowdLaneAnnotations_Statics::NewProp_WaitingLaneTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneGraphCrowdLaneAnnotations_Statics::NewProp_bDisplayTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneGraphCrowdLaneAnnotations_Statics::NewProp_CrowdSubsystem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZoneGraphCrowdLaneAnnotations_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZoneGraphCrowdLaneAnnotations>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UZoneGraphCrowdLaneAnnotations_Statics::ClassParams = {
		&UZoneGraphCrowdLaneAnnotations::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UZoneGraphCrowdLaneAnnotations_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphCrowdLaneAnnotations_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UZoneGraphCrowdLaneAnnotations_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphCrowdLaneAnnotations_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UZoneGraphCrowdLaneAnnotations()
	{
		if (!Z_Registration_Info_UClass_UZoneGraphCrowdLaneAnnotations.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZoneGraphCrowdLaneAnnotations.OuterSingleton, Z_Construct_UClass_UZoneGraphCrowdLaneAnnotations_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UZoneGraphCrowdLaneAnnotations.OuterSingleton;
	}
	template<> MASSCROWD_API UClass* StaticClass<UZoneGraphCrowdLaneAnnotations>()
	{
		return UZoneGraphCrowdLaneAnnotations::StaticClass();
	}
	UZoneGraphCrowdLaneAnnotations::UZoneGraphCrowdLaneAnnotations(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZoneGraphCrowdLaneAnnotations);
	UZoneGraphCrowdLaneAnnotations::~UZoneGraphCrowdLaneAnnotations() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_ZoneGraphCrowdLaneAnnotations_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_ZoneGraphCrowdLaneAnnotations_h_Statics::ScriptStructInfo[] = {
		{ FZoneGraphCrowdLaneStateChangeEvent::StaticStruct, Z_Construct_UScriptStruct_FZoneGraphCrowdLaneStateChangeEvent_Statics::NewStructOps, TEXT("ZoneGraphCrowdLaneStateChangeEvent"), &Z_Registration_Info_UScriptStruct_ZoneGraphCrowdLaneStateChangeEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FZoneGraphCrowdLaneStateChangeEvent), 1382690047U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_ZoneGraphCrowdLaneAnnotations_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UZoneGraphCrowdLaneAnnotations, UZoneGraphCrowdLaneAnnotations::StaticClass, TEXT("UZoneGraphCrowdLaneAnnotations"), &Z_Registration_Info_UClass_UZoneGraphCrowdLaneAnnotations, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZoneGraphCrowdLaneAnnotations), 1018858278U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_ZoneGraphCrowdLaneAnnotations_h_3807301217(TEXT("/Script/MassCrowd"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_ZoneGraphCrowdLaneAnnotations_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_ZoneGraphCrowdLaneAnnotations_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_ZoneGraphCrowdLaneAnnotations_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_ZoneGraphCrowdLaneAnnotations_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
