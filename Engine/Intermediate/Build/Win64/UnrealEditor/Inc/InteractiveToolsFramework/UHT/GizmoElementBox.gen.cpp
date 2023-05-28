// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseGizmos/GizmoElementBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGizmoElementBox() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementBase();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementBox();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementBox_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	void UGizmoElementBox::StaticRegisterNativesUGizmoElementBox()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoElementBox);
	UClass* Z_Construct_UClass_UGizmoElementBox_NoRegister()
	{
		return UGizmoElementBox::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoElementBox_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Dimensions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Dimensions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SideDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SideDirection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoElementBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGizmoElementBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementBox_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Simple object intended to be used as part of 3D Gizmos.\n * Draws a solid 3D cylinder based on parameters.\n */" },
		{ "IncludePath", "BaseGizmos/GizmoElementBox.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementBox.h" },
		{ "ToolTip", "Simple object intended to be used as part of 3D Gizmos.\nDraws a solid 3D cylinder based on parameters." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementBox_Statics::NewProp_Center_MetaData[] = {
		{ "Comment", "// Location of center of box\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementBox.h" },
		{ "ToolTip", "Location of center of box" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoElementBox_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoElementBox, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGizmoElementBox_Statics::NewProp_Center_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementBox_Statics::NewProp_Center_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementBox_Statics::NewProp_Dimensions_MetaData[] = {
		{ "Comment", "// Box dimensions\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementBox.h" },
		{ "ToolTip", "Box dimensions" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoElementBox_Statics::NewProp_Dimensions = { "Dimensions", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoElementBox, Dimensions), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGizmoElementBox_Statics::NewProp_Dimensions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementBox_Statics::NewProp_Dimensions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementBox_Statics::NewProp_UpDirection_MetaData[] = {
		{ "Comment", "// Box up axis, corresponds to Z dimension\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementBox.h" },
		{ "ToolTip", "Box up axis, corresponds to Z dimension" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoElementBox_Statics::NewProp_UpDirection = { "UpDirection", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoElementBox, UpDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGizmoElementBox_Statics::NewProp_UpDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementBox_Statics::NewProp_UpDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementBox_Statics::NewProp_SideDirection_MetaData[] = {
		{ "Comment", "// Box side axis, corresponds to Y dimension\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementBox.h" },
		{ "ToolTip", "Box side axis, corresponds to Y dimension" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoElementBox_Statics::NewProp_SideDirection = { "SideDirection", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoElementBox, SideDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGizmoElementBox_Statics::NewProp_SideDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementBox_Statics::NewProp_SideDirection_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoElementBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementBox_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementBox_Statics::NewProp_Dimensions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementBox_Statics::NewProp_UpDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementBox_Statics::NewProp_SideDirection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoElementBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoElementBox>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoElementBox_Statics::ClassParams = {
		&UGizmoElementBox::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGizmoElementBox_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementBox_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoElementBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoElementBox()
	{
		if (!Z_Registration_Info_UClass_UGizmoElementBox.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoElementBox.OuterSingleton, Z_Construct_UClass_UGizmoElementBox_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGizmoElementBox.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoElementBox>()
	{
		return UGizmoElementBox::StaticClass();
	}
	UGizmoElementBox::UGizmoElementBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoElementBox);
	UGizmoElementBox::~UGizmoElementBox() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementBox_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementBox_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGizmoElementBox, UGizmoElementBox::StaticClass, TEXT("UGizmoElementBox"), &Z_Registration_Info_UClass_UGizmoElementBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoElementBox), 910493014U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementBox_h_1105383201(TEXT("/Script/InteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementBox_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
