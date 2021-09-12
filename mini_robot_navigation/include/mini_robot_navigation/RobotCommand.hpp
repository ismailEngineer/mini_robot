#pragma once

class RobotCommand
{
private:
    /* data */
public:
    RobotCommand(/* args */);

    RobotCommand(int start_point);

    /*** movement function ***/
    void stopp();
    void forward(float speed);
    void backward(float speed);
    void rotate(float speed, int direction);

    ~RobotCommand();
};


