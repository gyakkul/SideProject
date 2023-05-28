// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TransformableHandle.h"
#include "MovieSceneObjectBindingID.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTransformableHandle() {}
// Cross Module References
	CONSTRAINTS_API UClass* Z_Construct_UClass_UTransformableComponentHandle();
	CONSTRAINTS_API UClass* Z_Construct_UClass_UTransformableComponentHandle_NoRegister();
	CONSTRAINTS_API UClass* Z_Construct_UClass_UTransformableHandle();
	CONSTRAINTS_API UClass* Z_Construct_UClass_UTransformableHandle_NoRegister();
	CONSTRAINTS_API UEnum* Z_Construct_UEnum_Constraints_EHandleEvent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
	UPackage* Z_Construct_UPackage__Script_Constraints();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHandleEvent;
	static UEnum* EHandleEvent_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHandleEvent.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHandleEvent.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Constraints_EHandleEvent, (UObject*)Z_Construct_UPackage__Script_Constraints(), TEXT("EHandleEvent"));
		}
		return Z_Registration_Info_UEnum_EHandleEvent.OuterSingleton;
	}
	template<> CONSTRAINTS_API UEnum* StaticEnum<EHandleEvent>()
	{
		return EHandleEvent_StaticEnum();
	}
	struct Z_Construct_UEnum_Constraints_EHandleEvent_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Constraints_EHandleEvent_Statics::Enumerators[] = {
		{ "EHandleEvent::LocalTransformUpdated", (int64)EHandleEvent::LocalTransformUpdated },
		{ "EHandleEvent::GlobalTransformUpdated", (int64)EHandleEvent::GlobalTransformUpdated },
		{ "EHandleEvent::ComponentUpdated", (int64)EHandleEvent::ComponentUpdated },
		{ "EHandleEvent::Max", (int64)EHandleEvent::Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Constraints_EHandleEvent_Statics::Enum_MetaDataParams[] = {
		{ "ComponentUpdated.Name", "EHandleEvent::ComponentUpdated" },
		{ "GlobalTransformUpdated.Name", "EHandleEvent::GlobalTransformUpdated" },
		{ "LocalTransformUpdated.Name", "EHandleEvent::LocalTransformUpdated" },
		{ "Max.Comment", "/** MAX - invalid */" },
		{ "Max.Hidden", "" },
		{ "Max.Name", "EHandleEvent::Max" },
		{ "Max.ToolTip", "MAX - invalid" },
		{ "ModuleRelativePath", "Public/TransformableHandle.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Constraints_EHandleEvent_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Constraints,
		nullptr,
		"EHandleEvent",
		"EHandleEvent",
		Z_Construct_UEnum_Constraints_EHandleEvent_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Constraints_EHandleEvent_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Constraints_EHandleEvent_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Constraints_EHandleEvent_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Constraints_EHandleEvent()
	{
		if (!Z_Registration_Info_UEnum_EHandleEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHandleEvent.InnerSingleton, Z_Construct_UEnum_Constraints_EHandleEvent_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHandleEvent.InnerSingleton;
	}
	void UTransformableHandle::StaticRegisterNativesUTransformableHandle()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTransformableHandle);
	UClass* Z_Construct_UClass_UTransformableHandle_NoRegister()
	{
		return UTransformableHandle::StaticClass();
	}
	struct Z_Construct_UClass_UTransformableHandle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintBindingID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConstraintBindingID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTransformableHandle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Constraints,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformableHandle_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * UTransformableHandle\n */" },
		{ "IncludePath", "TransformableHandle.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TransformableHandle.h" },
		{ "ToolTip", "UTransformableHandle" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformableHandle_Statics::NewProp_ConstraintBindingID_MetaData[] = {
		{ "Category", "Binding" },
		{ "Comment", "//possible bindingID\n" },
		{ "ModuleRelativePath", "Public/TransformableHandle.h" },
		{ "ToolTip", "possible bindingID" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTransformableHandle_Statics::NewProp_ConstraintBindingID = { "ConstraintBindingID", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformableHandle, ConstraintBindingID), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(Z_Construct_UClass_UTransformableHandle_Statics::NewProp_ConstraintBindingID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformableHandle_Statics::NewProp_ConstraintBindingID_MetaData)) }; // 1341447431
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTransformableHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformableHandle_Statics::NewProp_ConstraintBindingID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTransformableHandle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTransformableHandle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTransformableHandle_Statics::ClassParams = {
		&UTransformableHandle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTransformableHandle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTransformableHandle_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTransformableHandle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformableHandle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTransformableHandle()
	{
		if (!Z_Registration_Info_UClass_UTransformableHandle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTransformableHandle.OuterSingleton, Z_Construct_UClass_UTransformableHandle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTransformableHandle.OuterSingleton;
	}
	template<> CONSTRAINTS_API UClass* StaticClass<UTransformableHandle>()
	{
		return UTransformableHandle::StaticClass();
	}
	UTransformableHandle::UTransformableHandle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTransformableHandle);
	void UTransformableComponentHandle::StaticRegisterNativesUTransformableComponentHandle()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTransformableComponentHandle);
	UClass* Z_Construct_UClass_UTransformableComponentHandle_NoRegister()
	{
		return UTransformableComponentHandle::StaticClass();
	}
	struct Z_Construct_UClass_UTransformableComponentHandle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Component;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTransformableComponentHandle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTransformableHandle,
		(UObject* (*)())Z_Construct_UPackage__Script_Constraints,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformableComponentHandle_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * UTransformableComponentHandle\n */" },
		{ "IncludePath", "TransformableHandle.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TransformableHandle.h" },
		{ "ToolTip", "UTransformableComponentHandle" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformableComponentHandle_Statics::NewProp_Component_MetaData[] = {
		{ "Category", "Object" },
		{ "Comment", "/** The Component that this handle is pointing at. */" },
		{ "ModuleRelativePath", "Public/TransformableHandle.h" },
		{ "ToolTip", "The Component that this handle is pointing at." },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UTransformableComponentHandle_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformableComponentHandle, Component), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTransformableComponentHandle_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformableComponentHandle_Statics::NewProp_Component_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformableComponentHandle_Statics::NewProp_SocketName_MetaData[] = {
		{ "Category", "Object" },
		{ "Comment", "/** Optional socket name on Component. */" },
		{ "ModuleRelativePath", "Public/TransformableHandle.h" },
		{ "ToolTip", "Optional socket name on Component." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTransformableComponentHandle_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformableComponentHandle, SocketName), METADATA_PARAMS(Z_Construct_UClass_UTransformableComponentHandle_Statics::NewProp_SocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformableComponentHandle_Statics::NewProp_SocketName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTransformableComponentHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformableComponentHandle_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformableComponentHandle_Statics::NewProp_SocketName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTransformableComponentHandle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTransformableComponentHandle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTransformableComponentHandle_Statics::ClassParams = {
		&UTransformableComponentHandle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTransformableComponentHandle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTransformableComponentHandle_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTransformableComponentHandle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformableComponentHandle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTransformableComponentHandle()
	{
		if (!Z_Registration_Info_UClass_UTransformableComponentHandle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTransformableComponentHandle.OuterSingleton, Z_Construct_UClass_UTransformableComponentHandle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTransformableComponentHandle.OuterSingleton;
	}
	template<> CONSTRAINTS_API UClass* StaticClass<UTransformableComponentHandle>()
	{
		return UTransformableComponentHandle::StaticClass();
	}
	UTransformableComponentHandle::UTransformableComponentHandle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTransformableComponentHandle);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_TransformableHandle_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_TransformableHandle_h_Statics::EnumInfo[] = {
		{ EHandleEvent_StaticEnum, TEXT("EHandleEvent"), &Z_Registration_Info_UEnum_EHandleEvent, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4130641380U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_TransformableHandle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTransformableHandle, UTransformableHandle::StaticClass, TEXT("UTransformableHandle"), &Z_Registration_Info_UClass_UTransformableHandle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTransformableHandle), 562883249U) },
		{ Z_Construct_UClass_UTransformableComponentHandle, UTransformableComponentHandle::StaticClass, TEXT("UTransformableComponentHandle"), &Z_Registration_Info_UClass_UTransformableComponentHandle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTransformableComponentHandle), 3869634700U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_TransformableHandle_h_1822382025(TEXT("/Script/Constraints"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_TransformableHandle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_TransformableHandle_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_TransformableHandle_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_TransformableHandle_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
