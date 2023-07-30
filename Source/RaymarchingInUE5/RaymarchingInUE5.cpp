// Fill out your copyright notice in the Description page of Project Settings.

#include "RaymarchingInUE5.h"
#include "Modules/ModuleManager.h"

void FMyProjectModule::StartupModule()
{
	UE_LOG(LogTemp, Warning, TEXT("Module Started"));

	FString ShaderDir = FPaths::Combine(FPaths::ProjectDir(), "Shaders");
	AddShaderSourceDirectoryMapping("/Project", ShaderDir);
}

void FMyProjectModule::ShutdownModule()
{
	UE_LOG(LogTemp, Warning, TEXT("Module Shutdown"));
}

IMPLEMENT_PRIMARY_GAME_MODULE(FMyProjectModule, RaymarchingInUE5, "RaymarchingInUE5");