#include "assets.h"

#include "raylib.h"

void load_fonts()
{
    menu_font = LoadFontEx("data/fonts/ARCADECLASSIC.TTF", 256, nullptr, 0);
}

void unload_fonts()
{
    UnloadFont(menu_font);
}

void load_textures()
{
    wall_texture = LoadTexture("data/images/wall.png");
    void_texture = LoadTexture("data/images/void.png");
    block_texture = LoadTexture("data/images/block.png");
    paddle_texture = LoadTexture("data/images/paddle.png");
    lives_full_texture = LoadTexture("data/images/lives_full.png");
    d_block_texture = LoadTexture("data/images/d_block.png");
    bonus_texture = LoadTexture("data/images/potion.png");

    ball_sprite = load_sprite("data/images/ball/ball", ".png", 8, true, 10);

    victory_background = LoadTexture("data/images/backgrounds/victory_bg.png");
    level_background = LoadTexture("data/images/backgrounds/level_bg.png");
}

void unload_textures()
{
    UnloadTexture(wall_texture);
    UnloadTexture(void_texture);
    UnloadTexture(block_texture);
    UnloadTexture(paddle_texture);
    UnloadTexture(lives_full_texture);
    UnloadTexture(d_block_texture);
    UnloadTexture(bonus_texture);
    unload_sprite(ball_sprite);

    UnloadTexture(victory_background);
    UnloadTexture(level_background);

}

void load_sounds()
{
    InitAudioDevice();
    lose_life_sound = LoadSound("data/sounds/lose_life.wav");
    victory_sound = LoadSound("data/sounds/victory_sound.wav");
    d_block_break_sound = LoadSound("data/sounds/d_block_break.wav");
    block_break_sound = LoadSound("data/sounds/block_break.wav");
    game_over_sound = LoadSound("data/sounds/game_over.wav");
    next_level_sound = LoadSound("data/sounds/next_level.wav");   
    bonus_sound = LoadSound("data/sounds/bonus.wav"); 
}

void unload_sounds()
{
    UnloadSound(lose_life_sound);
    UnloadSound(victory_sound);
    UnloadSound(d_block_break_sound);
    UnloadSound(block_break_sound);
    UnloadSound(game_over_sound);
    UnloadSound(next_level_sound);
    UnloadSound(bonus_sound);
    CloseAudioDevice();
}
