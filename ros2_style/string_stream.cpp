#include<iostream>
#include<sstream>
#include<string>

int main() {
    std::stringstream ss;
    int motor_speed = 1500;
    double battery_voltage = 12.5;

    ss<< "Motor Speed: " << motor_speed << " RPM, Battery Voltage: " << battery_voltage << " V";

    std::string output = ss.str();
    std::cout << "log : " << output << std::endl;
    return 0;
}