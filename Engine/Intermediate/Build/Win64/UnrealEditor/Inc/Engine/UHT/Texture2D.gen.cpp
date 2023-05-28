// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTexture2D() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	ENGINE_API UClass* Z_Construct_UClass_UTexture();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureAddress();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(UTexture2D::execBlueprint_GetSizeY)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Blueprint_GetSizeY();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTexture2D::execBlueprint_GetSizeX)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Blueprint_GetSizeX();
		P_NATIVE_END;
	}
	void UTexture2D::StaticRegisterNativesUTexture2D()
	{
		UClass* Class = UTexture2D::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Blueprint_GetSizeX", &UTexture2D::execBlueprint_GetSizeX },
			{ "Blueprint_GetSizeY", &UTexture2D::execBlueprint_GetSizeY },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeX_Statics
	{
		struct Texture2D_eventBlueprint_GetSizeX_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Texture2D_eventBlueprint_GetSizeX_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeX_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeX_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeX_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Texture" },
		{ "Comment", "/**\n\x09 * Gets the X size of the texture, in pixels\n\x09 */" },
		{ "DisplayName", "GetSizeX" },
		{ "ModuleRelativePath", "Classes/Engine/Texture2D.h" },
		{ "ToolTip", "Gets the X size of the texture, in pixels" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTexture2D, nullptr, "Blueprint_GetSizeX", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeX_Statics::Texture2D_eventBlueprint_GetSizeX_Parms), Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeY_Statics
	{
		struct Texture2D_eventBlueprint_GetSizeY_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Texture2D_eventBlueprint_GetSizeY_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeY_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeY_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeY_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Texture" },
		{ "Comment", "/**\n\x09 * Gets the Y size of the texture, in pixels\n\x09 */" },
		{ "DisplayName", "GetSizeY" },
		{ "ModuleRelativePath", "Classes/Engine/Texture2D.h" },
		{ "ToolTip", "Gets the Y size of the texture, in pixels" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTexture2D, nullptr, "Blueprint_GetSizeY", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeY_Statics::Texture2D_eventBlueprint_GetSizeY_Parms), Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeY_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeY_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTexture2D);
	UClass* Z_Construct_UClass_UTexture2D_NoRegister()
	{
		return UTexture2D::StaticClass();
	}
	struct Z_Construct_UClass_UTexture2D_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstResourceMemMip_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FirstResourceMemMip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTemporarilyDisableStreaming_MetaData[];
#endif
		static void NewProp_bTemporarilyDisableStreaming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTemporarilyDisableStreaming;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasBeenPaintedInEditor_MetaData[];
#endif
		static void NewProp_bHasBeenPaintedInEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasBeenPaintedInEditor;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddressX_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AddressX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddressY_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AddressY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportedSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImportedSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTexture2D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTexture,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTexture2D_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeX, "Blueprint_GetSizeX" }, // 2832011787
		{ &Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeY, "Blueprint_GetSizeY" }, // 1161744688
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture2D_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Engine/Texture2D.h" },
		{ "ModuleRelativePath", "Classes/Engine/Texture2D.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture2D_Statics::NewProp_FirstResourceMemMip_MetaData[] = {
		{ "Comment", "/** keep track of first mip level used for ResourceMem creation */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture2D.h" },
		{ "ToolTip", "keep track of first mip level used for ResourceMem creation" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTexture2D_Statics::NewProp_FirstResourceMemMip = { "FirstResourceMemMip", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTexture2D, FirstResourceMemMip), METADATA_PARAMS(Z_Construct_UClass_UTexture2D_Statics::NewProp_FirstResourceMemMip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture2D_Statics::NewProp_FirstResourceMemMip_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture2D_Statics::NewProp_bTemporarilyDisableStreaming_MetaData[] = {
		{ "Comment", "/** True if streaming is temporarily disabled so we can update subregions of this texture's resource \n\x09without streaming clobbering it. Automatically cleared before saving. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture2D.h" },
		{ "ToolTip", "True if streaming is temporarily disabled so we can update subregions of this texture's resource\n      without streaming clobbering it. Automatically cleared before saving." },
	};
#endif
	void Z_Construct_UClass_UTexture2D_Statics::NewProp_bTemporarilyDisableStreaming_SetBit(void* Obj)
	{
		((UTexture2D*)Obj)->bTemporarilyDisableStreaming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture2D_Statics::NewProp_bTemporarilyDisableStreaming = { "bTemporarilyDisableStreaming", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTexture2D), &Z_Construct_UClass_UTexture2D_Statics::NewProp_bTemporarilyDisableStreaming_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTexture2D_Statics::NewProp_bTemporarilyDisableStreaming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture2D_Statics::NewProp_bTemporarilyDisableStreaming_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture2D_Statics::NewProp_bHasBeenPaintedInEditor_MetaData[] = {
		{ "Comment", "/** Whether the texture has been painted in the editor.\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/Texture2D.h" },
		{ "ToolTip", "Whether the texture has been painted in the editor." },
	};
#endif
	void Z_Construct_UClass_UTexture2D_Statics::NewProp_bHasBeenPaintedInEditor_SetBit(void* Obj)
	{
		((UTexture2D*)Obj)->bHasBeenPaintedInEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture2D_Statics::NewProp_bHasBeenPaintedInEditor = { "bHasBeenPaintedInEditor", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTexture2D), &Z_Construct_UClass_UTexture2D_Statics::NewProp_bHasBeenPaintedInEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTexture2D_Statics::NewProp_bHasBeenPaintedInEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture2D_Statics::NewProp_bHasBeenPaintedInEditor_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture2D_Statics::NewProp_AddressX_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** The addressing mode to use for the X axis.\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "DisplayName", "X-axis Tiling Method" },
		{ "ModuleRelativePath", "Classes/Engine/Texture2D.h" },
		{ "ToolTip", "The addressing mode to use for the X axis." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTexture2D_Statics::NewProp_AddressX = { "AddressX", nullptr, (EPropertyFlags)0x0010050000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTexture2D, AddressX), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(Z_Construct_UClass_UTexture2D_Statics::NewProp_AddressX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture2D_Statics::NewProp_AddressX_MetaData)) }; // 1462649072
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture2D_Statics::NewProp_AddressY_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** The addressing mode to use for the Y axis.\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "DisplayName", "Y-axis Tiling Method" },
		{ "ModuleRelativePath", "Classes/Engine/Texture2D.h" },
		{ "ToolTip", "The addressing mode to use for the Y axis." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTexture2D_Statics::NewProp_AddressY = { "AddressY", nullptr, (EPropertyFlags)0x0010050000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTexture2D, AddressY), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(Z_Construct_UClass_UTexture2D_Statics::NewProp_AddressY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture2D_Statics::NewProp_AddressY_MetaData)) }; // 1462649072
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture2D_Statics::NewProp_ImportedSize_MetaData[] = {
		{ "Comment", "/**\n\x09 * The imported size of the texture. Only valid on cooked builds when texture source is not\n\x09 * available. Access ONLY via the GetImportedSize() accessor!\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture2D.h" },
		{ "ToolTip", "The imported size of the texture. Only valid on cooked builds when texture source is not\navailable. Access ONLY via the GetImportedSize() accessor!" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTexture2D_Statics::NewProp_ImportedSize = { "ImportedSize", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTexture2D, ImportedSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UTexture2D_Statics::NewProp_ImportedSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture2D_Statics::NewProp_ImportedSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTexture2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture2D_Statics::NewProp_FirstResourceMemMip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture2D_Statics::NewProp_bTemporarilyDisableStreaming,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture2D_Statics::NewProp_bHasBeenPaintedInEditor,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture2D_Statics::NewProp_AddressX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture2D_Statics::NewProp_AddressY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture2D_Statics::NewProp_ImportedSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTexture2D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTexture2D>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTexture2D_Statics::ClassParams = {
		&UTexture2D::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTexture2D_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTexture2D_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTexture2D_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture2D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTexture2D()
	{
		if (!Z_Registration_Info_UClass_UTexture2D.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTexture2D.OuterSingleton, Z_Construct_UClass_UTexture2D_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTexture2D.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UTexture2D>()
	{
		return UTexture2D::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTexture2D);
	UTexture2D::~UTexture2D() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UTexture2D)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTexture2D, UTexture2D::StaticClass, TEXT("UTexture2D"), &Z_Registration_Info_UClass_UTexture2D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTexture2D), 487803798U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_933242418(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
