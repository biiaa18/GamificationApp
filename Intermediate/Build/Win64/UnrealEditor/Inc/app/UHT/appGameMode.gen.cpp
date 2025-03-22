// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "app/appGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeappGameMode() {}

// Begin Cross Module References
APP_API UClass* Z_Construct_UClass_AappGameMode();
APP_API UClass* Z_Construct_UClass_AappGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_app();
// End Cross Module References

// Begin Class AappGameMode
void AappGameMode::StaticRegisterNativesAappGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AappGameMode);
UClass* Z_Construct_UClass_AappGameMode_NoRegister()
{
	return AappGameMode::StaticClass();
}
struct Z_Construct_UClass_AappGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "appGameMode.h" },
		{ "ModuleRelativePath", "appGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AappGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AappGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_app,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AappGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AappGameMode_Statics::ClassParams = {
	&AappGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AappGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AappGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AappGameMode()
{
	if (!Z_Registration_Info_UClass_AappGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AappGameMode.OuterSingleton, Z_Construct_UClass_AappGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AappGameMode.OuterSingleton;
}
template<> APP_API UClass* StaticClass<AappGameMode>()
{
	return AappGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AappGameMode);
AappGameMode::~AappGameMode() {}
// End Class AappGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_app_Source_app_appGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AappGameMode, AappGameMode::StaticClass, TEXT("AappGameMode"), &Z_Registration_Info_UClass_AappGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AappGameMode), 4237588564U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_app_Source_app_appGameMode_h_390005842(TEXT("/Script/app"),
	Z_CompiledInDeferFile_FID_UnrealProjects_app_Source_app_appGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_app_Source_app_appGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
