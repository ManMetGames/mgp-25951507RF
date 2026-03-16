// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "mgp25951507RFGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodemgp25951507RFGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
MGP25951507RF_API UClass* Z_Construct_UClass_Amgp25951507RFGameMode();
MGP25951507RF_API UClass* Z_Construct_UClass_Amgp25951507RFGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_mgp25951507RF();
// ********** End Cross Module References **********************************************************

// ********** Begin Class Amgp25951507RFGameMode ***************************************************
void Amgp25951507RFGameMode::StaticRegisterNativesAmgp25951507RFGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_Amgp25951507RFGameMode;
UClass* Amgp25951507RFGameMode::GetPrivateStaticClass()
{
	using TClass = Amgp25951507RFGameMode;
	if (!Z_Registration_Info_UClass_Amgp25951507RFGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("mgp25951507RFGameMode"),
			Z_Registration_Info_UClass_Amgp25951507RFGameMode.InnerSingleton,
			StaticRegisterNativesAmgp25951507RFGameMode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_Amgp25951507RFGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_Amgp25951507RFGameMode_NoRegister()
{
	return Amgp25951507RFGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_Amgp25951507RFGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "mgp25951507RFGameMode.h" },
		{ "ModuleRelativePath", "mgp25951507RFGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Amgp25951507RFGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_Amgp25951507RFGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_mgp25951507RF,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Amgp25951507RFGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_Amgp25951507RFGameMode_Statics::ClassParams = {
	&Amgp25951507RFGameMode::StaticClass,
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
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Amgp25951507RFGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_Amgp25951507RFGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_Amgp25951507RFGameMode()
{
	if (!Z_Registration_Info_UClass_Amgp25951507RFGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Amgp25951507RFGameMode.OuterSingleton, Z_Construct_UClass_Amgp25951507RFGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_Amgp25951507RFGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(Amgp25951507RFGameMode);
Amgp25951507RFGameMode::~Amgp25951507RFGameMode() {}
// ********** End Class Amgp25951507RFGameMode *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_oldjo_Desktop_Mechanics_Gameplay_mgp_25951507RF_mgp25951507RF_Source_mgp25951507RF_mgp25951507RFGameMode_h__Script_mgp25951507RF_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_Amgp25951507RFGameMode, Amgp25951507RFGameMode::StaticClass, TEXT("Amgp25951507RFGameMode"), &Z_Registration_Info_UClass_Amgp25951507RFGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Amgp25951507RFGameMode), 3066139692U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_oldjo_Desktop_Mechanics_Gameplay_mgp_25951507RF_mgp25951507RF_Source_mgp25951507RF_mgp25951507RFGameMode_h__Script_mgp25951507RF_3032472992(TEXT("/Script/mgp25951507RF"),
	Z_CompiledInDeferFile_FID_Users_oldjo_Desktop_Mechanics_Gameplay_mgp_25951507RF_mgp25951507RF_Source_mgp25951507RF_mgp25951507RFGameMode_h__Script_mgp25951507RF_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_oldjo_Desktop_Mechanics_Gameplay_mgp_25951507RF_mgp25951507RF_Source_mgp25951507RF_mgp25951507RFGameMode_h__Script_mgp25951507RF_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
