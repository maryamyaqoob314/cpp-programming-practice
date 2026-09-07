#include <iostream>
using namespace std;
int main(){
    int students[10] = {78, 92, 65, 88, 45, 90, 73, 81, 55, 96};
    int countAbove = 0;
    int countBelow = 0;
    int position = 0;
    int highest = students[0];

    for(int i = 0; i < 10; i++){
        cout << "Student " << i + 1 << " attendance percentage: " << students[i] << endl;

        if(students[i] >= 75){
            countAbove++;
        } else {
            countBelow++;
        }

        if(students[i] > highest){
            highest = students[i];
            position = i;
        }
    }

    cout << "Number of students with attendance above or equal to 75%: " << countAbove << endl;
    cout << "Number of students with attendance below 75%: " << countBelow << endl;
    cout << "Student with highest attendance: Student " << position + 1 << endl;
    cout << "Highest attendance percentage: " << highest << "%" << endl;
    return 0;
}