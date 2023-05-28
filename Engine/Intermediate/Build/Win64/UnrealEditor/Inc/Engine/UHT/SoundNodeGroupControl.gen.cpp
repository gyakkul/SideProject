// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Sound/SoundNodeGroupControl.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeGroupControl() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundNode();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeGroupControl();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeGroupControl_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USoundNodeGroupControl::StaticRegisterNativesUSoundNodeGroupControl()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundNodeGroupControl);
	UClass* Z_Construct_UClass_USoundNodeGroupControl_NoRegister()
	{
		return USoundNodeGroupControl::StaticClass();
	}
	struct Z_Construct_UClass_USoundNodeGroupControl_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GroupSizes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupSizes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GroupSizes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundNodeGroupControl_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeGroupControl_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Plays different sounds depending on the number of active sounds\n * Any time a new sound is played, the first group that has an available slot will be chosen\n */" },
		{ "DisplayName", "Group Control" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundNodeGroupControl.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeGroupControl.h" },
		{ "ToolTip", "Plays different sounds depending on the number of active sounds\nAny time a new sound is played, the first group that has an available slot will be chosen" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundNodeGroupControl_Statics::NewProp_GroupSizes_Inner = { "GroupSizes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeGroupControl_Statics::NewProp_GroupSizes_MetaData[] = {
		{ "Category", "GroupControl" },
		{ "Comment", "/* How many active sounds are allowed for each group */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeGroupControl.h" },
		{ "ToolTip", "How many active sounds are allowed for each group" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundNodeGroupControl_Statics::NewProp_GroupSizes = { "GroupSizes", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundNodeGroupControl, GroupSizes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USoundNodeGroupControl_Statics::NewProp_GroupSizes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeGroupControl_Statics::NewProp_GroupSizes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundNodeGroupControl_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeGroupControl_Statics::NewProp_GroupSizes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeGroupControl_Statics::NewProp_GroupSizes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundNodeGroupControl_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundNodeGroupControl>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundNodeGroupControl_Statics::ClassParams = {
		&USoundNodeGroupControl::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundNodeGroupControl_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeGroupControl_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundNodeGroupControl_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeGroupControl_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundNodeGroupControl()
	{
		if (!Z_Registration_Info_UClass_USoundNodeGroupControl.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundNodeGroupControl.OuterSingleton, Z_Construct_UClass_USoundNodeGroupControl_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundNodeGroupControl.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USoundNodeGroupControl>()
	{
		return USoundNodeGroupControl::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeGroupControl);
	USoundNodeGroupControl::~USoundNodeGroupControl() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeGroupControl_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeGroupControl_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundNodeGroupControl, USoundNodeGroupControl::StaticClass, TEXT("USoundNodeGroupControl"), &Z_Registration_Info_UClass_USoundNodeGroupControl, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundNodeGroupControl), 720234345U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeGroupControl_h_1733661103(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeGroupControl_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeGroupControl_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
