// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNode_Inertialization.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_Inertialization() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlendProfile_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInertializationBoneState();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInertializationSpace();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInertializationState();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Inertialization();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInertializationBoneDiff();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInertializationCurveDiff();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInertializationPose();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInertializationPoseDiff();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInertializationRequest();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInertializationState;
	static UEnum* EInertializationState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInertializationState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInertializationState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EInertializationState, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EInertializationState"));
		}
		return Z_Registration_Info_UEnum_EInertializationState.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EInertializationState>()
	{
		return EInertializationState_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EInertializationState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EInertializationState_Statics::Enumerators[] = {
		{ "EInertializationState::Inactive", (int64)EInertializationState::Inactive },
		{ "EInertializationState::Pending", (int64)EInertializationState::Pending },
		{ "EInertializationState::Active", (int64)EInertializationState::Active },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EInertializationState_Statics::Enum_MetaDataParams[] = {
		{ "Active.Comment", "// Inertialization request pending... prepare to capture the pose difference and then switch to active\n" },
		{ "Active.Name", "EInertializationState::Active" },
		{ "Active.ToolTip", "Inertialization request pending... prepare to capture the pose difference and then switch to active" },
		{ "Comment", "// namespace UE::Anim\n" },
		{ "Inactive.Name", "EInertializationState::Inactive" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_Inertialization.h" },
		{ "Pending.Comment", "// Inertialization inactive\n" },
		{ "Pending.Name", "EInertializationState::Pending" },
		{ "Pending.ToolTip", "Inertialization inactive" },
		{ "ToolTip", "namespace UE::Anim" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EInertializationState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EInertializationState",
		"EInertializationState",
		Z_Construct_UEnum_Engine_EInertializationState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EInertializationState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EInertializationState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EInertializationState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EInertializationState()
	{
		if (!Z_Registration_Info_UEnum_EInertializationState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInertializationState.InnerSingleton, Z_Construct_UEnum_Engine_EInertializationState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInertializationState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInertializationBoneState;
	static UEnum* EInertializationBoneState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInertializationBoneState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInertializationBoneState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EInertializationBoneState, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EInertializationBoneState"));
		}
		return Z_Registration_Info_UEnum_EInertializationBoneState.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EInertializationBoneState>()
	{
		return EInertializationBoneState_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EInertializationBoneState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EInertializationBoneState_Statics::Enumerators[] = {
		{ "EInertializationBoneState::Invalid", (int64)EInertializationBoneState::Invalid },
		{ "EInertializationBoneState::Valid", (int64)EInertializationBoneState::Valid },
		{ "EInertializationBoneState::Excluded", (int64)EInertializationBoneState::Excluded },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EInertializationBoneState_Statics::Enum_MetaDataParams[] = {
		{ "Excluded.Comment", "// Valid bone\n" },
		{ "Excluded.Name", "EInertializationBoneState::Excluded" },
		{ "Excluded.ToolTip", "Valid bone" },
		{ "Invalid.Name", "EInertializationBoneState::Invalid" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_Inertialization.h" },
		{ "Valid.Comment", "// Invalid bone (ie: bone was present in the skeleton but was not present in the pose when it was captured)\n" },
		{ "Valid.Name", "EInertializationBoneState::Valid" },
		{ "Valid.ToolTip", "Invalid bone (ie: bone was present in the skeleton but was not present in the pose when it was captured)" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EInertializationBoneState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EInertializationBoneState",
		"EInertializationBoneState",
		Z_Construct_UEnum_Engine_EInertializationBoneState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EInertializationBoneState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EInertializationBoneState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EInertializationBoneState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EInertializationBoneState()
	{
		if (!Z_Registration_Info_UEnum_EInertializationBoneState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInertializationBoneState.InnerSingleton, Z_Construct_UEnum_Engine_EInertializationBoneState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInertializationBoneState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInertializationSpace;
	static UEnum* EInertializationSpace_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInertializationSpace.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInertializationSpace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EInertializationSpace, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EInertializationSpace"));
		}
		return Z_Registration_Info_UEnum_EInertializationSpace.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EInertializationSpace>()
	{
		return EInertializationSpace_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EInertializationSpace_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EInertializationSpace_Statics::Enumerators[] = {
		{ "EInertializationSpace::Default", (int64)EInertializationSpace::Default },
		{ "EInertializationSpace::WorldSpace", (int64)EInertializationSpace::WorldSpace },
		{ "EInertializationSpace::WorldRotation", (int64)EInertializationSpace::WorldRotation },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EInertializationSpace_Statics::Enum_MetaDataParams[] = {
		{ "Default.Name", "EInertializationSpace::Default" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_Inertialization.h" },
		{ "WorldRotation.Comment", "// Inertialize translation and rotation in world space (to conceal discontinuities in actor transform such snapping to a new attach parent)\n" },
		{ "WorldRotation.Name", "EInertializationSpace::WorldRotation" },
		{ "WorldRotation.ToolTip", "Inertialize translation and rotation in world space (to conceal discontinuities in actor transform such snapping to a new attach parent)" },
		{ "WorldSpace.Comment", "// Inertialize in local space (default)\n" },
		{ "WorldSpace.Name", "EInertializationSpace::WorldSpace" },
		{ "WorldSpace.ToolTip", "Inertialize in local space (default)" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EInertializationSpace_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EInertializationSpace",
		"EInertializationSpace",
		Z_Construct_UEnum_Engine_EInertializationSpace_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EInertializationSpace_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EInertializationSpace_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EInertializationSpace_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EInertializationSpace()
	{
		if (!Z_Registration_Info_UEnum_EInertializationSpace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInertializationSpace.InnerSingleton, Z_Construct_UEnum_Engine_EInertializationSpace_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInertializationSpace.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InertializationRequest;
class UScriptStruct* FInertializationRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InertializationRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InertializationRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInertializationRequest, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("InertializationRequest"));
	}
	return Z_Registration_Info_UScriptStruct_InertializationRequest.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInertializationRequest>()
{
	return FInertializationRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInertializationRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendProfile_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BlendProfile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInertializationRequest_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_Inertialization.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInertializationRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInertializationRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInertializationRequest_Statics::NewProp_Duration_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_Inertialization.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInertializationRequest_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInertializationRequest, Duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FInertializationRequest_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInertializationRequest_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInertializationRequest_Statics::NewProp_BlendProfile_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_Inertialization.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FInertializationRequest_Statics::NewProp_BlendProfile = { "BlendProfile", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInertializationRequest, BlendProfile), Z_Construct_UClass_UBlendProfile_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInertializationRequest_Statics::NewProp_BlendProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInertializationRequest_Statics::NewProp_BlendProfile_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInertializationRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInertializationRequest_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInertializationRequest_Statics::NewProp_BlendProfile,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInertializationRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"InertializationRequest",
		sizeof(FInertializationRequest),
		alignof(FInertializationRequest),
		Z_Construct_UScriptStruct_FInertializationRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInertializationRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInertializationRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInertializationRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInertializationRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_InertializationRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InertializationRequest.InnerSingleton, Z_Construct_UScriptStruct_FInertializationRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InertializationRequest.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InertializationPose;
class UScriptStruct* FInertializationPose::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InertializationPose.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InertializationPose.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInertializationPose, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("InertializationPose"));
	}
	return Z_Registration_Info_UScriptStruct_InertializationPose.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInertializationPose>()
{
	return FInertializationPose::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInertializationPose_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInertializationPose_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_Inertialization.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInertializationPose_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInertializationPose>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInertializationPose_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"InertializationPose",
		sizeof(FInertializationPose),
		alignof(FInertializationPose),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInertializationPose_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInertializationPose_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInertializationPose()
	{
		if (!Z_Registration_Info_UScriptStruct_InertializationPose.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InertializationPose.InnerSingleton, Z_Construct_UScriptStruct_FInertializationPose_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InertializationPose.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InertializationBoneDiff;
class UScriptStruct* FInertializationBoneDiff::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InertializationBoneDiff.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InertializationBoneDiff.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInertializationBoneDiff, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("InertializationBoneDiff"));
	}
	return Z_Registration_Info_UScriptStruct_InertializationBoneDiff.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInertializationBoneDiff>()
{
	return FInertializationBoneDiff::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInertializationBoneDiff_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInertializationBoneDiff_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_Inertialization.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInertializationBoneDiff_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInertializationBoneDiff>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInertializationBoneDiff_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"InertializationBoneDiff",
		sizeof(FInertializationBoneDiff),
		alignof(FInertializationBoneDiff),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInertializationBoneDiff_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInertializationBoneDiff_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInertializationBoneDiff()
	{
		if (!Z_Registration_Info_UScriptStruct_InertializationBoneDiff.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InertializationBoneDiff.InnerSingleton, Z_Construct_UScriptStruct_FInertializationBoneDiff_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InertializationBoneDiff.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InertializationCurveDiff;
class UScriptStruct* FInertializationCurveDiff::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InertializationCurveDiff.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InertializationCurveDiff.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInertializationCurveDiff, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("InertializationCurveDiff"));
	}
	return Z_Registration_Info_UScriptStruct_InertializationCurveDiff.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInertializationCurveDiff>()
{
	return FInertializationCurveDiff::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInertializationCurveDiff_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInertializationCurveDiff_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_Inertialization.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInertializationCurveDiff_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInertializationCurveDiff>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInertializationCurveDiff_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"InertializationCurveDiff",
		sizeof(FInertializationCurveDiff),
		alignof(FInertializationCurveDiff),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInertializationCurveDiff_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInertializationCurveDiff_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInertializationCurveDiff()
	{
		if (!Z_Registration_Info_UScriptStruct_InertializationCurveDiff.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InertializationCurveDiff.InnerSingleton, Z_Construct_UScriptStruct_FInertializationCurveDiff_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InertializationCurveDiff.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InertializationPoseDiff;
class UScriptStruct* FInertializationPoseDiff::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InertializationPoseDiff.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InertializationPoseDiff.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInertializationPoseDiff, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("InertializationPoseDiff"));
	}
	return Z_Registration_Info_UScriptStruct_InertializationPoseDiff.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInertializationPoseDiff>()
{
	return FInertializationPoseDiff::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInertializationPoseDiff_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInertializationPoseDiff_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_Inertialization.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInertializationPoseDiff_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInertializationPoseDiff>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInertializationPoseDiff_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"InertializationPoseDiff",
		sizeof(FInertializationPoseDiff),
		alignof(FInertializationPoseDiff),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInertializationPoseDiff_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInertializationPoseDiff_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInertializationPoseDiff()
	{
		if (!Z_Registration_Info_UScriptStruct_InertializationPoseDiff.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InertializationPoseDiff.InnerSingleton, Z_Construct_UScriptStruct_FInertializationPoseDiff_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InertializationPoseDiff.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimNode_Inertialization>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_Inertialization cannot be polymorphic unless super FAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_Inertialization;
class UScriptStruct* FAnimNode_Inertialization::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_Inertialization.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_Inertialization.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Inertialization, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_Inertialization"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_Inertialization.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNode_Inertialization>()
{
	return FAnimNode_Inertialization::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBlendProfile_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultBlendProfile;
		static const UECodeGen_Private::FNamePropertyParams NewProp_FilteredCurves_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilteredCurves_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FilteredCurves;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RequestQueue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequestQueue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RequestQueue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_Inertialization.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_Inertialization>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewProp_Source_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_Inertialization.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_Inertialization, Source), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewProp_Source_MetaData)) }; // 2393943538
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewProp_DefaultBlendProfile_MetaData[] = {
		{ "Category", "BlendProfile" },
		{ "Comment", "// Optional default blend profile to use when no blend profile is supplied with the inertialization request\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_Inertialization.h" },
		{ "ToolTip", "Optional default blend profile to use when no blend profile is supplied with the inertialization request" },
		{ "UseAsBlendProfile", "TRUE" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewProp_DefaultBlendProfile = { "DefaultBlendProfile", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_Inertialization, DefaultBlendProfile), Z_Construct_UClass_UBlendProfile_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewProp_DefaultBlendProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewProp_DefaultBlendProfile_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewProp_FilteredCurves_Inner = { "FilteredCurves", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewProp_FilteredCurves_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "// List of curves that should not use inertial blending. These curves will instantly change when inertialization begins.\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_Inertialization.h" },
		{ "ToolTip", "List of curves that should not use inertial blending. These curves will instantly change when inertialization begins." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewProp_FilteredCurves = { "FilteredCurves", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_Inertialization, FilteredCurves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewProp_FilteredCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewProp_FilteredCurves_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewProp_RequestQueue_Inner = { "RequestQueue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FInertializationRequest, METADATA_PARAMS(nullptr, 0) }; // 3769879138
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewProp_RequestQueue_MetaData[] = {
		{ "Comment", "// Pending inertialization requests\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_Inertialization.h" },
		{ "ToolTip", "Pending inertialization requests" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewProp_RequestQueue = { "RequestQueue", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_Inertialization, RequestQueue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewProp_RequestQueue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewProp_RequestQueue_MetaData)) }; // 3769879138
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewProp_Source,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewProp_DefaultBlendProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewProp_FilteredCurves_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewProp_FilteredCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewProp_RequestQueue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewProp_RequestQueue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_Inertialization",
		sizeof(FAnimNode_Inertialization),
		alignof(FAnimNode_Inertialization),
		Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Inertialization()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_Inertialization.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_Inertialization.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_Inertialization.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_Inertialization_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_Inertialization_h_Statics::EnumInfo[] = {
		{ EInertializationState_StaticEnum, TEXT("EInertializationState"), &Z_Registration_Info_UEnum_EInertializationState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 146389086U) },
		{ EInertializationBoneState_StaticEnum, TEXT("EInertializationBoneState"), &Z_Registration_Info_UEnum_EInertializationBoneState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 586533543U) },
		{ EInertializationSpace_StaticEnum, TEXT("EInertializationSpace"), &Z_Registration_Info_UEnum_EInertializationSpace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2489194917U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_Inertialization_h_Statics::ScriptStructInfo[] = {
		{ FInertializationRequest::StaticStruct, Z_Construct_UScriptStruct_FInertializationRequest_Statics::NewStructOps, TEXT("InertializationRequest"), &Z_Registration_Info_UScriptStruct_InertializationRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInertializationRequest), 3769879138U) },
		{ FInertializationPose::StaticStruct, Z_Construct_UScriptStruct_FInertializationPose_Statics::NewStructOps, TEXT("InertializationPose"), &Z_Registration_Info_UScriptStruct_InertializationPose, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInertializationPose), 122190378U) },
		{ FInertializationBoneDiff::StaticStruct, Z_Construct_UScriptStruct_FInertializationBoneDiff_Statics::NewStructOps, TEXT("InertializationBoneDiff"), &Z_Registration_Info_UScriptStruct_InertializationBoneDiff, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInertializationBoneDiff), 4091919025U) },
		{ FInertializationCurveDiff::StaticStruct, Z_Construct_UScriptStruct_FInertializationCurveDiff_Statics::NewStructOps, TEXT("InertializationCurveDiff"), &Z_Registration_Info_UScriptStruct_InertializationCurveDiff, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInertializationCurveDiff), 735677300U) },
		{ FInertializationPoseDiff::StaticStruct, Z_Construct_UScriptStruct_FInertializationPoseDiff_Statics::NewStructOps, TEXT("InertializationPoseDiff"), &Z_Registration_Info_UScriptStruct_InertializationPoseDiff, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInertializationPoseDiff), 691118419U) },
		{ FAnimNode_Inertialization::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewStructOps, TEXT("AnimNode_Inertialization"), &Z_Registration_Info_UScriptStruct_AnimNode_Inertialization, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_Inertialization), 1784068185U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_Inertialization_h_3005522642(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_Inertialization_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_Inertialization_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_Inertialization_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_Inertialization_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
