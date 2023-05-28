// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "AnimNode_LiveLinkPose.h"
#include "LiveLinkTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkInstance() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimInstanceProxy();
	LIVELINKANIMATIONCORE_API UClass* Z_Construct_UClass_ULiveLinkInstance();
	LIVELINKANIMATIONCORE_API UClass* Z_Construct_UClass_ULiveLinkInstance_NoRegister();
	LIVELINKANIMATIONCORE_API UClass* Z_Construct_UClass_ULiveLinkRetargetAsset_NoRegister();
	LIVELINKANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose();
	LIVELINKANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkInstanceProxy();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectName();
	UPackage* Z_Construct_UPackage__Script_LiveLinkAnimationCore();
// End Cross Module References

static_assert(std::is_polymorphic<FLiveLinkInstanceProxy>() == std::is_polymorphic<FAnimInstanceProxy>(), "USTRUCT FLiveLinkInstanceProxy cannot be polymorphic unless super FAnimInstanceProxy is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkInstanceProxy;
class UScriptStruct* FLiveLinkInstanceProxy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkInstanceProxy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkInstanceProxy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkInstanceProxy, (UObject*)Z_Construct_UPackage__Script_LiveLinkAnimationCore(), TEXT("LiveLinkInstanceProxy"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkInstanceProxy.OuterSingleton;
}
template<> LIVELINKANIMATIONCORE_API UScriptStruct* StaticStruct<FLiveLinkInstanceProxy>()
{
	return FLiveLinkInstanceProxy::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkInstanceProxy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoseNode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PoseNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkInstanceProxy_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Proxy override for this UAnimInstance-derived class */" },
		{ "ModuleRelativePath", "Public/LiveLinkInstance.h" },
		{ "ToolTip", "Proxy override for this UAnimInstance-derived class" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkInstanceProxy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkInstanceProxy>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkInstanceProxy_Statics::NewProp_PoseNode_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LiveLinkInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkInstanceProxy_Statics::NewProp_PoseNode = { "PoseNode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkInstanceProxy, PoseNode), Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkInstanceProxy_Statics::NewProp_PoseNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkInstanceProxy_Statics::NewProp_PoseNode_MetaData)) }; // 3486044096
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkInstanceProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkInstanceProxy_Statics::NewProp_PoseNode,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkInstanceProxy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkAnimationCore,
		Z_Construct_UScriptStruct_FAnimInstanceProxy,
		&NewStructOps,
		"LiveLinkInstanceProxy",
		sizeof(FLiveLinkInstanceProxy),
		alignof(FLiveLinkInstanceProxy),
		Z_Construct_UScriptStruct_FLiveLinkInstanceProxy_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkInstanceProxy_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkInstanceProxy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkInstanceProxy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkInstanceProxy()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkInstanceProxy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkInstanceProxy.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkInstanceProxy_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkInstanceProxy.InnerSingleton;
	}
	DEFINE_FUNCTION(ULiveLinkInstance::execSetRetargetAsset)
	{
		P_GET_OBJECT(UClass,Z_Param_RetargetAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRetargetAsset(Z_Param_RetargetAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULiveLinkInstance::execSetSubject)
	{
		P_GET_STRUCT(FLiveLinkSubjectName,Z_Param_SubjectName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSubject(Z_Param_SubjectName);
		P_NATIVE_END;
	}
	void ULiveLinkInstance::StaticRegisterNativesULiveLinkInstance()
	{
		UClass* Class = ULiveLinkInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetRetargetAsset", &ULiveLinkInstance::execSetRetargetAsset },
			{ "SetSubject", &ULiveLinkInstance::execSetSubject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULiveLinkInstance_SetRetargetAsset_Statics
	{
		struct LiveLinkInstance_eventSetRetargetAsset_Parms
		{
			TSubclassOf<ULiveLinkRetargetAsset>  RetargetAsset;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_RetargetAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULiveLinkInstance_SetRetargetAsset_Statics::NewProp_RetargetAsset = { "RetargetAsset", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LiveLinkInstance_eventSetRetargetAsset_Parms, RetargetAsset), Z_Construct_UClass_UClass, Z_Construct_UClass_ULiveLinkRetargetAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkInstance_SetRetargetAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkInstance_SetRetargetAsset_Statics::NewProp_RetargetAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkInstance_SetRetargetAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Live Link" },
		{ "ModuleRelativePath", "Public/LiveLinkInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkInstance_SetRetargetAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkInstance, nullptr, "SetRetargetAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULiveLinkInstance_SetRetargetAsset_Statics::LiveLinkInstance_eventSetRetargetAsset_Parms), Z_Construct_UFunction_ULiveLinkInstance_SetRetargetAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkInstance_SetRetargetAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkInstance_SetRetargetAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkInstance_SetRetargetAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkInstance_SetRetargetAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULiveLinkInstance_SetRetargetAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULiveLinkInstance_SetSubject_Statics
	{
		struct LiveLinkInstance_eventSetSubject_Parms
		{
			FLiveLinkSubjectName SubjectName;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubjectName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkInstance_SetSubject_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LiveLinkInstance_eventSetSubject_Parms, SubjectName), Z_Construct_UScriptStruct_FLiveLinkSubjectName, METADATA_PARAMS(nullptr, 0) }; // 930695248
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkInstance_SetSubject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkInstance_SetSubject_Statics::NewProp_SubjectName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkInstance_SetSubject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Live Link" },
		{ "ModuleRelativePath", "Public/LiveLinkInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkInstance_SetSubject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkInstance, nullptr, "SetSubject", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULiveLinkInstance_SetSubject_Statics::LiveLinkInstance_eventSetSubject_Parms), Z_Construct_UFunction_ULiveLinkInstance_SetSubject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkInstance_SetSubject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkInstance_SetSubject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkInstance_SetSubject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkInstance_SetSubject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULiveLinkInstance_SetSubject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkInstance);
	UClass* Z_Construct_UClass_ULiveLinkInstance_NoRegister()
	{
		return ULiveLinkInstance::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRetargetAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CurrentRetargetAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkAnimationCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULiveLinkInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULiveLinkInstance_SetRetargetAsset, "SetRetargetAsset" }, // 912579600
		{ &Z_Construct_UFunction_ULiveLinkInstance_SetSubject, "SetSubject" }, // 432938388
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "LiveLinkInstance.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/LiveLinkInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkInstance_Statics::NewProp_CurrentRetargetAsset_MetaData[] = {
		{ "Comment", "// Cache for GC\n" },
		{ "ModuleRelativePath", "Public/LiveLinkInstance.h" },
		{ "ToolTip", "Cache for GC" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULiveLinkInstance_Statics::NewProp_CurrentRetargetAsset = { "CurrentRetargetAsset", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkInstance, CurrentRetargetAsset), Z_Construct_UClass_ULiveLinkRetargetAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkInstance_Statics::NewProp_CurrentRetargetAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkInstance_Statics::NewProp_CurrentRetargetAsset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkInstance_Statics::NewProp_CurrentRetargetAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkInstance_Statics::ClassParams = {
		&ULiveLinkInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULiveLinkInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkInstance()
	{
		if (!Z_Registration_Info_UClass_ULiveLinkInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkInstance.OuterSingleton, Z_Construct_UClass_ULiveLinkInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveLinkInstance.OuterSingleton;
	}
	template<> LIVELINKANIMATIONCORE_API UClass* StaticClass<ULiveLinkInstance>()
	{
		return ULiveLinkInstance::StaticClass();
	}
	ULiveLinkInstance::ULiveLinkInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkInstance);
	ULiveLinkInstance::~ULiveLinkInstance() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkInstance_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkInstance_h_Statics::ScriptStructInfo[] = {
		{ FLiveLinkInstanceProxy::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkInstanceProxy_Statics::NewStructOps, TEXT("LiveLinkInstanceProxy"), &Z_Registration_Info_UScriptStruct_LiveLinkInstanceProxy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkInstanceProxy), 2376186370U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkInstance, ULiveLinkInstance::StaticClass, TEXT("ULiveLinkInstance"), &Z_Registration_Info_UClass_ULiveLinkInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkInstance), 2542184379U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkInstance_h_3629366737(TEXT("/Script/LiveLinkAnimationCore"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkInstance_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkInstance_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkInstance_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
