/*
 * Drive_Modes.c
 *
 *      Author: MahmoudEL-Husseni
 */

#include "Drive_Modes.h"
#include "Motor.h"
#include "Sensor_Servo.h"

// Variables
int s[10];
int m[10];
int i=0;
int direct; 
int angle = 0;
boolean goesForward = false;
int distance = 100;

void repeat(){
    analogWrite(LeftMotorSpeed, 100);
    analogWrite(RightMotorSpeed, 100);
    while(i!=1){
        delay(500);
        moveBackward();
        delay(s[i]);
        if(m[i]==1){
            Serial.println("Turn left");
            turnLeft();
        }
        else if (m[i]==2){
            Serial.println("Turn right");
            turnRight();
        }
        i--;
    }
    Serial.println("Stop");
    moveStop();
}



void obstacle_avoiding(){
    Serial.println(distance);
    int distanceRight = 0;
    int distanceLeft = 0;
    analogWrite(LeftMotorSpeed, 150);
    analogWrite(RightMotorSpeed, 150);
    delay(50);
    if(distance < 20){
        moveStop();
        delay(100);
        moveBackward();
        delay(500);
        moveStop();
        delay(100);
        distanceRight = lookRight();
        distanceLeft = lookLeft();
        if(distanceRight > distanceLeft){
            turnRight();
            delay(500);
            moveStop();
            delay(100);
        }
        else{
            turnLeft();
            delay(500);
            moveStop();
            delay(100);
        }
    }
    else{
        moveForward();
        delay(500);
        moveStop();
        delay(100);
}
}

void obstacel_avoiding_with_recording(){
    Serial.println(distance);
    int distanceRight = 0;
    int distanceLeft = 0;
    analogWrite(LeftMotorSpeed, 150);
    analogWrite(RightMotorSpeed, 150);
    s[i]+=50;
    delay(50);
    if(distance < 20){
        moveStop();
        delay(100);
        moveBackward();
        delay(500);
        moveStop();
        delay(100);
        distanceRight = lookRight();
        distanceLeft = lookLeft();
        if(distanceRight > distanceLeft){
            turnRight();
            delay(500);
            moveStop();
            delay(100);
            m[i]=2;
        }
        else{
            turnLeft();
            delay(500);
            moveStop();
            delay(100);
            m[i]=1;
        }
    }
    else{
        moveForward();
        delay(500);
        moveStop();
        delay(100);
    }
}
void Drive(){
    delay(100);
    direct = Blue.read();
    Serial.println(direct);

    if (direct == 0){
        moveForward();
    }
    else if (direct==1){
        moveBackward();
    }
    else if (direct==2){
        turnLeft();
    }
    else if (direct==3){
        turnRight();
    }
    else if (direct==4){
        return;
    }
}

void repeat_Drive(){
    analogWrite(LeftMotorSpeed, 100);
    analogWrite(RightMotorSpeed, 100);
    while(i!=1){
        delay(500);
        moveBackward();
        delay(s[i]);
        if(m[i]==1){
            Serial.println("Turn left");
            turnLeft();
        }
        else if (m[i]==2){
            Serial.println("Turn right");
            turnRight();
        }
        i--;
    }
    Serial.println("Stop");
    moveStop();
}
