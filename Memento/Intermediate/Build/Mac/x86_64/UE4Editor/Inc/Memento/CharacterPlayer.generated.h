// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MEMENTO_CharacterPlayer_generated_h
#error "CharacterPlayer.generated.h already included, missing '#pragma once' in CharacterPlayer.h"
#endif
#define MEMENTO_CharacterPlayer_generated_h

#define Memento_Source_Memento_CharacterPlayer_h_12_SPARSE_DATA
#define Memento_Source_Memento_CharacterPlayer_h_12_RPC_WRAPPERS
#define Memento_Source_Memento_CharacterPlayer_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Memento_Source_Memento_CharacterPlayer_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACharacterPlayer(); \
	friend struct Z_Construct_UClass_ACharacterPlayer_Statics; \
public: \
	DECLARE_CLASS(ACharacterPlayer, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Memento"), NO_API) \
	DECLARE_SERIALIZER(ACharacterPlayer)


#define Memento_Source_Memento_CharacterPlayer_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACharacterPlayer(); \
	friend struct Z_Construct_UClass_ACharacterPlayer_Statics; \
public: \
	DECLARE_CLASS(ACharacterPlayer, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Memento"), NO_API) \
	DECLARE_SERIALIZER(ACharacterPlayer)


#define Memento_Source_Memento_CharacterPlayer_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACharacterPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACharacterPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacterPlayer(ACharacterPlayer&&); \
	NO_API ACharacterPlayer(const ACharacterPlayer&); \
public:


#define Memento_Source_Memento_CharacterPlayer_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacterPlayer(ACharacterPlayer&&); \
	NO_API ACharacterPlayer(const ACharacterPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACharacterPlayer)


#define Memento_Source_Memento_CharacterPlayer_h_12_PRIVATE_PROPERTY_OFFSET
#define Memento_Source_Memento_CharacterPlayer_h_9_PROLOG
#define Memento_Source_Memento_CharacterPlayer_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Memento_Source_Memento_CharacterPlayer_h_12_PRIVATE_PROPERTY_OFFSET \
	Memento_Source_Memento_CharacterPlayer_h_12_SPARSE_DATA \
	Memento_Source_Memento_CharacterPlayer_h_12_RPC_WRAPPERS \
	Memento_Source_Memento_CharacterPlayer_h_12_INCLASS \
	Memento_Source_Memento_CharacterPlayer_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Memento_Source_Memento_CharacterPlayer_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Memento_Source_Memento_CharacterPlayer_h_12_PRIVATE_PROPERTY_OFFSET \
	Memento_Source_Memento_CharacterPlayer_h_12_SPARSE_DATA \
	Memento_Source_Memento_CharacterPlayer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Memento_Source_Memento_CharacterPlayer_h_12_INCLASS_NO_PURE_DECLS \
	Memento_Source_Memento_CharacterPlayer_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MEMENTO_API UClass* StaticClass<class ACharacterPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Memento_Source_Memento_CharacterPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
