// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonInputActionDomain.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonInputActionDomain() {}
// Cross Module References
	COMMONINPUT_API UClass* Z_Construct_UClass_UCommonInputActionDomain();
	COMMONINPUT_API UClass* Z_Construct_UClass_UCommonInputActionDomain_NoRegister();
	COMMONINPUT_API UClass* Z_Construct_UClass_UCommonInputActionDomainTable();
	COMMONINPUT_API UClass* Z_Construct_UClass_UCommonInputActionDomainTable_NoRegister();
	COMMONINPUT_API UEnum* Z_Construct_UEnum_CommonInput_ECommonInputEventFlowBehavior();
	COMMONINPUT_API UEnum* Z_Construct_UEnum_CommonInput_ECommonInputMode();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMouseCaptureMode();
	UPackage* Z_Construct_UPackage__Script_CommonInput();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECommonInputEventFlowBehavior;
	static UEnum* ECommonInputEventFlowBehavior_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECommonInputEventFlowBehavior.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECommonInputEventFlowBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CommonInput_ECommonInputEventFlowBehavior, (UObject*)Z_Construct_UPackage__Script_CommonInput(), TEXT("ECommonInputEventFlowBehavior"));
		}
		return Z_Registration_Info_UEnum_ECommonInputEventFlowBehavior.OuterSingleton;
	}
	template<> COMMONINPUT_API UEnum* StaticEnum<ECommonInputEventFlowBehavior>()
	{
		return ECommonInputEventFlowBehavior_StaticEnum();
	}
	struct Z_Construct_UEnum_CommonInput_ECommonInputEventFlowBehavior_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CommonInput_ECommonInputEventFlowBehavior_Statics::Enumerators[] = {
		{ "ECommonInputEventFlowBehavior::BlockIfActive", (int64)ECommonInputEventFlowBehavior::BlockIfActive },
		{ "ECommonInputEventFlowBehavior::BlockIfHandled", (int64)ECommonInputEventFlowBehavior::BlockIfHandled },
		{ "ECommonInputEventFlowBehavior::NeverBlock", (int64)ECommonInputEventFlowBehavior::NeverBlock },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CommonInput_ECommonInputEventFlowBehavior_Statics::Enum_MetaDataParams[] = {
		{ "BlockIfActive.Name", "ECommonInputEventFlowBehavior::BlockIfActive" },
		{ "BlockIfHandled.Name", "ECommonInputEventFlowBehavior::BlockIfHandled" },
		{ "ModuleRelativePath", "Public/CommonInputActionDomain.h" },
		{ "NeverBlock.Name", "ECommonInputEventFlowBehavior::NeverBlock" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CommonInput_ECommonInputEventFlowBehavior_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CommonInput,
		nullptr,
		"ECommonInputEventFlowBehavior",
		"ECommonInputEventFlowBehavior",
		Z_Construct_UEnum_CommonInput_ECommonInputEventFlowBehavior_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CommonInput_ECommonInputEventFlowBehavior_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CommonInput_ECommonInputEventFlowBehavior_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CommonInput_ECommonInputEventFlowBehavior_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CommonInput_ECommonInputEventFlowBehavior()
	{
		if (!Z_Registration_Info_UEnum_ECommonInputEventFlowBehavior.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECommonInputEventFlowBehavior.InnerSingleton, Z_Construct_UEnum_CommonInput_ECommonInputEventFlowBehavior_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECommonInputEventFlowBehavior.InnerSingleton;
	}
	void UCommonInputActionDomain::StaticRegisterNativesUCommonInputActionDomain()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonInputActionDomain);
	UClass* Z_Construct_UClass_UCommonInputActionDomain_NoRegister()
	{
		return UCommonInputActionDomain::StaticClass();
	}
	struct Z_Construct_UClass_UCommonInputActionDomain_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Behavior_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Behavior_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Behavior;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_InnerBehavior_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InnerBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InnerBehavior;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseActionDomainDesiredInputConfig_MetaData[];
#endif
		static void NewProp_bUseActionDomainDesiredInputConfig_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseActionDomainDesiredInputConfig;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InputMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InputMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MouseCaptureMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MouseCaptureMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MouseCaptureMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonInputActionDomain_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonInput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputActionDomain_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Describes an input-event handling domain. It's InnerBehavior determines how events\n * flow between widgets within the domain and Behavior determines how events will flow to\n * other Domains in the DomainTable.\n */" },
		{ "IncludePath", "CommonInputActionDomain.h" },
		{ "ModuleRelativePath", "Public/CommonInputActionDomain.h" },
		{ "ToolTip", "Describes an input-event handling domain. It's InnerBehavior determines how events\nflow between widgets within the domain and Behavior determines how events will flow to\nother Domains in the DomainTable." },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UCommonInputActionDomain_Statics::NewProp_Behavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputActionDomain_Statics::NewProp_Behavior_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// Behavior of an input event between Action Domains, i.e., how an event flows into the next Action Domain\n" },
		{ "ModuleRelativePath", "Public/CommonInputActionDomain.h" },
		{ "ToolTip", "Behavior of an input event between Action Domains, i.e., how an event flows into the next Action Domain" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCommonInputActionDomain_Statics::NewProp_Behavior = { "Behavior", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonInputActionDomain, Behavior), Z_Construct_UEnum_CommonInput_ECommonInputEventFlowBehavior, METADATA_PARAMS(Z_Construct_UClass_UCommonInputActionDomain_Statics::NewProp_Behavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputActionDomain_Statics::NewProp_Behavior_MetaData)) }; // 1671271442
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UCommonInputActionDomain_Statics::NewProp_InnerBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputActionDomain_Statics::NewProp_InnerBehavior_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// Behavior of an input event within an Action Domain, i.e., how an event flows to a lower ZOrder active widget\n// within the same Action Domain\n" },
		{ "ModuleRelativePath", "Public/CommonInputActionDomain.h" },
		{ "ToolTip", "Behavior of an input event within an Action Domain, i.e., how an event flows to a lower ZOrder active widget\nwithin the same Action Domain" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCommonInputActionDomain_Statics::NewProp_InnerBehavior = { "InnerBehavior", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonInputActionDomain, InnerBehavior), Z_Construct_UEnum_CommonInput_ECommonInputEventFlowBehavior, METADATA_PARAMS(Z_Construct_UClass_UCommonInputActionDomain_Statics::NewProp_InnerBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputActionDomain_Statics::NewProp_InnerBehavior_MetaData)) }; // 1671271442
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputActionDomain_Statics::NewProp_bUseActionDomainDesiredInputConfig_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/CommonInputActionDomain.h" },
	};
#endif
	void Z_Construct_UClass_UCommonInputActionDomain_Statics::NewProp_bUseActionDomainDesiredInputConfig_SetBit(void* Obj)
	{
		((UCommonInputActionDomain*)Obj)->bUseActionDomainDesiredInputConfig = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonInputActionDomain_Statics::NewProp_bUseActionDomainDesiredInputConfig = { "bUseActionDomainDesiredInputConfig", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCommonInputActionDomain), &Z_Construct_UClass_UCommonInputActionDomain_Statics::NewProp_bUseActionDomainDesiredInputConfig_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonInputActionDomain_Statics::NewProp_bUseActionDomainDesiredInputConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputActionDomain_Statics::NewProp_bUseActionDomainDesiredInputConfig_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCommonInputActionDomain_Statics::NewProp_InputMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputActionDomain_Statics::NewProp_InputMode_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/CommonInputActionDomain.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCommonInputActionDomain_Statics::NewProp_InputMode = { "InputMode", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonInputActionDomain, InputMode), Z_Construct_UEnum_CommonInput_ECommonInputMode, METADATA_PARAMS(Z_Construct_UClass_UCommonInputActionDomain_Statics::NewProp_InputMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputActionDomain_Statics::NewProp_InputMode_MetaData)) }; // 1573311200
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCommonInputActionDomain_Statics::NewProp_MouseCaptureMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputActionDomain_Statics::NewProp_MouseCaptureMode_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/CommonInputActionDomain.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCommonInputActionDomain_Statics::NewProp_MouseCaptureMode = { "MouseCaptureMode", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonInputActionDomain, MouseCaptureMode), Z_Construct_UEnum_Engine_EMouseCaptureMode, METADATA_PARAMS(Z_Construct_UClass_UCommonInputActionDomain_Statics::NewProp_MouseCaptureMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputActionDomain_Statics::NewProp_MouseCaptureMode_MetaData)) }; // 1275285483
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonInputActionDomain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputActionDomain_Statics::NewProp_Behavior_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputActionDomain_Statics::NewProp_Behavior,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputActionDomain_Statics::NewProp_InnerBehavior_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputActionDomain_Statics::NewProp_InnerBehavior,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputActionDomain_Statics::NewProp_bUseActionDomainDesiredInputConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputActionDomain_Statics::NewProp_InputMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputActionDomain_Statics::NewProp_InputMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputActionDomain_Statics::NewProp_MouseCaptureMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputActionDomain_Statics::NewProp_MouseCaptureMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonInputActionDomain_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonInputActionDomain>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonInputActionDomain_Statics::ClassParams = {
		&UCommonInputActionDomain::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCommonInputActionDomain_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputActionDomain_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonInputActionDomain_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputActionDomain_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonInputActionDomain()
	{
		if (!Z_Registration_Info_UClass_UCommonInputActionDomain.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonInputActionDomain.OuterSingleton, Z_Construct_UClass_UCommonInputActionDomain_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonInputActionDomain.OuterSingleton;
	}
	template<> COMMONINPUT_API UClass* StaticClass<UCommonInputActionDomain>()
	{
		return UCommonInputActionDomain::StaticClass();
	}
	UCommonInputActionDomain::UCommonInputActionDomain(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonInputActionDomain);
	UCommonInputActionDomain::~UCommonInputActionDomain() {}
	void UCommonInputActionDomainTable::StaticRegisterNativesUCommonInputActionDomainTable()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonInputActionDomainTable);
	UClass* Z_Construct_UClass_UCommonInputActionDomainTable_NoRegister()
	{
		return UCommonInputActionDomainTable::StaticClass();
	}
	struct Z_Construct_UClass_UCommonInputActionDomainTable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActionDomains_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionDomains_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActionDomains;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InputMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InputMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MouseCaptureMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MouseCaptureMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MouseCaptureMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonInputActionDomainTable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonInput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputActionDomainTable_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An ordered array of ActionDomains.\n */" },
		{ "IncludePath", "CommonInputActionDomain.h" },
		{ "ModuleRelativePath", "Public/CommonInputActionDomain.h" },
		{ "ToolTip", "An ordered array of ActionDomains." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCommonInputActionDomainTable_Statics::NewProp_ActionDomains_Inner = { "ActionDomains", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UCommonInputActionDomain_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputActionDomainTable_Statics::NewProp_ActionDomains_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// Domains will receive events in ascending index order\n" },
		{ "ModuleRelativePath", "Public/CommonInputActionDomain.h" },
		{ "ToolTip", "Domains will receive events in ascending index order" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCommonInputActionDomainTable_Statics::NewProp_ActionDomains = { "ActionDomains", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonInputActionDomainTable, ActionDomains), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCommonInputActionDomainTable_Statics::NewProp_ActionDomains_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputActionDomainTable_Statics::NewProp_ActionDomains_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCommonInputActionDomainTable_Statics::NewProp_InputMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputActionDomainTable_Statics::NewProp_InputMode_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/CommonInputActionDomain.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCommonInputActionDomainTable_Statics::NewProp_InputMode = { "InputMode", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonInputActionDomainTable, InputMode), Z_Construct_UEnum_CommonInput_ECommonInputMode, METADATA_PARAMS(Z_Construct_UClass_UCommonInputActionDomainTable_Statics::NewProp_InputMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputActionDomainTable_Statics::NewProp_InputMode_MetaData)) }; // 1573311200
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCommonInputActionDomainTable_Statics::NewProp_MouseCaptureMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputActionDomainTable_Statics::NewProp_MouseCaptureMode_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/CommonInputActionDomain.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCommonInputActionDomainTable_Statics::NewProp_MouseCaptureMode = { "MouseCaptureMode", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonInputActionDomainTable, MouseCaptureMode), Z_Construct_UEnum_Engine_EMouseCaptureMode, METADATA_PARAMS(Z_Construct_UClass_UCommonInputActionDomainTable_Statics::NewProp_MouseCaptureMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputActionDomainTable_Statics::NewProp_MouseCaptureMode_MetaData)) }; // 1275285483
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonInputActionDomainTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputActionDomainTable_Statics::NewProp_ActionDomains_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputActionDomainTable_Statics::NewProp_ActionDomains,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputActionDomainTable_Statics::NewProp_InputMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputActionDomainTable_Statics::NewProp_InputMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputActionDomainTable_Statics::NewProp_MouseCaptureMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputActionDomainTable_Statics::NewProp_MouseCaptureMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonInputActionDomainTable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonInputActionDomainTable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonInputActionDomainTable_Statics::ClassParams = {
		&UCommonInputActionDomainTable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCommonInputActionDomainTable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputActionDomainTable_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonInputActionDomainTable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputActionDomainTable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonInputActionDomainTable()
	{
		if (!Z_Registration_Info_UClass_UCommonInputActionDomainTable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonInputActionDomainTable.OuterSingleton, Z_Construct_UClass_UCommonInputActionDomainTable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonInputActionDomainTable.OuterSingleton;
	}
	template<> COMMONINPUT_API UClass* StaticClass<UCommonInputActionDomainTable>()
	{
		return UCommonInputActionDomainTable::StaticClass();
	}
	UCommonInputActionDomainTable::UCommonInputActionDomainTable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonInputActionDomainTable);
	UCommonInputActionDomainTable::~UCommonInputActionDomainTable() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputActionDomain_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputActionDomain_h_Statics::EnumInfo[] = {
		{ ECommonInputEventFlowBehavior_StaticEnum, TEXT("ECommonInputEventFlowBehavior"), &Z_Registration_Info_UEnum_ECommonInputEventFlowBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1671271442U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputActionDomain_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonInputActionDomain, UCommonInputActionDomain::StaticClass, TEXT("UCommonInputActionDomain"), &Z_Registration_Info_UClass_UCommonInputActionDomain, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonInputActionDomain), 3652587783U) },
		{ Z_Construct_UClass_UCommonInputActionDomainTable, UCommonInputActionDomainTable::StaticClass, TEXT("UCommonInputActionDomainTable"), &Z_Registration_Info_UClass_UCommonInputActionDomainTable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonInputActionDomainTable), 3452595339U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputActionDomain_h_888719638(TEXT("/Script/CommonInput"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputActionDomain_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputActionDomain_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputActionDomain_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputActionDomain_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
