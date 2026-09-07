#include <iostream>
using namespace std;
int main(){
int marks;
int passCount = 0;
int failCount = 0;
    
cout << "Enter marks of Student: ";
cin >> marks;
while (marks != -1){
    if (marks >= 50){
        cout << "Student Passed. \n";
        passCount++;
    }
    else{
        cout << "Student Failed. \n";
        failCount++;
    }
    cout << "Enter marks of Student: ";
    cin >> marks;
}
cout << "Number of students who passed: " << passCount << endl;
cout << "Number of students who failed: " << failCount << endl;
return 0;
}