// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/Perception/AISense_Hearing.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISense_Hearing() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAISense();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_Hearing();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_Hearing_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAINoiseEvent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AINoiseEvent;
class UScriptStruct* FAINoiseEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AINoiseEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AINoiseEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAINoiseEvent, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("AINoiseEvent"));
	}
	return Z_Registration_Info_UScriptStruct_AINoiseEvent.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FAINoiseEvent>()
{
	return FAINoiseEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAINoiseEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NoiseLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Loudness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Loudness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAINoiseEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Hearing.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAINoiseEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewProp_NoiseLocation_MetaData[] = {
		{ "Category", "Sense" },
		{ "Comment", "/** if not set Instigator's location will be used */" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Hearing.h" },
		{ "ToolTip", "if not set Instigator's location will be used" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewProp_NoiseLocation = { "NoiseLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAINoiseEvent, NoiseLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewProp_NoiseLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewProp_NoiseLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewProp_Loudness_MetaData[] = {
		{ "Category", "Sense" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Loudness modifier of the sound.\n\x09 * If MaxRange is non-zero, this modifies the range (by multiplication).\n\x09 * If there is no MaxRange, then if Square(DistanceToSound) <= Square(HearingRange * Loudness), the sound is heard, false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Hearing.h" },
		{ "ToolTip", "Loudness modifier of the sound.\nIf MaxRange is non-zero, this modifies the range (by multiplication).\nIf there is no MaxRange, then if Square(DistanceToSound) <= Square(HearingRange * Loudness), the sound is heard, false otherwise." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewProp_Loudness = { "Loudness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAINoiseEvent, Loudness), METADATA_PARAMS(Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewProp_Loudness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewProp_Loudness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewProp_MaxRange_MetaData[] = {
		{ "Category", "Sense" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Max range at which the sound can be heard. Multiplied by Loudness.\n\x09 * A value of 0 indicates that there is no range limit, though listeners are still limited by their own hearing range.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Hearing.h" },
		{ "ToolTip", "Max range at which the sound can be heard. Multiplied by Loudness.\nA value of 0 indicates that there is no range limit, though listeners are still limited by their own hearing range." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAINoiseEvent, MaxRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewProp_MaxRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewProp_MaxRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewProp_Instigator_MetaData[] = {
		{ "Category", "Sense" },
		{ "Comment", "/**\n\x09 * Actor triggering the sound.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Hearing.h" },
		{ "ToolTip", "Actor triggering the sound." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAINoiseEvent, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewProp_Instigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewProp_Instigator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewProp_Tag_MetaData[] = {
		{ "Category", "Sense" },
		{ "Comment", "/**\n\x09 * Named identifier for the noise.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Hearing.h" },
		{ "ToolTip", "Named identifier for the noise." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAINoiseEvent, Tag), METADATA_PARAMS(Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewProp_Tag_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAINoiseEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewProp_NoiseLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewProp_Loudness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewProp_MaxRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewProp_Instigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewProp_Tag,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAINoiseEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		&NewStructOps,
		"AINoiseEvent",
		sizeof(FAINoiseEvent),
		alignof(FAINoiseEvent),
		Z_Construct_UScriptStruct_FAINoiseEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAINoiseEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAINoiseEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAINoiseEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAINoiseEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_AINoiseEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AINoiseEvent.InnerSingleton, Z_Construct_UScriptStruct_FAINoiseEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AINoiseEvent.InnerSingleton;
	}
	DEFINE_FUNCTION(UAISense_Hearing::execReportNoiseEvent)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FVector,Z_Param_NoiseLocation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Loudness);
		P_GET_OBJECT(AActor,Z_Param_Instigator);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxRange);
		P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAISense_Hearing::ReportNoiseEvent(Z_Param_WorldContextObject,Z_Param_NoiseLocation,Z_Param_Loudness,Z_Param_Instigator,Z_Param_MaxRange,Z_Param_Tag);
		P_NATIVE_END;
	}
	void UAISense_Hearing::StaticRegisterNativesUAISense_Hearing()
	{
		UClass* Class = UAISense_Hearing::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReportNoiseEvent", &UAISense_Hearing::execReportNoiseEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics
	{
		struct AISense_Hearing_eventReportNoiseEvent_Parms
		{
			UObject* WorldContextObject;
			FVector NoiseLocation;
			float Loudness;
			AActor* Instigator;
			float MaxRange;
			FName Tag;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NoiseLocation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Loudness;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AISense_Hearing_eventReportNoiseEvent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::NewProp_NoiseLocation = { "NoiseLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AISense_Hearing_eventReportNoiseEvent_Parms, NoiseLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::NewProp_Loudness = { "Loudness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AISense_Hearing_eventReportNoiseEvent_Parms, Loudness), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AISense_Hearing_eventReportNoiseEvent_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AISense_Hearing_eventReportNoiseEvent_Parms, MaxRange), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AISense_Hearing_eventReportNoiseEvent_Parms, Tag), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::NewProp_NoiseLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::NewProp_Loudness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::NewProp_Instigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::NewProp_MaxRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::NewProp_Tag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "Comment", "/**\n\x09 * Report a noise event.\n\x09 * \n\x09 * @param NoiseLocation Location of the noise.\n\x09 * @param Loudness Loudness of the noise. If MaxRange is non-zero, modifies MaxRange, otherwise modifies the squared distance of the sensor's range.\n\x09 * @param Instigator Actor that triggered the noise.\n\x09 * @param MaxRange Max range at which the sound can be heard, multiplied by Loudness. Values <= 0 mean no limit (still limited by listener's range however).\n\x09 * @param Tag Identifier for the event.\n\x09 */" },
		{ "CPP_Default_Instigator", "None" },
		{ "CPP_Default_Loudness", "1.000000" },
		{ "CPP_Default_MaxRange", "0.000000" },
		{ "CPP_Default_Tag", "None" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Hearing.h" },
		{ "ToolTip", "Report a noise event.\n\n@param NoiseLocation Location of the noise.\n@param Loudness Loudness of the noise. If MaxRange is non-zero, modifies MaxRange, otherwise modifies the squared distance of the sensor's range.\n@param Instigator Actor that triggered the noise.\n@param MaxRange Max range at which the sound can be heard, multiplied by Loudness. Values <= 0 mean no limit (still limited by listener's range however).\n@param Tag Identifier for the event." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISense_Hearing, nullptr, "ReportNoiseEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::AISense_Hearing_eventReportNoiseEvent_Parms), Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAISense_Hearing);
	UClass* Z_Construct_UClass_UAISense_Hearing_NoRegister()
	{
		return UAISense_Hearing::StaticClass();
	}
	struct Z_Construct_UClass_UAISense_Hearing_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NoiseEvents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseEvents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NoiseEvents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedOfSoundSq_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedOfSoundSq;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISense_Hearing_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISense,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAISense_Hearing_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent, "ReportNoiseEvent" }, // 919200711
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Hearing_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "AI" },
		{ "IncludePath", "Perception/AISense_Hearing.h" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Hearing.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISense_Hearing_Statics::NewProp_NoiseEvents_Inner = { "NoiseEvents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAINoiseEvent, METADATA_PARAMS(nullptr, 0) }; // 1807938915
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Hearing_Statics::NewProp_NoiseEvents_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Perception/AISense_Hearing.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAISense_Hearing_Statics::NewProp_NoiseEvents = { "NoiseEvents", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAISense_Hearing, NoiseEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAISense_Hearing_Statics::NewProp_NoiseEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Hearing_Statics::NewProp_NoiseEvents_MetaData)) }; // 1807938915
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Hearing_Statics::NewProp_SpeedOfSoundSq_MetaData[] = {
		{ "Comment", "/** Defaults to 0 to have instant notification. Setting to > 0 will result in delaying \n\x09 *\x09when AI hears the sound based on the distance from the source */" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Hearing.h" },
		{ "ToolTip", "Defaults to 0 to have instant notification. Setting to > 0 will result in delaying\n    when AI hears the sound based on the distance from the source" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISense_Hearing_Statics::NewProp_SpeedOfSoundSq = { "SpeedOfSoundSq", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAISense_Hearing, SpeedOfSoundSq), METADATA_PARAMS(Z_Construct_UClass_UAISense_Hearing_Statics::NewProp_SpeedOfSoundSq_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Hearing_Statics::NewProp_SpeedOfSoundSq_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISense_Hearing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Hearing_Statics::NewProp_NoiseEvents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Hearing_Statics::NewProp_NoiseEvents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Hearing_Statics::NewProp_SpeedOfSoundSq,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISense_Hearing_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISense_Hearing>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAISense_Hearing_Statics::ClassParams = {
		&UAISense_Hearing::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAISense_Hearing_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Hearing_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAISense_Hearing_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Hearing_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISense_Hearing()
	{
		if (!Z_Registration_Info_UClass_UAISense_Hearing.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAISense_Hearing.OuterSingleton, Z_Construct_UClass_UAISense_Hearing_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAISense_Hearing.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UAISense_Hearing>()
	{
		return UAISense_Hearing::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISense_Hearing);
	UAISense_Hearing::~UAISense_Hearing() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Hearing_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Hearing_h_Statics::ScriptStructInfo[] = {
		{ FAINoiseEvent::StaticStruct, Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewStructOps, TEXT("AINoiseEvent"), &Z_Registration_Info_UScriptStruct_AINoiseEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAINoiseEvent), 1807938915U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Hearing_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAISense_Hearing, UAISense_Hearing::StaticClass, TEXT("UAISense_Hearing"), &Z_Registration_Info_UClass_UAISense_Hearing, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAISense_Hearing), 3033672398U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Hearing_h_545449105(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Hearing_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Hearing_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Hearing_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Hearing_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
