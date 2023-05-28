// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2_AnimationAttributeNodes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2_AnimationAttributeNodes() {}
// Cross Module References
	ANIMATIONBLUEPRINTLIBRARY_API UClass* Z_Construct_UClass_UK2Node_BaseAttributeActionNode();
	ANIMATIONBLUEPRINTLIBRARY_API UClass* Z_Construct_UClass_UK2Node_BaseAttributeActionNode_NoRegister();
	ANIMATIONBLUEPRINTLIBRARY_API UClass* Z_Construct_UClass_UK2Node_GetAttributeKeyGeneric();
	ANIMATIONBLUEPRINTLIBRARY_API UClass* Z_Construct_UClass_UK2Node_GetAttributeKeyGeneric_NoRegister();
	ANIMATIONBLUEPRINTLIBRARY_API UClass* Z_Construct_UClass_UK2Node_GetAttributeKeysGeneric();
	ANIMATIONBLUEPRINTLIBRARY_API UClass* Z_Construct_UClass_UK2Node_GetAttributeKeysGeneric_NoRegister();
	ANIMATIONBLUEPRINTLIBRARY_API UClass* Z_Construct_UClass_UK2Node_SetAttributeKeyGeneric();
	ANIMATIONBLUEPRINTLIBRARY_API UClass* Z_Construct_UClass_UK2Node_SetAttributeKeyGeneric_NoRegister();
	ANIMATIONBLUEPRINTLIBRARY_API UClass* Z_Construct_UClass_UK2Node_SetAttributeKeysGeneric();
	ANIMATIONBLUEPRINTLIBRARY_API UClass* Z_Construct_UClass_UK2Node_SetAttributeKeysGeneric_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_CallFunction();
	UPackage* Z_Construct_UPackage__Script_AnimationBlueprintLibrary();
// End Cross Module References
	void UK2Node_BaseAttributeActionNode::StaticRegisterNativesUK2Node_BaseAttributeActionNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_BaseAttributeActionNode);
	UClass* Z_Construct_UClass_UK2Node_BaseAttributeActionNode_NoRegister()
	{
		return UK2Node_BaseAttributeActionNode::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_BaseAttributeActionNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_BaseAttributeActionNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_CallFunction,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationBlueprintLibrary,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_BaseAttributeActionNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Base node implementation to reduce duplicated behaviour for different BlueprintLibrary functions */" },
		{ "IncludePath", "K2_AnimationAttributeNodes.h" },
		{ "ModuleRelativePath", "Public/K2_AnimationAttributeNodes.h" },
		{ "ToolTip", "Base node implementation to reduce duplicated behaviour for different BlueprintLibrary functions" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_BaseAttributeActionNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_BaseAttributeActionNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_BaseAttributeActionNode_Statics::ClassParams = {
		&UK2Node_BaseAttributeActionNode::StaticClass,
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
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_BaseAttributeActionNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_BaseAttributeActionNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_BaseAttributeActionNode()
	{
		if (!Z_Registration_Info_UClass_UK2Node_BaseAttributeActionNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_BaseAttributeActionNode.OuterSingleton, Z_Construct_UClass_UK2Node_BaseAttributeActionNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_BaseAttributeActionNode.OuterSingleton;
	}
	template<> ANIMATIONBLUEPRINTLIBRARY_API UClass* StaticClass<UK2Node_BaseAttributeActionNode>()
	{
		return UK2Node_BaseAttributeActionNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_BaseAttributeActionNode);
	UK2Node_BaseAttributeActionNode::~UK2Node_BaseAttributeActionNode() {}
	void UK2Node_SetAttributeKeyGeneric::StaticRegisterNativesUK2Node_SetAttributeKeyGeneric()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_SetAttributeKeyGeneric);
	UClass* Z_Construct_UClass_UK2Node_SetAttributeKeyGeneric_NoRegister()
	{
		return UK2Node_SetAttributeKeyGeneric::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_SetAttributeKeyGeneric_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_SetAttributeKeyGeneric_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_BaseAttributeActionNode,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationBlueprintLibrary,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_SetAttributeKeyGeneric_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2_AnimationAttributeNodes.h" },
		{ "ModuleRelativePath", "Public/K2_AnimationAttributeNodes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_SetAttributeKeyGeneric_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_SetAttributeKeyGeneric>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_SetAttributeKeyGeneric_Statics::ClassParams = {
		&UK2Node_SetAttributeKeyGeneric::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_SetAttributeKeyGeneric_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_SetAttributeKeyGeneric_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_SetAttributeKeyGeneric()
	{
		if (!Z_Registration_Info_UClass_UK2Node_SetAttributeKeyGeneric.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_SetAttributeKeyGeneric.OuterSingleton, Z_Construct_UClass_UK2Node_SetAttributeKeyGeneric_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_SetAttributeKeyGeneric.OuterSingleton;
	}
	template<> ANIMATIONBLUEPRINTLIBRARY_API UClass* StaticClass<UK2Node_SetAttributeKeyGeneric>()
	{
		return UK2Node_SetAttributeKeyGeneric::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_SetAttributeKeyGeneric);
	UK2Node_SetAttributeKeyGeneric::~UK2Node_SetAttributeKeyGeneric() {}
	void UK2Node_SetAttributeKeysGeneric::StaticRegisterNativesUK2Node_SetAttributeKeysGeneric()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_SetAttributeKeysGeneric);
	UClass* Z_Construct_UClass_UK2Node_SetAttributeKeysGeneric_NoRegister()
	{
		return UK2Node_SetAttributeKeysGeneric::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_SetAttributeKeysGeneric_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_SetAttributeKeysGeneric_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_BaseAttributeActionNode,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationBlueprintLibrary,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_SetAttributeKeysGeneric_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2_AnimationAttributeNodes.h" },
		{ "ModuleRelativePath", "Public/K2_AnimationAttributeNodes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_SetAttributeKeysGeneric_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_SetAttributeKeysGeneric>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_SetAttributeKeysGeneric_Statics::ClassParams = {
		&UK2Node_SetAttributeKeysGeneric::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_SetAttributeKeysGeneric_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_SetAttributeKeysGeneric_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_SetAttributeKeysGeneric()
	{
		if (!Z_Registration_Info_UClass_UK2Node_SetAttributeKeysGeneric.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_SetAttributeKeysGeneric.OuterSingleton, Z_Construct_UClass_UK2Node_SetAttributeKeysGeneric_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_SetAttributeKeysGeneric.OuterSingleton;
	}
	template<> ANIMATIONBLUEPRINTLIBRARY_API UClass* StaticClass<UK2Node_SetAttributeKeysGeneric>()
	{
		return UK2Node_SetAttributeKeysGeneric::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_SetAttributeKeysGeneric);
	UK2Node_SetAttributeKeysGeneric::~UK2Node_SetAttributeKeysGeneric() {}
	void UK2Node_GetAttributeKeyGeneric::StaticRegisterNativesUK2Node_GetAttributeKeyGeneric()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_GetAttributeKeyGeneric);
	UClass* Z_Construct_UClass_UK2Node_GetAttributeKeyGeneric_NoRegister()
	{
		return UK2Node_GetAttributeKeyGeneric::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_GetAttributeKeyGeneric_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_GetAttributeKeyGeneric_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_BaseAttributeActionNode,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationBlueprintLibrary,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_GetAttributeKeyGeneric_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2_AnimationAttributeNodes.h" },
		{ "ModuleRelativePath", "Public/K2_AnimationAttributeNodes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_GetAttributeKeyGeneric_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_GetAttributeKeyGeneric>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_GetAttributeKeyGeneric_Statics::ClassParams = {
		&UK2Node_GetAttributeKeyGeneric::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_GetAttributeKeyGeneric_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetAttributeKeyGeneric_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_GetAttributeKeyGeneric()
	{
		if (!Z_Registration_Info_UClass_UK2Node_GetAttributeKeyGeneric.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_GetAttributeKeyGeneric.OuterSingleton, Z_Construct_UClass_UK2Node_GetAttributeKeyGeneric_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_GetAttributeKeyGeneric.OuterSingleton;
	}
	template<> ANIMATIONBLUEPRINTLIBRARY_API UClass* StaticClass<UK2Node_GetAttributeKeyGeneric>()
	{
		return UK2Node_GetAttributeKeyGeneric::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_GetAttributeKeyGeneric);
	UK2Node_GetAttributeKeyGeneric::~UK2Node_GetAttributeKeyGeneric() {}
	void UK2Node_GetAttributeKeysGeneric::StaticRegisterNativesUK2Node_GetAttributeKeysGeneric()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_GetAttributeKeysGeneric);
	UClass* Z_Construct_UClass_UK2Node_GetAttributeKeysGeneric_NoRegister()
	{
		return UK2Node_GetAttributeKeysGeneric::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_GetAttributeKeysGeneric_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_GetAttributeKeysGeneric_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_BaseAttributeActionNode,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationBlueprintLibrary,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_GetAttributeKeysGeneric_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2_AnimationAttributeNodes.h" },
		{ "ModuleRelativePath", "Public/K2_AnimationAttributeNodes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_GetAttributeKeysGeneric_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_GetAttributeKeysGeneric>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_GetAttributeKeysGeneric_Statics::ClassParams = {
		&UK2Node_GetAttributeKeysGeneric::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_GetAttributeKeysGeneric_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetAttributeKeysGeneric_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_GetAttributeKeysGeneric()
	{
		if (!Z_Registration_Info_UClass_UK2Node_GetAttributeKeysGeneric.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_GetAttributeKeysGeneric.OuterSingleton, Z_Construct_UClass_UK2Node_GetAttributeKeysGeneric_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_GetAttributeKeysGeneric.OuterSingleton;
	}
	template<> ANIMATIONBLUEPRINTLIBRARY_API UClass* StaticClass<UK2Node_GetAttributeKeysGeneric>()
	{
		return UK2Node_GetAttributeKeysGeneric::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_GetAttributeKeysGeneric);
	UK2Node_GetAttributeKeysGeneric::~UK2Node_GetAttributeKeysGeneric() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_K2_AnimationAttributeNodes_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_K2_AnimationAttributeNodes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_BaseAttributeActionNode, UK2Node_BaseAttributeActionNode::StaticClass, TEXT("UK2Node_BaseAttributeActionNode"), &Z_Registration_Info_UClass_UK2Node_BaseAttributeActionNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_BaseAttributeActionNode), 1330156141U) },
		{ Z_Construct_UClass_UK2Node_SetAttributeKeyGeneric, UK2Node_SetAttributeKeyGeneric::StaticClass, TEXT("UK2Node_SetAttributeKeyGeneric"), &Z_Registration_Info_UClass_UK2Node_SetAttributeKeyGeneric, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_SetAttributeKeyGeneric), 2122324845U) },
		{ Z_Construct_UClass_UK2Node_SetAttributeKeysGeneric, UK2Node_SetAttributeKeysGeneric::StaticClass, TEXT("UK2Node_SetAttributeKeysGeneric"), &Z_Registration_Info_UClass_UK2Node_SetAttributeKeysGeneric, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_SetAttributeKeysGeneric), 3789526038U) },
		{ Z_Construct_UClass_UK2Node_GetAttributeKeyGeneric, UK2Node_GetAttributeKeyGeneric::StaticClass, TEXT("UK2Node_GetAttributeKeyGeneric"), &Z_Registration_Info_UClass_UK2Node_GetAttributeKeyGeneric, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_GetAttributeKeyGeneric), 666059287U) },
		{ Z_Construct_UClass_UK2Node_GetAttributeKeysGeneric, UK2Node_GetAttributeKeysGeneric::StaticClass, TEXT("UK2Node_GetAttributeKeysGeneric"), &Z_Registration_Info_UClass_UK2Node_GetAttributeKeysGeneric, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_GetAttributeKeysGeneric), 1037705315U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_K2_AnimationAttributeNodes_h_4025163026(TEXT("/Script/AnimationBlueprintLibrary"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_K2_AnimationAttributeNodes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_K2_AnimationAttributeNodes_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
