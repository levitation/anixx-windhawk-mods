// ==WindhawkMod==
// @id              classic-browser-fix
// @name            Fix browsers for Windows Classic theme
// @description     Forces the border from Aero Light theme to fix glitched border in Classic theme
// @version         1.0
// @author 			    Anixx
// @github 			    https://github.com/Anixx
// @include         msedge.exe
// @include         chrome.exe
// @include         chromium.exe
// @include         steam.exe
// @include         ApplicationFrameHost.exe
// @compilerOptions -luxtheme
// ==/WindhawkMod==

// ==WindhawkModReadme==
/*
This mod forces Aero Lite window borders on browsers MS Edge, Chrome, Chromium, Steam app and UWP apps,
which fixes their glitches when using Windows Classic theme. Note that UWP apps need a separate fix
to be able to run under Windows Classic theme (https://winclassic.net/thread/2058/classic-uwp-fix).
*/
// ==/WindhawkModReadme==

#include <uxtheme.h>

BOOL Wh_ModInit() {
    Wh_Log(L"Init");
    SetThemeAppProperties(0);
    return TRUE;
}
