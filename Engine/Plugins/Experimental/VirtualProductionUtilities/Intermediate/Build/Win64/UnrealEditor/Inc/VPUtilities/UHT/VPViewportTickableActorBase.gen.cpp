// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VPViewportTickableActorBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVPViewportTickableActorBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_VPUtilities();
	VPUTILITIES_API UClass* Z_Construct_UClass_AVPViewportTickableActorBase();
	VPUTILITIES_API UClass* Z_Construct_UClass_AVPViewportTickableActorBase_NoRegister();
	VPUTILITIES_API UEnum* Z_Construct_UEnum_VPUtilities_EVPViewportTickableFlags();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVPViewportTickableFlags;
	static UEnum* EVPViewportTickableFlags_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVPViewportTickableFlags.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVPViewportTickableFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VPUtilities_EVPViewportTickableFlags, (UObject*)Z_Construct_UPackage__Script_VPUtilities(), TEXT("EVPViewportTickableFlags"));
		}
		return Z_Registration_Info_UEnum_EVPViewportTickableFlags.OuterSingleton;
	}
	template<> VPUTILITIES_API UEnum* StaticEnum<EVPViewportTickableFlags>()
	{
		return EVPViewportTickableFlags_StaticEnum();
	}
	struct Z_Construct_UEnum_VPUtilities_EVPViewportTickableFlags_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VPUtilities_EVPViewportTickableFlags_Statics::Enumerators[] = {
		{ "EVPViewportTickableFlags::Editor", (int64)EVPViewportTickableFlags::Editor },
		{ "EVPViewportTickableFlags::Game", (int64)EVPViewportTickableFlags::Game },
		{ "EVPViewportTickableFlags::EditorPreview", (int64)EVPViewportTickableFlags::EditorPreview },
		{ "EVPViewportTickableFlags::GamePreview", (int64)EVPViewportTickableFlags::GamePreview },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VPUtilities_EVPViewportTickableFlags_Statics::Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "Editor.Name", "EVPViewportTickableFlags::Editor" },
		{ "EditorPreview.Name", "EVPViewportTickableFlags::EditorPreview" },
		{ "Game.Name", "EVPViewportTickableFlags::Game" },
		{ "GamePreview.Name", "EVPViewportTickableFlags::GamePreview" },
		{ "ModuleRelativePath", "Public/VPViewportTickableActorBase.h" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VPUtilities_EVPViewportTickableFlags_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VPUtilities,
		nullptr,
		"EVPViewportTickableFlags",
		"EVPViewportTickableFlags",
		Z_Construct_UEnum_VPUtilities_EVPViewportTickableFlags_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VPUtilities_EVPViewportTickableFlags_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VPUtilities_EVPViewportTickableFlags_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VPUtilities_EVPViewportTickableFlags_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VPUtilities_EVPViewportTickableFlags()
	{
		if (!Z_Registration_Info_UEnum_EVPViewportTickableFlags.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVPViewportTickableFlags.InnerSingleton, Z_Construct_UEnum_VPUtilities_EVPViewportTickableFlags_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVPViewportTickableFlags.InnerSingleton;
	}
	DEFINE_FUNCTION(AVPViewportTickableActorBase::execEditorLockLocation)
	{
		P_GET_UBOOL(Z_Param_bSetLockLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EditorLockLocation(Z_Param_bSetLockLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVPViewportTickableActorBase::execEditorDestroyed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EditorDestroyed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVPViewportTickableActorBase::execEditorTick)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EditorTick_Implementation(Z_Param_DeltaSeconds);
		P_NATIVE_END;
	}
	struct VPViewportTickableActorBase_eventEditorTick_Parms
	{
		float DeltaSeconds;
	};
	static FName NAME_AVPViewportTickableActorBase_EditorDestroyed = FName(TEXT("EditorDestroyed"));
	void AVPViewportTickableActorBase::EditorDestroyed()
	{
		ProcessEvent(FindFunctionChecked(NAME_AVPViewportTickableActorBase_EditorDestroyed),NULL);
	}
	static FName NAME_AVPViewportTickableActorBase_EditorTick = FName(TEXT("EditorTick"));
	void AVPViewportTickableActorBase::EditorTick(float DeltaSeconds)
	{
		VPViewportTickableActorBase_eventEditorTick_Parms Parms;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_AVPViewportTickableActorBase_EditorTick),&Parms);
	}
	void AVPViewportTickableActorBase::StaticRegisterNativesAVPViewportTickableActorBase()
	{
		UClass* Class = AVPViewportTickableActorBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EditorDestroyed", &AVPViewportTickableActorBase::execEditorDestroyed },
			{ "EditorLockLocation", &AVPViewportTickableActorBase::execEditorLockLocation },
			{ "EditorTick", &AVPViewportTickableActorBase::execEditorTick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVPViewportTickableActorBase_EditorDestroyed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVPViewportTickableActorBase_EditorDestroyed_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Utilities" },
		{ "ModuleRelativePath", "Public/VPViewportTickableActorBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVPViewportTickableActorBase_EditorDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVPViewportTickableActorBase, nullptr, "EditorDestroyed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVPViewportTickableActorBase_EditorDestroyed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVPViewportTickableActorBase_EditorDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVPViewportTickableActorBase_EditorDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVPViewportTickableActorBase_EditorDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVPViewportTickableActorBase_EditorLockLocation_Statics
	{
		struct VPViewportTickableActorBase_eventEditorLockLocation_Parms
		{
			bool bSetLockLocation;
		};
		static void NewProp_bSetLockLocation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetLockLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AVPViewportTickableActorBase_EditorLockLocation_Statics::NewProp_bSetLockLocation_SetBit(void* Obj)
	{
		((VPViewportTickableActorBase_eventEditorLockLocation_Parms*)Obj)->bSetLockLocation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVPViewportTickableActorBase_EditorLockLocation_Statics::NewProp_bSetLockLocation = { "bSetLockLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VPViewportTickableActorBase_eventEditorLockLocation_Parms), &Z_Construct_UFunction_AVPViewportTickableActorBase_EditorLockLocation_Statics::NewProp_bSetLockLocation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVPViewportTickableActorBase_EditorLockLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVPViewportTickableActorBase_EditorLockLocation_Statics::NewProp_bSetLockLocation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVPViewportTickableActorBase_EditorLockLocation_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Editor" },
		{ "Comment", "/** Sets the LockLocation variable to disable movement from the translation gizmo */" },
		{ "ModuleRelativePath", "Public/VPViewportTickableActorBase.h" },
		{ "ToolTip", "Sets the LockLocation variable to disable movement from the translation gizmo" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVPViewportTickableActorBase_EditorLockLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVPViewportTickableActorBase, nullptr, "EditorLockLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVPViewportTickableActorBase_EditorLockLocation_Statics::VPViewportTickableActorBase_eventEditorLockLocation_Parms), Z_Construct_UFunction_AVPViewportTickableActorBase_EditorLockLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVPViewportTickableActorBase_EditorLockLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVPViewportTickableActorBase_EditorLockLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVPViewportTickableActorBase_EditorLockLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVPViewportTickableActorBase_EditorLockLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVPViewportTickableActorBase_EditorLockLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVPViewportTickableActorBase_EditorTick_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVPViewportTickableActorBase_EditorTick_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPViewportTickableActorBase_eventEditorTick_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVPViewportTickableActorBase_EditorTick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVPViewportTickableActorBase_EditorTick_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVPViewportTickableActorBase_EditorTick_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Tick" },
		{ "ModuleRelativePath", "Public/VPViewportTickableActorBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVPViewportTickableActorBase_EditorTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVPViewportTickableActorBase, nullptr, "EditorTick", nullptr, nullptr, sizeof(VPViewportTickableActorBase_eventEditorTick_Parms), Z_Construct_UFunction_AVPViewportTickableActorBase_EditorTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVPViewportTickableActorBase_EditorTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVPViewportTickableActorBase_EditorTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVPViewportTickableActorBase_EditorTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVPViewportTickableActorBase_EditorTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVPViewportTickableActorBase_EditorTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVPViewportTickableActorBase);
	UClass* Z_Construct_UClass_AVPViewportTickableActorBase_NoRegister()
	{
		return AVPViewportTickableActorBase::StaticClass();
	}
	struct Z_Construct_UClass_AVPViewportTickableActorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ViewportTickType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewportTickType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ViewportTickType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVPViewportTickableActorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VPUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AVPViewportTickableActorBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVPViewportTickableActorBase_EditorDestroyed, "EditorDestroyed" }, // 1058568291
		{ &Z_Construct_UFunction_AVPViewportTickableActorBase_EditorLockLocation, "EditorLockLocation" }, // 741518441
		{ &Z_Construct_UFunction_AVPViewportTickableActorBase_EditorTick, "EditorTick" }, // 2345239929
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVPViewportTickableActorBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Actor that tick in the Editor viewport with the event EditorTick.\n */" },
		{ "IncludePath", "VPViewportTickableActorBase.h" },
		{ "ModuleRelativePath", "Public/VPViewportTickableActorBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Actor that tick in the Editor viewport with the event EditorTick." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AVPViewportTickableActorBase_Statics::NewProp_ViewportTickType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVPViewportTickableActorBase_Statics::NewProp_ViewportTickType_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/VPUtilities.EVPViewportTickableType" },
		{ "Category", "Actor Tick" },
		{ "Comment", "/**\n\x09 * Where the actor should be ticked.\n\x09 * Editor = Tick in the editor viewport. Use the event EditorTick.\n\x09 * Game = Tick in game even if we are only ticking the viewport. Use the event Tick.\n\x09 * Preview = Tick if the actor is present in any editing tool like Blueprint or Material graph. Use EditorTick.\n\x09 */" },
		{ "ModuleRelativePath", "Public/VPViewportTickableActorBase.h" },
		{ "ToolTip", "Where the actor should be ticked.\nEditor = Tick in the editor viewport. Use the event EditorTick.\nGame = Tick in game even if we are only ticking the viewport. Use the event Tick.\nPreview = Tick if the actor is present in any editing tool like Blueprint or Material graph. Use EditorTick." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AVPViewportTickableActorBase_Statics::NewProp_ViewportTickType = { "ViewportTickType", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVPViewportTickableActorBase, ViewportTickType), Z_Construct_UEnum_VPUtilities_EVPViewportTickableFlags, METADATA_PARAMS(Z_Construct_UClass_AVPViewportTickableActorBase_Statics::NewProp_ViewportTickType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVPViewportTickableActorBase_Statics::NewProp_ViewportTickType_MetaData)) }; // 837573648
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVPViewportTickableActorBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVPViewportTickableActorBase_Statics::NewProp_ViewportTickType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVPViewportTickableActorBase_Statics::NewProp_ViewportTickType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVPViewportTickableActorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVPViewportTickableActorBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVPViewportTickableActorBase_Statics::ClassParams = {
		&AVPViewportTickableActorBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AVPViewportTickableActorBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AVPViewportTickableActorBase_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AVPViewportTickableActorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVPViewportTickableActorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVPViewportTickableActorBase()
	{
		if (!Z_Registration_Info_UClass_AVPViewportTickableActorBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVPViewportTickableActorBase.OuterSingleton, Z_Construct_UClass_AVPViewportTickableActorBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVPViewportTickableActorBase.OuterSingleton;
	}
	template<> VPUTILITIES_API UClass* StaticClass<AVPViewportTickableActorBase>()
	{
		return AVPViewportTickableActorBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVPViewportTickableActorBase);
	AVPViewportTickableActorBase::~AVPViewportTickableActorBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPViewportTickableActorBase_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPViewportTickableActorBase_h_Statics::EnumInfo[] = {
		{ EVPViewportTickableFlags_StaticEnum, TEXT("EVPViewportTickableFlags"), &Z_Registration_Info_UEnum_EVPViewportTickableFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 837573648U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPViewportTickableActorBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVPViewportTickableActorBase, AVPViewportTickableActorBase::StaticClass, TEXT("AVPViewportTickableActorBase"), &Z_Registration_Info_UClass_AVPViewportTickableActorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVPViewportTickableActorBase), 1275697296U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPViewportTickableActorBase_h_3385570824(TEXT("/Script/VPUtilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPViewportTickableActorBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPViewportTickableActorBase_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPViewportTickableActorBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPViewportTickableActorBase_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
