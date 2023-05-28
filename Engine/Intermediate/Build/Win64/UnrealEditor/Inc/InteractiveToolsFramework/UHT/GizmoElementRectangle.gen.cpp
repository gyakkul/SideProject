// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseGizmos/GizmoElementRectangle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGizmoElementRectangle() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementLineBase();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementRectangle();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementRectangle_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	void UGizmoElementRectangle::StaticRegisterNativesUGizmoElementRectangle()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoElementRectangle);
	UClass* Z_Construct_UClass_UGizmoElementRectangle_NoRegister()
	{
		return UGizmoElementRectangle::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoElementRectangle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SideDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SideDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawMesh_MetaData[];
#endif
		static void NewProp_bDrawMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawLine_MetaData[];
#endif
		static void NewProp_bDrawLine_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawLine;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHitMesh_MetaData[];
#endif
		static void NewProp_bHitMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHitMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHitLine_MetaData[];
#endif
		static void NewProp_bHitLine_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHitLine;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoElementRectangle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGizmoElementLineBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementRectangle_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Simple object intended to be used as part of 3D Gizmos.\n * Draws a rectangle based on parameters.\n */" },
		{ "IncludePath", "BaseGizmos/GizmoElementRectangle.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementRectangle.h" },
		{ "ToolTip", "Simple object intended to be used as part of 3D Gizmos.\nDraws a rectangle based on parameters." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_Center_MetaData[] = {
		{ "Comment", "// Location of rectangle center\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementRectangle.h" },
		{ "ToolTip", "Location of rectangle center" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoElementRectangle, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_Center_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_Center_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_Width_MetaData[] = {
		{ "Comment", "// Width\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementRectangle.h" },
		{ "ToolTip", "Width" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoElementRectangle, Width), METADATA_PARAMS(Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_Height_MetaData[] = {
		{ "Comment", "// Height\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementRectangle.h" },
		{ "ToolTip", "Height" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoElementRectangle, Height), METADATA_PARAMS(Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_UpDirection_MetaData[] = {
		{ "Comment", "// Up direction\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementRectangle.h" },
		{ "ToolTip", "Up direction" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_UpDirection = { "UpDirection", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoElementRectangle, UpDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_UpDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_UpDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_SideDirection_MetaData[] = {
		{ "Comment", "// Side direction\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementRectangle.h" },
		{ "ToolTip", "Side direction" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_SideDirection = { "SideDirection", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoElementRectangle, SideDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_SideDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_SideDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_bDrawMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementRectangle.h" },
	};
#endif
	void Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_bDrawMesh_SetBit(void* Obj)
	{
		((UGizmoElementRectangle*)Obj)->bDrawMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_bDrawMesh = { "bDrawMesh", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGizmoElementRectangle), &Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_bDrawMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_bDrawMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_bDrawMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_bDrawLine_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementRectangle.h" },
	};
#endif
	void Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_bDrawLine_SetBit(void* Obj)
	{
		((UGizmoElementRectangle*)Obj)->bDrawLine = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_bDrawLine = { "bDrawLine", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGizmoElementRectangle), &Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_bDrawLine_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_bDrawLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_bDrawLine_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_bHitMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementRectangle.h" },
	};
#endif
	void Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_bHitMesh_SetBit(void* Obj)
	{
		((UGizmoElementRectangle*)Obj)->bHitMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_bHitMesh = { "bHitMesh", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGizmoElementRectangle), &Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_bHitMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_bHitMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_bHitMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_bHitLine_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementRectangle.h" },
	};
#endif
	void Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_bHitLine_SetBit(void* Obj)
	{
		((UGizmoElementRectangle*)Obj)->bHitLine = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_bHitLine = { "bHitLine", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGizmoElementRectangle), &Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_bHitLine_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_bHitLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_bHitLine_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoElementRectangle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_UpDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_SideDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_bDrawMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_bDrawLine,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_bHitMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_bHitLine,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoElementRectangle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoElementRectangle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoElementRectangle_Statics::ClassParams = {
		&UGizmoElementRectangle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGizmoElementRectangle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementRectangle_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoElementRectangle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementRectangle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoElementRectangle()
	{
		if (!Z_Registration_Info_UClass_UGizmoElementRectangle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoElementRectangle.OuterSingleton, Z_Construct_UClass_UGizmoElementRectangle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGizmoElementRectangle.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoElementRectangle>()
	{
		return UGizmoElementRectangle::StaticClass();
	}
	UGizmoElementRectangle::UGizmoElementRectangle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoElementRectangle);
	UGizmoElementRectangle::~UGizmoElementRectangle() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementRectangle_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementRectangle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGizmoElementRectangle, UGizmoElementRectangle::StaticClass, TEXT("UGizmoElementRectangle"), &Z_Registration_Info_UClass_UGizmoElementRectangle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoElementRectangle), 1134437127U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementRectangle_h_2879130659(TEXT("/Script/InteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementRectangle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementRectangle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
