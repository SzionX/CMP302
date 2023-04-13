// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CMP302_UNREAL_CMP302_UnrealCharacter_generated_h
#error "CMP302_UnrealCharacter.generated.h already included, missing '#pragma once' in CMP302_UnrealCharacter.h"
#endif
#define CMP302_UNREAL_CMP302_UnrealCharacter_generated_h

#define FID_CMP302_Unreal_Source_CMP302_Unreal_CMP302_UnrealCharacter_h_18_DELEGATE \
static inline void FOnUseItem_DelegateWrapper(const FMulticastScriptDelegate& OnUseItem) \
{ \
	OnUseItem.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_CMP302_Unreal_Source_CMP302_Unreal_CMP302_UnrealCharacter_h_23_SPARSE_DATA
#define FID_CMP302_Unreal_Source_CMP302_Unreal_CMP302_UnrealCharacter_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCloudburst); \
	DECLARE_FUNCTION(execUpdraft); \
	DECLARE_FUNCTION(execTailwind); \
	DECLARE_FUNCTION(execDrift); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveForward);


#define FID_CMP302_Unreal_Source_CMP302_Unreal_CMP302_UnrealCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCloudburst); \
	DECLARE_FUNCTION(execUpdraft); \
	DECLARE_FUNCTION(execTailwind); \
	DECLARE_FUNCTION(execDrift); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveForward);


#define FID_CMP302_Unreal_Source_CMP302_Unreal_CMP302_UnrealCharacter_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACMP302_UnrealCharacter(); \
	friend struct Z_Construct_UClass_ACMP302_UnrealCharacter_Statics; \
public: \
	DECLARE_CLASS(ACMP302_UnrealCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CMP302_Unreal"), NO_API) \
	DECLARE_SERIALIZER(ACMP302_UnrealCharacter)


#define FID_CMP302_Unreal_Source_CMP302_Unreal_CMP302_UnrealCharacter_h_23_INCLASS \
private: \
	static void StaticRegisterNativesACMP302_UnrealCharacter(); \
	friend struct Z_Construct_UClass_ACMP302_UnrealCharacter_Statics; \
public: \
	DECLARE_CLASS(ACMP302_UnrealCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CMP302_Unreal"), NO_API) \
	DECLARE_SERIALIZER(ACMP302_UnrealCharacter)


#define FID_CMP302_Unreal_Source_CMP302_Unreal_CMP302_UnrealCharacter_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACMP302_UnrealCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACMP302_UnrealCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACMP302_UnrealCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACMP302_UnrealCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACMP302_UnrealCharacter(ACMP302_UnrealCharacter&&); \
	NO_API ACMP302_UnrealCharacter(const ACMP302_UnrealCharacter&); \
public:


#define FID_CMP302_Unreal_Source_CMP302_Unreal_CMP302_UnrealCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACMP302_UnrealCharacter(ACMP302_UnrealCharacter&&); \
	NO_API ACMP302_UnrealCharacter(const ACMP302_UnrealCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACMP302_UnrealCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACMP302_UnrealCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACMP302_UnrealCharacter)


#define FID_CMP302_Unreal_Source_CMP302_Unreal_CMP302_UnrealCharacter_h_20_PROLOG
#define FID_CMP302_Unreal_Source_CMP302_Unreal_CMP302_UnrealCharacter_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CMP302_Unreal_Source_CMP302_Unreal_CMP302_UnrealCharacter_h_23_SPARSE_DATA \
	FID_CMP302_Unreal_Source_CMP302_Unreal_CMP302_UnrealCharacter_h_23_RPC_WRAPPERS \
	FID_CMP302_Unreal_Source_CMP302_Unreal_CMP302_UnrealCharacter_h_23_INCLASS \
	FID_CMP302_Unreal_Source_CMP302_Unreal_CMP302_UnrealCharacter_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CMP302_Unreal_Source_CMP302_Unreal_CMP302_UnrealCharacter_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CMP302_Unreal_Source_CMP302_Unreal_CMP302_UnrealCharacter_h_23_SPARSE_DATA \
	FID_CMP302_Unreal_Source_CMP302_Unreal_CMP302_UnrealCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CMP302_Unreal_Source_CMP302_Unreal_CMP302_UnrealCharacter_h_23_INCLASS_NO_PURE_DECLS \
	FID_CMP302_Unreal_Source_CMP302_Unreal_CMP302_UnrealCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CMP302_UNREAL_API UClass* StaticClass<class ACMP302_UnrealCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CMP302_Unreal_Source_CMP302_Unreal_CMP302_UnrealCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
