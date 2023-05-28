// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimCompress_RemoveLinearKeys.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimCompress_RemoveLinearKeys() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_RemoveLinearKeys();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UAnimCompress_RemoveLinearKeys::StaticRegisterNativesUAnimCompress_RemoveLinearKeys()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimCompress_RemoveLinearKeys);
	UClass* Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_NoRegister()
	{
		return UAnimCompress_RemoveLinearKeys::StaticClass();
	}
	struct Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxPosDiff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxPosDiff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAngleDiff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAngleDiff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxScaleDiff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxScaleDiff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxEffectorDiff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxEffectorDiff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinEffectorDiff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinEffectorDiff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectorDiffSocket_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EffectorDiffSocket;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentKeyScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ParentKeyScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRetarget_MetaData[];
#endif
		static void NewProp_bRetarget_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRetarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bActuallyFilterLinearKeys_MetaData[];
#endif
		static void NewProp_bActuallyFilterLinearKeys_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bActuallyFilterLinearKeys;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimCompress,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Animation/AnimCompress_RemoveLinearKeys.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_RemoveLinearKeys.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_MaxPosDiff_MetaData[] = {
		{ "Category", "LinearKeyRemoval" },
		{ "Comment", "/** Maximum position difference to use when testing if an animation key may be removed. Lower values retain more keys, but yield less compression. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_RemoveLinearKeys.h" },
		{ "ToolTip", "Maximum position difference to use when testing if an animation key may be removed. Lower values retain more keys, but yield less compression." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_MaxPosDiff = { "MaxPosDiff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimCompress_RemoveLinearKeys, MaxPosDiff), METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_MaxPosDiff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_MaxPosDiff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_MaxAngleDiff_MetaData[] = {
		{ "Category", "LinearKeyRemoval" },
		{ "Comment", "/** Maximum angle difference to use when testing if an animation key may be removed. Lower values retain more keys, but yield less compression. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_RemoveLinearKeys.h" },
		{ "ToolTip", "Maximum angle difference to use when testing if an animation key may be removed. Lower values retain more keys, but yield less compression." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_MaxAngleDiff = { "MaxAngleDiff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimCompress_RemoveLinearKeys, MaxAngleDiff), METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_MaxAngleDiff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_MaxAngleDiff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_MaxScaleDiff_MetaData[] = {
		{ "Category", "LinearKeyRemoval" },
		{ "Comment", "/** Maximum Scale difference to use when testing if an animation key may be removed. Lower values retain more keys, but yield less compression. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_RemoveLinearKeys.h" },
		{ "ToolTip", "Maximum Scale difference to use when testing if an animation key may be removed. Lower values retain more keys, but yield less compression." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_MaxScaleDiff = { "MaxScaleDiff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimCompress_RemoveLinearKeys, MaxScaleDiff), METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_MaxScaleDiff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_MaxScaleDiff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_MaxEffectorDiff_MetaData[] = {
		{ "Category", "LinearKeyRemoval" },
		{ "Comment", "/** \n\x09 * As keys are tested for removal, we monitor the effects all the way down to the end effectors. \n\x09 * If their position changes by more than this amount as a result of removing a key, the key will be retained.\n\x09 * This value is used for all bones except the end-effectors parent.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_RemoveLinearKeys.h" },
		{ "ToolTip", "As keys are tested for removal, we monitor the effects all the way down to the end effectors.\nIf their position changes by more than this amount as a result of removing a key, the key will be retained.\nThis value is used for all bones except the end-effectors parent." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_MaxEffectorDiff = { "MaxEffectorDiff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimCompress_RemoveLinearKeys, MaxEffectorDiff), METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_MaxEffectorDiff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_MaxEffectorDiff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_MinEffectorDiff_MetaData[] = {
		{ "Category", "LinearKeyRemoval" },
		{ "Comment", "/** \n\x09 * As keys are tested for removal, we monitor the effects all the way down to the end effectors. \n\x09 * If their position changes by more than this amount as a result of removing a key, the key will be retained.\n\x09 * This value is used for the end-effectors parent, allowing tighter restrictions near the end of a skeletal chain.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_RemoveLinearKeys.h" },
		{ "ToolTip", "As keys are tested for removal, we monitor the effects all the way down to the end effectors.\nIf their position changes by more than this amount as a result of removing a key, the key will be retained.\nThis value is used for the end-effectors parent, allowing tighter restrictions near the end of a skeletal chain." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_MinEffectorDiff = { "MinEffectorDiff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimCompress_RemoveLinearKeys, MinEffectorDiff), METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_MinEffectorDiff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_MinEffectorDiff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_EffectorDiffSocket_MetaData[] = {
		{ "Category", "LinearKeyRemoval" },
		{ "Comment", "/** \n\x09 * Error threshold for End Effectors with Sockets attached to them.\n\x09 * Typically more important bone, where we want to be less aggressive with compression.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_RemoveLinearKeys.h" },
		{ "ToolTip", "Error threshold for End Effectors with Sockets attached to them.\nTypically more important bone, where we want to be less aggressive with compression." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_EffectorDiffSocket = { "EffectorDiffSocket", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimCompress_RemoveLinearKeys, EffectorDiffSocket), METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_EffectorDiffSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_EffectorDiffSocket_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_ParentKeyScale_MetaData[] = {
		{ "Category", "LinearKeyRemoval" },
		{ "Comment", "/** \n\x09 * A scale value which increases the likelihood that a bone will retain a key if it's parent also had a key at the same time position. \n\x09 * Higher values can remove shaking artifacts from the animation, at the cost of compression.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_RemoveLinearKeys.h" },
		{ "ToolTip", "A scale value which increases the likelihood that a bone will retain a key if it's parent also had a key at the same time position.\nHigher values can remove shaking artifacts from the animation, at the cost of compression." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_ParentKeyScale = { "ParentKeyScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimCompress_RemoveLinearKeys, ParentKeyScale), METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_ParentKeyScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_ParentKeyScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_bRetarget_MetaData[] = {
		{ "Category", "LinearKeyRemoval" },
		{ "Comment", "/** \n\x09 * true = As the animation is compressed, adjust animated nodes to compensate for compression error.\n\x09 * false= Do not adjust animated nodes.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_RemoveLinearKeys.h" },
		{ "ToolTip", "true = As the animation is compressed, adjust animated nodes to compensate for compression error.\nfalse= Do not adjust animated nodes." },
	};
#endif
	void Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_bRetarget_SetBit(void* Obj)
	{
		((UAnimCompress_RemoveLinearKeys*)Obj)->bRetarget = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_bRetarget = { "bRetarget", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAnimCompress_RemoveLinearKeys), &Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_bRetarget_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_bRetarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_bRetarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_bActuallyFilterLinearKeys_MetaData[] = {
		{ "Category", "LinearKeyRemoval" },
		{ "Comment", "/**\n\x09  * Controls whether the final filtering step will occur, or only the retargetting after bitwise compression.\n\x09  * If both this and bRetarget are false, then the linear compressor will do no better than the underlying bitwise compressor, extremely slowly.\n\x09  */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_RemoveLinearKeys.h" },
		{ "ToolTip", "Controls whether the final filtering step will occur, or only the retargetting after bitwise compression.\nIf both this and bRetarget are false, then the linear compressor will do no better than the underlying bitwise compressor, extremely slowly." },
	};
#endif
	void Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_bActuallyFilterLinearKeys_SetBit(void* Obj)
	{
		((UAnimCompress_RemoveLinearKeys*)Obj)->bActuallyFilterLinearKeys = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_bActuallyFilterLinearKeys = { "bActuallyFilterLinearKeys", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAnimCompress_RemoveLinearKeys), &Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_bActuallyFilterLinearKeys_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_bActuallyFilterLinearKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_bActuallyFilterLinearKeys_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_MaxPosDiff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_MaxAngleDiff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_MaxScaleDiff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_MaxEffectorDiff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_MinEffectorDiff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_EffectorDiffSocket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_ParentKeyScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_bRetarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_bActuallyFilterLinearKeys,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimCompress_RemoveLinearKeys>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::ClassParams = {
		&UAnimCompress_RemoveLinearKeys::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimCompress_RemoveLinearKeys()
	{
		if (!Z_Registration_Info_UClass_UAnimCompress_RemoveLinearKeys.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimCompress_RemoveLinearKeys.OuterSingleton, Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimCompress_RemoveLinearKeys.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAnimCompress_RemoveLinearKeys>()
	{
		return UAnimCompress_RemoveLinearKeys::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimCompress_RemoveLinearKeys);
	UAnimCompress_RemoveLinearKeys::~UAnimCompress_RemoveLinearKeys() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_RemoveLinearKeys_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_RemoveLinearKeys_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimCompress_RemoveLinearKeys, UAnimCompress_RemoveLinearKeys::StaticClass, TEXT("UAnimCompress_RemoveLinearKeys"), &Z_Registration_Info_UClass_UAnimCompress_RemoveLinearKeys, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimCompress_RemoveLinearKeys), 2805277851U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_RemoveLinearKeys_h_4116179957(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_RemoveLinearKeys_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_RemoveLinearKeys_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
