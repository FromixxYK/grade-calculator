#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    const int SCORE_COUNT = 5;

    string studentName;
    int studentCount = 0;
    double sumOfAverages = 0.0;

    cout << fixed << setprecision(1);

    // Ask for students until the teacher types "end"
    cout << "Student name (or end to finish): ";
    cin >> studentName;

    while (studentName != "end") {
        int scoreSum = 0;

        // Read 5 scores for the current student
        for (int i = 1; i <= SCORE_COUNT; i++) {
            int score = 0;
            bool isValid = false;

            // Ask again until the score is a whole number from 0 to 100
            while (!isValid) {
                cout << "Score " << i << ": ";
                cin >> score;

                if (cin.fail()) {
                    // Letters were typed instead of a number
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << "Invalid score. Enter a value from 0 to 100." << endl;
                } else if (score < 0 || score > 100) {
                    cout << "Invalid score. Enter a value from 0 to 100." << endl;
                } else {
                    isValid = true;
                }
            }

            scoreSum += score;
        }

        // Calculate the average and choose the grade
        double average = (double)scoreSum / SCORE_COUNT;
        char grade;

        if (average >= 90) {
            grade = 'A';
        } else if (average >= 75) {
            grade = 'B';
        } else if (average >= 60) {
            grade = 'C';
        } else {
            grade = 'F';
        }

        cout << studentName << ": average " << average << ", grade " << grade << endl;
        cout << endl;

        studentCount++;
        sumOfAverages += average;

        cout << "Student name (or end to finish): ";
        cin >> studentName;
    }

    // Print the summary for the whole class
    if (studentCount == 0) {
        cout << "No students entered" << endl;
    } else {
        cout << "Students entered: " << studentCount << endl;
        cout << "Class average: " << sumOfAverages / studentCount << endl;
    }

    return 0;
}
