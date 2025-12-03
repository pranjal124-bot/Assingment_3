
Rock–Paper–Scissors (3 Rounds, Colored Console Version)

This is a simple Rock–Paper–Scissors game written in C for the Windows console.
It uses SetConsoleTextAttribute() to add color.

FEATURES:
- 3-round match
- Colored console output
- Score tracking
- Final match result
- Input validation

COLOR CODES:
11 (Bright Cyan): Main UI
10 (Bright Green): Player wins
12 (Bright Red): Computer wins or invalid input
14 (Bright Yellow): Tie
13 (Bright Purple): Score display

REQUIREMENTS:
- Windows OS
- MinGW GCC
- CMD or PowerShell

HOW TO COMPILE:
gcc -o rps_color11 rps_color11.c

HOW TO PLAY:
1 = Rock
2 = Paper
3 = Scissors

Run:
rps_color11.exe

FILE STRUCTURE:
project/
    rps_color11.c
    README.txt
