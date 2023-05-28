// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimData/CurveIdentifier.h"
#include "../../Source/Runtime/Engine/Classes/Animation/SmartName.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurveIdentifier() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimationCurveIdentifierExtensions();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationCurveIdentifierExtensions_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERawCurveTrackTypes();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETransformCurveChannel();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EVectorCurveChannel();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationCurveIdentifier();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartName();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETransformCurveChannel;
	static UEnum* ETransformCurveChannel_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETransformCurveChannel.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETransformCurveChannel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETransformCurveChannel, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ETransformCurveChannel"));
		}
		return Z_Registration_Info_UEnum_ETransformCurveChannel.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETransformCurveChannel>()
	{
		return ETransformCurveChannel_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ETransformCurveChannel_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ETransformCurveChannel_Statics::Enumerators[] = {
		{ "ETransformCurveChannel::Position", (int64)ETransformCurveChannel::Position },
		{ "ETransformCurveChannel::Rotation", (int64)ETransformCurveChannel::Rotation },
		{ "ETransformCurveChannel::Scale", (int64)ETransformCurveChannel::Scale },
		{ "ETransformCurveChannel::Invalid", (int64)ETransformCurveChannel::Invalid },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ETransformCurveChannel_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Enum used to determine a component channel of a transform curve */" },
		{ "Invalid.Name", "ETransformCurveChannel::Invalid" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/CurveIdentifier.h" },
		{ "Position.Name", "ETransformCurveChannel::Position" },
		{ "Rotation.Name", "ETransformCurveChannel::Rotation" },
		{ "Scale.Name", "ETransformCurveChannel::Scale" },
		{ "ToolTip", "Enum used to determine a component channel of a transform curve" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ETransformCurveChannel_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ETransformCurveChannel",
		"ETransformCurveChannel",
		Z_Construct_UEnum_Engine_ETransformCurveChannel_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETransformCurveChannel_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ETransformCurveChannel_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETransformCurveChannel_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ETransformCurveChannel()
	{
		if (!Z_Registration_Info_UEnum_ETransformCurveChannel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETransformCurveChannel.InnerSingleton, Z_Construct_UEnum_Engine_ETransformCurveChannel_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETransformCurveChannel.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVectorCurveChannel;
	static UEnum* EVectorCurveChannel_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVectorCurveChannel.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVectorCurveChannel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EVectorCurveChannel, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EVectorCurveChannel"));
		}
		return Z_Registration_Info_UEnum_EVectorCurveChannel.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EVectorCurveChannel>()
	{
		return EVectorCurveChannel_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EVectorCurveChannel_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EVectorCurveChannel_Statics::Enumerators[] = {
		{ "EVectorCurveChannel::X", (int64)EVectorCurveChannel::X },
		{ "EVectorCurveChannel::Y", (int64)EVectorCurveChannel::Y },
		{ "EVectorCurveChannel::Z", (int64)EVectorCurveChannel::Z },
		{ "EVectorCurveChannel::Invalid", (int64)EVectorCurveChannel::Invalid },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EVectorCurveChannel_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Enum used to determine an axis channel of a vector curve */" },
		{ "Invalid.Name", "EVectorCurveChannel::Invalid" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/CurveIdentifier.h" },
		{ "ToolTip", "Enum used to determine an axis channel of a vector curve" },
		{ "X.Name", "EVectorCurveChannel::X" },
		{ "Y.Name", "EVectorCurveChannel::Y" },
		{ "Z.Name", "EVectorCurveChannel::Z" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EVectorCurveChannel_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EVectorCurveChannel",
		"EVectorCurveChannel",
		Z_Construct_UEnum_Engine_EVectorCurveChannel_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EVectorCurveChannel_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EVectorCurveChannel_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EVectorCurveChannel_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EVectorCurveChannel()
	{
		if (!Z_Registration_Info_UEnum_EVectorCurveChannel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVectorCurveChannel.InnerSingleton, Z_Construct_UEnum_Engine_EVectorCurveChannel_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVectorCurveChannel.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimationCurveIdentifier;
class UScriptStruct* FAnimationCurveIdentifier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimationCurveIdentifier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimationCurveIdentifier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationCurveIdentifier, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimationCurveIdentifier"));
	}
	return Z_Registration_Info_UScriptStruct_AnimationCurveIdentifier.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimationCurveIdentifier>()
{
	return FAnimationCurveIdentifier::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimationCurveIdentifier_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InternalName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InternalName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurveType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurveType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Channel_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Channel;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Axis_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Axis_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Axis;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationCurveIdentifier_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Script-friendly structure for identifying an animation curve.\n* Wrapping the unique type and smart-name for use within the AnimDataController API. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/CurveIdentifier.h" },
		{ "ToolTip", "Script-friendly structure for identifying an animation curve.\nWrapping the unique type and smart-name for use within the AnimDataController API." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimationCurveIdentifier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationCurveIdentifier>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationCurveIdentifier_Statics::NewProp_InternalName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimData/CurveIdentifier.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimationCurveIdentifier_Statics::NewProp_InternalName = { "InternalName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationCurveIdentifier, InternalName), Z_Construct_UScriptStruct_FSmartName, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationCurveIdentifier_Statics::NewProp_InternalName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationCurveIdentifier_Statics::NewProp_InternalName_MetaData)) }; // 1281775015
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimationCurveIdentifier_Statics::NewProp_CurveType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationCurveIdentifier_Statics::NewProp_CurveType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimData/CurveIdentifier.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimationCurveIdentifier_Statics::NewProp_CurveType = { "CurveType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationCurveIdentifier, CurveType), Z_Construct_UEnum_Engine_ERawCurveTrackTypes, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationCurveIdentifier_Statics::NewProp_CurveType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationCurveIdentifier_Statics::NewProp_CurveType_MetaData)) }; // 1535854795
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimationCurveIdentifier_Statics::NewProp_Channel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationCurveIdentifier_Statics::NewProp_Channel_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimData/CurveIdentifier.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimationCurveIdentifier_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationCurveIdentifier, Channel), Z_Construct_UEnum_Engine_ETransformCurveChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationCurveIdentifier_Statics::NewProp_Channel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationCurveIdentifier_Statics::NewProp_Channel_MetaData)) }; // 3582701664
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimationCurveIdentifier_Statics::NewProp_Axis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationCurveIdentifier_Statics::NewProp_Axis_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimData/CurveIdentifier.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimationCurveIdentifier_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationCurveIdentifier, Axis), Z_Construct_UEnum_Engine_EVectorCurveChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationCurveIdentifier_Statics::NewProp_Axis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationCurveIdentifier_Statics::NewProp_Axis_MetaData)) }; // 2685186430
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimationCurveIdentifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationCurveIdentifier_Statics::NewProp_InternalName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationCurveIdentifier_Statics::NewProp_CurveType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationCurveIdentifier_Statics::NewProp_CurveType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationCurveIdentifier_Statics::NewProp_Channel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationCurveIdentifier_Statics::NewProp_Channel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationCurveIdentifier_Statics::NewProp_Axis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationCurveIdentifier_Statics::NewProp_Axis,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimationCurveIdentifier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimationCurveIdentifier",
		sizeof(FAnimationCurveIdentifier),
		alignof(FAnimationCurveIdentifier),
		Z_Construct_UScriptStruct_FAnimationCurveIdentifier_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationCurveIdentifier_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationCurveIdentifier_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationCurveIdentifier_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimationCurveIdentifier()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimationCurveIdentifier.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimationCurveIdentifier.InnerSingleton, Z_Construct_UScriptStruct_FAnimationCurveIdentifier_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimationCurveIdentifier.InnerSingleton;
	}
	DEFINE_FUNCTION(UAnimationCurveIdentifierExtensions::execGetType)
	{
		P_GET_STRUCT_REF(FAnimationCurveIdentifier,Z_Param_Out_Identifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ERawCurveTrackTypes*)Z_Param__Result=UAnimationCurveIdentifierExtensions::GetType(Z_Param_Out_Identifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationCurveIdentifierExtensions::execGetName)
	{
		P_GET_STRUCT_REF(FAnimationCurveIdentifier,Z_Param_Out_Identifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UAnimationCurveIdentifierExtensions::GetName(Z_Param_Out_Identifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationCurveIdentifierExtensions::execIsValid)
	{
		P_GET_STRUCT_REF(FAnimationCurveIdentifier,Z_Param_Out_Identifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAnimationCurveIdentifierExtensions::IsValid(Z_Param_Out_Identifier);
		P_NATIVE_END;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(UAnimationCurveIdentifierExtensions::execGetTransformChildCurveIdentifier)
	{
		P_GET_STRUCT_REF(FAnimationCurveIdentifier,Z_Param_Out_InOutIdentifier);
		P_GET_ENUM(ETransformCurveChannel,Z_Param_Channel);
		P_GET_ENUM(EVectorCurveChannel,Z_Param_Axis);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAnimationCurveIdentifierExtensions::GetTransformChildCurveIdentifier(Z_Param_Out_InOutIdentifier,ETransformCurveChannel(Z_Param_Channel),EVectorCurveChannel(Z_Param_Axis));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationCurveIdentifierExtensions::execGetCurveIdentifiers)
	{
		P_GET_OBJECT(USkeleton,Z_Param_InSkeleton);
		P_GET_ENUM(ERawCurveTrackTypes,Z_Param_CurveType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FAnimationCurveIdentifier>*)Z_Param__Result=UAnimationCurveIdentifierExtensions::GetCurveIdentifiers(Z_Param_InSkeleton,ERawCurveTrackTypes(Z_Param_CurveType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationCurveIdentifierExtensions::execFindCurveIdentifier)
	{
		P_GET_OBJECT(USkeleton,Z_Param_InSkeleton);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_ENUM(ERawCurveTrackTypes,Z_Param_CurveType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAnimationCurveIdentifier*)Z_Param__Result=UAnimationCurveIdentifierExtensions::FindCurveIdentifier(Z_Param_InSkeleton,Z_Param_Name,ERawCurveTrackTypes(Z_Param_CurveType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationCurveIdentifierExtensions::execGetCurveIdentifier)
	{
		P_GET_OBJECT(USkeleton,Z_Param_InSkeleton);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_ENUM(ERawCurveTrackTypes,Z_Param_CurveType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAnimationCurveIdentifier*)Z_Param__Result=UAnimationCurveIdentifierExtensions::GetCurveIdentifier(Z_Param_InSkeleton,Z_Param_Name,ERawCurveTrackTypes(Z_Param_CurveType));
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void UAnimationCurveIdentifierExtensions::StaticRegisterNativesUAnimationCurveIdentifierExtensions()
	{
		UClass* Class = UAnimationCurveIdentifierExtensions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
#if WITH_EDITOR
			{ "FindCurveIdentifier", &UAnimationCurveIdentifierExtensions::execFindCurveIdentifier },
			{ "GetCurveIdentifier", &UAnimationCurveIdentifierExtensions::execGetCurveIdentifier },
			{ "GetCurveIdentifiers", &UAnimationCurveIdentifierExtensions::execGetCurveIdentifiers },
#endif // WITH_EDITOR
			{ "GetName", &UAnimationCurveIdentifierExtensions::execGetName },
#if WITH_EDITOR
			{ "GetTransformChildCurveIdentifier", &UAnimationCurveIdentifierExtensions::execGetTransformChildCurveIdentifier },
#endif // WITH_EDITOR
			{ "GetType", &UAnimationCurveIdentifierExtensions::execGetType },
			{ "IsValid", &UAnimationCurveIdentifierExtensions::execIsValid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_FindCurveIdentifier_Statics
	{
		struct AnimationCurveIdentifierExtensions_eventFindCurveIdentifier_Parms
		{
			const USkeleton* InSkeleton;
			FName Name;
			ERawCurveTrackTypes CurveType;
			FAnimationCurveIdentifier ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSkeleton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSkeleton;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurveType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurveType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_FindCurveIdentifier_Statics::NewProp_InSkeleton_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_FindCurveIdentifier_Statics::NewProp_InSkeleton = { "InSkeleton", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationCurveIdentifierExtensions_eventFindCurveIdentifier_Parms, InSkeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_FindCurveIdentifier_Statics::NewProp_InSkeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_FindCurveIdentifier_Statics::NewProp_InSkeleton_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_FindCurveIdentifier_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationCurveIdentifierExtensions_eventFindCurveIdentifier_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_FindCurveIdentifier_Statics::NewProp_CurveType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_FindCurveIdentifier_Statics::NewProp_CurveType = { "CurveType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationCurveIdentifierExtensions_eventFindCurveIdentifier_Parms, CurveType), Z_Construct_UEnum_Engine_ERawCurveTrackTypes, METADATA_PARAMS(nullptr, 0) }; // 1535854795
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_FindCurveIdentifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationCurveIdentifierExtensions_eventFindCurveIdentifier_Parms, ReturnValue), Z_Construct_UScriptStruct_FAnimationCurveIdentifier, METADATA_PARAMS(nullptr, 0) }; // 385993389
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_FindCurveIdentifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_FindCurveIdentifier_Statics::NewProp_InSkeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_FindCurveIdentifier_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_FindCurveIdentifier_Statics::NewProp_CurveType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_FindCurveIdentifier_Statics::NewProp_CurveType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_FindCurveIdentifier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_FindCurveIdentifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Curves" },
		{ "Comment", "/**\n\x09* Tries to construct a valid FAnimationCurveIdentifier instance. It tries to find the underlying SmartName on the provided Skeleton for the provided curve type.\n\x09*\n\x09* @param\x09InSkeleton\x09\x09\x09Skeleton on which to look for the curve name\n\x09* @param\x09Name\x09\x09\x09\x09Name of the curve to find\n\x09* @param\x09""CurveType\x09\x09\x09Type of the curve to find\n\x09*\n\x09* @return\x09Valid FAnimationCurveIdentifier if the name exists on the skeleton and the operation was successful, invalid otherwise\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/CurveIdentifier.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Tries to construct a valid FAnimationCurveIdentifier instance. It tries to find the underlying SmartName on the provided Skeleton for the provided curve type.\n\n@param        InSkeleton                      Skeleton on which to look for the curve name\n@param        Name                            Name of the curve to find\n@param        CurveType                       Type of the curve to find\n\n@return       Valid FAnimationCurveIdentifier if the name exists on the skeleton and the operation was successful, invalid otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_FindCurveIdentifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationCurveIdentifierExtensions, nullptr, "FindCurveIdentifier", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_FindCurveIdentifier_Statics::AnimationCurveIdentifierExtensions_eventFindCurveIdentifier_Parms), Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_FindCurveIdentifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_FindCurveIdentifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_FindCurveIdentifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_FindCurveIdentifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_FindCurveIdentifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_FindCurveIdentifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetCurveIdentifier_Statics
	{
		struct AnimationCurveIdentifierExtensions_eventGetCurveIdentifier_Parms
		{
			USkeleton* InSkeleton;
			FName Name;
			ERawCurveTrackTypes CurveType;
			FAnimationCurveIdentifier ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSkeleton;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurveType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurveType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetCurveIdentifier_Statics::NewProp_InSkeleton = { "InSkeleton", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationCurveIdentifierExtensions_eventGetCurveIdentifier_Parms, InSkeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetCurveIdentifier_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationCurveIdentifierExtensions_eventGetCurveIdentifier_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetCurveIdentifier_Statics::NewProp_CurveType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetCurveIdentifier_Statics::NewProp_CurveType = { "CurveType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationCurveIdentifierExtensions_eventGetCurveIdentifier_Parms, CurveType), Z_Construct_UEnum_Engine_ERawCurveTrackTypes, METADATA_PARAMS(nullptr, 0) }; // 1535854795
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetCurveIdentifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationCurveIdentifierExtensions_eventGetCurveIdentifier_Parms, ReturnValue), Z_Construct_UScriptStruct_FAnimationCurveIdentifier, METADATA_PARAMS(nullptr, 0) }; // 385993389
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetCurveIdentifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetCurveIdentifier_Statics::NewProp_InSkeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetCurveIdentifier_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetCurveIdentifier_Statics::NewProp_CurveType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetCurveIdentifier_Statics::NewProp_CurveType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetCurveIdentifier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetCurveIdentifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Curves" },
		{ "Comment", "/**\n\x09* Constructs a valid FAnimationCurveIdentifier instance. Ensuring that the underlying SmartName exists on the provided Skeleton for the provided curve type.\n\x09* If it is not found initially it will add it to the Skeleton thus modifying it.\n\x09*\n\x09* @param\x09InSkeleton\x09\x09\x09Skeleton on which to look for or add the curve name\n\x09* @param\x09Name\x09\x09\x09\x09Name of the curve to find or add\n\x09* @param\x09""CurveType\x09\x09\x09Type of the curve to find or add\n\x09*\n\x09* @return\x09Valid FAnimationCurveIdentifier if the operation was successful\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/CurveIdentifier.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Constructs a valid FAnimationCurveIdentifier instance. Ensuring that the underlying SmartName exists on the provided Skeleton for the provided curve type.\nIf it is not found initially it will add it to the Skeleton thus modifying it.\n\n@param        InSkeleton                      Skeleton on which to look for or add the curve name\n@param        Name                            Name of the curve to find or add\n@param        CurveType                       Type of the curve to find or add\n\n@return       Valid FAnimationCurveIdentifier if the operation was successful" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetCurveIdentifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationCurveIdentifierExtensions, nullptr, "GetCurveIdentifier", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetCurveIdentifier_Statics::AnimationCurveIdentifierExtensions_eventGetCurveIdentifier_Parms), Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetCurveIdentifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetCurveIdentifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetCurveIdentifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetCurveIdentifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetCurveIdentifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetCurveIdentifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetCurveIdentifiers_Statics
	{
		struct AnimationCurveIdentifierExtensions_eventGetCurveIdentifiers_Parms
		{
			USkeleton* InSkeleton;
			ERawCurveTrackTypes CurveType;
			TArray<FAnimationCurveIdentifier> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSkeleton;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurveType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurveType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetCurveIdentifiers_Statics::NewProp_InSkeleton = { "InSkeleton", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationCurveIdentifierExtensions_eventGetCurveIdentifiers_Parms, InSkeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetCurveIdentifiers_Statics::NewProp_CurveType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetCurveIdentifiers_Statics::NewProp_CurveType = { "CurveType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationCurveIdentifierExtensions_eventGetCurveIdentifiers_Parms, CurveType), Z_Construct_UEnum_Engine_ERawCurveTrackTypes, METADATA_PARAMS(nullptr, 0) }; // 1535854795
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetCurveIdentifiers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAnimationCurveIdentifier, METADATA_PARAMS(nullptr, 0) }; // 385993389
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetCurveIdentifiers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationCurveIdentifierExtensions_eventGetCurveIdentifiers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 385993389
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetCurveIdentifiers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetCurveIdentifiers_Statics::NewProp_InSkeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetCurveIdentifiers_Statics::NewProp_CurveType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetCurveIdentifiers_Statics::NewProp_CurveType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetCurveIdentifiers_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetCurveIdentifiers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetCurveIdentifiers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Curves" },
		{ "Comment", "/**\n\x09* Retrieves all curve identifiers for a specific curve types from the provided Skeleton\n\x09*\n\x09* @param\x09InSkeleton\x09\x09\x09Skeleton from which to retrieve the curve identifiers\n\x09* @param\x09""CurveType\x09\x09\x09Type of the curve identifers to retrieve\n\x09*\n\x09* @return\x09""Array of FAnimationCurveIdentifier instances each representing a unique curve if the operation was successful, empyty array otherwise\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/CurveIdentifier.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Retrieves all curve identifiers for a specific curve types from the provided Skeleton\n\n@param        InSkeleton                      Skeleton from which to retrieve the curve identifiers\n@param        CurveType                       Type of the curve identifers to retrieve\n\n@return       Array of FAnimationCurveIdentifier instances each representing a unique curve if the operation was successful, empyty array otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetCurveIdentifiers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationCurveIdentifierExtensions, nullptr, "GetCurveIdentifiers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetCurveIdentifiers_Statics::AnimationCurveIdentifierExtensions_eventGetCurveIdentifiers_Parms), Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetCurveIdentifiers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetCurveIdentifiers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetCurveIdentifiers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetCurveIdentifiers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetCurveIdentifiers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetCurveIdentifiers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetName_Statics
	{
		struct AnimationCurveIdentifierExtensions_eventGetName_Parms
		{
			FAnimationCurveIdentifier Identifier;
			FName ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetName_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationCurveIdentifierExtensions_eventGetName_Parms, Identifier), Z_Construct_UScriptStruct_FAnimationCurveIdentifier, METADATA_PARAMS(nullptr, 0) }; // 385993389
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationCurveIdentifierExtensions_eventGetName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetName_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Curve" },
		{ "Comment", "/**\n\x09* @return\x09The name used for displaying the Curve Identifier\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/CurveIdentifier.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "@return       The name used for displaying the Curve Identifier" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationCurveIdentifierExtensions, nullptr, "GetName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetName_Statics::AnimationCurveIdentifierExtensions_eventGetName_Parms), Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetTransformChildCurveIdentifier_Statics
	{
		struct AnimationCurveIdentifierExtensions_eventGetTransformChildCurveIdentifier_Parms
		{
			FAnimationCurveIdentifier InOutIdentifier;
			ETransformCurveChannel Channel;
			EVectorCurveChannel Axis;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InOutIdentifier;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Channel_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Channel;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Axis_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Axis;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetTransformChildCurveIdentifier_Statics::NewProp_InOutIdentifier = { "InOutIdentifier", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationCurveIdentifierExtensions_eventGetTransformChildCurveIdentifier_Parms, InOutIdentifier), Z_Construct_UScriptStruct_FAnimationCurveIdentifier, METADATA_PARAMS(nullptr, 0) }; // 385993389
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetTransformChildCurveIdentifier_Statics::NewProp_Channel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetTransformChildCurveIdentifier_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationCurveIdentifierExtensions_eventGetTransformChildCurveIdentifier_Parms, Channel), Z_Construct_UEnum_Engine_ETransformCurveChannel, METADATA_PARAMS(nullptr, 0) }; // 3582701664
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetTransformChildCurveIdentifier_Statics::NewProp_Axis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetTransformChildCurveIdentifier_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationCurveIdentifierExtensions_eventGetTransformChildCurveIdentifier_Parms, Axis), Z_Construct_UEnum_Engine_EVectorCurveChannel, METADATA_PARAMS(nullptr, 0) }; // 2685186430
	void Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetTransformChildCurveIdentifier_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimationCurveIdentifierExtensions_eventGetTransformChildCurveIdentifier_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetTransformChildCurveIdentifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimationCurveIdentifierExtensions_eventGetTransformChildCurveIdentifier_Parms), &Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetTransformChildCurveIdentifier_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetTransformChildCurveIdentifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetTransformChildCurveIdentifier_Statics::NewProp_InOutIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetTransformChildCurveIdentifier_Statics::NewProp_Channel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetTransformChildCurveIdentifier_Statics::NewProp_Channel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetTransformChildCurveIdentifier_Statics::NewProp_Axis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetTransformChildCurveIdentifier_Statics::NewProp_Axis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetTransformChildCurveIdentifier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetTransformChildCurveIdentifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Curves" },
		{ "Comment", "/**\n\x09* Converts a valid FAnimationCurveIdentifier instance with RCT_Transform curve type to target a child curve.\n\x09*\n\x09* @param\x09InOutIdentifier\x09\x09[out] Identifier to be converted\n\x09* @param\x09""Channel\x09\x09\x09\x09""Channel to target\n\x09* @param\x09""Axis\x09\x09\x09\x09""Axis within channel to target\n\x09*\n\x09* @return\x09Valid FAnimationCurveIdentifier if the operation was successful\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/CurveIdentifier.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Converts a valid FAnimationCurveIdentifier instance with RCT_Transform curve type to target a child curve.\n\n@param        InOutIdentifier         [out] Identifier to be converted\n@param        Channel                         Channel to target\n@param        Axis                            Axis within channel to target\n\n@return       Valid FAnimationCurveIdentifier if the operation was successful" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetTransformChildCurveIdentifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationCurveIdentifierExtensions, nullptr, "GetTransformChildCurveIdentifier", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetTransformChildCurveIdentifier_Statics::AnimationCurveIdentifierExtensions_eventGetTransformChildCurveIdentifier_Parms), Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetTransformChildCurveIdentifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetTransformChildCurveIdentifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetTransformChildCurveIdentifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetTransformChildCurveIdentifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetTransformChildCurveIdentifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetTransformChildCurveIdentifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetType_Statics
	{
		struct AnimationCurveIdentifierExtensions_eventGetType_Parms
		{
			FAnimationCurveIdentifier Identifier;
			ERawCurveTrackTypes ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetType_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationCurveIdentifierExtensions_eventGetType_Parms, Identifier), Z_Construct_UScriptStruct_FAnimationCurveIdentifier, METADATA_PARAMS(nullptr, 0) }; // 385993389
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationCurveIdentifierExtensions_eventGetType_Parms, ReturnValue), Z_Construct_UEnum_Engine_ERawCurveTrackTypes, METADATA_PARAMS(nullptr, 0) }; // 1535854795
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetType_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Curve" },
		{ "Comment", "/**\n\x09* @return\x09The animation curve type for the curve represented by the Curve Identifier\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/CurveIdentifier.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "@return       The animation curve type for the curve represented by the Curve Identifier" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationCurveIdentifierExtensions, nullptr, "GetType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetType_Statics::AnimationCurveIdentifierExtensions_eventGetType_Parms), Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_IsValid_Statics
	{
		struct AnimationCurveIdentifierExtensions_eventIsValid_Parms
		{
			FAnimationCurveIdentifier Identifier;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_IsValid_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationCurveIdentifierExtensions_eventIsValid_Parms, Identifier), Z_Construct_UScriptStruct_FAnimationCurveIdentifier, METADATA_PARAMS(nullptr, 0) }; // 385993389
	void Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimationCurveIdentifierExtensions_eventIsValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimationCurveIdentifierExtensions_eventIsValid_Parms), &Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_IsValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_IsValid_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_IsValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_IsValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Curve" },
		{ "Comment", "/**\n\x09* @return\x09Whether or not the Curve Identifier is valid\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/CurveIdentifier.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "@return       Whether or not the Curve Identifier is valid" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_IsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationCurveIdentifierExtensions, nullptr, "IsValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_IsValid_Statics::AnimationCurveIdentifierExtensions_eventIsValid_Parms), Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_IsValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_IsValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_IsValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_IsValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_IsValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimationCurveIdentifierExtensions);
	UClass* Z_Construct_UClass_UAnimationCurveIdentifierExtensions_NoRegister()
	{
		return UAnimationCurveIdentifierExtensions::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationCurveIdentifierExtensions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationCurveIdentifierExtensions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimationCurveIdentifierExtensions_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_FindCurveIdentifier, "FindCurveIdentifier" }, // 3169237994
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetCurveIdentifier, "GetCurveIdentifier" }, // 1856135065
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetCurveIdentifiers, "GetCurveIdentifiers" }, // 2401096176
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetName, "GetName" }, // 4066023917
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetTransformChildCurveIdentifier, "GetTransformChildCurveIdentifier" }, // 2411292029
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetType, "GetType" }, // 317892372
		{ &Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_IsValid, "IsValid" }, // 818146228
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationCurveIdentifierExtensions_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Script-exposed functionality for wrapping native functionality and constructing valid FAnimationCurveIdentifier instances */" },
		{ "IncludePath", "Animation/AnimData/CurveIdentifier.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/CurveIdentifier.h" },
		{ "ToolTip", "Script-exposed functionality for wrapping native functionality and constructing valid FAnimationCurveIdentifier instances" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationCurveIdentifierExtensions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationCurveIdentifierExtensions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationCurveIdentifierExtensions_Statics::ClassParams = {
		&UAnimationCurveIdentifierExtensions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAnimationCurveIdentifierExtensions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationCurveIdentifierExtensions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimationCurveIdentifierExtensions()
	{
		if (!Z_Registration_Info_UClass_UAnimationCurveIdentifierExtensions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationCurveIdentifierExtensions.OuterSingleton, Z_Construct_UClass_UAnimationCurveIdentifierExtensions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimationCurveIdentifierExtensions.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAnimationCurveIdentifierExtensions>()
	{
		return UAnimationCurveIdentifierExtensions::StaticClass();
	}
	UAnimationCurveIdentifierExtensions::UAnimationCurveIdentifierExtensions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationCurveIdentifierExtensions);
	UAnimationCurveIdentifierExtensions::~UAnimationCurveIdentifierExtensions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_CurveIdentifier_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_CurveIdentifier_h_Statics::EnumInfo[] = {
		{ ETransformCurveChannel_StaticEnum, TEXT("ETransformCurveChannel"), &Z_Registration_Info_UEnum_ETransformCurveChannel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3582701664U) },
		{ EVectorCurveChannel_StaticEnum, TEXT("EVectorCurveChannel"), &Z_Registration_Info_UEnum_EVectorCurveChannel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2685186430U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_CurveIdentifier_h_Statics::ScriptStructInfo[] = {
		{ FAnimationCurveIdentifier::StaticStruct, Z_Construct_UScriptStruct_FAnimationCurveIdentifier_Statics::NewStructOps, TEXT("AnimationCurveIdentifier"), &Z_Registration_Info_UScriptStruct_AnimationCurveIdentifier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimationCurveIdentifier), 385993389U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_CurveIdentifier_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimationCurveIdentifierExtensions, UAnimationCurveIdentifierExtensions::StaticClass, TEXT("UAnimationCurveIdentifierExtensions"), &Z_Registration_Info_UClass_UAnimationCurveIdentifierExtensions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationCurveIdentifierExtensions), 2970102663U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_CurveIdentifier_h_1900581661(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_CurveIdentifier_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_CurveIdentifier_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_CurveIdentifier_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_CurveIdentifier_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_CurveIdentifier_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_CurveIdentifier_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
