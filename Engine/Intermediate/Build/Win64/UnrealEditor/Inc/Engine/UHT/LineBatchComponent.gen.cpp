// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Components/LineBatchComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLineBatchComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_ULineBatchComponent();
	ENGINE_API UClass* Z_Construct_UClass_ULineBatchComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBatchedLine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBatchedPoint();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BatchedLine;
class UScriptStruct* FBatchedLine::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BatchedLine.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BatchedLine.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBatchedLine, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BatchedLine"));
	}
	return Z_Registration_Info_UScriptStruct_BatchedLine.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBatchedLine>()
{
	return FBatchedLine::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBatchedLine_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_End;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemainingLifeTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RemainingLifeTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DepthPriority_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DepthPriority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBatchedLine_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/LineBatchComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBatchedLine_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBatchedLine>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBatchedLine_Statics::NewProp_Start_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/LineBatchComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBatchedLine_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBatchedLine, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FBatchedLine_Statics::NewProp_Start_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBatchedLine_Statics::NewProp_Start_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBatchedLine_Statics::NewProp_End_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/LineBatchComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBatchedLine_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBatchedLine, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FBatchedLine_Statics::NewProp_End_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBatchedLine_Statics::NewProp_End_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBatchedLine_Statics::NewProp_Color_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/LineBatchComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBatchedLine_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBatchedLine, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FBatchedLine_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBatchedLine_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBatchedLine_Statics::NewProp_Thickness_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/LineBatchComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBatchedLine_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBatchedLine, Thickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FBatchedLine_Statics::NewProp_Thickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBatchedLine_Statics::NewProp_Thickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBatchedLine_Statics::NewProp_RemainingLifeTime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/LineBatchComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBatchedLine_Statics::NewProp_RemainingLifeTime = { "RemainingLifeTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBatchedLine, RemainingLifeTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FBatchedLine_Statics::NewProp_RemainingLifeTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBatchedLine_Statics::NewProp_RemainingLifeTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBatchedLine_Statics::NewProp_DepthPriority_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/LineBatchComponent.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBatchedLine_Statics::NewProp_DepthPriority = { "DepthPriority", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBatchedLine, DepthPriority), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FBatchedLine_Statics::NewProp_DepthPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBatchedLine_Statics::NewProp_DepthPriority_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBatchedLine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBatchedLine_Statics::NewProp_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBatchedLine_Statics::NewProp_End,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBatchedLine_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBatchedLine_Statics::NewProp_Thickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBatchedLine_Statics::NewProp_RemainingLifeTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBatchedLine_Statics::NewProp_DepthPriority,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBatchedLine_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BatchedLine",
		sizeof(FBatchedLine),
		alignof(FBatchedLine),
		Z_Construct_UScriptStruct_FBatchedLine_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBatchedLine_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBatchedLine_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBatchedLine_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBatchedLine()
	{
		if (!Z_Registration_Info_UScriptStruct_BatchedLine.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BatchedLine.InnerSingleton, Z_Construct_UScriptStruct_FBatchedLine_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BatchedLine.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BatchedPoint;
class UScriptStruct* FBatchedPoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BatchedPoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BatchedPoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBatchedPoint, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BatchedPoint"));
	}
	return Z_Registration_Info_UScriptStruct_BatchedPoint.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBatchedPoint>()
{
	return FBatchedPoint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBatchedPoint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PointSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemainingLifeTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RemainingLifeTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DepthPriority_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DepthPriority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBatchedPoint_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/LineBatchComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBatchedPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBatchedPoint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBatchedPoint_Statics::NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/LineBatchComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBatchedPoint_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBatchedPoint, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FBatchedPoint_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBatchedPoint_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBatchedPoint_Statics::NewProp_Color_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/LineBatchComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBatchedPoint_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBatchedPoint, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FBatchedPoint_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBatchedPoint_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBatchedPoint_Statics::NewProp_PointSize_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/LineBatchComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBatchedPoint_Statics::NewProp_PointSize = { "PointSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBatchedPoint, PointSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FBatchedPoint_Statics::NewProp_PointSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBatchedPoint_Statics::NewProp_PointSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBatchedPoint_Statics::NewProp_RemainingLifeTime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/LineBatchComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBatchedPoint_Statics::NewProp_RemainingLifeTime = { "RemainingLifeTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBatchedPoint, RemainingLifeTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FBatchedPoint_Statics::NewProp_RemainingLifeTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBatchedPoint_Statics::NewProp_RemainingLifeTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBatchedPoint_Statics::NewProp_DepthPriority_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/LineBatchComponent.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBatchedPoint_Statics::NewProp_DepthPriority = { "DepthPriority", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBatchedPoint, DepthPriority), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FBatchedPoint_Statics::NewProp_DepthPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBatchedPoint_Statics::NewProp_DepthPriority_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBatchedPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBatchedPoint_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBatchedPoint_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBatchedPoint_Statics::NewProp_PointSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBatchedPoint_Statics::NewProp_RemainingLifeTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBatchedPoint_Statics::NewProp_DepthPriority,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBatchedPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BatchedPoint",
		sizeof(FBatchedPoint),
		alignof(FBatchedPoint),
		Z_Construct_UScriptStruct_FBatchedPoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBatchedPoint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBatchedPoint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBatchedPoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBatchedPoint()
	{
		if (!Z_Registration_Info_UScriptStruct_BatchedPoint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BatchedPoint.InnerSingleton, Z_Construct_UScriptStruct_FBatchedPoint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BatchedPoint.InnerSingleton;
	}
	void ULineBatchComponent::StaticRegisterNativesULineBatchComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULineBatchComponent);
	UClass* Z_Construct_UClass_ULineBatchComponent_NoRegister()
	{
		return ULineBatchComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULineBatchComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULineBatchComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULineBatchComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * The line batch component buffers and draws lines (and some other line-based shapes) in a scene. \n *\x09This can be useful for debug drawing, but is not very performant for runtime use.\n */" },
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "Components/LineBatchComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/LineBatchComponent.h" },
		{ "ToolTip", "The line batch component buffers and draws lines (and some other line-based shapes) in a scene.\n    This can be useful for debug drawing, but is not very performant for runtime use." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULineBatchComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULineBatchComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULineBatchComponent_Statics::ClassParams = {
		&ULineBatchComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00A800A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULineBatchComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULineBatchComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULineBatchComponent()
	{
		if (!Z_Registration_Info_UClass_ULineBatchComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULineBatchComponent.OuterSingleton, Z_Construct_UClass_ULineBatchComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULineBatchComponent.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ULineBatchComponent>()
	{
		return ULineBatchComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULineBatchComponent);
	ULineBatchComponent::~ULineBatchComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LineBatchComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LineBatchComponent_h_Statics::ScriptStructInfo[] = {
		{ FBatchedLine::StaticStruct, Z_Construct_UScriptStruct_FBatchedLine_Statics::NewStructOps, TEXT("BatchedLine"), &Z_Registration_Info_UScriptStruct_BatchedLine, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBatchedLine), 2104421995U) },
		{ FBatchedPoint::StaticStruct, Z_Construct_UScriptStruct_FBatchedPoint_Statics::NewStructOps, TEXT("BatchedPoint"), &Z_Registration_Info_UScriptStruct_BatchedPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBatchedPoint), 1453487905U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LineBatchComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULineBatchComponent, ULineBatchComponent::StaticClass, TEXT("ULineBatchComponent"), &Z_Registration_Info_UClass_ULineBatchComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULineBatchComponent), 354075507U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LineBatchComponent_h_2253178943(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LineBatchComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LineBatchComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LineBatchComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LineBatchComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
