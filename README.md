# AutoBot (Geode)

Bot de macros para Geometry Dash. Se usa desde el **menú de pausa**:

- **GRABAR**: reinicia el nivel y guarda tus clicks frame a frame. La macro se guarda sola al completar el nivel o al pulsar DETENER.
- **REPRODUCIR**: reinicia y repite la macro; si fallas por desincronización reintenta solo.
- **DETENER**: corta la grabación/reproducción.
- **COMPLETAR**: termina el nivel al instante (sin jugarlo).

Ajuste: "Reproducir macro automáticamente" (reproduce al entrar a un nivel con macro).
Las macros se guardan por nombre de nivel en la carpeta de guardado del mod.

## Compilar sin PC (desde el móvil)
1. Crea un repositorio en GitHub y sube todo el contenido de esta carpeta (incluida `.github`).
2. Pestaña **Actions** > "Build AutoBot" > **Run workflow**.
3. Descarga el artefacto `AutoBot-geode` y saca el archivo `personal.autobot.geode`.
4. Cópialo a `Android/media/com.geode.launcher/game/geode/mods/` (Android) o `geode/mods/` (PC) y reinicia el juego.

Si Geode te dice que la versión no coincide, cambia `"geode"` en `mod.json` por tu versión instalada.

## Aviso
- No lo he podido compilar ni probar; si el build da error, mándame el log.
- Las macros pueden desincronizarse si cambia el FPS; usa un FPS fijo.
- Usar COMPLETAR o macros para enviar récords/ranking cuenta como trampa y puede dejarte fuera de los rankings. Úsalo para uso personal.
