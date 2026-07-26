#include<iostream>
#include<string>

int main(){
    std::string cmd;
    std::cout << "Enter a command: ";
    std::getline(std::cin, cmd);
    std::cout << "You entered: " << cmd << std::endl;
    return 0;
}