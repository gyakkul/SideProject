// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationModifier.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationModifier() {}
// Cross Module References
	ANIMATIONMODIFIERS_API UClass* Z_Construct_UClass_UAnimationModifier();
	ANIMATIONMODIFIERS_API UClass* Z_Construct_UClass_UAnimationModifier_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AnimationModifiers();
// End Cross Module References
	DEFINE_FUNCTION(UAnimationModifier::execOnRevert)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRevert_Implementation(Z_Param_AnimationSequence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationModifier::execOnApply)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnApply_Implementation(Z_Param_AnimationSequence);
		P_NATIVE_END;
	}
	struct AnimationModifier_eventOnApply_Parms
	{
		UAnimSequence* AnimationSequence;
	};
	struct AnimationModifier_eventOnRevert_Parms
	{
		UAnimSequence* AnimationSequence;
	};
	static FName NAME_UAnimationModifier_OnApply = FName(TEXT("OnApply"));
	void UAnimationModifier::OnApply(UAnimSequence* AnimationSequence)
	{
		AnimationModifier_eventOnApply_Parms Parms;
		Parms.AnimationSequence=AnimationSequence;
		ProcessEvent(FindFunctionChecked(NAME_UAnimationModifier_OnApply),&Parms);
	}
	static FName NAME_UAnimationModifier_OnRevert = FName(TEXT("OnRevert"));
	void UAnimationModifier::OnRevert(UAnimSequence* AnimationSequence)
	{
		AnimationModifier_eventOnRevert_Parms Parms;
		Parms.AnimationSequence=AnimationSequence;
		ProcessEvent(FindFunctionChecked(NAME_UAnimationModifier_OnRevert),&Parms);
	}
	void UAnimationModifier::StaticRegisterNativesUAnimationModifier()
	{
		UClass* Class = UAnimationModifier::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnApply", &UAnimationModifier::execOnApply },
			{ "OnRevert", &UAnimationModifier::execOnRevert },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimationModifier_OnApply_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationModifier_OnApply_Statics::NewProp_AnimationSequence = { "AnimationSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationModifier_eventOnApply_Parms, AnimationSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationModifier_OnApply_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationModifier_OnApply_Statics::NewProp_AnimationSequence,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationModifier_OnApply_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Executed when the Animation is initialized (native event for debugging / testing purposes) */" },
		{ "ModuleRelativePath", "Public/AnimationModifier.h" },
		{ "ToolTip", "Executed when the Animation is initialized (native event for debugging / testing purposes)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationModifier_OnApply_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationModifier, nullptr, "OnApply", nullptr, nullptr, sizeof(AnimationModifier_eventOnApply_Parms), Z_Construct_UFunction_UAnimationModifier_OnApply_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationModifier_OnApply_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationModifier_OnApply_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationModifier_OnApply_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationModifier_OnApply()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationModifier_OnApply_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationModifier_OnRevert_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationModifier_OnRevert_Statics::NewProp_AnimationSequence = { "AnimationSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationModifier_eventOnRevert_Parms, AnimationSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationModifier_OnRevert_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationModifier_OnRevert_Statics::NewProp_AnimationSequence,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationModifier_OnRevert_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimationModifier.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationModifier_OnRevert_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationModifier, nullptr, "OnRevert", nullptr, nullptr, sizeof(AnimationModifier_eventOnRevert_Parms), Z_Construct_UFunction_UAnimationModifier_OnRevert_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationModifier_OnRevert_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationModifier_OnRevert_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationModifier_OnRevert_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationModifier_OnRevert()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationModifier_OnRevert_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimationModifier);
	UClass* Z_Construct_UClass_UAnimationModifier_NoRegister()
	{
		return UAnimationModifier::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationModifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReapplyPostOwnerChange_MetaData[];
#endif
		static void NewProp_bReapplyPostOwnerChange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReapplyPostOwnerChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RevisionGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RevisionGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AppliedGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AppliedGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StoredNativeRevision_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StoredNativeRevision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviouslyAppliedModifier_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviouslyAppliedModifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationModifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationModifiers,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimationModifier_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimationModifier_OnApply, "OnApply" }, // 3455473989
		{ &Z_Construct_UFunction_UAnimationModifier_OnRevert, "OnRevert" }, // 1138674003
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationModifier_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "AnimationModifier.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AnimationModifier.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationModifier_Statics::NewProp_bReapplyPostOwnerChange_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If this is set to true then the animation modifier will call it's reapply function after any change made to the owning asset. */" },
		{ "ModuleRelativePath", "Public/AnimationModifier.h" },
		{ "ToolTip", "If this is set to true then the animation modifier will call it's reapply function after any change made to the owning asset." },
	};
#endif
	void Z_Construct_UClass_UAnimationModifier_Statics::NewProp_bReapplyPostOwnerChange_SetBit(void* Obj)
	{
		((UAnimationModifier*)Obj)->bReapplyPostOwnerChange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimationModifier_Statics::NewProp_bReapplyPostOwnerChange = { "bReapplyPostOwnerChange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimationModifier), &Z_Construct_UClass_UAnimationModifier_Statics::NewProp_bReapplyPostOwnerChange_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimationModifier_Statics::NewProp_bReapplyPostOwnerChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationModifier_Statics::NewProp_bReapplyPostOwnerChange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationModifier_Statics::NewProp_RevisionGuid_MetaData[] = {
		{ "Comment", "/*VisibleAnywhere for testing, Category = Revision*/" },
		{ "ModuleRelativePath", "Public/AnimationModifier.h" },
		{ "ToolTip", "VisibleAnywhere for testing, Category = Revision" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimationModifier_Statics::NewProp_RevisionGuid = { "RevisionGuid", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimationModifier, RevisionGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UAnimationModifier_Statics::NewProp_RevisionGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationModifier_Statics::NewProp_RevisionGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationModifier_Statics::NewProp_AppliedGuid_MetaData[] = {
		{ "Comment", "/*VisibleAnywhere for testing, Category = Revision */" },
		{ "ModuleRelativePath", "Public/AnimationModifier.h" },
		{ "ToolTip", "VisibleAnywhere for testing, Category = Revision" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimationModifier_Statics::NewProp_AppliedGuid = { "AppliedGuid", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimationModifier, AppliedGuid_DEPRECATED), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UAnimationModifier_Statics::NewProp_AppliedGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationModifier_Statics::NewProp_AppliedGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationModifier_Statics::NewProp_StoredNativeRevision_MetaData[] = {
		{ "Comment", "// This holds the latest value returned by UpdateNativeRevisionGuid during the last PostLoad (changing this value will invalidate the GUIDs for all instances)\n" },
		{ "ModuleRelativePath", "Public/AnimationModifier.h" },
		{ "ToolTip", "This holds the latest value returned by UpdateNativeRevisionGuid during the last PostLoad (changing this value will invalidate the GUIDs for all instances)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimationModifier_Statics::NewProp_StoredNativeRevision = { "StoredNativeRevision", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimationModifier, StoredNativeRevision), METADATA_PARAMS(Z_Construct_UClass_UAnimationModifier_Statics::NewProp_StoredNativeRevision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationModifier_Statics::NewProp_StoredNativeRevision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationModifier_Statics::NewProp_PreviouslyAppliedModifier_MetaData[] = {
		{ "Comment", "/** Serialized version of the modifier that has been previously applied to the Animation Asset */" },
		{ "ModuleRelativePath", "Public/AnimationModifier.h" },
		{ "ToolTip", "Serialized version of the modifier that has been previously applied to the Animation Asset" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimationModifier_Statics::NewProp_PreviouslyAppliedModifier = { "PreviouslyAppliedModifier", nullptr, (EPropertyFlags)0x0044000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimationModifier, PreviouslyAppliedModifier_DEPRECATED), Z_Construct_UClass_UAnimationModifier_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimationModifier_Statics::NewProp_PreviouslyAppliedModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationModifier_Statics::NewProp_PreviouslyAppliedModifier_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimationModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationModifier_Statics::NewProp_bReapplyPostOwnerChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationModifier_Statics::NewProp_RevisionGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationModifier_Statics::NewProp_AppliedGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationModifier_Statics::NewProp_StoredNativeRevision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationModifier_Statics::NewProp_PreviouslyAppliedModifier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationModifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationModifier>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationModifier_Statics::ClassParams = {
		&UAnimationModifier::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAnimationModifier_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationModifier_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimationModifier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationModifier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimationModifier()
	{
		if (!Z_Registration_Info_UClass_UAnimationModifier.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationModifier.OuterSingleton, Z_Construct_UClass_UAnimationModifier_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimationModifier.OuterSingleton;
	}
	template<> ANIMATIONMODIFIERS_API UClass* StaticClass<UAnimationModifier>()
	{
		return UAnimationModifier::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationModifier);
	UAnimationModifier::~UAnimationModifier() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimationModifier)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimationModifier, UAnimationModifier::StaticClass, TEXT("UAnimationModifier"), &Z_Registration_Info_UClass_UAnimationModifier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationModifier), 3865024701U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_308101598(TEXT("/Script/AnimationModifiers"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
