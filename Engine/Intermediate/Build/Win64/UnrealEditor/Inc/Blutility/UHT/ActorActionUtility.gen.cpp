// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorActionUtility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorActionUtility() {}
// Cross Module References
	BLUTILITY_API UClass* Z_Construct_UClass_UActorActionUtility();
	BLUTILITY_API UClass* Z_Construct_UClass_UActorActionUtility_NoRegister();
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityExtension_NoRegister();
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Blutility();
// End Cross Module References
	DEFINE_FUNCTION(UActorActionUtility::execGetSupportedClasses)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<TSoftClassPtr<UObject> >*)Z_Param__Result=P_THIS->GetSupportedClasses();
		P_NATIVE_END;
	}
	struct ActorActionUtility_eventGetSupportedClass_Parms
	{
		UClass* ReturnValue;

		/** Constructor, initializes return property only **/
		ActorActionUtility_eventGetSupportedClass_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	static FName NAME_UActorActionUtility_GetSupportedClass = FName(TEXT("GetSupportedClass"));
	UClass* UActorActionUtility::GetSupportedClass() const
	{
		ActorActionUtility_eventGetSupportedClass_Parms Parms;
		const_cast<UActorActionUtility*>(this)->ProcessEvent(FindFunctionChecked(NAME_UActorActionUtility_GetSupportedClass),&Parms);
		return Parms.ReturnValue;
	}
	void UActorActionUtility::StaticRegisterNativesUActorActionUtility()
	{
		UClass* Class = UActorActionUtility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSupportedClasses", &UActorActionUtility::execGetSupportedClasses },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UActorActionUtility_GetSupportedClass_Statics
	{
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UActorActionUtility_GetSupportedClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ActorActionUtility_eventGetSupportedClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorActionUtility_GetSupportedClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorActionUtility_GetSupportedClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorActionUtility_GetSupportedClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Assets" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "If you were just returning a single class add it to the SupportedClasses array (you can find it listed in the Class Defaults).  If you were doing complex logic to simulate having multiple classes act as filters, add them to the SupportedClasses array.  If you were doing 'other' logic, you'll need to do that upon action execution." },
		{ "ModuleRelativePath", "Classes/ActorActionUtility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorActionUtility_GetSupportedClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorActionUtility, nullptr, "GetSupportedClass", nullptr, nullptr, sizeof(ActorActionUtility_eventGetSupportedClass_Parms), Z_Construct_UFunction_UActorActionUtility_GetSupportedClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorActionUtility_GetSupportedClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorActionUtility_GetSupportedClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorActionUtility_GetSupportedClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorActionUtility_GetSupportedClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorActionUtility_GetSupportedClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorActionUtility_GetSupportedClasses_Statics
	{
		struct ActorActionUtility_eventGetSupportedClasses_Parms
		{
			TArray<TSoftClassPtr<UObject> > ReturnValue;
		};
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_UActorActionUtility_GetSupportedClasses_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorActionUtility_GetSupportedClasses_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UActorActionUtility_GetSupportedClasses_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ActorActionUtility_eventGetSupportedClasses_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UActorActionUtility_GetSupportedClasses_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorActionUtility_GetSupportedClasses_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorActionUtility_GetSupportedClasses_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorActionUtility_GetSupportedClasses_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorActionUtility_GetSupportedClasses_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorActionUtility_GetSupportedClasses_Statics::Function_MetaDataParams[] = {
		{ "Category", "Assets" },
		{ "Comment", "/**\n     * Gets the statically determined supported classes, these classes are used as a first pass filter when determining\n     * if we can utilize this asset utility action on the asset.\n     */" },
		{ "ModuleRelativePath", "Classes/ActorActionUtility.h" },
		{ "ToolTip", "Gets the statically determined supported classes, these classes are used as a first pass filter when determining\nif we can utilize this asset utility action on the asset." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorActionUtility_GetSupportedClasses_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorActionUtility, nullptr, "GetSupportedClasses", nullptr, nullptr, sizeof(Z_Construct_UFunction_UActorActionUtility_GetSupportedClasses_Statics::ActorActionUtility_eventGetSupportedClasses_Parms), Z_Construct_UFunction_UActorActionUtility_GetSupportedClasses_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorActionUtility_GetSupportedClasses_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorActionUtility_GetSupportedClasses_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorActionUtility_GetSupportedClasses_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorActionUtility_GetSupportedClasses()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorActionUtility_GetSupportedClasses_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorActionUtility);
	UClass* Z_Construct_UClass_UActorActionUtility_NoRegister()
	{
		return UActorActionUtility::StaticClass();
	}
	struct Z_Construct_UClass_UActorActionUtility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_SupportedClasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SupportedClasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SupportedClasses;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorActionUtility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorUtilityObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Blutility,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UActorActionUtility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UActorActionUtility_GetSupportedClass, "GetSupportedClass" }, // 4163407694
		{ &Z_Construct_UFunction_UActorActionUtility_GetSupportedClasses, "GetSupportedClasses" }, // 1020869455
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorActionUtility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * Base class for all actor action-related utilities\n * Any functions/events that are exposed on derived classes that have the correct signature will be\n * included as menu options when right-clicking on a group of actors in the level editor.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "ActorActionUtility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/ActorActionUtility.h" },
		{ "ToolTip", "Base class for all actor action-related utilities\nAny functions/events that are exposed on derived classes that have the correct signature will be\nincluded as menu options when right-clicking on a group of actors in the level editor." },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UActorActionUtility_Statics::NewProp_SupportedClasses_Inner = { "SupportedClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorActionUtility_Statics::NewProp_SupportedClasses_MetaData[] = {
		{ "AllowAbstract", "" },
		{ "Category", "Assets" },
		{ "Comment", "/**\n\x09 * For simple Asset Action's you should fill out the supported class here.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/ActorActionUtility.h" },
		{ "ToolTip", "For simple Asset Action's you should fill out the supported class here." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UActorActionUtility_Statics::NewProp_SupportedClasses = { "SupportedClasses", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorActionUtility, SupportedClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UActorActionUtility_Statics::NewProp_SupportedClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorActionUtility_Statics::NewProp_SupportedClasses_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActorActionUtility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorActionUtility_Statics::NewProp_SupportedClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorActionUtility_Statics::NewProp_SupportedClasses,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UActorActionUtility_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEditorUtilityExtension_NoRegister, (int32)VTABLE_OFFSET(UActorActionUtility, IEditorUtilityExtension), false },  // 2471005674
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorActionUtility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorActionUtility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorActionUtility_Statics::ClassParams = {
		&UActorActionUtility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UActorActionUtility_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UActorActionUtility_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UActorActionUtility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorActionUtility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorActionUtility()
	{
		if (!Z_Registration_Info_UClass_UActorActionUtility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorActionUtility.OuterSingleton, Z_Construct_UClass_UActorActionUtility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorActionUtility.OuterSingleton;
	}
	template<> BLUTILITY_API UClass* StaticClass<UActorActionUtility>()
	{
		return UActorActionUtility::StaticClass();
	}
	UActorActionUtility::UActorActionUtility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorActionUtility);
	UActorActionUtility::~UActorActionUtility() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Classes_ActorActionUtility_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Classes_ActorActionUtility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorActionUtility, UActorActionUtility::StaticClass, TEXT("UActorActionUtility"), &Z_Registration_Info_UClass_UActorActionUtility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorActionUtility), 1687273159U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Classes_ActorActionUtility_h_3434615774(TEXT("/Script/Blutility"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Classes_ActorActionUtility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Classes_ActorActionUtility_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
