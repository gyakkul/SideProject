// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/Subsystems/EditorSubsystemBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorSubsystemBlueprintLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UNREALED_API UClass* Z_Construct_UClass_UEditorSubsystemBlueprintLibrary();
	UNREALED_API UClass* Z_Construct_UClass_UEditorSubsystemBlueprintLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	DEFINE_FUNCTION(UEditorSubsystemBlueprintLibrary::execGetEditorSubsystem)
	{
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEditorSubsystem**)Z_Param__Result=UEditorSubsystemBlueprintLibrary::GetEditorSubsystem(Z_Param_Class);
		P_NATIVE_END;
	}
	void UEditorSubsystemBlueprintLibrary::StaticRegisterNativesUEditorSubsystemBlueprintLibrary()
	{
		UClass* Class = UEditorSubsystemBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEditorSubsystem", &UEditorSubsystemBlueprintLibrary::execGetEditorSubsystem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEditorSubsystemBlueprintLibrary_GetEditorSubsystem_Statics
	{
		struct EditorSubsystemBlueprintLibrary_eventGetEditorSubsystem_Parms
		{
			TSubclassOf<UEditorSubsystem>  Class;
			UEditorSubsystem* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UEditorSubsystemBlueprintLibrary_GetEditorSubsystem_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorSubsystemBlueprintLibrary_eventGetEditorSubsystem_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UEditorSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorSubsystemBlueprintLibrary_GetEditorSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorSubsystemBlueprintLibrary_eventGetEditorSubsystem_Parms, ReturnValue), Z_Construct_UClass_UEditorSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorSubsystemBlueprintLibrary_GetEditorSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorSubsystemBlueprintLibrary_GetEditorSubsystem_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorSubsystemBlueprintLibrary_GetEditorSubsystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorSubsystemBlueprintLibrary_GetEditorSubsystem_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Editor Subsystems" },
		{ "Comment", "/** Get a Local Player Subsystem from the Local Player associated with the provided context */" },
		{ "ModuleRelativePath", "Public/Subsystems/EditorSubsystemBlueprintLibrary.h" },
		{ "ToolTip", "Get a Local Player Subsystem from the Local Player associated with the provided context" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorSubsystemBlueprintLibrary_GetEditorSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorSubsystemBlueprintLibrary, nullptr, "GetEditorSubsystem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorSubsystemBlueprintLibrary_GetEditorSubsystem_Statics::EditorSubsystemBlueprintLibrary_eventGetEditorSubsystem_Parms), Z_Construct_UFunction_UEditorSubsystemBlueprintLibrary_GetEditorSubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorSubsystemBlueprintLibrary_GetEditorSubsystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorSubsystemBlueprintLibrary_GetEditorSubsystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorSubsystemBlueprintLibrary_GetEditorSubsystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorSubsystemBlueprintLibrary_GetEditorSubsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorSubsystemBlueprintLibrary_GetEditorSubsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorSubsystemBlueprintLibrary);
	UClass* Z_Construct_UClass_UEditorSubsystemBlueprintLibrary_NoRegister()
	{
		return UEditorSubsystemBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UEditorSubsystemBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorSubsystemBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEditorSubsystemBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEditorSubsystemBlueprintLibrary_GetEditorSubsystem, "GetEditorSubsystem" }, // 306867766
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorSubsystemBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Subsystems/EditorSubsystemBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/Subsystems/EditorSubsystemBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorSubsystemBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorSubsystemBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorSubsystemBlueprintLibrary_Statics::ClassParams = {
		&UEditorSubsystemBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEditorSubsystemBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorSubsystemBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorSubsystemBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UEditorSubsystemBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorSubsystemBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UEditorSubsystemBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorSubsystemBlueprintLibrary.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UEditorSubsystemBlueprintLibrary>()
	{
		return UEditorSubsystemBlueprintLibrary::StaticClass();
	}
	UEditorSubsystemBlueprintLibrary::UEditorSubsystemBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorSubsystemBlueprintLibrary);
	UEditorSubsystemBlueprintLibrary::~UEditorSubsystemBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorSubsystemBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorSubsystemBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorSubsystemBlueprintLibrary, UEditorSubsystemBlueprintLibrary::StaticClass, TEXT("UEditorSubsystemBlueprintLibrary"), &Z_Registration_Info_UClass_UEditorSubsystemBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorSubsystemBlueprintLibrary), 893933768U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorSubsystemBlueprintLibrary_h_2794109180(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorSubsystemBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorSubsystemBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
