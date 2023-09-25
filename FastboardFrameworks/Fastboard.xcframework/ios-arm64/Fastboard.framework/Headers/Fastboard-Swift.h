#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.8.1 (swiftlang-5.8.0.124.5 clang-1403.0.22.11.100)
#ifndef FASTBOARD_SWIFT_H
#define FASTBOARD_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#include <cstring>
#include <stdlib.h>
#include <new>
#include <type_traits>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#endif
#if defined(__cplusplus)
#if __has_include(<ptrauth.h>)
# include <ptrauth.h>
#else
# ifndef __ptrauth_swift_value_witness_function_pointer
#  define __ptrauth_swift_value_witness_function_pointer(x)
# endif
#endif
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...) 
# endif
#endif
#if !defined(SWIFT_RUNTIME_NAME)
# if __has_attribute(objc_runtime_name)
#  define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
# else
#  define SWIFT_RUNTIME_NAME(X) 
# endif
#endif
#if !defined(SWIFT_COMPILE_NAME)
# if __has_attribute(swift_name)
#  define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
# else
#  define SWIFT_COMPILE_NAME(X) 
# endif
#endif
#if !defined(SWIFT_METHOD_FAMILY)
# if __has_attribute(objc_method_family)
#  define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
# else
#  define SWIFT_METHOD_FAMILY(X) 
# endif
#endif
#if !defined(SWIFT_NOESCAPE)
# if __has_attribute(noescape)
#  define SWIFT_NOESCAPE __attribute__((noescape))
# else
#  define SWIFT_NOESCAPE 
# endif
#endif
#if !defined(SWIFT_RELEASES_ARGUMENT)
# if __has_attribute(ns_consumed)
#  define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
# else
#  define SWIFT_RELEASES_ARGUMENT 
# endif
#endif
#if !defined(SWIFT_WARN_UNUSED_RESULT)
# if __has_attribute(warn_unused_result)
#  define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
# else
#  define SWIFT_WARN_UNUSED_RESULT 
# endif
#endif
#if !defined(SWIFT_NORETURN)
# if __has_attribute(noreturn)
#  define SWIFT_NORETURN __attribute__((noreturn))
# else
#  define SWIFT_NORETURN 
# endif
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA 
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA 
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA 
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif
#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif
#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER 
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility) 
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED_OBJC)
# if __has_feature(attribute_diagnose_if_objc)
#  define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
# else
#  define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
# endif
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction 
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if !defined(SWIFT_INDIRECT_RESULT)
# define SWIFT_INDIRECT_RESULT __attribute__((swift_indirect_result))
#endif
#if !defined(SWIFT_CONTEXT)
# define SWIFT_CONTEXT __attribute__((swift_context))
#endif
#if !defined(SWIFT_ERROR_RESULT)
# define SWIFT_ERROR_RESULT __attribute__((swift_error_result))
#endif
#if defined(__cplusplus)
# define SWIFT_NOEXCEPT noexcept
#else
# define SWIFT_NOEXCEPT 
#endif
#if defined(_WIN32)
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL __declspec(dllimport)
#endif
#else
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL 
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(objc_modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreFoundation;
@import Foundation;
@import ObjectiveC;
@import QuartzCore;
@import UIKit;
@import Whiteboard;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="Fastboard",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)

SWIFT_CLASS("_TtC9Fastboard17AppearanceManager")
@interface AppearanceManager : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) AppearanceManager * _Nonnull shared;)
+ (AppearanceManager * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (void)commitUpdate;
@end


@class FastRoomPanel;
@protocol FastRoomOperationItem;

/// Represents a FastPanel behavior
SWIFT_PROTOCOL("_TtP9Fastboard17FastPanelDelegate_")
@protocol FastPanelDelegate
- (void)itemWillBeExecutedWithFastPanel:(FastRoomPanel * _Nonnull)fastPanel item:(id <FastRoomOperationItem> _Nonnull)item;
@end

@class FastRoomDefaultOperationIdentifier;

SWIFT_PROTOCOL("_TtP9Fastboard16FastPanelControl_")
@protocol FastPanelControl
- (void)setAllPanelWithHide:(BOOL)hide;
- (void)setPanelItemHideWithItem:(FastRoomDefaultOperationIdentifier * _Nonnull)item hide:(BOOL)hide;
/// All the subPanels will be dismissed temporally
/// It will show again after a touch on SubOpsItem
- (void)dismissAllSubPanels;
@end

@class WhiteRoom;
@class FastRoomView;
enum OperationBarDirection : NSInteger;
@class UIColor;
@class WhitePageState;
enum FastRoomPhase : NSInteger;

/// Represents the control layer for fastboard
SWIFT_PROTOCOL("_TtP9Fastboard15FastRoomOverlay_")
@protocol FastRoomOverlay <FastPanelControl>
- (void)setupWithRoom:(WhiteRoom * _Nonnull)room fastboardView:(FastRoomView * _Nonnull)fastboardView direction:(enum OperationBarDirection)direction;
- (void)invalidAllLayout;
- (void)updateControlBarLayoutWithDirection:(enum OperationBarDirection)direction;
- (void)initUIWithAppliance:(WhiteApplianceNameKey _Nullable)appliance shape:(WhiteApplianceShapeTypeKey _Nullable)shape SWIFT_METHOD_FAMILY(none);
- (void)updateWithStrokeColor:(UIColor * _Nonnull)strokeColor;
- (void)updateWithStrokeWidth:(float)strokeWidth;
- (void)updateWithPageState:(WhitePageState * _Nonnull)pageState;
- (void)updateWithUndoEnable:(BOOL)undoEnable;
- (void)updateWithRedoEnable:(BOOL)redoEnable;
- (void)updateWithBoxState:(WhiteWindowBoxState _Nullable)boxState;
- (void)updateWithRoomPhase:(enum FastRoomPhase)roomPhase;
@optional
- (void)respondToPencilTap:(UIPencilPreferredAction)pencilTap SWIFT_AVAILABILITY(ios,introduced=12.1);
@end


/// Overlay for iPhone
SWIFT_CLASS("_TtC9Fastboard22CompactFastRoomOverlay")
@interface CompactFastRoomOverlay : NSObject <FastPanelDelegate, FastRoomOverlay>
/// Indicate whether an UIActivityIndicatorView should be add to Fastboard in bad network environment
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) BOOL showActivityIndicatorWhenReconnecting;)
+ (BOOL)showActivityIndicatorWhenReconnecting SWIFT_WARN_UNUSED_RESULT;
+ (void)setShowActivityIndicatorWhenReconnecting:(BOOL)value;
- (void)updateWithRoomPhase:(enum FastRoomPhase)roomPhase;
- (void)dismissAllSubPanels;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, copy) NSArray<WhiteApplianceNameKey> * _Nonnull defaultCompactAppliance;)
+ (NSArray<WhiteApplianceNameKey> * _Nonnull)defaultCompactAppliance SWIFT_WARN_UNUSED_RESULT;
+ (void)setDefaultCompactAppliance:(NSArray<WhiteApplianceNameKey> * _Nonnull)value;
- (void)invalidAllLayout;
- (void)updateWithBoxState:(WhiteWindowBoxState _Nullable)boxState;
- (void)setupWithRoom:(WhiteRoom * _Nonnull)room fastboardView:(FastRoomView * _Nonnull)fastboardView direction:(enum OperationBarDirection)direction;
- (void)updateControlBarLayoutWithDirection:(enum OperationBarDirection)direction;
- (void)initUIWithAppliance:(WhiteApplianceNameKey _Nullable)appliance shape:(WhiteApplianceShapeTypeKey _Nullable)shape SWIFT_METHOD_FAMILY(none);
- (void)updateWithStrokeColor:(UIColor * _Nonnull)strokeColor;
- (void)updateWithStrokeWidth:(float)strokeWidth;
- (void)updateWithPageState:(WhitePageState * _Nonnull)pageState;
- (void)updateWithUndoEnable:(BOOL)undoEnable;
- (void)updateWithRedoEnable:(BOOL)redoEnable;
- (void)setAllPanelWithHide:(BOOL)hide;
- (void)setPanelItemHideWithItem:(FastRoomDefaultOperationIdentifier * _Nonnull)item hide:(BOOL)hide;
- (void)itemWillBeExecutedWithFastPanel:(FastRoomPanel * _Nonnull)fastPanel item:(id <FastRoomOperationItem> _Nonnull)item;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface CompactFastRoomOverlay (SWIFT_EXTENSION(Fastboard))
@property (nonatomic, readonly, strong) FastRoomPanel * _Nonnull colorAndStrokePanel;
@property (nonatomic, readonly, strong) FastRoomPanel * _Nonnull operationPanel;
@property (nonatomic, readonly, strong) FastRoomPanel * _Nonnull deleteSelectionPanel;
@property (nonatomic, readonly, strong) FastRoomPanel * _Nonnull undoRedoPanel;
@property (nonatomic, readonly, strong) FastRoomPanel * _Nonnull scenePanel;
@end



@class WhiteSDK;
@protocol FastRoomDelegate;
@protocol WhiteCommonCallbackDelegate;
@protocol WhiteRoomCallbackDelegate;

/// Representing whiteboard object.
SWIFT_CLASS("_TtC9Fastboard8FastRoom")
@interface FastRoom : NSObject
/// Change this value to indicate if pencil will follow the system preference
/// And this variable will only effect on iPad (Which has no compact sizeClass)
/// Default is true
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) BOOL followSystemPencilBehavior;)
+ (BOOL)followSystemPencilBehavior SWIFT_WARN_UNUSED_RESULT;
+ (void)setFollowSystemPencilBehavior:(BOOL)value;
/// The view you should add to your viewController
@property (nonatomic, readonly, strong) FastRoomView * _Nonnull view;
/// The whiteSDK object, do not update it’s delegate directly
/// using ‘commonDelegate’ instead
@property (nonatomic, strong) WhiteSDK * _Null_unspecified whiteSDK;
/// The whiteRoom object, do not update it’s delegate directly
/// using ‘roomDelegate’ instead
@property (nonatomic, strong) WhiteRoom * _Nullable room;
/// The delegate of fastboard
/// Wrapped the whiteRoom and whiteSDK event
@property (nonatomic, weak) id <FastRoomDelegate> _Nullable delegate;
/// Proxy for whiteSDK delegate
@property (nonatomic, strong) id <WhiteCommonCallbackDelegate> _Nullable commonDelegate;
/// Proxy for whiteRoom delegate
@property (nonatomic, strong) id <WhiteRoomCallbackDelegate> _Nullable roomDelegate;
/// Call the method to join the whiteRoom
- (void)joinRoom;
- (void)disconnectRoom;
- (void)updateWritable:(BOOL)writable completion:(void (^ _Nullable)(NSError * _Nullable))completion;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class UIPencilInteraction;

@interface FastRoom (SWIFT_EXTENSION(Fastboard)) <UIPencilInteractionDelegate>
- (void)pencilInteractionDidTap:(UIPencilInteraction * _Nonnull)interaction SWIFT_AVAILABILITY(ios,introduced=12.1);
@end


@interface FastRoom (SWIFT_EXTENSION(Fastboard)) <WhiteCommonCallbackDelegate>
- (void)throwError:(NSError * _Nonnull)error;
- (void)sdkSetupFail:(NSError * _Nonnull)error;
@end


@interface FastRoom (SWIFT_EXTENSION(Fastboard)) <FastPanelControl>
- (void)dismissAllSubPanels;
- (void)setAllPanelWithHide:(BOOL)hide;
- (void)setPanelItemHideWithItem:(FastRoomDefaultOperationIdentifier * _Nonnull)item hide:(BOOL)hide;
@end


@class NSURL;
@class NSString;
@class WhitePptPage;

@interface FastRoom (SWIFT_EXTENSION(Fastboard))
/// Insert MP3 or MP4
/// \param src media source
///
/// \param title media title
///
/// \param completionHandler source id in whiteboard
///
- (void)insertMedia:(NSURL * _Nonnull)src title:(NSString * _Nonnull)title completionHandler:(void (^ _Nullable)(NSString * _Nonnull))completionHandler;
/// Insert image in current viewer’s center
/// \param src image source
///
/// \param imageSize image size
///
- (void)insertImg:(NSURL * _Nonnull)src imageSize:(CGSize)imageSize;
/// Insert pptx
/// \param pages pptx files. source, preview, and itemSize
///
/// \param title pptx’s title
///
/// \param completionHandler source id in whiteboard
///
- (void)insertPptx:(NSArray<WhitePptPage *> * _Nonnull)pages title:(NSString * _Nonnull)title completionHandler:(void (^ _Nullable)(NSString * _Nonnull))completionHandler;
- (void)insertPptxWithUuid:(NSString * _Nonnull)uuid url:(NSString * _Nonnull)url title:(NSString * _Nonnull)title completionHandler:(void (^ _Nullable)(NSString * _Nonnull))completionHandler;
/// Insert pdf, ppt, or doc
/// \param pages files. source, preview, and itemSize
///
/// \param title file title
///
/// \param completionHandler source id in whiteboard
///
- (void)insertStaticDocument:(NSArray<WhitePptPage *> * _Nonnull)pages title:(NSString * _Nonnull)title completionHandler:(void (^ _Nullable)(NSString * _Nonnull))completionHandler;
@end

@class WhiteRoomState;

@interface FastRoom (SWIFT_EXTENSION(Fastboard)) <WhiteRoomCallbackDelegate>
- (void)firePhaseChanged:(WhiteRoomPhase)phase;
- (void)fireRoomStateChanged:(WhiteRoomState * _Null_unspecified)modifyState;
- (void)fireDisconnectWithError:(NSString * _Null_unspecified)error;
- (void)fireKickedWithReason:(NSString * _Null_unspecified)reason;
- (void)fireCanUndoStepsUpdate:(NSInteger)canUndoSteps;
- (void)fireCanRedoStepsUpdate:(NSInteger)canRedoSteps;
@end

@class WhiteSdkConfiguration;
@class WhiteRoomConfig;
enum FastRegion : NSInteger;
@class FastUserPayload;

/// Contains the parameters for creating the Fastboard
SWIFT_CLASS("_TtC9Fastboard21FastRoomConfiguration")
@interface FastRoomConfiguration : NSObject
/// Update whiteSDK configuration for detail here
@property (nonatomic, readonly, strong) WhiteSdkConfiguration * _Nonnull whiteSdkConfiguration;
/// Update whiteRoom configuration for detail here
@property (nonatomic, readonly, strong) WhiteRoomConfig * _Nonnull whiteRoomConfig;
/// Assign a custom overlay to create your own overlay style
@property (nonatomic, strong) id <FastRoomOverlay> _Nullable customOverlay;
/// Create FastConfiguration
/// \param appIdentifier The only identifier for Fastboard. See <a href="https://docs.agora.io/cn/whiteboard/enable_whiteboard?platform=iOS#%E8%8E%B7%E5%8F%96-app-identifier">Fetch App Identifier</a>.
///
/// \param roomUUID Identifier for the room.
///
/// \param roomToken For room authentication.
///
/// \param region Data center.
///
/// \param userUID User identifier. Can be any string.
///
- (nonnull instancetype)initWithAppIdentifier:(NSString * _Nonnull)appIdentifier roomUUID:(NSString * _Nonnull)roomUUID roomToken:(NSString * _Nonnull)roomToken region:(enum FastRegion)region userUID:(NSString * _Nonnull)userUID userPayload:(FastUserPayload * _Nullable)userPayload OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER SWIFT_DEPRECATED_MSG("use the designed init instead");
@end

@class NSCoder;

/// The ToolBar in fastboard
/// All the views inserted in this container should not update the button isHidden property
/// call ‘updateButtonHide’
SWIFT_CLASS("_TtC9Fastboard18FastRoomControlBar")
@interface FastRoomControlBar : UIView
@property (nonatomic) CGFloat itemWidth;
@property (nonatomic) CGFloat borderWidth;
@property (nonatomic) CGFloat commonRadius;
@property (nonatomic, readonly) CGSize intrinsicContentSize;
@property (nonatomic) enum UILayoutConstraintAxis direction;
@property (nonatomic) CACornerMask borderMask;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
- (void)layoutSubviews;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end

@class UIBlurEffect;

/// Represents controlBar theme style
SWIFT_CLASS("_TtC9Fastboard24FastRoomControlBarAssets")
@interface FastRoomControlBarAssets : NSObject
- (nonnull instancetype)initWithBackgroundColor:(UIColor * _Nonnull)backgroundColor borderColor:(UIColor * _Nonnull)borderColor effectStyle:(UIBlurEffect * _Nullable)effectStyle OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, strong) UIColor * _Nonnull backgroundColor;
@property (nonatomic, strong) UIColor * _Nonnull borderColor;
@property (nonatomic, strong) UIBlurEffect * _Nullable effectStyle;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

enum FastRoomDefaultOperationType : NSInteger;

SWIFT_CLASS("_TtC9Fastboard34FastRoomDefaultOperationIdentifier")
@interface FastRoomDefaultOperationIdentifier : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@property (nonatomic, readonly, copy) NSString * _Nonnull identifier;
+ (FastRoomDefaultOperationIdentifier * _Nonnull)appliceWithKey:(WhiteApplianceNameKey _Nonnull)key shape:(WhiteApplianceShapeTypeKey _Nullable)shape SWIFT_WARN_UNUSED_RESULT;
+ (FastRoomDefaultOperationIdentifier * _Nonnull)color:(UIColor * _Nonnull)color SWIFT_WARN_UNUSED_RESULT;
+ (FastRoomDefaultOperationIdentifier * _Nullable)operationType:(enum FastRoomDefaultOperationType)type SWIFT_WARN_UNUSED_RESULT;
@end


/// Include built-in operationItems
SWIFT_CLASS("_TtC9Fastboard28FastRoomDefaultOperationItem")
@interface FastRoomDefaultOperationItem : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, copy) NSArray<UIColor *> * _Nonnull defaultColors;)
+ (NSArray<UIColor *> * _Nonnull)defaultColors SWIFT_WARN_UNUSED_RESULT;
+ (void)setDefaultColors:(NSArray<UIColor *> * _Nonnull)value;
+ (id <FastRoomOperationItem> _Nonnull)clean SWIFT_WARN_UNUSED_RESULT;
+ (id <FastRoomOperationItem> _Nonnull)deleteSelectionItem SWIFT_WARN_UNUSED_RESULT;
+ (id <FastRoomOperationItem> _Nonnull)strokeWidthItem SWIFT_WARN_UNUSED_RESULT;
+ (id <FastRoomOperationItem> _Nonnull)redoItem SWIFT_WARN_UNUSED_RESULT;
+ (id <FastRoomOperationItem> _Nonnull)undoItem SWIFT_WARN_UNUSED_RESULT;
+ (id <FastRoomOperationItem> _Nonnull)previousPageItem SWIFT_WARN_UNUSED_RESULT;
+ (id <FastRoomOperationItem> _Nonnull)nextPageItem SWIFT_WARN_UNUSED_RESULT;
+ (id <FastRoomOperationItem> _Nonnull)newPageItem SWIFT_WARN_UNUSED_RESULT;
+ (id <FastRoomOperationItem> _Nonnull)selectableApplianceItem:(WhiteApplianceNameKey _Nonnull)appliance shape:(WhiteApplianceShapeTypeKey _Nullable)shape SWIFT_WARN_UNUSED_RESULT;
+ (id <FastRoomOperationItem> _Nonnull)pageIndicatorItem SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

typedef SWIFT_ENUM(NSInteger, FastRoomDefaultOperationType, open) {
  FastRoomDefaultOperationTypeAppliance = 0,
  FastRoomDefaultOperationTypeShape = 1,
  FastRoomDefaultOperationTypeColor = 2,
  FastRoomDefaultOperationTypeDeleteSelection = 3,
  FastRoomDefaultOperationTypeStrokeWidth = 4,
  FastRoomDefaultOperationTypeClean = 5,
  FastRoomDefaultOperationTypeRedo = 6,
  FastRoomDefaultOperationTypeUndo = 7,
  FastRoomDefaultOperationTypeNewPage = 8,
  FastRoomDefaultOperationTypePreviousPage = 9,
  FastRoomDefaultOperationTypeNextPage = 10,
  FastRoomDefaultOperationTypePageIndicator = 11,
};

@class FastRoomThemeAsset;

/// Include built-in themes style for fastboard
SWIFT_CLASS("_TtC9Fastboard20FastRoomDefaultTheme")
@interface FastRoomDefaultTheme : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) FastRoomThemeAsset * _Nonnull defaultLightTheme;)
+ (FastRoomThemeAsset * _Nonnull)defaultLightTheme SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) FastRoomThemeAsset * _Nonnull defaultDarkTheme;)
+ (FastRoomThemeAsset * _Nonnull)defaultDarkTheme SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) FastRoomThemeAsset * _Nonnull defaultAutoTheme SWIFT_AVAILABILITY(ios,introduced=13);)
+ (FastRoomThemeAsset * _Nonnull)defaultAutoTheme SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class FastRoomError;

/// Represents the fastboard behavior
SWIFT_PROTOCOL("_TtP9Fastboard16FastRoomDelegate_")
@protocol FastRoomDelegate
- (void)fastboardDidJoinRoomSuccess:(FastRoom * _Nonnull)fastboard room:(WhiteRoom * _Nonnull)room;
- (void)fastboardDidOccurError:(FastRoom * _Nonnull)fastboard error:(FastRoomError * _Nonnull)error;
- (void)fastboardUserKickedOut:(FastRoom * _Nonnull)fastboard reason:(NSString * _Nonnull)reason;
- (void)fastboardPhaseDidUpdate:(FastRoom * _Nonnull)fastboard phase:(enum FastRoomPhase)phase;
@optional
- (void)fastboardDidSetupOverlay:(FastRoom * _Nonnull)fastboard overlay:(id <FastRoomOverlay> _Nullable)overlay;
@end


SWIFT_CLASS("_TtC9Fastboard13FastRoomError")
@interface FastRoomError : NSError
@property (nonatomic, readonly, copy) NSString * _Nonnull localizedDescription;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithDomain:(NSString * _Nonnull)domain code:(NSInteger)code userInfo:(NSDictionary<NSString *, id> * _Nullable)dict SWIFT_UNAVAILABLE;
@end

typedef SWIFT_ENUM(NSInteger, FastRoomErrorType, open) {
  FastRoomErrorTypeSetupSDK = 0,
  FastRoomErrorTypeJoinRoom = 1000,
  FastRoomErrorTypeDisconnected = 2000,
};


SWIFT_PROTOCOL("_TtP9Fastboard21FastRoomOperationItem_")
@protocol FastRoomOperationItem
@property (nonatomic, readonly, copy) void (^ _Nonnull action)(WhiteRoom * _Nonnull, id _Nullable);
@property (nonatomic, strong) WhiteRoom * _Nullable room;
@property (nonatomic, readonly, strong) UIView * _Nullable associatedView;
@property (nonatomic, readonly, copy) NSString * _Nullable identifier;
- (UIView * _Nonnull)buildViewWithInterrupter:(void (^ _Nullable)(id <FastRoomOperationItem> _Nonnull))interrupter SWIFT_WARN_UNUSED_RESULT;
- (void)setEnable:(BOOL)enable;
@end



/// The controller of a set of FastOperationItems
/// It always contains a controlBar
SWIFT_CLASS("_TtC9Fastboard13FastRoomPanel")
@interface FastRoomPanel : NSObject
- (nonnull instancetype)initWithItems:(NSArray<id <FastRoomOperationItem>> * _Nonnull)items OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, readonly, copy) NSArray<id <FastRoomOperationItem>> * _Nonnull flatItems;
@property (nonatomic, copy) NSArray<id <FastRoomOperationItem>> * _Nonnull items;
@property (nonatomic, weak) id <FastPanelDelegate> _Nullable delegate;
@property (nonatomic, weak) FastRoomControlBar * _Nullable view;
- (void)setItemHideFromKey:(FastRoomDefaultOperationIdentifier * _Nonnull)key hide:(BOOL)hide;
- (void)deselectAll;
- (void)updateStrokeWidth:(float)width;
- (void)updateSelectedColor:(UIColor * _Nonnull)color;
- (void)updateWithApplianceOutside:(WhiteApplianceNameKey _Nonnull)appliance shape:(WhiteApplianceShapeTypeKey _Nullable)shape;
- (FastRoomControlBar * _Nonnull)setupWithRoom:(WhiteRoom * _Nonnull)room direction:(enum UILayoutConstraintAxis)direction mask:(CACornerMask)mask SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// Represents panelItem theme style
SWIFT_CLASS("_TtC9Fastboard23FastRoomPanelItemAssets")
@interface FastRoomPanelItemAssets : NSObject
- (nonnull instancetype)initWithNormalIconColor:(UIColor * _Nonnull)normalIconColor selectedIconColor:(UIColor * _Nonnull)selectedIconColor selectedIconBgColor:(UIColor * _Nonnull)selectedIconBgColor highlightColor:(UIColor * _Nonnull)highlightColor highlightBgColor:(UIColor * _Nonnull)highlightBgColor disableColor:(UIColor * _Nonnull)disableColor subOpsIndicatorColor:(UIColor * _Nonnull)subOpsIndicatorColor pageTextLabelColor:(UIColor * _Nonnull)pageTextLabelColor selectedBackgroundCornerradius:(CGFloat)selectedBackgroundCornerradius selectedBackgroundEdgeinset:(UIEdgeInsets)selectedBackgroundEdgeinset OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic) CGFloat selectedBackgroundCornerRadius;
@property (nonatomic) UIEdgeInsets selectedBackgroundEdgeinset;
@property (nonatomic, strong) UIColor * _Nonnull normalIconColor;
@property (nonatomic, strong) UIColor * _Nonnull selectedIconColor;
@property (nonatomic, strong) UIColor * _Nonnull selectedIconBgColor;
@property (nonatomic, strong) UIColor * _Nonnull highlightColor;
@property (nonatomic, strong) UIColor * _Nonnull highlightBgColor;
@property (nonatomic, strong) UIColor * _Nonnull disableColor;
@property (nonatomic, strong) UIColor * _Nonnull subOpsIndicatorColor;
@property (nonatomic, strong) UIColor * _Nonnull pageTextLabelColor;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class UIImage;
@class UITraitCollection;

/// Represents a operationItem as a view
SWIFT_CLASS("_TtC9Fastboard23FastRoomPanelItemButton")
@interface FastRoomPanelItemButton : UIButton
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, getter=isSelected) BOOL selected;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic) UIEdgeInsets indicatorInset;
@property (nonatomic, strong) UIImage * _Nullable rawImage;
@property (nonatomic, strong) UIImage * _Nullable rawSelectedImage;
- (void)traitCollectionDidChange:(UITraitCollection * _Nullable)previousTraitCollection;
- (void)layoutSubviews;
@end

typedef SWIFT_ENUM(NSInteger, FastRoomPhase, open) {
  FastRoomPhaseConnecting = 0,
  FastRoomPhaseConnected = 1,
  FastRoomPhaseReconnecting = 2,
  FastRoomPhaseDisconnecting = 3,
  FastRoomPhaseDisconnected = 4,
  FastRoomPhaseUnknown = 5,
};

@class FastRoomWhiteboardAssets;

/// Represents fastboard theme style
SWIFT_CLASS("_TtC9Fastboard18FastRoomThemeAsset")
@interface FastRoomThemeAsset : NSObject
- (nonnull instancetype)initWithWhiteboardAssets:(FastRoomWhiteboardAssets * _Nonnull)whiteboardAssets controlBarAssets:(FastRoomControlBarAssets * _Nonnull)controlBarAssets panelItemAssets:(FastRoomPanelItemAssets * _Nonnull)panelItemAssets OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, strong) FastRoomWhiteboardAssets * _Nonnull whiteboardAssets;
@property (nonatomic, strong) FastRoomControlBarAssets * _Nonnull controlBarAssets;
@property (nonatomic, strong) FastRoomPanelItemAssets * _Nonnull panelItemAssets;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class NSBundle;

/// Manage the fastboard theme style
SWIFT_CLASS("_TtC9Fastboard20FastRoomThemeManager")
@interface FastRoomThemeManager : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) FastRoomThemeManager * _Nonnull shared;)
+ (FastRoomThemeManager * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
/// You should call it before fastboard create
- (void)updateIconsUsing:(NSBundle * _Nonnull)bundle;
- (void)apply:(FastRoomThemeAsset * _Nonnull)theme;
@end

@class WhiteBoardView;

/// Main view for fastboard
SWIFT_CLASS("_TtC9Fastboard12FastRoomView")
@interface FastRoomView : UIView <FastPanelControl>
@property (nonatomic) enum OperationBarDirection operationBarDirection;
@property (nonatomic, strong) id <FastRoomOverlay> _Nullable overlay;
- (nonnull instancetype)initWithOverlay:(id <FastRoomOverlay> _Nullable)overlay OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
- (void)layoutSubviews;
@property (nonatomic, strong) WhiteBoardView * _Null_unspecified whiteboardView;
- (void)setAllPanelWithHide:(BOOL)hide;
- (void)setPanelItemHideWithItem:(FastRoomDefaultOperationIdentifier * _Nonnull)item hide:(BOOL)hide;
- (void)dismissAllSubPanels;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end



/// Represents whiteboard theme style
SWIFT_CLASS("_TtC9Fastboard24FastRoomWhiteboardAssets")
@interface FastRoomWhiteboardAssets : NSObject
- (nonnull instancetype)initWithWhiteboardBackgroundColor:(UIColor * _Nonnull)whiteboardBackgroundColor containerColor:(UIColor * _Nonnull)containerColor OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, strong) UIColor * _Nonnull whiteboardBackgroundColor;
@property (nonatomic, strong) UIColor * _Nonnull containerColor;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// Represents the user info display no whiteboard cursor
SWIFT_CLASS("_TtC9Fastboard15FastUserPayload")
@interface FastUserPayload : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC9Fastboard9Fastboard")
@interface Fastboard : NSObject
/// Change this to update the whiteRoom ratio and whiteboardView ratio
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) CGFloat globalFastboardRatio;)
+ (CGFloat)globalFastboardRatio SWIFT_WARN_UNUSED_RESULT;
+ (void)setGlobalFastboardRatio:(CGFloat)value;
+ (FastRoom * _Nonnull)createFastRoomWithFastRoomConfig:(FastRoomConfiguration * _Nonnull)config SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

typedef SWIFT_ENUM(NSInteger, OperationBarDirection, open) {
  OperationBarDirectionLeft = 0,
  OperationBarDirectionRight = 1,
};

/// Data Center
typedef SWIFT_ENUM_NAMED(NSInteger, FastRegion, "Region", open) {
/// China
  FastRegionCN = 0,
/// USA
  FastRegionUS = 1,
/// Singapore
  FastRegionSG = 2,
/// India
  FastRegionIN = 3,
/// England
  FastRegionGB = 4,
};


/// Overlay for iPad
SWIFT_CLASS("_TtC9Fastboard22RegularFastRoomOverlay")
@interface RegularFastRoomOverlay : NSObject <FastPanelDelegate, FastRoomOverlay>
/// Indicate whether an UIActivityIndicatorView should be add to Fastboard in bad network environment
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) BOOL showActivityIndicatorWhenReconnecting;)
+ (BOOL)showActivityIndicatorWhenReconnecting SWIFT_WARN_UNUSED_RESULT;
+ (void)setShowActivityIndicatorWhenReconnecting:(BOOL)value;
- (void)updateWithRoomPhase:(enum FastRoomPhase)roomPhase;
- (void)respondToPencilTap:(UIPencilPreferredAction)pencilTap SWIFT_AVAILABILITY(ios,introduced=12.1);
- (void)dismissAllSubPanels;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, copy) FastRoomPanel * _Nonnull (^ _Nullable customOperationPanel)(void);)
+ (FastRoomPanel * _Nonnull (^ _Nullable)(void))customOperationPanel SWIFT_WARN_UNUSED_RESULT;
+ (void)setCustomOperationPanel:(FastRoomPanel * _Nonnull (^ _Nullable)(void))value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, copy) NSArray<id <FastRoomOperationItem>> * _Nonnull shapeItems;)
+ (NSArray<id <FastRoomOperationItem>> * _Nonnull)shapeItems SWIFT_WARN_UNUSED_RESULT;
+ (void)setShapeItems:(NSArray<id <FastRoomOperationItem>> * _Nonnull)value;
- (void)invalidAllLayout;
- (void)updateWithBoxState:(WhiteWindowBoxState _Nullable)boxState;
- (void)setupWithRoom:(WhiteRoom * _Nonnull)room fastboardView:(FastRoomView * _Nonnull)fastboardView direction:(enum OperationBarDirection)direction;
- (void)updateControlBarLayoutWithDirection:(enum OperationBarDirection)direction;
- (void)initUIWithAppliance:(WhiteApplianceNameKey _Nullable)appliance shape:(WhiteApplianceShapeTypeKey _Nullable)shape SWIFT_METHOD_FAMILY(none);
- (void)updateWithStrokeColor:(UIColor * _Nonnull)strokeColor;
- (void)updateWithStrokeWidth:(float)strokeWidth;
- (void)updateWithPageState:(WhitePageState * _Nonnull)pageState;
- (void)updateWithUndoEnable:(BOOL)undoEnable;
- (void)updateWithRedoEnable:(BOOL)redoEnable;
- (void)setAllPanelWithHide:(BOOL)hide;
- (void)setPanelItemHideWithItem:(FastRoomDefaultOperationIdentifier * _Nonnull)item hide:(BOOL)hide;
- (void)itemWillBeExecutedWithFastPanel:(FastRoomPanel * _Nonnull)fastPanel item:(id <FastRoomOperationItem> _Nonnull)item;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface RegularFastRoomOverlay (SWIFT_EXTENSION(Fastboard))
@property (nonatomic, readonly, strong) FastRoomPanel * _Nonnull operationPanel;
@property (nonatomic, readonly, strong) FastRoomPanel * _Nonnull deleteSelectionPanel;
@property (nonatomic, readonly, strong) FastRoomPanel * _Nonnull undoRedoPanel;
@property (nonatomic, readonly, strong) FastRoomPanel * _Nonnull scenePanel;
@end


SWIFT_CLASS("_TtC9Fastboard10SubOpsItem")
@interface SubOpsItem : NSObject <FastRoomOperationItem>
- (nonnull instancetype)initWithSubOps:(NSArray<id <FastRoomOperationItem>> * _Nonnull)subOps OBJC_DESIGNATED_INITIALIZER;
- (void)setEnable:(BOOL)enable;
@property (nonatomic, copy) NSString * _Nullable identifier;
@property (nonatomic, copy) void (^ _Nonnull action)(WhiteRoom * _Nonnull, id _Nullable);
@property (nonatomic, weak) UIView * _Nullable associatedView;
@property (nonatomic, weak) WhiteRoom * _Nullable room;
- (UIView * _Nonnull)buildViewWithInterrupter:(void (^ _Nullable)(id <FastRoomOperationItem> _Nonnull))interrupter SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end












#endif
#if defined(__cplusplus)
#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
