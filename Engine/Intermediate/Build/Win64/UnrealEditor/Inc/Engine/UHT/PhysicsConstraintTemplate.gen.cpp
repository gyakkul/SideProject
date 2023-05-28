// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintTemplate.h"
#include "../../Source/Runtime/Engine/Classes/PhysicsEngine/ConstraintInstance.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsConstraintTemplate() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsConstraintTemplate();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsConstraintTemplate_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintInstance();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintProfileProperties();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EAngularConstraintMotion();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_ELinearConstraintMotion();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PhysicsConstraintProfileHandle;
class UScriptStruct* FPhysicsConstraintProfileHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PhysicsConstraintProfileHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PhysicsConstraintProfileHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PhysicsConstraintProfileHandle"));
	}
	return Z_Registration_Info_UScriptStruct_PhysicsConstraintProfileHandle.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPhysicsConstraintProfileHandle>()
{
	return FPhysicsConstraintProfileHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProfileProperties_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProfileProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProfileName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ProfileName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhysicsConstraintProfileHandle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle_Statics::NewProp_ProfileProperties_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle_Statics::NewProp_ProfileProperties = { "ProfileProperties", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsConstraintProfileHandle, ProfileProperties), Z_Construct_UScriptStruct_FConstraintProfileProperties, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle_Statics::NewProp_ProfileProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle_Statics::NewProp_ProfileProperties_MetaData)) }; // 2415750098
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle_Statics::NewProp_ProfileName_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle_Statics::NewProp_ProfileName = { "ProfileName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsConstraintProfileHandle, ProfileName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle_Statics::NewProp_ProfileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle_Statics::NewProp_ProfileName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle_Statics::NewProp_ProfileProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle_Statics::NewProp_ProfileName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PhysicsConstraintProfileHandle",
		sizeof(FPhysicsConstraintProfileHandle),
		alignof(FPhysicsConstraintProfileHandle),
		Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_PhysicsConstraintProfileHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PhysicsConstraintProfileHandle.InnerSingleton, Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PhysicsConstraintProfileHandle.InnerSingleton;
	}
	void UPhysicsConstraintTemplate::StaticRegisterNativesUPhysicsConstraintTemplate()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhysicsConstraintTemplate);
	UClass* Z_Construct_UClass_UPhysicsConstraintTemplate_NoRegister()
	{
		return UPhysicsConstraintTemplate::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicsConstraintTemplate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultInstance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultInstance;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProfileHandles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProfileHandles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ProfileHandles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultProfile_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultProfile;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JointName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_JointName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintBone1_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ConstraintBone1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintBone2_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ConstraintBone2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pos1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pos1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PriAxis1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PriAxis1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecAxis1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SecAxis1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pos2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pos2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PriAxis2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PriAxis2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecAxis2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SecAxis2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableProjection_MetaData[];
#endif
		static void NewProp_bEnableProjection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableProjection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionLinearTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectionLinearTolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionAngularTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectionAngularTolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearXMotion_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LinearXMotion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearYMotion_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LinearYMotion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearZMotion_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LinearZMotion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearLimitSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearLimitSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLinearLimitSoft_MetaData[];
#endif
		static void NewProp_bLinearLimitSoft_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLinearLimitSoft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearLimitStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearLimitStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearLimitDamping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearLimitDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLinearBreakable_MetaData[];
#endif
		static void NewProp_bLinearBreakable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLinearBreakable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearBreakThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearBreakThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularSwing1Motion_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AngularSwing1Motion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularSwing2Motion_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AngularSwing2Motion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularTwistMotion_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AngularTwistMotion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSwingLimitSoft_MetaData[];
#endif
		static void NewProp_bSwingLimitSoft_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSwingLimitSoft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTwistLimitSoft_MetaData[];
#endif
		static void NewProp_bTwistLimitSoft_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTwistLimitSoft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Swing1LimitAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Swing1LimitAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Swing2LimitAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Swing2LimitAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TwistLimitAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TwistLimitAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwingLimitStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SwingLimitStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwingLimitDamping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SwingLimitDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TwistLimitStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TwistLimitStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TwistLimitDamping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TwistLimitDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAngularBreakable_MetaData[];
#endif
		static void NewProp_bAngularBreakable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAngularBreakable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularBreakThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularBreakThreshold;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "PhysicsEngine/PhysicsConstraintTemplate.h" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_DefaultInstance_MetaData[] = {
		{ "Category", "Joint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_DefaultInstance = { "DefaultInstance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, DefaultInstance), Z_Construct_UScriptStruct_FConstraintInstance, METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_DefaultInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_DefaultInstance_MetaData)) }; // 1781052059
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_ProfileHandles_Inner = { "ProfileHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle, METADATA_PARAMS(nullptr, 0) }; // 2777021193
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_ProfileHandles_MetaData[] = {
		{ "Comment", "/** Handles to the constraint profiles applicable to this constraint*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
		{ "ToolTip", "Handles to the constraint profiles applicable to this constraint" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_ProfileHandles = { "ProfileHandles", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, ProfileHandles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_ProfileHandles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_ProfileHandles_MetaData)) }; // 2777021193
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_DefaultProfile_MetaData[] = {
		{ "Comment", "/** When no profile is selected, use these settings. Only needed in editor as we serialize it into DefaultInstance on save*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
		{ "ToolTip", "When no profile is selected, use these settings. Only needed in editor as we serialize it into DefaultInstance on save" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_DefaultProfile = { "DefaultProfile", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, DefaultProfile), Z_Construct_UScriptStruct_FConstraintProfileProperties, METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_DefaultProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_DefaultProfile_MetaData)) }; // 2415750098
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_JointName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_JointName = { "JointName", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, JointName_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_JointName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_JointName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_ConstraintBone1_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_ConstraintBone1 = { "ConstraintBone1", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, ConstraintBone1_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_ConstraintBone1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_ConstraintBone1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_ConstraintBone2_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_ConstraintBone2 = { "ConstraintBone2", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, ConstraintBone2_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_ConstraintBone2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_ConstraintBone2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_Pos1_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_Pos1 = { "Pos1", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, Pos1_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_Pos1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_Pos1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_PriAxis1_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_PriAxis1 = { "PriAxis1", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, PriAxis1_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_PriAxis1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_PriAxis1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_SecAxis1_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_SecAxis1 = { "SecAxis1", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, SecAxis1_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_SecAxis1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_SecAxis1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_Pos2_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_Pos2 = { "Pos2", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, Pos2_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_Pos2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_Pos2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_PriAxis2_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_PriAxis2 = { "PriAxis2", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, PriAxis2_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_PriAxis2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_PriAxis2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_SecAxis2_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_SecAxis2 = { "SecAxis2", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, SecAxis2_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_SecAxis2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_SecAxis2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bEnableProjection_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	void Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bEnableProjection_SetBit(void* Obj)
	{
		((UPhysicsConstraintTemplate*)Obj)->bEnableProjection_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bEnableProjection = { "bEnableProjection", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UPhysicsConstraintTemplate), &Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bEnableProjection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bEnableProjection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bEnableProjection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_ProjectionLinearTolerance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_ProjectionLinearTolerance = { "ProjectionLinearTolerance", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, ProjectionLinearTolerance_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_ProjectionLinearTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_ProjectionLinearTolerance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_ProjectionAngularTolerance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_ProjectionAngularTolerance = { "ProjectionAngularTolerance", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, ProjectionAngularTolerance_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_ProjectionAngularTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_ProjectionAngularTolerance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearXMotion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearXMotion = { "LinearXMotion", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, LinearXMotion_DEPRECATED), Z_Construct_UEnum_PhysicsCore_ELinearConstraintMotion, METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearXMotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearXMotion_MetaData)) }; // 266339221
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearYMotion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearYMotion = { "LinearYMotion", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, LinearYMotion_DEPRECATED), Z_Construct_UEnum_PhysicsCore_ELinearConstraintMotion, METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearYMotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearYMotion_MetaData)) }; // 266339221
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearZMotion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearZMotion = { "LinearZMotion", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, LinearZMotion_DEPRECATED), Z_Construct_UEnum_PhysicsCore_ELinearConstraintMotion, METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearZMotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearZMotion_MetaData)) }; // 266339221
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearLimitSize_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearLimitSize = { "LinearLimitSize", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, LinearLimitSize_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearLimitSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearLimitSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bLinearLimitSoft_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	void Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bLinearLimitSoft_SetBit(void* Obj)
	{
		((UPhysicsConstraintTemplate*)Obj)->bLinearLimitSoft_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bLinearLimitSoft = { "bLinearLimitSoft", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UPhysicsConstraintTemplate), &Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bLinearLimitSoft_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bLinearLimitSoft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bLinearLimitSoft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearLimitStiffness_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearLimitStiffness = { "LinearLimitStiffness", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, LinearLimitStiffness_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearLimitStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearLimitStiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearLimitDamping_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearLimitDamping = { "LinearLimitDamping", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, LinearLimitDamping_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearLimitDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearLimitDamping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bLinearBreakable_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	void Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bLinearBreakable_SetBit(void* Obj)
	{
		((UPhysicsConstraintTemplate*)Obj)->bLinearBreakable_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bLinearBreakable = { "bLinearBreakable", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UPhysicsConstraintTemplate), &Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bLinearBreakable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bLinearBreakable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bLinearBreakable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearBreakThreshold_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearBreakThreshold = { "LinearBreakThreshold", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, LinearBreakThreshold_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearBreakThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearBreakThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_AngularSwing1Motion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_AngularSwing1Motion = { "AngularSwing1Motion", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, AngularSwing1Motion_DEPRECATED), Z_Construct_UEnum_PhysicsCore_EAngularConstraintMotion, METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_AngularSwing1Motion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_AngularSwing1Motion_MetaData)) }; // 2540577704
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_AngularSwing2Motion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_AngularSwing2Motion = { "AngularSwing2Motion", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, AngularSwing2Motion_DEPRECATED), Z_Construct_UEnum_PhysicsCore_EAngularConstraintMotion, METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_AngularSwing2Motion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_AngularSwing2Motion_MetaData)) }; // 2540577704
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_AngularTwistMotion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_AngularTwistMotion = { "AngularTwistMotion", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, AngularTwistMotion_DEPRECATED), Z_Construct_UEnum_PhysicsCore_EAngularConstraintMotion, METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_AngularTwistMotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_AngularTwistMotion_MetaData)) }; // 2540577704
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bSwingLimitSoft_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	void Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bSwingLimitSoft_SetBit(void* Obj)
	{
		((UPhysicsConstraintTemplate*)Obj)->bSwingLimitSoft_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bSwingLimitSoft = { "bSwingLimitSoft", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UPhysicsConstraintTemplate), &Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bSwingLimitSoft_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bSwingLimitSoft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bSwingLimitSoft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bTwistLimitSoft_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	void Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bTwistLimitSoft_SetBit(void* Obj)
	{
		((UPhysicsConstraintTemplate*)Obj)->bTwistLimitSoft_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bTwistLimitSoft = { "bTwistLimitSoft", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UPhysicsConstraintTemplate), &Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bTwistLimitSoft_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bTwistLimitSoft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bTwistLimitSoft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_Swing1LimitAngle_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_Swing1LimitAngle = { "Swing1LimitAngle", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, Swing1LimitAngle_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_Swing1LimitAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_Swing1LimitAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_Swing2LimitAngle_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_Swing2LimitAngle = { "Swing2LimitAngle", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, Swing2LimitAngle_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_Swing2LimitAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_Swing2LimitAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_TwistLimitAngle_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_TwistLimitAngle = { "TwistLimitAngle", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, TwistLimitAngle_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_TwistLimitAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_TwistLimitAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_SwingLimitStiffness_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_SwingLimitStiffness = { "SwingLimitStiffness", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, SwingLimitStiffness_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_SwingLimitStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_SwingLimitStiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_SwingLimitDamping_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_SwingLimitDamping = { "SwingLimitDamping", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, SwingLimitDamping_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_SwingLimitDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_SwingLimitDamping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_TwistLimitStiffness_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_TwistLimitStiffness = { "TwistLimitStiffness", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, TwistLimitStiffness_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_TwistLimitStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_TwistLimitStiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_TwistLimitDamping_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_TwistLimitDamping = { "TwistLimitDamping", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, TwistLimitDamping_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_TwistLimitDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_TwistLimitDamping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bAngularBreakable_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	void Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bAngularBreakable_SetBit(void* Obj)
	{
		((UPhysicsConstraintTemplate*)Obj)->bAngularBreakable_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bAngularBreakable = { "bAngularBreakable", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UPhysicsConstraintTemplate), &Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bAngularBreakable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bAngularBreakable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bAngularBreakable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_AngularBreakThreshold_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_AngularBreakThreshold = { "AngularBreakThreshold", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, AngularBreakThreshold_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_AngularBreakThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_AngularBreakThreshold_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_DefaultInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_ProfileHandles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_ProfileHandles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_DefaultProfile,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_JointName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_ConstraintBone1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_ConstraintBone2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_Pos1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_PriAxis1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_SecAxis1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_Pos2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_PriAxis2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_SecAxis2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bEnableProjection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_ProjectionLinearTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_ProjectionAngularTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearXMotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearYMotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearZMotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearLimitSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bLinearLimitSoft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearLimitStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearLimitDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bLinearBreakable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearBreakThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_AngularSwing1Motion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_AngularSwing2Motion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_AngularTwistMotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bSwingLimitSoft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bTwistLimitSoft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_Swing1LimitAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_Swing2LimitAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_TwistLimitAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_SwingLimitStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_SwingLimitDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_TwistLimitStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_TwistLimitDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bAngularBreakable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_AngularBreakThreshold,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsConstraintTemplate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::ClassParams = {
		&UPhysicsConstraintTemplate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhysicsConstraintTemplate()
	{
		if (!Z_Registration_Info_UClass_UPhysicsConstraintTemplate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhysicsConstraintTemplate.OuterSingleton, Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPhysicsConstraintTemplate.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UPhysicsConstraintTemplate>()
	{
		return UPhysicsConstraintTemplate::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsConstraintTemplate);
	UPhysicsConstraintTemplate::~UPhysicsConstraintTemplate() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPhysicsConstraintTemplate)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintTemplate_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintTemplate_h_Statics::ScriptStructInfo[] = {
		{ FPhysicsConstraintProfileHandle::StaticStruct, Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle_Statics::NewStructOps, TEXT("PhysicsConstraintProfileHandle"), &Z_Registration_Info_UScriptStruct_PhysicsConstraintProfileHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPhysicsConstraintProfileHandle), 2777021193U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintTemplate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPhysicsConstraintTemplate, UPhysicsConstraintTemplate::StaticClass, TEXT("UPhysicsConstraintTemplate"), &Z_Registration_Info_UClass_UPhysicsConstraintTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhysicsConstraintTemplate), 3499816894U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintTemplate_h_1783490804(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintTemplate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintTemplate_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintTemplate_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
