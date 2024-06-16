import 'package:plugin_platform_interface/plugin_platform_interface.dart';

import 'media_session_method_channel.dart';

abstract class MediaSessionPlatform extends PlatformInterface {
  MediaSessionPlatform() : super(token: _token);

  static final Object _token = Object();

  static MediaSessionPlatform _instance = MethodChannelMediaSession();

  static MediaSessionPlatform get instance => _instance;

  static set instance(MediaSessionPlatform instance) {
    PlatformInterface.verifyToken(instance, _token);
    _instance = instance;
  }

  Future<String?> getPlatformVersion();

  Future<void> updateMetadata({required String title, required String artist, required String album}) {
    throw UnimplementedError('updateMetadata() has not been implemented.');
  }
}
