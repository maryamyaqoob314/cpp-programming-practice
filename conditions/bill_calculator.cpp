#include <iostream>
using namespace std;
int main () {
    int units;
    cout << "Enter Number of Units: ";
    cin >> units;
    
    if(units <= 100){
        cout <<"cost per unit is 10. \n";
    }
    else if(units <= 200){
        cout <<"cost per unit is 15. \n";
    }
    else if(units <= 300){
        cout <<"cost per unit is 20. \n";
    }
    else{
        cout <<"cost per unit is 25. \n";
    }
    return 0;
}