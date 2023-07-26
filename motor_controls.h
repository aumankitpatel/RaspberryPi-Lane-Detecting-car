#ifndef MOTOR_CONTROLS_H
#define MOTOR_CONTROLS_H

extern "C" {
class MotorControls {
    private:
        int IN1;
        int IN2;
        int IN3;
        int IN4;
    
    public:
        MotorControls(int in1, int in2, int in3, int in4);

        void Forward(int forward_time);
        void Backward(int backward_time);
        void Right(int right_time);
        void Left(int left_time);

};
}

#endif //MOTOR_CONTROLS_H