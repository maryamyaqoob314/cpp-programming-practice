#include <iostream>
using namespace std;

double calculateBill(int units){
    int price;
    if(units <= 100){
        price = 10;
    }
    else if(units <= 200){
        price = 15;
    }
    else if(units <= 300){ 
        price = 20;
    }
    else{
        price = 25;
    }
    return units * price;
}
int main(){
    int units = 250;
    double billAmount = calculateBill(units);
    cout << "Units consumed: " << units << endl;
    cout << "Total bill: Rs." << billAmount << endl;
    return 0;
}