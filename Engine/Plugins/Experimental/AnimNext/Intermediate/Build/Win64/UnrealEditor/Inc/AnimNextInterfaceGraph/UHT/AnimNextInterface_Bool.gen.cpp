// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNextInterface_Bool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNextInterface_Bool() {}
// Cross Module References
	ANIMNEXTINTERFACE_API UClass* Z_Construct_UClass_UAnimNextInterface_NoRegister();
	ANIMNEXTINTERFACEGRAPH_API UClass* Z_Construct_UClass_UAnimNextInterface_Bool_And();
	ANIMNEXTINTERFACEGRAPH_API UClass* Z_Construct_UClass_UAnimNextInterface_Bool_And_NoRegister();
	ANIMNEXTINTERFACEGRAPH_API UClass* Z_Construct_UClass_UAnimNextInterface_Bool_Literal();
	ANIMNEXTINTERFACEGRAPH_API UClass* Z_Construct_UClass_UAnimNextInterface_Bool_Literal_NoRegister();
	ANIMNEXTINTERFACEGRAPH_API UClass* Z_Construct_UClass_UAnimNextInterface_Bool_Not();
	ANIMNEXTINTERFACEGRAPH_API UClass* Z_Construct_UClass_UAnimNextInterface_Bool_Not_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AnimNextInterfaceGraph();
// End Cross Module References
	void UAnimNextInterface_Bool_Literal::StaticRegisterNativesUAnimNextInterface_Bool_Literal()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNextInterface_Bool_Literal);
	UClass* Z_Construct_UClass_UAnimNextInterface_Bool_Literal_NoRegister()
	{
		return UAnimNextInterface_Bool_Literal::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNextInterface_Bool_Literal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNextInterface_Bool_Literal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextInterfaceGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextInterface_Bool_Literal_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimNextInterface_Bool.h" },
		{ "ModuleRelativePath", "Private/AnimNextInterface_Bool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextInterface_Bool_Literal_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Private/AnimNextInterface_Bool.h" },
	};
#endif
	void Z_Construct_UClass_UAnimNextInterface_Bool_Literal_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((UAnimNextInterface_Bool_Literal*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNextInterface_Bool_Literal_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimNextInterface_Bool_Literal), &Z_Construct_UClass_UAnimNextInterface_Bool_Literal_Statics::NewProp_Value_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimNextInterface_Bool_Literal_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextInterface_Bool_Literal_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNextInterface_Bool_Literal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextInterface_Bool_Literal_Statics::NewProp_Value,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAnimNextInterface_Bool_Literal_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAnimNextInterface_NoRegister, (int32)VTABLE_OFFSET(UAnimNextInterface_Bool_Literal, IAnimNextInterface), false },  // 3851592269
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNextInterface_Bool_Literal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNextInterface_Bool_Literal>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNextInterface_Bool_Literal_Statics::ClassParams = {
		&UAnimNextInterface_Bool_Literal::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimNextInterface_Bool_Literal_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextInterface_Bool_Literal_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimNextInterface_Bool_Literal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextInterface_Bool_Literal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimNextInterface_Bool_Literal()
	{
		if (!Z_Registration_Info_UClass_UAnimNextInterface_Bool_Literal.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNextInterface_Bool_Literal.OuterSingleton, Z_Construct_UClass_UAnimNextInterface_Bool_Literal_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimNextInterface_Bool_Literal.OuterSingleton;
	}
	template<> ANIMNEXTINTERFACEGRAPH_API UClass* StaticClass<UAnimNextInterface_Bool_Literal>()
	{
		return UAnimNextInterface_Bool_Literal::StaticClass();
	}
	UAnimNextInterface_Bool_Literal::UAnimNextInterface_Bool_Literal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNextInterface_Bool_Literal);
	UAnimNextInterface_Bool_Literal::~UAnimNextInterface_Bool_Literal() {}
	void UAnimNextInterface_Bool_And::StaticRegisterNativesUAnimNextInterface_Bool_And()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNextInterface_Bool_And);
	UClass* Z_Construct_UClass_UAnimNextInterface_Bool_And_NoRegister()
	{
		return UAnimNextInterface_Bool_And::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNextInterface_Bool_And_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_Inputs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Inputs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNextInterface_Bool_And_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextInterfaceGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextInterface_Bool_And_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimNextInterface_Bool.h" },
		{ "ModuleRelativePath", "Private/AnimNextInterface_Bool.h" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UAnimNextInterface_Bool_And_Statics::NewProp_Inputs_Inner = { "Inputs", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAnimNextInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextInterface_Bool_And_Statics::NewProp_Inputs_MetaData[] = {
		{ "AnimNextInterfaceType", "bool" },
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Private/AnimNextInterface_Bool.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimNextInterface_Bool_And_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNextInterface_Bool_And, Inputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimNextInterface_Bool_And_Statics::NewProp_Inputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextInterface_Bool_And_Statics::NewProp_Inputs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNextInterface_Bool_And_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextInterface_Bool_And_Statics::NewProp_Inputs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextInterface_Bool_And_Statics::NewProp_Inputs,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAnimNextInterface_Bool_And_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAnimNextInterface_NoRegister, (int32)VTABLE_OFFSET(UAnimNextInterface_Bool_And, IAnimNextInterface), false },  // 3851592269
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNextInterface_Bool_And_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNextInterface_Bool_And>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNextInterface_Bool_And_Statics::ClassParams = {
		&UAnimNextInterface_Bool_And::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimNextInterface_Bool_And_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextInterface_Bool_And_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimNextInterface_Bool_And_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextInterface_Bool_And_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimNextInterface_Bool_And()
	{
		if (!Z_Registration_Info_UClass_UAnimNextInterface_Bool_And.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNextInterface_Bool_And.OuterSingleton, Z_Construct_UClass_UAnimNextInterface_Bool_And_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimNextInterface_Bool_And.OuterSingleton;
	}
	template<> ANIMNEXTINTERFACEGRAPH_API UClass* StaticClass<UAnimNextInterface_Bool_And>()
	{
		return UAnimNextInterface_Bool_And::StaticClass();
	}
	UAnimNextInterface_Bool_And::UAnimNextInterface_Bool_And(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNextInterface_Bool_And);
	UAnimNextInterface_Bool_And::~UAnimNextInterface_Bool_And() {}
	void UAnimNextInterface_Bool_Not::StaticRegisterNativesUAnimNextInterface_Bool_Not()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNextInterface_Bool_Not);
	UClass* Z_Construct_UClass_UAnimNextInterface_Bool_Not_NoRegister()
	{
		return UAnimNextInterface_Bool_Not::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNextInterface_Bool_Not_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_Input;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNextInterface_Bool_Not_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextInterfaceGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextInterface_Bool_Not_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimNextInterface_Bool.h" },
		{ "ModuleRelativePath", "Private/AnimNextInterface_Bool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextInterface_Bool_Not_Statics::NewProp_Input_MetaData[] = {
		{ "AnimNextInterfaceType", "bool" },
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Private/AnimNextInterface_Bool.h" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UAnimNextInterface_Bool_Not_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNextInterface_Bool_Not, Input), Z_Construct_UClass_UAnimNextInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimNextInterface_Bool_Not_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextInterface_Bool_Not_Statics::NewProp_Input_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNextInterface_Bool_Not_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextInterface_Bool_Not_Statics::NewProp_Input,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAnimNextInterface_Bool_Not_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAnimNextInterface_NoRegister, (int32)VTABLE_OFFSET(UAnimNextInterface_Bool_Not, IAnimNextInterface), false },  // 3851592269
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNextInterface_Bool_Not_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNextInterface_Bool_Not>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNextInterface_Bool_Not_Statics::ClassParams = {
		&UAnimNextInterface_Bool_Not::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimNextInterface_Bool_Not_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextInterface_Bool_Not_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimNextInterface_Bool_Not_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextInterface_Bool_Not_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimNextInterface_Bool_Not()
	{
		if (!Z_Registration_Info_UClass_UAnimNextInterface_Bool_Not.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNextInterface_Bool_Not.OuterSingleton, Z_Construct_UClass_UAnimNextInterface_Bool_Not_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimNextInterface_Bool_Not.OuterSingleton;
	}
	template<> ANIMNEXTINTERFACEGRAPH_API UClass* StaticClass<UAnimNextInterface_Bool_Not>()
	{
		return UAnimNextInterface_Bool_Not::StaticClass();
	}
	UAnimNextInterface_Bool_Not::UAnimNextInterface_Bool_Not(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNextInterface_Bool_Not);
	UAnimNextInterface_Bool_Not::~UAnimNextInterface_Bool_Not() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraph_Private_AnimNextInterface_Bool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraph_Private_AnimNextInterface_Bool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNextInterface_Bool_Literal, UAnimNextInterface_Bool_Literal::StaticClass, TEXT("UAnimNextInterface_Bool_Literal"), &Z_Registration_Info_UClass_UAnimNextInterface_Bool_Literal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNextInterface_Bool_Literal), 192640461U) },
		{ Z_Construct_UClass_UAnimNextInterface_Bool_And, UAnimNextInterface_Bool_And::StaticClass, TEXT("UAnimNextInterface_Bool_And"), &Z_Registration_Info_UClass_UAnimNextInterface_Bool_And, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNextInterface_Bool_And), 877463110U) },
		{ Z_Construct_UClass_UAnimNextInterface_Bool_Not, UAnimNextInterface_Bool_Not::StaticClass, TEXT("UAnimNextInterface_Bool_Not"), &Z_Registration_Info_UClass_UAnimNextInterface_Bool_Not, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNextInterface_Bool_Not), 3931370252U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraph_Private_AnimNextInterface_Bool_h_1387782904(TEXT("/Script/AnimNextInterfaceGraph"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraph_Private_AnimNextInterface_Bool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraph_Private_AnimNextInterface_Bool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
