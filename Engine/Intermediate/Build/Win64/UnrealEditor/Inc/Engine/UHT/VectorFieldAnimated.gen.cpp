// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/VectorField/VectorFieldAnimated.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVectorFieldAnimated() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UVectorField();
	ENGINE_API UClass* Z_Construct_UClass_UVectorFieldAnimated();
	ENGINE_API UClass* Z_Construct_UClass_UVectorFieldAnimated_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UVectorFieldStatic_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EVectorFieldConstructionOp();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVectorFieldConstructionOp;
	static UEnum* EVectorFieldConstructionOp_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVectorFieldConstructionOp.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVectorFieldConstructionOp.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EVectorFieldConstructionOp, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EVectorFieldConstructionOp"));
		}
		return Z_Registration_Info_UEnum_EVectorFieldConstructionOp.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EVectorFieldConstructionOp>()
	{
		return EVectorFieldConstructionOp_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EVectorFieldConstructionOp_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EVectorFieldConstructionOp_Statics::Enumerators[] = {
		{ "VFCO_Extrude", (int64)VFCO_Extrude },
		{ "VFCO_Revolve", (int64)VFCO_Revolve },
		{ "VFCO_MAX", (int64)VFCO_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EVectorFieldConstructionOp_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Operation used to construct the vector field from a 2D texture.\n */" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldAnimated.h" },
		{ "ToolTip", "Operation used to construct the vector field from a 2D texture." },
		{ "VFCO_Extrude.DisplayName", "Extrude" },
		{ "VFCO_Extrude.Name", "VFCO_Extrude" },
		{ "VFCO_MAX.Name", "VFCO_MAX" },
		{ "VFCO_Revolve.DisplayName", "Revolve" },
		{ "VFCO_Revolve.Name", "VFCO_Revolve" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EVectorFieldConstructionOp_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EVectorFieldConstructionOp",
		"EVectorFieldConstructionOp",
		Z_Construct_UEnum_Engine_EVectorFieldConstructionOp_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EVectorFieldConstructionOp_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EVectorFieldConstructionOp_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EVectorFieldConstructionOp_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EVectorFieldConstructionOp()
	{
		if (!Z_Registration_Info_UEnum_EVectorFieldConstructionOp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVectorFieldConstructionOp.InnerSingleton, Z_Construct_UEnum_Engine_EVectorFieldConstructionOp_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVectorFieldConstructionOp.InnerSingleton;
	}
	void UVectorFieldAnimated::StaticRegisterNativesUVectorFieldAnimated()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVectorFieldAnimated);
	UClass* Z_Construct_UClass_UVectorFieldAnimated_NoRegister()
	{
		return UVectorFieldAnimated::StaticClass();
	}
	struct Z_Construct_UClass_UVectorFieldAnimated_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Texture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstructionOp_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ConstructionOp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeSizeX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VolumeSizeX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeSizeY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VolumeSizeY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeSizeZ_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VolumeSizeZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubImagesX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SubImagesX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubImagesY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SubImagesY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FrameCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FramesPerSecond_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FramesPerSecond;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLoop_MetaData[];
#endif
		static void NewProp_bLoop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseField_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NoiseField;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseMax;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVectorFieldAnimated_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVectorField,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVectorFieldAnimated_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VectorField/VectorFieldAnimated.h" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldAnimated.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "Reconstruction" },
		{ "Comment", "/** The texture from which to create the vector field. */" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldAnimated.h" },
		{ "ToolTip", "The texture from which to create the vector field." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVectorFieldAnimated, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_Texture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_ConstructionOp_MetaData[] = {
		{ "Category", "Reconstruction" },
		{ "Comment", "/** The operation used to construct the vector field. */" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldAnimated.h" },
		{ "ToolTip", "The operation used to construct the vector field." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_ConstructionOp = { "ConstructionOp", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVectorFieldAnimated, ConstructionOp), Z_Construct_UEnum_Engine_EVectorFieldConstructionOp, METADATA_PARAMS(Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_ConstructionOp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_ConstructionOp_MetaData)) }; // 945288028
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_VolumeSizeX_MetaData[] = {
		{ "Category", "Reconstruction" },
		{ "Comment", "/** The size of the volume. Valid sizes: 16, 32, 64. */" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldAnimated.h" },
		{ "ToolTip", "The size of the volume. Valid sizes: 16, 32, 64." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_VolumeSizeX = { "VolumeSizeX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVectorFieldAnimated, VolumeSizeX), METADATA_PARAMS(Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_VolumeSizeX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_VolumeSizeX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_VolumeSizeY_MetaData[] = {
		{ "Category", "Reconstruction" },
		{ "Comment", "/** The size of the volume. Valid sizes: 16, 32, 64. */" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldAnimated.h" },
		{ "ToolTip", "The size of the volume. Valid sizes: 16, 32, 64." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_VolumeSizeY = { "VolumeSizeY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVectorFieldAnimated, VolumeSizeY), METADATA_PARAMS(Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_VolumeSizeY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_VolumeSizeY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_VolumeSizeZ_MetaData[] = {
		{ "Category", "Reconstruction" },
		{ "Comment", "/** The size of the volume. Valid sizes: 16, 32, 64. */" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldAnimated.h" },
		{ "ToolTip", "The size of the volume. Valid sizes: 16, 32, 64." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_VolumeSizeZ = { "VolumeSizeZ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVectorFieldAnimated, VolumeSizeZ), METADATA_PARAMS(Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_VolumeSizeZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_VolumeSizeZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_SubImagesX_MetaData[] = {
		{ "Category", "Reconstruction" },
		{ "Comment", "/** The number of horizontal subimages in the texture atlas. */" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldAnimated.h" },
		{ "ToolTip", "The number of horizontal subimages in the texture atlas." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_SubImagesX = { "SubImagesX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVectorFieldAnimated, SubImagesX), METADATA_PARAMS(Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_SubImagesX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_SubImagesX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_SubImagesY_MetaData[] = {
		{ "Category", "Reconstruction" },
		{ "Comment", "/** The number of vertical subimages in the texture atlas. */" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldAnimated.h" },
		{ "ToolTip", "The number of vertical subimages in the texture atlas." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_SubImagesY = { "SubImagesY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVectorFieldAnimated, SubImagesY), METADATA_PARAMS(Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_SubImagesY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_SubImagesY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_FrameCount_MetaData[] = {
		{ "Category", "Reconstruction" },
		{ "Comment", "/** The number of frames in the atlas. */" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldAnimated.h" },
		{ "ToolTip", "The number of frames in the atlas." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_FrameCount = { "FrameCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVectorFieldAnimated, FrameCount), METADATA_PARAMS(Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_FrameCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_FrameCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_FramesPerSecond_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** The rate at which to interpolate between frames. */" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldAnimated.h" },
		{ "ToolTip", "The rate at which to interpolate between frames." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_FramesPerSecond = { "FramesPerSecond", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVectorFieldAnimated, FramesPerSecond), METADATA_PARAMS(Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_FramesPerSecond_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_FramesPerSecond_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_bLoop_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Whether or not the simulation should loop. */" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldAnimated.h" },
		{ "ToolTip", "Whether or not the simulation should loop." },
	};
#endif
	void Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_bLoop_SetBit(void* Obj)
	{
		((UVectorFieldAnimated*)Obj)->bLoop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UVectorFieldAnimated), &Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_bLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_bLoop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_NoiseField_MetaData[] = {
		{ "Category", "Noise" },
		{ "Comment", "/** A static vector field used to add noise. */" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldAnimated.h" },
		{ "ToolTip", "A static vector field used to add noise." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_NoiseField = { "NoiseField", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVectorFieldAnimated, NoiseField), Z_Construct_UClass_UVectorFieldStatic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_NoiseField_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_NoiseField_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_NoiseScale_MetaData[] = {
		{ "Category", "Noise" },
		{ "Comment", "/** Scale to apply to vectors in the noise field. */" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldAnimated.h" },
		{ "ToolTip", "Scale to apply to vectors in the noise field." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_NoiseScale = { "NoiseScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVectorFieldAnimated, NoiseScale), METADATA_PARAMS(Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_NoiseScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_NoiseScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_NoiseMax_MetaData[] = {
		{ "Category", "Noise" },
		{ "Comment", "/** The maximum magnitude of noise vectors to apply. */" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldAnimated.h" },
		{ "ToolTip", "The maximum magnitude of noise vectors to apply." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_NoiseMax = { "NoiseMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVectorFieldAnimated, NoiseMax), METADATA_PARAMS(Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_NoiseMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_NoiseMax_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVectorFieldAnimated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_ConstructionOp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_VolumeSizeX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_VolumeSizeY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_VolumeSizeZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_SubImagesX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_SubImagesY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_FrameCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_FramesPerSecond,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_bLoop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_NoiseField,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_NoiseScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_NoiseMax,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVectorFieldAnimated_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVectorFieldAnimated>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVectorFieldAnimated_Statics::ClassParams = {
		&UVectorFieldAnimated::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVectorFieldAnimated_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVectorFieldAnimated_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVectorFieldAnimated_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVectorFieldAnimated_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVectorFieldAnimated()
	{
		if (!Z_Registration_Info_UClass_UVectorFieldAnimated.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVectorFieldAnimated.OuterSingleton, Z_Construct_UClass_UVectorFieldAnimated_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVectorFieldAnimated.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UVectorFieldAnimated>()
	{
		return UVectorFieldAnimated::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVectorFieldAnimated);
	UVectorFieldAnimated::~UVectorFieldAnimated() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h_Statics::EnumInfo[] = {
		{ EVectorFieldConstructionOp_StaticEnum, TEXT("EVectorFieldConstructionOp"), &Z_Registration_Info_UEnum_EVectorFieldConstructionOp, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 945288028U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVectorFieldAnimated, UVectorFieldAnimated::StaticClass, TEXT("UVectorFieldAnimated"), &Z_Registration_Info_UClass_UVectorFieldAnimated, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVectorFieldAnimated), 1107718011U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h_2309701574(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
