// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshSelect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshSelect() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleClickTool();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleClickToolBuilder();
	MESHPAINTINGTOOLSET_API UClass* Z_Construct_UClass_UMeshClickTool();
	MESHPAINTINGTOOLSET_API UClass* Z_Construct_UClass_UMeshClickTool_NoRegister();
	MESHPAINTINGTOOLSET_API UClass* Z_Construct_UClass_UMeshPaintSelectionInterface_NoRegister();
	MESHPAINTINGTOOLSET_API UClass* Z_Construct_UClass_UMeshPaintSelectionMechanic_NoRegister();
	MESHPAINTINGTOOLSET_API UClass* Z_Construct_UClass_UTextureAdapterClickTool();
	MESHPAINTINGTOOLSET_API UClass* Z_Construct_UClass_UTextureAdapterClickTool_NoRegister();
	MESHPAINTINGTOOLSET_API UClass* Z_Construct_UClass_UTextureAdapterClickToolBuilder();
	MESHPAINTINGTOOLSET_API UClass* Z_Construct_UClass_UTextureAdapterClickToolBuilder_NoRegister();
	MESHPAINTINGTOOLSET_API UClass* Z_Construct_UClass_UVertexAdapterClickTool();
	MESHPAINTINGTOOLSET_API UClass* Z_Construct_UClass_UVertexAdapterClickTool_NoRegister();
	MESHPAINTINGTOOLSET_API UClass* Z_Construct_UClass_UVertexAdapterClickToolBuilder();
	MESHPAINTINGTOOLSET_API UClass* Z_Construct_UClass_UVertexAdapterClickToolBuilder_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MeshPaintingToolset();
// End Cross Module References
	void UVertexAdapterClickToolBuilder::StaticRegisterNativesUVertexAdapterClickToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVertexAdapterClickToolBuilder);
	UClass* Z_Construct_UClass_UVertexAdapterClickToolBuilder_NoRegister()
	{
		return UVertexAdapterClickToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UVertexAdapterClickToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVertexAdapterClickToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingleClickToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshPaintingToolset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexAdapterClickToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Builder for UVertexAdapterClickTool\n */" },
		{ "IncludePath", "MeshSelect.h" },
		{ "ModuleRelativePath", "Public/MeshSelect.h" },
		{ "ToolTip", "Builder for UVertexAdapterClickTool" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVertexAdapterClickToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVertexAdapterClickToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVertexAdapterClickToolBuilder_Statics::ClassParams = {
		&UVertexAdapterClickToolBuilder::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UVertexAdapterClickToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexAdapterClickToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVertexAdapterClickToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UVertexAdapterClickToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVertexAdapterClickToolBuilder.OuterSingleton, Z_Construct_UClass_UVertexAdapterClickToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVertexAdapterClickToolBuilder.OuterSingleton;
	}
	template<> MESHPAINTINGTOOLSET_API UClass* StaticClass<UVertexAdapterClickToolBuilder>()
	{
		return UVertexAdapterClickToolBuilder::StaticClass();
	}
	UVertexAdapterClickToolBuilder::UVertexAdapterClickToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVertexAdapterClickToolBuilder);
	UVertexAdapterClickToolBuilder::~UVertexAdapterClickToolBuilder() {}
	void UTextureAdapterClickToolBuilder::StaticRegisterNativesUTextureAdapterClickToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextureAdapterClickToolBuilder);
	UClass* Z_Construct_UClass_UTextureAdapterClickToolBuilder_NoRegister()
	{
		return UTextureAdapterClickToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UTextureAdapterClickToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextureAdapterClickToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingleClickToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshPaintingToolset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureAdapterClickToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Builder for UTextureAdapterClickTool\n */" },
		{ "IncludePath", "MeshSelect.h" },
		{ "ModuleRelativePath", "Public/MeshSelect.h" },
		{ "ToolTip", "Builder for UTextureAdapterClickTool" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextureAdapterClickToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureAdapterClickToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextureAdapterClickToolBuilder_Statics::ClassParams = {
		&UTextureAdapterClickToolBuilder::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UTextureAdapterClickToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureAdapterClickToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextureAdapterClickToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UTextureAdapterClickToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextureAdapterClickToolBuilder.OuterSingleton, Z_Construct_UClass_UTextureAdapterClickToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTextureAdapterClickToolBuilder.OuterSingleton;
	}
	template<> MESHPAINTINGTOOLSET_API UClass* StaticClass<UTextureAdapterClickToolBuilder>()
	{
		return UTextureAdapterClickToolBuilder::StaticClass();
	}
	UTextureAdapterClickToolBuilder::UTextureAdapterClickToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureAdapterClickToolBuilder);
	UTextureAdapterClickToolBuilder::~UTextureAdapterClickToolBuilder() {}
	void UMeshClickTool::StaticRegisterNativesUMeshClickTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshClickTool);
	UClass* Z_Construct_UClass_UMeshClickTool_NoRegister()
	{
		return UMeshClickTool::StaticClass();
	}
	struct Z_Construct_UClass_UMeshClickTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionMechanic_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SelectionMechanic;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshClickTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingleClickTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshPaintingToolset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshClickTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * USingleClickTool is perhaps the simplest possible interactive tool. It simply\n * reacts to default primary button clicks for the active device (eg left-mouse clicks).\n *\n * The function ::IsHitByClick() determines what is clickable by this Tool. The default is\n * to return true, which means the click will activate anywhere (the Tool itself has no\n * notion of Actors, Components, etc). You can override this function to, for example,\n * filter out clicks that don't hit a target object, etc.\n *\n * The function ::OnClicked() implements the action that will occur when a click happens.\n * You must override this to implement any kind of useful behavior.\n */" },
		{ "IncludePath", "MeshSelect.h" },
		{ "ModuleRelativePath", "Public/MeshSelect.h" },
		{ "ToolTip", "USingleClickTool is perhaps the simplest possible interactive tool. It simply\nreacts to default primary button clicks for the active device (eg left-mouse clicks).\n\nThe function ::IsHitByClick() determines what is clickable by this Tool. The default is\nto return true, which means the click will activate anywhere (the Tool itself has no\nnotion of Actors, Components, etc). You can override this function to, for example,\nfilter out clicks that don't hit a target object, etc.\n\nThe function ::OnClicked() implements the action that will occur when a click happens.\nYou must override this to implement any kind of useful behavior." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshClickTool_Statics::NewProp_SelectionMechanic_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshSelect.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshClickTool_Statics::NewProp_SelectionMechanic = { "SelectionMechanic", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshClickTool, SelectionMechanic), Z_Construct_UClass_UMeshPaintSelectionMechanic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshClickTool_Statics::NewProp_SelectionMechanic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshClickTool_Statics::NewProp_SelectionMechanic_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshClickTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshClickTool_Statics::NewProp_SelectionMechanic,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMeshClickTool_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMeshPaintSelectionInterface_NoRegister, (int32)VTABLE_OFFSET(UMeshClickTool, IMeshPaintSelectionInterface), false },  // 3916134435
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshClickTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshClickTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshClickTool_Statics::ClassParams = {
		&UMeshClickTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMeshClickTool_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeshClickTool_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshClickTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshClickTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshClickTool()
	{
		if (!Z_Registration_Info_UClass_UMeshClickTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshClickTool.OuterSingleton, Z_Construct_UClass_UMeshClickTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshClickTool.OuterSingleton;
	}
	template<> MESHPAINTINGTOOLSET_API UClass* StaticClass<UMeshClickTool>()
	{
		return UMeshClickTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshClickTool);
	UMeshClickTool::~UMeshClickTool() {}
	void UVertexAdapterClickTool::StaticRegisterNativesUVertexAdapterClickTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVertexAdapterClickTool);
	UClass* Z_Construct_UClass_UVertexAdapterClickTool_NoRegister()
	{
		return UVertexAdapterClickTool::StaticClass();
	}
	struct Z_Construct_UClass_UVertexAdapterClickTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVertexAdapterClickTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshClickTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshPaintingToolset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexAdapterClickTool_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MeshSelect.h" },
		{ "ModuleRelativePath", "Public/MeshSelect.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVertexAdapterClickTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVertexAdapterClickTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVertexAdapterClickTool_Statics::ClassParams = {
		&UVertexAdapterClickTool::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UVertexAdapterClickTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexAdapterClickTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVertexAdapterClickTool()
	{
		if (!Z_Registration_Info_UClass_UVertexAdapterClickTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVertexAdapterClickTool.OuterSingleton, Z_Construct_UClass_UVertexAdapterClickTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVertexAdapterClickTool.OuterSingleton;
	}
	template<> MESHPAINTINGTOOLSET_API UClass* StaticClass<UVertexAdapterClickTool>()
	{
		return UVertexAdapterClickTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVertexAdapterClickTool);
	UVertexAdapterClickTool::~UVertexAdapterClickTool() {}
	void UTextureAdapterClickTool::StaticRegisterNativesUTextureAdapterClickTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextureAdapterClickTool);
	UClass* Z_Construct_UClass_UTextureAdapterClickTool_NoRegister()
	{
		return UTextureAdapterClickTool::StaticClass();
	}
	struct Z_Construct_UClass_UTextureAdapterClickTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextureAdapterClickTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshClickTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshPaintingToolset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureAdapterClickTool_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MeshSelect.h" },
		{ "ModuleRelativePath", "Public/MeshSelect.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextureAdapterClickTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureAdapterClickTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextureAdapterClickTool_Statics::ClassParams = {
		&UTextureAdapterClickTool::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UTextureAdapterClickTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureAdapterClickTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextureAdapterClickTool()
	{
		if (!Z_Registration_Info_UClass_UTextureAdapterClickTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextureAdapterClickTool.OuterSingleton, Z_Construct_UClass_UTextureAdapterClickTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTextureAdapterClickTool.OuterSingleton;
	}
	template<> MESHPAINTINGTOOLSET_API UClass* StaticClass<UTextureAdapterClickTool>()
	{
		return UTextureAdapterClickTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureAdapterClickTool);
	UTextureAdapterClickTool::~UTextureAdapterClickTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshSelect_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshSelect_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVertexAdapterClickToolBuilder, UVertexAdapterClickToolBuilder::StaticClass, TEXT("UVertexAdapterClickToolBuilder"), &Z_Registration_Info_UClass_UVertexAdapterClickToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVertexAdapterClickToolBuilder), 2358314183U) },
		{ Z_Construct_UClass_UTextureAdapterClickToolBuilder, UTextureAdapterClickToolBuilder::StaticClass, TEXT("UTextureAdapterClickToolBuilder"), &Z_Registration_Info_UClass_UTextureAdapterClickToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextureAdapterClickToolBuilder), 708935425U) },
		{ Z_Construct_UClass_UMeshClickTool, UMeshClickTool::StaticClass, TEXT("UMeshClickTool"), &Z_Registration_Info_UClass_UMeshClickTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshClickTool), 3180473245U) },
		{ Z_Construct_UClass_UVertexAdapterClickTool, UVertexAdapterClickTool::StaticClass, TEXT("UVertexAdapterClickTool"), &Z_Registration_Info_UClass_UVertexAdapterClickTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVertexAdapterClickTool), 1816009378U) },
		{ Z_Construct_UClass_UTextureAdapterClickTool, UTextureAdapterClickTool::StaticClass, TEXT("UTextureAdapterClickTool"), &Z_Registration_Info_UClass_UTextureAdapterClickTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextureAdapterClickTool), 3722577502U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshSelect_h_832021144(TEXT("/Script/MeshPaintingToolset"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshSelect_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshSelect_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
