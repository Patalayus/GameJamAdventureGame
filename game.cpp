//this is the base code for my Game Jam project 2020
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int answer1, answer2;
    std::cout << "please enter your name" << std::endl;
    std::cin >> answer1;
    std::cout << "welcome to my game! " << answer1;
    return 0;
}

class characterIdentity{
    private:
        int age;
        string name;
};