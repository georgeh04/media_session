import 'media_session_platform_interface.dart';

class MediaSession {
  Future<String?> getPlatformVersion() {
    return MediaSessionPlatform.instance.getPlatformVersion();
  }

  Future<void> updateMetadata({required String title, required String artist, required String album}) {
    return MediaSessionPlatform.instance.updateMetadata(title: title, artist: artist, album: album);
  }
}
