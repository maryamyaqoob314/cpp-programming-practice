#include <iostream>
using namespace std;
int main(){
    int marks;
    int outStanding = 0;
    int good = 0;
    int improvement = 0;

    for(int i = 1; i <= 10; i++){
        cout << "Enter marks for student " << i << ": ";
        cin >> marks;

        if (marks >= 90) {
            outStanding++;
        } else if (marks >= 75) {
            good++;
        } else if (marks >= 50) {
            improvement++;
        }
    }
    
    cout << "Number of outstanding students: " << outStanding << endl;
    cout << "Number of good students: " << good << endl;
    cout << "Number of students needing improvement: " << improvement << endl;

    return 0;
}