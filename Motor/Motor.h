/*
 * Motor.h
 *
 *      Author: Ziad Mahmoud Saad
 */

#ifndef MOTOR_H_
#define MOTOR_H_


// Motor Driver
const int LeftMotorForward = 9;
const int LeftMotorBackward = 10;
const int RightMotorForward = 11;
const int RightMotorBackward = 12;
const int LeftMotorSpeed = 5;
const int RightMotorSpeed = 6;

void moveForward();
void moveBackward();
void turnRight();
void turnLeft();
void moveStop();

#endif /* MOTOR_H_ */
