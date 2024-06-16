#ifndef FLUTTER_PLUGIN_MEDIA_SESSION_PLUGIN_H_
#define FLUTTER_PLUGIN_MEDIA_SESSION_PLUGIN_H_

#include <flutter/method_channel.h>
#include <flutter/plugin_registrar_windows.h>

#include <memory>

namespace media_session {

class MediaSessionPlugin : public flutter::Plugin {
 public:
  static void RegisterWithRegistrar(flutter::PluginRegistrarWindows *registrar);

  MediaSessionPlugin();

  virtual ~MediaSessionPlugin();

  // Disallow copy and assign.
  MediaSessionPlugin(const MediaSessionPlugin&) = delete;
  MediaSessionPlugin& operator=(const MediaSessionPlugin&) = delete;

  // Called when a method is called on this plugin's channel from Dart.
  void HandleMethodCall(
      const flutter::MethodCall<flutter::EncodableValue> &method_call,
      std::unique_ptr<flutter::MethodResult<flutter::EncodableValue>> result);
};

}  // namespace media_session

#endif  // FLUTTER_PLUGIN_MEDIA_SESSION_PLUGIN_H_
