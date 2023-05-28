// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Sound/SoundNodeLooping.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeLooping() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundNode();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeLooping();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeLooping_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USoundNodeLooping::StaticRegisterNativesUSoundNodeLooping()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundNodeLooping);
	UClass* Z_Construct_UClass_USoundNodeLooping_NoRegister()
	{
		return USoundNodeLooping::StaticClass();
	}
	struct Z_Construct_UClass_USoundNodeLooping_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoopCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LoopCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLoopIndefinitely_MetaData[];
#endif
		static void NewProp_bLoopIndefinitely_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoopIndefinitely;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundNodeLooping_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeLooping_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Defines how a sound loops; either indefinitely, or for a set number of times.\n * Note: The Looping node should only be used for logical or procedural looping such as introducing a delay.\n * These sounds will not be played seamlessly. If you want a sound to loop seamlessly and indefinitely,\n * use the Looping flag on the Wave Player node for that sound.\n */" },
		{ "DisplayName", "Looping" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundNodeLooping.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeLooping.h" },
		{ "ToolTip", "Defines how a sound loops; either indefinitely, or for a set number of times.\nNote: The Looping node should only be used for logical or procedural looping such as introducing a delay.\nThese sounds will not be played seamlessly. If you want a sound to loop seamlessly and indefinitely,\nuse the Looping flag on the Wave Player node for that sound." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeLooping_Statics::NewProp_LoopCount_MetaData[] = {
		{ "Category", "Looping" },
		{ "ClampMin", "1" },
		{ "Comment", "/* The amount of times to loop */" },
		{ "EditCondition", "!bLoopIndefinitely" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeLooping.h" },
		{ "ToolTip", "The amount of times to loop" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundNodeLooping_Statics::NewProp_LoopCount = { "LoopCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundNodeLooping, LoopCount), METADATA_PARAMS(Z_Construct_UClass_USoundNodeLooping_Statics::NewProp_LoopCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeLooping_Statics::NewProp_LoopCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeLooping_Statics::NewProp_bLoopIndefinitely_MetaData[] = {
		{ "Category", "Looping" },
		{ "Comment", "/* If enabled, the node will continue to loop indefinitely regardless of the Loop Count value. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeLooping.h" },
		{ "ToolTip", "If enabled, the node will continue to loop indefinitely regardless of the Loop Count value." },
	};
#endif
	void Z_Construct_UClass_USoundNodeLooping_Statics::NewProp_bLoopIndefinitely_SetBit(void* Obj)
	{
		((USoundNodeLooping*)Obj)->bLoopIndefinitely = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundNodeLooping_Statics::NewProp_bLoopIndefinitely = { "bLoopIndefinitely", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USoundNodeLooping), &Z_Construct_UClass_USoundNodeLooping_Statics::NewProp_bLoopIndefinitely_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundNodeLooping_Statics::NewProp_bLoopIndefinitely_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeLooping_Statics::NewProp_bLoopIndefinitely_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundNodeLooping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeLooping_Statics::NewProp_LoopCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeLooping_Statics::NewProp_bLoopIndefinitely,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundNodeLooping_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundNodeLooping>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundNodeLooping_Statics::ClassParams = {
		&USoundNodeLooping::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundNodeLooping_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeLooping_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundNodeLooping_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeLooping_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundNodeLooping()
	{
		if (!Z_Registration_Info_UClass_USoundNodeLooping.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundNodeLooping.OuterSingleton, Z_Construct_UClass_USoundNodeLooping_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundNodeLooping.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USoundNodeLooping>()
	{
		return USoundNodeLooping::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeLooping);
	USoundNodeLooping::~USoundNodeLooping() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeLooping_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeLooping_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundNodeLooping, USoundNodeLooping::StaticClass, TEXT("USoundNodeLooping"), &Z_Registration_Info_UClass_USoundNodeLooping, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundNodeLooping), 3399686412U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeLooping_h_1054155064(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeLooping_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeLooping_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
