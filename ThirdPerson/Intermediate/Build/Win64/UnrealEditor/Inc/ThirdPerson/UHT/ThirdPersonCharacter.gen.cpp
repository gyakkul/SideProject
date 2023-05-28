// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThirdPerson/ThirdPersonCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThirdPersonCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	THIRDPERSON_API UClass* Z_Construct_UClass_AThirdPersonCharacter();
	THIRDPERSON_API UClass* Z_Construct_UClass_AThirdPersonCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ThirdPerson();
// End Cross Module References
	void AThirdPersonCharacter::StaticRegisterNativesAThirdPersonCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AThirdPersonCharacter);
	UClass* Z_Construct_UClass_AThirdPersonCharacter_NoRegister()
	{
		return AThirdPersonCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AThirdPersonCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AThirdPersonCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ThirdPerson,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ThirdPersonCharacter.h" },
		{ "ModuleRelativePath", "ThirdPersonCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ThirdPersonCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AThirdPersonCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ThirdPersonCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AThirdPersonCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** MappingContext */" },
		{ "ModuleRelativePath", "ThirdPersonCharacter.h" },
		{ "ToolTip", "MappingContext" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AThirdPersonCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_DefaultMappingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_DefaultMappingContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Jump Input Action */" },
		{ "ModuleRelativePath", "ThirdPersonCharacter.h" },
		{ "ToolTip", "Jump Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AThirdPersonCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_JumpAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_JumpAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Move Input Action */" },
		{ "ModuleRelativePath", "ThirdPersonCharacter.h" },
		{ "ToolTip", "Move Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AThirdPersonCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_MoveAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_MoveAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Look Input Action */" },
		{ "ModuleRelativePath", "ThirdPersonCharacter.h" },
		{ "ToolTip", "Look Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AThirdPersonCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_LookAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_LookAction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AThirdPersonCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_JumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_LookAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AThirdPersonCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThirdPersonCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AThirdPersonCharacter_Statics::ClassParams = {
		&AThirdPersonCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AThirdPersonCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AThirdPersonCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AThirdPersonCharacter()
	{
		if (!Z_Registration_Info_UClass_AThirdPersonCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AThirdPersonCharacter.OuterSingleton, Z_Construct_UClass_AThirdPersonCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AThirdPersonCharacter.OuterSingleton;
	}
	template<> THIRDPERSON_API UClass* StaticClass<AThirdPersonCharacter>()
	{
		return AThirdPersonCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AThirdPersonCharacter);
	AThirdPersonCharacter::~AThirdPersonCharacter() {}
	struct Z_CompiledInDeferFile_FID_ThirdPerson_Source_ThirdPerson_ThirdPersonCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ThirdPerson_Source_ThirdPerson_ThirdPersonCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AThirdPersonCharacter, AThirdPersonCharacter::StaticClass, TEXT("AThirdPersonCharacter"), &Z_Registration_Info_UClass_AThirdPersonCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AThirdPersonCharacter), 3927070360U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ThirdPerson_Source_ThirdPerson_ThirdPersonCharacter_h_1853489284(TEXT("/Script/ThirdPerson"),
		Z_CompiledInDeferFile_FID_ThirdPerson_Source_ThirdPerson_ThirdPersonCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ThirdPerson_Source_ThirdPerson_ThirdPersonCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
