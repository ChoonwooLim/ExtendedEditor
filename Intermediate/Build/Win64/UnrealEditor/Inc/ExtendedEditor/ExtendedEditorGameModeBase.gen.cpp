// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExtendedEditor/ExtendedEditorGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExtendedEditorGameModeBase() {}
// Cross Module References
	EXTENDEDEDITOR_API UClass* Z_Construct_UClass_AExtendedEditorGameModeBase_NoRegister();
	EXTENDEDEDITOR_API UClass* Z_Construct_UClass_AExtendedEditorGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ExtendedEditor();
// End Cross Module References
	void AExtendedEditorGameModeBase::StaticRegisterNativesAExtendedEditorGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AExtendedEditorGameModeBase);
	UClass* Z_Construct_UClass_AExtendedEditorGameModeBase_NoRegister()
	{
		return AExtendedEditorGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AExtendedEditorGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AExtendedEditorGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ExtendedEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExtendedEditorGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ExtendedEditorGameModeBase.h" },
		{ "ModuleRelativePath", "ExtendedEditorGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AExtendedEditorGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExtendedEditorGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AExtendedEditorGameModeBase_Statics::ClassParams = {
		&AExtendedEditorGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AExtendedEditorGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AExtendedEditorGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AExtendedEditorGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AExtendedEditorGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AExtendedEditorGameModeBase.OuterSingleton, Z_Construct_UClass_AExtendedEditorGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AExtendedEditorGameModeBase.OuterSingleton;
	}
	template<> EXTENDEDEDITOR_API UClass* StaticClass<AExtendedEditorGameModeBase>()
	{
		return AExtendedEditorGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExtendedEditorGameModeBase);
	struct Z_CompiledInDeferFile_FID_ExtendedEditor_Source_ExtendedEditor_ExtendedEditorGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ExtendedEditor_Source_ExtendedEditor_ExtendedEditorGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AExtendedEditorGameModeBase, AExtendedEditorGameModeBase::StaticClass, TEXT("AExtendedEditorGameModeBase"), &Z_Registration_Info_UClass_AExtendedEditorGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AExtendedEditorGameModeBase), 1255106583U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ExtendedEditor_Source_ExtendedEditor_ExtendedEditorGameModeBase_h_2824520181(TEXT("/Script/ExtendedEditor"),
		Z_CompiledInDeferFile_FID_ExtendedEditor_Source_ExtendedEditor_ExtendedEditorGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ExtendedEditor_Source_ExtendedEditor_ExtendedEditorGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
