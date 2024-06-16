#include "include/media_session/media_session_plugin_c_api.h"

#include <flutter/plugin_registrar_windows.h>

#include "media_session_plugin.h"

void MediaSessionPluginCApiRegisterWithRegistrar(
    FlutterDesktopPluginRegistrarRef registrar) {
  media_session::MediaSessionPlugin::RegisterWithRegistrar(
      flutter::PluginRegistrarManager::GetInstance()
          ->GetRegistrar<flutter::PluginRegistrarWindows>(registrar));
}
