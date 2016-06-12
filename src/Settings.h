#ifndef SETTINGS_H
#define SETTINGS_H

#include <string>

struct Settings
{
    std::string name;

    // For the game canvas
    int width;
    int height;

    // For the window on screen
    int displayWidth;
    int displayHeight;

    std::string manifestPath;
    std::string mainScript;
    std::string onUpdate;
    bool webserver;
    std::string orientation; // portrait or landscape, android only.

    Settings() :
        name("CGGameLoop"),
        width(640),
        height(360),
        displayWidth(640),
        displayHeight(360),
        manifestPath("manifest.lua"),
        mainScript("main.lua"),
        onUpdate("update()"),
        webserver(false),
        orientation("portrait") {}
};

#endif

