// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer3D/Public/Core/Projectiles/Fireball.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFireball() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	PLATFORMER3D_API UClass* Z_Construct_UClass_ABaseCharacter_NoRegister();
	PLATFORMER3D_API UClass* Z_Construct_UClass_AFireball();
	PLATFORMER3D_API UClass* Z_Construct_UClass_AFireball_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Platformer3D();
// End Cross Module References
	DEFINE_FUNCTION(AFireball::execOnOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_newComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegin(Z_Param_newComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	struct Fireball_eventBP_EventHIT_Parms
	{
		ABaseCharacter* HitChar;
	};
	static FName NAME_AFireball_BP_EventHIT = FName(TEXT("BP_EventHIT"));
	void AFireball::BP_EventHIT(ABaseCharacter* HitChar)
	{
		Fireball_eventBP_EventHIT_Parms Parms;
		Parms.HitChar=HitChar;
		ProcessEvent(FindFunctionChecked(NAME_AFireball_BP_EventHIT),&Parms);
	}
	void AFireball::StaticRegisterNativesAFireball()
	{
		UClass* Class = AFireball::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlapBegin", &AFireball::execOnOverlapBegin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFireball_BP_EventHIT_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitChar;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFireball_BP_EventHIT_Statics::NewProp_HitChar = { "HitChar", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Fireball_eventBP_EventHIT_Parms, HitChar), Z_Construct_UClass_ABaseCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFireball_BP_EventHIT_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFireball_BP_EventHIT_Statics::NewProp_HitChar,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFireball_BP_EventHIT_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attack" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// the basic attack logic\n" },
#endif
		{ "DisplayName", "Do HIT Event" },
		{ "ModuleRelativePath", "Public/Core/Projectiles/Fireball.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "the basic attack logic" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFireball_BP_EventHIT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFireball, nullptr, "BP_EventHIT", nullptr, nullptr, Z_Construct_UFunction_AFireball_BP_EventHIT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFireball_BP_EventHIT_Statics::PropPointers), sizeof(Fireball_eventBP_EventHIT_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFireball_BP_EventHIT_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFireball_BP_EventHIT_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFireball_BP_EventHIT_Statics::PropPointers) < 2048);
	static_assert(sizeof(Fireball_eventBP_EventHIT_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFireball_BP_EventHIT()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFireball_BP_EventHIT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFireball_OnOverlapBegin_Statics
	{
		struct Fireball_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* newComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_newComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_newComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFireball_OnOverlapBegin_Statics::NewProp_newComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFireball_OnOverlapBegin_Statics::NewProp_newComp = { "newComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Fireball_eventOnOverlapBegin_Parms, newComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFireball_OnOverlapBegin_Statics::NewProp_newComp_MetaData), Z_Construct_UFunction_AFireball_OnOverlapBegin_Statics::NewProp_newComp_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFireball_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Fireball_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFireball_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFireball_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Fireball_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFireball_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_AFireball_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFireball_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Fireball_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AFireball_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((Fireball_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFireball_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Fireball_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_AFireball_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFireball_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFireball_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Fireball_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFireball_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_AFireball_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFireball_OnOverlapBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFireball_OnOverlapBegin_Statics::NewProp_newComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFireball_OnOverlapBegin_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFireball_OnOverlapBegin_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFireball_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFireball_OnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFireball_OnOverlapBegin_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFireball_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//----------------------------------------------------------------------------------------------------- Collision\n" },
#endif
		{ "ModuleRelativePath", "Public/Core/Projectiles/Fireball.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "----------------------------------------------------------------------------------------------------- Collision" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFireball_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFireball, nullptr, "OnOverlapBegin", nullptr, nullptr, Z_Construct_UFunction_AFireball_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFireball_OnOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFireball_OnOverlapBegin_Statics::Fireball_eventOnOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFireball_OnOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFireball_OnOverlapBegin_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFireball_OnOverlapBegin_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFireball_OnOverlapBegin_Statics::Fireball_eventOnOverlapBegin_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFireball_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFireball_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFireball);
	UClass* Z_Construct_UClass_AFireball_NoRegister()
	{
		return AFireball::StaticClass();
	}
	struct Z_Construct_UClass_AFireball_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereCollision_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraFireball_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraFireball;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireballProjectileMovement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FireballProjectileMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireballRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FireballRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DecayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecayValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DecayValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DamageTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayEffectClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_GameplayEffectClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageEffect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFireball_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer3D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFireball_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AFireball_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFireball_BP_EventHIT, "BP_EventHIT" }, // 2045300455
		{ &Z_Construct_UFunction_AFireball_OnOverlapBegin, "OnOverlapBegin" }, // 2241723625
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFireball_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireball_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Core/Projectiles/Fireball.h" },
		{ "ModuleRelativePath", "Public/Core/Projectiles/Fireball.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireball_Statics::NewProp_SphereCollision_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Collision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//----------------------------------------------------------------------------------------------------- Components\n// the fireball's collision\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Projectiles/Fireball.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "----------------------------------------------------------------------------------------------------- Components\n the fireball's collision" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFireball_Statics::NewProp_SphereCollision = { "SphereCollision", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFireball, SphereCollision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFireball_Statics::NewProp_SphereCollision_MetaData), Z_Construct_UClass_AFireball_Statics::NewProp_SphereCollision_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireball_Statics::NewProp_NiagaraFireball_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Niagara" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// the niagara for the fireball\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Projectiles/Fireball.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "the niagara for the fireball" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFireball_Statics::NewProp_NiagaraFireball = { "NiagaraFireball", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFireball, NiagaraFireball), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFireball_Statics::NewProp_NiagaraFireball_MetaData), Z_Construct_UClass_AFireball_Statics::NewProp_NiagaraFireball_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireball_Statics::NewProp_FireballProjectileMovement_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// the projetile movement for the fireball\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Projectiles/Fireball.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "the projetile movement for the fireball" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFireball_Statics::NewProp_FireballProjectileMovement = { "FireballProjectileMovement", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFireball, FireballProjectileMovement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFireball_Statics::NewProp_FireballProjectileMovement_MetaData), Z_Construct_UClass_AFireball_Statics::NewProp_FireballProjectileMovement_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireball_Statics::NewProp_FireballRadius_MetaData[] = {
		{ "Category", "Fireball" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//----------------------------------------------------------------------------------------------------- Attributes\n// the radius for the fireball\n" },
#endif
		{ "ModuleRelativePath", "Public/Core/Projectiles/Fireball.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "----------------------------------------------------------------------------------------------------- Attributes\n the radius for the fireball" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFireball_Statics::NewProp_FireballRadius = { "FireballRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFireball, FireballRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFireball_Statics::NewProp_FireballRadius_MetaData), Z_Construct_UClass_AFireball_Statics::NewProp_FireballRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireball_Statics::NewProp_DecayRate_MetaData[] = {
		{ "Category", "Decay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// how often we should run the decay rate timer in seconds\n" },
#endif
		{ "ModuleRelativePath", "Public/Core/Projectiles/Fireball.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "how often we should run the decay rate timer in seconds" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFireball_Statics::NewProp_DecayRate = { "DecayRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFireball, DecayRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFireball_Statics::NewProp_DecayRate_MetaData), Z_Construct_UClass_AFireball_Statics::NewProp_DecayRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireball_Statics::NewProp_DecayValue_MetaData[] = {
		{ "Category", "Decay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// how much should we shrink the fireball by each decay tick\n" },
#endif
		{ "ModuleRelativePath", "Public/Core/Projectiles/Fireball.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "how much should we shrink the fireball by each decay tick" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFireball_Statics::NewProp_DecayValue = { "DecayValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFireball, DecayValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFireball_Statics::NewProp_DecayValue_MetaData), Z_Construct_UClass_AFireball_Statics::NewProp_DecayValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireball_Statics::NewProp_DamageTag_MetaData[] = {
		{ "Category", "Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// create a reference to the gameplay effect we want to apply\n" },
#endif
		{ "ModuleRelativePath", "Public/Core/Projectiles/Fireball.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "create a reference to the gameplay effect we want to apply" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFireball_Statics::NewProp_DamageTag = { "DamageTag", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFireball, DamageTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFireball_Statics::NewProp_DamageTag_MetaData), Z_Construct_UClass_AFireball_Statics::NewProp_DamageTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireball_Statics::NewProp_DamageValue_MetaData[] = {
		{ "Category", "Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// create a reference to the gameplay effect we want to apply\n" },
#endif
		{ "ModuleRelativePath", "Public/Core/Projectiles/Fireball.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "create a reference to the gameplay effect we want to apply" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFireball_Statics::NewProp_DamageValue = { "DamageValue", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFireball, DamageValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFireball_Statics::NewProp_DamageValue_MetaData), Z_Construct_UClass_AFireball_Statics::NewProp_DamageValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireball_Statics::NewProp_GameplayEffectClass_MetaData[] = {
		{ "Category", "Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// create a reference to the gameplay effect we want to apply\n" },
#endif
		{ "ModuleRelativePath", "Public/Core/Projectiles/Fireball.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "create a reference to the gameplay effect we want to apply" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFireball_Statics::NewProp_GameplayEffectClass = { "GameplayEffectClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFireball, GameplayEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFireball_Statics::NewProp_GameplayEffectClass_MetaData), Z_Construct_UClass_AFireball_Statics::NewProp_GameplayEffectClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireball_Statics::NewProp_DamageEffect_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/Core/Projectiles/Fireball.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFireball_Statics::NewProp_DamageEffect = { "DamageEffect", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFireball, DamageEffect), Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFireball_Statics::NewProp_DamageEffect_MetaData), Z_Construct_UClass_AFireball_Statics::NewProp_DamageEffect_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFireball_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFireball_Statics::NewProp_SphereCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFireball_Statics::NewProp_NiagaraFireball,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFireball_Statics::NewProp_FireballProjectileMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFireball_Statics::NewProp_FireballRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFireball_Statics::NewProp_DecayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFireball_Statics::NewProp_DecayValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFireball_Statics::NewProp_DamageTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFireball_Statics::NewProp_DamageValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFireball_Statics::NewProp_GameplayEffectClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFireball_Statics::NewProp_DamageEffect,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFireball_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFireball>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFireball_Statics::ClassParams = {
		&AFireball::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFireball_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFireball_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFireball_Statics::Class_MetaDataParams), Z_Construct_UClass_AFireball_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFireball_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AFireball()
	{
		if (!Z_Registration_Info_UClass_AFireball.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFireball.OuterSingleton, Z_Construct_UClass_AFireball_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFireball.OuterSingleton;
	}
	template<> PLATFORMER3D_API UClass* StaticClass<AFireball>()
	{
		return AFireball::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFireball);
	AFireball::~AFireball() {}
	struct Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_Projectiles_Fireball_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_Projectiles_Fireball_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFireball, AFireball::StaticClass, TEXT("AFireball"), &Z_Registration_Info_UClass_AFireball, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFireball), 2629378560U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_Projectiles_Fireball_h_352034748(TEXT("/Script/Platformer3D"),
		Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_Projectiles_Fireball_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_Projectiles_Fireball_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
