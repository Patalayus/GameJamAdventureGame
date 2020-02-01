//this is the base code for my Game Jam project 2020
#include <iostream>
#include <vector>
#include <string>
using namespace std;

//this is where the first quest is given
void secondary(){
    std::cout << "" << std::endl;
}

//below is the main function for the start of the game where the main plot is given
void introduction(){
    int answer3;
    std::cout << "It was a long time ago and the night was young" << std::endl;
    std::cout << "the lone traveller was on his mount again riding though the darkness" << std::endl;
    std::cout << "when all of a sudden he dropped his blade.. the Tri-Glave. The blade to end all wars..." << std::endl;
    std::cout << "the blade smashed into 5 different pieces and its magical power destroyed" << std::endl;
    std::cout << "many still say the blade is recovervable and that it can be mended, but others believe its magic to be lost forever" << std::endl;
    std::cout << "You must be the one to find all 5 pieces of the blade to redeem its power and help to end all future wars.\nDo you accept this quest?\n1. Yes\n2. No" << std::endl;
    std::cin >> answer3;
    if(answer3==1){
        std::cout << "alright lets get to it!" << std::endl;
        secondary();
    }else if(answer3==2){
        std::cout << "ah okay then..." << std::endl;
        introduction();
    }


}

//this is the main method where a user will input their name
int main()
{
    string answer1;
    int answer2;
    std::cout << "please enter your name" << std::endl;
    std::cin >> answer1;
    system("CLS");
    std::cout << "welcome to my game! " << answer1 << ", ";


	cout << "A long time has passed since the last war." << endl;
	cout << "Many people have forgotten about how devistating it was..." << endl;
	cout << "You we're only a child when the first war happened, but what was your name?";
	cin >> str;

	cout << "Ah " << str << ", what a nice name." << endl;
	cout << "And how old are you now?" << endl;
	cin >> age;
	if (age >= 0 && age <= 12) {
		cout << "Ah, you are still a child then" << endl;
	}
	else if (age > 12 && age < 20) {
		cout << "You're a teenager at this point." << endl;
	}
	else if (age >= 20 && age < 60) {
		cout << "You are now an adult then" << endl;
	}
	else if (age >= 60 && age < 123) {
		cout << "You are very old then..." << endl;
	}
	else {
		cout << "That is not possible." << endl;
	}
    
    introduction();
    return 0;
}


