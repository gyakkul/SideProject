// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sections/MovieSceneCameraCutSection.h"
#include "MovieSceneObjectBindingID.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCameraCutSection() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCameraCutSection();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCameraCutSection_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	DEFINE_FUNCTION(UMovieSceneCameraCutSection::execSetCameraBindingID)
	{
		P_GET_STRUCT_REF(FMovieSceneObjectBindingID,Z_Param_Out_InCameraBindingID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCameraBindingID(Z_Param_Out_InCameraBindingID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneCameraCutSection::execGetCameraBindingID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMovieSceneObjectBindingID*)Z_Param__Result=P_THIS->GetCameraBindingID();
		P_NATIVE_END;
	}
	void UMovieSceneCameraCutSection::StaticRegisterNativesUMovieSceneCameraCutSection()
	{
		UClass* Class = UMovieSceneCameraCutSection::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCameraBindingID", &UMovieSceneCameraCutSection::execGetCameraBindingID },
			{ "SetCameraBindingID", &UMovieSceneCameraCutSection::execSetCameraBindingID },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovieSceneCameraCutSection_GetCameraBindingID_Statics
	{
		struct MovieSceneCameraCutSection_eventGetCameraBindingID_Parms
		{
			FMovieSceneObjectBindingID ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneCameraCutSection_GetCameraBindingID_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneCameraCutSection_GetCameraBindingID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneCameraCutSection_eventGetCameraBindingID_Parms, ReturnValue), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneCameraCutSection_GetCameraBindingID_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCameraCutSection_GetCameraBindingID_Statics::NewProp_ReturnValue_MetaData)) }; // 1341447431
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneCameraCutSection_GetCameraBindingID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCameraCutSection_GetCameraBindingID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneCameraCutSection_GetCameraBindingID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/** Gets the camera binding for this CameraCut section */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraCutSection.h" },
		{ "ToolTip", "Gets the camera binding for this CameraCut section" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneCameraCutSection_GetCameraBindingID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneCameraCutSection, nullptr, "GetCameraBindingID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneCameraCutSection_GetCameraBindingID_Statics::MovieSceneCameraCutSection_eventGetCameraBindingID_Parms), Z_Construct_UFunction_UMovieSceneCameraCutSection_GetCameraBindingID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCameraCutSection_GetCameraBindingID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneCameraCutSection_GetCameraBindingID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCameraCutSection_GetCameraBindingID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneCameraCutSection_GetCameraBindingID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneCameraCutSection_GetCameraBindingID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneCameraCutSection_SetCameraBindingID_Statics
	{
		struct MovieSceneCameraCutSection_eventSetCameraBindingID_Parms
		{
			FMovieSceneObjectBindingID InCameraBindingID;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCameraBindingID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InCameraBindingID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneCameraCutSection_SetCameraBindingID_Statics::NewProp_InCameraBindingID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneCameraCutSection_SetCameraBindingID_Statics::NewProp_InCameraBindingID = { "InCameraBindingID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneCameraCutSection_eventSetCameraBindingID_Parms, InCameraBindingID), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneCameraCutSection_SetCameraBindingID_Statics::NewProp_InCameraBindingID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCameraCutSection_SetCameraBindingID_Statics::NewProp_InCameraBindingID_MetaData)) }; // 1341447431
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneCameraCutSection_SetCameraBindingID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCameraCutSection_SetCameraBindingID_Statics::NewProp_InCameraBindingID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneCameraCutSection_SetCameraBindingID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/** Sets the camera binding for this CameraCut section */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraCutSection.h" },
		{ "ToolTip", "Sets the camera binding for this CameraCut section" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneCameraCutSection_SetCameraBindingID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneCameraCutSection, nullptr, "SetCameraBindingID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneCameraCutSection_SetCameraBindingID_Statics::MovieSceneCameraCutSection_eventSetCameraBindingID_Parms), Z_Construct_UFunction_UMovieSceneCameraCutSection_SetCameraBindingID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCameraCutSection_SetCameraBindingID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneCameraCutSection_SetCameraBindingID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCameraCutSection_SetCameraBindingID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneCameraCutSection_SetCameraBindingID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneCameraCutSection_SetCameraBindingID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneCameraCutSection);
	UClass* Z_Construct_UClass_UMovieSceneCameraCutSection_NoRegister()
	{
		return UMovieSceneCameraCutSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneCameraCutSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLockPreviousCamera_MetaData[];
#endif
		static void NewProp_bLockPreviousCamera_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockPreviousCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBindingID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraBindingID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialCameraCutTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitialCameraCutTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasInitialCameraCutTransform_MetaData[];
#endif
		static void NewProp_bHasInitialCameraCutTransform_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasInitialCameraCutTransform;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailReferenceOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ThumbnailReferenceOffset;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneCameraCutSection_GetCameraBindingID, "GetCameraBindingID" }, // 1179968653
		{ &Z_Construct_UFunction_UMovieSceneCameraCutSection_SetCameraBindingID, "SetCameraBindingID" }, // 85431494
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Movie CameraCuts are sections on the CameraCuts track, that show what the viewer \"sees\"\n */" },
		{ "IncludePath", "Sections/MovieSceneCameraCutSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraCutSection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Movie CameraCuts are sections on the CameraCuts track, that show what the viewer \"sees\"" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_bLockPreviousCamera_MetaData[] = {
		{ "Category", "Section" },
		{ "Comment", "/** When blending, lock the previous camera (camera cut or gameplay camera). */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraCutSection.h" },
		{ "ToolTip", "When blending, lock the previous camera (camera cut or gameplay camera)." },
	};
#endif
	void Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_bLockPreviousCamera_SetBit(void* Obj)
	{
		((UMovieSceneCameraCutSection*)Obj)->bLockPreviousCamera = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_bLockPreviousCamera = { "bLockPreviousCamera", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieSceneCameraCutSection), &Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_bLockPreviousCamera_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_bLockPreviousCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_bLockPreviousCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_CameraGuid_MetaData[] = {
		{ "Comment", "/** The camera possessable or spawnable that this movie CameraCut uses */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraCutSection.h" },
		{ "ToolTip", "The camera possessable or spawnable that this movie CameraCut uses" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_CameraGuid = { "CameraGuid", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneCameraCutSection, CameraGuid_DEPRECATED), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_CameraGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_CameraGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_CameraBindingID_MetaData[] = {
		{ "Category", "Section" },
		{ "Comment", "/** The camera binding that this movie CameraCut uses */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraCutSection.h" },
		{ "ToolTip", "The camera binding that this movie CameraCut uses" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_CameraBindingID = { "CameraBindingID", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneCameraCutSection, CameraBindingID), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_CameraBindingID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_CameraBindingID_MetaData)) }; // 1341447431
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_InitialCameraCutTransform_MetaData[] = {
		{ "Comment", "/** Camera transform at the start of the cut, computed at compile time */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraCutSection.h" },
		{ "ToolTip", "Camera transform at the start of the cut, computed at compile time" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_InitialCameraCutTransform = { "InitialCameraCutTransform", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneCameraCutSection, InitialCameraCutTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_InitialCameraCutTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_InitialCameraCutTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_bHasInitialCameraCutTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraCutSection.h" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_bHasInitialCameraCutTransform_SetBit(void* Obj)
	{
		((UMovieSceneCameraCutSection*)Obj)->bHasInitialCameraCutTransform = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_bHasInitialCameraCutTransform = { "bHasInitialCameraCutTransform", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieSceneCameraCutSection), &Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_bHasInitialCameraCutTransform_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_bHasInitialCameraCutTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_bHasInitialCameraCutTransform_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_ThumbnailReferenceOffset_MetaData[] = {
		{ "Comment", "/** The reference frame offset for single thumbnail rendering */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraCutSection.h" },
		{ "ToolTip", "The reference frame offset for single thumbnail rendering" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_ThumbnailReferenceOffset = { "ThumbnailReferenceOffset", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneCameraCutSection, ThumbnailReferenceOffset), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_ThumbnailReferenceOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_ThumbnailReferenceOffset_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_bLockPreviousCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_CameraGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_CameraBindingID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_InitialCameraCutTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_bHasInitialCameraCutTransform,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_ThumbnailReferenceOffset,
#endif // WITH_EDITORONLY_DATA
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneCameraCutSection, IMovieSceneEntityProvider), false },  // 1947645787
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneCameraCutSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::ClassParams = {
		&UMovieSceneCameraCutSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneCameraCutSection()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneCameraCutSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneCameraCutSection.OuterSingleton, Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneCameraCutSection.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneCameraCutSection>()
	{
		return UMovieSceneCameraCutSection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCameraCutSection);
	UMovieSceneCameraCutSection::~UMovieSceneCameraCutSection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraCutSection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraCutSection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneCameraCutSection, UMovieSceneCameraCutSection::StaticClass, TEXT("UMovieSceneCameraCutSection"), &Z_Registration_Info_UClass_UMovieSceneCameraCutSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneCameraCutSection), 2926890011U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraCutSection_h_528223362(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraCutSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraCutSection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
