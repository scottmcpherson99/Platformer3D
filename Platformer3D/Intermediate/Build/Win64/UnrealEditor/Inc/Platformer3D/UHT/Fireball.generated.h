// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/Projectiles/Fireball.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ABaseCharacter;
class UPrimitiveComponent;
struct FHitResult;
#ifdef PLATFORMER3D_Fireball_generated_h
#error "Fireball.generated.h already included, missing '#pragma once' in Fireball.h"
#endif
#define PLATFORMER3D_Fireball_generated_h

#define FID_Platformer3D_Source_Platformer3D_Public_Core_Projectiles_Fireball_h_12_SPARSE_DATA
#define FID_Platformer3D_Source_Platformer3D_Public_Core_Projectiles_Fireball_h_12_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Platformer3D_Source_Platformer3D_Public_Core_Projectiles_Fireball_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Platformer3D_Source_Platformer3D_Public_Core_Projectiles_Fireball_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_Platformer3D_Source_Platformer3D_Public_Core_Projectiles_Fireball_h_12_ACCESSORS
#define FID_Platformer3D_Source_Platformer3D_Public_Core_Projectiles_Fireball_h_12_CALLBACK_WRAPPERS
#define FID_Platformer3D_Source_Platformer3D_Public_Core_Projectiles_Fireball_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFireball(); \
	friend struct Z_Construct_UClass_AFireball_Statics; \
public: \
	DECLARE_CLASS(AFireball, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer3D"), NO_API) \
	DECLARE_SERIALIZER(AFireball)


#define FID_Platformer3D_Source_Platformer3D_Public_Core_Projectiles_Fireball_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFireball(AFireball&&); \
	NO_API AFireball(const AFireball&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFireball); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFireball); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFireball) \
	NO_API virtual ~AFireball();


#define FID_Platformer3D_Source_Platformer3D_Public_Core_Projectiles_Fireball_h_9_PROLOG
#define FID_Platformer3D_Source_Platformer3D_Public_Core_Projectiles_Fireball_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Platformer3D_Source_Platformer3D_Public_Core_Projectiles_Fireball_h_12_SPARSE_DATA \
	FID_Platformer3D_Source_Platformer3D_Public_Core_Projectiles_Fireball_h_12_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Platformer3D_Source_Platformer3D_Public_Core_Projectiles_Fireball_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Platformer3D_Source_Platformer3D_Public_Core_Projectiles_Fireball_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Platformer3D_Source_Platformer3D_Public_Core_Projectiles_Fireball_h_12_ACCESSORS \
	FID_Platformer3D_Source_Platformer3D_Public_Core_Projectiles_Fireball_h_12_CALLBACK_WRAPPERS \
	FID_Platformer3D_Source_Platformer3D_Public_Core_Projectiles_Fireball_h_12_INCLASS_NO_PURE_DECLS \
	FID_Platformer3D_Source_Platformer3D_Public_Core_Projectiles_Fireball_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMER3D_API UClass* StaticClass<class AFireball>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Platformer3D_Source_Platformer3D_Public_Core_Projectiles_Fireball_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
