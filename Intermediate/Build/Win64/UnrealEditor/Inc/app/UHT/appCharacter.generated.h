// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "appCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef APP_appCharacter_generated_h
#error "appCharacter.generated.h already included, missing '#pragma once' in appCharacter.h"
#endif
#define APP_appCharacter_generated_h

#define FID_UnrealProjects_app_Source_app_appCharacter_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAappCharacter(); \
	friend struct Z_Construct_UClass_AappCharacter_Statics; \
public: \
	DECLARE_CLASS(AappCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/app"), NO_API) \
	DECLARE_SERIALIZER(AappCharacter)


#define FID_UnrealProjects_app_Source_app_appCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AappCharacter(AappCharacter&&); \
	AappCharacter(const AappCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AappCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AappCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AappCharacter) \
	NO_API virtual ~AappCharacter();


#define FID_UnrealProjects_app_Source_app_appCharacter_h_19_PROLOG
#define FID_UnrealProjects_app_Source_app_appCharacter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_app_Source_app_appCharacter_h_22_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_app_Source_app_appCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> APP_API UClass* StaticClass<class AappCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_app_Source_app_appCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
