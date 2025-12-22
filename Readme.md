# Simple Breakout

![Breakout](data/images/screens/breakout.png)

## Description
---
A classic arcade Breakout game implemented in C++ using the Raylib library. The player controls a paddle to bounce a ball and destroy bricks across progressively challenging levels.

---

## Features

* **Added 3 more unique levels**  (with increasing complexity)

![Title Screen1](data/images/screens/level_2.png

![Title Screen2](data/images/screens/level_3.png)


* **Sound effects on every game state**

![sounds_effects.png](data/images/screens/sounds_effects.png)

* **Multiple brick types** (Standard, Double-hit, Bonus)

![block.png](data/images/block.png)

![d_block.png](data/images/d_block.png)

![potion.png](data/images/potion.png)

* **Live sistem** (3 number of lives) 

![player_life.png](data/images/screens/player_life.png)

## Controls 

 - A / LEFT ARROW – Move paddle left

 - D / RIGHT ARROW – Move paddle right

 - ENTER – Start game / Confirm selection

 - ESC – Pause / Resume game

 - M – Return to main menu (from pause)

 - R – Restart game (from game over screen)


## Game Mechanics

### Brick Types

**Standard Brick (@) – Breaks in one hit** 

**Double Brick (D) – Requires two hits to break**

**Bonus Brick (B) – Grants extra life when broken**


## Power-ups & Special Features

**Extra Life** - Collect bonus bricks to gain additional lives

**Progressive Difficulty** – Each level introduces new challenges

![level_4.png](data/images/screens/level_4.png)

![level_5.png](data/images/screens/level_5.png)

**Animated Ball** - Multi-frame sprite animation
![ball0.png](data/images/ball/ball0.png)

## Level Design

The game includes 5 meticulously designed levels:
 - **Level 1** – Tuto**rial with basic brick layout

![level_1.png](data/images/screens/level_1.png)
 
 - **Level 2** – Strategic brick placement

![level_2.png](data/images/screens/level_2.png)

 - **Level 3** – Introduction of double bricks

![level_3.png](data/images/screens/level_3.png)

 - **Level 4** – Mixed brick types with complex patterns

![level_4.png](data/images/screens/level_4.png)

 - **Level 5** – Final challenge with unique symmetrical design 

![level_5.png](data/images/screens/level_5.png)

## Project Structure
 ```text
breakout/
├── CMakeLists.txt          # Build configuration
├── breakout.cpp           # Main game loop
├── game.h                # Game constants and structures
├── sprite.[h/cpp]        # Sprite animation system
├── assets.[h/cpp]        # Resource management
├── graphics.[h/cpp]      # Rendering system
├── level.[h/cpp]         # Level management
├── ball.[h/cpp]          # Ball physics and behavior
├── paddle.[h/cpp]        # Paddle controls
└── data/                # Game assets
├── images/          # Textures and sprites
│   ├── backgrounds/ # Level backgrounds
│   ├── ball/        # Animated ball frames
│   └── *.png        # Various game textures
├── sounds/          # Audio effects
│   └── *.wav        # Sound files
└── fonts/           # Font resources
```
## Game States

 - **Main Menu** 
 - **In-Game**  
 - **Paused** 
 - **Game Over** 
 - **Victory** 

## Audio System

The game features a comprehensive audio system with:

- Collision sound effects for different brick types
- Life loss notification sound
- Level completion fanfare

