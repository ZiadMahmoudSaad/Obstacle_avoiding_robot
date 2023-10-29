/*
 * Motor.c
 *
 *      Author: MahmoudIbrahimEllaban
 */

#include "Motor.h"

pinMode(LeftMotorForward, OUTPUT);
pinMode(LeftMotorBackward, OUTPUT);
pinMode(RightMotorForward, OUTPUT);
pinMode(RightMotorBackward, OUTPUT);
pinMode(LeftMotorSpeed, OUTPUT);
pinMode(RightMotorSpeed, OUTPUT);

void moveForward()
{
    digitalWrite(LeftMotorForward, HIGH);
    digitalWrite(RightMotorForward, HIGH);
    digitalWrite(LeftMotorBackward, LOW);
    digitalWrite(RightMotorBackward, LOW);
    analogWrite(LeftMotorSpeed, 255);
    analogWrite(RightMotorSpeed, 255);
}

void moveBackward()
{
    digitalWrite(LeftMotorForward, LOW);
    digitalWrite(RightMotorForward, LOW);
    digitalWrite(LeftMotorBackward, HIGH);
    digitalWrite(RightMotorBackward, HIGH);
    analogWrite(LeftMotorSpeed, 255);
    analogWrite(RightMotorSpeed, 255);
}

void turnRight()
{
    digitalWrite(LeftMotorForward, HIGH);
    digitalWrite(RightMotorForward, LOW);
    digitalWrite(LeftMotorBackward, LOW);
    digitalWrite(RightMotorBackward, HIGH);
    analogWrite(LeftMotorSpeed, 255);
    analogWrite(RightMotorSpeed, 255);
}

void turnLeft()
{
    digitalWrite(LeftMotorForward, LOW);
    digitalWrite(RightMotorForward, HIGH);
    digitalWrite(LeftMotorBackward, HIGH);
    digitalWrite(RightMotorBackward, LOW);
    analogWrite(LeftMotorSpeed, 255);
    analogWrite(RightMotorSpeed, 255);
}

void moveStop()
{
    digitalWrite(LeftMotorForward, LOW);
    digitalWrite(RightMotorForward, LOW);
    digitalWrite(LeftMotorBackward, LOW);
    digitalWrite(RightMotorBackward, LOW);
    analogWrite(LeftMotorSpeed, 0);
    analogWrite(RightMotorSpeed, 0);
}
