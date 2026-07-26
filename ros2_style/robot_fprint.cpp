#include <cstdio>
#include <iostream>
#include <string>
using namespace std;    

int main(){
    const char* robot_name = "Spartan";
    float battery_voltage = 24.125f;
    int x_coord = 10;
    int y_coord = 20;
    printf("Robot Name: %s\n", robot_name);
    printf("Battery Voltage: %.2f V\n", battery_voltage);
    printf("Robot Coordinates: (%d, %d)\n", x_coord, y_coord);
    cout << "Robot Name: " << robot_name << endl;
    return 0;
}