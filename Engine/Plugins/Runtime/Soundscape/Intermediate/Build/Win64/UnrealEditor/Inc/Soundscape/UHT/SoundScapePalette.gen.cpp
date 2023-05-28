// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoundScapePalette.h"
#include "GameplayTagContainer.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundScapePalette() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQuery();
	SOUNDSCAPE_API UClass* Z_Construct_UClass_UActiveSoundscapeColor_NoRegister();
	SOUNDSCAPE_API UClass* Z_Construct_UClass_UActiveSoundscapePalette();
	SOUNDSCAPE_API UClass* Z_Construct_UClass_UActiveSoundscapePalette_NoRegister();
	SOUNDSCAPE_API UClass* Z_Construct_UClass_USoundscapeColor_NoRegister();
	SOUNDSCAPE_API UClass* Z_Construct_UClass_USoundscapePalette();
	SOUNDSCAPE_API UClass* Z_Construct_UClass_USoundscapePalette_NoRegister();
	SOUNDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundscapePaletteColor();
	UPackage* Z_Construct_UPackage__Script_Soundscape();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundscapePaletteColor;
class UScriptStruct* FSoundscapePaletteColor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundscapePaletteColor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundscapePaletteColor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundscapePaletteColor, (UObject*)Z_Construct_UPackage__Script_Soundscape(), TEXT("SoundscapePaletteColor"));
	}
	return Z_Registration_Info_UScriptStruct_SoundscapePaletteColor.OuterSingleton;
}
template<> SOUNDSCAPE_API UScriptStruct* StaticStruct<FSoundscapePaletteColor>()
{
	return FSoundscapePaletteColor::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSoundscapePaletteColor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundscapeColor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SoundscapeColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorVolume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ColorVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorPitch_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ColorPitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorFadeIn_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ColorFadeIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorFadeOut_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ColorFadeOut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapePaletteColor_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Struct storing Modulation State\n" },
		{ "ModuleRelativePath", "Public/SoundScapePalette.h" },
		{ "ToolTip", "Struct storing Modulation State" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundscapePaletteColor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundscapePaletteColor>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapePaletteColor_Statics::NewProp_SoundscapeColor_MetaData[] = {
		{ "Category", "Soundscape|Palette" },
		{ "Comment", "// Soundscape Color to Play\n" },
		{ "ModuleRelativePath", "Public/SoundScapePalette.h" },
		{ "ToolTip", "Soundscape Color to Play" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSoundscapePaletteColor_Statics::NewProp_SoundscapeColor = { "SoundscapeColor", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundscapePaletteColor, SoundscapeColor), Z_Construct_UClass_USoundscapeColor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundscapePaletteColor_Statics::NewProp_SoundscapeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapePaletteColor_Statics::NewProp_SoundscapeColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapePaletteColor_Statics::NewProp_ColorVolume_MetaData[] = {
		{ "Category", "Soundscape|Palette" },
		{ "ClampMax", "4.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Base Volume Scalar\n" },
		{ "ModuleRelativePath", "Public/SoundScapePalette.h" },
		{ "SliderExponent", "6.0" },
		{ "ToolTip", "Base Volume Scalar" },
		{ "UIMax", "4.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundscapePaletteColor_Statics::NewProp_ColorVolume = { "ColorVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundscapePaletteColor, ColorVolume), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundscapePaletteColor_Statics::NewProp_ColorVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapePaletteColor_Statics::NewProp_ColorVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapePaletteColor_Statics::NewProp_ColorPitch_MetaData[] = {
		{ "Category", "Soundscape|Palette" },
		{ "ClampMax", "4.0" },
		{ "ClampMin", "0.2" },
		{ "Comment", "// Base Pitch Scalar\n" },
		{ "ModuleRelativePath", "Public/SoundScapePalette.h" },
		{ "SliderExponent", "3.0" },
		{ "ToolTip", "Base Pitch Scalar" },
		{ "UIMax", "4.0" },
		{ "UIMin", "0.2" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundscapePaletteColor_Statics::NewProp_ColorPitch = { "ColorPitch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundscapePaletteColor, ColorPitch), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundscapePaletteColor_Statics::NewProp_ColorPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapePaletteColor_Statics::NewProp_ColorPitch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapePaletteColor_Statics::NewProp_ColorFadeIn_MetaData[] = {
		{ "Category", "Soundscape|Palette" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Base Volume Scalar\n" },
		{ "ModuleRelativePath", "Public/SoundScapePalette.h" },
		{ "ToolTip", "Base Volume Scalar" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundscapePaletteColor_Statics::NewProp_ColorFadeIn = { "ColorFadeIn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundscapePaletteColor, ColorFadeIn), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundscapePaletteColor_Statics::NewProp_ColorFadeIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapePaletteColor_Statics::NewProp_ColorFadeIn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapePaletteColor_Statics::NewProp_ColorFadeOut_MetaData[] = {
		{ "Category", "Soundscape|Palette" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Base Volume Scalar\n" },
		{ "ModuleRelativePath", "Public/SoundScapePalette.h" },
		{ "ToolTip", "Base Volume Scalar" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundscapePaletteColor_Statics::NewProp_ColorFadeOut = { "ColorFadeOut", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundscapePaletteColor, ColorFadeOut), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundscapePaletteColor_Statics::NewProp_ColorFadeOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapePaletteColor_Statics::NewProp_ColorFadeOut_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundscapePaletteColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundscapePaletteColor_Statics::NewProp_SoundscapeColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundscapePaletteColor_Statics::NewProp_ColorVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundscapePaletteColor_Statics::NewProp_ColorPitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundscapePaletteColor_Statics::NewProp_ColorFadeIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundscapePaletteColor_Statics::NewProp_ColorFadeOut,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundscapePaletteColor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Soundscape,
		nullptr,
		&NewStructOps,
		"SoundscapePaletteColor",
		sizeof(FSoundscapePaletteColor),
		alignof(FSoundscapePaletteColor),
		Z_Construct_UScriptStruct_FSoundscapePaletteColor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapePaletteColor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundscapePaletteColor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapePaletteColor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoundscapePaletteColor()
	{
		if (!Z_Registration_Info_UScriptStruct_SoundscapePaletteColor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundscapePaletteColor.InnerSingleton, Z_Construct_UScriptStruct_FSoundscapePaletteColor_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SoundscapePaletteColor.InnerSingleton;
	}
	void USoundscapePalette::StaticRegisterNativesUSoundscapePalette()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundscapePalette);
	UClass* Z_Construct_UClass_USoundscapePalette_NoRegister()
	{
		return USoundscapePalette::StaticClass();
	}
	struct Z_Construct_UClass_USoundscapePalette_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundscapePalettePlaybackConditions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SoundscapePalettePlaybackConditions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Colors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Colors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Colors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundscapePalette_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Soundscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundscapePalette_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Soundscape" },
		{ "Comment", "// Class containing relevant data for a Soundscape Element\n" },
		{ "IncludePath", "SoundScapePalette.h" },
		{ "ModuleRelativePath", "Public/SoundScapePalette.h" },
		{ "ToolTip", "Class containing relevant data for a Soundscape Element" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundscapePalette_Statics::NewProp_SoundscapePalettePlaybackConditions_MetaData[] = {
		{ "Category", "Soundscape|Palette" },
		{ "ModuleRelativePath", "Public/SoundScapePalette.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundscapePalette_Statics::NewProp_SoundscapePalettePlaybackConditions = { "SoundscapePalettePlaybackConditions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundscapePalette, SoundscapePalettePlaybackConditions), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(Z_Construct_UClass_USoundscapePalette_Statics::NewProp_SoundscapePalettePlaybackConditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapePalette_Statics::NewProp_SoundscapePalettePlaybackConditions_MetaData)) }; // 689482789
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundscapePalette_Statics::NewProp_Colors_Inner = { "Colors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoundscapePaletteColor, METADATA_PARAMS(nullptr, 0) }; // 3478629519
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundscapePalette_Statics::NewProp_Colors_MetaData[] = {
		{ "Category", "Soundscape|Palette" },
		{ "Comment", "// Elements\n" },
		{ "ModuleRelativePath", "Public/SoundScapePalette.h" },
		{ "ToolTip", "Elements" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundscapePalette_Statics::NewProp_Colors = { "Colors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundscapePalette, Colors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USoundscapePalette_Statics::NewProp_Colors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapePalette_Statics::NewProp_Colors_MetaData)) }; // 3478629519
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundscapePalette_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundscapePalette_Statics::NewProp_SoundscapePalettePlaybackConditions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundscapePalette_Statics::NewProp_Colors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundscapePalette_Statics::NewProp_Colors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundscapePalette_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundscapePalette>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundscapePalette_Statics::ClassParams = {
		&USoundscapePalette::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundscapePalette_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapePalette_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundscapePalette_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapePalette_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundscapePalette()
	{
		if (!Z_Registration_Info_UClass_USoundscapePalette.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundscapePalette.OuterSingleton, Z_Construct_UClass_USoundscapePalette_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundscapePalette.OuterSingleton;
	}
	template<> SOUNDSCAPE_API UClass* StaticClass<USoundscapePalette>()
	{
		return USoundscapePalette::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundscapePalette);
	USoundscapePalette::~USoundscapePalette() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USoundscapePalette)
	DEFINE_FUNCTION(UActiveSoundscapePalette::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActiveSoundscapePalette::execPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Play();
		P_NATIVE_END;
	}
	void UActiveSoundscapePalette::StaticRegisterNativesUActiveSoundscapePalette()
	{
		UClass* Class = UActiveSoundscapePalette::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Play", &UActiveSoundscapePalette::execPlay },
			{ "Stop", &UActiveSoundscapePalette::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UActiveSoundscapePalette_Play_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActiveSoundscapePalette_Play_Statics::Function_MetaDataParams[] = {
		{ "Category", "Soundscape" },
		{ "ModuleRelativePath", "Public/SoundScapePalette.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActiveSoundscapePalette_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActiveSoundscapePalette, nullptr, "Play", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActiveSoundscapePalette_Play_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActiveSoundscapePalette_Play_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActiveSoundscapePalette_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActiveSoundscapePalette_Play_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActiveSoundscapePalette_Stop_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActiveSoundscapePalette_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Soundscape" },
		{ "ModuleRelativePath", "Public/SoundScapePalette.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActiveSoundscapePalette_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActiveSoundscapePalette, nullptr, "Stop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActiveSoundscapePalette_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActiveSoundscapePalette_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActiveSoundscapePalette_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActiveSoundscapePalette_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActiveSoundscapePalette);
	UClass* Z_Construct_UClass_UActiveSoundscapePalette_NoRegister()
	{
		return UActiveSoundscapePalette::StaticClass();
	}
	struct Z_Construct_UClass_UActiveSoundscapePalette_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_World;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActiveSoundscapeColors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveSoundscapeColors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveSoundscapeColors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActiveSoundscapePalette_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Soundscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UActiveSoundscapePalette_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UActiveSoundscapePalette_Play, "Play" }, // 3135015086
		{ &Z_Construct_UFunction_UActiveSoundscapePalette_Stop, "Stop" }, // 3203820174
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActiveSoundscapePalette_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Soundscape" },
		{ "IncludePath", "SoundScapePalette.h" },
		{ "ModuleRelativePath", "Public/SoundScapePalette.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActiveSoundscapePalette_Statics::NewProp_World_MetaData[] = {
		{ "ModuleRelativePath", "Public/SoundScapePalette.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UActiveSoundscapePalette_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActiveSoundscapePalette, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UActiveSoundscapePalette_Statics::NewProp_World_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActiveSoundscapePalette_Statics::NewProp_World_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UActiveSoundscapePalette_Statics::NewProp_ActiveSoundscapeColors_Inner = { "ActiveSoundscapeColors", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UActiveSoundscapeColor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActiveSoundscapePalette_Statics::NewProp_ActiveSoundscapeColors_MetaData[] = {
		{ "ModuleRelativePath", "Public/SoundScapePalette.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UActiveSoundscapePalette_Statics::NewProp_ActiveSoundscapeColors = { "ActiveSoundscapeColors", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActiveSoundscapePalette, ActiveSoundscapeColors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UActiveSoundscapePalette_Statics::NewProp_ActiveSoundscapeColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActiveSoundscapePalette_Statics::NewProp_ActiveSoundscapeColors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActiveSoundscapePalette_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActiveSoundscapePalette_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActiveSoundscapePalette_Statics::NewProp_ActiveSoundscapeColors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActiveSoundscapePalette_Statics::NewProp_ActiveSoundscapeColors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActiveSoundscapePalette_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActiveSoundscapePalette>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActiveSoundscapePalette_Statics::ClassParams = {
		&UActiveSoundscapePalette::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UActiveSoundscapePalette_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UActiveSoundscapePalette_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UActiveSoundscapePalette_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActiveSoundscapePalette_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActiveSoundscapePalette()
	{
		if (!Z_Registration_Info_UClass_UActiveSoundscapePalette.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActiveSoundscapePalette.OuterSingleton, Z_Construct_UClass_UActiveSoundscapePalette_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActiveSoundscapePalette.OuterSingleton;
	}
	template<> SOUNDSCAPE_API UClass* StaticClass<UActiveSoundscapePalette>()
	{
		return UActiveSoundscapePalette::StaticClass();
	}
	UActiveSoundscapePalette::UActiveSoundscapePalette(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActiveSoundscapePalette);
	UActiveSoundscapePalette::~UActiveSoundscapePalette() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundScapePalette_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundScapePalette_h_Statics::ScriptStructInfo[] = {
		{ FSoundscapePaletteColor::StaticStruct, Z_Construct_UScriptStruct_FSoundscapePaletteColor_Statics::NewStructOps, TEXT("SoundscapePaletteColor"), &Z_Registration_Info_UScriptStruct_SoundscapePaletteColor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundscapePaletteColor), 3478629519U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundScapePalette_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundscapePalette, USoundscapePalette::StaticClass, TEXT("USoundscapePalette"), &Z_Registration_Info_UClass_USoundscapePalette, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundscapePalette), 2199805414U) },
		{ Z_Construct_UClass_UActiveSoundscapePalette, UActiveSoundscapePalette::StaticClass, TEXT("UActiveSoundscapePalette"), &Z_Registration_Info_UClass_UActiveSoundscapePalette, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActiveSoundscapePalette), 2719862160U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundScapePalette_h_3697054377(TEXT("/Script/Soundscape"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundScapePalette_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundScapePalette_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundScapePalette_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundScapePalette_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
