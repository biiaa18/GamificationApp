// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "appProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef APP_appProjectile_generated_h
#error "appProjectile.generated.h already included, missing '#pragma once' in appProjectile.h"
#endif
#define APP_appProjectile_generated_h

#define FID_UnrealProjects_app_Source_app_appProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_UnrealProjects_app_Source_app_appProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAappProjectile(); \
	friend struct Z_Construct_UClass_AappProjectile_Statics; \
public: \
	DECLARE_CLASS(AappProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/app"), NO_API) \
	DECLARE_SERIALIZER(AappProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_UnrealProjects_app_Source_app_appProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AappProjectile(AappProjectile&&); \
	AappProjectile(const AappProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AappProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AappProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AappProjectile) \
	NO_API virtual ~AappProjectile();


#define FID_UnrealProjects_app_Source_app_appProjectile_h_12_PROLOG
#define FID_UnrealProjects_app_Source_app_appProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_app_Source_app_appProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_app_Source_app_appProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_app_Source_app_appProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> APP_API UClass* StaticClass<class AappProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_app_Source_app_appProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
