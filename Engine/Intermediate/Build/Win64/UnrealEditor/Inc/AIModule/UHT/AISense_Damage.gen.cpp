// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/Perception/AISense_Damage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISense_Damage() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAISense();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_Damage();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_Damage_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDamageEvent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AIDamageEvent;
class UScriptStruct* FAIDamageEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AIDamageEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AIDamageEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIDamageEvent, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("AIDamageEvent"));
	}
	return Z_Registration_Info_UScriptStruct_AIDamageEvent.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FAIDamageEvent>()
{
	return FAIDamageEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAIDamageEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamagedActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DamagedActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Instigator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIDamageEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Damage.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAIDamageEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIDamageEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIDamageEvent_Statics::NewProp_Amount_MetaData[] = {
		{ "Category", "Sense" },
		{ "Comment", "/** Damage taken by DamagedActor.\n\x09 *\x09@Note 0-damage events do not get ignored */" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Damage.h" },
		{ "ToolTip", "Damage taken by DamagedActor.\n    @Note 0-damage events do not get ignored" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAIDamageEvent_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAIDamageEvent, Amount), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIDamageEvent_Statics::NewProp_Amount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDamageEvent_Statics::NewProp_Amount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIDamageEvent_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "Sense" },
		{ "Comment", "/** Event's \"Location\", or what will be later treated as the perceived location for this sense.\n\x09 *\x09If not set, HitLocation will be used, if that is unset too DamagedActor's location */" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Damage.h" },
		{ "ToolTip", "Event's \"Location\", or what will be later treated as the perceived location for this sense.\n    If not set, HitLocation will be used, if that is unset too DamagedActor's location" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAIDamageEvent_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAIDamageEvent, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIDamageEvent_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDamageEvent_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIDamageEvent_Statics::NewProp_HitLocation_MetaData[] = {
		{ "Category", "Sense" },
		{ "Comment", "/** Event's additional spatial information\n\x09 *\x09@TODO document */" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Damage.h" },
		{ "ToolTip", "Event's additional spatial information\n    @TODO document" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAIDamageEvent_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAIDamageEvent, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIDamageEvent_Statics::NewProp_HitLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDamageEvent_Statics::NewProp_HitLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIDamageEvent_Statics::NewProp_DamagedActor_MetaData[] = {
		{ "Category", "Sense" },
		{ "Comment", "/** Damaged actor */" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Damage.h" },
		{ "ToolTip", "Damaged actor" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAIDamageEvent_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAIDamageEvent, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIDamageEvent_Statics::NewProp_DamagedActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDamageEvent_Statics::NewProp_DamagedActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIDamageEvent_Statics::NewProp_Instigator_MetaData[] = {
		{ "Category", "Sense" },
		{ "Comment", "/** Actor that instigated damage. Can be None */" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Damage.h" },
		{ "ToolTip", "Actor that instigated damage. Can be None" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAIDamageEvent_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAIDamageEvent, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIDamageEvent_Statics::NewProp_Instigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDamageEvent_Statics::NewProp_Instigator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIDamageEvent_Statics::NewProp_Tag_MetaData[] = {
		{ "Category", "Sense" },
		{ "Comment", "/** Optional named identifier for the damage. */" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Damage.h" },
		{ "ToolTip", "Optional named identifier for the damage." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAIDamageEvent_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAIDamageEvent, Tag), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIDamageEvent_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDamageEvent_Statics::NewProp_Tag_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAIDamageEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDamageEvent_Statics::NewProp_Amount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDamageEvent_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDamageEvent_Statics::NewProp_HitLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDamageEvent_Statics::NewProp_DamagedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDamageEvent_Statics::NewProp_Instigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDamageEvent_Statics::NewProp_Tag,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAIDamageEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		&NewStructOps,
		"AIDamageEvent",
		sizeof(FAIDamageEvent),
		alignof(FAIDamageEvent),
		Z_Construct_UScriptStruct_FAIDamageEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDamageEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAIDamageEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDamageEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAIDamageEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_AIDamageEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AIDamageEvent.InnerSingleton, Z_Construct_UScriptStruct_FAIDamageEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AIDamageEvent.InnerSingleton;
	}
	DEFINE_FUNCTION(UAISense_Damage::execReportDamageEvent)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(AActor,Z_Param_DamagedActor);
		P_GET_OBJECT(AActor,Z_Param_Instigator);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DamageAmount);
		P_GET_STRUCT(FVector,Z_Param_EventLocation);
		P_GET_STRUCT(FVector,Z_Param_HitLocation);
		P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAISense_Damage::ReportDamageEvent(Z_Param_WorldContextObject,Z_Param_DamagedActor,Z_Param_Instigator,Z_Param_DamageAmount,Z_Param_EventLocation,Z_Param_HitLocation,Z_Param_Tag);
		P_NATIVE_END;
	}
	void UAISense_Damage::StaticRegisterNativesUAISense_Damage()
	{
		UClass* Class = UAISense_Damage::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReportDamageEvent", &UAISense_Damage::execReportDamageEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAISense_Damage_ReportDamageEvent_Statics
	{
		struct AISense_Damage_eventReportDamageEvent_Parms
		{
			UObject* WorldContextObject;
			AActor* DamagedActor;
			AActor* Instigator;
			float DamageAmount;
			FVector EventLocation;
			FVector HitLocation;
			FName Tag;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Damage_ReportDamageEvent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AISense_Damage_eventReportDamageEvent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Damage_ReportDamageEvent_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AISense_Damage_eventReportDamageEvent_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Damage_ReportDamageEvent_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AISense_Damage_eventReportDamageEvent_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAISense_Damage_ReportDamageEvent_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AISense_Damage_eventReportDamageEvent_Parms, DamageAmount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAISense_Damage_ReportDamageEvent_Statics::NewProp_EventLocation = { "EventLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AISense_Damage_eventReportDamageEvent_Parms, EventLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAISense_Damage_ReportDamageEvent_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AISense_Damage_eventReportDamageEvent_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAISense_Damage_ReportDamageEvent_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AISense_Damage_eventReportDamageEvent_Parms, Tag), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAISense_Damage_ReportDamageEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Damage_ReportDamageEvent_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Damage_ReportDamageEvent_Statics::NewProp_DamagedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Damage_ReportDamageEvent_Statics::NewProp_Instigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Damage_ReportDamageEvent_Statics::NewProp_DamageAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Damage_ReportDamageEvent_Statics::NewProp_EventLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Damage_ReportDamageEvent_Statics::NewProp_HitLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Damage_ReportDamageEvent_Statics::NewProp_Tag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISense_Damage_ReportDamageEvent_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "HitLocation" },
		{ "Category", "AI|Perception" },
		{ "Comment", "/** EventLocation will be reported as Instigator's location at the moment of event happening*/" },
		{ "CPP_Default_Tag", "None" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Damage.h" },
		{ "ToolTip", "EventLocation will be reported as Instigator's location at the moment of event happening" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAISense_Damage_ReportDamageEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISense_Damage, nullptr, "ReportDamageEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAISense_Damage_ReportDamageEvent_Statics::AISense_Damage_eventReportDamageEvent_Parms), Z_Construct_UFunction_UAISense_Damage_ReportDamageEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Damage_ReportDamageEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAISense_Damage_ReportDamageEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Damage_ReportDamageEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAISense_Damage_ReportDamageEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAISense_Damage_ReportDamageEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAISense_Damage);
	UClass* Z_Construct_UClass_UAISense_Damage_NoRegister()
	{
		return UAISense_Damage::StaticClass();
	}
	struct Z_Construct_UClass_UAISense_Damage_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RegisteredEvents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredEvents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RegisteredEvents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISense_Damage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISense,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAISense_Damage_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAISense_Damage_ReportDamageEvent, "ReportDamageEvent" }, // 2001767579
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Damage_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "AI" },
		{ "IncludePath", "Perception/AISense_Damage.h" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Damage.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISense_Damage_Statics::NewProp_RegisteredEvents_Inner = { "RegisteredEvents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAIDamageEvent, METADATA_PARAMS(nullptr, 0) }; // 3676036810
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Damage_Statics::NewProp_RegisteredEvents_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Perception/AISense_Damage.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAISense_Damage_Statics::NewProp_RegisteredEvents = { "RegisteredEvents", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAISense_Damage, RegisteredEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAISense_Damage_Statics::NewProp_RegisteredEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Damage_Statics::NewProp_RegisteredEvents_MetaData)) }; // 3676036810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISense_Damage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Damage_Statics::NewProp_RegisteredEvents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Damage_Statics::NewProp_RegisteredEvents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISense_Damage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISense_Damage>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAISense_Damage_Statics::ClassParams = {
		&UAISense_Damage::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAISense_Damage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Damage_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAISense_Damage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Damage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISense_Damage()
	{
		if (!Z_Registration_Info_UClass_UAISense_Damage.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAISense_Damage.OuterSingleton, Z_Construct_UClass_UAISense_Damage_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAISense_Damage.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UAISense_Damage>()
	{
		return UAISense_Damage::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISense_Damage);
	UAISense_Damage::~UAISense_Damage() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Damage_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Damage_h_Statics::ScriptStructInfo[] = {
		{ FAIDamageEvent::StaticStruct, Z_Construct_UScriptStruct_FAIDamageEvent_Statics::NewStructOps, TEXT("AIDamageEvent"), &Z_Registration_Info_UScriptStruct_AIDamageEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAIDamageEvent), 3676036810U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Damage_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAISense_Damage, UAISense_Damage::StaticClass, TEXT("UAISense_Damage"), &Z_Registration_Info_UClass_UAISense_Damage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAISense_Damage), 336675728U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Damage_h_485018221(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Damage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Damage_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Damage_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Damage_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
