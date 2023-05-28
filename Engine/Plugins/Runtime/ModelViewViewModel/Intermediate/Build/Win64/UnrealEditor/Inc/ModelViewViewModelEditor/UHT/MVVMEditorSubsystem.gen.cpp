// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MVVMEditorSubsystem.h"
#include "MVVMBlueprintViewBinding.h"
#include "MVVMPropertyPath.h"
#include "Types/MVVMAvailableBinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMVVMEditorSubsystem() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_CallFunction_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UFunction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
	MODELVIEWVIEWMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FMVVMAvailableBinding();
	MODELVIEWVIEWMODELBLUEPRINT_API UClass* Z_Construct_UClass_UMVVMBlueprintView_NoRegister();
	MODELVIEWVIEWMODELBLUEPRINT_API UScriptStruct* Z_Construct_UScriptStruct_FMVVMBlueprintPropertyPath();
	MODELVIEWVIEWMODELBLUEPRINT_API UScriptStruct* Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding();
	MODELVIEWVIEWMODELEDITOR_API UClass* Z_Construct_UClass_UMVVMEditorSubsystem();
	MODELVIEWVIEWMODELEDITOR_API UClass* Z_Construct_UClass_UMVVMEditorSubsystem_NoRegister();
	UMGEDITOR_API UClass* Z_Construct_UClass_UWidgetBlueprint_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModelViewViewModelEditor();
// End Cross Module References
	DEFINE_FUNCTION(UMVVMEditorSubsystem::execGetAvailableConversionFunctions)
	{
		P_GET_OBJECT(UWidgetBlueprint,Z_Param_WidgetBlueprint);
		P_GET_STRUCT_REF(FMVVMBlueprintPropertyPath,Z_Param_Out_Source);
		P_GET_STRUCT_REF(FMVVMBlueprintPropertyPath,Z_Param_Out_Destination);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UFunction*>*)Z_Param__Result=P_THIS->GetAvailableConversionFunctions(Z_Param_WidgetBlueprint,Z_Param_Out_Source,Z_Param_Out_Destination);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMEditorSubsystem::execGetConversionFunctionNode)
	{
		P_GET_OBJECT(UWidgetBlueprint,Z_Param_WidgetBlueprint);
		P_GET_STRUCT_REF(FMVVMBlueprintViewBinding,Z_Param_Out_Binding);
		P_GET_UBOOL(Z_Param_bSourceToDestination);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UK2Node_CallFunction**)Z_Param__Result=P_THIS->GetConversionFunctionNode(Z_Param_WidgetBlueprint,Z_Param_Out_Binding,Z_Param_bSourceToDestination);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMEditorSubsystem::execGetConversionFunction)
	{
		P_GET_OBJECT(UWidgetBlueprint,Z_Param_WidgetBlueprint);
		P_GET_STRUCT_REF(FMVVMBlueprintViewBinding,Z_Param_Out_Binding);
		P_GET_UBOOL(Z_Param_bSourceToDestination);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFunction**)Z_Param__Result=P_THIS->GetConversionFunction(Z_Param_WidgetBlueprint,Z_Param_Out_Binding,Z_Param_bSourceToDestination);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMEditorSubsystem::execGetConversionFunctionGraph)
	{
		P_GET_OBJECT(UWidgetBlueprint,Z_Param_WidgetBlueprint);
		P_GET_STRUCT_REF(FMVVMBlueprintViewBinding,Z_Param_Out_Binding);
		P_GET_UBOOL(Z_Param_bSourceToDestination);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEdGraph**)Z_Param__Result=P_THIS->GetConversionFunctionGraph(Z_Param_WidgetBlueprint,Z_Param_Out_Binding,Z_Param_bSourceToDestination);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMEditorSubsystem::execIsSimpleConversionFunction)
	{
		P_GET_OBJECT(UFunction,Z_Param_Function);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSimpleConversionFunction(Z_Param_Function);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMEditorSubsystem::execIsValidConversionFunction)
	{
		P_GET_OBJECT(UFunction,Z_Param_Function);
		P_GET_STRUCT_REF(FMVVMBlueprintPropertyPath,Z_Param_Out_Source);
		P_GET_STRUCT_REF(FMVVMBlueprintPropertyPath,Z_Param_Out_Destination);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidConversionFunction(Z_Param_Function,Z_Param_Out_Source,Z_Param_Out_Destination);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMEditorSubsystem::execGetChildViewModels)
	{
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_GET_OBJECT(UClass,Z_Param_Accessor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FMVVMAvailableBinding>*)Z_Param__Result=P_THIS->GetChildViewModels(Z_Param_Class,Z_Param_Accessor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMEditorSubsystem::execRemoveBinding)
	{
		P_GET_OBJECT(UWidgetBlueprint,Z_Param_WidgetBlueprint);
		P_GET_STRUCT_REF(FMVVMBlueprintViewBinding,Z_Param_Out_Binding);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveBinding(Z_Param_WidgetBlueprint,Z_Param_Out_Binding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMEditorSubsystem::execAddBinding)
	{
		P_GET_OBJECT(UWidgetBlueprint,Z_Param_WidgetBlueprint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMVVMBlueprintViewBinding*)Z_Param__Result=P_THIS->AddBinding(Z_Param_WidgetBlueprint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMEditorSubsystem::execRenameViewModel)
	{
		P_GET_OBJECT(UWidgetBlueprint,Z_Param_WidgetBlueprint);
		P_GET_PROPERTY(FNameProperty,Z_Param_ViewModel);
		P_GET_PROPERTY(FNameProperty,Z_Param_NewViewModel);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutError);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RenameViewModel(Z_Param_WidgetBlueprint,Z_Param_ViewModel,Z_Param_NewViewModel,Z_Param_Out_OutError);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMEditorSubsystem::execVerifyViewModelRename)
	{
		P_GET_OBJECT(UWidgetBlueprint,Z_Param_WidgetBlueprint);
		P_GET_PROPERTY(FNameProperty,Z_Param_ViewModel);
		P_GET_PROPERTY(FNameProperty,Z_Param_NewViewModel);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutError);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->VerifyViewModelRename(Z_Param_WidgetBlueprint,Z_Param_ViewModel,Z_Param_NewViewModel,Z_Param_Out_OutError);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMEditorSubsystem::execRemoveViewModel)
	{
		P_GET_OBJECT(UWidgetBlueprint,Z_Param_WidgetBlueprint);
		P_GET_PROPERTY(FNameProperty,Z_Param_ViewModel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveViewModel(Z_Param_WidgetBlueprint,Z_Param_ViewModel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMEditorSubsystem::execAddViewModel)
	{
		P_GET_OBJECT(UWidgetBlueprint,Z_Param_WidgetBlueprint);
		P_GET_OBJECT(UClass,Z_Param_ViewModel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->AddViewModel(Z_Param_WidgetBlueprint,Z_Param_ViewModel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMEditorSubsystem::execGetView)
	{
		P_GET_OBJECT(UWidgetBlueprint,Z_Param_WidgetBlueprint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMVVMBlueprintView**)Z_Param__Result=P_THIS->GetView(Z_Param_WidgetBlueprint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMEditorSubsystem::execRequestView)
	{
		P_GET_OBJECT(UWidgetBlueprint,Z_Param_WidgetBlueprint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMVVMBlueprintView**)Z_Param__Result=P_THIS->RequestView(Z_Param_WidgetBlueprint);
		P_NATIVE_END;
	}
	void UMVVMEditorSubsystem::StaticRegisterNativesUMVVMEditorSubsystem()
	{
		UClass* Class = UMVVMEditorSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddBinding", &UMVVMEditorSubsystem::execAddBinding },
			{ "AddViewModel", &UMVVMEditorSubsystem::execAddViewModel },
			{ "GetAvailableConversionFunctions", &UMVVMEditorSubsystem::execGetAvailableConversionFunctions },
			{ "GetChildViewModels", &UMVVMEditorSubsystem::execGetChildViewModels },
			{ "GetConversionFunction", &UMVVMEditorSubsystem::execGetConversionFunction },
			{ "GetConversionFunctionGraph", &UMVVMEditorSubsystem::execGetConversionFunctionGraph },
			{ "GetConversionFunctionNode", &UMVVMEditorSubsystem::execGetConversionFunctionNode },
			{ "GetView", &UMVVMEditorSubsystem::execGetView },
			{ "IsSimpleConversionFunction", &UMVVMEditorSubsystem::execIsSimpleConversionFunction },
			{ "IsValidConversionFunction", &UMVVMEditorSubsystem::execIsValidConversionFunction },
			{ "RemoveBinding", &UMVVMEditorSubsystem::execRemoveBinding },
			{ "RemoveViewModel", &UMVVMEditorSubsystem::execRemoveViewModel },
			{ "RenameViewModel", &UMVVMEditorSubsystem::execRenameViewModel },
			{ "RequestView", &UMVVMEditorSubsystem::execRequestView },
			{ "VerifyViewModelRename", &UMVVMEditorSubsystem::execVerifyViewModelRename },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMVVMEditorSubsystem_AddBinding_Statics
	{
		struct MVVMEditorSubsystem_eventAddBinding_Parms
		{
			UWidgetBlueprint* WidgetBlueprint;
			FMVVMBlueprintViewBinding ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetBlueprint;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMEditorSubsystem_AddBinding_Statics::NewProp_WidgetBlueprint = { "WidgetBlueprint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMEditorSubsystem_eventAddBinding_Parms, WidgetBlueprint), Z_Construct_UClass_UWidgetBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMEditorSubsystem_AddBinding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMEditorSubsystem_eventAddBinding_Parms, ReturnValue), Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding, METADATA_PARAMS(nullptr, 0) }; // 3568819447
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMEditorSubsystem_AddBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMEditorSubsystem_AddBinding_Statics::NewProp_WidgetBlueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMEditorSubsystem_AddBinding_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMEditorSubsystem_AddBinding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewmodel" },
		{ "ModuleRelativePath", "Public/MVVMEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMEditorSubsystem_AddBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMEditorSubsystem, nullptr, "AddBinding", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMVVMEditorSubsystem_AddBinding_Statics::MVVMEditorSubsystem_eventAddBinding_Parms), Z_Construct_UFunction_UMVVMEditorSubsystem_AddBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMEditorSubsystem_AddBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMVVMEditorSubsystem_AddBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMEditorSubsystem_AddBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMVVMEditorSubsystem_AddBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMEditorSubsystem_AddBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMEditorSubsystem_AddViewModel_Statics
	{
		struct MVVMEditorSubsystem_eventAddViewModel_Parms
		{
			UWidgetBlueprint* WidgetBlueprint;
			const UClass* ViewModel;
			FName ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetBlueprint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewModel_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ViewModel;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMEditorSubsystem_AddViewModel_Statics::NewProp_WidgetBlueprint = { "WidgetBlueprint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMEditorSubsystem_eventAddViewModel_Parms, WidgetBlueprint), Z_Construct_UClass_UWidgetBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMEditorSubsystem_AddViewModel_Statics::NewProp_ViewModel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMVVMEditorSubsystem_AddViewModel_Statics::NewProp_ViewModel = { "ViewModel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMEditorSubsystem_eventAddViewModel_Parms, ViewModel), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMVVMEditorSubsystem_AddViewModel_Statics::NewProp_ViewModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMEditorSubsystem_AddViewModel_Statics::NewProp_ViewModel_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMVVMEditorSubsystem_AddViewModel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMEditorSubsystem_eventAddViewModel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMEditorSubsystem_AddViewModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMEditorSubsystem_AddViewModel_Statics::NewProp_WidgetBlueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMEditorSubsystem_AddViewModel_Statics::NewProp_ViewModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMEditorSubsystem_AddViewModel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMEditorSubsystem_AddViewModel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewmodel" },
		{ "ModuleRelativePath", "Public/MVVMEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMEditorSubsystem_AddViewModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMEditorSubsystem, nullptr, "AddViewModel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMVVMEditorSubsystem_AddViewModel_Statics::MVVMEditorSubsystem_eventAddViewModel_Parms), Z_Construct_UFunction_UMVVMEditorSubsystem_AddViewModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMEditorSubsystem_AddViewModel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMVVMEditorSubsystem_AddViewModel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMEditorSubsystem_AddViewModel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMVVMEditorSubsystem_AddViewModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMEditorSubsystem_AddViewModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMEditorSubsystem_GetAvailableConversionFunctions_Statics
	{
		struct MVVMEditorSubsystem_eventGetAvailableConversionFunctions_Parms
		{
			const UWidgetBlueprint* WidgetBlueprint;
			FMVVMBlueprintPropertyPath Source;
			FMVVMBlueprintPropertyPath Destination;
			TArray<UFunction*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetBlueprint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetBlueprint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Destination_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Destination;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMEditorSubsystem_GetAvailableConversionFunctions_Statics::NewProp_WidgetBlueprint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMEditorSubsystem_GetAvailableConversionFunctions_Statics::NewProp_WidgetBlueprint = { "WidgetBlueprint", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMEditorSubsystem_eventGetAvailableConversionFunctions_Parms, WidgetBlueprint), Z_Construct_UClass_UWidgetBlueprint_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMVVMEditorSubsystem_GetAvailableConversionFunctions_Statics::NewProp_WidgetBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMEditorSubsystem_GetAvailableConversionFunctions_Statics::NewProp_WidgetBlueprint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMEditorSubsystem_GetAvailableConversionFunctions_Statics::NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMEditorSubsystem_GetAvailableConversionFunctions_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMEditorSubsystem_eventGetAvailableConversionFunctions_Parms, Source), Z_Construct_UScriptStruct_FMVVMBlueprintPropertyPath, METADATA_PARAMS(Z_Construct_UFunction_UMVVMEditorSubsystem_GetAvailableConversionFunctions_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMEditorSubsystem_GetAvailableConversionFunctions_Statics::NewProp_Source_MetaData)) }; // 4275434123
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMEditorSubsystem_GetAvailableConversionFunctions_Statics::NewProp_Destination_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMEditorSubsystem_GetAvailableConversionFunctions_Statics::NewProp_Destination = { "Destination", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMEditorSubsystem_eventGetAvailableConversionFunctions_Parms, Destination), Z_Construct_UScriptStruct_FMVVMBlueprintPropertyPath, METADATA_PARAMS(Z_Construct_UFunction_UMVVMEditorSubsystem_GetAvailableConversionFunctions_Statics::NewProp_Destination_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMEditorSubsystem_GetAvailableConversionFunctions_Statics::NewProp_Destination_MetaData)) }; // 4275434123
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMEditorSubsystem_GetAvailableConversionFunctions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UFunction, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMVVMEditorSubsystem_GetAvailableConversionFunctions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMEditorSubsystem_eventGetAvailableConversionFunctions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMEditorSubsystem_GetAvailableConversionFunctions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMEditorSubsystem_GetAvailableConversionFunctions_Statics::NewProp_WidgetBlueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMEditorSubsystem_GetAvailableConversionFunctions_Statics::NewProp_Source,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMEditorSubsystem_GetAvailableConversionFunctions_Statics::NewProp_Destination,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMEditorSubsystem_GetAvailableConversionFunctions_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMEditorSubsystem_GetAvailableConversionFunctions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMEditorSubsystem_GetAvailableConversionFunctions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewmodel" },
		{ "ModuleRelativePath", "Public/MVVMEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMEditorSubsystem_GetAvailableConversionFunctions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMEditorSubsystem, nullptr, "GetAvailableConversionFunctions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMVVMEditorSubsystem_GetAvailableConversionFunctions_Statics::MVVMEditorSubsystem_eventGetAvailableConversionFunctions_Parms), Z_Construct_UFunction_UMVVMEditorSubsystem_GetAvailableConversionFunctions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMEditorSubsystem_GetAvailableConversionFunctions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMVVMEditorSubsystem_GetAvailableConversionFunctions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMEditorSubsystem_GetAvailableConversionFunctions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMVVMEditorSubsystem_GetAvailableConversionFunctions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMEditorSubsystem_GetAvailableConversionFunctions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMEditorSubsystem_GetChildViewModels_Statics
	{
		struct MVVMEditorSubsystem_eventGetChildViewModels_Parms
		{
			TSubclassOf<UObject>  Class;
			TSubclassOf<UObject>  Accessor;
			TArray<FMVVMAvailableBinding> ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UECodeGen_Private::FClassPropertyParams NewProp_Accessor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMVVMEditorSubsystem_GetChildViewModels_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMEditorSubsystem_eventGetChildViewModels_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMVVMEditorSubsystem_GetChildViewModels_Statics::NewProp_Accessor = { "Accessor", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMEditorSubsystem_eventGetChildViewModels_Parms, Accessor), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMEditorSubsystem_GetChildViewModels_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMVVMAvailableBinding, METADATA_PARAMS(nullptr, 0) }; // 1827510724
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMVVMEditorSubsystem_GetChildViewModels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMEditorSubsystem_eventGetChildViewModels_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1827510724
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMEditorSubsystem_GetChildViewModels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMEditorSubsystem_GetChildViewModels_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMEditorSubsystem_GetChildViewModels_Statics::NewProp_Accessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMEditorSubsystem_GetChildViewModels_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMEditorSubsystem_GetChildViewModels_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMEditorSubsystem_GetChildViewModels_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewmodel" },
		{ "ModuleRelativePath", "Public/MVVMEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMEditorSubsystem_GetChildViewModels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMEditorSubsystem, nullptr, "GetChildViewModels", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMVVMEditorSubsystem_GetChildViewModels_Statics::MVVMEditorSubsystem_eventGetChildViewModels_Parms), Z_Construct_UFunction_UMVVMEditorSubsystem_GetChildViewModels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMEditorSubsystem_GetChildViewModels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMVVMEditorSubsystem_GetChildViewModels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMEditorSubsystem_GetChildViewModels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMVVMEditorSubsystem_GetChildViewModels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMEditorSubsystem_GetChildViewModels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunction_Statics
	{
		struct MVVMEditorSubsystem_eventGetConversionFunction_Parms
		{
			const UWidgetBlueprint* WidgetBlueprint;
			FMVVMBlueprintViewBinding Binding;
			bool bSourceToDestination;
			UFunction* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetBlueprint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetBlueprint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Binding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Binding;
		static void NewProp_bSourceToDestination_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSourceToDestination;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunction_Statics::NewProp_WidgetBlueprint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunction_Statics::NewProp_WidgetBlueprint = { "WidgetBlueprint", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMEditorSubsystem_eventGetConversionFunction_Parms, WidgetBlueprint), Z_Construct_UClass_UWidgetBlueprint_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunction_Statics::NewProp_WidgetBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunction_Statics::NewProp_WidgetBlueprint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunction_Statics::NewProp_Binding_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunction_Statics::NewProp_Binding = { "Binding", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMEditorSubsystem_eventGetConversionFunction_Parms, Binding), Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding, METADATA_PARAMS(Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunction_Statics::NewProp_Binding_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunction_Statics::NewProp_Binding_MetaData)) }; // 3568819447
	void Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunction_Statics::NewProp_bSourceToDestination_SetBit(void* Obj)
	{
		((MVVMEditorSubsystem_eventGetConversionFunction_Parms*)Obj)->bSourceToDestination = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunction_Statics::NewProp_bSourceToDestination = { "bSourceToDestination", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MVVMEditorSubsystem_eventGetConversionFunction_Parms), &Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunction_Statics::NewProp_bSourceToDestination_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMEditorSubsystem_eventGetConversionFunction_Parms, ReturnValue), Z_Construct_UClass_UFunction, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunction_Statics::NewProp_WidgetBlueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunction_Statics::NewProp_Binding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunction_Statics::NewProp_bSourceToDestination,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewmodel" },
		{ "ModuleRelativePath", "Public/MVVMEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMEditorSubsystem, nullptr, "GetConversionFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunction_Statics::MVVMEditorSubsystem_eventGetConversionFunction_Parms), Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunctionGraph_Statics
	{
		struct MVVMEditorSubsystem_eventGetConversionFunctionGraph_Parms
		{
			const UWidgetBlueprint* WidgetBlueprint;
			FMVVMBlueprintViewBinding Binding;
			bool bSourceToDestination;
			UEdGraph* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetBlueprint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetBlueprint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Binding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Binding;
		static void NewProp_bSourceToDestination_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSourceToDestination;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunctionGraph_Statics::NewProp_WidgetBlueprint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunctionGraph_Statics::NewProp_WidgetBlueprint = { "WidgetBlueprint", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMEditorSubsystem_eventGetConversionFunctionGraph_Parms, WidgetBlueprint), Z_Construct_UClass_UWidgetBlueprint_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunctionGraph_Statics::NewProp_WidgetBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunctionGraph_Statics::NewProp_WidgetBlueprint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunctionGraph_Statics::NewProp_Binding_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunctionGraph_Statics::NewProp_Binding = { "Binding", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMEditorSubsystem_eventGetConversionFunctionGraph_Parms, Binding), Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding, METADATA_PARAMS(Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunctionGraph_Statics::NewProp_Binding_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunctionGraph_Statics::NewProp_Binding_MetaData)) }; // 3568819447
	void Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunctionGraph_Statics::NewProp_bSourceToDestination_SetBit(void* Obj)
	{
		((MVVMEditorSubsystem_eventGetConversionFunctionGraph_Parms*)Obj)->bSourceToDestination = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunctionGraph_Statics::NewProp_bSourceToDestination = { "bSourceToDestination", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MVVMEditorSubsystem_eventGetConversionFunctionGraph_Parms), &Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunctionGraph_Statics::NewProp_bSourceToDestination_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunctionGraph_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMEditorSubsystem_eventGetConversionFunctionGraph_Parms, ReturnValue), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunctionGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunctionGraph_Statics::NewProp_WidgetBlueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunctionGraph_Statics::NewProp_Binding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunctionGraph_Statics::NewProp_bSourceToDestination,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunctionGraph_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunctionGraph_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewmodel" },
		{ "ModuleRelativePath", "Public/MVVMEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunctionGraph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMEditorSubsystem, nullptr, "GetConversionFunctionGraph", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunctionGraph_Statics::MVVMEditorSubsystem_eventGetConversionFunctionGraph_Parms), Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunctionGraph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunctionGraph_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunctionGraph_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunctionGraph_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunctionGraph()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunctionGraph_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunctionNode_Statics
	{
		struct MVVMEditorSubsystem_eventGetConversionFunctionNode_Parms
		{
			const UWidgetBlueprint* WidgetBlueprint;
			FMVVMBlueprintViewBinding Binding;
			bool bSourceToDestination;
			UK2Node_CallFunction* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetBlueprint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetBlueprint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Binding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Binding;
		static void NewProp_bSourceToDestination_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSourceToDestination;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunctionNode_Statics::NewProp_WidgetBlueprint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunctionNode_Statics::NewProp_WidgetBlueprint = { "WidgetBlueprint", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMEditorSubsystem_eventGetConversionFunctionNode_Parms, WidgetBlueprint), Z_Construct_UClass_UWidgetBlueprint_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunctionNode_Statics::NewProp_WidgetBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunctionNode_Statics::NewProp_WidgetBlueprint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunctionNode_Statics::NewProp_Binding_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunctionNode_Statics::NewProp_Binding = { "Binding", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMEditorSubsystem_eventGetConversionFunctionNode_Parms, Binding), Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding, METADATA_PARAMS(Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunctionNode_Statics::NewProp_Binding_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunctionNode_Statics::NewProp_Binding_MetaData)) }; // 3568819447
	void Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunctionNode_Statics::NewProp_bSourceToDestination_SetBit(void* Obj)
	{
		((MVVMEditorSubsystem_eventGetConversionFunctionNode_Parms*)Obj)->bSourceToDestination = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunctionNode_Statics::NewProp_bSourceToDestination = { "bSourceToDestination", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MVVMEditorSubsystem_eventGetConversionFunctionNode_Parms), &Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunctionNode_Statics::NewProp_bSourceToDestination_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunctionNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMEditorSubsystem_eventGetConversionFunctionNode_Parms, ReturnValue), Z_Construct_UClass_UK2Node_CallFunction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunctionNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunctionNode_Statics::NewProp_WidgetBlueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunctionNode_Statics::NewProp_Binding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunctionNode_Statics::NewProp_bSourceToDestination,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunctionNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunctionNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewmodel" },
		{ "ModuleRelativePath", "Public/MVVMEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunctionNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMEditorSubsystem, nullptr, "GetConversionFunctionNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunctionNode_Statics::MVVMEditorSubsystem_eventGetConversionFunctionNode_Parms), Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunctionNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunctionNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunctionNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunctionNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunctionNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunctionNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMEditorSubsystem_GetView_Statics
	{
		struct MVVMEditorSubsystem_eventGetView_Parms
		{
			const UWidgetBlueprint* WidgetBlueprint;
			UMVVMBlueprintView* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetBlueprint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetBlueprint;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMEditorSubsystem_GetView_Statics::NewProp_WidgetBlueprint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMEditorSubsystem_GetView_Statics::NewProp_WidgetBlueprint = { "WidgetBlueprint", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMEditorSubsystem_eventGetView_Parms, WidgetBlueprint), Z_Construct_UClass_UWidgetBlueprint_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMVVMEditorSubsystem_GetView_Statics::NewProp_WidgetBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMEditorSubsystem_GetView_Statics::NewProp_WidgetBlueprint_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMEditorSubsystem_GetView_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMEditorSubsystem_eventGetView_Parms, ReturnValue), Z_Construct_UClass_UMVVMBlueprintView_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMEditorSubsystem_GetView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMEditorSubsystem_GetView_Statics::NewProp_WidgetBlueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMEditorSubsystem_GetView_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMEditorSubsystem_GetView_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewmodel" },
		{ "ModuleRelativePath", "Public/MVVMEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMEditorSubsystem_GetView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMEditorSubsystem, nullptr, "GetView", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMVVMEditorSubsystem_GetView_Statics::MVVMEditorSubsystem_eventGetView_Parms), Z_Construct_UFunction_UMVVMEditorSubsystem_GetView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMEditorSubsystem_GetView_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMVVMEditorSubsystem_GetView_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMEditorSubsystem_GetView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMVVMEditorSubsystem_GetView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMEditorSubsystem_GetView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMEditorSubsystem_IsSimpleConversionFunction_Statics
	{
		struct MVVMEditorSubsystem_eventIsSimpleConversionFunction_Parms
		{
			const UFunction* Function;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Function_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Function;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMEditorSubsystem_IsSimpleConversionFunction_Statics::NewProp_Function_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMEditorSubsystem_IsSimpleConversionFunction_Statics::NewProp_Function = { "Function", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMEditorSubsystem_eventIsSimpleConversionFunction_Parms, Function), Z_Construct_UClass_UFunction, METADATA_PARAMS(Z_Construct_UFunction_UMVVMEditorSubsystem_IsSimpleConversionFunction_Statics::NewProp_Function_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMEditorSubsystem_IsSimpleConversionFunction_Statics::NewProp_Function_MetaData)) };
	void Z_Construct_UFunction_UMVVMEditorSubsystem_IsSimpleConversionFunction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MVVMEditorSubsystem_eventIsSimpleConversionFunction_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMVVMEditorSubsystem_IsSimpleConversionFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MVVMEditorSubsystem_eventIsSimpleConversionFunction_Parms), &Z_Construct_UFunction_UMVVMEditorSubsystem_IsSimpleConversionFunction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMEditorSubsystem_IsSimpleConversionFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMEditorSubsystem_IsSimpleConversionFunction_Statics::NewProp_Function,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMEditorSubsystem_IsSimpleConversionFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMEditorSubsystem_IsSimpleConversionFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewmodel" },
		{ "ModuleRelativePath", "Public/MVVMEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMEditorSubsystem_IsSimpleConversionFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMEditorSubsystem, nullptr, "IsSimpleConversionFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMVVMEditorSubsystem_IsSimpleConversionFunction_Statics::MVVMEditorSubsystem_eventIsSimpleConversionFunction_Parms), Z_Construct_UFunction_UMVVMEditorSubsystem_IsSimpleConversionFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMEditorSubsystem_IsSimpleConversionFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMVVMEditorSubsystem_IsSimpleConversionFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMEditorSubsystem_IsSimpleConversionFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMVVMEditorSubsystem_IsSimpleConversionFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMEditorSubsystem_IsSimpleConversionFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMEditorSubsystem_IsValidConversionFunction_Statics
	{
		struct MVVMEditorSubsystem_eventIsValidConversionFunction_Parms
		{
			const UFunction* Function;
			FMVVMBlueprintPropertyPath Source;
			FMVVMBlueprintPropertyPath Destination;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Function_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Function;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Destination_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Destination;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMEditorSubsystem_IsValidConversionFunction_Statics::NewProp_Function_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMEditorSubsystem_IsValidConversionFunction_Statics::NewProp_Function = { "Function", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMEditorSubsystem_eventIsValidConversionFunction_Parms, Function), Z_Construct_UClass_UFunction, METADATA_PARAMS(Z_Construct_UFunction_UMVVMEditorSubsystem_IsValidConversionFunction_Statics::NewProp_Function_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMEditorSubsystem_IsValidConversionFunction_Statics::NewProp_Function_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMEditorSubsystem_IsValidConversionFunction_Statics::NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMEditorSubsystem_IsValidConversionFunction_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMEditorSubsystem_eventIsValidConversionFunction_Parms, Source), Z_Construct_UScriptStruct_FMVVMBlueprintPropertyPath, METADATA_PARAMS(Z_Construct_UFunction_UMVVMEditorSubsystem_IsValidConversionFunction_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMEditorSubsystem_IsValidConversionFunction_Statics::NewProp_Source_MetaData)) }; // 4275434123
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMEditorSubsystem_IsValidConversionFunction_Statics::NewProp_Destination_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMEditorSubsystem_IsValidConversionFunction_Statics::NewProp_Destination = { "Destination", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMEditorSubsystem_eventIsValidConversionFunction_Parms, Destination), Z_Construct_UScriptStruct_FMVVMBlueprintPropertyPath, METADATA_PARAMS(Z_Construct_UFunction_UMVVMEditorSubsystem_IsValidConversionFunction_Statics::NewProp_Destination_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMEditorSubsystem_IsValidConversionFunction_Statics::NewProp_Destination_MetaData)) }; // 4275434123
	void Z_Construct_UFunction_UMVVMEditorSubsystem_IsValidConversionFunction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MVVMEditorSubsystem_eventIsValidConversionFunction_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMVVMEditorSubsystem_IsValidConversionFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MVVMEditorSubsystem_eventIsValidConversionFunction_Parms), &Z_Construct_UFunction_UMVVMEditorSubsystem_IsValidConversionFunction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMEditorSubsystem_IsValidConversionFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMEditorSubsystem_IsValidConversionFunction_Statics::NewProp_Function,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMEditorSubsystem_IsValidConversionFunction_Statics::NewProp_Source,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMEditorSubsystem_IsValidConversionFunction_Statics::NewProp_Destination,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMEditorSubsystem_IsValidConversionFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMEditorSubsystem_IsValidConversionFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewmodel" },
		{ "ModuleRelativePath", "Public/MVVMEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMEditorSubsystem_IsValidConversionFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMEditorSubsystem, nullptr, "IsValidConversionFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMVVMEditorSubsystem_IsValidConversionFunction_Statics::MVVMEditorSubsystem_eventIsValidConversionFunction_Parms), Z_Construct_UFunction_UMVVMEditorSubsystem_IsValidConversionFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMEditorSubsystem_IsValidConversionFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMVVMEditorSubsystem_IsValidConversionFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMEditorSubsystem_IsValidConversionFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMVVMEditorSubsystem_IsValidConversionFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMEditorSubsystem_IsValidConversionFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMEditorSubsystem_RemoveBinding_Statics
	{
		struct MVVMEditorSubsystem_eventRemoveBinding_Parms
		{
			UWidgetBlueprint* WidgetBlueprint;
			FMVVMBlueprintViewBinding Binding;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetBlueprint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Binding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Binding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMEditorSubsystem_RemoveBinding_Statics::NewProp_WidgetBlueprint = { "WidgetBlueprint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMEditorSubsystem_eventRemoveBinding_Parms, WidgetBlueprint), Z_Construct_UClass_UWidgetBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMEditorSubsystem_RemoveBinding_Statics::NewProp_Binding_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMEditorSubsystem_RemoveBinding_Statics::NewProp_Binding = { "Binding", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMEditorSubsystem_eventRemoveBinding_Parms, Binding), Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding, METADATA_PARAMS(Z_Construct_UFunction_UMVVMEditorSubsystem_RemoveBinding_Statics::NewProp_Binding_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMEditorSubsystem_RemoveBinding_Statics::NewProp_Binding_MetaData)) }; // 3568819447
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMEditorSubsystem_RemoveBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMEditorSubsystem_RemoveBinding_Statics::NewProp_WidgetBlueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMEditorSubsystem_RemoveBinding_Statics::NewProp_Binding,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMEditorSubsystem_RemoveBinding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewmodel" },
		{ "ModuleRelativePath", "Public/MVVMEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMEditorSubsystem_RemoveBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMEditorSubsystem, nullptr, "RemoveBinding", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMVVMEditorSubsystem_RemoveBinding_Statics::MVVMEditorSubsystem_eventRemoveBinding_Parms), Z_Construct_UFunction_UMVVMEditorSubsystem_RemoveBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMEditorSubsystem_RemoveBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMVVMEditorSubsystem_RemoveBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMEditorSubsystem_RemoveBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMVVMEditorSubsystem_RemoveBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMEditorSubsystem_RemoveBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMEditorSubsystem_RemoveViewModel_Statics
	{
		struct MVVMEditorSubsystem_eventRemoveViewModel_Parms
		{
			UWidgetBlueprint* WidgetBlueprint;
			FName ViewModel;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetBlueprint;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ViewModel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMEditorSubsystem_RemoveViewModel_Statics::NewProp_WidgetBlueprint = { "WidgetBlueprint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMEditorSubsystem_eventRemoveViewModel_Parms, WidgetBlueprint), Z_Construct_UClass_UWidgetBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMVVMEditorSubsystem_RemoveViewModel_Statics::NewProp_ViewModel = { "ViewModel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMEditorSubsystem_eventRemoveViewModel_Parms, ViewModel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMEditorSubsystem_RemoveViewModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMEditorSubsystem_RemoveViewModel_Statics::NewProp_WidgetBlueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMEditorSubsystem_RemoveViewModel_Statics::NewProp_ViewModel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMEditorSubsystem_RemoveViewModel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewmodel" },
		{ "ModuleRelativePath", "Public/MVVMEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMEditorSubsystem_RemoveViewModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMEditorSubsystem, nullptr, "RemoveViewModel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMVVMEditorSubsystem_RemoveViewModel_Statics::MVVMEditorSubsystem_eventRemoveViewModel_Parms), Z_Construct_UFunction_UMVVMEditorSubsystem_RemoveViewModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMEditorSubsystem_RemoveViewModel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMVVMEditorSubsystem_RemoveViewModel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMEditorSubsystem_RemoveViewModel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMVVMEditorSubsystem_RemoveViewModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMEditorSubsystem_RemoveViewModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMEditorSubsystem_RenameViewModel_Statics
	{
		struct MVVMEditorSubsystem_eventRenameViewModel_Parms
		{
			UWidgetBlueprint* WidgetBlueprint;
			FName ViewModel;
			FName NewViewModel;
			FText OutError;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetBlueprint;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ViewModel;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewViewModel;
		static const UECodeGen_Private::FTextPropertyParams NewProp_OutError;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMEditorSubsystem_RenameViewModel_Statics::NewProp_WidgetBlueprint = { "WidgetBlueprint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMEditorSubsystem_eventRenameViewModel_Parms, WidgetBlueprint), Z_Construct_UClass_UWidgetBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMVVMEditorSubsystem_RenameViewModel_Statics::NewProp_ViewModel = { "ViewModel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMEditorSubsystem_eventRenameViewModel_Parms, ViewModel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMVVMEditorSubsystem_RenameViewModel_Statics::NewProp_NewViewModel = { "NewViewModel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMEditorSubsystem_eventRenameViewModel_Parms, NewViewModel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMVVMEditorSubsystem_RenameViewModel_Statics::NewProp_OutError = { "OutError", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMEditorSubsystem_eventRenameViewModel_Parms, OutError), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMVVMEditorSubsystem_RenameViewModel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MVVMEditorSubsystem_eventRenameViewModel_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMVVMEditorSubsystem_RenameViewModel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MVVMEditorSubsystem_eventRenameViewModel_Parms), &Z_Construct_UFunction_UMVVMEditorSubsystem_RenameViewModel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMEditorSubsystem_RenameViewModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMEditorSubsystem_RenameViewModel_Statics::NewProp_WidgetBlueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMEditorSubsystem_RenameViewModel_Statics::NewProp_ViewModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMEditorSubsystem_RenameViewModel_Statics::NewProp_NewViewModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMEditorSubsystem_RenameViewModel_Statics::NewProp_OutError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMEditorSubsystem_RenameViewModel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMEditorSubsystem_RenameViewModel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewmodel" },
		{ "ModuleRelativePath", "Public/MVVMEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMEditorSubsystem_RenameViewModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMEditorSubsystem, nullptr, "RenameViewModel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMVVMEditorSubsystem_RenameViewModel_Statics::MVVMEditorSubsystem_eventRenameViewModel_Parms), Z_Construct_UFunction_UMVVMEditorSubsystem_RenameViewModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMEditorSubsystem_RenameViewModel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMVVMEditorSubsystem_RenameViewModel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMEditorSubsystem_RenameViewModel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMVVMEditorSubsystem_RenameViewModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMEditorSubsystem_RenameViewModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMEditorSubsystem_RequestView_Statics
	{
		struct MVVMEditorSubsystem_eventRequestView_Parms
		{
			UWidgetBlueprint* WidgetBlueprint;
			UMVVMBlueprintView* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetBlueprint;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMEditorSubsystem_RequestView_Statics::NewProp_WidgetBlueprint = { "WidgetBlueprint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMEditorSubsystem_eventRequestView_Parms, WidgetBlueprint), Z_Construct_UClass_UWidgetBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMEditorSubsystem_RequestView_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMEditorSubsystem_eventRequestView_Parms, ReturnValue), Z_Construct_UClass_UMVVMBlueprintView_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMEditorSubsystem_RequestView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMEditorSubsystem_RequestView_Statics::NewProp_WidgetBlueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMEditorSubsystem_RequestView_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMEditorSubsystem_RequestView_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewmodel" },
		{ "ModuleRelativePath", "Public/MVVMEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMEditorSubsystem_RequestView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMEditorSubsystem, nullptr, "RequestView", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMVVMEditorSubsystem_RequestView_Statics::MVVMEditorSubsystem_eventRequestView_Parms), Z_Construct_UFunction_UMVVMEditorSubsystem_RequestView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMEditorSubsystem_RequestView_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMVVMEditorSubsystem_RequestView_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMEditorSubsystem_RequestView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMVVMEditorSubsystem_RequestView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMEditorSubsystem_RequestView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMEditorSubsystem_VerifyViewModelRename_Statics
	{
		struct MVVMEditorSubsystem_eventVerifyViewModelRename_Parms
		{
			UWidgetBlueprint* WidgetBlueprint;
			FName ViewModel;
			FName NewViewModel;
			FText OutError;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetBlueprint;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ViewModel;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewViewModel;
		static const UECodeGen_Private::FTextPropertyParams NewProp_OutError;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMEditorSubsystem_VerifyViewModelRename_Statics::NewProp_WidgetBlueprint = { "WidgetBlueprint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMEditorSubsystem_eventVerifyViewModelRename_Parms, WidgetBlueprint), Z_Construct_UClass_UWidgetBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMVVMEditorSubsystem_VerifyViewModelRename_Statics::NewProp_ViewModel = { "ViewModel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMEditorSubsystem_eventVerifyViewModelRename_Parms, ViewModel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMVVMEditorSubsystem_VerifyViewModelRename_Statics::NewProp_NewViewModel = { "NewViewModel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMEditorSubsystem_eventVerifyViewModelRename_Parms, NewViewModel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMVVMEditorSubsystem_VerifyViewModelRename_Statics::NewProp_OutError = { "OutError", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMEditorSubsystem_eventVerifyViewModelRename_Parms, OutError), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMVVMEditorSubsystem_VerifyViewModelRename_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MVVMEditorSubsystem_eventVerifyViewModelRename_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMVVMEditorSubsystem_VerifyViewModelRename_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MVVMEditorSubsystem_eventVerifyViewModelRename_Parms), &Z_Construct_UFunction_UMVVMEditorSubsystem_VerifyViewModelRename_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMEditorSubsystem_VerifyViewModelRename_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMEditorSubsystem_VerifyViewModelRename_Statics::NewProp_WidgetBlueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMEditorSubsystem_VerifyViewModelRename_Statics::NewProp_ViewModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMEditorSubsystem_VerifyViewModelRename_Statics::NewProp_NewViewModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMEditorSubsystem_VerifyViewModelRename_Statics::NewProp_OutError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMEditorSubsystem_VerifyViewModelRename_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMEditorSubsystem_VerifyViewModelRename_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewmodel" },
		{ "ModuleRelativePath", "Public/MVVMEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMEditorSubsystem_VerifyViewModelRename_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMEditorSubsystem, nullptr, "VerifyViewModelRename", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMVVMEditorSubsystem_VerifyViewModelRename_Statics::MVVMEditorSubsystem_eventVerifyViewModelRename_Parms), Z_Construct_UFunction_UMVVMEditorSubsystem_VerifyViewModelRename_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMEditorSubsystem_VerifyViewModelRename_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMVVMEditorSubsystem_VerifyViewModelRename_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMEditorSubsystem_VerifyViewModelRename_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMVVMEditorSubsystem_VerifyViewModelRename()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMEditorSubsystem_VerifyViewModelRename_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMVVMEditorSubsystem);
	UClass* Z_Construct_UClass_UMVVMEditorSubsystem_NoRegister()
	{
		return UMVVMEditorSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMVVMEditorSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMVVMEditorSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModelEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMVVMEditorSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMVVMEditorSubsystem_AddBinding, "AddBinding" }, // 2300934754
		{ &Z_Construct_UFunction_UMVVMEditorSubsystem_AddViewModel, "AddViewModel" }, // 2826610942
		{ &Z_Construct_UFunction_UMVVMEditorSubsystem_GetAvailableConversionFunctions, "GetAvailableConversionFunctions" }, // 1816107336
		{ &Z_Construct_UFunction_UMVVMEditorSubsystem_GetChildViewModels, "GetChildViewModels" }, // 2841437951
		{ &Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunction, "GetConversionFunction" }, // 1787027408
		{ &Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunctionGraph, "GetConversionFunctionGraph" }, // 4058621616
		{ &Z_Construct_UFunction_UMVVMEditorSubsystem_GetConversionFunctionNode, "GetConversionFunctionNode" }, // 819474
		{ &Z_Construct_UFunction_UMVVMEditorSubsystem_GetView, "GetView" }, // 565371498
		{ &Z_Construct_UFunction_UMVVMEditorSubsystem_IsSimpleConversionFunction, "IsSimpleConversionFunction" }, // 3323779298
		{ &Z_Construct_UFunction_UMVVMEditorSubsystem_IsValidConversionFunction, "IsValidConversionFunction" }, // 2448184771
		{ &Z_Construct_UFunction_UMVVMEditorSubsystem_RemoveBinding, "RemoveBinding" }, // 3237372559
		{ &Z_Construct_UFunction_UMVVMEditorSubsystem_RemoveViewModel, "RemoveViewModel" }, // 4282922538
		{ &Z_Construct_UFunction_UMVVMEditorSubsystem_RenameViewModel, "RenameViewModel" }, // 1152194961
		{ &Z_Construct_UFunction_UMVVMEditorSubsystem_RequestView, "RequestView" }, // 562384991
		{ &Z_Construct_UFunction_UMVVMEditorSubsystem_VerifyViewModelRename, "VerifyViewModelRename" }, // 3440296414
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMEditorSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** */" },
		{ "IncludePath", "MVVMEditorSubsystem.h" },
		{ "ModuleRelativePath", "Public/MVVMEditorSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMVVMEditorSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMVVMEditorSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMVVMEditorSubsystem_Statics::ClassParams = {
		&UMVVMEditorSubsystem::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMVVMEditorSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMEditorSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMVVMEditorSubsystem()
	{
		if (!Z_Registration_Info_UClass_UMVVMEditorSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMVVMEditorSubsystem.OuterSingleton, Z_Construct_UClass_UMVVMEditorSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMVVMEditorSubsystem.OuterSingleton;
	}
	template<> MODELVIEWVIEWMODELEDITOR_API UClass* StaticClass<UMVVMEditorSubsystem>()
	{
		return UMVVMEditorSubsystem::StaticClass();
	}
	UMVVMEditorSubsystem::UMVVMEditorSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMVVMEditorSubsystem);
	UMVVMEditorSubsystem::~UMVVMEditorSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Public_MVVMEditorSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Public_MVVMEditorSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMVVMEditorSubsystem, UMVVMEditorSubsystem::StaticClass, TEXT("UMVVMEditorSubsystem"), &Z_Registration_Info_UClass_UMVVMEditorSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMVVMEditorSubsystem), 2462862123U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Public_MVVMEditorSubsystem_h_2549227776(TEXT("/Script/ModelViewViewModelEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Public_MVVMEditorSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Public_MVVMEditorSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
