#include <iostream>
#include "RobotCommand.hpp"

RobotCommand::RobotCommand(/* args */)
{
    std::cout << "Building RobotCommand instance" << std::endl;
}

RobotCommand::RobotCommand(int start_point)
{
    std::cout << "Building RobotCommand instance with start_point : " << start_point <<std::endl;
}

void RobotCommand::stopp()
{
    /*** send publish 0 velocity to /cmd_vel***/ 
    std::cout << "Stop the robot " << std::endl;
}

void RobotCommand::forward(float speed)
{
    /*** send publish speed [m/s] velocity to /cmd_vel***/ 
    std::cout << "Moving Forward ... " << std::endl;
}

void RobotCommand::backward(float speed)
{
    /*** send publish speed [m/s] velocity to /cmd_vel***/ 
    std::cout << "Moving Backward ... " << std::endl;
}

void RobotCommand::rotate(float speed, int direction)
{
    /*** send publish speed [rad/s] velocity to /cmd_vel with the right sign***/ 
    std::cout << "Rotating ..." << std::endl;
}


RobotCommand::~RobotCommand()
{
}