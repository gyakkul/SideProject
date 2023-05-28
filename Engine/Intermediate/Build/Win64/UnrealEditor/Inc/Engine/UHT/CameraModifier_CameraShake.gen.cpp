// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraModifier_CameraShake() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UCameraModifier();
	ENGINE_API UClass* Z_Construct_UClass_UCameraModifier_CameraShake();
	ENGINE_API UClass* Z_Construct_UClass_UCameraModifier_CameraShake_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeSourceComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActiveCameraShakeInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPooledCameraShakes();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PooledCameraShakes;
class UScriptStruct* FPooledCameraShakes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PooledCameraShakes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PooledCameraShakes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPooledCameraShakes, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PooledCameraShakes"));
	}
	return Z_Registration_Info_UScriptStruct_PooledCameraShakes.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPooledCameraShakes>()
{
	return FPooledCameraShakes::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPooledCameraShakes_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PooledShakes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PooledShakes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PooledShakes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPooledCameraShakes_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * List of reusable camera shake instances that we store in a recycling pool.\n */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier_CameraShake.h" },
		{ "ToolTip", "List of reusable camera shake instances that we store in a recycling pool." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPooledCameraShakes_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPooledCameraShakes>();
	}
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPooledCameraShakes_Statics::NewProp_PooledShakes_Inner = { "PooledShakes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPooledCameraShakes_Statics::NewProp_PooledShakes_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier_CameraShake.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPooledCameraShakes_Statics::NewProp_PooledShakes = { "PooledShakes", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPooledCameraShakes, PooledShakes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPooledCameraShakes_Statics::NewProp_PooledShakes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPooledCameraShakes_Statics::NewProp_PooledShakes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPooledCameraShakes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPooledCameraShakes_Statics::NewProp_PooledShakes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPooledCameraShakes_Statics::NewProp_PooledShakes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPooledCameraShakes_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PooledCameraShakes",
		sizeof(FPooledCameraShakes),
		alignof(FPooledCameraShakes),
		Z_Construct_UScriptStruct_FPooledCameraShakes_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPooledCameraShakes_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPooledCameraShakes_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPooledCameraShakes_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPooledCameraShakes()
	{
		if (!Z_Registration_Info_UScriptStruct_PooledCameraShakes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PooledCameraShakes.InnerSingleton, Z_Construct_UScriptStruct_FPooledCameraShakes_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PooledCameraShakes.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActiveCameraShakeInfo;
class UScriptStruct* FActiveCameraShakeInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActiveCameraShakeInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActiveCameraShakeInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActiveCameraShakeInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ActiveCameraShakeInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ActiveCameraShakeInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FActiveCameraShakeInfo>()
{
	return FActiveCameraShakeInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShakeInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ShakeInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShakeSource_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ShakeSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCustomInitialized_MetaData[];
#endif
		static void NewProp_bIsCustomInitialized_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCustomInitialized;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Information about an active camera shake.\n */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier_CameraShake.h" },
		{ "ToolTip", "Information about an active camera shake." },
	};
#endif
	void* Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActiveCameraShakeInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Statics::NewProp_ShakeInstance_MetaData[] = {
		{ "Comment", "/** The camera shake instance currently running */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier_CameraShake.h" },
		{ "ToolTip", "The camera shake instance currently running" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Statics::NewProp_ShakeInstance = { "ShakeInstance", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActiveCameraShakeInfo, ShakeInstance), Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Statics::NewProp_ShakeInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Statics::NewProp_ShakeInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Statics::NewProp_ShakeSource_MetaData[] = {
		{ "Comment", "/** An optional source that the shake is running from (otherwise it's global and un-attenuated) */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier_CameraShake.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "An optional source that the shake is running from (otherwise it's global and un-attenuated)" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Statics::NewProp_ShakeSource = { "ShakeSource", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActiveCameraShakeInfo, ShakeSource), Z_Construct_UClass_UCameraShakeSourceComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Statics::NewProp_ShakeSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Statics::NewProp_ShakeSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Statics::NewProp_bIsCustomInitialized_MetaData[] = {
		{ "Comment", "/** Whether the shake was initialized with some custom callback code */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier_CameraShake.h" },
		{ "ToolTip", "Whether the shake was initialized with some custom callback code" },
	};
#endif
	void Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Statics::NewProp_bIsCustomInitialized_SetBit(void* Obj)
	{
		((FActiveCameraShakeInfo*)Obj)->bIsCustomInitialized = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Statics::NewProp_bIsCustomInitialized = { "bIsCustomInitialized", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FActiveCameraShakeInfo), &Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Statics::NewProp_bIsCustomInitialized_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Statics::NewProp_bIsCustomInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Statics::NewProp_bIsCustomInitialized_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Statics::NewProp_ShakeInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Statics::NewProp_ShakeSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Statics::NewProp_bIsCustomInitialized,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ActiveCameraShakeInfo",
		sizeof(FActiveCameraShakeInfo),
		alignof(FActiveCameraShakeInfo),
		Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActiveCameraShakeInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_ActiveCameraShakeInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActiveCameraShakeInfo.InnerSingleton, Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ActiveCameraShakeInfo.InnerSingleton;
	}
	void UCameraModifier_CameraShake::StaticRegisterNativesUCameraModifier_CameraShake()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraModifier_CameraShake);
	UClass* Z_Construct_UClass_UCameraModifier_CameraShake_NoRegister()
	{
		return UCameraModifier_CameraShake::StaticClass();
	}
	struct Z_Construct_UClass_UCameraModifier_CameraShake_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveShakes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveShakes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveShakes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExpiredPooledShakesMap_ValueProp;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ExpiredPooledShakesMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpiredPooledShakesMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ExpiredPooledShakesMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplitScreenShakeScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SplitScreenShakeScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraModifier_CameraShake_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraModifier_CameraShake_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A UCameraModifier_CameraShake is a camera modifier that can apply a UCameraShakeBase to \n * the owning camera.\n */" },
		{ "IncludePath", "Camera/CameraModifier_CameraShake.h" },
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier_CameraShake.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A UCameraModifier_CameraShake is a camera modifier that can apply a UCameraShakeBase to\nthe owning camera." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_ActiveShakes_Inner = { "ActiveShakes", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FActiveCameraShakeInfo, METADATA_PARAMS(nullptr, 0) }; // 2998842364
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_ActiveShakes_MetaData[] = {
		{ "Comment", "/** List of active CameraShake instances */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier_CameraShake.h" },
		{ "ToolTip", "List of active CameraShake instances" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_ActiveShakes = { "ActiveShakes", nullptr, (EPropertyFlags)0x0020088000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraModifier_CameraShake, ActiveShakes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_ActiveShakes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_ActiveShakes_MetaData)) }; // 2998842364
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_ExpiredPooledShakesMap_ValueProp = { "ExpiredPooledShakesMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FPooledCameraShakes, METADATA_PARAMS(nullptr, 0) }; // 3760174386
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_ExpiredPooledShakesMap_Key_KeyProp = { "ExpiredPooledShakesMap_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_ExpiredPooledShakesMap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier_CameraShake.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_ExpiredPooledShakesMap = { "ExpiredPooledShakesMap", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraModifier_CameraShake, ExpiredPooledShakesMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_ExpiredPooledShakesMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_ExpiredPooledShakesMap_MetaData)) }; // 3760174386
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_SplitScreenShakeScale_MetaData[] = {
		{ "Category", "CameraModifier_CameraShake" },
		{ "Comment", "/** Scaling factor applied to all camera shakes in when in splitscreen mode. Normally used to reduce shaking, since shakes feel more intense in a smaller viewport. */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier_CameraShake.h" },
		{ "ToolTip", "Scaling factor applied to all camera shakes in when in splitscreen mode. Normally used to reduce shaking, since shakes feel more intense in a smaller viewport." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_SplitScreenShakeScale = { "SplitScreenShakeScale", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraModifier_CameraShake, SplitScreenShakeScale), METADATA_PARAMS(Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_SplitScreenShakeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_SplitScreenShakeScale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraModifier_CameraShake_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_ActiveShakes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_ActiveShakes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_ExpiredPooledShakesMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_ExpiredPooledShakesMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_ExpiredPooledShakesMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_SplitScreenShakeScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraModifier_CameraShake_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraModifier_CameraShake>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraModifier_CameraShake_Statics::ClassParams = {
		&UCameraModifier_CameraShake::StaticClass,
		"Camera",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCameraModifier_CameraShake_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCameraModifier_CameraShake_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCameraModifier_CameraShake_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraModifier_CameraShake_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCameraModifier_CameraShake()
	{
		if (!Z_Registration_Info_UClass_UCameraModifier_CameraShake.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraModifier_CameraShake.OuterSingleton, Z_Construct_UClass_UCameraModifier_CameraShake_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCameraModifier_CameraShake.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UCameraModifier_CameraShake>()
	{
		return UCameraModifier_CameraShake::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraModifier_CameraShake);
	UCameraModifier_CameraShake::~UCameraModifier_CameraShake() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h_Statics::ScriptStructInfo[] = {
		{ FPooledCameraShakes::StaticStruct, Z_Construct_UScriptStruct_FPooledCameraShakes_Statics::NewStructOps, TEXT("PooledCameraShakes"), &Z_Registration_Info_UScriptStruct_PooledCameraShakes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPooledCameraShakes), 3760174386U) },
		{ FActiveCameraShakeInfo::StaticStruct, Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Statics::NewStructOps, TEXT("ActiveCameraShakeInfo"), &Z_Registration_Info_UScriptStruct_ActiveCameraShakeInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActiveCameraShakeInfo), 2998842364U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCameraModifier_CameraShake, UCameraModifier_CameraShake::StaticClass, TEXT("UCameraModifier_CameraShake"), &Z_Registration_Info_UClass_UCameraModifier_CameraShake, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraModifier_CameraShake), 1414029811U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h_2698505065(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
