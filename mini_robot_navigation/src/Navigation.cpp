#include <iostream>
#include "RobotCommand.hpp"
#include "ros/ros.h"
#include "std_msgs/String.h"
#include <sstream>

void testingAllCommand()
{
    RobotCommand* command = new RobotCommand;
    command->forward(12.0);
    command->backward(12.0);
    command->rotate(1.0, 1);
    command->stopp();
    RobotCommand command2(5);
    command2.forward(1.0);
}

int main(int argc, char **argv)
{
    /* Test Robot Commands*/ 
    testingAllCommand();

    ros::init(argc, argv, "talker");

    ros::NodeHandle n;

    ros::Publisher chatter_pub = n.advertise<std_msgs::String>("chatter", 1000);

    ros::Rate loop_rate(10);

    int count = 0;
    while (ros::ok())
    {
        //ros::spin();
    }

    ROS_INFO("EXIT NODE ");
    return 0;
    
}



