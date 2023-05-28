// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VREditorBaseActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVREditorBaseActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_VREditor();
	VREDITOR_API UClass* Z_Construct_UClass_AVREditorBaseActor();
	VREDITOR_API UClass* Z_Construct_UClass_AVREditorBaseActor_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorMode_NoRegister();
// End Cross Module References
	void AVREditorBaseActor::StaticRegisterNativesAVREditorBaseActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVREditorBaseActor);
	UClass* Z_Construct_UClass_AVREditorBaseActor_NoRegister()
	{
		return AVREditorBaseActor::StaticClass();
	}
	struct Z_Construct_UClass_AVREditorBaseActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VRMode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VRMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVREditorBaseActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VREditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorBaseActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Represents an actor specifically for VR Editor that has roomspace transformation\n*/" },
		{ "IncludePath", "VREditorBaseActor.h" },
		{ "ModuleRelativePath", "VREditorBaseActor.h" },
		{ "ToolTip", "Represents an actor specifically for VR Editor that has roomspace transformation" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorBaseActor_Statics::NewProp_VRMode_MetaData[] = {
		{ "Comment", "/** The VR mode that owns this actor */" },
		{ "ModuleRelativePath", "VREditorBaseActor.h" },
		{ "ToolTip", "The VR mode that owns this actor" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVREditorBaseActor_Statics::NewProp_VRMode = { "VRMode", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVREditorBaseActor, VRMode), Z_Construct_UClass_UVREditorMode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVREditorBaseActor_Statics::NewProp_VRMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVREditorBaseActor_Statics::NewProp_VRMode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVREditorBaseActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorBaseActor_Statics::NewProp_VRMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVREditorBaseActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVREditorBaseActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVREditorBaseActor_Statics::ClassParams = {
		&AVREditorBaseActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVREditorBaseActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AVREditorBaseActor_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVREditorBaseActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVREditorBaseActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVREditorBaseActor()
	{
		if (!Z_Registration_Info_UClass_AVREditorBaseActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVREditorBaseActor.OuterSingleton, Z_Construct_UClass_AVREditorBaseActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVREditorBaseActor.OuterSingleton;
	}
	template<> VREDITOR_API UClass* StaticClass<AVREditorBaseActor>()
	{
		return AVREditorBaseActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVREditorBaseActor);
	AVREditorBaseActor::~AVREditorBaseActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_VREditorBaseActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_VREditorBaseActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVREditorBaseActor, AVREditorBaseActor::StaticClass, TEXT("AVREditorBaseActor"), &Z_Registration_Info_UClass_AVREditorBaseActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVREditorBaseActor), 1185357705U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_VREditorBaseActor_h_780915055(TEXT("/Script/VREditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_VREditorBaseActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_VREditorBaseActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
