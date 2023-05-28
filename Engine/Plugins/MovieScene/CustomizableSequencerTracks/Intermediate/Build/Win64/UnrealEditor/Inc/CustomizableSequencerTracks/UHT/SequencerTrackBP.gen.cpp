// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SequencerTrackBP.h"
#include "Styling/SlateBrush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequencerTrackBP() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	CUSTOMIZABLESEQUENCERTRACKS_API UClass* Z_Construct_UClass_USequencerSectionBP_NoRegister();
	CUSTOMIZABLESEQUENCERTRACKS_API UClass* Z_Construct_UClass_USequencerTrackBP();
	CUSTOMIZABLESEQUENCERTRACKS_API UClass* Z_Construct_UClass_USequencerTrackBP_NoRegister();
	CUSTOMIZABLESEQUENCERTRACKS_API UClass* Z_Construct_UClass_USequencerTrackInstanceBP_NoRegister();
	CUSTOMIZABLESEQUENCERTRACKS_API UEnum* Z_Construct_UEnum_CustomizableSequencerTracks_ECustomSequencerTrackType();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	UPackage* Z_Construct_UPackage__Script_CustomizableSequencerTracks();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECustomSequencerTrackType;
	static UEnum* ECustomSequencerTrackType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECustomSequencerTrackType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECustomSequencerTrackType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CustomizableSequencerTracks_ECustomSequencerTrackType, (UObject*)Z_Construct_UPackage__Script_CustomizableSequencerTracks(), TEXT("ECustomSequencerTrackType"));
		}
		return Z_Registration_Info_UEnum_ECustomSequencerTrackType.OuterSingleton;
	}
	template<> CUSTOMIZABLESEQUENCERTRACKS_API UEnum* StaticEnum<ECustomSequencerTrackType>()
	{
		return ECustomSequencerTrackType_StaticEnum();
	}
	struct Z_Construct_UEnum_CustomizableSequencerTracks_ECustomSequencerTrackType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CustomizableSequencerTracks_ECustomSequencerTrackType_Statics::Enumerators[] = {
		{ "ECustomSequencerTrackType::RootTrack", (int64)ECustomSequencerTrackType::RootTrack },
		{ "ECustomSequencerTrackType::ObjectTrack", (int64)ECustomSequencerTrackType::ObjectTrack },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CustomizableSequencerTracks_ECustomSequencerTrackType_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SequencerTrackBP.h" },
		{ "ObjectTrack.Name", "ECustomSequencerTrackType::ObjectTrack" },
		{ "RootTrack.Name", "ECustomSequencerTrackType::RootTrack" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CustomizableSequencerTracks_ECustomSequencerTrackType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CustomizableSequencerTracks,
		nullptr,
		"ECustomSequencerTrackType",
		"ECustomSequencerTrackType",
		Z_Construct_UEnum_CustomizableSequencerTracks_ECustomSequencerTrackType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CustomizableSequencerTracks_ECustomSequencerTrackType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CustomizableSequencerTracks_ECustomSequencerTrackType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CustomizableSequencerTracks_ECustomSequencerTrackType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CustomizableSequencerTracks_ECustomSequencerTrackType()
	{
		if (!Z_Registration_Info_UEnum_ECustomSequencerTrackType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECustomSequencerTrackType.InnerSingleton, Z_Construct_UEnum_CustomizableSequencerTracks_ECustomSequencerTrackType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECustomSequencerTrackType.InnerSingleton;
	}
	void USequencerTrackBP::StaticRegisterNativesUSequencerTrackBP()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USequencerTrackBP);
	UClass* Z_Construct_UClass_USequencerTrackBP_NoRegister()
	{
		return USequencerTrackBP::StaticClass();
	}
	struct Z_Construct_UClass_USequencerTrackBP_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsMultipleRows_MetaData[];
#endif
		static void NewProp_bSupportsMultipleRows_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsMultipleRows;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsBlending_MetaData[];
#endif
		static void NewProp_bSupportsBlending_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsBlending;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TrackType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TrackType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SupportedObjectType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_SupportedObjectType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSectionType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultSectionType;
		static const UECodeGen_Private::FClassPropertyParams NewProp_SupportedSections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SupportedSections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SupportedSections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackInstanceType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TrackInstanceType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sections_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Sections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Sections;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USequencerTrackBP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneNameableTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableSequencerTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerTrackBP_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "SequencerTrack" },
		{ "IncludePath", "SequencerTrackBP.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SequencerTrackBP.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerTrackBP_Statics::NewProp_bSupportsMultipleRows_MetaData[] = {
		{ "Category", "Sequencer" },
		{ "ModuleRelativePath", "Public/SequencerTrackBP.h" },
	};
#endif
	void Z_Construct_UClass_USequencerTrackBP_Statics::NewProp_bSupportsMultipleRows_SetBit(void* Obj)
	{
		((USequencerTrackBP*)Obj)->bSupportsMultipleRows = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerTrackBP_Statics::NewProp_bSupportsMultipleRows = { "bSupportsMultipleRows", nullptr, (EPropertyFlags)0x0010010000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequencerTrackBP), &Z_Construct_UClass_USequencerTrackBP_Statics::NewProp_bSupportsMultipleRows_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerTrackBP_Statics::NewProp_bSupportsMultipleRows_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerTrackBP_Statics::NewProp_bSupportsMultipleRows_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerTrackBP_Statics::NewProp_bSupportsBlending_MetaData[] = {
		{ "Category", "Sequencer" },
		{ "ModuleRelativePath", "Public/SequencerTrackBP.h" },
	};
#endif
	void Z_Construct_UClass_USequencerTrackBP_Statics::NewProp_bSupportsBlending_SetBit(void* Obj)
	{
		((USequencerTrackBP*)Obj)->bSupportsBlending = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerTrackBP_Statics::NewProp_bSupportsBlending = { "bSupportsBlending", nullptr, (EPropertyFlags)0x0010010000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequencerTrackBP), &Z_Construct_UClass_USequencerTrackBP_Statics::NewProp_bSupportsBlending_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerTrackBP_Statics::NewProp_bSupportsBlending_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerTrackBP_Statics::NewProp_bSupportsBlending_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USequencerTrackBP_Statics::NewProp_TrackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerTrackBP_Statics::NewProp_TrackType_MetaData[] = {
		{ "Category", "Sequencer" },
		{ "ModuleRelativePath", "Public/SequencerTrackBP.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USequencerTrackBP_Statics::NewProp_TrackType = { "TrackType", nullptr, (EPropertyFlags)0x0010010000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequencerTrackBP, TrackType), Z_Construct_UEnum_CustomizableSequencerTracks_ECustomSequencerTrackType, METADATA_PARAMS(Z_Construct_UClass_USequencerTrackBP_Statics::NewProp_TrackType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerTrackBP_Statics::NewProp_TrackType_MetaData)) }; // 3856827539
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerTrackBP_Statics::NewProp_SupportedObjectType_MetaData[] = {
		{ "Category", "Sequencer" },
		{ "EditCondition", "TrackType==ECustomSequencerTrackType::ObjectTrack" },
		{ "ModuleRelativePath", "Public/SequencerTrackBP.h" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UClass_USequencerTrackBP_Statics::NewProp_SupportedObjectType = { "SupportedObjectType", nullptr, (EPropertyFlags)0x0014010000010001, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequencerTrackBP, SupportedObjectType), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USequencerTrackBP_Statics::NewProp_SupportedObjectType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerTrackBP_Statics::NewProp_SupportedObjectType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerTrackBP_Statics::NewProp_DefaultSectionType_MetaData[] = {
		{ "Category", "Sequencer" },
		{ "ModuleRelativePath", "Public/SequencerTrackBP.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USequencerTrackBP_Statics::NewProp_DefaultSectionType = { "DefaultSectionType", nullptr, (EPropertyFlags)0x0014010000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequencerTrackBP, DefaultSectionType), Z_Construct_UClass_UClass, Z_Construct_UClass_USequencerSectionBP_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USequencerTrackBP_Statics::NewProp_DefaultSectionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerTrackBP_Statics::NewProp_DefaultSectionType_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USequencerTrackBP_Statics::NewProp_SupportedSections_Inner = { "SupportedSections", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_USequencerSectionBP_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerTrackBP_Statics::NewProp_SupportedSections_MetaData[] = {
		{ "Category", "Sequencer" },
		{ "ModuleRelativePath", "Public/SequencerTrackBP.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USequencerTrackBP_Statics::NewProp_SupportedSections = { "SupportedSections", nullptr, (EPropertyFlags)0x0014010000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequencerTrackBP, SupportedSections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USequencerTrackBP_Statics::NewProp_SupportedSections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerTrackBP_Statics::NewProp_SupportedSections_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerTrackBP_Statics::NewProp_TrackInstanceType_MetaData[] = {
		{ "Category", "Sequencer" },
		{ "ModuleRelativePath", "Public/SequencerTrackBP.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USequencerTrackBP_Statics::NewProp_TrackInstanceType = { "TrackInstanceType", nullptr, (EPropertyFlags)0x0014010000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequencerTrackBP, TrackInstanceType), Z_Construct_UClass_UClass, Z_Construct_UClass_USequencerTrackInstanceBP_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USequencerTrackBP_Statics::NewProp_TrackInstanceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerTrackBP_Statics::NewProp_TrackInstanceType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerTrackBP_Statics::NewProp_Icon_MetaData[] = {
		{ "Category", "Sequencer" },
		{ "ModuleRelativePath", "Public/SequencerTrackBP.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USequencerTrackBP_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010010000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequencerTrackBP, Icon), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_USequencerTrackBP_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerTrackBP_Statics::NewProp_Icon_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerTrackBP_Statics::NewProp_Sections_Inner_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SequencerTrackBP.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USequencerTrackBP_Statics::NewProp_Sections_Inner = { "Sections", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USequencerTrackBP_Statics::NewProp_Sections_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerTrackBP_Statics::NewProp_Sections_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerTrackBP_Statics::NewProp_Sections_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SequencerTrackBP.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USequencerTrackBP_Statics::NewProp_Sections = { "Sections", nullptr, (EPropertyFlags)0x0044008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequencerTrackBP, Sections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USequencerTrackBP_Statics::NewProp_Sections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerTrackBP_Statics::NewProp_Sections_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USequencerTrackBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerTrackBP_Statics::NewProp_bSupportsMultipleRows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerTrackBP_Statics::NewProp_bSupportsBlending,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerTrackBP_Statics::NewProp_TrackType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerTrackBP_Statics::NewProp_TrackType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerTrackBP_Statics::NewProp_SupportedObjectType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerTrackBP_Statics::NewProp_DefaultSectionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerTrackBP_Statics::NewProp_SupportedSections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerTrackBP_Statics::NewProp_SupportedSections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerTrackBP_Statics::NewProp_TrackInstanceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerTrackBP_Statics::NewProp_Icon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerTrackBP_Statics::NewProp_Sections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerTrackBP_Statics::NewProp_Sections,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USequencerTrackBP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USequencerTrackBP>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USequencerTrackBP_Statics::ClassParams = {
		&USequencerTrackBP::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USequencerTrackBP_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USequencerTrackBP_Statics::PropPointers),
		0,
		0x00B000A1u,
		METADATA_PARAMS(Z_Construct_UClass_USequencerTrackBP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerTrackBP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USequencerTrackBP()
	{
		if (!Z_Registration_Info_UClass_USequencerTrackBP.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USequencerTrackBP.OuterSingleton, Z_Construct_UClass_USequencerTrackBP_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USequencerTrackBP.OuterSingleton;
	}
	template<> CUSTOMIZABLESEQUENCERTRACKS_API UClass* StaticClass<USequencerTrackBP>()
	{
		return USequencerTrackBP::StaticClass();
	}
	USequencerTrackBP::USequencerTrackBP(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USequencerTrackBP);
	USequencerTrackBP::~USequencerTrackBP() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_CustomizableSequencerTracks_Source_CustomizableSequencerTracks_Public_SequencerTrackBP_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_CustomizableSequencerTracks_Source_CustomizableSequencerTracks_Public_SequencerTrackBP_h_Statics::EnumInfo[] = {
		{ ECustomSequencerTrackType_StaticEnum, TEXT("ECustomSequencerTrackType"), &Z_Registration_Info_UEnum_ECustomSequencerTrackType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3856827539U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_CustomizableSequencerTracks_Source_CustomizableSequencerTracks_Public_SequencerTrackBP_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USequencerTrackBP, USequencerTrackBP::StaticClass, TEXT("USequencerTrackBP"), &Z_Registration_Info_UClass_USequencerTrackBP, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USequencerTrackBP), 3947338257U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_CustomizableSequencerTracks_Source_CustomizableSequencerTracks_Public_SequencerTrackBP_h_2740627832(TEXT("/Script/CustomizableSequencerTracks"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_CustomizableSequencerTracks_Source_CustomizableSequencerTracks_Public_SequencerTrackBP_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_CustomizableSequencerTracks_Source_CustomizableSequencerTracks_Public_SequencerTrackBP_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_CustomizableSequencerTracks_Source_CustomizableSequencerTracks_Public_SequencerTrackBP_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_CustomizableSequencerTracks_Source_CustomizableSequencerTracks_Public_SequencerTrackBP_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
