#include <iostream>

int main(){
    int motor_speed = 100;
    int speed_increment = 20;
    int increased_speed = motor_speed + speed_increment;
    int decreased_speed = motor_speed - speed_increment;
    int doubled_speed = motor_speed * 2;
    int halved_speed = motor_speed / 2;
    int remaining_speed = motor_speed % 30;
    std::cout << "Motor speed: " << motor_speed << std::endl;
    std::cout << "Increased speed: " << increased_speed << std::endl;   
    std::cout << "Decreased speed: " << decreased_speed << std::endl;
    std::cout << "Doubled speed: " << doubled_speed << std::endl;
    std::cout << "Halved speed: " << halved_speed << std::endl;
    std::cout << "Remaining speed: " << remaining_speed << std::endl;
    return 0;
}
