// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayDebuggerTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayDebuggerTypes() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	GAMEPLAYDEBUGGER_API UEnum* Z_Construct_UEnum_GameplayDebugger_EGameplayDebuggerShape();
	GAMEPLAYDEBUGGER_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerDataPackHeader();
	GAMEPLAYDEBUGGER_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerShape();
	UPackage* Z_Construct_UPackage__Script_GameplayDebugger();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayDebuggerShape;
	static UEnum* EGameplayDebuggerShape_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGameplayDebuggerShape.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGameplayDebuggerShape.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayDebugger_EGameplayDebuggerShape, (UObject*)Z_Construct_UPackage__Script_GameplayDebugger(), TEXT("EGameplayDebuggerShape"));
		}
		return Z_Registration_Info_UEnum_EGameplayDebuggerShape.OuterSingleton;
	}
	template<> GAMEPLAYDEBUGGER_API UEnum* StaticEnum<EGameplayDebuggerShape>()
	{
		return EGameplayDebuggerShape_StaticEnum();
	}
	struct Z_Construct_UEnum_GameplayDebugger_EGameplayDebuggerShape_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameplayDebugger_EGameplayDebuggerShape_Statics::Enumerators[] = {
		{ "EGameplayDebuggerShape::Invalid", (int64)EGameplayDebuggerShape::Invalid },
		{ "EGameplayDebuggerShape::Point", (int64)EGameplayDebuggerShape::Point },
		{ "EGameplayDebuggerShape::Segment", (int64)EGameplayDebuggerShape::Segment },
		{ "EGameplayDebuggerShape::Box", (int64)EGameplayDebuggerShape::Box },
		{ "EGameplayDebuggerShape::Cone", (int64)EGameplayDebuggerShape::Cone },
		{ "EGameplayDebuggerShape::Cylinder", (int64)EGameplayDebuggerShape::Cylinder },
		{ "EGameplayDebuggerShape::Circle", (int64)EGameplayDebuggerShape::Circle },
		{ "EGameplayDebuggerShape::Capsule", (int64)EGameplayDebuggerShape::Capsule },
		{ "EGameplayDebuggerShape::Polygon", (int64)EGameplayDebuggerShape::Polygon },
		{ "EGameplayDebuggerShape::Arrow", (int64)EGameplayDebuggerShape::Arrow },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameplayDebugger_EGameplayDebuggerShape_Statics::Enum_MetaDataParams[] = {
		{ "Arrow.Name", "EGameplayDebuggerShape::Arrow" },
		{ "Box.Name", "EGameplayDebuggerShape::Box" },
		{ "Capsule.Name", "EGameplayDebuggerShape::Capsule" },
		{ "Circle.Name", "EGameplayDebuggerShape::Circle" },
		{ "Cone.Name", "EGameplayDebuggerShape::Cone" },
		{ "Cylinder.Name", "EGameplayDebuggerShape::Cylinder" },
		{ "Invalid.Name", "EGameplayDebuggerShape::Invalid" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerTypes.h" },
		{ "Point.Name", "EGameplayDebuggerShape::Point" },
		{ "Polygon.Name", "EGameplayDebuggerShape::Polygon" },
		{ "Segment.Name", "EGameplayDebuggerShape::Segment" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayDebugger_EGameplayDebuggerShape_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameplayDebugger,
		nullptr,
		"EGameplayDebuggerShape",
		"EGameplayDebuggerShape",
		Z_Construct_UEnum_GameplayDebugger_EGameplayDebuggerShape_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayDebugger_EGameplayDebuggerShape_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GameplayDebugger_EGameplayDebuggerShape_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayDebugger_EGameplayDebuggerShape_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GameplayDebugger_EGameplayDebuggerShape()
	{
		if (!Z_Registration_Info_UEnum_EGameplayDebuggerShape.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayDebuggerShape.InnerSingleton, Z_Construct_UEnum_GameplayDebugger_EGameplayDebuggerShape_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGameplayDebuggerShape.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayDebuggerShape;
class UScriptStruct* FGameplayDebuggerShape::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayDebuggerShape.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayDebuggerShape.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayDebuggerShape, (UObject*)Z_Construct_UPackage__Script_GameplayDebugger(), TEXT("GameplayDebuggerShape"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayDebuggerShape.OuterSingleton;
}
template<> GAMEPLAYDEBUGGER_API UScriptStruct* StaticStruct<FGameplayDebuggerShape>()
{
	return FGameplayDebuggerShape::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayDebuggerShape_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShapeData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShapeData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ShapeData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerShape_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayDebuggerShape_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayDebuggerShape>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerShape_Statics::NewProp_ShapeData_Inner = { "ShapeData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerShape_Statics::NewProp_ShapeData_MetaData[] = {
		{ "Comment", "/** points defining shape */" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerTypes.h" },
		{ "ToolTip", "points defining shape" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerShape_Statics::NewProp_ShapeData = { "ShapeData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayDebuggerShape, ShapeData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerShape_Statics::NewProp_ShapeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerShape_Statics::NewProp_ShapeData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerShape_Statics::NewProp_Description_MetaData[] = {
		{ "Comment", "/** description of shape */" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerTypes.h" },
		{ "ToolTip", "description of shape" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerShape_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayDebuggerShape, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerShape_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerShape_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerShape_Statics::NewProp_Color_MetaData[] = {
		{ "Comment", "/** color of shape */" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerTypes.h" },
		{ "ToolTip", "color of shape" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerShape_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayDebuggerShape, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerShape_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerShape_Statics::NewProp_Color_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerShape_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerShape_Statics::NewProp_Type_MetaData[] = {
		{ "Comment", "/** type of shape */" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerTypes.h" },
		{ "ToolTip", "type of shape" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerShape_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayDebuggerShape, Type), Z_Construct_UEnum_GameplayDebugger_EGameplayDebuggerShape, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerShape_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerShape_Statics::NewProp_Type_MetaData)) }; // 1253234935
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayDebuggerShape_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerShape_Statics::NewProp_ShapeData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerShape_Statics::NewProp_ShapeData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerShape_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerShape_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerShape_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerShape_Statics::NewProp_Type,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayDebuggerShape_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayDebugger,
		nullptr,
		&NewStructOps,
		"GameplayDebuggerShape",
		sizeof(FGameplayDebuggerShape),
		alignof(FGameplayDebuggerShape),
		Z_Construct_UScriptStruct_FGameplayDebuggerShape_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerShape_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerShape_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerShape_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerShape()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayDebuggerShape.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayDebuggerShape.InnerSingleton, Z_Construct_UScriptStruct_FGameplayDebuggerShape_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayDebuggerShape.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayDebuggerDataPackHeader;
class UScriptStruct* FGameplayDebuggerDataPackHeader::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayDebuggerDataPackHeader.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayDebuggerDataPackHeader.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayDebuggerDataPackHeader, (UObject*)Z_Construct_UPackage__Script_GameplayDebugger(), TEXT("GameplayDebuggerDataPackHeader"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayDebuggerDataPackHeader.OuterSingleton;
}
template<> GAMEPLAYDEBUGGER_API UScriptStruct* StaticStruct<FGameplayDebuggerDataPackHeader>()
{
	return FGameplayDebuggerDataPackHeader::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayDebuggerDataPackHeader_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataVersion_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_DataVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SyncCounter_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_SyncCounter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DataSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataOffset_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DataOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCompressed_MetaData[];
#endif
		static void NewProp_bIsCompressed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCompressed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerDataPackHeader_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayDebuggerDataPackHeader_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayDebuggerDataPackHeader>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerDataPackHeader_Statics::NewProp_DataVersion_MetaData[] = {
		{ "Comment", "/** version, increased every time new Data is requested */" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerTypes.h" },
		{ "ToolTip", "version, increased every time new Data is requested" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerDataPackHeader_Statics::NewProp_DataVersion = { "DataVersion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayDebuggerDataPackHeader, DataVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerDataPackHeader_Statics::NewProp_DataVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerDataPackHeader_Statics::NewProp_DataVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerDataPackHeader_Statics::NewProp_SyncCounter_MetaData[] = {
		{ "Comment", "/** debug actor sync counter */" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerTypes.h" },
		{ "ToolTip", "debug actor sync counter" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerDataPackHeader_Statics::NewProp_SyncCounter = { "SyncCounter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayDebuggerDataPackHeader, SyncCounter), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerDataPackHeader_Statics::NewProp_SyncCounter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerDataPackHeader_Statics::NewProp_SyncCounter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerDataPackHeader_Statics::NewProp_DataSize_MetaData[] = {
		{ "Comment", "/** size of Data array */" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerTypes.h" },
		{ "ToolTip", "size of Data array" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerDataPackHeader_Statics::NewProp_DataSize = { "DataSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayDebuggerDataPackHeader, DataSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerDataPackHeader_Statics::NewProp_DataSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerDataPackHeader_Statics::NewProp_DataSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerDataPackHeader_Statics::NewProp_DataOffset_MetaData[] = {
		{ "Comment", "/** offset to currently replicated portion of data */" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerTypes.h" },
		{ "ToolTip", "offset to currently replicated portion of data" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerDataPackHeader_Statics::NewProp_DataOffset = { "DataOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayDebuggerDataPackHeader, DataOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerDataPackHeader_Statics::NewProp_DataOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerDataPackHeader_Statics::NewProp_DataOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerDataPackHeader_Statics::NewProp_bIsCompressed_MetaData[] = {
		{ "Comment", "/** is data compressed? */" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerTypes.h" },
		{ "ToolTip", "is data compressed?" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayDebuggerDataPackHeader_Statics::NewProp_bIsCompressed_SetBit(void* Obj)
	{
		((FGameplayDebuggerDataPackHeader*)Obj)->bIsCompressed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerDataPackHeader_Statics::NewProp_bIsCompressed = { "bIsCompressed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FGameplayDebuggerDataPackHeader), &Z_Construct_UScriptStruct_FGameplayDebuggerDataPackHeader_Statics::NewProp_bIsCompressed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerDataPackHeader_Statics::NewProp_bIsCompressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerDataPackHeader_Statics::NewProp_bIsCompressed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayDebuggerDataPackHeader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerDataPackHeader_Statics::NewProp_DataVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerDataPackHeader_Statics::NewProp_SyncCounter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerDataPackHeader_Statics::NewProp_DataSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerDataPackHeader_Statics::NewProp_DataOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerDataPackHeader_Statics::NewProp_bIsCompressed,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayDebuggerDataPackHeader_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayDebugger,
		nullptr,
		&NewStructOps,
		"GameplayDebuggerDataPackHeader",
		sizeof(FGameplayDebuggerDataPackHeader),
		alignof(FGameplayDebuggerDataPackHeader),
		Z_Construct_UScriptStruct_FGameplayDebuggerDataPackHeader_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerDataPackHeader_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerDataPackHeader_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerDataPackHeader_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerDataPackHeader()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayDebuggerDataPackHeader.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayDebuggerDataPackHeader.InnerSingleton, Z_Construct_UScriptStruct_FGameplayDebuggerDataPackHeader_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayDebuggerDataPackHeader.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerTypes_h_Statics::EnumInfo[] = {
		{ EGameplayDebuggerShape_StaticEnum, TEXT("EGameplayDebuggerShape"), &Z_Registration_Info_UEnum_EGameplayDebuggerShape, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1253234935U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerTypes_h_Statics::ScriptStructInfo[] = {
		{ FGameplayDebuggerShape::StaticStruct, Z_Construct_UScriptStruct_FGameplayDebuggerShape_Statics::NewStructOps, TEXT("GameplayDebuggerShape"), &Z_Registration_Info_UScriptStruct_GameplayDebuggerShape, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayDebuggerShape), 2711490686U) },
		{ FGameplayDebuggerDataPackHeader::StaticStruct, Z_Construct_UScriptStruct_FGameplayDebuggerDataPackHeader_Statics::NewStructOps, TEXT("GameplayDebuggerDataPackHeader"), &Z_Registration_Info_UScriptStruct_GameplayDebuggerDataPackHeader, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayDebuggerDataPackHeader), 338696435U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerTypes_h_1918847811(TEXT("/Script/GameplayDebugger"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
