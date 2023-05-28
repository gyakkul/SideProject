// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseGizmos/AxisSources.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAxisSources() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoAxisSource_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoComponentAxisSource();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoComponentAxisSource_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoConstantAxisSource();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoConstantAxisSource_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoConstantFrameAxisSource();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoConstantFrameAxisSource_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoWorldAxisSource();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoWorldAxisSource_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	void UGizmoConstantAxisSource::StaticRegisterNativesUGizmoConstantAxisSource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoConstantAxisSource);
	UClass* Z_Construct_UClass_UGizmoConstantAxisSource_NoRegister()
	{
		return UGizmoConstantAxisSource::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoConstantAxisSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoConstantAxisSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoConstantAxisSource_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGizmoConstantAxisSource is an IGizmoAxisSource implementation that\n * internally stores the Origin and Direction constants\n */" },
		{ "IncludePath", "BaseGizmos/AxisSources.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisSources.h" },
		{ "ToolTip", "UGizmoConstantAxisSource is an IGizmoAxisSource implementation that\ninternally stores the Origin and Direction constants" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoConstantAxisSource_Statics::NewProp_Origin_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisSources.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoConstantAxisSource_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoConstantAxisSource, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGizmoConstantAxisSource_Statics::NewProp_Origin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoConstantAxisSource_Statics::NewProp_Origin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoConstantAxisSource_Statics::NewProp_Direction_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisSources.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoConstantAxisSource_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoConstantAxisSource, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGizmoConstantAxisSource_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoConstantAxisSource_Statics::NewProp_Direction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoConstantAxisSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoConstantAxisSource_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoConstantAxisSource_Statics::NewProp_Direction,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGizmoConstantAxisSource_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGizmoAxisSource_NoRegister, (int32)VTABLE_OFFSET(UGizmoConstantAxisSource, IGizmoAxisSource), false },  // 3604796101
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoConstantAxisSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoConstantAxisSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoConstantAxisSource_Statics::ClassParams = {
		&UGizmoConstantAxisSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGizmoConstantAxisSource_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoConstantAxisSource_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoConstantAxisSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoConstantAxisSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoConstantAxisSource()
	{
		if (!Z_Registration_Info_UClass_UGizmoConstantAxisSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoConstantAxisSource.OuterSingleton, Z_Construct_UClass_UGizmoConstantAxisSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGizmoConstantAxisSource.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoConstantAxisSource>()
	{
		return UGizmoConstantAxisSource::StaticClass();
	}
	UGizmoConstantAxisSource::UGizmoConstantAxisSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoConstantAxisSource);
	UGizmoConstantAxisSource::~UGizmoConstantAxisSource() {}
	void UGizmoConstantFrameAxisSource::StaticRegisterNativesUGizmoConstantFrameAxisSource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoConstantFrameAxisSource);
	UClass* Z_Construct_UClass_UGizmoConstantFrameAxisSource_NoRegister()
	{
		return UGizmoConstantFrameAxisSource::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TangentX_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TangentX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TangentY_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TangentY;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGizmoConstantFrameAxisSource is an IGizmoAxisSource implementation that\n * internally stores the Origin, Direction, and X/Y Tangent constants.\n */" },
		{ "IncludePath", "BaseGizmos/AxisSources.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisSources.h" },
		{ "ToolTip", "UGizmoConstantFrameAxisSource is an IGizmoAxisSource implementation that\ninternally stores the Origin, Direction, and X/Y Tangent constants." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::NewProp_Origin_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisSources.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoConstantFrameAxisSource, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::NewProp_Origin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::NewProp_Origin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::NewProp_Direction_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisSources.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoConstantFrameAxisSource, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::NewProp_TangentX_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisSources.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::NewProp_TangentX = { "TangentX", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoConstantFrameAxisSource, TangentX), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::NewProp_TangentX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::NewProp_TangentX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::NewProp_TangentY_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisSources.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::NewProp_TangentY = { "TangentY", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoConstantFrameAxisSource, TangentY), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::NewProp_TangentY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::NewProp_TangentY_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::NewProp_TangentX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::NewProp_TangentY,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGizmoAxisSource_NoRegister, (int32)VTABLE_OFFSET(UGizmoConstantFrameAxisSource, IGizmoAxisSource), false },  // 3604796101
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoConstantFrameAxisSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::ClassParams = {
		&UGizmoConstantFrameAxisSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoConstantFrameAxisSource()
	{
		if (!Z_Registration_Info_UClass_UGizmoConstantFrameAxisSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoConstantFrameAxisSource.OuterSingleton, Z_Construct_UClass_UGizmoConstantFrameAxisSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGizmoConstantFrameAxisSource.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoConstantFrameAxisSource>()
	{
		return UGizmoConstantFrameAxisSource::StaticClass();
	}
	UGizmoConstantFrameAxisSource::UGizmoConstantFrameAxisSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoConstantFrameAxisSource);
	UGizmoConstantFrameAxisSource::~UGizmoConstantFrameAxisSource() {}
	void UGizmoWorldAxisSource::StaticRegisterNativesUGizmoWorldAxisSource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoWorldAxisSource);
	UClass* Z_Construct_UClass_UGizmoWorldAxisSource_NoRegister()
	{
		return UGizmoWorldAxisSource::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoWorldAxisSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_AxisIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoWorldAxisSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoWorldAxisSource_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGizmoWorldAxisSource is an IGizmoAxisSource that provides one of the World axes\n * (ie X/Y/Z axes) based on an integer AxisIndex in range [0,2]. The Orgin is\n * internally stored as a FProperty.\n */" },
		{ "IncludePath", "BaseGizmos/AxisSources.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisSources.h" },
		{ "ToolTip", "UGizmoWorldAxisSource is an IGizmoAxisSource that provides one of the World axes\n(ie X/Y/Z axes) based on an integer AxisIndex in range [0,2]. The Orgin is\ninternally stored as a FProperty." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoWorldAxisSource_Statics::NewProp_Origin_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisSources.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoWorldAxisSource_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoWorldAxisSource, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGizmoWorldAxisSource_Statics::NewProp_Origin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoWorldAxisSource_Statics::NewProp_Origin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoWorldAxisSource_Statics::NewProp_AxisIndex_MetaData[] = {
		{ "Comment", "/** Clamped internally to 0,1,2 */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisSources.h" },
		{ "ToolTip", "Clamped internally to 0,1,2" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UGizmoWorldAxisSource_Statics::NewProp_AxisIndex = { "AxisIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoWorldAxisSource, AxisIndex), METADATA_PARAMS(Z_Construct_UClass_UGizmoWorldAxisSource_Statics::NewProp_AxisIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoWorldAxisSource_Statics::NewProp_AxisIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoWorldAxisSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoWorldAxisSource_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoWorldAxisSource_Statics::NewProp_AxisIndex,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGizmoWorldAxisSource_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGizmoAxisSource_NoRegister, (int32)VTABLE_OFFSET(UGizmoWorldAxisSource, IGizmoAxisSource), false },  // 3604796101
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoWorldAxisSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoWorldAxisSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoWorldAxisSource_Statics::ClassParams = {
		&UGizmoWorldAxisSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGizmoWorldAxisSource_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoWorldAxisSource_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoWorldAxisSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoWorldAxisSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoWorldAxisSource()
	{
		if (!Z_Registration_Info_UClass_UGizmoWorldAxisSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoWorldAxisSource.OuterSingleton, Z_Construct_UClass_UGizmoWorldAxisSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGizmoWorldAxisSource.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoWorldAxisSource>()
	{
		return UGizmoWorldAxisSource::StaticClass();
	}
	UGizmoWorldAxisSource::UGizmoWorldAxisSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoWorldAxisSource);
	UGizmoWorldAxisSource::~UGizmoWorldAxisSource() {}
	void UGizmoComponentAxisSource::StaticRegisterNativesUGizmoComponentAxisSource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoComponentAxisSource);
	UClass* Z_Construct_UClass_UGizmoComponentAxisSource_NoRegister()
	{
		return UGizmoComponentAxisSource::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoComponentAxisSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Component;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_AxisIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLocalAxes_MetaData[];
#endif
		static void NewProp_bLocalAxes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocalAxes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoComponentAxisSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoComponentAxisSource_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGizmoComponentAxisSource is an IGizmoAxisSource implementation that provides one of the\n * X/Y/Z axes of a Component's local coordinate system, mapped to World, based on an integer AxisIndex in range [0,2].\n * The Axis Origin is the Component's transform origin. Tangent vectors are provided.\n */" },
		{ "IncludePath", "BaseGizmos/AxisSources.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisSources.h" },
		{ "ToolTip", "UGizmoComponentAxisSource is an IGizmoAxisSource implementation that provides one of the\nX/Y/Z axes of a Component's local coordinate system, mapped to World, based on an integer AxisIndex in range [0,2].\nThe Axis Origin is the Component's transform origin. Tangent vectors are provided." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoComponentAxisSource_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisSources.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGizmoComponentAxisSource_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoComponentAxisSource, Component), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGizmoComponentAxisSource_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoComponentAxisSource_Statics::NewProp_Component_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoComponentAxisSource_Statics::NewProp_AxisIndex_MetaData[] = {
		{ "Comment", "/** Clamped internally to 0,1,2 */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisSources.h" },
		{ "ToolTip", "Clamped internally to 0,1,2" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UGizmoComponentAxisSource_Statics::NewProp_AxisIndex = { "AxisIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoComponentAxisSource, AxisIndex), METADATA_PARAMS(Z_Construct_UClass_UGizmoComponentAxisSource_Statics::NewProp_AxisIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoComponentAxisSource_Statics::NewProp_AxisIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoComponentAxisSource_Statics::NewProp_bLocalAxes_MetaData[] = {
		{ "Comment", "/** If false, returns World axes */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisSources.h" },
		{ "ToolTip", "If false, returns World axes" },
	};
#endif
	void Z_Construct_UClass_UGizmoComponentAxisSource_Statics::NewProp_bLocalAxes_SetBit(void* Obj)
	{
		((UGizmoComponentAxisSource*)Obj)->bLocalAxes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGizmoComponentAxisSource_Statics::NewProp_bLocalAxes = { "bLocalAxes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGizmoComponentAxisSource), &Z_Construct_UClass_UGizmoComponentAxisSource_Statics::NewProp_bLocalAxes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGizmoComponentAxisSource_Statics::NewProp_bLocalAxes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoComponentAxisSource_Statics::NewProp_bLocalAxes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoComponentAxisSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoComponentAxisSource_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoComponentAxisSource_Statics::NewProp_AxisIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoComponentAxisSource_Statics::NewProp_bLocalAxes,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGizmoComponentAxisSource_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGizmoAxisSource_NoRegister, (int32)VTABLE_OFFSET(UGizmoComponentAxisSource, IGizmoAxisSource), false },  // 3604796101
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoComponentAxisSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoComponentAxisSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoComponentAxisSource_Statics::ClassParams = {
		&UGizmoComponentAxisSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGizmoComponentAxisSource_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoComponentAxisSource_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoComponentAxisSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoComponentAxisSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoComponentAxisSource()
	{
		if (!Z_Registration_Info_UClass_UGizmoComponentAxisSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoComponentAxisSource.OuterSingleton, Z_Construct_UClass_UGizmoComponentAxisSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGizmoComponentAxisSource.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoComponentAxisSource>()
	{
		return UGizmoComponentAxisSource::StaticClass();
	}
	UGizmoComponentAxisSource::UGizmoComponentAxisSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoComponentAxisSource);
	UGizmoComponentAxisSource::~UGizmoComponentAxisSource() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_AxisSources_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_AxisSources_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGizmoConstantAxisSource, UGizmoConstantAxisSource::StaticClass, TEXT("UGizmoConstantAxisSource"), &Z_Registration_Info_UClass_UGizmoConstantAxisSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoConstantAxisSource), 4289393220U) },
		{ Z_Construct_UClass_UGizmoConstantFrameAxisSource, UGizmoConstantFrameAxisSource::StaticClass, TEXT("UGizmoConstantFrameAxisSource"), &Z_Registration_Info_UClass_UGizmoConstantFrameAxisSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoConstantFrameAxisSource), 4067733918U) },
		{ Z_Construct_UClass_UGizmoWorldAxisSource, UGizmoWorldAxisSource::StaticClass, TEXT("UGizmoWorldAxisSource"), &Z_Registration_Info_UClass_UGizmoWorldAxisSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoWorldAxisSource), 3606350844U) },
		{ Z_Construct_UClass_UGizmoComponentAxisSource, UGizmoComponentAxisSource::StaticClass, TEXT("UGizmoComponentAxisSource"), &Z_Registration_Info_UClass_UGizmoComponentAxisSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoComponentAxisSource), 178205317U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_AxisSources_h_3409437375(TEXT("/Script/InteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_AxisSources_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_AxisSources_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
