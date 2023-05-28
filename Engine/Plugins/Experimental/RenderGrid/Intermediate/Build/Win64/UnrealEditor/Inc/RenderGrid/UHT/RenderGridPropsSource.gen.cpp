// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RenderGrid/RenderGridPropsSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRenderGridPropsSource() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	REMOTECONTROL_API UClass* Z_Construct_UClass_URemoteControlPreset_NoRegister();
	RENDERGRID_API UClass* Z_Construct_UClass_URenderGridPropBase();
	RENDERGRID_API UClass* Z_Construct_UClass_URenderGridPropBase_NoRegister();
	RENDERGRID_API UClass* Z_Construct_UClass_URenderGridPropLocal();
	RENDERGRID_API UClass* Z_Construct_UClass_URenderGridPropLocal_NoRegister();
	RENDERGRID_API UClass* Z_Construct_UClass_URenderGridPropRemoteControl();
	RENDERGRID_API UClass* Z_Construct_UClass_URenderGridPropRemoteControl_NoRegister();
	RENDERGRID_API UClass* Z_Construct_UClass_URenderGridPropsBase();
	RENDERGRID_API UClass* Z_Construct_UClass_URenderGridPropsBase_NoRegister();
	RENDERGRID_API UClass* Z_Construct_UClass_URenderGridPropsLocal();
	RENDERGRID_API UClass* Z_Construct_UClass_URenderGridPropsLocal_NoRegister();
	RENDERGRID_API UClass* Z_Construct_UClass_URenderGridPropsRemoteControl();
	RENDERGRID_API UClass* Z_Construct_UClass_URenderGridPropsRemoteControl_NoRegister();
	RENDERGRID_API UClass* Z_Construct_UClass_URenderGridPropsSourceBase();
	RENDERGRID_API UClass* Z_Construct_UClass_URenderGridPropsSourceBase_NoRegister();
	RENDERGRID_API UClass* Z_Construct_UClass_URenderGridPropsSourceLocal();
	RENDERGRID_API UClass* Z_Construct_UClass_URenderGridPropsSourceLocal_NoRegister();
	RENDERGRID_API UClass* Z_Construct_UClass_URenderGridPropsSourceRemoteControl();
	RENDERGRID_API UClass* Z_Construct_UClass_URenderGridPropsSourceRemoteControl_NoRegister();
	RENDERGRID_API UEnum* Z_Construct_UEnum_RenderGrid_ERenderGridPropsSourceType();
	UPackage* Z_Construct_UPackage__Script_RenderGrid();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERenderGridPropsSourceType;
	static UEnum* ERenderGridPropsSourceType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERenderGridPropsSourceType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERenderGridPropsSourceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RenderGrid_ERenderGridPropsSourceType, (UObject*)Z_Construct_UPackage__Script_RenderGrid(), TEXT("ERenderGridPropsSourceType"));
		}
		return Z_Registration_Info_UEnum_ERenderGridPropsSourceType.OuterSingleton;
	}
	template<> RENDERGRID_API UEnum* StaticEnum<ERenderGridPropsSourceType>()
	{
		return ERenderGridPropsSourceType_StaticEnum();
	}
	struct Z_Construct_UEnum_RenderGrid_ERenderGridPropsSourceType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RenderGrid_ERenderGridPropsSourceType_Statics::Enumerators[] = {
		{ "ERenderGridPropsSourceType::Local", (int64)ERenderGridPropsSourceType::Local },
		{ "ERenderGridPropsSourceType::RemoteControl", (int64)ERenderGridPropsSourceType::RemoteControl },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RenderGrid_ERenderGridPropsSourceType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The type of the properties source.\n * In other words, where the properties come from that each render grid job can have.\n */" },
		{ "Local.DisplayName", "Local Source" },
		{ "Local.Hidden", "" },
		{ "Local.Name", "ERenderGridPropsSourceType::Local" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGridPropsSource.h" },
		{ "RemoteControl.DisplayName", "Remote Control Preset" },
		{ "RemoteControl.Name", "ERenderGridPropsSourceType::RemoteControl" },
		{ "ToolTip", "The type of the properties source.\nIn other words, where the properties come from that each render grid job can have." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RenderGrid_ERenderGridPropsSourceType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RenderGrid,
		nullptr,
		"ERenderGridPropsSourceType",
		"ERenderGridPropsSourceType",
		Z_Construct_UEnum_RenderGrid_ERenderGridPropsSourceType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RenderGrid_ERenderGridPropsSourceType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RenderGrid_ERenderGridPropsSourceType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RenderGrid_ERenderGridPropsSourceType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RenderGrid_ERenderGridPropsSourceType()
	{
		if (!Z_Registration_Info_UEnum_ERenderGridPropsSourceType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERenderGridPropsSourceType.InnerSingleton, Z_Construct_UEnum_RenderGrid_ERenderGridPropsSourceType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERenderGridPropsSourceType.InnerSingleton;
	}
	void URenderGridPropBase::StaticRegisterNativesURenderGridPropBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URenderGridPropBase);
	UClass* Z_Construct_UClass_URenderGridPropBase_NoRegister()
	{
		return URenderGridPropBase::StaticClass();
	}
	struct Z_Construct_UClass_URenderGridPropBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URenderGridPropBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RenderGrid,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridPropBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The base class of the render grid property abstraction.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "RenderGrid/RenderGridPropsSource.h" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGridPropsSource.h" },
		{ "ToolTip", "The base class of the render grid property abstraction." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URenderGridPropBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URenderGridPropBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URenderGridPropBase_Statics::ClassParams = {
		&URenderGridPropBase::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_URenderGridPropBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridPropBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URenderGridPropBase()
	{
		if (!Z_Registration_Info_UClass_URenderGridPropBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URenderGridPropBase.OuterSingleton, Z_Construct_UClass_URenderGridPropBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URenderGridPropBase.OuterSingleton;
	}
	template<> RENDERGRID_API UClass* StaticClass<URenderGridPropBase>()
	{
		return URenderGridPropBase::StaticClass();
	}
	URenderGridPropBase::URenderGridPropBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URenderGridPropBase);
	URenderGridPropBase::~URenderGridPropBase() {}
	void URenderGridPropsBase::StaticRegisterNativesURenderGridPropsBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URenderGridPropsBase);
	UClass* Z_Construct_UClass_URenderGridPropsBase_NoRegister()
	{
		return URenderGridPropsBase::StaticClass();
	}
	struct Z_Construct_UClass_URenderGridPropsBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URenderGridPropsBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RenderGrid,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridPropsBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The base class of the render grid properties abstraction.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "RenderGrid/RenderGridPropsSource.h" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGridPropsSource.h" },
		{ "ToolTip", "The base class of the render grid properties abstraction." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URenderGridPropsBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URenderGridPropsBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URenderGridPropsBase_Statics::ClassParams = {
		&URenderGridPropsBase::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_URenderGridPropsBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridPropsBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URenderGridPropsBase()
	{
		if (!Z_Registration_Info_UClass_URenderGridPropsBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URenderGridPropsBase.OuterSingleton, Z_Construct_UClass_URenderGridPropsBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URenderGridPropsBase.OuterSingleton;
	}
	template<> RENDERGRID_API UClass* StaticClass<URenderGridPropsBase>()
	{
		return URenderGridPropsBase::StaticClass();
	}
	URenderGridPropsBase::URenderGridPropsBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URenderGridPropsBase);
	URenderGridPropsBase::~URenderGridPropsBase() {}
	void URenderGridPropsSourceBase::StaticRegisterNativesURenderGridPropsSourceBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URenderGridPropsSourceBase);
	UClass* Z_Construct_UClass_URenderGridPropsSourceBase_NoRegister()
	{
		return URenderGridPropsSourceBase::StaticClass();
	}
	struct Z_Construct_UClass_URenderGridPropsSourceBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URenderGridPropsSourceBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RenderGrid,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridPropsSourceBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The base class of the render grid properties source abstraction.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "RenderGrid/RenderGridPropsSource.h" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGridPropsSource.h" },
		{ "ToolTip", "The base class of the render grid properties source abstraction." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridPropsSourceBase_Statics::NewProp_Guid_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGridPropsSource.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URenderGridPropsSourceBase_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URenderGridPropsSourceBase, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_URenderGridPropsSourceBase_Statics::NewProp_Guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridPropsSourceBase_Statics::NewProp_Guid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URenderGridPropsSourceBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderGridPropsSourceBase_Statics::NewProp_Guid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URenderGridPropsSourceBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URenderGridPropsSourceBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URenderGridPropsSourceBase_Statics::ClassParams = {
		&URenderGridPropsSourceBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URenderGridPropsSourceBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridPropsSourceBase_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_URenderGridPropsSourceBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridPropsSourceBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URenderGridPropsSourceBase()
	{
		if (!Z_Registration_Info_UClass_URenderGridPropsSourceBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URenderGridPropsSourceBase.OuterSingleton, Z_Construct_UClass_URenderGridPropsSourceBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URenderGridPropsSourceBase.OuterSingleton;
	}
	template<> RENDERGRID_API UClass* StaticClass<URenderGridPropsSourceBase>()
	{
		return URenderGridPropsSourceBase::StaticClass();
	}
	URenderGridPropsSourceBase::URenderGridPropsSourceBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URenderGridPropsSourceBase);
	URenderGridPropsSourceBase::~URenderGridPropsSourceBase() {}
	void URenderGridPropLocal::StaticRegisterNativesURenderGridPropLocal()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URenderGridPropLocal);
	UClass* Z_Construct_UClass_URenderGridPropLocal_NoRegister()
	{
		return URenderGridPropLocal::StaticClass();
	}
	struct Z_Construct_UClass_URenderGridPropLocal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URenderGridPropLocal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URenderGridPropBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RenderGrid,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridPropLocal_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The local properties implementation of the render grid property abstraction.\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "RenderGrid/RenderGridPropsSource.h" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGridPropsSource.h" },
		{ "ToolTip", "The local properties implementation of the render grid property abstraction." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URenderGridPropLocal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URenderGridPropLocal>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URenderGridPropLocal_Statics::ClassParams = {
		&URenderGridPropLocal::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URenderGridPropLocal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridPropLocal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URenderGridPropLocal()
	{
		if (!Z_Registration_Info_UClass_URenderGridPropLocal.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URenderGridPropLocal.OuterSingleton, Z_Construct_UClass_URenderGridPropLocal_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URenderGridPropLocal.OuterSingleton;
	}
	template<> RENDERGRID_API UClass* StaticClass<URenderGridPropLocal>()
	{
		return URenderGridPropLocal::StaticClass();
	}
	URenderGridPropLocal::URenderGridPropLocal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URenderGridPropLocal);
	URenderGridPropLocal::~URenderGridPropLocal() {}
	void URenderGridPropsLocal::StaticRegisterNativesURenderGridPropsLocal()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URenderGridPropsLocal);
	UClass* Z_Construct_UClass_URenderGridPropsLocal_NoRegister()
	{
		return URenderGridPropsLocal::StaticClass();
	}
	struct Z_Construct_UClass_URenderGridPropsLocal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URenderGridPropsLocal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URenderGridPropsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RenderGrid,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridPropsLocal_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The local properties implementation of the render grid properties abstraction.\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "RenderGrid/RenderGridPropsSource.h" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGridPropsSource.h" },
		{ "ToolTip", "The local properties implementation of the render grid properties abstraction." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URenderGridPropsLocal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URenderGridPropsLocal>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URenderGridPropsLocal_Statics::ClassParams = {
		&URenderGridPropsLocal::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URenderGridPropsLocal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridPropsLocal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URenderGridPropsLocal()
	{
		if (!Z_Registration_Info_UClass_URenderGridPropsLocal.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URenderGridPropsLocal.OuterSingleton, Z_Construct_UClass_URenderGridPropsLocal_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URenderGridPropsLocal.OuterSingleton;
	}
	template<> RENDERGRID_API UClass* StaticClass<URenderGridPropsLocal>()
	{
		return URenderGridPropsLocal::StaticClass();
	}
	URenderGridPropsLocal::URenderGridPropsLocal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URenderGridPropsLocal);
	URenderGridPropsLocal::~URenderGridPropsLocal() {}
	void URenderGridPropsSourceLocal::StaticRegisterNativesURenderGridPropsSourceLocal()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URenderGridPropsSourceLocal);
	UClass* Z_Construct_UClass_URenderGridPropsSourceLocal_NoRegister()
	{
		return URenderGridPropsSourceLocal::StaticClass();
	}
	struct Z_Construct_UClass_URenderGridPropsSourceLocal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URenderGridPropsSourceLocal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URenderGridPropsSourceBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RenderGrid,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridPropsSourceLocal_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The local properties implementation of the render grid properties source abstraction.\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "RenderGrid/RenderGridPropsSource.h" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGridPropsSource.h" },
		{ "ToolTip", "The local properties implementation of the render grid properties source abstraction." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URenderGridPropsSourceLocal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URenderGridPropsSourceLocal>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URenderGridPropsSourceLocal_Statics::ClassParams = {
		&URenderGridPropsSourceLocal::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URenderGridPropsSourceLocal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridPropsSourceLocal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URenderGridPropsSourceLocal()
	{
		if (!Z_Registration_Info_UClass_URenderGridPropsSourceLocal.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URenderGridPropsSourceLocal.OuterSingleton, Z_Construct_UClass_URenderGridPropsSourceLocal_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URenderGridPropsSourceLocal.OuterSingleton;
	}
	template<> RENDERGRID_API UClass* StaticClass<URenderGridPropsSourceLocal>()
	{
		return URenderGridPropsSourceLocal::StaticClass();
	}
	URenderGridPropsSourceLocal::URenderGridPropsSourceLocal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URenderGridPropsSourceLocal);
	URenderGridPropsSourceLocal::~URenderGridPropsSourceLocal() {}
	void URenderGridPropRemoteControl::StaticRegisterNativesURenderGridPropRemoteControl()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URenderGridPropRemoteControl);
	UClass* Z_Construct_UClass_URenderGridPropRemoteControl_NoRegister()
	{
		return URenderGridPropRemoteControl::StaticClass();
	}
	struct Z_Construct_UClass_URenderGridPropRemoteControl_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URenderGridPropRemoteControl_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URenderGridPropBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RenderGrid,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridPropRemoteControl_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The remote control properties implementation of the render grid property abstraction.\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "RenderGrid/RenderGridPropsSource.h" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGridPropsSource.h" },
		{ "ToolTip", "The remote control properties implementation of the render grid property abstraction." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URenderGridPropRemoteControl_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URenderGridPropRemoteControl>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URenderGridPropRemoteControl_Statics::ClassParams = {
		&URenderGridPropRemoteControl::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URenderGridPropRemoteControl_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridPropRemoteControl_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URenderGridPropRemoteControl()
	{
		if (!Z_Registration_Info_UClass_URenderGridPropRemoteControl.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URenderGridPropRemoteControl.OuterSingleton, Z_Construct_UClass_URenderGridPropRemoteControl_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URenderGridPropRemoteControl.OuterSingleton;
	}
	template<> RENDERGRID_API UClass* StaticClass<URenderGridPropRemoteControl>()
	{
		return URenderGridPropRemoteControl::StaticClass();
	}
	URenderGridPropRemoteControl::URenderGridPropRemoteControl(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URenderGridPropRemoteControl);
	URenderGridPropRemoteControl::~URenderGridPropRemoteControl() {}
	void URenderGridPropsRemoteControl::StaticRegisterNativesURenderGridPropsRemoteControl()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URenderGridPropsRemoteControl);
	UClass* Z_Construct_UClass_URenderGridPropsRemoteControl_NoRegister()
	{
		return URenderGridPropsRemoteControl::StaticClass();
	}
	struct Z_Construct_UClass_URenderGridPropsRemoteControl_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoteControlPreset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RemoteControlPreset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URenderGridPropsRemoteControl_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URenderGridPropsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RenderGrid,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridPropsRemoteControl_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The remote control properties implementation of the render grid properties abstraction.\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "RenderGrid/RenderGridPropsSource.h" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGridPropsSource.h" },
		{ "ToolTip", "The remote control properties implementation of the render grid properties abstraction." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridPropsRemoteControl_Statics::NewProp_RemoteControlPreset_MetaData[] = {
		{ "Comment", "/** The source of properties, which is a remote control preset. */" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGridPropsSource.h" },
		{ "ToolTip", "The source of properties, which is a remote control preset." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URenderGridPropsRemoteControl_Statics::NewProp_RemoteControlPreset = { "RemoteControlPreset", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URenderGridPropsRemoteControl, RemoteControlPreset), Z_Construct_UClass_URemoteControlPreset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URenderGridPropsRemoteControl_Statics::NewProp_RemoteControlPreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridPropsRemoteControl_Statics::NewProp_RemoteControlPreset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URenderGridPropsRemoteControl_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderGridPropsRemoteControl_Statics::NewProp_RemoteControlPreset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URenderGridPropsRemoteControl_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URenderGridPropsRemoteControl>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URenderGridPropsRemoteControl_Statics::ClassParams = {
		&URenderGridPropsRemoteControl::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URenderGridPropsRemoteControl_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridPropsRemoteControl_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URenderGridPropsRemoteControl_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridPropsRemoteControl_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URenderGridPropsRemoteControl()
	{
		if (!Z_Registration_Info_UClass_URenderGridPropsRemoteControl.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URenderGridPropsRemoteControl.OuterSingleton, Z_Construct_UClass_URenderGridPropsRemoteControl_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URenderGridPropsRemoteControl.OuterSingleton;
	}
	template<> RENDERGRID_API UClass* StaticClass<URenderGridPropsRemoteControl>()
	{
		return URenderGridPropsRemoteControl::StaticClass();
	}
	URenderGridPropsRemoteControl::URenderGridPropsRemoteControl(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URenderGridPropsRemoteControl);
	URenderGridPropsRemoteControl::~URenderGridPropsRemoteControl() {}
	void URenderGridPropsSourceRemoteControl::StaticRegisterNativesURenderGridPropsSourceRemoteControl()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URenderGridPropsSourceRemoteControl);
	UClass* Z_Construct_UClass_URenderGridPropsSourceRemoteControl_NoRegister()
	{
		return URenderGridPropsSourceRemoteControl::StaticClass();
	}
	struct Z_Construct_UClass_URenderGridPropsSourceRemoteControl_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoteControlPreset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RemoteControlPreset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivePresetGroup_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActivePresetGroup;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URenderGridPropsSourceRemoteControl_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URenderGridPropsSourceBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RenderGrid,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridPropsSourceRemoteControl_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The remote control properties implementation of the render grid properties source abstraction.\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "RenderGrid/RenderGridPropsSource.h" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGridPropsSource.h" },
		{ "ToolTip", "The remote control properties implementation of the render grid properties source abstraction." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridPropsSourceRemoteControl_Statics::NewProp_RemoteControlPreset_MetaData[] = {
		{ "Category", "Render Grid|Remote Control" },
		{ "Comment", "/** The source of properties, which is a remote control preset. */" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGridPropsSource.h" },
		{ "ToolTip", "The source of properties, which is a remote control preset." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URenderGridPropsSourceRemoteControl_Statics::NewProp_RemoteControlPreset = { "RemoteControlPreset", nullptr, (EPropertyFlags)0x0024080000020801, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URenderGridPropsSourceRemoteControl, RemoteControlPreset), Z_Construct_UClass_URemoteControlPreset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URenderGridPropsSourceRemoteControl_Statics::NewProp_RemoteControlPreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridPropsSourceRemoteControl_Statics::NewProp_RemoteControlPreset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridPropsSourceRemoteControl_Statics::NewProp_ActivePresetGroup_MetaData[] = {
		{ "Category", "Render Grid|Remote Control" },
		{ "Comment", "/** The preset group (of the remote control preset) that we should obtain the properties from. */" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGridPropsSource.h" },
		{ "ToolTip", "The preset group (of the remote control preset) that we should obtain the properties from." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URenderGridPropsSourceRemoteControl_Statics::NewProp_ActivePresetGroup = { "ActivePresetGroup", nullptr, (EPropertyFlags)0x0020080000020801, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URenderGridPropsSourceRemoteControl, ActivePresetGroup), METADATA_PARAMS(Z_Construct_UClass_URenderGridPropsSourceRemoteControl_Statics::NewProp_ActivePresetGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridPropsSourceRemoteControl_Statics::NewProp_ActivePresetGroup_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URenderGridPropsSourceRemoteControl_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderGridPropsSourceRemoteControl_Statics::NewProp_RemoteControlPreset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderGridPropsSourceRemoteControl_Statics::NewProp_ActivePresetGroup,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URenderGridPropsSourceRemoteControl_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URenderGridPropsSourceRemoteControl>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URenderGridPropsSourceRemoteControl_Statics::ClassParams = {
		&URenderGridPropsSourceRemoteControl::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URenderGridPropsSourceRemoteControl_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridPropsSourceRemoteControl_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URenderGridPropsSourceRemoteControl_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridPropsSourceRemoteControl_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URenderGridPropsSourceRemoteControl()
	{
		if (!Z_Registration_Info_UClass_URenderGridPropsSourceRemoteControl.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URenderGridPropsSourceRemoteControl.OuterSingleton, Z_Construct_UClass_URenderGridPropsSourceRemoteControl_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URenderGridPropsSourceRemoteControl.OuterSingleton;
	}
	template<> RENDERGRID_API UClass* StaticClass<URenderGridPropsSourceRemoteControl>()
	{
		return URenderGridPropsSourceRemoteControl::StaticClass();
	}
	URenderGridPropsSourceRemoteControl::URenderGridPropsSourceRemoteControl(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URenderGridPropsSourceRemoteControl);
	URenderGridPropsSourceRemoteControl::~URenderGridPropsSourceRemoteControl() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridPropsSource_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridPropsSource_h_Statics::EnumInfo[] = {
		{ ERenderGridPropsSourceType_StaticEnum, TEXT("ERenderGridPropsSourceType"), &Z_Registration_Info_UEnum_ERenderGridPropsSourceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2127287017U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridPropsSource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URenderGridPropBase, URenderGridPropBase::StaticClass, TEXT("URenderGridPropBase"), &Z_Registration_Info_UClass_URenderGridPropBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URenderGridPropBase), 2724490642U) },
		{ Z_Construct_UClass_URenderGridPropsBase, URenderGridPropsBase::StaticClass, TEXT("URenderGridPropsBase"), &Z_Registration_Info_UClass_URenderGridPropsBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URenderGridPropsBase), 1656976928U) },
		{ Z_Construct_UClass_URenderGridPropsSourceBase, URenderGridPropsSourceBase::StaticClass, TEXT("URenderGridPropsSourceBase"), &Z_Registration_Info_UClass_URenderGridPropsSourceBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URenderGridPropsSourceBase), 3432665570U) },
		{ Z_Construct_UClass_URenderGridPropLocal, URenderGridPropLocal::StaticClass, TEXT("URenderGridPropLocal"), &Z_Registration_Info_UClass_URenderGridPropLocal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URenderGridPropLocal), 357101039U) },
		{ Z_Construct_UClass_URenderGridPropsLocal, URenderGridPropsLocal::StaticClass, TEXT("URenderGridPropsLocal"), &Z_Registration_Info_UClass_URenderGridPropsLocal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URenderGridPropsLocal), 63433277U) },
		{ Z_Construct_UClass_URenderGridPropsSourceLocal, URenderGridPropsSourceLocal::StaticClass, TEXT("URenderGridPropsSourceLocal"), &Z_Registration_Info_UClass_URenderGridPropsSourceLocal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URenderGridPropsSourceLocal), 3805476764U) },
		{ Z_Construct_UClass_URenderGridPropRemoteControl, URenderGridPropRemoteControl::StaticClass, TEXT("URenderGridPropRemoteControl"), &Z_Registration_Info_UClass_URenderGridPropRemoteControl, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URenderGridPropRemoteControl), 2653659000U) },
		{ Z_Construct_UClass_URenderGridPropsRemoteControl, URenderGridPropsRemoteControl::StaticClass, TEXT("URenderGridPropsRemoteControl"), &Z_Registration_Info_UClass_URenderGridPropsRemoteControl, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URenderGridPropsRemoteControl), 1681744103U) },
		{ Z_Construct_UClass_URenderGridPropsSourceRemoteControl, URenderGridPropsSourceRemoteControl::StaticClass, TEXT("URenderGridPropsSourceRemoteControl"), &Z_Registration_Info_UClass_URenderGridPropsSourceRemoteControl, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URenderGridPropsSourceRemoteControl), 2155955531U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridPropsSource_h_751827394(TEXT("/Script/RenderGrid"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridPropsSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridPropsSource_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridPropsSource_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridPropsSource_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
