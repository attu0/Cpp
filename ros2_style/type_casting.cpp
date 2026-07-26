#include <iostream>

int main(){
    int senosor_value = 527;
    double voltage;

    voltage = (senosor_value) / 1023.0 * 5.0;

    std::cout << "Sensor Value: " << senosor_value << std::endl;

    voltage = static_cast<double>(senosor_value) / 1023.0 * 5.0;
    std::cout << "Voltage: " << voltage << " V" << std::endl;
    
    voltage = (double)(senosor_value) / 1023.0 * 5.0;
    std::cout << "Voltage: " << voltage << " V" << std::endl;

    return 0;
}