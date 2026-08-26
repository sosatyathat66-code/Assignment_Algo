#include <iostream>
using namespace std;

// Function to calculate the class average
double calculateAverage(int arr[], int size) {
    int total = 0;

    for (int i = 0; i < size; i++) {
        total += arr[i];
    }

    return (double)total / size;
}

// Function to determine the letter grade
char getGrade(int score) {
    if (score >= 90) {
        return 'A';
    } else if (score >= 80) {
        return 'B';
    } else if (score >= 70) {
        return 'C';
    } else if (score >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}

int main() {
    int n;

    // Ask for the number of students
    cout << "Enter number of students: ";
    cin >> n;

    int scores[n];

    // Read each student's score
    for (int i = 0; i < n; i++) {
        cout << "Enter score for student " << i + 1 << ": ";
        cin >> scores[i];
    }

    // Print each student's score and letter grade
    cout << "\nGrade Book:" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Student " << i + 1
             << ": Score = " << scores[i]
             << ", Grade = " << getGrade(scores[i])
             << endl;
    }

    // Calculate and print the class average
    double average = calculateAverage(scores, n);

    cout << "\nClass Average: " << average << endl;

    return 0;
}
