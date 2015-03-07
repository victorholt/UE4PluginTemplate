// Copyright 2015, Victor Holt. All Rights Reserved.

#include "MyPluginPluginPrivatePCH.h"
#include "MyPluginComponent.h"

/**
 * Called every tick of the game for the component.
 */
void UMyPluginComponent::ReceiveTick(float DeltaTime)
{
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, .5f, FColor::Red, TEXT("MyPlugin text!"));
    }
}
