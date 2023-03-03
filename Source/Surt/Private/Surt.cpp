// Copyright Epic Games, Inc. All Rights Reserved.

#include "Surt.h"

#include "Interfaces/IPluginManager.h"

#define LOCTEXT_NAMESPACE "FSurtModule"

void FSurtModule::StartupModule()
{
	const FString PluginShaderDir = FPaths::Combine(
		IPluginManager::Get().FindPlugin(TEXT("Surt"))->GetBaseDir(),
		TEXT("Shaders")
	);
	AddShaderSourceDirectoryMapping(TEXT("/Plugin/Surt"), PluginShaderDir);
}

void FSurtModule::ShutdownModule()
{
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FSurtModule, Surt)
