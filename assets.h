#ifndef ASSETS_H
#define ASSETS_H

#include "raylib.h"

#include "sprite.h"

inline Font menu_font;

inline Texture2D wall_texture;
inline Texture2D void_texture;
inline Texture2D paddle_texture;
inline Texture2D block_texture;
inline Texture2D lives_full_texture;
inline Texture2D d_block_texture;
inline Texture2D bonus_texture;

inline Texture2D victory_background;
inline Texture2D level_background;
inline sprite ball_sprite;

inline Sound lose_life_sound;
inline Sound victory_sound;
inline Sound d_block_break_sound;
inline Sound block_break_sound;
inline Sound game_over_sound;
inline Sound next_level_sound;
inline Sound bonus_sound;

void load_fonts();
void unload_fonts();

void load_textures();
void unload_textures();

void load_sounds();
void unload_sounds();

#endif // ASSETS_H
