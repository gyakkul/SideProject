// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/MuCOE/CustomizableObjectEditor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectEditor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EPixelFormat();
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableObjectInstance_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectEditorTextureStats();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectEditorTextureStats_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UUpdateClassWrapper();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UUpdateClassWrapper_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureGroup();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectEditor();
// End Cross Module References
	DEFINE_FUNCTION(UUpdateClassWrapper::execDelegatedCallback)
	{
		P_GET_OBJECT(UCustomizableObjectInstance,Z_Param_Instance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DelegatedCallback(Z_Param_Instance);
		P_NATIVE_END;
	}
	void UUpdateClassWrapper::StaticRegisterNativesUUpdateClassWrapper()
	{
		UClass* Class = UUpdateClassWrapper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DelegatedCallback", &UUpdateClassWrapper::execDelegatedCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUpdateClassWrapper_DelegatedCallback_Statics
	{
		struct UpdateClassWrapper_eventDelegatedCallback_Parms
		{
			UCustomizableObjectInstance* Instance;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateClassWrapper_DelegatedCallback_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UpdateClassWrapper_eventDelegatedCallback_Parms, Instance), Z_Construct_UClass_UCustomizableObjectInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateClassWrapper_DelegatedCallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateClassWrapper_DelegatedCallback_Statics::NewProp_Instance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpdateClassWrapper_DelegatedCallback_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Method to assign for the callback */" },
		{ "ModuleRelativePath", "Private/MuCOE/CustomizableObjectEditor.h" },
		{ "ToolTip", "Method to assign for the callback" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateClassWrapper_DelegatedCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateClassWrapper, nullptr, "DelegatedCallback", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUpdateClassWrapper_DelegatedCallback_Statics::UpdateClassWrapper_eventDelegatedCallback_Parms), Z_Construct_UFunction_UUpdateClassWrapper_DelegatedCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateClassWrapper_DelegatedCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUpdateClassWrapper_DelegatedCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateClassWrapper_DelegatedCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUpdateClassWrapper_DelegatedCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUpdateClassWrapper_DelegatedCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUpdateClassWrapper);
	UClass* Z_Construct_UClass_UUpdateClassWrapper_NoRegister()
	{
		return UUpdateClassWrapper::StaticClass();
	}
	struct Z_Construct_UClass_UUpdateClassWrapper_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUpdateClassWrapper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUpdateClassWrapper_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUpdateClassWrapper_DelegatedCallback, "DelegatedCallback" }, // 3912802269
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUpdateClassWrapper_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Wrapper UObject class for the UCustomizableObjectInstance::FObjectInstanceUpdatedDelegate dynamic multicast delegate\n*/" },
		{ "IncludePath", "MuCOE/CustomizableObjectEditor.h" },
		{ "ModuleRelativePath", "Private/MuCOE/CustomizableObjectEditor.h" },
		{ "ToolTip", "Wrapper UObject class for the UCustomizableObjectInstance::FObjectInstanceUpdatedDelegate dynamic multicast delegate" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUpdateClassWrapper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUpdateClassWrapper>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUpdateClassWrapper_Statics::ClassParams = {
		&UUpdateClassWrapper::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUpdateClassWrapper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUpdateClassWrapper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUpdateClassWrapper()
	{
		if (!Z_Registration_Info_UClass_UUpdateClassWrapper.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUpdateClassWrapper.OuterSingleton, Z_Construct_UClass_UUpdateClassWrapper_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUpdateClassWrapper.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UUpdateClassWrapper>()
	{
		return UUpdateClassWrapper::StaticClass();
	}
	UUpdateClassWrapper::UUpdateClassWrapper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUpdateClassWrapper);
	UUpdateClassWrapper::~UUpdateClassWrapper() {}
	void UCustomizableObjectEditorTextureStats::StaticRegisterNativesUCustomizableObjectEditorTextureStats()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectEditorTextureStats);
	UClass* Z_Construct_UClass_UCustomizableObjectEditorTextureStats_NoRegister()
	{
		return UCustomizableObjectEditorTextureStats::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TextureName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TextureParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MaterialName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MaterialParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Texture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParentMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResolutionX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ResolutionX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResolutionY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ResolutionY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Format_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Format;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODBias_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsStreamed_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_IsStreamed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODGroup_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LODGroup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Component;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Statistics for the Texture Analyzer */" },
		{ "DisplayName", "Texture Stats" },
		{ "IncludePath", "MuCOE/CustomizableObjectEditor.h" },
		{ "ModuleRelativePath", "Private/MuCOE/CustomizableObjectEditor.h" },
		{ "ToolTip", "Statistics for the Texture Analyzer" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_TextureName_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "40" },
		{ "Comment", "/** Texture - double click to open */" },
		{ "DisplayName", "Texture" },
		{ "ModuleRelativePath", "Private/MuCOE/CustomizableObjectEditor.h" },
		{ "ToolTip", "Texture - double click to open" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_TextureName = { "TextureName", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectEditorTextureStats, TextureName), METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_TextureName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_TextureName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_TextureParameterName_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "50" },
		{ "Comment", "/** Texture - double click to open */" },
		{ "DisplayName", "Name" },
		{ "ModuleRelativePath", "Private/MuCOE/CustomizableObjectEditor.h" },
		{ "ToolTip", "Texture - double click to open" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_TextureParameterName = { "TextureParameterName", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectEditorTextureStats, TextureParameterName), METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_TextureParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_TextureParameterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_MaterialName_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "50" },
		{ "Comment", "/** Material - double click to open */" },
		{ "DisplayName", "Material" },
		{ "ModuleRelativePath", "Private/MuCOE/CustomizableObjectEditor.h" },
		{ "ToolTip", "Material - double click to open" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_MaterialName = { "MaterialName", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectEditorTextureStats, MaterialName), METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_MaterialName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_MaterialName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_MaterialParameterName_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "50" },
		{ "Comment", "/** Parent Material - double click to open */" },
		{ "DisplayName", "Parent" },
		{ "ModuleRelativePath", "Private/MuCOE/CustomizableObjectEditor.h" },
		{ "ToolTip", "Parent Material - double click to open" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_MaterialParameterName = { "MaterialParameterName", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectEditorTextureStats, MaterialParameterName), METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_MaterialParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_MaterialParameterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_Texture_MetaData[] = {
		{ "Comment", "/** Used to open the texture in the editor*/" },
		{ "ModuleRelativePath", "Private/MuCOE/CustomizableObjectEditor.h" },
		{ "ToolTip", "Used to open the texture in the editor" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectEditorTextureStats, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_Texture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_Material_MetaData[] = {
		{ "Comment", "/** Used to open the material in the editor*/" },
		{ "ModuleRelativePath", "Private/MuCOE/CustomizableObjectEditor.h" },
		{ "ToolTip", "Used to open the material in the editor" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectEditorTextureStats, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_ParentMaterial_MetaData[] = {
		{ "Comment", "/** Used to open the parent material in the editor*/" },
		{ "ModuleRelativePath", "Private/MuCOE/CustomizableObjectEditor.h" },
		{ "ToolTip", "Used to open the parent material in the editor" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_ParentMaterial = { "ParentMaterial", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectEditorTextureStats, ParentMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_ParentMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_ParentMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_ResolutionX_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "40" },
		{ "Comment", "/** Resolution of the texture */" },
		{ "DisplayName", "Resolution X" },
		{ "DisplayRight", "true" },
		{ "ModuleRelativePath", "Private/MuCOE/CustomizableObjectEditor.h" },
		{ "ToolTip", "Resolution of the texture" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_ResolutionX = { "ResolutionX", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectEditorTextureStats, ResolutionX), METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_ResolutionX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_ResolutionX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_ResolutionY_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "40" },
		{ "DisplayName", "Resolution Y" },
		{ "DisplayRight", "true" },
		{ "ModuleRelativePath", "Private/MuCOE/CustomizableObjectEditor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_ResolutionY = { "ResolutionY", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectEditorTextureStats, ResolutionY), METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_ResolutionY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_ResolutionY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "90" },
		{ "Comment", "/** The memory used in KB */" },
		{ "DisplayName", "Size Kb" },
		{ "ModuleRelativePath", "Private/MuCOE/CustomizableObjectEditor.h" },
		{ "ToolTip", "The memory used in KB" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectEditorTextureStats, Size), METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_Format_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "96" },
		{ "Comment", "/** The texture format, e.g. PF_DXT1 */" },
		{ "ModuleRelativePath", "Private/MuCOE/CustomizableObjectEditor.h" },
		{ "ToolTip", "The texture format, e.g. PF_DXT1" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectEditorTextureStats, Format), Z_Construct_UEnum_CoreUObject_EPixelFormat, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_Format_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_Format_MetaData)) }; // 2651536151
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_LODBias_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "70" },
		{ "Comment", "/** LOD Bias for this texture. (Texture LODBias + Texture group) */" },
		{ "DisplayName", "LOD Bias" },
		{ "ModuleRelativePath", "Private/MuCOE/CustomizableObjectEditor.h" },
		{ "ToolTip", "LOD Bias for this texture. (Texture LODBias + Texture group)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_LODBias = { "LODBias", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectEditorTextureStats, LODBias), METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_LODBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_LODBias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_IsStreamed_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "70" },
		{ "Comment", "/** Says if the texture is being streamed */" },
		{ "DisplayName", "Streamed" },
		{ "ModuleRelativePath", "Private/MuCOE/CustomizableObjectEditor.h" },
		{ "ToolTip", "Says if the texture is being streamed" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_IsStreamed = { "IsStreamed", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectEditorTextureStats, IsStreamed), METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_IsStreamed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_IsStreamed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_LODGroup_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "70" },
		{ "Comment", "/** The Level of detail group of the texture */" },
		{ "DisplayName", "Texture Group" },
		{ "ModuleRelativePath", "Private/MuCOE/CustomizableObjectEditor.h" },
		{ "ToolTip", "The Level of detail group of the texture" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_LODGroup = { "LODGroup", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectEditorTextureStats, LODGroup), Z_Construct_UEnum_Engine_TextureGroup, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_LODGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_LODGroup_MetaData)) }; // 3720270347
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_Component_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "70" },
		{ "Comment", "/** The Component of the texture */" },
		{ "DisplayName", "Component" },
		{ "ModuleRelativePath", "Private/MuCOE/CustomizableObjectEditor.h" },
		{ "ToolTip", "The Component of the texture" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectEditorTextureStats, Component), METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_Component_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_TextureName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_TextureParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_MaterialName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_MaterialParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_ParentMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_ResolutionX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_ResolutionY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_Format,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_LODBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_IsStreamed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_LODGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::NewProp_Component,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectEditorTextureStats>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::ClassParams = {
		&UCustomizableObjectEditorTextureStats::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::PropPointers),
		0,
		0x000800A8u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizableObjectEditorTextureStats()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectEditorTextureStats.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectEditorTextureStats.OuterSingleton, Z_Construct_UClass_UCustomizableObjectEditorTextureStats_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectEditorTextureStats.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectEditorTextureStats>()
	{
		return UCustomizableObjectEditorTextureStats::StaticClass();
	}
	UCustomizableObjectEditorTextureStats::UCustomizableObjectEditorTextureStats(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectEditorTextureStats);
	UCustomizableObjectEditorTextureStats::~UCustomizableObjectEditorTextureStats() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectEditor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectEditor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUpdateClassWrapper, UUpdateClassWrapper::StaticClass, TEXT("UUpdateClassWrapper"), &Z_Registration_Info_UClass_UUpdateClassWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUpdateClassWrapper), 1232030209U) },
		{ Z_Construct_UClass_UCustomizableObjectEditorTextureStats, UCustomizableObjectEditorTextureStats::StaticClass, TEXT("UCustomizableObjectEditorTextureStats"), &Z_Registration_Info_UClass_UCustomizableObjectEditorTextureStats, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectEditorTextureStats), 4204618703U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectEditor_h_4060961402(TEXT("/Script/CustomizableObjectEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectEditor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectEditor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
