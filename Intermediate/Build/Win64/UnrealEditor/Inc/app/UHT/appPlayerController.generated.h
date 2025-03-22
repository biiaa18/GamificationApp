// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "appPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef APP_appPlayerController_generated_h
#error "appPlayerController.generated.h already included, missing '#pragma once' in appPlayerController.h"
#endif
#define APP_appPlayerController_generated_h

#define FID_UnrealProjects_app_Source_app_appPlayerController_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAappPlayerController(); \
	friend struct Z_Construct_UClass_AappPlayerController_Statics; \
public: \
	DECLARE_CLASS(AappPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/app"), NO_API) \
	DECLARE_SERIALIZER(AappPlayerController)


#define FID_UnrealProjects_app_Source_app_appPlayerController_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AappPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AappPlayerController(AappPlayerController&&); \
	AappPlayerController(const AappPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AappPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AappPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AappPlayerController) \
	NO_API virtual ~AappPlayerController();


#define FID_UnrealProjects_app_Source_app_appPlayerController_h_14_PROLOG
#define FID_UnrealProjects_app_Source_app_appPlayerController_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_app_Source_app_appPlayerController_h_17_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_app_Source_app_appPlayerController_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> APP_API UClass* StaticClass<class AappPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_app_Source_app_appPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
