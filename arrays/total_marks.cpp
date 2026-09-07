#include <iostream>
using namespace std;
int main(){
   int marks[3][4] = { 
    {75, 80, 68, 90},
    {85, 72, 91, 78},
    {60, 88, 75, 82}
}; 
for (int i = 0; i < 3; i++) {
    int totalMarks = 0;
    for (int j = 0; j < 4; j++) {
        totalMarks += marks[i][j];
    }
    cout << "Total marks for student " << i + 1 << " = " << totalMarks << endl;
}
   return 0;
}