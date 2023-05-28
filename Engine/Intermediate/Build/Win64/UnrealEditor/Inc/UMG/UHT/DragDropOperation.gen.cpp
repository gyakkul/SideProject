// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blueprint/DragDropOperation.h"
#include "Input/Events.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDragDropOperation() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FPointerEvent();
	UMG_API UClass* Z_Construct_UClass_UDragDropOperation();
	UMG_API UClass* Z_Construct_UClass_UDragDropOperation_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UMG_API UEnum* Z_Construct_UEnum_UMG_EDragPivot();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnDragDropMulticast__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UMG_OnDragDropMulticast__DelegateSignature_Statics
	{
		struct _Script_UMG_eventOnDragDropMulticast_Parms
		{
			UDragDropOperation* Operation;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Operation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UMG_OnDragDropMulticast__DelegateSignature_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_UMG_eventOnDragDropMulticast_Parms, Operation), Z_Construct_UClass_UDragDropOperation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMG_OnDragDropMulticast__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnDragDropMulticast__DelegateSignature_Statics::NewProp_Operation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMG_OnDragDropMulticast__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Blueprint/DragDropOperation.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_OnDragDropMulticast__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, nullptr, "OnDragDropMulticast__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UMG_OnDragDropMulticast__DelegateSignature_Statics::_Script_UMG_eventOnDragDropMulticast_Parms), Z_Construct_UDelegateFunction_UMG_OnDragDropMulticast__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnDragDropMulticast__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMG_OnDragDropMulticast__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnDragDropMulticast__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMG_OnDragDropMulticast__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMG_OnDragDropMulticast__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnDragDropMulticast_DelegateWrapper(const FMulticastScriptDelegate& OnDragDropMulticast, UDragDropOperation* Operation)
{
	struct _Script_UMG_eventOnDragDropMulticast_Parms
	{
		UDragDropOperation* Operation;
	};
	_Script_UMG_eventOnDragDropMulticast_Parms Parms;
	Parms.Operation=Operation;
	OnDragDropMulticast.ProcessMulticastDelegate<UObject>(&Parms);
}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDragPivot;
	static UEnum* EDragPivot_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDragPivot.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDragPivot.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UMG_EDragPivot, (UObject*)Z_Construct_UPackage__Script_UMG(), TEXT("EDragPivot"));
		}
		return Z_Registration_Info_UEnum_EDragPivot.OuterSingleton;
	}
	template<> UMG_API UEnum* StaticEnum<EDragPivot>()
	{
		return EDragPivot_StaticEnum();
	}
	struct Z_Construct_UEnum_UMG_EDragPivot_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UMG_EDragPivot_Statics::Enumerators[] = {
		{ "EDragPivot::MouseDown", (int64)EDragPivot::MouseDown },
		{ "EDragPivot::TopLeft", (int64)EDragPivot::TopLeft },
		{ "EDragPivot::TopCenter", (int64)EDragPivot::TopCenter },
		{ "EDragPivot::TopRight", (int64)EDragPivot::TopRight },
		{ "EDragPivot::CenterLeft", (int64)EDragPivot::CenterLeft },
		{ "EDragPivot::CenterCenter", (int64)EDragPivot::CenterCenter },
		{ "EDragPivot::CenterRight", (int64)EDragPivot::CenterRight },
		{ "EDragPivot::BottomLeft", (int64)EDragPivot::BottomLeft },
		{ "EDragPivot::BottomCenter", (int64)EDragPivot::BottomCenter },
		{ "EDragPivot::BottomRight", (int64)EDragPivot::BottomRight },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UMG_EDragPivot_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BottomCenter.Comment", "/**  */" },
		{ "BottomCenter.Name", "EDragPivot::BottomCenter" },
		{ "BottomLeft.Comment", "/**  */" },
		{ "BottomLeft.Name", "EDragPivot::BottomLeft" },
		{ "BottomRight.Comment", "/**  */" },
		{ "BottomRight.Name", "EDragPivot::BottomRight" },
		{ "CenterCenter.Comment", "/**  */" },
		{ "CenterCenter.Name", "EDragPivot::CenterCenter" },
		{ "CenterLeft.Comment", "/**  */" },
		{ "CenterLeft.Name", "EDragPivot::CenterLeft" },
		{ "CenterRight.Comment", "/**  */" },
		{ "CenterRight.Name", "EDragPivot::CenterRight" },
		{ "Comment", "/**\n * Controls where the drag widget visual will appear when dragged relative to the pointer performing\n * the drag operation.\n */" },
		{ "ModuleRelativePath", "Public/Blueprint/DragDropOperation.h" },
		{ "MouseDown.Comment", "/**  */" },
		{ "MouseDown.Name", "EDragPivot::MouseDown" },
		{ "ToolTip", "Controls where the drag widget visual will appear when dragged relative to the pointer performing\nthe drag operation." },
		{ "TopCenter.Comment", "/**  */" },
		{ "TopCenter.Name", "EDragPivot::TopCenter" },
		{ "TopLeft.Comment", "/**  */" },
		{ "TopLeft.Name", "EDragPivot::TopLeft" },
		{ "TopRight.Comment", "/**  */" },
		{ "TopRight.Name", "EDragPivot::TopRight" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UMG_EDragPivot_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UMG,
		nullptr,
		"EDragPivot",
		"EDragPivot",
		Z_Construct_UEnum_UMG_EDragPivot_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UMG_EDragPivot_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UMG_EDragPivot_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UMG_EDragPivot_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UMG_EDragPivot()
	{
		if (!Z_Registration_Info_UEnum_EDragPivot.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDragPivot.InnerSingleton, Z_Construct_UEnum_UMG_EDragPivot_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDragPivot.InnerSingleton;
	}
	DEFINE_FUNCTION(UDragDropOperation::execDragged)
	{
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_PointerEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Dragged_Implementation(Z_Param_Out_PointerEvent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDragDropOperation::execDragCancelled)
	{
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_PointerEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DragCancelled_Implementation(Z_Param_Out_PointerEvent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDragDropOperation::execDrop)
	{
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_PointerEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Drop_Implementation(Z_Param_Out_PointerEvent);
		P_NATIVE_END;
	}
	struct DragDropOperation_eventDragCancelled_Parms
	{
		FPointerEvent PointerEvent;
	};
	struct DragDropOperation_eventDragged_Parms
	{
		FPointerEvent PointerEvent;
	};
	struct DragDropOperation_eventDrop_Parms
	{
		FPointerEvent PointerEvent;
	};
	static FName NAME_UDragDropOperation_DragCancelled = FName(TEXT("DragCancelled"));
	void UDragDropOperation::DragCancelled(FPointerEvent const& PointerEvent)
	{
		DragDropOperation_eventDragCancelled_Parms Parms;
		Parms.PointerEvent=PointerEvent;
		ProcessEvent(FindFunctionChecked(NAME_UDragDropOperation_DragCancelled),&Parms);
	}
	static FName NAME_UDragDropOperation_Dragged = FName(TEXT("Dragged"));
	void UDragDropOperation::Dragged(FPointerEvent const& PointerEvent)
	{
		DragDropOperation_eventDragged_Parms Parms;
		Parms.PointerEvent=PointerEvent;
		ProcessEvent(FindFunctionChecked(NAME_UDragDropOperation_Dragged),&Parms);
	}
	static FName NAME_UDragDropOperation_Drop = FName(TEXT("Drop"));
	void UDragDropOperation::Drop(FPointerEvent const& PointerEvent)
	{
		DragDropOperation_eventDrop_Parms Parms;
		Parms.PointerEvent=PointerEvent;
		ProcessEvent(FindFunctionChecked(NAME_UDragDropOperation_Drop),&Parms);
	}
	void UDragDropOperation::StaticRegisterNativesUDragDropOperation()
	{
		UClass* Class = UDragDropOperation::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DragCancelled", &UDragDropOperation::execDragCancelled },
			{ "Dragged", &UDragDropOperation::execDragged },
			{ "Drop", &UDragDropOperation::execDrop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDragDropOperation_DragCancelled_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointerEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PointerEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDragDropOperation_DragCancelled_Statics::NewProp_PointerEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDragDropOperation_DragCancelled_Statics::NewProp_PointerEvent = { "PointerEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DragDropOperation_eventDragCancelled_Parms, PointerEvent), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(Z_Construct_UFunction_UDragDropOperation_DragCancelled_Statics::NewProp_PointerEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDragDropOperation_DragCancelled_Statics::NewProp_PointerEvent_MetaData)) }; // 3180245440
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDragDropOperation_DragCancelled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDragDropOperation_DragCancelled_Statics::NewProp_PointerEvent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDragDropOperation_DragCancelled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Drag and Drop" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Blueprint/DragDropOperation.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDragDropOperation_DragCancelled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDragDropOperation, nullptr, "DragCancelled", nullptr, nullptr, sizeof(DragDropOperation_eventDragCancelled_Parms), Z_Construct_UFunction_UDragDropOperation_DragCancelled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDragDropOperation_DragCancelled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDragDropOperation_DragCancelled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDragDropOperation_DragCancelled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDragDropOperation_DragCancelled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDragDropOperation_DragCancelled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDragDropOperation_Dragged_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointerEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PointerEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDragDropOperation_Dragged_Statics::NewProp_PointerEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDragDropOperation_Dragged_Statics::NewProp_PointerEvent = { "PointerEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DragDropOperation_eventDragged_Parms, PointerEvent), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(Z_Construct_UFunction_UDragDropOperation_Dragged_Statics::NewProp_PointerEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDragDropOperation_Dragged_Statics::NewProp_PointerEvent_MetaData)) }; // 3180245440
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDragDropOperation_Dragged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDragDropOperation_Dragged_Statics::NewProp_PointerEvent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDragDropOperation_Dragged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Drag and Drop" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Blueprint/DragDropOperation.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDragDropOperation_Dragged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDragDropOperation, nullptr, "Dragged", nullptr, nullptr, sizeof(DragDropOperation_eventDragged_Parms), Z_Construct_UFunction_UDragDropOperation_Dragged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDragDropOperation_Dragged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDragDropOperation_Dragged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDragDropOperation_Dragged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDragDropOperation_Dragged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDragDropOperation_Dragged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDragDropOperation_Drop_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointerEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PointerEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDragDropOperation_Drop_Statics::NewProp_PointerEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDragDropOperation_Drop_Statics::NewProp_PointerEvent = { "PointerEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DragDropOperation_eventDrop_Parms, PointerEvent), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(Z_Construct_UFunction_UDragDropOperation_Drop_Statics::NewProp_PointerEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDragDropOperation_Drop_Statics::NewProp_PointerEvent_MetaData)) }; // 3180245440
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDragDropOperation_Drop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDragDropOperation_Drop_Statics::NewProp_PointerEvent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDragDropOperation_Drop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Drag and Drop" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Blueprint/DragDropOperation.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDragDropOperation_Drop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDragDropOperation, nullptr, "Drop", nullptr, nullptr, sizeof(DragDropOperation_eventDrop_Parms), Z_Construct_UFunction_UDragDropOperation_Drop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDragDropOperation_Drop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDragDropOperation_Drop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDragDropOperation_Drop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDragDropOperation_Drop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDragDropOperation_Drop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDragDropOperation);
	UClass* Z_Construct_UClass_UDragDropOperation_NoRegister()
	{
		return UDragDropOperation::StaticClass();
	}
	struct Z_Construct_UClass_UDragDropOperation_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Tag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Payload;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultDragVisual_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultDragVisual;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Pivot_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pivot_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Pivot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDrop_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDrop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDragCancelled_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDragCancelled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDragged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDragged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDragDropOperation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDragDropOperation_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDragDropOperation_DragCancelled, "DragCancelled" }, // 2259715330
		{ &Z_Construct_UFunction_UDragDropOperation_Dragged, "Dragged" }, // 642300200
		{ &Z_Construct_UFunction_UDragDropOperation_Drop, "Drop" }, // 2570693897
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragDropOperation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This class is the base drag drop operation for UMG, extend it to add additional data and add new functionality.\n */" },
		{ "DontUseGenericSpawnObject", "True" },
		{ "IncludePath", "Blueprint/DragDropOperation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Blueprint/DragDropOperation.h" },
		{ "ToolTip", "This class is the base drag drop operation for UMG, extend it to add additional data and add new functionality." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragDropOperation_Statics::NewProp_Tag_MetaData[] = {
		{ "Category", "Drag and Drop" },
		{ "Comment", "/** A simple string tag you can optionally use to provide extra metadata about the operation. */" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Blueprint/DragDropOperation.h" },
		{ "ToolTip", "A simple string tag you can optionally use to provide extra metadata about the operation." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDragDropOperation_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDragDropOperation, Tag), METADATA_PARAMS(Z_Construct_UClass_UDragDropOperation_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDragDropOperation_Statics::NewProp_Tag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragDropOperation_Statics::NewProp_Payload_MetaData[] = {
		{ "Category", "Drag and Drop" },
		{ "Comment", "/**\n\x09 * The payload of the drag operation.  This can be any UObject that you want to pass along as dragged data.  If you \n\x09 * were building an inventory screen this would be the UObject representing the item being moved to another slot.\n\x09 */" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Blueprint/DragDropOperation.h" },
		{ "ToolTip", "The payload of the drag operation.  This can be any UObject that you want to pass along as dragged data.  If you\nwere building an inventory screen this would be the UObject representing the item being moved to another slot." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDragDropOperation_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0015000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDragDropOperation, Payload), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDragDropOperation_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDragDropOperation_Statics::NewProp_Payload_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragDropOperation_Statics::NewProp_DefaultDragVisual_MetaData[] = {
		{ "Category", "Drag and Drop" },
		{ "Comment", "/**\n\x09 * The Drag Visual is the widget to display when dragging the item.  Normally people create a new widget to represent the \n\x09 * temporary drag.\n\x09 */" },
		{ "DisplayName", "Drag Visual" },
		{ "EditInline", "true" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Blueprint/DragDropOperation.h" },
		{ "ToolTip", "The Drag Visual is the widget to display when dragging the item.  Normally people create a new widget to represent the\ntemporary drag." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDragDropOperation_Statics::NewProp_DefaultDragVisual = { "DefaultDragVisual", nullptr, (EPropertyFlags)0x001500000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDragDropOperation, DefaultDragVisual), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDragDropOperation_Statics::NewProp_DefaultDragVisual_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDragDropOperation_Statics::NewProp_DefaultDragVisual_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDragDropOperation_Statics::NewProp_Pivot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragDropOperation_Statics::NewProp_Pivot_MetaData[] = {
		{ "Category", "Drag and Drop" },
		{ "Comment", "/**\n\x09 * Controls where the drag widget visual will appear when dragged relative to the pointer performing\n\x09 * the drag operation.\n\x09 */" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Blueprint/DragDropOperation.h" },
		{ "ToolTip", "Controls where the drag widget visual will appear when dragged relative to the pointer performing\nthe drag operation." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDragDropOperation_Statics::NewProp_Pivot = { "Pivot", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDragDropOperation, Pivot), Z_Construct_UEnum_UMG_EDragPivot, METADATA_PARAMS(Z_Construct_UClass_UDragDropOperation_Statics::NewProp_Pivot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDragDropOperation_Statics::NewProp_Pivot_MetaData)) }; // 2081791861
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragDropOperation_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "Drag and Drop" },
		{ "Comment", "/** A percentage offset (-1..+1) from the Pivot location, the percentage is of the desired size of the dragged visual. */" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Blueprint/DragDropOperation.h" },
		{ "ToolTip", "A percentage offset (-1..+1) from the Pivot location, the percentage is of the desired size of the dragged visual." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDragDropOperation_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0011040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDragDropOperation, Offset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UDragDropOperation_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDragDropOperation_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragDropOperation_Statics::NewProp_OnDrop_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Blueprint/DragDropOperation.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDragDropOperation_Statics::NewProp_OnDrop = { "OnDrop", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDragDropOperation, OnDrop), Z_Construct_UDelegateFunction_UMG_OnDragDropMulticast__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDragDropOperation_Statics::NewProp_OnDrop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDragDropOperation_Statics::NewProp_OnDrop_MetaData)) }; // 1407669130
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragDropOperation_Statics::NewProp_OnDragCancelled_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Blueprint/DragDropOperation.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDragDropOperation_Statics::NewProp_OnDragCancelled = { "OnDragCancelled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDragDropOperation, OnDragCancelled), Z_Construct_UDelegateFunction_UMG_OnDragDropMulticast__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDragDropOperation_Statics::NewProp_OnDragCancelled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDragDropOperation_Statics::NewProp_OnDragCancelled_MetaData)) }; // 1407669130
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragDropOperation_Statics::NewProp_OnDragged_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Blueprint/DragDropOperation.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDragDropOperation_Statics::NewProp_OnDragged = { "OnDragged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDragDropOperation, OnDragged), Z_Construct_UDelegateFunction_UMG_OnDragDropMulticast__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDragDropOperation_Statics::NewProp_OnDragged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDragDropOperation_Statics::NewProp_OnDragged_MetaData)) }; // 1407669130
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDragDropOperation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDragDropOperation_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDragDropOperation_Statics::NewProp_Payload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDragDropOperation_Statics::NewProp_DefaultDragVisual,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDragDropOperation_Statics::NewProp_Pivot_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDragDropOperation_Statics::NewProp_Pivot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDragDropOperation_Statics::NewProp_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDragDropOperation_Statics::NewProp_OnDrop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDragDropOperation_Statics::NewProp_OnDragCancelled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDragDropOperation_Statics::NewProp_OnDragged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDragDropOperation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDragDropOperation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDragDropOperation_Statics::ClassParams = {
		&UDragDropOperation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDragDropOperation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDragDropOperation_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDragDropOperation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDragDropOperation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDragDropOperation()
	{
		if (!Z_Registration_Info_UClass_UDragDropOperation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDragDropOperation.OuterSingleton, Z_Construct_UClass_UDragDropOperation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDragDropOperation.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UDragDropOperation>()
	{
		return UDragDropOperation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDragDropOperation);
	UDragDropOperation::~UDragDropOperation() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_DragDropOperation_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_DragDropOperation_h_Statics::EnumInfo[] = {
		{ EDragPivot_StaticEnum, TEXT("EDragPivot"), &Z_Registration_Info_UEnum_EDragPivot, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2081791861U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_DragDropOperation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDragDropOperation, UDragDropOperation::StaticClass, TEXT("UDragDropOperation"), &Z_Registration_Info_UClass_UDragDropOperation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDragDropOperation), 1824185881U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_DragDropOperation_h_3111556977(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_DragDropOperation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_DragDropOperation_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_DragDropOperation_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_DragDropOperation_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
