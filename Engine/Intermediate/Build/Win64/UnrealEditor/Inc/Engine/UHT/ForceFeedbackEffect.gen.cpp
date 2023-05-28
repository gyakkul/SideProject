// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h"
#include "../../Source/Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "../../Source/Runtime/Engine/Classes/GameFramework/InputDevicePropertyHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeForceFeedbackEffect() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UForceFeedbackEffect();
	ENGINE_API UClass* Z_Construct_UClass_UForceFeedbackEffect_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInputDeviceProperty_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActiveForceFeedbackEffect();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FForceFeedbackChannelDetails();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FForceFeedbackEffectOverridenChannelDetails();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputDevicePropertyHandle();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ForceFeedbackChannelDetails;
class UScriptStruct* FForceFeedbackChannelDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ForceFeedbackChannelDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ForceFeedbackChannelDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FForceFeedbackChannelDetails, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ForceFeedbackChannelDetails"));
	}
	return Z_Registration_Info_UScriptStruct_ForceFeedbackChannelDetails.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FForceFeedbackChannelDetails>()
{
	return FForceFeedbackChannelDetails::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAffectsLeftLarge_MetaData[];
#endif
		static void NewProp_bAffectsLeftLarge_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectsLeftLarge;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAffectsLeftSmall_MetaData[];
#endif
		static void NewProp_bAffectsLeftSmall_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectsLeftSmall;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAffectsRightLarge_MetaData[];
#endif
		static void NewProp_bAffectsRightLarge_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectsRightLarge;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAffectsRightSmall_MetaData[];
#endif
		static void NewProp_bAffectsRightSmall_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectsRightSmall;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Curve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Curve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackEffect.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FForceFeedbackChannelDetails>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsLeftLarge_MetaData[] = {
		{ "Category", "ChannelDetails" },
		{ "Comment", "/** Please note the final channel mapping depends on the software and hardware capabilities of the platform used to run the engine or the game. Refer to documentation for more information. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackEffect.h" },
		{ "ToolTip", "Please note the final channel mapping depends on the software and hardware capabilities of the platform used to run the engine or the game. Refer to documentation for more information." },
	};
#endif
	void Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsLeftLarge_SetBit(void* Obj)
	{
		((FForceFeedbackChannelDetails*)Obj)->bAffectsLeftLarge = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsLeftLarge = { "bAffectsLeftLarge", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FForceFeedbackChannelDetails), &Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsLeftLarge_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsLeftLarge_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsLeftLarge_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsLeftSmall_MetaData[] = {
		{ "Category", "ChannelDetails" },
		{ "Comment", "/** Please note the final channel mapping depends on the software and hardware capabilities of the platform used to run the engine or the game. Refer to documentation for more information. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackEffect.h" },
		{ "ToolTip", "Please note the final channel mapping depends on the software and hardware capabilities of the platform used to run the engine or the game. Refer to documentation for more information." },
	};
#endif
	void Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsLeftSmall_SetBit(void* Obj)
	{
		((FForceFeedbackChannelDetails*)Obj)->bAffectsLeftSmall = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsLeftSmall = { "bAffectsLeftSmall", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FForceFeedbackChannelDetails), &Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsLeftSmall_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsLeftSmall_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsLeftSmall_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsRightLarge_MetaData[] = {
		{ "Category", "ChannelDetails" },
		{ "Comment", "/** Please note the final channel mapping depends on the software and hardware capabilities of the platform used to run the engine or the game. Refer to documentation for more information. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackEffect.h" },
		{ "ToolTip", "Please note the final channel mapping depends on the software and hardware capabilities of the platform used to run the engine or the game. Refer to documentation for more information." },
	};
#endif
	void Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsRightLarge_SetBit(void* Obj)
	{
		((FForceFeedbackChannelDetails*)Obj)->bAffectsRightLarge = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsRightLarge = { "bAffectsRightLarge", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FForceFeedbackChannelDetails), &Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsRightLarge_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsRightLarge_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsRightLarge_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsRightSmall_MetaData[] = {
		{ "Category", "ChannelDetails" },
		{ "Comment", "/** Please note the final channel mapping depends on the software and hardware capabilities of the platform used to run the engine or the game. Refer to documentation for more information. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackEffect.h" },
		{ "ToolTip", "Please note the final channel mapping depends on the software and hardware capabilities of the platform used to run the engine or the game. Refer to documentation for more information." },
	};
#endif
	void Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsRightSmall_SetBit(void* Obj)
	{
		((FForceFeedbackChannelDetails*)Obj)->bAffectsRightSmall = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsRightSmall = { "bAffectsRightSmall", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FForceFeedbackChannelDetails), &Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsRightSmall_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsRightSmall_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsRightSmall_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_Curve_MetaData[] = {
		{ "Category", "ChannelDetails" },
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackEffect.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FForceFeedbackChannelDetails, Curve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_Curve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_Curve_MetaData)) }; // 1477693291
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsLeftLarge,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsLeftSmall,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsRightLarge,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsRightSmall,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_Curve,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ForceFeedbackChannelDetails",
		sizeof(FForceFeedbackChannelDetails),
		alignof(FForceFeedbackChannelDetails),
		Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FForceFeedbackChannelDetails()
	{
		if (!Z_Registration_Info_UScriptStruct_ForceFeedbackChannelDetails.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ForceFeedbackChannelDetails.InnerSingleton, Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ForceFeedbackChannelDetails.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActiveForceFeedbackEffect;
class UScriptStruct* FActiveForceFeedbackEffect::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActiveForceFeedbackEffect.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActiveForceFeedbackEffect.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActiveForceFeedbackEffect, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ActiveForceFeedbackEffect"));
	}
	return Z_Registration_Info_UScriptStruct_ActiveForceFeedbackEffect.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FActiveForceFeedbackEffect>()
{
	return FActiveForceFeedbackEffect::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForceFeedbackEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ForceFeedbackEffect;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveDeviceProperties_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveDeviceProperties_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_ActiveDeviceProperties;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackEffect.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActiveForceFeedbackEffect>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_Statics::NewProp_ForceFeedbackEffect_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackEffect.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_Statics::NewProp_ForceFeedbackEffect = { "ForceFeedbackEffect", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActiveForceFeedbackEffect, ForceFeedbackEffect), Z_Construct_UClass_UForceFeedbackEffect_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_Statics::NewProp_ForceFeedbackEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_Statics::NewProp_ForceFeedbackEffect_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_Statics::NewProp_ActiveDeviceProperties_ElementProp = { "ActiveDeviceProperties", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FInputDevicePropertyHandle, METADATA_PARAMS(nullptr, 0) }; // 1447277002
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_Statics::NewProp_ActiveDeviceProperties_MetaData[] = {
		{ "Comment", "/** Array of device properties that have been activated by this force feedback effect */" },
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackEffect.h" },
		{ "ToolTip", "Array of device properties that have been activated by this force feedback effect" },
	};
#endif
	static_assert(TModels<CGetTypeHashable, FInputDevicePropertyHandle>::Value, "The structure 'FInputDevicePropertyHandle' is used in a TSet but does not have a GetValueTypeHash defined");
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_Statics::NewProp_ActiveDeviceProperties = { "ActiveDeviceProperties", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActiveForceFeedbackEffect, ActiveDeviceProperties), METADATA_PARAMS(Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_Statics::NewProp_ActiveDeviceProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_Statics::NewProp_ActiveDeviceProperties_MetaData)) }; // 1447277002
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_Statics::NewProp_ForceFeedbackEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_Statics::NewProp_ActiveDeviceProperties_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_Statics::NewProp_ActiveDeviceProperties,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ActiveForceFeedbackEffect",
		sizeof(FActiveForceFeedbackEffect),
		alignof(FActiveForceFeedbackEffect),
		Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActiveForceFeedbackEffect()
	{
		if (!Z_Registration_Info_UScriptStruct_ActiveForceFeedbackEffect.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActiveForceFeedbackEffect.InnerSingleton, Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ActiveForceFeedbackEffect.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ForceFeedbackEffectOverridenChannelDetails;
class UScriptStruct* FForceFeedbackEffectOverridenChannelDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ForceFeedbackEffectOverridenChannelDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ForceFeedbackEffectOverridenChannelDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FForceFeedbackEffectOverridenChannelDetails, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ForceFeedbackEffectOverridenChannelDetails"));
	}
	return Z_Registration_Info_UScriptStruct_ForceFeedbackEffectOverridenChannelDetails.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FForceFeedbackEffectOverridenChannelDetails>()
{
	return FForceFeedbackEffectOverridenChannelDetails::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FForceFeedbackEffectOverridenChannelDetails_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChannelDetails_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelDetails_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChannelDetails;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForceFeedbackEffectOverridenChannelDetails_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** A wrapper struct for setting channel details on a per-platform basis */" },
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackEffect.h" },
		{ "ToolTip", "A wrapper struct for setting channel details on a per-platform basis" },
	};
#endif
	void* Z_Construct_UScriptStruct_FForceFeedbackEffectOverridenChannelDetails_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FForceFeedbackEffectOverridenChannelDetails>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FForceFeedbackEffectOverridenChannelDetails_Statics::NewProp_ChannelDetails_Inner = { "ChannelDetails", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FForceFeedbackChannelDetails, METADATA_PARAMS(nullptr, 0) }; // 999352237
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForceFeedbackEffectOverridenChannelDetails_Statics::NewProp_ChannelDetails_MetaData[] = {
		{ "Category", "ForceFeedbackEffect" },
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackEffect.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FForceFeedbackEffectOverridenChannelDetails_Statics::NewProp_ChannelDetails = { "ChannelDetails", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FForceFeedbackEffectOverridenChannelDetails, ChannelDetails), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FForceFeedbackEffectOverridenChannelDetails_Statics::NewProp_ChannelDetails_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FForceFeedbackEffectOverridenChannelDetails_Statics::NewProp_ChannelDetails_MetaData)) }; // 999352237
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FForceFeedbackEffectOverridenChannelDetails_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForceFeedbackEffectOverridenChannelDetails_Statics::NewProp_ChannelDetails_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForceFeedbackEffectOverridenChannelDetails_Statics::NewProp_ChannelDetails,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FForceFeedbackEffectOverridenChannelDetails_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ForceFeedbackEffectOverridenChannelDetails",
		sizeof(FForceFeedbackEffectOverridenChannelDetails),
		alignof(FForceFeedbackEffectOverridenChannelDetails),
		Z_Construct_UScriptStruct_FForceFeedbackEffectOverridenChannelDetails_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FForceFeedbackEffectOverridenChannelDetails_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FForceFeedbackEffectOverridenChannelDetails_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FForceFeedbackEffectOverridenChannelDetails_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FForceFeedbackEffectOverridenChannelDetails()
	{
		if (!Z_Registration_Info_UScriptStruct_ForceFeedbackEffectOverridenChannelDetails.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ForceFeedbackEffectOverridenChannelDetails.InnerSingleton, Z_Construct_UScriptStruct_FForceFeedbackEffectOverridenChannelDetails_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ForceFeedbackEffectOverridenChannelDetails.InnerSingleton;
	}
	void UForceFeedbackEffect::StaticRegisterNativesUForceFeedbackEffect()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UForceFeedbackEffect);
	UClass* Z_Construct_UClass_UForceFeedbackEffect_NoRegister()
	{
		return UForceFeedbackEffect::StaticClass();
	}
	struct Z_Construct_UClass_UForceFeedbackEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChannelDetails_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelDetails_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChannelDetails;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PerDeviceOverrides_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_PerDeviceOverrides_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerDeviceOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PerDeviceOverrides;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceProperties_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DeviceProperties_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceProperties_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DeviceProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UForceFeedbackEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UForceFeedbackEffect_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A predefined force-feedback effect to be played on a controller\n */" },
		{ "IncludePath", "GameFramework/ForceFeedbackEffect.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackEffect.h" },
		{ "ToolTip", "A predefined force-feedback effect to be played on a controller" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UForceFeedbackEffect_Statics::NewProp_ChannelDetails_Inner = { "ChannelDetails", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FForceFeedbackChannelDetails, METADATA_PARAMS(nullptr, 0) }; // 999352237
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UForceFeedbackEffect_Statics::NewProp_ChannelDetails_MetaData[] = {
		{ "Category", "ForceFeedbackEffect" },
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackEffect.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UForceFeedbackEffect_Statics::NewProp_ChannelDetails = { "ChannelDetails", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UForceFeedbackEffect, ChannelDetails), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UForceFeedbackEffect_Statics::NewProp_ChannelDetails_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UForceFeedbackEffect_Statics::NewProp_ChannelDetails_MetaData)) }; // 999352237
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UForceFeedbackEffect_Statics::NewProp_PerDeviceOverrides_ValueProp = { "PerDeviceOverrides", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FForceFeedbackEffectOverridenChannelDetails, METADATA_PARAMS(nullptr, 0) }; // 3644797541
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UForceFeedbackEffect_Statics::NewProp_PerDeviceOverrides_Key_KeyProp = { "PerDeviceOverrides_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UForceFeedbackEffect_Statics::NewProp_PerDeviceOverrides_MetaData[] = {
		{ "Category", "ForceFeedbackEffect" },
		{ "Comment", "/** A map of platform name -> ForceFeedback channel details */" },
		{ "GetOptions", "Engine.InputPlatformSettings.GetAllHardwareDeviceNames" },
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackEffect.h" },
		{ "ToolTip", "A map of platform name -> ForceFeedback channel details" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UForceFeedbackEffect_Statics::NewProp_PerDeviceOverrides = { "PerDeviceOverrides", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UForceFeedbackEffect, PerDeviceOverrides), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UForceFeedbackEffect_Statics::NewProp_PerDeviceOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UForceFeedbackEffect_Statics::NewProp_PerDeviceOverrides_MetaData)) }; // 3644797541
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UForceFeedbackEffect_Statics::NewProp_DeviceProperties_Inner_MetaData[] = {
		{ "Category", "ForceFeedbackEffect" },
		{ "Comment", "/** A map of input device properties that we want to set while this effect is playing */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackEffect.h" },
		{ "ToolTip", "A map of input device properties that we want to set while this effect is playing" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UForceFeedbackEffect_Statics::NewProp_DeviceProperties_Inner = { "DeviceProperties", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UInputDeviceProperty_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UForceFeedbackEffect_Statics::NewProp_DeviceProperties_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UForceFeedbackEffect_Statics::NewProp_DeviceProperties_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UForceFeedbackEffect_Statics::NewProp_DeviceProperties_MetaData[] = {
		{ "Category", "ForceFeedbackEffect" },
		{ "Comment", "/** A map of input device properties that we want to set while this effect is playing */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackEffect.h" },
		{ "ToolTip", "A map of input device properties that we want to set while this effect is playing" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UForceFeedbackEffect_Statics::NewProp_DeviceProperties = { "DeviceProperties", nullptr, (EPropertyFlags)0x0014008000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UForceFeedbackEffect, DeviceProperties), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UForceFeedbackEffect_Statics::NewProp_DeviceProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UForceFeedbackEffect_Statics::NewProp_DeviceProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UForceFeedbackEffect_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "Info" },
		{ "Comment", "/** Duration of force feedback pattern in seconds. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackEffect.h" },
		{ "ToolTip", "Duration of force feedback pattern in seconds." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UForceFeedbackEffect_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010010000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UForceFeedbackEffect, Duration), METADATA_PARAMS(Z_Construct_UClass_UForceFeedbackEffect_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UForceFeedbackEffect_Statics::NewProp_Duration_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UForceFeedbackEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UForceFeedbackEffect_Statics::NewProp_ChannelDetails_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UForceFeedbackEffect_Statics::NewProp_ChannelDetails,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UForceFeedbackEffect_Statics::NewProp_PerDeviceOverrides_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UForceFeedbackEffect_Statics::NewProp_PerDeviceOverrides_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UForceFeedbackEffect_Statics::NewProp_PerDeviceOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UForceFeedbackEffect_Statics::NewProp_DeviceProperties_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UForceFeedbackEffect_Statics::NewProp_DeviceProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UForceFeedbackEffect_Statics::NewProp_Duration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UForceFeedbackEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UForceFeedbackEffect>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UForceFeedbackEffect_Statics::ClassParams = {
		&UForceFeedbackEffect::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UForceFeedbackEffect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UForceFeedbackEffect_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UForceFeedbackEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UForceFeedbackEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UForceFeedbackEffect()
	{
		if (!Z_Registration_Info_UClass_UForceFeedbackEffect.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UForceFeedbackEffect.OuterSingleton, Z_Construct_UClass_UForceFeedbackEffect_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UForceFeedbackEffect.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UForceFeedbackEffect>()
	{
		return UForceFeedbackEffect::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UForceFeedbackEffect);
	UForceFeedbackEffect::~UForceFeedbackEffect() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackEffect_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackEffect_h_Statics::ScriptStructInfo[] = {
		{ FForceFeedbackChannelDetails::StaticStruct, Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewStructOps, TEXT("ForceFeedbackChannelDetails"), &Z_Registration_Info_UScriptStruct_ForceFeedbackChannelDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FForceFeedbackChannelDetails), 999352237U) },
		{ FActiveForceFeedbackEffect::StaticStruct, Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_Statics::NewStructOps, TEXT("ActiveForceFeedbackEffect"), &Z_Registration_Info_UScriptStruct_ActiveForceFeedbackEffect, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActiveForceFeedbackEffect), 1240823843U) },
		{ FForceFeedbackEffectOverridenChannelDetails::StaticStruct, Z_Construct_UScriptStruct_FForceFeedbackEffectOverridenChannelDetails_Statics::NewStructOps, TEXT("ForceFeedbackEffectOverridenChannelDetails"), &Z_Registration_Info_UScriptStruct_ForceFeedbackEffectOverridenChannelDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FForceFeedbackEffectOverridenChannelDetails), 3644797541U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackEffect_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UForceFeedbackEffect, UForceFeedbackEffect::StaticClass, TEXT("UForceFeedbackEffect"), &Z_Registration_Info_UClass_UForceFeedbackEffect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UForceFeedbackEffect), 1101378243U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackEffect_h_2506978026(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackEffect_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackEffect_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackEffect_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackEffect_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
