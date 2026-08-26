#include <iostream>
using namespace std;

int main(){
    int score1, score2;
    std::cout << "Enter the first score: ";
    std::cin >> score1;
    std::cout << "Enter the second score: ";
    std::cin >> score2;
    int total = score1+score2;
    float average = total/2.0;
    std::cout << "The average is: " << average << std::endl;

    if (average >= 50){
        std::cout << "You passed!" << std::endl;
    } else {
        std::cout << "You failed!" << std::endl;
    }
    return 0;
}
