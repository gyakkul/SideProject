// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusHandComponent.h"
#include "OculusInputFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusHandComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPoseableMeshComponent();
	OCULUSINPUT_API UClass* Z_Construct_UClass_UDEPRECATED_UOculusHandComponent();
	OCULUSINPUT_API UClass* Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_NoRegister();
	OCULUSINPUT_API UEnum* Z_Construct_UEnum_OculusInput_EBone();
	OCULUSINPUT_API UEnum* Z_Construct_UEnum_OculusInput_EConfidenceBehavior();
	OCULUSINPUT_API UEnum* Z_Construct_UEnum_OculusInput_EOculusHandType();
	OCULUSINPUT_API UEnum* Z_Construct_UEnum_OculusInput_ESystemGestureBehavior();
	OCULUSINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FOculusCapsuleCollider();
	UPackage* Z_Construct_UPackage__Script_OculusInput();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConfidenceBehavior;
	static UEnum* EConfidenceBehavior_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EConfidenceBehavior.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EConfidenceBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusInput_EConfidenceBehavior, (UObject*)Z_Construct_UPackage__Script_OculusInput(), TEXT("EConfidenceBehavior"));
		}
		return Z_Registration_Info_UEnum_EConfidenceBehavior.OuterSingleton;
	}
	template<> OCULUSINPUT_API UEnum* StaticEnum<EConfidenceBehavior>()
	{
		return EConfidenceBehavior_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusInput_EConfidenceBehavior_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusInput_EConfidenceBehavior_Statics::Enumerators[] = {
		{ "EConfidenceBehavior::None", (int64)EConfidenceBehavior::None },
		{ "EConfidenceBehavior::HideActor", (int64)EConfidenceBehavior::HideActor },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusInput_EConfidenceBehavior_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideActor.Name", "EConfidenceBehavior::HideActor" },
		{ "ModuleRelativePath", "Public/OculusHandComponent.h" },
		{ "None.Name", "EConfidenceBehavior::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusInput_EConfidenceBehavior_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusInput,
		nullptr,
		"EConfidenceBehavior",
		"EConfidenceBehavior",
		Z_Construct_UEnum_OculusInput_EConfidenceBehavior_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInput_EConfidenceBehavior_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OculusInput_EConfidenceBehavior_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInput_EConfidenceBehavior_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OculusInput_EConfidenceBehavior()
	{
		if (!Z_Registration_Info_UEnum_EConfidenceBehavior.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConfidenceBehavior.InnerSingleton, Z_Construct_UEnum_OculusInput_EConfidenceBehavior_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EConfidenceBehavior.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESystemGestureBehavior;
	static UEnum* ESystemGestureBehavior_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESystemGestureBehavior.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESystemGestureBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusInput_ESystemGestureBehavior, (UObject*)Z_Construct_UPackage__Script_OculusInput(), TEXT("ESystemGestureBehavior"));
		}
		return Z_Registration_Info_UEnum_ESystemGestureBehavior.OuterSingleton;
	}
	template<> OCULUSINPUT_API UEnum* StaticEnum<ESystemGestureBehavior>()
	{
		return ESystemGestureBehavior_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusInput_ESystemGestureBehavior_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusInput_ESystemGestureBehavior_Statics::Enumerators[] = {
		{ "ESystemGestureBehavior::None", (int64)ESystemGestureBehavior::None },
		{ "ESystemGestureBehavior::SwapMaterial", (int64)ESystemGestureBehavior::SwapMaterial },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusInput_ESystemGestureBehavior_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusHandComponent.h" },
		{ "None.Name", "ESystemGestureBehavior::None" },
		{ "SwapMaterial.Name", "ESystemGestureBehavior::SwapMaterial" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusInput_ESystemGestureBehavior_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusInput,
		nullptr,
		"ESystemGestureBehavior",
		"ESystemGestureBehavior",
		Z_Construct_UEnum_OculusInput_ESystemGestureBehavior_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInput_ESystemGestureBehavior_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OculusInput_ESystemGestureBehavior_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInput_ESystemGestureBehavior_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OculusInput_ESystemGestureBehavior()
	{
		if (!Z_Registration_Info_UEnum_ESystemGestureBehavior.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESystemGestureBehavior.InnerSingleton, Z_Construct_UEnum_OculusInput_ESystemGestureBehavior_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESystemGestureBehavior.InnerSingleton;
	}
	void UDEPRECATED_UOculusHandComponent::StaticRegisterNativesUDEPRECATED_UOculusHandComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_UOculusHandComponent);
	UClass* Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_NoRegister()
	{
		return UDEPRECATED_UOculusHandComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SkeletonType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletonType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SkeletonType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MeshType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MeshType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ConfidenceBehavior_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConfidenceBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ConfidenceBehavior;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SystemGestureBehavior_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SystemGestureBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SystemGestureBehavior;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SystemGestureMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SystemGestureMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInitializePhysics_MetaData[];
#endif
		static void NewProp_bInitializePhysics_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitializePhysics;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateHandScale_MetaData[];
#endif
		static void NewProp_bUpdateHandScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateHandScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialOverride_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MaterialOverride;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneNameMappings_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BoneNameMappings_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BoneNameMappings_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneNameMappings_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_BoneNameMappings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionCapsules_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionCapsules_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CollisionCapsules;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSkeletalMeshInitialized_MetaData[];
#endif
		static void NewProp_bSkeletalMeshInitialized_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkeletalMeshInitialized;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPoseableMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusInput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "OculusHand" },
		{ "DeprecationMessage", "OculusVR plugin is deprecated; please use the built-in OpenXR plugin or OculusXR plugin from the Marketplace." },
		{ "HideCategories", "Object Physics Object Mobility Trigger" },
		{ "IncludePath", "OculusHandComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OculusHandComponent.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_SkeletonType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_SkeletonType_MetaData[] = {
		{ "Category", "HandProperties" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/OculusHandComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_SkeletonType = { "SkeletonType", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_UOculusHandComponent, SkeletonType), Z_Construct_UEnum_OculusInput_EOculusHandType, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_SkeletonType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_SkeletonType_MetaData)) }; // 654979220
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_MeshType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_MeshType_MetaData[] = {
		{ "Category", "HandProperties" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/OculusHandComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_MeshType = { "MeshType", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_UOculusHandComponent, MeshType), Z_Construct_UEnum_OculusInput_EOculusHandType, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_MeshType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_MeshType_MetaData)) }; // 654979220
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_ConfidenceBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_ConfidenceBehavior_MetaData[] = {
		{ "Category", "HandProperties" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/OculusHandComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_ConfidenceBehavior = { "ConfidenceBehavior", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_UOculusHandComponent, ConfidenceBehavior), Z_Construct_UEnum_OculusInput_EConfidenceBehavior, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_ConfidenceBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_ConfidenceBehavior_MetaData)) }; // 2284526037
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_SystemGestureBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_SystemGestureBehavior_MetaData[] = {
		{ "Category", "HandProperties" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/OculusHandComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_SystemGestureBehavior = { "SystemGestureBehavior", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_UOculusHandComponent, SystemGestureBehavior), Z_Construct_UEnum_OculusInput_ESystemGestureBehavior, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_SystemGestureBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_SystemGestureBehavior_MetaData)) }; // 1934400442
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_SystemGestureMaterial_MetaData[] = {
		{ "Category", "HandProperties" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/OculusHandComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_SystemGestureMaterial = { "SystemGestureMaterial", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_UOculusHandComponent, SystemGestureMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_SystemGestureMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_SystemGestureMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_bInitializePhysics_MetaData[] = {
		{ "Category", "HandProperties" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/OculusHandComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_bInitializePhysics_SetBit(void* Obj)
	{
		((UDEPRECATED_UOculusHandComponent*)Obj)->bInitializePhysics = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_bInitializePhysics = { "bInitializePhysics", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDEPRECATED_UOculusHandComponent), &Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_bInitializePhysics_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_bInitializePhysics_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_bInitializePhysics_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_bUpdateHandScale_MetaData[] = {
		{ "Category", "HandProperties" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/OculusHandComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_bUpdateHandScale_SetBit(void* Obj)
	{
		((UDEPRECATED_UOculusHandComponent*)Obj)->bUpdateHandScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_bUpdateHandScale = { "bUpdateHandScale", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDEPRECATED_UOculusHandComponent), &Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_bUpdateHandScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_bUpdateHandScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_bUpdateHandScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_MaterialOverride_MetaData[] = {
		{ "Category", "HandProperties" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/OculusHandComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_MaterialOverride = { "MaterialOverride", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_UOculusHandComponent, MaterialOverride), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_MaterialOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_MaterialOverride_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_BoneNameMappings_ValueProp = { "BoneNameMappings", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_BoneNameMappings_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_BoneNameMappings_Key_KeyProp = { "BoneNameMappings_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_OculusInput_EBone, METADATA_PARAMS(nullptr, 0) }; // 2701116118
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_BoneNameMappings_MetaData[] = {
		{ "Category", "CustomSkeletalMesh" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/OculusHandComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_BoneNameMappings = { "BoneNameMappings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_UOculusHandComponent, BoneNameMappings), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_BoneNameMappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_BoneNameMappings_MetaData)) }; // 2701116118
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_CollisionCapsules_Inner = { "CollisionCapsules", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FOculusCapsuleCollider, METADATA_PARAMS(nullptr, 0) }; // 3643888970
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_CollisionCapsules_MetaData[] = {
		{ "Category", "HandProperties" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/OculusHandComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_CollisionCapsules = { "CollisionCapsules", nullptr, (EPropertyFlags)0x0010008000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_UOculusHandComponent, CollisionCapsules), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_CollisionCapsules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_CollisionCapsules_MetaData)) }; // 3643888970
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_bSkeletalMeshInitialized_MetaData[] = {
		{ "Category", "HandProperties" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/OculusHandComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_bSkeletalMeshInitialized_SetBit(void* Obj)
	{
		((UDEPRECATED_UOculusHandComponent*)Obj)->bSkeletalMeshInitialized = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_bSkeletalMeshInitialized = { "bSkeletalMeshInitialized", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDEPRECATED_UOculusHandComponent), &Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_bSkeletalMeshInitialized_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_bSkeletalMeshInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_bSkeletalMeshInitialized_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_SkeletonType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_SkeletonType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_MeshType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_MeshType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_ConfidenceBehavior_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_ConfidenceBehavior,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_SystemGestureBehavior_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_SystemGestureBehavior,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_SystemGestureMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_bInitializePhysics,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_bUpdateHandScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_MaterialOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_BoneNameMappings_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_BoneNameMappings_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_BoneNameMappings_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_BoneNameMappings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_CollisionCapsules_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_CollisionCapsules,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::NewProp_bSkeletalMeshInitialized,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_UOculusHandComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::ClassParams = {
		&UDEPRECATED_UOculusHandComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::PropPointers),
		0,
		0x02B012A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_UOculusHandComponent()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_UOculusHandComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_UOculusHandComponent.OuterSingleton, Z_Construct_UClass_UDEPRECATED_UOculusHandComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_UOculusHandComponent.OuterSingleton;
	}
	template<> OCULUSINPUT_API UClass* StaticClass<UDEPRECATED_UOculusHandComponent>()
	{
		return UDEPRECATED_UOculusHandComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_UOculusHandComponent);
	UDEPRECATED_UOculusHandComponent::~UDEPRECATED_UOculusHandComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusInput_Public_OculusHandComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusInput_Public_OculusHandComponent_h_Statics::EnumInfo[] = {
		{ EConfidenceBehavior_StaticEnum, TEXT("EConfidenceBehavior"), &Z_Registration_Info_UEnum_EConfidenceBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2284526037U) },
		{ ESystemGestureBehavior_StaticEnum, TEXT("ESystemGestureBehavior"), &Z_Registration_Info_UEnum_ESystemGestureBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1934400442U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusInput_Public_OculusHandComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_UOculusHandComponent, UDEPRECATED_UOculusHandComponent::StaticClass, TEXT("UDEPRECATED_UOculusHandComponent"), &Z_Registration_Info_UClass_UDEPRECATED_UOculusHandComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_UOculusHandComponent), 1535193452U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusInput_Public_OculusHandComponent_h_621973130(TEXT("/Script/OculusInput"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusInput_Public_OculusHandComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusInput_Public_OculusHandComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusInput_Public_OculusHandComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusInput_Public_OculusHandComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
