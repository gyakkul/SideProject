// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "../../Source/Runtime/Engine/Classes/Animation/Skeleton.h"
#include "../../Source/Runtime/Engine/Public/BoneContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlendProfile() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UBlendProfile();
	ENGINE_API UClass* Z_Construct_UClass_UBlendProfile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlendProfileMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlendProfileBoneEntry();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBlendProfileMode;
	static UEnum* EBlendProfileMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBlendProfileMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBlendProfileMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBlendProfileMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EBlendProfileMode"));
		}
		return Z_Registration_Info_UEnum_EBlendProfileMode.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EBlendProfileMode>()
	{
		return EBlendProfileMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EBlendProfileMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EBlendProfileMode_Statics::Enumerators[] = {
		{ "EBlendProfileMode::TimeFactor", (int64)EBlendProfileMode::TimeFactor },
		{ "EBlendProfileMode::WeightFactor", (int64)EBlendProfileMode::WeightFactor },
		{ "EBlendProfileMode::BlendMask", (int64)EBlendProfileMode::BlendMask },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EBlendProfileMode_Statics::Enum_MetaDataParams[] = {
		{ "BlendMask.Comment", "// Used for blend masks. Per bone alpha\n" },
		{ "BlendMask.Hidden", "" },
		{ "BlendMask.Name", "EBlendProfileMode::BlendMask" },
		{ "BlendMask.ToolTip", "Used for blend masks. Per bone alpha" },
		{ "Comment", "/** The mode in which the blend profile should be applied. */" },
		{ "ModuleRelativePath", "Classes/Animation/BlendProfile.h" },
		{ "TimeFactor.Comment", "// The bone's transition time is a factor based on the transition time. \n// For example 0.5 means it takes half the time of the transition.\n// Values should be between 0 and 1. They will be clamped if they go out of this range.\n// A bone value of 0 means the bone will instantly transition into the target state.\n" },
		{ "TimeFactor.Name", "EBlendProfileMode::TimeFactor" },
		{ "TimeFactor.ToolTip", "The bone's transition time is a factor based on the transition time.\nFor example 0.5 means it takes half the time of the transition.\nValues should be between 0 and 1. They will be clamped if they go out of this range.\nA bone value of 0 means the bone will instantly transition into the target state." },
		{ "ToolTip", "The mode in which the blend profile should be applied." },
		{ "WeightFactor.Comment", "// The bone's transition weight is multiplied by this factor.\n// For example 2.0 means the bone's blend weight is twice as high as the transition's blend weight.\n// Values should typically be equal or greater than 1.0.\n// If you want certain bones to instantly transition into the target state\n// the Time Factor based method might be a better choice.\n" },
		{ "WeightFactor.Name", "EBlendProfileMode::WeightFactor" },
		{ "WeightFactor.ToolTip", "The bone's transition weight is multiplied by this factor.\nFor example 2.0 means the bone's blend weight is twice as high as the transition's blend weight.\nValues should typically be equal or greater than 1.0.\nIf you want certain bones to instantly transition into the target state\nthe Time Factor based method might be a better choice." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EBlendProfileMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EBlendProfileMode",
		"EBlendProfileMode",
		Z_Construct_UEnum_Engine_EBlendProfileMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EBlendProfileMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EBlendProfileMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EBlendProfileMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EBlendProfileMode()
	{
		if (!Z_Registration_Info_UEnum_EBlendProfileMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBlendProfileMode.InnerSingleton, Z_Construct_UEnum_Engine_EBlendProfileMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBlendProfileMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlendProfileBoneEntry;
class UScriptStruct* FBlendProfileBoneEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlendProfileBoneEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlendProfileBoneEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlendProfileBoneEntry, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BlendProfileBoneEntry"));
	}
	return Z_Registration_Info_UScriptStruct_BlendProfileBoneEntry.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBlendProfileBoneEntry>()
{
	return FBlendProfileBoneEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneReference_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** A single entry for a blend scale within a profile, mapping a bone to a blendscale */" },
		{ "ModuleRelativePath", "Classes/Animation/BlendProfile.h" },
		{ "ToolTip", "A single entry for a blend scale within a profile, mapping a bone to a blendscale" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlendProfileBoneEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Statics::NewProp_BoneReference_MetaData[] = {
		{ "Category", "BoneSettings" },
		{ "ModuleRelativePath", "Classes/Animation/BlendProfile.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Statics::NewProp_BoneReference = { "BoneReference", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlendProfileBoneEntry, BoneReference), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Statics::NewProp_BoneReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Statics::NewProp_BoneReference_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Statics::NewProp_BlendScale_MetaData[] = {
		{ "Category", "BoneSettings" },
		{ "ModuleRelativePath", "Classes/Animation/BlendProfile.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Statics::NewProp_BlendScale = { "BlendScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlendProfileBoneEntry, BlendScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Statics::NewProp_BlendScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Statics::NewProp_BlendScale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Statics::NewProp_BoneReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Statics::NewProp_BlendScale,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BlendProfileBoneEntry",
		sizeof(FBlendProfileBoneEntry),
		alignof(FBlendProfileBoneEntry),
		Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlendProfileBoneEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_BlendProfileBoneEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlendProfileBoneEntry.InnerSingleton, Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BlendProfileBoneEntry.InnerSingleton;
	}
	void UBlendProfile::StaticRegisterNativesUBlendProfile()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlendProfile);
	UClass* Z_Construct_UClass_UBlendProfile_NoRegister()
	{
		return UBlendProfile::StaticClass();
	}
	struct Z_Construct_UClass_UBlendProfile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningSkeleton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OwningSkeleton;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProfileEntries_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProfileEntries_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ProfileEntries;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlendProfile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendProfile_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A blend profile is a set of per-bone scales that can be used in transitions and blend lists\n *  to tweak the weights of specific bones. The scales are applied to the normal weight for that bone\n */" },
		{ "IncludePath", "Animation/BlendProfile.h" },
		{ "ModuleRelativePath", "Classes/Animation/BlendProfile.h" },
		{ "ToolTip", "A blend profile is a set of per-bone scales that can be used in transitions and blend lists\nto tweak the weights of specific bones. The scales are applied to the normal weight for that bone" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendProfile_Statics::NewProp_OwningSkeleton_MetaData[] = {
		{ "Comment", "// The skeleton that owns this profile\n" },
		{ "ModuleRelativePath", "Classes/Animation/BlendProfile.h" },
		{ "ToolTip", "The skeleton that owns this profile" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBlendProfile_Statics::NewProp_OwningSkeleton = { "OwningSkeleton", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlendProfile, OwningSkeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlendProfile_Statics::NewProp_OwningSkeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlendProfile_Statics::NewProp_OwningSkeleton_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlendProfile_Statics::NewProp_ProfileEntries_Inner = { "ProfileEntries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBlendProfileBoneEntry, METADATA_PARAMS(nullptr, 0) }; // 4258759080
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendProfile_Statics::NewProp_ProfileEntries_MetaData[] = {
		{ "Comment", "// List of blend scale entries\n" },
		{ "ModuleRelativePath", "Classes/Animation/BlendProfile.h" },
		{ "ToolTip", "List of blend scale entries" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlendProfile_Statics::NewProp_ProfileEntries = { "ProfileEntries", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlendProfile, ProfileEntries), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlendProfile_Statics::NewProp_ProfileEntries_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlendProfile_Statics::NewProp_ProfileEntries_MetaData)) }; // 4258759080
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBlendProfile_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendProfile_Statics::NewProp_Mode_MetaData[] = {
		{ "Comment", "// Blend Profile Mode. Read EBlendProfileMode for more details\n" },
		{ "ModuleRelativePath", "Classes/Animation/BlendProfile.h" },
		{ "ToolTip", "Blend Profile Mode. Read EBlendProfileMode for more details" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBlendProfile_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlendProfile, Mode), Z_Construct_UEnum_Engine_EBlendProfileMode, METADATA_PARAMS(Z_Construct_UClass_UBlendProfile_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlendProfile_Statics::NewProp_Mode_MetaData)) }; // 3261865566
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlendProfile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendProfile_Statics::NewProp_OwningSkeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendProfile_Statics::NewProp_ProfileEntries_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendProfile_Statics::NewProp_ProfileEntries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendProfile_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendProfile_Statics::NewProp_Mode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlendProfile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlendProfile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlendProfile_Statics::ClassParams = {
		&UBlendProfile::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBlendProfile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlendProfile_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBlendProfile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlendProfile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlendProfile()
	{
		if (!Z_Registration_Info_UClass_UBlendProfile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlendProfile.OuterSingleton, Z_Construct_UClass_UBlendProfile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlendProfile.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UBlendProfile>()
	{
		return UBlendProfile::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlendProfile);
	UBlendProfile::~UBlendProfile() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendProfile_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendProfile_h_Statics::EnumInfo[] = {
		{ EBlendProfileMode_StaticEnum, TEXT("EBlendProfileMode"), &Z_Registration_Info_UEnum_EBlendProfileMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3261865566U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendProfile_h_Statics::ScriptStructInfo[] = {
		{ FBlendProfileBoneEntry::StaticStruct, Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Statics::NewStructOps, TEXT("BlendProfileBoneEntry"), &Z_Registration_Info_UScriptStruct_BlendProfileBoneEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlendProfileBoneEntry), 4258759080U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendProfile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlendProfile, UBlendProfile::StaticClass, TEXT("UBlendProfile"), &Z_Registration_Info_UClass_UBlendProfile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlendProfile), 3908755873U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendProfile_h_2433235757(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendProfile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendProfile_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendProfile_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendProfile_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendProfile_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendProfile_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
