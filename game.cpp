//this is the base code for my Game Jam project 2020
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void introduction(){
    std::cout << "It was a long time ago and the night was young" << std::endl;
    std::cout << "the lone traveller was on his mount again riding though the darkness" << std::endl;
    std::cout << "when all of a sudden he dropped his blade.. the Tri-Glave. The blade to end all wars..." << std::endl;
    std::cout << "the blade smashed into 5 different pieces and its magical power destroyed" << std::endl;
    std::cout << "many still say the blade is recovervable and that it can be mended, but others believe its magic to be lost forever" << std::endl;
    std::cout << "You must be the one to find all 5 pieces of the blade to redeem its power and help to end all future wars." << std::endl;
}

int main(){
    string answer1;
    int answer2;
    std::cout << "please enter your name" << std::endl;
    std::cin >> answer1;
    system("CLS");
    std::cout << "welcome to my game! " << answer1 << ", ";
    
    introduction();
    return 0;
}

class characterIdentity{
    private:
        int age;
        string name;
};

