#include <iostream>
#include <wiringPi.h>
#include <chrono>
#include <thread>

using namespace std;
using namespace chrono;
using namespace this_thread;

class MotorControls{
    private:

    int IN1;
    int IN2;
    int IN3;
    int IN4;
    public:


    MotorControls(int in1, int in2, int in3, int in4) {
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

    void Forward(int forward_time) {
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

    void Backward(int backward_time) {
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

    void Right(int right_time) {
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

    void Left(int left_time) {
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
};



int main() {
    MotorControls motor(23,24,22,27);

    motor.Forward(5);
    motor.Backward(7);
    motor.Right(5);
    motor.Left(10);

    return 0;
}