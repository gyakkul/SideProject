// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/Widget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class UGameInstance;
class ULocalPlayer;
class UObject;
class UPanelWidget;
class UWidget;
enum class ECheckBoxState : uint8;
enum class ESlateVisibility : uint8;
enum class EUINavigation : uint8;
enum class EUINavigationRule : uint8;
enum class EWidgetClipping : uint8;
struct FEventReply;
struct FFieldNotificationId;
struct FGeometry;
struct FLinearColor;
struct FPointerEvent;
struct FSlateBrush;
struct FSlateColor;
struct FWidgetTransform;
#ifdef UMG_Widget_generated_h
#error "Widget.generated.h already included, missing '#pragma once' in Widget.h"
#endif
#define UMG_Widget_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_233_DELEGATE \
static bool FGetBool_DelegateWrapper(const FScriptDelegate& GetBool);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_234_DELEGATE \
static float FGetFloat_DelegateWrapper(const FScriptDelegate& GetFloat);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_235_DELEGATE \
static int32 FGetInt32_DelegateWrapper(const FScriptDelegate& GetInt32);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_236_DELEGATE \
static FText FGetText_DelegateWrapper(const FScriptDelegate& GetText);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_237_DELEGATE \
static FSlateColor FGetSlateColor_DelegateWrapper(const FScriptDelegate& GetSlateColor);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_238_DELEGATE \
static FLinearColor FGetLinearColor_DelegateWrapper(const FScriptDelegate& GetLinearColor);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_239_DELEGATE \
static FSlateBrush FGetSlateBrush_DelegateWrapper(const FScriptDelegate& GetSlateBrush);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_240_DELEGATE \
static ESlateVisibility FGetSlateVisibility_DelegateWrapper(const FScriptDelegate& GetSlateVisibility);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_241_DELEGATE \
static EMouseCursor::Type FGetMouseCursor_DelegateWrapper(const FScriptDelegate& GetMouseCursor);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_242_DELEGATE \
static ECheckBoxState FGetCheckBoxState_DelegateWrapper(const FScriptDelegate& GetCheckBoxState);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_243_DELEGATE \
static UWidget* FGetWidget_DelegateWrapper(const FScriptDelegate& GetWidget);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_246_DELEGATE \
static UWidget* FGenerateWidgetForString_DelegateWrapper(const FScriptDelegate& GenerateWidgetForString, const FString& Item);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_247_DELEGATE \
static UWidget* FGenerateWidgetForObject_DelegateWrapper(const FScriptDelegate& GenerateWidgetForObject, UObject* Item);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_250_DELEGATE \
static FEventReply FOnReply_DelegateWrapper(const FScriptDelegate& OnReply);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_251_DELEGATE \
static FEventReply FOnPointerEvent_DelegateWrapper(const FScriptDelegate& OnPointerEvent, FGeometry MyGeometry, FPointerEvent const& MouseEvent);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_215_SPARSE_DATA
#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_215_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAccessibleSummaryText); \
	DECLARE_FUNCTION(execGetAccessibleText); \
	DECLARE_FUNCTION(execGetOwningLocalPlayer); \
	DECLARE_FUNCTION(execGetOwningPlayer); \
	DECLARE_FUNCTION(execGetGameInstance); \
	DECLARE_FUNCTION(execK2_BroadcastFieldValueChanged); \
	DECLARE_FUNCTION(execK2_RemoveFieldValueChangedDelegate); \
	DECLARE_FUNCTION(execK2_AddFieldValueChangedDelegate); \
	DECLARE_FUNCTION(execGetPaintSpaceGeometry); \
	DECLARE_FUNCTION(execGetTickSpaceGeometry); \
	DECLARE_FUNCTION(execGetCachedGeometry); \
	DECLARE_FUNCTION(execRemoveFromParent); \
	DECLARE_FUNCTION(execGetParent); \
	DECLARE_FUNCTION(execSetNavigationRuleCustomBoundary); \
	DECLARE_FUNCTION(execSetNavigationRuleCustom); \
	DECLARE_FUNCTION(execSetNavigationRuleExplicit); \
	DECLARE_FUNCTION(execSetNavigationRuleBase); \
	DECLARE_FUNCTION(execSetNavigationRule); \
	DECLARE_FUNCTION(execSetAllNavigationRules); \
	DECLARE_FUNCTION(execGetDesiredSize); \
	DECLARE_FUNCTION(execInvalidateLayoutAndVolatility); \
	DECLARE_FUNCTION(execForceLayoutPrepass); \
	DECLARE_FUNCTION(execSetUserFocus); \
	DECLARE_FUNCTION(execSetFocus); \
	DECLARE_FUNCTION(execHasUserFocusedDescendants); \
	DECLARE_FUNCTION(execHasFocusedDescendants); \
	DECLARE_FUNCTION(execHasAnyUserFocus); \
	DECLARE_FUNCTION(execHasUserFocus); \
	DECLARE_FUNCTION(execSetKeyboardFocus); \
	DECLARE_FUNCTION(execHasMouseCaptureByUser); \
	DECLARE_FUNCTION(execHasMouseCapture); \
	DECLARE_FUNCTION(execHasKeyboardFocus); \
	DECLARE_FUNCTION(execIsHovered); \
	DECLARE_FUNCTION(execForceVolatile); \
	DECLARE_FUNCTION(execSetClipping); \
	DECLARE_FUNCTION(execGetClipping); \
	DECLARE_FUNCTION(execSetRenderOpacity); \
	DECLARE_FUNCTION(execGetRenderOpacity); \
	DECLARE_FUNCTION(execSetVisibility); \
	DECLARE_FUNCTION(execGetVisibility); \
	DECLARE_FUNCTION(execIsVisible); \
	DECLARE_FUNCTION(execIsRendered); \
	DECLARE_FUNCTION(execResetCursor); \
	DECLARE_FUNCTION(execSetCursor); \
	DECLARE_FUNCTION(execSetToolTip); \
	DECLARE_FUNCTION(execSetToolTipText); \
	DECLARE_FUNCTION(execIsInViewport); \
	DECLARE_FUNCTION(execSetIsEnabled); \
	DECLARE_FUNCTION(execGetIsEnabled); \
	DECLARE_FUNCTION(execSetRenderTransformPivot); \
	DECLARE_FUNCTION(execSetRenderTranslation); \
	DECLARE_FUNCTION(execGetRenderTransformAngle); \
	DECLARE_FUNCTION(execSetRenderTransformAngle); \
	DECLARE_FUNCTION(execSetRenderShear); \
	DECLARE_FUNCTION(execSetRenderScale); \
	DECLARE_FUNCTION(execSetRenderTransform);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_215_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAccessibleSummaryText); \
	DECLARE_FUNCTION(execGetAccessibleText); \
	DECLARE_FUNCTION(execGetOwningLocalPlayer); \
	DECLARE_FUNCTION(execGetOwningPlayer); \
	DECLARE_FUNCTION(execGetGameInstance); \
	DECLARE_FUNCTION(execK2_BroadcastFieldValueChanged); \
	DECLARE_FUNCTION(execK2_RemoveFieldValueChangedDelegate); \
	DECLARE_FUNCTION(execK2_AddFieldValueChangedDelegate); \
	DECLARE_FUNCTION(execGetPaintSpaceGeometry); \
	DECLARE_FUNCTION(execGetTickSpaceGeometry); \
	DECLARE_FUNCTION(execGetCachedGeometry); \
	DECLARE_FUNCTION(execRemoveFromParent); \
	DECLARE_FUNCTION(execGetParent); \
	DECLARE_FUNCTION(execSetNavigationRuleCustomBoundary); \
	DECLARE_FUNCTION(execSetNavigationRuleCustom); \
	DECLARE_FUNCTION(execSetNavigationRuleExplicit); \
	DECLARE_FUNCTION(execSetNavigationRuleBase); \
	DECLARE_FUNCTION(execSetNavigationRule); \
	DECLARE_FUNCTION(execSetAllNavigationRules); \
	DECLARE_FUNCTION(execGetDesiredSize); \
	DECLARE_FUNCTION(execInvalidateLayoutAndVolatility); \
	DECLARE_FUNCTION(execForceLayoutPrepass); \
	DECLARE_FUNCTION(execSetUserFocus); \
	DECLARE_FUNCTION(execSetFocus); \
	DECLARE_FUNCTION(execHasUserFocusedDescendants); \
	DECLARE_FUNCTION(execHasFocusedDescendants); \
	DECLARE_FUNCTION(execHasAnyUserFocus); \
	DECLARE_FUNCTION(execHasUserFocus); \
	DECLARE_FUNCTION(execSetKeyboardFocus); \
	DECLARE_FUNCTION(execHasMouseCaptureByUser); \
	DECLARE_FUNCTION(execHasMouseCapture); \
	DECLARE_FUNCTION(execHasKeyboardFocus); \
	DECLARE_FUNCTION(execIsHovered); \
	DECLARE_FUNCTION(execForceVolatile); \
	DECLARE_FUNCTION(execSetClipping); \
	DECLARE_FUNCTION(execGetClipping); \
	DECLARE_FUNCTION(execSetRenderOpacity); \
	DECLARE_FUNCTION(execGetRenderOpacity); \
	DECLARE_FUNCTION(execSetVisibility); \
	DECLARE_FUNCTION(execGetVisibility); \
	DECLARE_FUNCTION(execIsVisible); \
	DECLARE_FUNCTION(execIsRendered); \
	DECLARE_FUNCTION(execResetCursor); \
	DECLARE_FUNCTION(execSetCursor); \
	DECLARE_FUNCTION(execSetToolTip); \
	DECLARE_FUNCTION(execSetToolTipText); \
	DECLARE_FUNCTION(execIsInViewport); \
	DECLARE_FUNCTION(execSetIsEnabled); \
	DECLARE_FUNCTION(execGetIsEnabled); \
	DECLARE_FUNCTION(execSetRenderTransformPivot); \
	DECLARE_FUNCTION(execSetRenderTranslation); \
	DECLARE_FUNCTION(execGetRenderTransformAngle); \
	DECLARE_FUNCTION(execSetRenderTransformAngle); \
	DECLARE_FUNCTION(execSetRenderShear); \
	DECLARE_FUNCTION(execSetRenderScale); \
	DECLARE_FUNCTION(execSetRenderTransform);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_215_ACCESSORS \
static void GetToolTipText_WrapperImpl(const void* Object, void* OutValue); \
static void SetToolTipText_WrapperImpl(void* Object, const void* InValue); \
static void GetToolTipWidget_WrapperImpl(const void* Object, void* OutValue); \
static void SetToolTipWidget_WrapperImpl(void* Object, const void* InValue); \
static void GetRenderTransform_WrapperImpl(const void* Object, void* OutValue); \
static void SetRenderTransform_WrapperImpl(void* Object, const void* InValue); \
static void GetRenderTransformPivot_WrapperImpl(const void* Object, void* OutValue); \
static void SetRenderTransformPivot_WrapperImpl(void* Object, const void* InValue); \
static void GetFlowDirectionPreference_WrapperImpl(const void* Object, void* OutValue); \
static void SetFlowDirectionPreference_WrapperImpl(void* Object, const void* InValue); \
static void GetbIsEnabled_WrapperImpl(const void* Object, void* OutValue); \
static void SetbIsEnabled_WrapperImpl(void* Object, const void* InValue); \
static void GetCursor_WrapperImpl(const void* Object, void* OutValue); \
static void SetCursor_WrapperImpl(void* Object, const void* InValue); \
static void GetClipping_WrapperImpl(const void* Object, void* OutValue); \
static void SetClipping_WrapperImpl(void* Object, const void* InValue); \
static void GetVisibility_WrapperImpl(const void* Object, void* OutValue); \
static void SetVisibility_WrapperImpl(void* Object, const void* InValue); \
static void GetRenderOpacity_WrapperImpl(const void* Object, void* OutValue); \
static void SetRenderOpacity_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_215_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWidget(); \
	friend struct Z_Construct_UClass_UWidget_Statics; \
public: \
	DECLARE_CLASS(UWidget, UVisual, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UWidget*>(this); }


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_215_INCLASS \
private: \
	static void StaticRegisterNativesUWidget(); \
	friend struct Z_Construct_UClass_UWidget_Statics; \
public: \
	DECLARE_CLASS(UWidget, UVisual, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UWidget*>(this); }


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_215_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWidget(UWidget&&); \
	NO_API UWidget(const UWidget&); \
public: \
	NO_API virtual ~UWidget();


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_215_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWidget(UWidget&&); \
	NO_API UWidget(const UWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidget) \
	NO_API virtual ~UWidget();


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_212_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_215_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_215_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_215_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_215_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_215_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_215_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_215_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_215_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_215_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_215_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_215_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_215_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Widget."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h


#define FOREACH_ENUM_EWIDGETDESIGNFLAGS(op) \
	op(EWidgetDesignFlags::None) \
	op(EWidgetDesignFlags::Designing) \
	op(EWidgetDesignFlags::ShowOutline) \
	op(EWidgetDesignFlags::ExecutePreConstruct) \
	op(EWidgetDesignFlags::Previewing) 

enum class EWidgetDesignFlags : uint8;
template<> struct TIsUEnumClass<EWidgetDesignFlags> { enum { Value = true }; };
template<> UMG_API UEnum* StaticEnum<EWidgetDesignFlags>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
