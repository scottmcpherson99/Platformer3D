// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/Characters/Player/HUD_Player.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInGameHUD;
#ifdef PLATFORMER3D_HUD_Player_generated_h
#error "HUD_Player.generated.h already included, missing '#pragma once' in HUD_Player.h"
#endif
#define PLATFORMER3D_HUD_Player_generated_h

#define FID_Platformer3D_Source_Platformer3D_Public_Core_Characters_Player_HUD_Player_h_15_SPARSE_DATA
#define FID_Platformer3D_Source_Platformer3D_Public_Core_Characters_Player_HUD_Player_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Platformer3D_Source_Platformer3D_Public_Core_Characters_Player_HUD_Player_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Platformer3D_Source_Platformer3D_Public_Core_Characters_Player_HUD_Player_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHUDWidget); \
	DECLARE_FUNCTION(execHideInGameHUD); \
	DECLARE_FUNCTION(execShowInGameHUD);


#define FID_Platformer3D_Source_Platformer3D_Public_Core_Characters_Player_HUD_Player_h_15_ACCESSORS
#define FID_Platformer3D_Source_Platformer3D_Public_Core_Characters_Player_HUD_Player_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHUD_Player(); \
	friend struct Z_Construct_UClass_AHUD_Player_Statics; \
public: \
	DECLARE_CLASS(AHUD_Player, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer3D"), NO_API) \
	DECLARE_SERIALIZER(AHUD_Player)


#define FID_Platformer3D_Source_Platformer3D_Public_Core_Characters_Player_HUD_Player_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHUD_Player(AHUD_Player&&); \
	NO_API AHUD_Player(const AHUD_Player&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHUD_Player); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHUD_Player); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHUD_Player) \
	NO_API virtual ~AHUD_Player();


#define FID_Platformer3D_Source_Platformer3D_Public_Core_Characters_Player_HUD_Player_h_12_PROLOG
#define FID_Platformer3D_Source_Platformer3D_Public_Core_Characters_Player_HUD_Player_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Platformer3D_Source_Platformer3D_Public_Core_Characters_Player_HUD_Player_h_15_SPARSE_DATA \
	FID_Platformer3D_Source_Platformer3D_Public_Core_Characters_Player_HUD_Player_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Platformer3D_Source_Platformer3D_Public_Core_Characters_Player_HUD_Player_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Platformer3D_Source_Platformer3D_Public_Core_Characters_Player_HUD_Player_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Platformer3D_Source_Platformer3D_Public_Core_Characters_Player_HUD_Player_h_15_ACCESSORS \
	FID_Platformer3D_Source_Platformer3D_Public_Core_Characters_Player_HUD_Player_h_15_INCLASS_NO_PURE_DECLS \
	FID_Platformer3D_Source_Platformer3D_Public_Core_Characters_Player_HUD_Player_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMER3D_API UClass* StaticClass<class AHUD_Player>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Platformer3D_Source_Platformer3D_Public_Core_Characters_Player_HUD_Player_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
