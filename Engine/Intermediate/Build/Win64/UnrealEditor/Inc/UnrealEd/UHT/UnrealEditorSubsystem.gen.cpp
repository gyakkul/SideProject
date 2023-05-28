// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/Subsystems/UnrealEditorSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealEditorSubsystem() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UUnrealEditorSubsystem();
	UNREALED_API UClass* Z_Construct_UClass_UUnrealEditorSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	DEFINE_FUNCTION(UUnrealEditorSubsystem::execGetGameWorld)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWorld**)Z_Param__Result=P_THIS->GetGameWorld();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUnrealEditorSubsystem::execGetEditorWorld)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWorld**)Z_Param__Result=P_THIS->GetEditorWorld();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUnrealEditorSubsystem::execSetLevelViewportCameraInfo)
	{
		P_GET_STRUCT(FVector,Z_Param_CameraLocation);
		P_GET_STRUCT(FRotator,Z_Param_CameraRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLevelViewportCameraInfo(Z_Param_CameraLocation,Z_Param_CameraRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUnrealEditorSubsystem::execGetLevelViewportCameraInfo)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_CameraLocation);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_CameraRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetLevelViewportCameraInfo(Z_Param_Out_CameraLocation,Z_Param_Out_CameraRotation);
		P_NATIVE_END;
	}
	void UUnrealEditorSubsystem::StaticRegisterNativesUUnrealEditorSubsystem()
	{
		UClass* Class = UUnrealEditorSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEditorWorld", &UUnrealEditorSubsystem::execGetEditorWorld },
			{ "GetGameWorld", &UUnrealEditorSubsystem::execGetGameWorld },
			{ "GetLevelViewportCameraInfo", &UUnrealEditorSubsystem::execGetLevelViewportCameraInfo },
			{ "SetLevelViewportCameraInfo", &UUnrealEditorSubsystem::execSetLevelViewportCameraInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUnrealEditorSubsystem_GetEditorWorld_Statics
	{
		struct UnrealEditorSubsystem_eventGetEditorWorld_Parms
		{
			UWorld* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnrealEditorSubsystem_GetEditorWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UnrealEditorSubsystem_eventGetEditorWorld_Parms, ReturnValue), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealEditorSubsystem_GetEditorWorld_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealEditorSubsystem_GetEditorWorld_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealEditorSubsystem_GetEditorWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "Comment", "/**\n\x09 * Find the World in the world editor. It can then be used as WorldContext by other libraries like GameplayStatics.\n\x09 * @return\x09The World used by the world editor.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/UnrealEditorSubsystem.h" },
		{ "ToolTip", "Find the World in the world editor. It can then be used as WorldContext by other libraries like GameplayStatics.\n@return      The World used by the world editor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealEditorSubsystem_GetEditorWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealEditorSubsystem, nullptr, "GetEditorWorld", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUnrealEditorSubsystem_GetEditorWorld_Statics::UnrealEditorSubsystem_eventGetEditorWorld_Parms), Z_Construct_UFunction_UUnrealEditorSubsystem_GetEditorWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealEditorSubsystem_GetEditorWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealEditorSubsystem_GetEditorWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealEditorSubsystem_GetEditorWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealEditorSubsystem_GetEditorWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnrealEditorSubsystem_GetEditorWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnrealEditorSubsystem_GetGameWorld_Statics
	{
		struct UnrealEditorSubsystem_eventGetGameWorld_Parms
		{
			UWorld* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnrealEditorSubsystem_GetGameWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UnrealEditorSubsystem_eventGetGameWorld_Parms, ReturnValue), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealEditorSubsystem_GetGameWorld_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealEditorSubsystem_GetGameWorld_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealEditorSubsystem_GetGameWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "ModuleRelativePath", "Public/Subsystems/UnrealEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealEditorSubsystem_GetGameWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealEditorSubsystem, nullptr, "GetGameWorld", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUnrealEditorSubsystem_GetGameWorld_Statics::UnrealEditorSubsystem_eventGetGameWorld_Parms), Z_Construct_UFunction_UUnrealEditorSubsystem_GetGameWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealEditorSubsystem_GetGameWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealEditorSubsystem_GetGameWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealEditorSubsystem_GetGameWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealEditorSubsystem_GetGameWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnrealEditorSubsystem_GetGameWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnrealEditorSubsystem_GetLevelViewportCameraInfo_Statics
	{
		struct UnrealEditorSubsystem_eventGetLevelViewportCameraInfo_Parms
		{
			FVector CameraLocation;
			FRotator CameraRotation;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraRotation;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUnrealEditorSubsystem_GetLevelViewportCameraInfo_Statics::NewProp_CameraLocation = { "CameraLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UnrealEditorSubsystem_eventGetLevelViewportCameraInfo_Parms, CameraLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUnrealEditorSubsystem_GetLevelViewportCameraInfo_Statics::NewProp_CameraRotation = { "CameraRotation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UnrealEditorSubsystem_eventGetLevelViewportCameraInfo_Parms, CameraRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUnrealEditorSubsystem_GetLevelViewportCameraInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UnrealEditorSubsystem_eventGetLevelViewportCameraInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUnrealEditorSubsystem_GetLevelViewportCameraInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UnrealEditorSubsystem_eventGetLevelViewportCameraInfo_Parms), &Z_Construct_UFunction_UUnrealEditorSubsystem_GetLevelViewportCameraInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealEditorSubsystem_GetLevelViewportCameraInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealEditorSubsystem_GetLevelViewportCameraInfo_Statics::NewProp_CameraLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealEditorSubsystem_GetLevelViewportCameraInfo_Statics::NewProp_CameraRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealEditorSubsystem_GetLevelViewportCameraInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealEditorSubsystem_GetLevelViewportCameraInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "Comment", "/**\n\x09 * Gets information about the camera position for the primary level editor viewport.  In non-editor builds, these will be zeroed\n\x09 * In the UnrealEd module instead of Level Editor as it uses FLevelEditorViewportClient which is in this module\n\x09 *\n\x09 * @param\x09""CameraLocation\x09(out) Current location of the level editing viewport camera, or zero if none found\n\x09 * @param\x09""CameraRotation\x09(out) Current rotation of the level editing viewport camera, or zero if none found\n\x09 * @return\x09Whether or not we were able to get a camera for a level editing viewport\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/UnrealEditorSubsystem.h" },
		{ "ToolTip", "Gets information about the camera position for the primary level editor viewport.  In non-editor builds, these will be zeroed\nIn the UnrealEd module instead of Level Editor as it uses FLevelEditorViewportClient which is in this module\n\n@param       CameraLocation  (out) Current location of the level editing viewport camera, or zero if none found\n@param       CameraRotation  (out) Current rotation of the level editing viewport camera, or zero if none found\n@return      Whether or not we were able to get a camera for a level editing viewport" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealEditorSubsystem_GetLevelViewportCameraInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealEditorSubsystem, nullptr, "GetLevelViewportCameraInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUnrealEditorSubsystem_GetLevelViewportCameraInfo_Statics::UnrealEditorSubsystem_eventGetLevelViewportCameraInfo_Parms), Z_Construct_UFunction_UUnrealEditorSubsystem_GetLevelViewportCameraInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealEditorSubsystem_GetLevelViewportCameraInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealEditorSubsystem_GetLevelViewportCameraInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealEditorSubsystem_GetLevelViewportCameraInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealEditorSubsystem_GetLevelViewportCameraInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnrealEditorSubsystem_GetLevelViewportCameraInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnrealEditorSubsystem_SetLevelViewportCameraInfo_Statics
	{
		struct UnrealEditorSubsystem_eventSetLevelViewportCameraInfo_Parms
		{
			FVector CameraLocation;
			FRotator CameraRotation;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUnrealEditorSubsystem_SetLevelViewportCameraInfo_Statics::NewProp_CameraLocation = { "CameraLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UnrealEditorSubsystem_eventSetLevelViewportCameraInfo_Parms, CameraLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUnrealEditorSubsystem_SetLevelViewportCameraInfo_Statics::NewProp_CameraRotation = { "CameraRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UnrealEditorSubsystem_eventSetLevelViewportCameraInfo_Parms, CameraRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealEditorSubsystem_SetLevelViewportCameraInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealEditorSubsystem_SetLevelViewportCameraInfo_Statics::NewProp_CameraLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealEditorSubsystem_SetLevelViewportCameraInfo_Statics::NewProp_CameraRotation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealEditorSubsystem_SetLevelViewportCameraInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "Comment", "/**\n\x09* Sets information about the camera position for the primary level editor viewport.\n\x09* In the UnrealEd module instead of Level Editor as it uses FLevelEditorViewportClient which is in this module\n\x09*\n\x09* @param\x09""CameraLocation\x09Location the camera will be moved to.\n\x09* @param\x09""CameraRotation\x09Rotation the camera will be set to.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Subsystems/UnrealEditorSubsystem.h" },
		{ "ToolTip", "Sets information about the camera position for the primary level editor viewport.\nIn the UnrealEd module instead of Level Editor as it uses FLevelEditorViewportClient which is in this module\n\n@param        CameraLocation  Location the camera will be moved to.\n@param        CameraRotation  Rotation the camera will be set to." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealEditorSubsystem_SetLevelViewportCameraInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealEditorSubsystem, nullptr, "SetLevelViewportCameraInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUnrealEditorSubsystem_SetLevelViewportCameraInfo_Statics::UnrealEditorSubsystem_eventSetLevelViewportCameraInfo_Parms), Z_Construct_UFunction_UUnrealEditorSubsystem_SetLevelViewportCameraInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealEditorSubsystem_SetLevelViewportCameraInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealEditorSubsystem_SetLevelViewportCameraInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealEditorSubsystem_SetLevelViewportCameraInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealEditorSubsystem_SetLevelViewportCameraInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnrealEditorSubsystem_SetLevelViewportCameraInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUnrealEditorSubsystem);
	UClass* Z_Construct_UClass_UUnrealEditorSubsystem_NoRegister()
	{
		return UUnrealEditorSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UUnrealEditorSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUnrealEditorSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUnrealEditorSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUnrealEditorSubsystem_GetEditorWorld, "GetEditorWorld" }, // 1983270026
		{ &Z_Construct_UFunction_UUnrealEditorSubsystem_GetGameWorld, "GetGameWorld" }, // 3672218978
		{ &Z_Construct_UFunction_UUnrealEditorSubsystem_GetLevelViewportCameraInfo, "GetLevelViewportCameraInfo" }, // 1378692472
		{ &Z_Construct_UFunction_UUnrealEditorSubsystem_SetLevelViewportCameraInfo, "SetLevelViewportCameraInfo" }, // 3855273796
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnrealEditorSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* UUnrealEditorSubsystem \n* Subsystem for exposing editor functionality to scripts\n*/" },
		{ "IncludePath", "Subsystems/UnrealEditorSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/UnrealEditorSubsystem.h" },
		{ "ToolTip", "UUnrealEditorSubsystem\nSubsystem for exposing editor functionality to scripts" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUnrealEditorSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnrealEditorSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUnrealEditorSubsystem_Statics::ClassParams = {
		&UUnrealEditorSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUnrealEditorSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUnrealEditorSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUnrealEditorSubsystem()
	{
		if (!Z_Registration_Info_UClass_UUnrealEditorSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUnrealEditorSubsystem.OuterSingleton, Z_Construct_UClass_UUnrealEditorSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUnrealEditorSubsystem.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UUnrealEditorSubsystem>()
	{
		return UUnrealEditorSubsystem::StaticClass();
	}
	UUnrealEditorSubsystem::UUnrealEditorSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUnrealEditorSubsystem);
	UUnrealEditorSubsystem::~UUnrealEditorSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_UnrealEditorSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_UnrealEditorSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUnrealEditorSubsystem, UUnrealEditorSubsystem::StaticClass, TEXT("UUnrealEditorSubsystem"), &Z_Registration_Info_UClass_UUnrealEditorSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUnrealEditorSubsystem), 4181875326U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_UnrealEditorSubsystem_h_1311015757(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_UnrealEditorSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_UnrealEditorSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
