// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkAnimationVirtualSubject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkAnimationVirtualSubject() {}
// Cross Module References
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkAnimationVirtualSubject();
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_NoRegister();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkVirtualSubject();
	UPackage* Z_Construct_UPackage__Script_LiveLink();
// End Cross Module References
	void ULiveLinkAnimationVirtualSubject::StaticRegisterNativesULiveLinkAnimationVirtualSubject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkAnimationVirtualSubject);
	UClass* Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_NoRegister()
	{
		return ULiveLinkAnimationVirtualSubject::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAppendSubjectNameToBones_MetaData[];
#endif
		static void NewProp_bAppendSubjectNameToBones_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAppendSubjectNameToBones;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkVirtualSubject,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// A Skeleton virtual subject is an assembly of different subjects supporting the animation role\n" },
		{ "DisplayName", "Animation Virtual Subject" },
		{ "IncludePath", "LiveLinkAnimationVirtualSubject.h" },
		{ "ModuleRelativePath", "Public/LiveLinkAnimationVirtualSubject.h" },
		{ "ToolTip", "A Skeleton virtual subject is an assembly of different subjects supporting the animation role" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_Statics::NewProp_bAppendSubjectNameToBones_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "//Whether to append SubjectName to each bones part of the virtual hierarchy\n" },
		{ "ModuleRelativePath", "Public/LiveLinkAnimationVirtualSubject.h" },
		{ "ToolTip", "Whether to append SubjectName to each bones part of the virtual hierarchy" },
	};
#endif
	void Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_Statics::NewProp_bAppendSubjectNameToBones_SetBit(void* Obj)
	{
		((ULiveLinkAnimationVirtualSubject*)Obj)->bAppendSubjectNameToBones = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_Statics::NewProp_bAppendSubjectNameToBones = { "bAppendSubjectNameToBones", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULiveLinkAnimationVirtualSubject), &Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_Statics::NewProp_bAppendSubjectNameToBones_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_Statics::NewProp_bAppendSubjectNameToBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_Statics::NewProp_bAppendSubjectNameToBones_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_Statics::NewProp_bAppendSubjectNameToBones,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkAnimationVirtualSubject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_Statics::ClassParams = {
		&ULiveLinkAnimationVirtualSubject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkAnimationVirtualSubject()
	{
		if (!Z_Registration_Info_UClass_ULiveLinkAnimationVirtualSubject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkAnimationVirtualSubject.OuterSingleton, Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveLinkAnimationVirtualSubject.OuterSingleton;
	}
	template<> LIVELINK_API UClass* StaticClass<ULiveLinkAnimationVirtualSubject>()
	{
		return ULiveLinkAnimationVirtualSubject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkAnimationVirtualSubject);
	ULiveLinkAnimationVirtualSubject::~ULiveLinkAnimationVirtualSubject() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkAnimationVirtualSubject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkAnimationVirtualSubject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkAnimationVirtualSubject, ULiveLinkAnimationVirtualSubject::StaticClass, TEXT("ULiveLinkAnimationVirtualSubject"), &Z_Registration_Info_UClass_ULiveLinkAnimationVirtualSubject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkAnimationVirtualSubject), 813282327U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkAnimationVirtualSubject_h_822376963(TEXT("/Script/LiveLink"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkAnimationVirtualSubject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkAnimationVirtualSubject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
