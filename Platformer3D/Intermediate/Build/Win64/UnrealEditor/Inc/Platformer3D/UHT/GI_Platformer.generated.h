// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/GameSettings/GI_Platformer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UButton;
#ifdef PLATFORMER3D_GI_Platformer_generated_h
#error "GI_Platformer.generated.h already included, missing '#pragma once' in GI_Platformer.h"
#endif
#define PLATFORMER3D_GI_Platformer_generated_h

#define FID_Platformer3D_Source_Platformer3D_Public_Core_GameSettings_GI_Platformer_h_15_SPARSE_DATA
#define FID_Platformer3D_Source_Platformer3D_Public_Core_GameSettings_GI_Platformer_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Platformer3D_Source_Platformer3D_Public_Core_GameSettings_GI_Platformer_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Platformer3D_Source_Platformer3D_Public_Core_GameSettings_GI_Platformer_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetLastFocusedButton); \
	DECLARE_FUNCTION(execSetLastFocusedButton);


#define FID_Platformer3D_Source_Platformer3D_Public_Core_GameSettings_GI_Platformer_h_15_ACCESSORS
#define FID_Platformer3D_Source_Platformer3D_Public_Core_GameSettings_GI_Platformer_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGI_Platformer(); \
	friend struct Z_Construct_UClass_UGI_Platformer_Statics; \
public: \
	DECLARE_CLASS(UGI_Platformer, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Platformer3D"), NO_API) \
	DECLARE_SERIALIZER(UGI_Platformer)


#define FID_Platformer3D_Source_Platformer3D_Public_Core_GameSettings_GI_Platformer_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGI_Platformer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGI_Platformer(UGI_Platformer&&); \
	NO_API UGI_Platformer(const UGI_Platformer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGI_Platformer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGI_Platformer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGI_Platformer) \
	NO_API virtual ~UGI_Platformer();


#define FID_Platformer3D_Source_Platformer3D_Public_Core_GameSettings_GI_Platformer_h_12_PROLOG
#define FID_Platformer3D_Source_Platformer3D_Public_Core_GameSettings_GI_Platformer_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Platformer3D_Source_Platformer3D_Public_Core_GameSettings_GI_Platformer_h_15_SPARSE_DATA \
	FID_Platformer3D_Source_Platformer3D_Public_Core_GameSettings_GI_Platformer_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Platformer3D_Source_Platformer3D_Public_Core_GameSettings_GI_Platformer_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Platformer3D_Source_Platformer3D_Public_Core_GameSettings_GI_Platformer_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Platformer3D_Source_Platformer3D_Public_Core_GameSettings_GI_Platformer_h_15_ACCESSORS \
	FID_Platformer3D_Source_Platformer3D_Public_Core_GameSettings_GI_Platformer_h_15_INCLASS_NO_PURE_DECLS \
	FID_Platformer3D_Source_Platformer3D_Public_Core_GameSettings_GI_Platformer_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMER3D_API UClass* StaticClass<class UGI_Platformer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Platformer3D_Source_Platformer3D_Public_Core_GameSettings_GI_Platformer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
