#ifndef ROBOTMAP_H
#define ROBOTMAP_H

//Drive motors
constexpr int LEFT_DRIVE = 0;
constexpr int RIGHT_DRIVE = 1;

//PWM
constexpr int PWM_CLIMBER = 3;

//Joysticks
constexpr int JOY_DRIVER = 0;

//Axis Values
constexpr int LEFT_X = 0;
constexpr int LEFT_Y = 1;
constexpr int RIGHT_X = 4;
constexpr int RIGHT_Y = 5;
constexpr int RIGHT_TRIGGER = 3;
constexpr int LEFT_TRIGGER = 2;

//Deadzone
constexpr double DEADZONE = 0.05;

#endif  // ROBOTMAP_H
