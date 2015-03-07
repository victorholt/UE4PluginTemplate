// Copyright 2015, Victor Holt. All Rights Reserved.
#pragma once
#include "MyPluginComponent.generated.h"

/**
 * <Description of class>.
 *
 * @class MyPluginComponent
 */
UCLASS(HideCategories=(Object, LOD, Physics), EditInlineNew, Meta=(BlueprintSpawnableComponent), ClassGroup=Rendering)
class UMyPluginComponent : public USceneComponent
{
    GENERATED_BODY()

public:
    /**
     * Called every tick of the game for the component.
     */
    virtual void ReceiveTick(float DeltaTime) override;
};
