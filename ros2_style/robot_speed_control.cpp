#include<iostream>

int main(){
    double speed;
    std::cout << "Enter the speed of the robot (in m/s): ";
    std::cin >> speed;
    if(!std::cin){
        std::cerr << "Error: Invalid input. Please enter a numeric value for speed." << std::endl;
        return 1;
    }
    std::cout << "The speed of the robot is: " << speed << " m/s" << std::endl;
    return 0;
}