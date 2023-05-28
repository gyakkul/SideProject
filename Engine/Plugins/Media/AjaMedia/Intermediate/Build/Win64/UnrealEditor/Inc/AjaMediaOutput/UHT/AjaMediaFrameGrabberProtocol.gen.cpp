// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AjaMediaFrameGrabberProtocol.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAjaMediaFrameGrabberProtocol() {}
// Cross Module References
	AJAMEDIAOUTPUT_API UClass* Z_Construct_UClass_UAjaFrameGrabberProtocol();
	AJAMEDIAOUTPUT_API UClass* Z_Construct_UClass_UAjaFrameGrabberProtocol_NoRegister();
	AJAMEDIAOUTPUT_API UClass* Z_Construct_UClass_UAjaMediaCapture_NoRegister();
	AJAMEDIAOUTPUT_API UClass* Z_Construct_UClass_UAjaMediaOutput_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase();
	UPackage* Z_Construct_UPackage__Script_AjaMediaOutput();
// End Cross Module References
	void UAjaFrameGrabberProtocol::StaticRegisterNativesUAjaFrameGrabberProtocol()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAjaFrameGrabberProtocol);
	UClass* Z_Construct_UClass_UAjaFrameGrabberProtocol_NoRegister()
	{
		return UAjaFrameGrabberProtocol::StaticClass();
	}
	struct Z_Construct_UClass_UAjaFrameGrabberProtocol_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaOutput_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MediaOutput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Information_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Information;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransientMediaOutputPtr_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TransientMediaOutputPtr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransientMediaCapturePtr_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TransientMediaCapturePtr;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAjaFrameGrabberProtocol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AjaMediaOutput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAjaFrameGrabberProtocol_Statics::Class_MetaDataParams[] = {
		{ "CommandLineID", "AJAOutput" },
		{ "DisplayName", "AJA Output" },
		{ "IncludePath", "AjaMediaFrameGrabberProtocol.h" },
		{ "ModuleRelativePath", "Public/AjaMediaFrameGrabberProtocol.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAjaFrameGrabberProtocol_Statics::NewProp_MediaOutput_MetaData[] = {
		{ "AllowedClasses", "/Script/AjaMediaOutput.AjaMediaOutput" },
		{ "Category", "AJA" },
		{ "Comment", "/** AJA Setting to use for the FrameGrabberProtocol */" },
		{ "ModuleRelativePath", "Public/AjaMediaFrameGrabberProtocol.h" },
		{ "ToolTip", "AJA Setting to use for the FrameGrabberProtocol" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAjaFrameGrabberProtocol_Statics::NewProp_MediaOutput = { "MediaOutput", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAjaFrameGrabberProtocol, MediaOutput), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UAjaFrameGrabberProtocol_Statics::NewProp_MediaOutput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAjaFrameGrabberProtocol_Statics::NewProp_MediaOutput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAjaFrameGrabberProtocol_Statics::NewProp_Information_MetaData[] = {
		{ "Category", "AJA" },
		{ "Comment", "/** States unused options for AJAFrameGrabberProtocolSettings */" },
		{ "ModuleRelativePath", "Public/AjaMediaFrameGrabberProtocol.h" },
		{ "ToolTip", "States unused options for AJAFrameGrabberProtocolSettings" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAjaFrameGrabberProtocol_Statics::NewProp_Information = { "Information", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAjaFrameGrabberProtocol, Information), METADATA_PARAMS(Z_Construct_UClass_UAjaFrameGrabberProtocol_Statics::NewProp_Information_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAjaFrameGrabberProtocol_Statics::NewProp_Information_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAjaFrameGrabberProtocol_Statics::NewProp_TransientMediaOutputPtr_MetaData[] = {
		{ "Comment", "/** Transient media output pointer to keep the media output alive while this protocol is in use */" },
		{ "ModuleRelativePath", "Public/AjaMediaFrameGrabberProtocol.h" },
		{ "ToolTip", "Transient media output pointer to keep the media output alive while this protocol is in use" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAjaFrameGrabberProtocol_Statics::NewProp_TransientMediaOutputPtr = { "TransientMediaOutputPtr", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAjaFrameGrabberProtocol, TransientMediaOutputPtr), Z_Construct_UClass_UAjaMediaOutput_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAjaFrameGrabberProtocol_Statics::NewProp_TransientMediaOutputPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAjaFrameGrabberProtocol_Statics::NewProp_TransientMediaOutputPtr_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAjaFrameGrabberProtocol_Statics::NewProp_TransientMediaCapturePtr_MetaData[] = {
		{ "Comment", "/** Transient media capture pointer that will capture the viewport */" },
		{ "ModuleRelativePath", "Public/AjaMediaFrameGrabberProtocol.h" },
		{ "ToolTip", "Transient media capture pointer that will capture the viewport" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAjaFrameGrabberProtocol_Statics::NewProp_TransientMediaCapturePtr = { "TransientMediaCapturePtr", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAjaFrameGrabberProtocol, TransientMediaCapturePtr), Z_Construct_UClass_UAjaMediaCapture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAjaFrameGrabberProtocol_Statics::NewProp_TransientMediaCapturePtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAjaFrameGrabberProtocol_Statics::NewProp_TransientMediaCapturePtr_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAjaFrameGrabberProtocol_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAjaFrameGrabberProtocol_Statics::NewProp_MediaOutput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAjaFrameGrabberProtocol_Statics::NewProp_Information,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAjaFrameGrabberProtocol_Statics::NewProp_TransientMediaOutputPtr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAjaFrameGrabberProtocol_Statics::NewProp_TransientMediaCapturePtr,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAjaFrameGrabberProtocol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAjaFrameGrabberProtocol>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAjaFrameGrabberProtocol_Statics::ClassParams = {
		&UAjaFrameGrabberProtocol::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAjaFrameGrabberProtocol_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAjaFrameGrabberProtocol_Statics::PropPointers),
		0,
		0x001004A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAjaFrameGrabberProtocol_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAjaFrameGrabberProtocol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAjaFrameGrabberProtocol()
	{
		if (!Z_Registration_Info_UClass_UAjaFrameGrabberProtocol.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAjaFrameGrabberProtocol.OuterSingleton, Z_Construct_UClass_UAjaFrameGrabberProtocol_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAjaFrameGrabberProtocol.OuterSingleton;
	}
	template<> AJAMEDIAOUTPUT_API UClass* StaticClass<UAjaFrameGrabberProtocol>()
	{
		return UAjaFrameGrabberProtocol::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAjaFrameGrabberProtocol);
	UAjaFrameGrabberProtocol::~UAjaFrameGrabberProtocol() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaOutput_Public_AjaMediaFrameGrabberProtocol_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaOutput_Public_AjaMediaFrameGrabberProtocol_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAjaFrameGrabberProtocol, UAjaFrameGrabberProtocol::StaticClass, TEXT("UAjaFrameGrabberProtocol"), &Z_Registration_Info_UClass_UAjaFrameGrabberProtocol, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAjaFrameGrabberProtocol), 4113722503U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaOutput_Public_AjaMediaFrameGrabberProtocol_h_3248373771(TEXT("/Script/AjaMediaOutput"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaOutput_Public_AjaMediaFrameGrabberProtocol_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaOutput_Public_AjaMediaFrameGrabberProtocol_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
