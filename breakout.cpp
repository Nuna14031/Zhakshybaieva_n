#include "assets.h"
#include "ball.h"
#include "game.h"
#include "graphics.h"
#include "level.h"
#include "paddle.h"

#include "raylib.h"

void zero_game_state()
{
    player_lives = 3;
    current_level_index = 0;
    game_state = in_game_state;
    load_level(2);
}

void update()
{
    // TODO

    switch (game_state) {
    case menu_state:
        if (IsKeyPressed(KEY_ENTER)) {
            zero_game_state();
        }
        break;
    case in_game_state:
        if (IsKeyPressed(KEY_ESCAPE)) {
            game_state = paused_state;
        }
        if (IsKeyDown(KEY_A) || IsKeyDown(KEY_LEFT)) {
            move_paddle(-paddle_speed);
        }
        if (IsKeyDown(KEY_D) || IsKeyDown(KEY_RIGHT)) {
            move_paddle(paddle_speed);
        }
        move_ball();

        if (!is_ball_inside_level()) {
            player_lives--;
            PlaySound(lose_life_sound);
            if (player_lives <= 0) {
                player_lives = 0;

                game_state = game_over_state;
            } else load_level(0); // (reloading the current level)

        } else if (current_level_blocks == 0) {
            load_level(1);// (reloading the current level)
            PlaySound(next_level_sound);
        }
        break;
    case paused_state:
        if (IsKeyPressed(KEY_ESCAPE)) {
            game_state = in_game_state;
        }
        if (IsKeyPressed(KEY_M)) {
            game_state = menu_state;  // (exit game without losing player lives)
        }
        break;
    
    case game_over_state:
        PlaySound(game_over_sound);
        if (IsKeyPressed(KEY_ENTER)) {
            game_state = menu_state;
        }
        if (IsKeyPressed(KEY_R)) {
            zero_game_state();
        }
        break;
        
    case victory_state:
        PlaySound(victory_sound);
        if (IsKeyPressed(KEY_ENTER)) {
            game_state = menu_state;
        }
        break;

    default:;
    }

}

void draw()
{
    // TODO
    game_frame++;

    switch (game_state) {
    case menu_state:
        draw_menu();
        break;
    case in_game_state:
        draw_level();
        draw_paddle();
        draw_ball();
        draw_lives();
        draw_ui();
        break;
    case paused_state:
        draw_pause_menu();
        break;
    case victory_state:
        draw_victory_menu();
        break;
    case game_over_state:
        draw_game_over_menu();
        break;
    default:;
    }

}

int main()
{
    SetConfigFlags(FLAG_VSYNC_HINT);
    InitWindow(1280, 720, "Breakout");
    SetTargetFPS(60);

    load_fonts();
    load_textures();
    load_sounds();
    load_level();

    while (!WindowShouldClose()) {
        BeginDrawing();
        SetExitKey(KEY_NULL);

        draw();
        update();

        EndDrawing();
    }
    CloseWindow();

    unload_sounds();
    unload_level();
    unload_textures();
    unload_fonts();

    return 0;
}
