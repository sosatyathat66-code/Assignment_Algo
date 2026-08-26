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

    if (average >= 90){
        std::cout << "A" << std::endl;
    } else if (average >= 80){
        std::cout << "B" << std::endl;
    } else if (average >= 70){
        std::cout << "C" << std::endl;
    } else if (average >= 60){
        std::cout << "D" << std::endl;
    } else {
        std::cout << "F" << std::endl;
    }
    return 0;
}
