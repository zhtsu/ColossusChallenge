// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class EPlayerAbility : uint8
{
	None,
	Walk,
	Run,
	Jump,
	Tumble,
	Attack
};
