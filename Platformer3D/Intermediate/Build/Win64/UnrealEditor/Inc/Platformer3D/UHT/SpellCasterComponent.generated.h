// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/AbilitySystem/SpellCasterComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ABaseCharacter;
class UNiagaraSystem;
#ifdef PLATFORMER3D_SpellCasterComponent_generated_h
#error "SpellCasterComponent.generated.h already included, missing '#pragma once' in SpellCasterComponent.h"
#endif
#define PLATFORMER3D_SpellCasterComponent_generated_h

#define FID_Platformer3D_Source_Platformer3D_Public_Core_AbilitySystem_SpellCasterComponent_h_13_SPARSE_DATA
#define FID_Platformer3D_Source_Platformer3D_Public_Core_AbilitySystem_SpellCasterComponent_h_13_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Platformer3D_Source_Platformer3D_Public_Core_AbilitySystem_SpellCasterComponent_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Platformer3D_Source_Platformer3D_Public_Core_AbilitySystem_SpellCasterComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCastFireball); \
	DECLARE_FUNCTION(execBasicAttack);


#define FID_Platformer3D_Source_Platformer3D_Public_Core_AbilitySystem_SpellCasterComponent_h_13_ACCESSORS
#define FID_Platformer3D_Source_Platformer3D_Public_Core_AbilitySystem_SpellCasterComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpellCasterComponent(); \
	friend struct Z_Construct_UClass_USpellCasterComponent_Statics; \
public: \
	DECLARE_CLASS(USpellCasterComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer3D"), NO_API) \
	DECLARE_SERIALIZER(USpellCasterComponent)


#define FID_Platformer3D_Source_Platformer3D_Public_Core_AbilitySystem_SpellCasterComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpellCasterComponent(USpellCasterComponent&&); \
	NO_API USpellCasterComponent(const USpellCasterComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpellCasterComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpellCasterComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USpellCasterComponent) \
	NO_API virtual ~USpellCasterComponent();


#define FID_Platformer3D_Source_Platformer3D_Public_Core_AbilitySystem_SpellCasterComponent_h_10_PROLOG
#define FID_Platformer3D_Source_Platformer3D_Public_Core_AbilitySystem_SpellCasterComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Platformer3D_Source_Platformer3D_Public_Core_AbilitySystem_SpellCasterComponent_h_13_SPARSE_DATA \
	FID_Platformer3D_Source_Platformer3D_Public_Core_AbilitySystem_SpellCasterComponent_h_13_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Platformer3D_Source_Platformer3D_Public_Core_AbilitySystem_SpellCasterComponent_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Platformer3D_Source_Platformer3D_Public_Core_AbilitySystem_SpellCasterComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Platformer3D_Source_Platformer3D_Public_Core_AbilitySystem_SpellCasterComponent_h_13_ACCESSORS \
	FID_Platformer3D_Source_Platformer3D_Public_Core_AbilitySystem_SpellCasterComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_Platformer3D_Source_Platformer3D_Public_Core_AbilitySystem_SpellCasterComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMER3D_API UClass* StaticClass<class USpellCasterComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Platformer3D_Source_Platformer3D_Public_Core_AbilitySystem_SpellCasterComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
