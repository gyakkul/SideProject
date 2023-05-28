// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/EditMode/ControlRigControlsProxy.h"
#include "EulerTransform.h"
#include "TransformNoScale.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigControlsProxy() {}
// Cross Module References
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEulerTransform();
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FTransformNoScale();
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRig_NoRegister();
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigBoolControlProxy();
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigBoolControlProxy_NoRegister();
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigControlsProxy();
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigControlsProxy_NoRegister();
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigDetailPanelControlProxies();
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigDetailPanelControlProxies_NoRegister();
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigEnumControlProxy();
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigEnumControlProxy_NoRegister();
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigEulerTransformControlProxy();
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigEulerTransformControlProxy_NoRegister();
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigFloatControlProxy();
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigFloatControlProxy_NoRegister();
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigIntegerControlProxy();
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigIntegerControlProxy_NoRegister();
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigTransformControlProxy();
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigTransformControlProxy_NoRegister();
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigTransformNoScaleControlProxy();
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigTransformNoScaleControlProxy_NoRegister();
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigVector2DControlProxy();
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigVector2DControlProxy_NoRegister();
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigVectorControlProxy();
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigVectorControlProxy_NoRegister();
	CONTROLRIGEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigEnumControlProxyValue();
	CONTROLRIGEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FControlToProxyMap();
	COREUOBJECT_API UClass* Z_Construct_UClass_UEnum();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
	UPackage* Z_Construct_UPackage__Script_ControlRigEditor();
// End Cross Module References
	void UControlRigControlsProxy::StaticRegisterNativesUControlRigControlsProxy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigControlsProxy);
	UClass* Z_Construct_UClass_UControlRigControlsProxy_NoRegister()
	{
		return UControlRigControlsProxy::StaticClass();
	}
	struct Z_Construct_UClass_UControlRigControlsProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSelected_MetaData[];
#endif
		static void NewProp_bSelected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControlRigControlsProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigControlsProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditMode/ControlRigControlsProxy.h" },
		{ "ModuleRelativePath", "Private/EditMode/ControlRigControlsProxy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigControlsProxy_Statics::NewProp_bSelected_MetaData[] = {
		{ "ModuleRelativePath", "Private/EditMode/ControlRigControlsProxy.h" },
	};
#endif
	void Z_Construct_UClass_UControlRigControlsProxy_Statics::NewProp_bSelected_SetBit(void* Obj)
	{
		((UControlRigControlsProxy*)Obj)->bSelected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlRigControlsProxy_Statics::NewProp_bSelected = { "bSelected", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UControlRigControlsProxy), &Z_Construct_UClass_UControlRigControlsProxy_Statics::NewProp_bSelected_SetBit, METADATA_PARAMS(Z_Construct_UClass_UControlRigControlsProxy_Statics::NewProp_bSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigControlsProxy_Statics::NewProp_bSelected_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigControlsProxy_Statics::NewProp_ControlName_MetaData[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Private/EditMode/ControlRigControlsProxy.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UControlRigControlsProxy_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigControlsProxy, ControlName), METADATA_PARAMS(Z_Construct_UClass_UControlRigControlsProxy_Statics::NewProp_ControlName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigControlsProxy_Statics::NewProp_ControlName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UControlRigControlsProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigControlsProxy_Statics::NewProp_bSelected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigControlsProxy_Statics::NewProp_ControlName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControlRigControlsProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigControlsProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigControlsProxy_Statics::ClassParams = {
		&UControlRigControlsProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UControlRigControlsProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigControlsProxy_Statics::PropPointers),
		0,
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UControlRigControlsProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigControlsProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UControlRigControlsProxy()
	{
		if (!Z_Registration_Info_UClass_UControlRigControlsProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigControlsProxy.OuterSingleton, Z_Construct_UClass_UControlRigControlsProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UControlRigControlsProxy.OuterSingleton;
	}
	template<> CONTROLRIGEDITOR_API UClass* StaticClass<UControlRigControlsProxy>()
	{
		return UControlRigControlsProxy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigControlsProxy);
	UControlRigControlsProxy::~UControlRigControlsProxy() {}
	void UControlRigTransformControlProxy::StaticRegisterNativesUControlRigTransformControlProxy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigTransformControlProxy);
	UClass* Z_Construct_UClass_UControlRigTransformControlProxy_NoRegister()
	{
		return UControlRigTransformControlProxy::StaticClass();
	}
	struct Z_Construct_UClass_UControlRigTransformControlProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControlRigTransformControlProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UControlRigControlsProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigTransformControlProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditMode/ControlRigControlsProxy.h" },
		{ "ModuleRelativePath", "Private/EditMode/ControlRigControlsProxy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigTransformControlProxy_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Private/EditMode/ControlRigControlsProxy.h" },
		{ "SliderExponent", "1.0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRigTransformControlProxy_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigTransformControlProxy, Transform), Z_Construct_UScriptStruct_FEulerTransform, METADATA_PARAMS(Z_Construct_UClass_UControlRigTransformControlProxy_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigTransformControlProxy_Statics::NewProp_Transform_MetaData)) }; // 3672886731
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UControlRigTransformControlProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigTransformControlProxy_Statics::NewProp_Transform,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControlRigTransformControlProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigTransformControlProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigTransformControlProxy_Statics::ClassParams = {
		&UControlRigTransformControlProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UControlRigTransformControlProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigTransformControlProxy_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UControlRigTransformControlProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigTransformControlProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UControlRigTransformControlProxy()
	{
		if (!Z_Registration_Info_UClass_UControlRigTransformControlProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigTransformControlProxy.OuterSingleton, Z_Construct_UClass_UControlRigTransformControlProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UControlRigTransformControlProxy.OuterSingleton;
	}
	template<> CONTROLRIGEDITOR_API UClass* StaticClass<UControlRigTransformControlProxy>()
	{
		return UControlRigTransformControlProxy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigTransformControlProxy);
	UControlRigTransformControlProxy::~UControlRigTransformControlProxy() {}
	void UControlRigEulerTransformControlProxy::StaticRegisterNativesUControlRigEulerTransformControlProxy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigEulerTransformControlProxy);
	UClass* Z_Construct_UClass_UControlRigEulerTransformControlProxy_NoRegister()
	{
		return UControlRigEulerTransformControlProxy::StaticClass();
	}
	struct Z_Construct_UClass_UControlRigEulerTransformControlProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControlRigEulerTransformControlProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UControlRigControlsProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigEulerTransformControlProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditMode/ControlRigControlsProxy.h" },
		{ "ModuleRelativePath", "Private/EditMode/ControlRigControlsProxy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigEulerTransformControlProxy_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Private/EditMode/ControlRigControlsProxy.h" },
		{ "SliderExponent", "1.0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRigEulerTransformControlProxy_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigEulerTransformControlProxy, Transform), Z_Construct_UScriptStruct_FEulerTransform, METADATA_PARAMS(Z_Construct_UClass_UControlRigEulerTransformControlProxy_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigEulerTransformControlProxy_Statics::NewProp_Transform_MetaData)) }; // 3672886731
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UControlRigEulerTransformControlProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigEulerTransformControlProxy_Statics::NewProp_Transform,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControlRigEulerTransformControlProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigEulerTransformControlProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigEulerTransformControlProxy_Statics::ClassParams = {
		&UControlRigEulerTransformControlProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UControlRigEulerTransformControlProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigEulerTransformControlProxy_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UControlRigEulerTransformControlProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigEulerTransformControlProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UControlRigEulerTransformControlProxy()
	{
		if (!Z_Registration_Info_UClass_UControlRigEulerTransformControlProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigEulerTransformControlProxy.OuterSingleton, Z_Construct_UClass_UControlRigEulerTransformControlProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UControlRigEulerTransformControlProxy.OuterSingleton;
	}
	template<> CONTROLRIGEDITOR_API UClass* StaticClass<UControlRigEulerTransformControlProxy>()
	{
		return UControlRigEulerTransformControlProxy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigEulerTransformControlProxy);
	UControlRigEulerTransformControlProxy::~UControlRigEulerTransformControlProxy() {}
	void UControlRigTransformNoScaleControlProxy::StaticRegisterNativesUControlRigTransformNoScaleControlProxy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigTransformNoScaleControlProxy);
	UClass* Z_Construct_UClass_UControlRigTransformNoScaleControlProxy_NoRegister()
	{
		return UControlRigTransformNoScaleControlProxy::StaticClass();
	}
	struct Z_Construct_UClass_UControlRigTransformNoScaleControlProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControlRigTransformNoScaleControlProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UControlRigControlsProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigTransformNoScaleControlProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditMode/ControlRigControlsProxy.h" },
		{ "ModuleRelativePath", "Private/EditMode/ControlRigControlsProxy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigTransformNoScaleControlProxy_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Private/EditMode/ControlRigControlsProxy.h" },
		{ "SliderExponent", "1.0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRigTransformNoScaleControlProxy_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigTransformNoScaleControlProxy, Transform), Z_Construct_UScriptStruct_FTransformNoScale, METADATA_PARAMS(Z_Construct_UClass_UControlRigTransformNoScaleControlProxy_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigTransformNoScaleControlProxy_Statics::NewProp_Transform_MetaData)) }; // 1336134303
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UControlRigTransformNoScaleControlProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigTransformNoScaleControlProxy_Statics::NewProp_Transform,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControlRigTransformNoScaleControlProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigTransformNoScaleControlProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigTransformNoScaleControlProxy_Statics::ClassParams = {
		&UControlRigTransformNoScaleControlProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UControlRigTransformNoScaleControlProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigTransformNoScaleControlProxy_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UControlRigTransformNoScaleControlProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigTransformNoScaleControlProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UControlRigTransformNoScaleControlProxy()
	{
		if (!Z_Registration_Info_UClass_UControlRigTransformNoScaleControlProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigTransformNoScaleControlProxy.OuterSingleton, Z_Construct_UClass_UControlRigTransformNoScaleControlProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UControlRigTransformNoScaleControlProxy.OuterSingleton;
	}
	template<> CONTROLRIGEDITOR_API UClass* StaticClass<UControlRigTransformNoScaleControlProxy>()
	{
		return UControlRigTransformNoScaleControlProxy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigTransformNoScaleControlProxy);
	UControlRigTransformNoScaleControlProxy::~UControlRigTransformNoScaleControlProxy() {}
	void UControlRigFloatControlProxy::StaticRegisterNativesUControlRigFloatControlProxy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigFloatControlProxy);
	UClass* Z_Construct_UClass_UControlRigFloatControlProxy_NoRegister()
	{
		return UControlRigFloatControlProxy::StaticClass();
	}
	struct Z_Construct_UClass_UControlRigFloatControlProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Float_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControlRigFloatControlProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UControlRigControlsProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigFloatControlProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditMode/ControlRigControlsProxy.h" },
		{ "ModuleRelativePath", "Private/EditMode/ControlRigControlsProxy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigFloatControlProxy_Statics::NewProp_Float_MetaData[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Private/EditMode/ControlRigControlsProxy.h" },
		{ "SliderExponent", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UControlRigFloatControlProxy_Statics::NewProp_Float = { "Float", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigFloatControlProxy, Float), METADATA_PARAMS(Z_Construct_UClass_UControlRigFloatControlProxy_Statics::NewProp_Float_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigFloatControlProxy_Statics::NewProp_Float_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UControlRigFloatControlProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigFloatControlProxy_Statics::NewProp_Float,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControlRigFloatControlProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigFloatControlProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigFloatControlProxy_Statics::ClassParams = {
		&UControlRigFloatControlProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UControlRigFloatControlProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigFloatControlProxy_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UControlRigFloatControlProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigFloatControlProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UControlRigFloatControlProxy()
	{
		if (!Z_Registration_Info_UClass_UControlRigFloatControlProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigFloatControlProxy.OuterSingleton, Z_Construct_UClass_UControlRigFloatControlProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UControlRigFloatControlProxy.OuterSingleton;
	}
	template<> CONTROLRIGEDITOR_API UClass* StaticClass<UControlRigFloatControlProxy>()
	{
		return UControlRigFloatControlProxy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigFloatControlProxy);
	UControlRigFloatControlProxy::~UControlRigFloatControlProxy() {}
	void UControlRigIntegerControlProxy::StaticRegisterNativesUControlRigIntegerControlProxy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigIntegerControlProxy);
	UClass* Z_Construct_UClass_UControlRigIntegerControlProxy_NoRegister()
	{
		return UControlRigIntegerControlProxy::StaticClass();
	}
	struct Z_Construct_UClass_UControlRigIntegerControlProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Integer_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Integer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControlRigIntegerControlProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UControlRigControlsProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigIntegerControlProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditMode/ControlRigControlsProxy.h" },
		{ "ModuleRelativePath", "Private/EditMode/ControlRigControlsProxy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigIntegerControlProxy_Statics::NewProp_Integer_MetaData[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Private/EditMode/ControlRigControlsProxy.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UControlRigIntegerControlProxy_Statics::NewProp_Integer = { "Integer", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigIntegerControlProxy, Integer), METADATA_PARAMS(Z_Construct_UClass_UControlRigIntegerControlProxy_Statics::NewProp_Integer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigIntegerControlProxy_Statics::NewProp_Integer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UControlRigIntegerControlProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigIntegerControlProxy_Statics::NewProp_Integer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControlRigIntegerControlProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigIntegerControlProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigIntegerControlProxy_Statics::ClassParams = {
		&UControlRigIntegerControlProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UControlRigIntegerControlProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigIntegerControlProxy_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UControlRigIntegerControlProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigIntegerControlProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UControlRigIntegerControlProxy()
	{
		if (!Z_Registration_Info_UClass_UControlRigIntegerControlProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigIntegerControlProxy.OuterSingleton, Z_Construct_UClass_UControlRigIntegerControlProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UControlRigIntegerControlProxy.OuterSingleton;
	}
	template<> CONTROLRIGEDITOR_API UClass* StaticClass<UControlRigIntegerControlProxy>()
	{
		return UControlRigIntegerControlProxy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigIntegerControlProxy);
	UControlRigIntegerControlProxy::~UControlRigIntegerControlProxy() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ControlRigEnumControlProxyValue;
class UScriptStruct* FControlRigEnumControlProxyValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ControlRigEnumControlProxyValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ControlRigEnumControlProxyValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FControlRigEnumControlProxyValue, (UObject*)Z_Construct_UPackage__Script_ControlRigEditor(), TEXT("ControlRigEnumControlProxyValue"));
	}
	return Z_Registration_Info_UScriptStruct_ControlRigEnumControlProxyValue.OuterSingleton;
}
template<> CONTROLRIGEDITOR_API UScriptStruct* StaticStruct<FControlRigEnumControlProxyValue>()
{
	return FControlRigEnumControlProxyValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FControlRigEnumControlProxyValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnumType_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EnumType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnumIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EnumIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigEnumControlProxyValue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/EditMode/ControlRigControlsProxy.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FControlRigEnumControlProxyValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControlRigEnumControlProxyValue>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigEnumControlProxyValue_Statics::NewProp_EnumType_MetaData[] = {
		{ "ModuleRelativePath", "Private/EditMode/ControlRigControlsProxy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FControlRigEnumControlProxyValue_Statics::NewProp_EnumType = { "EnumType", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FControlRigEnumControlProxyValue, EnumType), Z_Construct_UClass_UEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigEnumControlProxyValue_Statics::NewProp_EnumType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigEnumControlProxyValue_Statics::NewProp_EnumType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigEnumControlProxyValue_Statics::NewProp_EnumIndex_MetaData[] = {
		{ "Category", "Enum" },
		{ "ModuleRelativePath", "Private/EditMode/ControlRigControlsProxy.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FControlRigEnumControlProxyValue_Statics::NewProp_EnumIndex = { "EnumIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FControlRigEnumControlProxyValue, EnumIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigEnumControlProxyValue_Statics::NewProp_EnumIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigEnumControlProxyValue_Statics::NewProp_EnumIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FControlRigEnumControlProxyValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigEnumControlProxyValue_Statics::NewProp_EnumType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigEnumControlProxyValue_Statics::NewProp_EnumIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControlRigEnumControlProxyValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigEditor,
		nullptr,
		&NewStructOps,
		"ControlRigEnumControlProxyValue",
		sizeof(FControlRigEnumControlProxyValue),
		alignof(FControlRigEnumControlProxyValue),
		Z_Construct_UScriptStruct_FControlRigEnumControlProxyValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigEnumControlProxyValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigEnumControlProxyValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigEnumControlProxyValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FControlRigEnumControlProxyValue()
	{
		if (!Z_Registration_Info_UScriptStruct_ControlRigEnumControlProxyValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ControlRigEnumControlProxyValue.InnerSingleton, Z_Construct_UScriptStruct_FControlRigEnumControlProxyValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ControlRigEnumControlProxyValue.InnerSingleton;
	}
	void UControlRigEnumControlProxy::StaticRegisterNativesUControlRigEnumControlProxy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigEnumControlProxy);
	UClass* Z_Construct_UClass_UControlRigEnumControlProxy_NoRegister()
	{
		return UControlRigEnumControlProxy::StaticClass();
	}
	struct Z_Construct_UClass_UControlRigEnumControlProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Enum_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Enum;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControlRigEnumControlProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UControlRigControlsProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigEnumControlProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditMode/ControlRigControlsProxy.h" },
		{ "ModuleRelativePath", "Private/EditMode/ControlRigControlsProxy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigEnumControlProxy_Statics::NewProp_Enum_MetaData[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Private/EditMode/ControlRigControlsProxy.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRigEnumControlProxy_Statics::NewProp_Enum = { "Enum", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigEnumControlProxy, Enum), Z_Construct_UScriptStruct_FControlRigEnumControlProxyValue, METADATA_PARAMS(Z_Construct_UClass_UControlRigEnumControlProxy_Statics::NewProp_Enum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigEnumControlProxy_Statics::NewProp_Enum_MetaData)) }; // 2568598709
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UControlRigEnumControlProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigEnumControlProxy_Statics::NewProp_Enum,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControlRigEnumControlProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigEnumControlProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigEnumControlProxy_Statics::ClassParams = {
		&UControlRigEnumControlProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UControlRigEnumControlProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigEnumControlProxy_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UControlRigEnumControlProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigEnumControlProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UControlRigEnumControlProxy()
	{
		if (!Z_Registration_Info_UClass_UControlRigEnumControlProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigEnumControlProxy.OuterSingleton, Z_Construct_UClass_UControlRigEnumControlProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UControlRigEnumControlProxy.OuterSingleton;
	}
	template<> CONTROLRIGEDITOR_API UClass* StaticClass<UControlRigEnumControlProxy>()
	{
		return UControlRigEnumControlProxy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigEnumControlProxy);
	UControlRigEnumControlProxy::~UControlRigEnumControlProxy() {}
	void UControlRigVectorControlProxy::StaticRegisterNativesUControlRigVectorControlProxy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigVectorControlProxy);
	UClass* Z_Construct_UClass_UControlRigVectorControlProxy_NoRegister()
	{
		return UControlRigVectorControlProxy::StaticClass();
	}
	struct Z_Construct_UClass_UControlRigVectorControlProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControlRigVectorControlProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UControlRigControlsProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigVectorControlProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditMode/ControlRigControlsProxy.h" },
		{ "ModuleRelativePath", "Private/EditMode/ControlRigControlsProxy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigVectorControlProxy_Statics::NewProp_Vector_MetaData[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Private/EditMode/ControlRigControlsProxy.h" },
		{ "SliderExponent", "1.0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRigVectorControlProxy_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigVectorControlProxy, Vector), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(Z_Construct_UClass_UControlRigVectorControlProxy_Statics::NewProp_Vector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigVectorControlProxy_Statics::NewProp_Vector_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UControlRigVectorControlProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigVectorControlProxy_Statics::NewProp_Vector,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControlRigVectorControlProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigVectorControlProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigVectorControlProxy_Statics::ClassParams = {
		&UControlRigVectorControlProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UControlRigVectorControlProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigVectorControlProxy_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UControlRigVectorControlProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigVectorControlProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UControlRigVectorControlProxy()
	{
		if (!Z_Registration_Info_UClass_UControlRigVectorControlProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigVectorControlProxy.OuterSingleton, Z_Construct_UClass_UControlRigVectorControlProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UControlRigVectorControlProxy.OuterSingleton;
	}
	template<> CONTROLRIGEDITOR_API UClass* StaticClass<UControlRigVectorControlProxy>()
	{
		return UControlRigVectorControlProxy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigVectorControlProxy);
	UControlRigVectorControlProxy::~UControlRigVectorControlProxy() {}
	void UControlRigVector2DControlProxy::StaticRegisterNativesUControlRigVector2DControlProxy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigVector2DControlProxy);
	UClass* Z_Construct_UClass_UControlRigVector2DControlProxy_NoRegister()
	{
		return UControlRigVector2DControlProxy::StaticClass();
	}
	struct Z_Construct_UClass_UControlRigVector2DControlProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vector2D_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector2D;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControlRigVector2DControlProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UControlRigControlsProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigVector2DControlProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditMode/ControlRigControlsProxy.h" },
		{ "ModuleRelativePath", "Private/EditMode/ControlRigControlsProxy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigVector2DControlProxy_Statics::NewProp_Vector2D_MetaData[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Private/EditMode/ControlRigControlsProxy.h" },
		{ "SliderExponent", "1.0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRigVector2DControlProxy_Statics::NewProp_Vector2D = { "Vector2D", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigVector2DControlProxy, Vector2D), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UControlRigVector2DControlProxy_Statics::NewProp_Vector2D_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigVector2DControlProxy_Statics::NewProp_Vector2D_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UControlRigVector2DControlProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigVector2DControlProxy_Statics::NewProp_Vector2D,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControlRigVector2DControlProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigVector2DControlProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigVector2DControlProxy_Statics::ClassParams = {
		&UControlRigVector2DControlProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UControlRigVector2DControlProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigVector2DControlProxy_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UControlRigVector2DControlProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigVector2DControlProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UControlRigVector2DControlProxy()
	{
		if (!Z_Registration_Info_UClass_UControlRigVector2DControlProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigVector2DControlProxy.OuterSingleton, Z_Construct_UClass_UControlRigVector2DControlProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UControlRigVector2DControlProxy.OuterSingleton;
	}
	template<> CONTROLRIGEDITOR_API UClass* StaticClass<UControlRigVector2DControlProxy>()
	{
		return UControlRigVector2DControlProxy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigVector2DControlProxy);
	UControlRigVector2DControlProxy::~UControlRigVector2DControlProxy() {}
	void UControlRigBoolControlProxy::StaticRegisterNativesUControlRigBoolControlProxy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigBoolControlProxy);
	UClass* Z_Construct_UClass_UControlRigBoolControlProxy_NoRegister()
	{
		return UControlRigBoolControlProxy::StaticClass();
	}
	struct Z_Construct_UClass_UControlRigBoolControlProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bool_MetaData[];
#endif
		static void NewProp_Bool_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Bool;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControlRigBoolControlProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UControlRigControlsProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigBoolControlProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditMode/ControlRigControlsProxy.h" },
		{ "ModuleRelativePath", "Private/EditMode/ControlRigControlsProxy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigBoolControlProxy_Statics::NewProp_Bool_MetaData[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Private/EditMode/ControlRigControlsProxy.h" },
	};
#endif
	void Z_Construct_UClass_UControlRigBoolControlProxy_Statics::NewProp_Bool_SetBit(void* Obj)
	{
		((UControlRigBoolControlProxy*)Obj)->Bool = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlRigBoolControlProxy_Statics::NewProp_Bool = { "Bool", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UControlRigBoolControlProxy), &Z_Construct_UClass_UControlRigBoolControlProxy_Statics::NewProp_Bool_SetBit, METADATA_PARAMS(Z_Construct_UClass_UControlRigBoolControlProxy_Statics::NewProp_Bool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBoolControlProxy_Statics::NewProp_Bool_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UControlRigBoolControlProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBoolControlProxy_Statics::NewProp_Bool,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControlRigBoolControlProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigBoolControlProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigBoolControlProxy_Statics::ClassParams = {
		&UControlRigBoolControlProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UControlRigBoolControlProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBoolControlProxy_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UControlRigBoolControlProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBoolControlProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UControlRigBoolControlProxy()
	{
		if (!Z_Registration_Info_UClass_UControlRigBoolControlProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigBoolControlProxy.OuterSingleton, Z_Construct_UClass_UControlRigBoolControlProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UControlRigBoolControlProxy.OuterSingleton;
	}
	template<> CONTROLRIGEDITOR_API UClass* StaticClass<UControlRigBoolControlProxy>()
	{
		return UControlRigBoolControlProxy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigBoolControlProxy);
	UControlRigBoolControlProxy::~UControlRigBoolControlProxy() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ControlToProxyMap;
class UScriptStruct* FControlToProxyMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ControlToProxyMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ControlToProxyMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FControlToProxyMap, (UObject*)Z_Construct_UPackage__Script_ControlRigEditor(), TEXT("ControlToProxyMap"));
	}
	return Z_Registration_Info_UScriptStruct_ControlToProxyMap.OuterSingleton;
}
template<> CONTROLRIGEDITOR_API UScriptStruct* StaticStruct<FControlToProxyMap>()
{
	return FControlToProxyMap::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FControlToProxyMap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ControlToProxy_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ControlToProxy_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlToProxy_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ControlToProxy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlToProxyMap_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/EditMode/ControlRigControlsProxy.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FControlToProxyMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControlToProxyMap>();
	}
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FControlToProxyMap_Statics::NewProp_ControlToProxy_ValueProp = { "ControlToProxy", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UControlRigControlsProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FControlToProxyMap_Statics::NewProp_ControlToProxy_Key_KeyProp = { "ControlToProxy_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlToProxyMap_Statics::NewProp_ControlToProxy_MetaData[] = {
		{ "ModuleRelativePath", "Private/EditMode/ControlRigControlsProxy.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FControlToProxyMap_Statics::NewProp_ControlToProxy = { "ControlToProxy", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FControlToProxyMap, ControlToProxy), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FControlToProxyMap_Statics::NewProp_ControlToProxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlToProxyMap_Statics::NewProp_ControlToProxy_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FControlToProxyMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlToProxyMap_Statics::NewProp_ControlToProxy_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlToProxyMap_Statics::NewProp_ControlToProxy_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlToProxyMap_Statics::NewProp_ControlToProxy,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControlToProxyMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigEditor,
		nullptr,
		&NewStructOps,
		"ControlToProxyMap",
		sizeof(FControlToProxyMap),
		alignof(FControlToProxyMap),
		Z_Construct_UScriptStruct_FControlToProxyMap_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlToProxyMap_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FControlToProxyMap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlToProxyMap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FControlToProxyMap()
	{
		if (!Z_Registration_Info_UScriptStruct_ControlToProxyMap.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ControlToProxyMap.InnerSingleton, Z_Construct_UScriptStruct_FControlToProxyMap_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ControlToProxyMap.InnerSingleton;
	}
	void UControlRigDetailPanelControlProxies::StaticRegisterNativesUControlRigDetailPanelControlProxies()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigDetailPanelControlProxies);
	UClass* Z_Construct_UClass_UControlRigDetailPanelControlProxies_NoRegister()
	{
		return UControlRigDetailPanelControlProxies::StaticClass();
	}
	struct Z_Construct_UClass_UControlRigDetailPanelControlProxies_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AllProxies_ValueProp;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AllProxies_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllProxies_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_AllProxies;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SelectedProxies_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedProxies_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedProxies;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControlRigDetailPanelControlProxies_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigDetailPanelControlProxies_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Proxy in Details Panel */" },
		{ "IncludePath", "EditMode/ControlRigControlsProxy.h" },
		{ "ModuleRelativePath", "Private/EditMode/ControlRigControlsProxy.h" },
		{ "ToolTip", "Proxy in Details Panel" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRigDetailPanelControlProxies_Statics::NewProp_AllProxies_ValueProp = { "AllProxies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FControlToProxyMap, METADATA_PARAMS(nullptr, 0) }; // 3574041063
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UControlRigDetailPanelControlProxies_Statics::NewProp_AllProxies_Key_KeyProp = { "AllProxies_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigDetailPanelControlProxies_Statics::NewProp_AllProxies_MetaData[] = {
		{ "ModuleRelativePath", "Private/EditMode/ControlRigControlsProxy.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UControlRigDetailPanelControlProxies_Statics::NewProp_AllProxies = { "AllProxies", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigDetailPanelControlProxies, AllProxies), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UControlRigDetailPanelControlProxies_Statics::NewProp_AllProxies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigDetailPanelControlProxies_Statics::NewProp_AllProxies_MetaData)) }; // 3574041063
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UControlRigDetailPanelControlProxies_Statics::NewProp_SelectedProxies_Inner = { "SelectedProxies", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UControlRigControlsProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigDetailPanelControlProxies_Statics::NewProp_SelectedProxies_MetaData[] = {
		{ "Comment", "//proxies themselves contain weakobjectptr to the controlrig\n" },
		{ "ModuleRelativePath", "Private/EditMode/ControlRigControlsProxy.h" },
		{ "ToolTip", "proxies themselves contain weakobjectptr to the controlrig" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UControlRigDetailPanelControlProxies_Statics::NewProp_SelectedProxies = { "SelectedProxies", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigDetailPanelControlProxies, SelectedProxies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UControlRigDetailPanelControlProxies_Statics::NewProp_SelectedProxies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigDetailPanelControlProxies_Statics::NewProp_SelectedProxies_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UControlRigDetailPanelControlProxies_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigDetailPanelControlProxies_Statics::NewProp_AllProxies_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigDetailPanelControlProxies_Statics::NewProp_AllProxies_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigDetailPanelControlProxies_Statics::NewProp_AllProxies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigDetailPanelControlProxies_Statics::NewProp_SelectedProxies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigDetailPanelControlProxies_Statics::NewProp_SelectedProxies,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControlRigDetailPanelControlProxies_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigDetailPanelControlProxies>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigDetailPanelControlProxies_Statics::ClassParams = {
		&UControlRigDetailPanelControlProxies::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UControlRigDetailPanelControlProxies_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigDetailPanelControlProxies_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UControlRigDetailPanelControlProxies_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigDetailPanelControlProxies_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UControlRigDetailPanelControlProxies()
	{
		if (!Z_Registration_Info_UClass_UControlRigDetailPanelControlProxies.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigDetailPanelControlProxies.OuterSingleton, Z_Construct_UClass_UControlRigDetailPanelControlProxies_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UControlRigDetailPanelControlProxies.OuterSingleton;
	}
	template<> CONTROLRIGEDITOR_API UClass* StaticClass<UControlRigDetailPanelControlProxies>()
	{
		return UControlRigDetailPanelControlProxies::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigDetailPanelControlProxies);
	UControlRigDetailPanelControlProxies::~UControlRigDetailPanelControlProxies() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_EditMode_ControlRigControlsProxy_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_EditMode_ControlRigControlsProxy_h_Statics::ScriptStructInfo[] = {
		{ FControlRigEnumControlProxyValue::StaticStruct, Z_Construct_UScriptStruct_FControlRigEnumControlProxyValue_Statics::NewStructOps, TEXT("ControlRigEnumControlProxyValue"), &Z_Registration_Info_UScriptStruct_ControlRigEnumControlProxyValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FControlRigEnumControlProxyValue), 2568598709U) },
		{ FControlToProxyMap::StaticStruct, Z_Construct_UScriptStruct_FControlToProxyMap_Statics::NewStructOps, TEXT("ControlToProxyMap"), &Z_Registration_Info_UScriptStruct_ControlToProxyMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FControlToProxyMap), 3574041063U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_EditMode_ControlRigControlsProxy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UControlRigControlsProxy, UControlRigControlsProxy::StaticClass, TEXT("UControlRigControlsProxy"), &Z_Registration_Info_UClass_UControlRigControlsProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigControlsProxy), 3725414619U) },
		{ Z_Construct_UClass_UControlRigTransformControlProxy, UControlRigTransformControlProxy::StaticClass, TEXT("UControlRigTransformControlProxy"), &Z_Registration_Info_UClass_UControlRigTransformControlProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigTransformControlProxy), 4015815470U) },
		{ Z_Construct_UClass_UControlRigEulerTransformControlProxy, UControlRigEulerTransformControlProxy::StaticClass, TEXT("UControlRigEulerTransformControlProxy"), &Z_Registration_Info_UClass_UControlRigEulerTransformControlProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigEulerTransformControlProxy), 4162765634U) },
		{ Z_Construct_UClass_UControlRigTransformNoScaleControlProxy, UControlRigTransformNoScaleControlProxy::StaticClass, TEXT("UControlRigTransformNoScaleControlProxy"), &Z_Registration_Info_UClass_UControlRigTransformNoScaleControlProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigTransformNoScaleControlProxy), 213153159U) },
		{ Z_Construct_UClass_UControlRigFloatControlProxy, UControlRigFloatControlProxy::StaticClass, TEXT("UControlRigFloatControlProxy"), &Z_Registration_Info_UClass_UControlRigFloatControlProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigFloatControlProxy), 1720347256U) },
		{ Z_Construct_UClass_UControlRigIntegerControlProxy, UControlRigIntegerControlProxy::StaticClass, TEXT("UControlRigIntegerControlProxy"), &Z_Registration_Info_UClass_UControlRigIntegerControlProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigIntegerControlProxy), 3740414927U) },
		{ Z_Construct_UClass_UControlRigEnumControlProxy, UControlRigEnumControlProxy::StaticClass, TEXT("UControlRigEnumControlProxy"), &Z_Registration_Info_UClass_UControlRigEnumControlProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigEnumControlProxy), 2942951827U) },
		{ Z_Construct_UClass_UControlRigVectorControlProxy, UControlRigVectorControlProxy::StaticClass, TEXT("UControlRigVectorControlProxy"), &Z_Registration_Info_UClass_UControlRigVectorControlProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigVectorControlProxy), 2773740603U) },
		{ Z_Construct_UClass_UControlRigVector2DControlProxy, UControlRigVector2DControlProxy::StaticClass, TEXT("UControlRigVector2DControlProxy"), &Z_Registration_Info_UClass_UControlRigVector2DControlProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigVector2DControlProxy), 2306103622U) },
		{ Z_Construct_UClass_UControlRigBoolControlProxy, UControlRigBoolControlProxy::StaticClass, TEXT("UControlRigBoolControlProxy"), &Z_Registration_Info_UClass_UControlRigBoolControlProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigBoolControlProxy), 3240129457U) },
		{ Z_Construct_UClass_UControlRigDetailPanelControlProxies, UControlRigDetailPanelControlProxies::StaticClass, TEXT("UControlRigDetailPanelControlProxies"), &Z_Registration_Info_UClass_UControlRigDetailPanelControlProxies, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigDetailPanelControlProxies), 877337700U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_EditMode_ControlRigControlsProxy_h_844983045(TEXT("/Script/ControlRigEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_EditMode_ControlRigControlsProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_EditMode_ControlRigControlsProxy_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_EditMode_ControlRigControlsProxy_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_EditMode_ControlRigControlsProxy_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
