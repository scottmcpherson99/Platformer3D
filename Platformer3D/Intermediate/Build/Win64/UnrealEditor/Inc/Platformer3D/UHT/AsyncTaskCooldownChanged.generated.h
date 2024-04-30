// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/AbilitySystem/AsyncTasks/AsyncTaskCooldownChanged.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilitySystemComponent;
class UAsyncTaskCooldownChanged;
struct FGameplayTag;
struct FGameplayTagContainer;
#ifdef PLATFORMER3D_AsyncTaskCooldownChanged_generated_h
#error "AsyncTaskCooldownChanged.generated.h already included, missing '#pragma once' in AsyncTaskCooldownChanged.h"
#endif
#define PLATFORMER3D_AsyncTaskCooldownChanged_generated_h

#define FID_Platformer3D_Source_Platformer3D_Public_Core_AbilitySystem_AsyncTasks_AsyncTaskCooldownChanged_h_11_DELEGATE \
PLATFORMER3D_API void FOnCooldownChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCooldownChanged, FGameplayTag CooldownTag, float TimeRemaining, float Duration);


#define FID_Platformer3D_Source_Platformer3D_Public_Core_AbilitySystem_AsyncTasks_AsyncTaskCooldownChanged_h_19_SPARSE_DATA
#define FID_Platformer3D_Source_Platformer3D_Public_Core_AbilitySystem_AsyncTasks_AsyncTaskCooldownChanged_h_19_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Platformer3D_Source_Platformer3D_Public_Core_AbilitySystem_AsyncTasks_AsyncTaskCooldownChanged_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Platformer3D_Source_Platformer3D_Public_Core_AbilitySystem_AsyncTasks_AsyncTaskCooldownChanged_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndTask); \
	DECLARE_FUNCTION(execListenForCooldownChange);


#define FID_Platformer3D_Source_Platformer3D_Public_Core_AbilitySystem_AsyncTasks_AsyncTaskCooldownChanged_h_19_ACCESSORS
#define FID_Platformer3D_Source_Platformer3D_Public_Core_AbilitySystem_AsyncTasks_AsyncTaskCooldownChanged_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncTaskCooldownChanged(); \
	friend struct Z_Construct_UClass_UAsyncTaskCooldownChanged_Statics; \
public: \
	DECLARE_CLASS(UAsyncTaskCooldownChanged, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Platformer3D"), NO_API) \
	DECLARE_SERIALIZER(UAsyncTaskCooldownChanged)


#define FID_Platformer3D_Source_Platformer3D_Public_Core_AbilitySystem_AsyncTasks_AsyncTaskCooldownChanged_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncTaskCooldownChanged(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncTaskCooldownChanged(UAsyncTaskCooldownChanged&&); \
	NO_API UAsyncTaskCooldownChanged(const UAsyncTaskCooldownChanged&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncTaskCooldownChanged); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncTaskCooldownChanged); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncTaskCooldownChanged) \
	NO_API virtual ~UAsyncTaskCooldownChanged();


#define FID_Platformer3D_Source_Platformer3D_Public_Core_AbilitySystem_AsyncTasks_AsyncTaskCooldownChanged_h_16_PROLOG
#define FID_Platformer3D_Source_Platformer3D_Public_Core_AbilitySystem_AsyncTasks_AsyncTaskCooldownChanged_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Platformer3D_Source_Platformer3D_Public_Core_AbilitySystem_AsyncTasks_AsyncTaskCooldownChanged_h_19_SPARSE_DATA \
	FID_Platformer3D_Source_Platformer3D_Public_Core_AbilitySystem_AsyncTasks_AsyncTaskCooldownChanged_h_19_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Platformer3D_Source_Platformer3D_Public_Core_AbilitySystem_AsyncTasks_AsyncTaskCooldownChanged_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Platformer3D_Source_Platformer3D_Public_Core_AbilitySystem_AsyncTasks_AsyncTaskCooldownChanged_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Platformer3D_Source_Platformer3D_Public_Core_AbilitySystem_AsyncTasks_AsyncTaskCooldownChanged_h_19_ACCESSORS \
	FID_Platformer3D_Source_Platformer3D_Public_Core_AbilitySystem_AsyncTasks_AsyncTaskCooldownChanged_h_19_INCLASS_NO_PURE_DECLS \
	FID_Platformer3D_Source_Platformer3D_Public_Core_AbilitySystem_AsyncTasks_AsyncTaskCooldownChanged_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMER3D_API UClass* StaticClass<class UAsyncTaskCooldownChanged>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Platformer3D_Source_Platformer3D_Public_Core_AbilitySystem_AsyncTasks_AsyncTaskCooldownChanged_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
