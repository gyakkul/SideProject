// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuCOE/Nodes/CustomizableObjectNodeGroupProjectorParameter.h"
#include "../../Source/Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectNodeGroupProjectorParameter() {}
// Cross Module References
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeProjectorParameter();
	CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FGroupProjectorParameterImage();
	CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FGroupProjectorParameterPose();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPoseAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphPinReference();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GroupProjectorParameterImage;
class UScriptStruct* FGroupProjectorParameterImage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GroupProjectorParameterImage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GroupProjectorParameterImage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupProjectorParameterImage, (UObject*)Z_Construct_UPackage__Script_CustomizableObjectEditor(), TEXT("GroupProjectorParameterImage"));
	}
	return Z_Registration_Info_UScriptStruct_GroupProjectorParameterImage.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* StaticStruct<FGroupProjectorParameterImage>()
{
	return FGroupProjectorParameterImage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGroupProjectorParameterImage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OptionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OptionImage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupProjectorParameterImage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeGroupProjectorParameter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupProjectorParameterImage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupProjectorParameterImage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupProjectorParameterImage_Statics::NewProp_OptionName_MetaData[] = {
		{ "Category", "ProjectorGroup" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeGroupProjectorParameter.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupProjectorParameterImage_Statics::NewProp_OptionName = { "OptionName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupProjectorParameterImage, OptionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupProjectorParameterImage_Statics::NewProp_OptionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupProjectorParameterImage_Statics::NewProp_OptionName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupProjectorParameterImage_Statics::NewProp_OptionImage_MetaData[] = {
		{ "Category", "ProjectorGroup" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeGroupProjectorParameter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGroupProjectorParameterImage_Statics::NewProp_OptionImage = { "OptionImage", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupProjectorParameterImage, OptionImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupProjectorParameterImage_Statics::NewProp_OptionImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupProjectorParameterImage_Statics::NewProp_OptionImage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupProjectorParameterImage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupProjectorParameterImage_Statics::NewProp_OptionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupProjectorParameterImage_Statics::NewProp_OptionImage,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupProjectorParameterImage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
		nullptr,
		&NewStructOps,
		"GroupProjectorParameterImage",
		sizeof(FGroupProjectorParameterImage),
		alignof(FGroupProjectorParameterImage),
		Z_Construct_UScriptStruct_FGroupProjectorParameterImage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupProjectorParameterImage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupProjectorParameterImage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupProjectorParameterImage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupProjectorParameterImage()
	{
		if (!Z_Registration_Info_UScriptStruct_GroupProjectorParameterImage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GroupProjectorParameterImage.InnerSingleton, Z_Construct_UScriptStruct_FGroupProjectorParameterImage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GroupProjectorParameterImage.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GroupProjectorParameterPose;
class UScriptStruct* FGroupProjectorParameterPose::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GroupProjectorParameterPose.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GroupProjectorParameterPose.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupProjectorParameterPose, (UObject*)Z_Construct_UPackage__Script_CustomizableObjectEditor(), TEXT("GroupProjectorParameterPose"));
	}
	return Z_Registration_Info_UScriptStruct_GroupProjectorParameterPose.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* StaticStruct<FGroupProjectorParameterPose>()
{
	return FGroupProjectorParameterPose::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGroupProjectorParameterPose_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoseName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PoseName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionPose_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OptionPose;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupProjectorParameterPose_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeGroupProjectorParameter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupProjectorParameterPose_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupProjectorParameterPose>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupProjectorParameterPose_Statics::NewProp_PoseName_MetaData[] = {
		{ "Category", "ProjectorGroup" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeGroupProjectorParameter.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupProjectorParameterPose_Statics::NewProp_PoseName = { "PoseName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupProjectorParameterPose, PoseName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupProjectorParameterPose_Statics::NewProp_PoseName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupProjectorParameterPose_Statics::NewProp_PoseName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupProjectorParameterPose_Statics::NewProp_OptionPose_MetaData[] = {
		{ "Category", "ProjectorGroup" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeGroupProjectorParameter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGroupProjectorParameterPose_Statics::NewProp_OptionPose = { "OptionPose", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupProjectorParameterPose, OptionPose), Z_Construct_UClass_UPoseAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupProjectorParameterPose_Statics::NewProp_OptionPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupProjectorParameterPose_Statics::NewProp_OptionPose_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupProjectorParameterPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupProjectorParameterPose_Statics::NewProp_PoseName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupProjectorParameterPose_Statics::NewProp_OptionPose,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupProjectorParameterPose_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
		nullptr,
		&NewStructOps,
		"GroupProjectorParameterPose",
		sizeof(FGroupProjectorParameterPose),
		alignof(FGroupProjectorParameterPose),
		Z_Construct_UScriptStruct_FGroupProjectorParameterPose_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupProjectorParameterPose_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupProjectorParameterPose_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupProjectorParameterPose_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupProjectorParameterPose()
	{
		if (!Z_Registration_Info_UScriptStruct_GroupProjectorParameterPose.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GroupProjectorParameterPose.InnerSingleton, Z_Construct_UScriptStruct_FGroupProjectorParameterPose_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GroupProjectorParameterPose.InnerSingleton;
	}
	void UCustomizableObjectNodeGroupProjectorParameter::StaticRegisterNativesUCustomizableObjectNodeGroupProjectorParameter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectNodeGroupProjectorParameter);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_NoRegister()
	{
		return UCustomizableObjectNodeGroupProjectorParameter::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialChannelNameToConnect_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MaterialChannelNameToConnect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaskedOutAreaMaterialChannelName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MaskedOutAreaMaterialChannelName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ReferenceTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionTextureSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ProjectionTextureSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DropProjectionTextureAtLOD_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DropProjectionTextureAtLOD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShareProjectionTexturesBetweenLODs_MetaData[];
#endif
		static void NewProp_bShareProjectionTexturesBetweenLODs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShareProjectionTexturesBetweenLODs;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OptionImages_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionImages_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OptionImages;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OptionPoses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionPoses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OptionPoses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataTableTextureColumnName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DataTableTextureColumnName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionImagesDataTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OptionImagesDataTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlternateProjectionResolutionStateName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AlternateProjectionResolutionStateName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlternateProjectionResolutionFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AlternateProjectionResolutionFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVLayout_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UVLayout;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImagePin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImagePin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizableObjectNodeProjectorParameter,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "CustomizableObjectHide CustomizableObjectHide" },
		{ "IncludePath", "MuCOE/Nodes/CustomizableObjectNodeGroupProjectorParameter.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeGroupProjectorParameter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_MaterialChannelNameToConnect_MetaData[] = {
		{ "Category", "ProjectorGroup" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeGroupProjectorParameter.h" },
		{ "ToolTip", "Only used when connected to a Group node. Specifies which material channel in the Group node's child material nodes will be connected to the projection." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_MaterialChannelNameToConnect = { "MaterialChannelNameToConnect", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeGroupProjectorParameter, MaterialChannelNameToConnect), METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_MaterialChannelNameToConnect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_MaterialChannelNameToConnect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_MaskedOutAreaMaterialChannelName_MetaData[] = {
		{ "Category", "ProjectorGroup" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeGroupProjectorParameter.h" },
		{ "ToolTip", "Only used when connected to a Group node. Specifies which material channel will be used to mask out the projection." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_MaskedOutAreaMaterialChannelName = { "MaskedOutAreaMaterialChannelName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeGroupProjectorParameter, MaskedOutAreaMaterialChannelName), METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_MaskedOutAreaMaterialChannelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_MaskedOutAreaMaterialChannelName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_ReferenceTexture_MetaData[] = {
		{ "Category", "ProjectorGroup" },
		{ "Comment", "/** Reference Texture used to decide the texture properties of the mutable-generated textures\n\x09* connected to this material. If null, it will try to be guessed at compile time from\n\x09* the graph. */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeGroupProjectorParameter.h" },
		{ "ToolTip", "Reference Texture used to decide the texture properties of the mutable-generated textures\nconnected to this material. If null, it will try to be guessed at compile time from\nthe graph." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_ReferenceTexture = { "ReferenceTexture", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeGroupProjectorParameter, ReferenceTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_ReferenceTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_ReferenceTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_ProjectionTextureSize_MetaData[] = {
		{ "Category", "ProjectorGroup" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeGroupProjectorParameter.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_ProjectionTextureSize = { "ProjectionTextureSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeGroupProjectorParameter, ProjectionTextureSize), METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_ProjectionTextureSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_ProjectionTextureSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_DropProjectionTextureAtLOD_MetaData[] = {
		{ "Category", "ProjectorGroup" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeGroupProjectorParameter.h" },
		{ "ToolTip", "Specifies at which LOD level the projection texture will not be used and possibly save memory. A negative value means they will never be dropped." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_DropProjectionTextureAtLOD = { "DropProjectionTextureAtLOD", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeGroupProjectorParameter, DropProjectionTextureAtLOD), METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_DropProjectionTextureAtLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_DropProjectionTextureAtLOD_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_bShareProjectionTexturesBetweenLODs_MetaData[] = {
		{ "Category", "ProjectorGroup" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeGroupProjectorParameter.h" },
		{ "ToolTip", "If true, projection textures will be shared between LODs of the same object, and will save memory. Only use if all the LODs share the same UV layout." },
	};
#endif
	void Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_bShareProjectionTexturesBetweenLODs_SetBit(void* Obj)
	{
		((UCustomizableObjectNodeGroupProjectorParameter*)Obj)->bShareProjectionTexturesBetweenLODs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_bShareProjectionTexturesBetweenLODs = { "bShareProjectionTexturesBetweenLODs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCustomizableObjectNodeGroupProjectorParameter), &Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_bShareProjectionTexturesBetweenLODs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_bShareProjectionTexturesBetweenLODs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_bShareProjectionTexturesBetweenLODs_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_OptionImages_Inner = { "OptionImages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGroupProjectorParameterImage, METADATA_PARAMS(nullptr, 0) }; // 3970358695
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_OptionImages_MetaData[] = {
		{ "Category", "ProjectorGroup" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeGroupProjectorParameter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_OptionImages = { "OptionImages", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeGroupProjectorParameter, OptionImages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_OptionImages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_OptionImages_MetaData)) }; // 3970358695
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_OptionPoses_Inner = { "OptionPoses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGroupProjectorParameterPose, METADATA_PARAMS(nullptr, 0) }; // 1965993578
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_OptionPoses_MetaData[] = {
		{ "Category", "ProjectorGroup" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeGroupProjectorParameter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_OptionPoses = { "OptionPoses", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeGroupProjectorParameter, OptionPoses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_OptionPoses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_OptionPoses_MetaData)) }; // 1965993578
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_DataTableTextureColumnName_MetaData[] = {
		{ "Category", "ProjectorGroup" },
		{ "Comment", "/** Name of the column in the Option Images Data Table with the additional option images, (UTexture2D assets). */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeGroupProjectorParameter.h" },
		{ "ToolTip", "Name of the column in the Option Images Data Table with the additional option images, (UTexture2D assets)." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_DataTableTextureColumnName = { "DataTableTextureColumnName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeGroupProjectorParameter, DataTableTextureColumnName), METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_DataTableTextureColumnName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_DataTableTextureColumnName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_OptionImagesDataTable_MetaData[] = {
		{ "Category", "ProjectorGroup" },
		{ "Comment", "/** Table where additional option images besides Option Images are read. The elements in this table have priority\n\x09* over elements from Option Images in case of duplicity. Use the \"Data Table Texture Column Name\" property to specify\n\x09* the name of the column where textures are read in the table. */" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeGroupProjectorParameter.h" },
		{ "ToolTip", "Table where additional option images besides Option Images are read. The elements in this table have priority\nover elements from Option Images in case of duplicity. Use the \"Data Table Texture Column Name\" property to specify\nthe name of the column where textures are read in the table." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_OptionImagesDataTable = { "OptionImagesDataTable", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeGroupProjectorParameter, OptionImagesDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_OptionImagesDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_OptionImagesDataTable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_AlternateProjectionResolutionStateName_MetaData[] = {
		{ "Category", "ProjectorGroup" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeGroupProjectorParameter.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_AlternateProjectionResolutionStateName = { "AlternateProjectionResolutionStateName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeGroupProjectorParameter, AlternateProjectionResolutionStateName), METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_AlternateProjectionResolutionStateName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_AlternateProjectionResolutionStateName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_AlternateProjectionResolutionFactor_MetaData[] = {
		{ "Category", "ProjectorGroup" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeGroupProjectorParameter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_AlternateProjectionResolutionFactor = { "AlternateProjectionResolutionFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeGroupProjectorParameter, AlternateProjectionResolutionFactor), METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_AlternateProjectionResolutionFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_AlternateProjectionResolutionFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_UVLayout_MetaData[] = {
		{ "Category", "ProjectorGroup" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeGroupProjectorParameter.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_UVLayout = { "UVLayout", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeGroupProjectorParameter, UVLayout), METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_UVLayout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_UVLayout_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_ImagePin_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeGroupProjectorParameter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_ImagePin = { "ImagePin", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeGroupProjectorParameter, ImagePin), Z_Construct_UScriptStruct_FEdGraphPinReference, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_ImagePin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_ImagePin_MetaData)) }; // 1910659421
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_MaterialChannelNameToConnect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_MaskedOutAreaMaterialChannelName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_ReferenceTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_ProjectionTextureSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_DropProjectionTextureAtLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_bShareProjectionTexturesBetweenLODs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_OptionImages_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_OptionImages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_OptionPoses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_OptionPoses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_DataTableTextureColumnName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_OptionImagesDataTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_AlternateProjectionResolutionStateName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_AlternateProjectionResolutionFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_UVLayout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::NewProp_ImagePin,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectNodeGroupProjectorParameter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::ClassParams = {
		&UCustomizableObjectNodeGroupProjectorParameter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectNodeGroupProjectorParameter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectNodeGroupProjectorParameter.OuterSingleton, Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectNodeGroupProjectorParameter.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectNodeGroupProjectorParameter>()
	{
		return UCustomizableObjectNodeGroupProjectorParameter::StaticClass();
	}
	UCustomizableObjectNodeGroupProjectorParameter::UCustomizableObjectNodeGroupProjectorParameter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectNodeGroupProjectorParameter);
	UCustomizableObjectNodeGroupProjectorParameter::~UCustomizableObjectNodeGroupProjectorParameter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeGroupProjectorParameter_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeGroupProjectorParameter_h_Statics::ScriptStructInfo[] = {
		{ FGroupProjectorParameterImage::StaticStruct, Z_Construct_UScriptStruct_FGroupProjectorParameterImage_Statics::NewStructOps, TEXT("GroupProjectorParameterImage"), &Z_Registration_Info_UScriptStruct_GroupProjectorParameterImage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGroupProjectorParameterImage), 3970358695U) },
		{ FGroupProjectorParameterPose::StaticStruct, Z_Construct_UScriptStruct_FGroupProjectorParameterPose_Statics::NewStructOps, TEXT("GroupProjectorParameterPose"), &Z_Registration_Info_UScriptStruct_GroupProjectorParameterPose, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGroupProjectorParameterPose), 1965993578U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeGroupProjectorParameter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableObjectNodeGroupProjectorParameter, UCustomizableObjectNodeGroupProjectorParameter::StaticClass, TEXT("UCustomizableObjectNodeGroupProjectorParameter"), &Z_Registration_Info_UClass_UCustomizableObjectNodeGroupProjectorParameter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectNodeGroupProjectorParameter), 2333826451U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeGroupProjectorParameter_h_90672588(TEXT("/Script/CustomizableObjectEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeGroupProjectorParameter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeGroupProjectorParameter_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeGroupProjectorParameter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeGroupProjectorParameter_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
