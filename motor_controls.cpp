#include "motor_controls.h"
#include <iostream>
#include <wiringPi.h>
#include <chrono>
#include <thread>

using namespace std;
using namespace chrono;
using namespace this_thread;

extern "C" {
    MotorControls*
createMotorControls(int in1, int in2, int in3 , int in4) {
        return new MotorControls(in1, in2, in3, in4);
    }

    MotorControls::MotorControls(int in1, int in2, int in3, int in4) {
        IN1 = in1;
        IN2 = in2;
        IN3 = in3;
        IN4 = in4;

        wiringPiSetupGpio();
        pinMode(IN1, OUTPUT);
        pinMode(IN2, OUTPUT);
        pinMode(IN3, OUTPUT);
        pinMode(IN4, OUTPUT);
    }

    void MotorControls::Forward(int forward_time) {
        digitalWrite(IN1, HIGH);
        digitalWrite(IN2, LOW);
        digitalWrite(IN3, HIGH);
        digitalWrite(IN4, LOW);
        sleep_for(seconds(forward_time));
        digitalWrite(IN1, LOW);
        digitalWrite(IN2, LOW);
        digitalWrite(IN3, LOW);
        digitalWrite(IN4, LOW);
    }

    void MotorControls::Backward(int backward_time) {
        digitalWrite(IN1, LOW);
        digitalWrite(IN2, HIGH);
        digitalWrite(IN3, LOW);
        digitalWrite(IN4, HIGH);
        sleep_for(seconds(backward_time));
        digitalWrite(IN1, LOW);
        digitalWrite(IN2, LOW);
        digitalWrite(IN3, LOW);
        digitalWrite(IN4, LOW);
    }

    void MotorControls::Right(int right_time) {
        digitalWrite(IN1, HIGH);
        digitalWrite(IN2, LOW);
        digitalWrite(IN3, HIGH);
        digitalWrite(IN4, LOW);
        sleep_for(seconds(right_time));
        digitalWrite(IN1, LOW);
        digitalWrite(IN2, LOW);
        digitalWrite(IN3, LOW);
        digitalWrite(IN4, LOW);
    }

    void MotorControls::Left(int left_time) {
        digitalWrite(IN1, LOW);
        digitalWrite(IN2, HIGH);
        digitalWrite(IN3, LOW);
        digitalWrite(IN4, HIGH);
        sleep_for(seconds(left_time));
        digitalWrite(IN1, LOW);
        digitalWrite(IN2, LOW);
        digitalWrite(IN3, LOW);
        digitalWrite(IN4, LOW);
    }
}