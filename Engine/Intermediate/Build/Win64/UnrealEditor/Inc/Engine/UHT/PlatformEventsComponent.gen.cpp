// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Components/PlatformEventsComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformEventsComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPlatformEventsComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPlatformEventsComponent_NoRegister();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_UPlatformEventsComponent_PlatformEventDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UPlatformEventsComponent_PlatformEventDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlatformEventsComponent_PlatformEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/PlatformEventsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlatformEventsComponent_PlatformEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformEventsComponent, nullptr, "PlatformEventDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlatformEventsComponent_PlatformEventDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlatformEventsComponent_PlatformEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlatformEventsComponent_PlatformEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlatformEventsComponent_PlatformEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UPlatformEventsComponent::FPlatformEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlatformEventDelegate)
{
	PlatformEventDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UPlatformEventsComponent::execSupportsConvertibleLaptops)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SupportsConvertibleLaptops();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlatformEventsComponent::execIsInTabletMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInTabletMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlatformEventsComponent::execIsInLaptopMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInLaptopMode();
		P_NATIVE_END;
	}
	void UPlatformEventsComponent::StaticRegisterNativesUPlatformEventsComponent()
	{
		UClass* Class = UPlatformEventsComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsInLaptopMode", &UPlatformEventsComponent::execIsInLaptopMode },
			{ "IsInTabletMode", &UPlatformEventsComponent::execIsInTabletMode },
			{ "SupportsConvertibleLaptops", &UPlatformEventsComponent::execSupportsConvertibleLaptops },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlatformEventsComponent_IsInLaptopMode_Statics
	{
		struct PlatformEventsComponent_eventIsInLaptopMode_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPlatformEventsComponent_IsInLaptopMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlatformEventsComponent_eventIsInLaptopMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlatformEventsComponent_IsInLaptopMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlatformEventsComponent_eventIsInLaptopMode_Parms), &Z_Construct_UFunction_UPlatformEventsComponent_IsInLaptopMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlatformEventsComponent_IsInLaptopMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformEventsComponent_IsInLaptopMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlatformEventsComponent_IsInLaptopMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Activation" },
		{ "Comment", "/**\n\x09 * Check whether a convertible laptop is laptop mode.\n\x09 *\n\x09 * @return true if in laptop mode, false otherwise or if not a convertible laptop.\n\x09 * @see IsInTabletMode, SupportsConvertibleLaptops\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/PlatformEventsComponent.h" },
		{ "ToolTip", "Check whether a convertible laptop is laptop mode.\n\n@return true if in laptop mode, false otherwise or if not a convertible laptop.\n@see IsInTabletMode, SupportsConvertibleLaptops" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformEventsComponent_IsInLaptopMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformEventsComponent, nullptr, "IsInLaptopMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlatformEventsComponent_IsInLaptopMode_Statics::PlatformEventsComponent_eventIsInLaptopMode_Parms), Z_Construct_UFunction_UPlatformEventsComponent_IsInLaptopMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformEventsComponent_IsInLaptopMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlatformEventsComponent_IsInLaptopMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformEventsComponent_IsInLaptopMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlatformEventsComponent_IsInLaptopMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlatformEventsComponent_IsInLaptopMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlatformEventsComponent_IsInTabletMode_Statics
	{
		struct PlatformEventsComponent_eventIsInTabletMode_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPlatformEventsComponent_IsInTabletMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlatformEventsComponent_eventIsInTabletMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlatformEventsComponent_IsInTabletMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlatformEventsComponent_eventIsInTabletMode_Parms), &Z_Construct_UFunction_UPlatformEventsComponent_IsInTabletMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlatformEventsComponent_IsInTabletMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformEventsComponent_IsInTabletMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlatformEventsComponent_IsInTabletMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Activation" },
		{ "Comment", "/**\n\x09 * Check whether a convertible laptop is laptop mode.\n\x09 *\n\x09 * @return true if in tablet mode, false otherwise or if not a convertible laptop.\n\x09 * @see IsInLaptopMode, SupportsConvertibleLaptops\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/PlatformEventsComponent.h" },
		{ "ToolTip", "Check whether a convertible laptop is laptop mode.\n\n@return true if in tablet mode, false otherwise or if not a convertible laptop.\n@see IsInLaptopMode, SupportsConvertibleLaptops" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformEventsComponent_IsInTabletMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformEventsComponent, nullptr, "IsInTabletMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlatformEventsComponent_IsInTabletMode_Statics::PlatformEventsComponent_eventIsInTabletMode_Parms), Z_Construct_UFunction_UPlatformEventsComponent_IsInTabletMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformEventsComponent_IsInTabletMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlatformEventsComponent_IsInTabletMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformEventsComponent_IsInTabletMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlatformEventsComponent_IsInTabletMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlatformEventsComponent_IsInTabletMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlatformEventsComponent_SupportsConvertibleLaptops_Statics
	{
		struct PlatformEventsComponent_eventSupportsConvertibleLaptops_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPlatformEventsComponent_SupportsConvertibleLaptops_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlatformEventsComponent_eventSupportsConvertibleLaptops_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlatformEventsComponent_SupportsConvertibleLaptops_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlatformEventsComponent_eventSupportsConvertibleLaptops_Parms), &Z_Construct_UFunction_UPlatformEventsComponent_SupportsConvertibleLaptops_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlatformEventsComponent_SupportsConvertibleLaptops_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformEventsComponent_SupportsConvertibleLaptops_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlatformEventsComponent_SupportsConvertibleLaptops_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Activation" },
		{ "Comment", "/**\n\x09 * Check whether the platform supports convertible laptops.\n\x09 *\n\x09 * Note: This does not necessarily mean that the platform is a convertible laptop.\n\x09 * For example, convertible laptops running Windows 7 or older will return false,\n\x09 * and regular laptops running Windows 8 or newer will return true.\n\x09 *\n\x09 * @return true for convertible laptop platforms, false otherwise.\n\x09 * @see IsInLaptopMode, IsInTabletMode\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/PlatformEventsComponent.h" },
		{ "ToolTip", "Check whether the platform supports convertible laptops.\n\nNote: This does not necessarily mean that the platform is a convertible laptop.\nFor example, convertible laptops running Windows 7 or older will return false,\nand regular laptops running Windows 8 or newer will return true.\n\n@return true for convertible laptop platforms, false otherwise.\n@see IsInLaptopMode, IsInTabletMode" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformEventsComponent_SupportsConvertibleLaptops_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformEventsComponent, nullptr, "SupportsConvertibleLaptops", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlatformEventsComponent_SupportsConvertibleLaptops_Statics::PlatformEventsComponent_eventSupportsConvertibleLaptops_Parms), Z_Construct_UFunction_UPlatformEventsComponent_SupportsConvertibleLaptops_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformEventsComponent_SupportsConvertibleLaptops_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlatformEventsComponent_SupportsConvertibleLaptops_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformEventsComponent_SupportsConvertibleLaptops_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlatformEventsComponent_SupportsConvertibleLaptops()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlatformEventsComponent_SupportsConvertibleLaptops_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlatformEventsComponent);
	UClass* Z_Construct_UClass_UPlatformEventsComponent_NoRegister()
	{
		return UPlatformEventsComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPlatformEventsComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlatformChangedToLaptopModeDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_PlatformChangedToLaptopModeDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlatformChangedToTabletModeDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_PlatformChangedToTabletModeDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlatformEventsComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlatformEventsComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlatformEventsComponent_IsInLaptopMode, "IsInLaptopMode" }, // 1700497263
		{ &Z_Construct_UFunction_UPlatformEventsComponent_IsInTabletMode, "IsInTabletMode" }, // 3771355502
		{ &Z_Construct_UDelegateFunction_UPlatformEventsComponent_PlatformEventDelegate__DelegateSignature, "PlatformEventDelegate__DelegateSignature" }, // 4058544767
		{ &Z_Construct_UFunction_UPlatformEventsComponent_SupportsConvertibleLaptops, "SupportsConvertibleLaptops" }, // 1277272636
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformEventsComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Utility" },
		{ "Comment", "/**\n * Component to handle receiving notifications from the OS about platform events.\n */" },
		{ "HideCategories", "Activation Components|Activation Collision" },
		{ "IncludePath", "Components/PlatformEventsComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/PlatformEventsComponent.h" },
		{ "ToolTip", "Component to handle receiving notifications from the OS about platform events." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformEventsComponent_Statics::NewProp_PlatformChangedToLaptopModeDelegate_MetaData[] = {
		{ "Comment", "/** This is called when a convertible laptop changed into laptop mode. */" },
		{ "ModuleRelativePath", "Classes/Components/PlatformEventsComponent.h" },
		{ "ToolTip", "This is called when a convertible laptop changed into laptop mode." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlatformEventsComponent_Statics::NewProp_PlatformChangedToLaptopModeDelegate = { "PlatformChangedToLaptopModeDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlatformEventsComponent, PlatformChangedToLaptopModeDelegate), Z_Construct_UDelegateFunction_UPlatformEventsComponent_PlatformEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlatformEventsComponent_Statics::NewProp_PlatformChangedToLaptopModeDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformEventsComponent_Statics::NewProp_PlatformChangedToLaptopModeDelegate_MetaData)) }; // 4058544767
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformEventsComponent_Statics::NewProp_PlatformChangedToTabletModeDelegate_MetaData[] = {
		{ "Comment", "/** This is called when a convertible laptop changed into tablet mode. */" },
		{ "ModuleRelativePath", "Classes/Components/PlatformEventsComponent.h" },
		{ "ToolTip", "This is called when a convertible laptop changed into tablet mode." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlatformEventsComponent_Statics::NewProp_PlatformChangedToTabletModeDelegate = { "PlatformChangedToTabletModeDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlatformEventsComponent, PlatformChangedToTabletModeDelegate), Z_Construct_UDelegateFunction_UPlatformEventsComponent_PlatformEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlatformEventsComponent_Statics::NewProp_PlatformChangedToTabletModeDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformEventsComponent_Statics::NewProp_PlatformChangedToTabletModeDelegate_MetaData)) }; // 4058544767
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlatformEventsComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformEventsComponent_Statics::NewProp_PlatformChangedToLaptopModeDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformEventsComponent_Statics::NewProp_PlatformChangedToTabletModeDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlatformEventsComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlatformEventsComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlatformEventsComponent_Statics::ClassParams = {
		&UPlatformEventsComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlatformEventsComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformEventsComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPlatformEventsComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformEventsComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlatformEventsComponent()
	{
		if (!Z_Registration_Info_UClass_UPlatformEventsComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlatformEventsComponent.OuterSingleton, Z_Construct_UClass_UPlatformEventsComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlatformEventsComponent.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UPlatformEventsComponent>()
	{
		return UPlatformEventsComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlatformEventsComponent);
	UPlatformEventsComponent::~UPlatformEventsComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_PlatformEventsComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_PlatformEventsComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlatformEventsComponent, UPlatformEventsComponent::StaticClass, TEXT("UPlatformEventsComponent"), &Z_Registration_Info_UClass_UPlatformEventsComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlatformEventsComponent), 3838980780U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_PlatformEventsComponent_h_4286667424(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_PlatformEventsComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_PlatformEventsComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
