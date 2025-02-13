// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickUp_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_PickUp;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_PickUp()
	{
		if (!Z_Registration_Info_UPackage__Script_PickUp.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/PickUp",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xA2E03C37,
				0x436757F9,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_PickUp.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_PickUp.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_PickUp(Z_Construct_UPackage__Script_PickUp, TEXT("/Script/PickUp"), Z_Registration_Info_UPackage__Script_PickUp, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xA2E03C37, 0x436757F9));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
