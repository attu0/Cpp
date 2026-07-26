#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    int end_tck = 700;
    double battery_voltage = 24.1245;
    char motor_dir = 'F';
    bool sensor_active = true;
    string device_name = "Spartan";
    cout << "Device Name: " << device_name << endl;
    cout << "End Tick: " << end_tck << endl;
    cout << "Battery Voltage: " << fixed << setprecision(3) << battery_voltage << " V" << endl;
    cout << "Motor Direction: " << motor_dir << endl;
    cout << "Sensor Active: " << (sensor_active ? "yes" : "no") << endl;
    
    return 0;
}