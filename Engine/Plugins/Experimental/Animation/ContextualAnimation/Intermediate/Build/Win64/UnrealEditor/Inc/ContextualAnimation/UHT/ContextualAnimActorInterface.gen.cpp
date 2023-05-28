// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ContextualAnimActorInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContextualAnimActorInterface() {}
// Cross Module References
	CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimActorInterface();
	CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimActorInterface_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ContextualAnimation();
// End Cross Module References
	DEFINE_FUNCTION(IContextualAnimActorInterface::execGetMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetMesh_Implementation();
		P_NATIVE_END;
	}
	struct ContextualAnimActorInterface_eventGetMesh_Parms
	{
		USkeletalMeshComponent* ReturnValue;

		/** Constructor, initializes return property only **/
		ContextualAnimActorInterface_eventGetMesh_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	USkeletalMeshComponent* IContextualAnimActorInterface::GetMesh() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetMesh instead.");
		ContextualAnimActorInterface_eventGetMesh_Parms Parms;
		return Parms.ReturnValue;
	}
	void UContextualAnimActorInterface::StaticRegisterNativesUContextualAnimActorInterface()
	{
		UClass* Class = UContextualAnimActorInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMesh", &IContextualAnimActorInterface::execGetMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UContextualAnimActorInterface_GetMesh_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimActorInterface_GetMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContextualAnimActorInterface_GetMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimActorInterface_eventGetMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimActorInterface_GetMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimActorInterface_GetMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextualAnimActorInterface_GetMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimActorInterface_GetMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimActorInterface_GetMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Contextual Animation System" },
		{ "ModuleRelativePath", "Public/ContextualAnimActorInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextualAnimActorInterface_GetMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextualAnimActorInterface, nullptr, "GetMesh", nullptr, nullptr, sizeof(ContextualAnimActorInterface_eventGetMesh_Parms), Z_Construct_UFunction_UContextualAnimActorInterface_GetMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimActorInterface_GetMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimActorInterface_GetMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimActorInterface_GetMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextualAnimActorInterface_GetMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextualAnimActorInterface_GetMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContextualAnimActorInterface);
	UClass* Z_Construct_UClass_UContextualAnimActorInterface_NoRegister()
	{
		return UContextualAnimActorInterface::StaticClass();
	}
	struct Z_Construct_UClass_UContextualAnimActorInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContextualAnimActorInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ContextualAnimation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UContextualAnimActorInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UContextualAnimActorInterface_GetMesh, "GetMesh" }, // 2166458584
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimActorInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ContextualAnimActorInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContextualAnimActorInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IContextualAnimActorInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UContextualAnimActorInterface_Statics::ClassParams = {
		&UContextualAnimActorInterface::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UContextualAnimActorInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimActorInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UContextualAnimActorInterface()
	{
		if (!Z_Registration_Info_UClass_UContextualAnimActorInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContextualAnimActorInterface.OuterSingleton, Z_Construct_UClass_UContextualAnimActorInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UContextualAnimActorInterface.OuterSingleton;
	}
	template<> CONTEXTUALANIMATION_API UClass* StaticClass<UContextualAnimActorInterface>()
	{
		return UContextualAnimActorInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContextualAnimActorInterface);
	UContextualAnimActorInterface::~UContextualAnimActorInterface() {}
	static FName NAME_UContextualAnimActorInterface_GetMesh = FName(TEXT("GetMesh"));
	USkeletalMeshComponent* IContextualAnimActorInterface::Execute_GetMesh(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UContextualAnimActorInterface::StaticClass()));
		ContextualAnimActorInterface_eventGetMesh_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UContextualAnimActorInterface_GetMesh);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IContextualAnimActorInterface*)(O->GetNativeInterfaceAddress(UContextualAnimActorInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetMesh_Implementation();
		}
		return Parms.ReturnValue;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimActorInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimActorInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UContextualAnimActorInterface, UContextualAnimActorInterface::StaticClass, TEXT("UContextualAnimActorInterface"), &Z_Registration_Info_UClass_UContextualAnimActorInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContextualAnimActorInterface), 2254248459U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimActorInterface_h_1015064043(TEXT("/Script/ContextualAnimation"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimActorInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimActorInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
