// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewportInteractionDragOperations.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViewportInteractionDragOperations() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_ViewportInteraction();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UPlaneTranslationDragOperation();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UPlaneTranslationDragOperation_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_URotateOnAngleDragOperation();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_URotateOnAngleDragOperation_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UScaleDragOperation();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UScaleDragOperation_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UTranslationDragOperation();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UTranslationDragOperation_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UUniformScaleDragOperation();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UUniformScaleDragOperation_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportDragOperation();
// End Cross Module References
	void UTranslationDragOperation::StaticRegisterNativesUTranslationDragOperation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTranslationDragOperation);
	UClass* Z_Construct_UClass_UTranslationDragOperation_NoRegister()
	{
		return UTranslationDragOperation::StaticClass();
	}
	struct Z_Construct_UClass_UTranslationDragOperation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTranslationDragOperation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UViewportDragOperation,
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportInteraction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTranslationDragOperation_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Gizmo translation on one axis.\n */" },
		{ "IncludePath", "ViewportInteractionDragOperations.h" },
		{ "ModuleRelativePath", "Public/ViewportInteractionDragOperations.h" },
		{ "ToolTip", "Gizmo translation on one axis." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTranslationDragOperation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTranslationDragOperation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTranslationDragOperation_Statics::ClassParams = {
		&UTranslationDragOperation::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTranslationDragOperation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTranslationDragOperation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTranslationDragOperation()
	{
		if (!Z_Registration_Info_UClass_UTranslationDragOperation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTranslationDragOperation.OuterSingleton, Z_Construct_UClass_UTranslationDragOperation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTranslationDragOperation.OuterSingleton;
	}
	template<> VIEWPORTINTERACTION_API UClass* StaticClass<UTranslationDragOperation>()
	{
		return UTranslationDragOperation::StaticClass();
	}
	UTranslationDragOperation::UTranslationDragOperation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTranslationDragOperation);
	UTranslationDragOperation::~UTranslationDragOperation() {}
	void UPlaneTranslationDragOperation::StaticRegisterNativesUPlaneTranslationDragOperation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlaneTranslationDragOperation);
	UClass* Z_Construct_UClass_UPlaneTranslationDragOperation_NoRegister()
	{
		return UPlaneTranslationDragOperation::StaticClass();
	}
	struct Z_Construct_UClass_UPlaneTranslationDragOperation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlaneTranslationDragOperation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UViewportDragOperation,
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportInteraction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlaneTranslationDragOperation_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Gizmo translation on two axes.\n */" },
		{ "IncludePath", "ViewportInteractionDragOperations.h" },
		{ "ModuleRelativePath", "Public/ViewportInteractionDragOperations.h" },
		{ "ToolTip", "Gizmo translation on two axes." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlaneTranslationDragOperation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlaneTranslationDragOperation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlaneTranslationDragOperation_Statics::ClassParams = {
		&UPlaneTranslationDragOperation::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlaneTranslationDragOperation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlaneTranslationDragOperation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlaneTranslationDragOperation()
	{
		if (!Z_Registration_Info_UClass_UPlaneTranslationDragOperation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlaneTranslationDragOperation.OuterSingleton, Z_Construct_UClass_UPlaneTranslationDragOperation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlaneTranslationDragOperation.OuterSingleton;
	}
	template<> VIEWPORTINTERACTION_API UClass* StaticClass<UPlaneTranslationDragOperation>()
	{
		return UPlaneTranslationDragOperation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlaneTranslationDragOperation);
	UPlaneTranslationDragOperation::~UPlaneTranslationDragOperation() {}
	void URotateOnAngleDragOperation::StaticRegisterNativesURotateOnAngleDragOperation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URotateOnAngleDragOperation);
	UClass* Z_Construct_UClass_URotateOnAngleDragOperation_NoRegister()
	{
		return URotateOnAngleDragOperation::StaticClass();
	}
	struct Z_Construct_UClass_URotateOnAngleDragOperation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URotateOnAngleDragOperation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UViewportDragOperation,
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportInteraction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URotateOnAngleDragOperation_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Rotation around one axis based on input angle.\n */" },
		{ "IncludePath", "ViewportInteractionDragOperations.h" },
		{ "ModuleRelativePath", "Public/ViewportInteractionDragOperations.h" },
		{ "ToolTip", "Rotation around one axis based on input angle." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URotateOnAngleDragOperation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URotateOnAngleDragOperation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URotateOnAngleDragOperation_Statics::ClassParams = {
		&URotateOnAngleDragOperation::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URotateOnAngleDragOperation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URotateOnAngleDragOperation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URotateOnAngleDragOperation()
	{
		if (!Z_Registration_Info_UClass_URotateOnAngleDragOperation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URotateOnAngleDragOperation.OuterSingleton, Z_Construct_UClass_URotateOnAngleDragOperation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URotateOnAngleDragOperation.OuterSingleton;
	}
	template<> VIEWPORTINTERACTION_API UClass* StaticClass<URotateOnAngleDragOperation>()
	{
		return URotateOnAngleDragOperation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URotateOnAngleDragOperation);
	URotateOnAngleDragOperation::~URotateOnAngleDragOperation() {}
	void UScaleDragOperation::StaticRegisterNativesUScaleDragOperation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScaleDragOperation);
	UClass* Z_Construct_UClass_UScaleDragOperation_NoRegister()
	{
		return UScaleDragOperation::StaticClass();
	}
	struct Z_Construct_UClass_UScaleDragOperation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScaleDragOperation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UViewportDragOperation,
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportInteraction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScaleDragOperation_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Scale on one axis.\n */" },
		{ "IncludePath", "ViewportInteractionDragOperations.h" },
		{ "ModuleRelativePath", "Public/ViewportInteractionDragOperations.h" },
		{ "ToolTip", "Scale on one axis." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScaleDragOperation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScaleDragOperation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UScaleDragOperation_Statics::ClassParams = {
		&UScaleDragOperation::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UScaleDragOperation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScaleDragOperation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScaleDragOperation()
	{
		if (!Z_Registration_Info_UClass_UScaleDragOperation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScaleDragOperation.OuterSingleton, Z_Construct_UClass_UScaleDragOperation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UScaleDragOperation.OuterSingleton;
	}
	template<> VIEWPORTINTERACTION_API UClass* StaticClass<UScaleDragOperation>()
	{
		return UScaleDragOperation::StaticClass();
	}
	UScaleDragOperation::UScaleDragOperation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScaleDragOperation);
	UScaleDragOperation::~UScaleDragOperation() {}
	void UUniformScaleDragOperation::StaticRegisterNativesUUniformScaleDragOperation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUniformScaleDragOperation);
	UClass* Z_Construct_UClass_UUniformScaleDragOperation_NoRegister()
	{
		return UUniformScaleDragOperation::StaticClass();
	}
	struct Z_Construct_UClass_UUniformScaleDragOperation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUniformScaleDragOperation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UViewportDragOperation,
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportInteraction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUniformScaleDragOperation_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Scale on all axes.\n */" },
		{ "IncludePath", "ViewportInteractionDragOperations.h" },
		{ "ModuleRelativePath", "Public/ViewportInteractionDragOperations.h" },
		{ "ToolTip", "Scale on all axes." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUniformScaleDragOperation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUniformScaleDragOperation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUniformScaleDragOperation_Statics::ClassParams = {
		&UUniformScaleDragOperation::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUniformScaleDragOperation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUniformScaleDragOperation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUniformScaleDragOperation()
	{
		if (!Z_Registration_Info_UClass_UUniformScaleDragOperation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUniformScaleDragOperation.OuterSingleton, Z_Construct_UClass_UUniformScaleDragOperation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUniformScaleDragOperation.OuterSingleton;
	}
	template<> VIEWPORTINTERACTION_API UClass* StaticClass<UUniformScaleDragOperation>()
	{
		return UUniformScaleDragOperation::StaticClass();
	}
	UUniformScaleDragOperation::UUniformScaleDragOperation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUniformScaleDragOperation);
	UUniformScaleDragOperation::~UUniformScaleDragOperation() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractionDragOperations_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractionDragOperations_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTranslationDragOperation, UTranslationDragOperation::StaticClass, TEXT("UTranslationDragOperation"), &Z_Registration_Info_UClass_UTranslationDragOperation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTranslationDragOperation), 1553750217U) },
		{ Z_Construct_UClass_UPlaneTranslationDragOperation, UPlaneTranslationDragOperation::StaticClass, TEXT("UPlaneTranslationDragOperation"), &Z_Registration_Info_UClass_UPlaneTranslationDragOperation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlaneTranslationDragOperation), 2966540691U) },
		{ Z_Construct_UClass_URotateOnAngleDragOperation, URotateOnAngleDragOperation::StaticClass, TEXT("URotateOnAngleDragOperation"), &Z_Registration_Info_UClass_URotateOnAngleDragOperation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URotateOnAngleDragOperation), 1911180454U) },
		{ Z_Construct_UClass_UScaleDragOperation, UScaleDragOperation::StaticClass, TEXT("UScaleDragOperation"), &Z_Registration_Info_UClass_UScaleDragOperation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScaleDragOperation), 1406323482U) },
		{ Z_Construct_UClass_UUniformScaleDragOperation, UUniformScaleDragOperation::StaticClass, TEXT("UUniformScaleDragOperation"), &Z_Registration_Info_UClass_UUniformScaleDragOperation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUniformScaleDragOperation), 2294086406U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractionDragOperations_h_1067880732(TEXT("/Script/ViewportInteraction"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractionDragOperations_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractionDragOperations_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
