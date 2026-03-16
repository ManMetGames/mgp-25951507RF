// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodemgp25951507RF_init() {}
	MGP25951507RF_API UFunction* Z_Construct_UDelegateFunction_mgp25951507RF_OnEnemyDied__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_mgp25951507RF;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_mgp25951507RF()
	{
		if (!Z_Registration_Info_UPackage__Script_mgp25951507RF.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_mgp25951507RF_OnEnemyDied__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/mgp25951507RF",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x7134DDAC,
				0x8BE0D26A,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_mgp25951507RF.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_mgp25951507RF.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_mgp25951507RF(Z_Construct_UPackage__Script_mgp25951507RF, TEXT("/Script/mgp25951507RF"), Z_Registration_Info_UPackage__Script_mgp25951507RF, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x7134DDAC, 0x8BE0D26A));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
