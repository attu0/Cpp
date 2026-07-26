#include <iostream>

int main(){
    double battery_level = 0.05;
    bool obstacle_detected = true;
    if (battery_level < 0.2 && !obstacle_detected) {
        std::cout << "Warning: Low battery and no obstacles detected!" << std::endl;
    } else if (battery_level < 0.2) {
        std::cout << "Warning: Low battery!" << std::endl;
    } else if (!obstacle_detected) {
        std::cout << "No obstacles detected." << std::endl;
    } else {
        std::cout << "Battery level is sufficient and obstacles are present." << std::endl;
    }
    return 0;
}