#pragma once

#include "raylib.h"

#if defined(__cplusplus)
extern "C" {
#endif

inline static bool SearchAndSetResourceDir(const char* folderName)
{
    const char* appDir = GetApplicationDirectory();
    const char* paths[] = { GetWorkingDirectory(), appDir, TextFormat("%s../", appDir), TextFormat("%s../../", appDir), TextFormat("%s../../../", appDir) };
    
    for (int i = 0; i < 5; i++)
    {
        const char* dir = TextFormat("%s%s", paths[i], folderName);
        if (DirectoryExists(dir)) return ChangeDirectory(dir), true;
    }

    return false;
}

#if defined(__cplusplus)
}
#endif
