// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/VisualLogger/VisualLoggerKismetLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVisualLoggerKismetLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UVisualLoggerKismetLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UVisualLoggerKismetLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(UVisualLoggerKismetLibrary::execLogSegment)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FVector,Z_Param_SegmentStart);
		P_GET_STRUCT(FVector,Z_Param_SegmentEnd);
		P_GET_PROPERTY(FStrProperty,Z_Param_Text);
		P_GET_STRUCT(FLinearColor,Z_Param_ObjectColor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
		P_GET_PROPERTY(FNameProperty,Z_Param_CategoryName);
		P_GET_UBOOL(Z_Param_bAddToMessageLog);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVisualLoggerKismetLibrary::LogSegment(Z_Param_WorldContextObject,Z_Param_SegmentStart,Z_Param_SegmentEnd,Z_Param_Text,Z_Param_ObjectColor,Z_Param_Thickness,Z_Param_CategoryName,Z_Param_bAddToMessageLog);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVisualLoggerKismetLibrary::execLogBox)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FBox,Z_Param_BoxShape);
		P_GET_PROPERTY(FStrProperty,Z_Param_Text);
		P_GET_STRUCT(FLinearColor,Z_Param_ObjectColor);
		P_GET_PROPERTY(FNameProperty,Z_Param_LogCategory);
		P_GET_UBOOL(Z_Param_bAddToMessageLog);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVisualLoggerKismetLibrary::LogBox(Z_Param_WorldContextObject,Z_Param_BoxShape,Z_Param_Text,Z_Param_ObjectColor,Z_Param_LogCategory,Z_Param_bAddToMessageLog);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVisualLoggerKismetLibrary::execLogLocation)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_PROPERTY(FStrProperty,Z_Param_Text);
		P_GET_STRUCT(FLinearColor,Z_Param_ObjectColor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FNameProperty,Z_Param_LogCategory);
		P_GET_UBOOL(Z_Param_bAddToMessageLog);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVisualLoggerKismetLibrary::LogLocation(Z_Param_WorldContextObject,Z_Param_Location,Z_Param_Text,Z_Param_ObjectColor,Z_Param_Radius,Z_Param_LogCategory,Z_Param_bAddToMessageLog);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVisualLoggerKismetLibrary::execLogText)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Text);
		P_GET_PROPERTY(FNameProperty,Z_Param_LogCategory);
		P_GET_UBOOL(Z_Param_bAddToMessageLog);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVisualLoggerKismetLibrary::LogText(Z_Param_WorldContextObject,Z_Param_Text,Z_Param_LogCategory,Z_Param_bAddToMessageLog);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVisualLoggerKismetLibrary::execRedirectVislog)
	{
		P_GET_OBJECT(UObject,Z_Param_SourceOwner);
		P_GET_OBJECT(UObject,Z_Param_DestinationOwner);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVisualLoggerKismetLibrary::RedirectVislog(Z_Param_SourceOwner,Z_Param_DestinationOwner);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVisualLoggerKismetLibrary::execEnableRecording)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVisualLoggerKismetLibrary::EnableRecording(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	void UVisualLoggerKismetLibrary::StaticRegisterNativesUVisualLoggerKismetLibrary()
	{
		UClass* Class = UVisualLoggerKismetLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnableRecording", &UVisualLoggerKismetLibrary::execEnableRecording },
			{ "LogBox", &UVisualLoggerKismetLibrary::execLogBox },
			{ "LogLocation", &UVisualLoggerKismetLibrary::execLogLocation },
			{ "LogSegment", &UVisualLoggerKismetLibrary::execLogSegment },
			{ "LogText", &UVisualLoggerKismetLibrary::execLogText },
			{ "RedirectVislog", &UVisualLoggerKismetLibrary::execRedirectVislog },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording_Statics
	{
		struct VisualLoggerKismetLibrary_eventEnableRecording_Parms
		{
			bool bEnabled;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((VisualLoggerKismetLibrary_eventEnableRecording_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VisualLoggerKismetLibrary_eventEnableRecording_Parms), &Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording_Statics::Function_MetaDataParams[] = {
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "Debug|VisualLogger" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Enable VisLog Recording" },
		{ "ModuleRelativePath", "Classes/VisualLogger/VisualLoggerKismetLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualLoggerKismetLibrary, nullptr, "EnableRecording", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording_Statics::VisualLoggerKismetLibrary_eventEnableRecording_Parms), Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics
	{
		struct VisualLoggerKismetLibrary_eventLogBox_Parms
		{
			UObject* WorldContextObject;
			FBox BoxShape;
			FString Text;
			FLinearColor ObjectColor;
			FName LogCategory;
			bool bAddToMessageLog;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoxShape;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectColor;
		static const UECodeGen_Private::FNamePropertyParams NewProp_LogCategory;
		static void NewProp_bAddToMessageLog_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddToMessageLog;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogBox_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::NewProp_BoxShape = { "BoxShape", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogBox_Parms, BoxShape), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogBox_Parms, Text), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::NewProp_ObjectColor = { "ObjectColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogBox_Parms, ObjectColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::NewProp_LogCategory = { "LogCategory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogBox_Parms, LogCategory), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::NewProp_bAddToMessageLog_SetBit(void* Obj)
	{
		((VisualLoggerKismetLibrary_eventLogBox_Parms*)Obj)->bAddToMessageLog = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::NewProp_bAddToMessageLog = { "bAddToMessageLog", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VisualLoggerKismetLibrary_eventLogBox_Parms), &Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::NewProp_bAddToMessageLog_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::NewProp_BoxShape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::NewProp_ObjectColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::NewProp_LogCategory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::NewProp_bAddToMessageLog,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "WorldContextObject, bAddToMessageLog" },
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "Debug|VisualLogger" },
		{ "Comment", "/** Logs box shape - recording for Visual Logs has to be enabled to record this data */" },
		{ "CPP_Default_bAddToMessageLog", "false" },
		{ "CPP_Default_LogCategory", "VisLogBP" },
		{ "CPP_Default_ObjectColor", "(R=0.000000,G=0.000000,B=1.000000,A=1.000000)" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "VisLog Box Shape" },
		{ "ModuleRelativePath", "Classes/VisualLogger/VisualLoggerKismetLibrary.h" },
		{ "ToolTip", "Logs box shape - recording for Visual Logs has to be enabled to record this data" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualLoggerKismetLibrary, nullptr, "LogBox", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::VisualLoggerKismetLibrary_eventLogBox_Parms), Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics
	{
		struct VisualLoggerKismetLibrary_eventLogLocation_Parms
		{
			UObject* WorldContextObject;
			FVector Location;
			FString Text;
			FLinearColor ObjectColor;
			float Radius;
			FName LogCategory;
			bool bAddToMessageLog;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectColor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FNamePropertyParams NewProp_LogCategory;
		static void NewProp_bAddToMessageLog_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddToMessageLog;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogLocation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogLocation_Parms, Text), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_ObjectColor = { "ObjectColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogLocation_Parms, ObjectColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogLocation_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_LogCategory = { "LogCategory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogLocation_Parms, LogCategory), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_bAddToMessageLog_SetBit(void* Obj)
	{
		((VisualLoggerKismetLibrary_eventLogLocation_Parms*)Obj)->bAddToMessageLog = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_bAddToMessageLog = { "bAddToMessageLog", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VisualLoggerKismetLibrary_eventLogLocation_Parms), &Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_bAddToMessageLog_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_ObjectColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_LogCategory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_bAddToMessageLog,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "WorldContextObject, bAddToMessageLog" },
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "Debug|VisualLogger" },
		{ "Comment", "/** Logs location as sphere with given radius - recording for Visual Logs has to be enabled to record this data */" },
		{ "CPP_Default_bAddToMessageLog", "false" },
		{ "CPP_Default_LogCategory", "VisLogBP" },
		{ "CPP_Default_ObjectColor", "(R=0.000000,G=0.000000,B=1.000000,A=1.000000)" },
		{ "CPP_Default_Radius", "10.000000" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "VisLog Location" },
		{ "ModuleRelativePath", "Classes/VisualLogger/VisualLoggerKismetLibrary.h" },
		{ "ToolTip", "Logs location as sphere with given radius - recording for Visual Logs has to be enabled to record this data" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualLoggerKismetLibrary, nullptr, "LogLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::VisualLoggerKismetLibrary_eventLogLocation_Parms), Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics
	{
		struct VisualLoggerKismetLibrary_eventLogSegment_Parms
		{
			UObject* WorldContextObject;
			FVector SegmentStart;
			FVector SegmentEnd;
			FString Text;
			FLinearColor ObjectColor;
			float Thickness;
			FName CategoryName;
			bool bAddToMessageLog;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SegmentStart_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SegmentStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SegmentEnd_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SegmentEnd;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CategoryName;
		static void NewProp_bAddToMessageLog_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddToMessageLog;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogSegment_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_SegmentStart_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_SegmentStart = { "SegmentStart", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogSegment_Parms, SegmentStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_SegmentStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_SegmentStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_SegmentEnd_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_SegmentEnd = { "SegmentEnd", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogSegment_Parms, SegmentEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_SegmentEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_SegmentEnd_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogSegment_Parms, Text), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_ObjectColor = { "ObjectColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogSegment_Parms, ObjectColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_Thickness_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogSegment_Parms, Thickness), METADATA_PARAMS(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_Thickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_Thickness_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogSegment_Parms, CategoryName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_bAddToMessageLog_SetBit(void* Obj)
	{
		((VisualLoggerKismetLibrary_eventLogSegment_Parms*)Obj)->bAddToMessageLog = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_bAddToMessageLog = { "bAddToMessageLog", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VisualLoggerKismetLibrary_eventLogSegment_Parms), &Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_bAddToMessageLog_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_SegmentStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_SegmentEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_ObjectColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_Thickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_CategoryName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_bAddToMessageLog,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "WorldContextObject, bAddToMessageLog, Thickness" },
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "Debug|VisualLogger" },
		{ "CPP_Default_bAddToMessageLog", "false" },
		{ "CPP_Default_CategoryName", "VisLogBP" },
		{ "CPP_Default_ObjectColor", "(R=0.000000,G=0.000000,B=1.000000,A=1.000000)" },
		{ "CPP_Default_Thickness", "0.000000" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "VisLog Segment" },
		{ "ModuleRelativePath", "Classes/VisualLogger/VisualLoggerKismetLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualLoggerKismetLibrary, nullptr, "LogSegment", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::VisualLoggerKismetLibrary_eventLogSegment_Parms), Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics
	{
		struct VisualLoggerKismetLibrary_eventLogText_Parms
		{
			UObject* WorldContextObject;
			FString Text;
			FName LogCategory;
			bool bAddToMessageLog;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
		static const UECodeGen_Private::FNamePropertyParams NewProp_LogCategory;
		static void NewProp_bAddToMessageLog_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddToMessageLog;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogText_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogText_Parms, Text), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::NewProp_LogCategory = { "LogCategory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogText_Parms, LogCategory), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::NewProp_bAddToMessageLog_SetBit(void* Obj)
	{
		((VisualLoggerKismetLibrary_eventLogText_Parms*)Obj)->bAddToMessageLog = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::NewProp_bAddToMessageLog = { "bAddToMessageLog", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VisualLoggerKismetLibrary_eventLogText_Parms), &Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::NewProp_bAddToMessageLog_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::NewProp_LogCategory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::NewProp_bAddToMessageLog,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "WorldContextObject, bAddToMessageLog" },
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "Debug|VisualLogger" },
		{ "Comment", "/** Logs simple text string with Visual Logger - recording for Visual Logs has to be enabled to record this data */" },
		{ "CPP_Default_bAddToMessageLog", "false" },
		{ "CPP_Default_LogCategory", "VisLogBP" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "VisLog Text" },
		{ "ModuleRelativePath", "Classes/VisualLogger/VisualLoggerKismetLibrary.h" },
		{ "ToolTip", "Logs simple text string with Visual Logger - recording for Visual Logs has to be enabled to record this data" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualLoggerKismetLibrary, nullptr, "LogText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::VisualLoggerKismetLibrary_eventLogText_Parms), Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog_Statics
	{
		struct VisualLoggerKismetLibrary_eventRedirectVislog_Parms
		{
			UObject* SourceOwner;
			UObject* DestinationOwner;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceOwner;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DestinationOwner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog_Statics::NewProp_SourceOwner = { "SourceOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventRedirectVislog_Parms, SourceOwner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog_Statics::NewProp_DestinationOwner = { "DestinationOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventRedirectVislog_Parms, DestinationOwner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog_Statics::NewProp_SourceOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog_Statics::NewProp_DestinationOwner,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog_Statics::Function_MetaDataParams[] = {
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "Debug|VisualLogger" },
		{ "Comment", "/** Makes SourceOwner log to DestinationOwner's vislog*/" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Classes/VisualLogger/VisualLoggerKismetLibrary.h" },
		{ "ToolTip", "Makes SourceOwner log to DestinationOwner's vislog" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualLoggerKismetLibrary, nullptr, "RedirectVislog", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog_Statics::VisualLoggerKismetLibrary_eventRedirectVislog_Parms), Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVisualLoggerKismetLibrary);
	UClass* Z_Construct_UClass_UVisualLoggerKismetLibrary_NoRegister()
	{
		return UVisualLoggerKismetLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UVisualLoggerKismetLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVisualLoggerKismetLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVisualLoggerKismetLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording, "EnableRecording" }, // 1349766406
		{ &Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox, "LogBox" }, // 3471647935
		{ &Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation, "LogLocation" }, // 2383619515
		{ &Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment, "LogSegment" }, // 1226776942
		{ &Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText, "LogText" }, // 2288269515
		{ &Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog, "RedirectVislog" }, // 2404664304
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVisualLoggerKismetLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VisualLogger/VisualLoggerKismetLibrary.h" },
		{ "ModuleRelativePath", "Classes/VisualLogger/VisualLoggerKismetLibrary.h" },
		{ "ScriptName", "VisualLoggerLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVisualLoggerKismetLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVisualLoggerKismetLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVisualLoggerKismetLibrary_Statics::ClassParams = {
		&UVisualLoggerKismetLibrary::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVisualLoggerKismetLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVisualLoggerKismetLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVisualLoggerKismetLibrary()
	{
		if (!Z_Registration_Info_UClass_UVisualLoggerKismetLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVisualLoggerKismetLibrary.OuterSingleton, Z_Construct_UClass_UVisualLoggerKismetLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVisualLoggerKismetLibrary.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UVisualLoggerKismetLibrary>()
	{
		return UVisualLoggerKismetLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVisualLoggerKismetLibrary);
	UVisualLoggerKismetLibrary::~UVisualLoggerKismetLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVisualLoggerKismetLibrary, UVisualLoggerKismetLibrary::StaticClass, TEXT("UVisualLoggerKismetLibrary"), &Z_Registration_Info_UClass_UVisualLoggerKismetLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVisualLoggerKismetLibrary), 1491410945U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_661712478(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
