// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTPLUGIN_MyActor_generated_h
#error "MyActor.generated.h already included, missing '#pragma once' in MyActor.h"
#endif
#define TESTPLUGIN_MyActor_generated_h

#define MyProject2_Plugins_TestPlugin_Source_TestPlugin_Public_MyActor_h_15_SPARSE_DATA
#define MyProject2_Plugins_TestPlugin_Source_TestPlugin_Public_MyActor_h_15_RPC_WRAPPERS
#define MyProject2_Plugins_TestPlugin_Source_TestPlugin_Public_MyActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject2_Plugins_TestPlugin_Source_TestPlugin_Public_MyActor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyActor(); \
	friend struct Z_Construct_UClass_AMyActor_Statics; \
public: \
	DECLARE_CLASS(AMyActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestPlugin"), NO_API) \
	DECLARE_SERIALIZER(AMyActor)


#define MyProject2_Plugins_TestPlugin_Source_TestPlugin_Public_MyActor_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMyActor(); \
	friend struct Z_Construct_UClass_AMyActor_Statics; \
public: \
	DECLARE_CLASS(AMyActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestPlugin"), NO_API) \
	DECLARE_SERIALIZER(AMyActor)


#define MyProject2_Plugins_TestPlugin_Source_TestPlugin_Public_MyActor_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyActor(AMyActor&&); \
	NO_API AMyActor(const AMyActor&); \
public:


#define MyProject2_Plugins_TestPlugin_Source_TestPlugin_Public_MyActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyActor(AMyActor&&); \
	NO_API AMyActor(const AMyActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyActor)


#define MyProject2_Plugins_TestPlugin_Source_TestPlugin_Public_MyActor_h_15_PRIVATE_PROPERTY_OFFSET
#define MyProject2_Plugins_TestPlugin_Source_TestPlugin_Public_MyActor_h_12_PROLOG
#define MyProject2_Plugins_TestPlugin_Source_TestPlugin_Public_MyActor_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject2_Plugins_TestPlugin_Source_TestPlugin_Public_MyActor_h_15_PRIVATE_PROPERTY_OFFSET \
	MyProject2_Plugins_TestPlugin_Source_TestPlugin_Public_MyActor_h_15_SPARSE_DATA \
	MyProject2_Plugins_TestPlugin_Source_TestPlugin_Public_MyActor_h_15_RPC_WRAPPERS \
	MyProject2_Plugins_TestPlugin_Source_TestPlugin_Public_MyActor_h_15_INCLASS \
	MyProject2_Plugins_TestPlugin_Source_TestPlugin_Public_MyActor_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject2_Plugins_TestPlugin_Source_TestPlugin_Public_MyActor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject2_Plugins_TestPlugin_Source_TestPlugin_Public_MyActor_h_15_PRIVATE_PROPERTY_OFFSET \
	MyProject2_Plugins_TestPlugin_Source_TestPlugin_Public_MyActor_h_15_SPARSE_DATA \
	MyProject2_Plugins_TestPlugin_Source_TestPlugin_Public_MyActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject2_Plugins_TestPlugin_Source_TestPlugin_Public_MyActor_h_15_INCLASS_NO_PURE_DECLS \
	MyProject2_Plugins_TestPlugin_Source_TestPlugin_Public_MyActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTPLUGIN_API UClass* StaticClass<class AMyActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject2_Plugins_TestPlugin_Source_TestPlugin_Public_MyActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
