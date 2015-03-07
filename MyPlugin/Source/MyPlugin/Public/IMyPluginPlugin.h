// Copyright 2015, Victor Holt. All Rights Reserved.
#pragma once

#include "ModuleManager.h"

// Public interface to access this module.
class IMyPluginPlugin : public IModuleInterface
{
public:
    /**
     * Returns an instance of the MyPlugin module.
     *
     * @method IMyPluginPlugin
     *
     * @return IMyPluginPlugin
     */
    static inline IMyPluginPlugin& Get()
    {
        return FModuleManager::LoadModuleChecked<IMyPluginPlugin>("MyPlugin");
    }

    /**
     * Returns whether or not the module is available.
     *
     * @method IsAvailable
     *
     * @return boolean
     */
    static inline bool IsAvailable()
    {
        return FModuleManager::Get().IsModuleLoaded("MyPlugin");
    }
};
