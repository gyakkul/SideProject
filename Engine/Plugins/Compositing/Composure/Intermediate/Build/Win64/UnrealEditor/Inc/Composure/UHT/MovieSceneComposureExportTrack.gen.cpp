// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/MovieScene/MovieSceneComposureExportTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneComposureExportTrack() {}
// Cross Module References
	COMPOSURE_API UClass* Z_Construct_UClass_UMovieSceneComposureExportSection();
	COMPOSURE_API UClass* Z_Construct_UClass_UMovieSceneComposureExportSection_NoRegister();
	COMPOSURE_API UClass* Z_Construct_UClass_UMovieSceneComposureExportTrack();
	COMPOSURE_API UClass* Z_Construct_UClass_UMovieSceneComposureExportTrack_NoRegister();
	COMPOSURE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneComposureExportPass();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Composure();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneComposureExportPass;
class UScriptStruct* FMovieSceneComposureExportPass::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneComposureExportPass.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneComposureExportPass.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneComposureExportPass, (UObject*)Z_Construct_UPackage__Script_Composure(), TEXT("MovieSceneComposureExportPass"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneComposureExportPass.OuterSingleton;
}
template<> COMPOSURE_API UScriptStruct* StaticStruct<FMovieSceneComposureExportPass>()
{
	return FMovieSceneComposureExportPass::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneComposureExportPass_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformPassName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TransformPassName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRenamePass_MetaData[];
#endif
		static void NewProp_bRenamePass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenamePass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExportedAs_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ExportedAs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneComposureExportPass_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Export configuration options for a single internal pass on an ACompositingElement, or its output pass (where TransformPassName is None)\n */" },
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneComposureExportTrack.h" },
		{ "ToolTip", "Export configuration options for a single internal pass on an ACompositingElement, or its output pass (where TransformPassName is None)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneComposureExportPass_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneComposureExportPass>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneComposureExportPass_Statics::NewProp_TransformPassName_MetaData[] = {
		{ "Category", "Export" },
		{ "Comment", "/** The name of the transform pass in the comp to export. None signifies the element's output. */" },
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneComposureExportTrack.h" },
		{ "ToolTip", "The name of the transform pass in the comp to export. None signifies the element's output." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieSceneComposureExportPass_Statics::NewProp_TransformPassName = { "TransformPassName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneComposureExportPass, TransformPassName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneComposureExportPass_Statics::NewProp_TransformPassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneComposureExportPass_Statics::NewProp_TransformPassName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneComposureExportPass_Statics::NewProp_bRenamePass_MetaData[] = {
		{ "Category", "Export" },
		{ "Comment", "/** Whether to rename this pass when rendering out */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneComposureExportTrack.h" },
		{ "ToolTip", "Whether to rename this pass when rendering out" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneComposureExportPass_Statics::NewProp_bRenamePass_SetBit(void* Obj)
	{
		((FMovieSceneComposureExportPass*)Obj)->bRenamePass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneComposureExportPass_Statics::NewProp_bRenamePass = { "bRenamePass", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMovieSceneComposureExportPass), &Z_Construct_UScriptStruct_FMovieSceneComposureExportPass_Statics::NewProp_bRenamePass_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneComposureExportPass_Statics::NewProp_bRenamePass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneComposureExportPass_Statics::NewProp_bRenamePass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneComposureExportPass_Statics::NewProp_ExportedAs_MetaData[] = {
		{ "Category", "Export" },
		{ "Comment", "/** The name to use for this pass when rendering out */" },
		{ "EditCondition", "bRenamePass" },
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneComposureExportTrack.h" },
		{ "ToolTip", "The name to use for this pass when rendering out" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieSceneComposureExportPass_Statics::NewProp_ExportedAs = { "ExportedAs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneComposureExportPass, ExportedAs), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneComposureExportPass_Statics::NewProp_ExportedAs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneComposureExportPass_Statics::NewProp_ExportedAs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneComposureExportPass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneComposureExportPass_Statics::NewProp_TransformPassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneComposureExportPass_Statics::NewProp_bRenamePass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneComposureExportPass_Statics::NewProp_ExportedAs,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneComposureExportPass_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Composure,
		nullptr,
		&NewStructOps,
		"MovieSceneComposureExportPass",
		sizeof(FMovieSceneComposureExportPass),
		alignof(FMovieSceneComposureExportPass),
		Z_Construct_UScriptStruct_FMovieSceneComposureExportPass_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneComposureExportPass_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneComposureExportPass_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneComposureExportPass_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneComposureExportPass()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneComposureExportPass.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneComposureExportPass.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneComposureExportPass_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneComposureExportPass.InnerSingleton;
	}
	void UMovieSceneComposureExportTrack::StaticRegisterNativesUMovieSceneComposureExportTrack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneComposureExportTrack);
	UClass* Z_Construct_UClass_UMovieSceneComposureExportTrack_NoRegister()
	{
		return UMovieSceneComposureExportTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneComposureExportTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pass_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pass;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Sections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Sections;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneComposureExportTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_Composure,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneComposureExportTrack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Movie scene track that exports a single pass (either the element's output, or an internal transform pass) during burnouts\n */" },
		{ "IncludePath", "MovieScene/MovieSceneComposureExportTrack.h" },
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneComposureExportTrack.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Movie scene track that exports a single pass (either the element's output, or an internal transform pass) during burnouts" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneComposureExportTrack_Statics::NewProp_Pass_MetaData[] = {
		{ "Category", "Export" },
		{ "Comment", "/**\n\x09 * Configuration options for the pass to export\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneComposureExportTrack.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Configuration options for the pass to export" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneComposureExportTrack_Statics::NewProp_Pass = { "Pass", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneComposureExportTrack, Pass), Z_Construct_UScriptStruct_FMovieSceneComposureExportPass, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneComposureExportTrack_Statics::NewProp_Pass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneComposureExportTrack_Statics::NewProp_Pass_MetaData)) }; // 4251892935
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneComposureExportTrack_Statics::NewProp_Sections_Inner = { "Sections", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneComposureExportTrack_Statics::NewProp_Sections_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneComposureExportTrack.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneComposureExportTrack_Statics::NewProp_Sections = { "Sections", nullptr, (EPropertyFlags)0x0044008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneComposureExportTrack, Sections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneComposureExportTrack_Statics::NewProp_Sections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneComposureExportTrack_Statics::NewProp_Sections_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneComposureExportTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneComposureExportTrack_Statics::NewProp_Pass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneComposureExportTrack_Statics::NewProp_Sections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneComposureExportTrack_Statics::NewProp_Sections,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneComposureExportTrack_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneComposureExportTrack, IMovieSceneTrackTemplateProducer), false },  // 2931163055
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneComposureExportTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneComposureExportTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneComposureExportTrack_Statics::ClassParams = {
		&UMovieSceneComposureExportTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneComposureExportTrack_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneComposureExportTrack_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneComposureExportTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneComposureExportTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneComposureExportTrack()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneComposureExportTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneComposureExportTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneComposureExportTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneComposureExportTrack.OuterSingleton;
	}
	template<> COMPOSURE_API UClass* StaticClass<UMovieSceneComposureExportTrack>()
	{
		return UMovieSceneComposureExportTrack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneComposureExportTrack);
	UMovieSceneComposureExportTrack::~UMovieSceneComposureExportTrack() {}
	void UMovieSceneComposureExportSection::StaticRegisterNativesUMovieSceneComposureExportSection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneComposureExportSection);
	UClass* Z_Construct_UClass_UMovieSceneComposureExportSection_NoRegister()
	{
		return UMovieSceneComposureExportSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneComposureExportSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneComposureExportSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_Composure,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneComposureExportSection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovieScene/MovieSceneComposureExportTrack.h" },
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneComposureExportTrack.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneComposureExportSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneComposureExportSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneComposureExportSection_Statics::ClassParams = {
		&UMovieSceneComposureExportSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneComposureExportSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneComposureExportSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneComposureExportSection()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneComposureExportSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneComposureExportSection.OuterSingleton, Z_Construct_UClass_UMovieSceneComposureExportSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneComposureExportSection.OuterSingleton;
	}
	template<> COMPOSURE_API UClass* StaticClass<UMovieSceneComposureExportSection>()
	{
		return UMovieSceneComposureExportSection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneComposureExportSection);
	UMovieSceneComposureExportSection::~UMovieSceneComposureExportSection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_MovieSceneComposureExportTrack_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_MovieSceneComposureExportTrack_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneComposureExportPass::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneComposureExportPass_Statics::NewStructOps, TEXT("MovieSceneComposureExportPass"), &Z_Registration_Info_UScriptStruct_MovieSceneComposureExportPass, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneComposureExportPass), 4251892935U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_MovieSceneComposureExportTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneComposureExportTrack, UMovieSceneComposureExportTrack::StaticClass, TEXT("UMovieSceneComposureExportTrack"), &Z_Registration_Info_UClass_UMovieSceneComposureExportTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneComposureExportTrack), 4220297097U) },
		{ Z_Construct_UClass_UMovieSceneComposureExportSection, UMovieSceneComposureExportSection::StaticClass, TEXT("UMovieSceneComposureExportSection"), &Z_Registration_Info_UClass_UMovieSceneComposureExportSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneComposureExportSection), 909273497U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_MovieSceneComposureExportTrack_h_3669914867(TEXT("/Script/Composure"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_MovieSceneComposureExportTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_MovieSceneComposureExportTrack_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_MovieSceneComposureExportTrack_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_MovieSceneComposureExportTrack_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
