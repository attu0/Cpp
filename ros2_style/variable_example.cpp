#include <iostream>

using namespace std;

int dis = 100;
float speed = 5.5;
char direction = 'N';
bool is_active = true;



int main() {

    cout<< "Distance: " << dis << endl;
    cout<< "Speed: " << speed << endl;
    cout<< "Direction: " << direction << endl;
    cout<< "Is Active: " << (is_active ? "Yes" : "No") << endl;
    return 0;
}