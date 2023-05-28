// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XRLoadingScreenFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXRLoadingScreenFunctionLibrary() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UXRLoadingScreenFunctionLibrary();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UXRLoadingScreenFunctionLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HeadMountedDisplay();
// End Cross Module References
	DEFINE_FUNCTION(UXRLoadingScreenFunctionLibrary::execHideLoadingScreen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UXRLoadingScreenFunctionLibrary::HideLoadingScreen();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXRLoadingScreenFunctionLibrary::execShowLoadingScreen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UXRLoadingScreenFunctionLibrary::ShowLoadingScreen();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXRLoadingScreenFunctionLibrary::execAddLoadingScreenSplash)
	{
		P_GET_OBJECT(UTexture,Z_Param_Texture);
		P_GET_STRUCT(FVector,Z_Param_Translation);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_STRUCT(FVector2D,Z_Param_Size);
		P_GET_STRUCT(FRotator,Z_Param_DeltaRotation);
		P_GET_UBOOL(Z_Param_bClearBeforeAdd);
		P_FINISH;
		P_NATIVE_BEGIN;
		UXRLoadingScreenFunctionLibrary::AddLoadingScreenSplash(Z_Param_Texture,Z_Param_Translation,Z_Param_Rotation,Z_Param_Size,Z_Param_DeltaRotation,Z_Param_bClearBeforeAdd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXRLoadingScreenFunctionLibrary::execClearLoadingScreenSplashes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UXRLoadingScreenFunctionLibrary::ClearLoadingScreenSplashes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXRLoadingScreenFunctionLibrary::execSetLoadingScreen)
	{
		P_GET_OBJECT(UTexture,Z_Param_Texture);
		P_GET_STRUCT(FVector2D,Z_Param_Scale);
		P_GET_STRUCT(FVector,Z_Param_Offset);
		P_GET_UBOOL(Z_Param_bShowLoadingMovie);
		P_GET_UBOOL(Z_Param_bShowOnSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		UXRLoadingScreenFunctionLibrary::SetLoadingScreen(Z_Param_Texture,Z_Param_Scale,Z_Param_Offset,Z_Param_bShowLoadingMovie,Z_Param_bShowOnSet);
		P_NATIVE_END;
	}
	void UXRLoadingScreenFunctionLibrary::StaticRegisterNativesUXRLoadingScreenFunctionLibrary()
	{
		UClass* Class = UXRLoadingScreenFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddLoadingScreenSplash", &UXRLoadingScreenFunctionLibrary::execAddLoadingScreenSplash },
			{ "ClearLoadingScreenSplashes", &UXRLoadingScreenFunctionLibrary::execClearLoadingScreenSplashes },
			{ "HideLoadingScreen", &UXRLoadingScreenFunctionLibrary::execHideLoadingScreen },
			{ "SetLoadingScreen", &UXRLoadingScreenFunctionLibrary::execSetLoadingScreen },
			{ "ShowLoadingScreen", &UXRLoadingScreenFunctionLibrary::execShowLoadingScreen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash_Statics
	{
		struct XRLoadingScreenFunctionLibrary_eventAddLoadingScreenSplash_Parms
		{
			UTexture* Texture;
			FVector Translation;
			FRotator Rotation;
			FVector2D Size;
			FRotator DeltaRotation;
			bool bClearBeforeAdd;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Translation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeltaRotation;
		static void NewProp_bClearBeforeAdd_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClearBeforeAdd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(XRLoadingScreenFunctionLibrary_eventAddLoadingScreenSplash_Parms, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash_Statics::NewProp_Translation = { "Translation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(XRLoadingScreenFunctionLibrary_eventAddLoadingScreenSplash_Parms, Translation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(XRLoadingScreenFunctionLibrary_eventAddLoadingScreenSplash_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(XRLoadingScreenFunctionLibrary_eventAddLoadingScreenSplash_Parms, Size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash_Statics::NewProp_DeltaRotation = { "DeltaRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(XRLoadingScreenFunctionLibrary_eventAddLoadingScreenSplash_Parms, DeltaRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash_Statics::NewProp_bClearBeforeAdd_SetBit(void* Obj)
	{
		((XRLoadingScreenFunctionLibrary_eventAddLoadingScreenSplash_Parms*)Obj)->bClearBeforeAdd = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash_Statics::NewProp_bClearBeforeAdd = { "bClearBeforeAdd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(XRLoadingScreenFunctionLibrary_eventAddLoadingScreenSplash_Parms), &Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash_Statics::NewProp_bClearBeforeAdd_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash_Statics::NewProp_Translation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash_Statics::NewProp_DeltaRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash_Statics::NewProp_bClearBeforeAdd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay|LoadingScreen" },
		{ "Comment", "/**\n     * Adds a splash element to the loading screen.\n     *\n\x09 * @param Texture\x09\x09\x09(in) A texture asset to be used for the splash.\n\x09 * @param Translation       (in) Initial translation of the center of the splash.\n\x09 * @param Rotation\x09\x09\x09(in) Initial rotation of the splash screen, with the origin at the center of the splash.\n\x09 * @param Size      \x09\x09(in) Size, of the quad with the splash screen.\n\x09 * @param DeltaRotation\x09\x09(in) Incremental rotation, that is added each 2nd frame to the quad transform. The quad is rotated around the center of the quad.\n\x09 * @param bClearBeforeAdd\x09(in) If true, clears splashes before adding a new one.\n\x09 */" },
		{ "CPP_Default_bClearBeforeAdd", "false" },
		{ "CPP_Default_DeltaRotation", "" },
		{ "CPP_Default_Size", "(X=1.000,Y=1.000)" },
		{ "ModuleRelativePath", "Public/XRLoadingScreenFunctionLibrary.h" },
		{ "ToolTip", "Adds a splash element to the loading screen.\n\n@param Texture                       (in) A texture asset to be used for the splash.\n@param Translation       (in) Initial translation of the center of the splash.\n@param Rotation                      (in) Initial rotation of the splash screen, with the origin at the center of the splash.\n@param Size                  (in) Size, of the quad with the splash screen.\n@param DeltaRotation         (in) Incremental rotation, that is added each 2nd frame to the quad transform. The quad is rotated around the center of the quad.\n@param bClearBeforeAdd       (in) If true, clears splashes before adding a new one." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXRLoadingScreenFunctionLibrary, nullptr, "AddLoadingScreenSplash", nullptr, nullptr, sizeof(Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash_Statics::XRLoadingScreenFunctionLibrary_eventAddLoadingScreenSplash_Parms), Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_ClearLoadingScreenSplashes_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_ClearLoadingScreenSplashes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay|LoadingScreen" },
		{ "ModuleRelativePath", "Public/XRLoadingScreenFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_ClearLoadingScreenSplashes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXRLoadingScreenFunctionLibrary, nullptr, "ClearLoadingScreenSplashes", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_ClearLoadingScreenSplashes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_ClearLoadingScreenSplashes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_ClearLoadingScreenSplashes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_ClearLoadingScreenSplashes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_HideLoadingScreen_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_HideLoadingScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay|LoadingScreen" },
		{ "Comment", "/**\n\x09 * Hide the splash screen and return to normal display.\n\x09 */" },
		{ "ModuleRelativePath", "Public/XRLoadingScreenFunctionLibrary.h" },
		{ "ToolTip", "Hide the splash screen and return to normal display." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_HideLoadingScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXRLoadingScreenFunctionLibrary, nullptr, "HideLoadingScreen", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_HideLoadingScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_HideLoadingScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_HideLoadingScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_HideLoadingScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_SetLoadingScreen_Statics
	{
		struct XRLoadingScreenFunctionLibrary_eventSetLoadingScreen_Parms
		{
			UTexture* Texture;
			FVector2D Scale;
			FVector Offset;
			bool bShowLoadingMovie;
			bool bShowOnSet;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
		static void NewProp_bShowLoadingMovie_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowLoadingMovie;
		static void NewProp_bShowOnSet_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowOnSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_SetLoadingScreen_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(XRLoadingScreenFunctionLibrary_eventSetLoadingScreen_Parms, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_SetLoadingScreen_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(XRLoadingScreenFunctionLibrary_eventSetLoadingScreen_Parms, Scale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_SetLoadingScreen_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(XRLoadingScreenFunctionLibrary_eventSetLoadingScreen_Parms, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_SetLoadingScreen_Statics::NewProp_bShowLoadingMovie_SetBit(void* Obj)
	{
		((XRLoadingScreenFunctionLibrary_eventSetLoadingScreen_Parms*)Obj)->bShowLoadingMovie = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_SetLoadingScreen_Statics::NewProp_bShowLoadingMovie = { "bShowLoadingMovie", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(XRLoadingScreenFunctionLibrary_eventSetLoadingScreen_Parms), &Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_SetLoadingScreen_Statics::NewProp_bShowLoadingMovie_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_SetLoadingScreen_Statics::NewProp_bShowOnSet_SetBit(void* Obj)
	{
		((XRLoadingScreenFunctionLibrary_eventSetLoadingScreen_Parms*)Obj)->bShowOnSet = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_SetLoadingScreen_Statics::NewProp_bShowOnSet = { "bShowOnSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(XRLoadingScreenFunctionLibrary_eventSetLoadingScreen_Parms), &Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_SetLoadingScreen_Statics::NewProp_bShowOnSet_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_SetLoadingScreen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_SetLoadingScreen_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_SetLoadingScreen_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_SetLoadingScreen_Statics::NewProp_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_SetLoadingScreen_Statics::NewProp_bShowLoadingMovie,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_SetLoadingScreen_Statics::NewProp_bShowOnSet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_SetLoadingScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay|LoadingScreen" },
		{ "CPP_Default_bShowLoadingMovie", "false" },
		{ "CPP_Default_bShowOnSet", "false" },
		{ "CPP_Default_Offset", "" },
		{ "CPP_Default_Scale", "(X=1.000,Y=1.000)" },
		{ "ModuleRelativePath", "Public/XRLoadingScreenFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_SetLoadingScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXRLoadingScreenFunctionLibrary, nullptr, "SetLoadingScreen", nullptr, nullptr, sizeof(Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_SetLoadingScreen_Statics::XRLoadingScreenFunctionLibrary_eventSetLoadingScreen_Parms), Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_SetLoadingScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_SetLoadingScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_SetLoadingScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_SetLoadingScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_SetLoadingScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_SetLoadingScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_ShowLoadingScreen_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_ShowLoadingScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay|LoadingScreen" },
		{ "Comment", "/**\n\x09 * Show the loading screen and override the VR display\n\x09 */" },
		{ "ModuleRelativePath", "Public/XRLoadingScreenFunctionLibrary.h" },
		{ "ToolTip", "Show the loading screen and override the VR display" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_ShowLoadingScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXRLoadingScreenFunctionLibrary, nullptr, "ShowLoadingScreen", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_ShowLoadingScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_ShowLoadingScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_ShowLoadingScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_ShowLoadingScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UXRLoadingScreenFunctionLibrary);
	UClass* Z_Construct_UClass_UXRLoadingScreenFunctionLibrary_NoRegister()
	{
		return UXRLoadingScreenFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UXRLoadingScreenFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXRLoadingScreenFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_HeadMountedDisplay,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UXRLoadingScreenFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash, "AddLoadingScreenSplash" }, // 1422779169
		{ &Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_ClearLoadingScreenSplashes, "ClearLoadingScreenSplashes" }, // 1110803081
		{ &Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_HideLoadingScreen, "HideLoadingScreen" }, // 1115997239
		{ &Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_SetLoadingScreen, "SetLoadingScreen" }, // 310703933
		{ &Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_ShowLoadingScreen, "ShowLoadingScreen" }, // 203802809
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRLoadingScreenFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * XR Loading Screen Function Library \n */" },
		{ "IncludePath", "XRLoadingScreenFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/XRLoadingScreenFunctionLibrary.h" },
		{ "ToolTip", "XR Loading Screen Function Library" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXRLoadingScreenFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXRLoadingScreenFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UXRLoadingScreenFunctionLibrary_Statics::ClassParams = {
		&UXRLoadingScreenFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UXRLoadingScreenFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXRLoadingScreenFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXRLoadingScreenFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UXRLoadingScreenFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UXRLoadingScreenFunctionLibrary.OuterSingleton, Z_Construct_UClass_UXRLoadingScreenFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UXRLoadingScreenFunctionLibrary.OuterSingleton;
	}
	template<> HEADMOUNTEDDISPLAY_API UClass* StaticClass<UXRLoadingScreenFunctionLibrary>()
	{
		return UXRLoadingScreenFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXRLoadingScreenFunctionLibrary);
	UXRLoadingScreenFunctionLibrary::~UXRLoadingScreenFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_XRLoadingScreenFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_XRLoadingScreenFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UXRLoadingScreenFunctionLibrary, UXRLoadingScreenFunctionLibrary::StaticClass, TEXT("UXRLoadingScreenFunctionLibrary"), &Z_Registration_Info_UClass_UXRLoadingScreenFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UXRLoadingScreenFunctionLibrary), 4076137642U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_XRLoadingScreenFunctionLibrary_h_2881290359(TEXT("/Script/HeadMountedDisplay"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_XRLoadingScreenFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_XRLoadingScreenFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
