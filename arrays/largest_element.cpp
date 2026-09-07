#include <iostream>
using namespace std;
int main(){
int array[3][4] = { 
    {10, 25, 30, 15}, 
    {45, 12, 60, 22}, 
    {18, 35, 27, 50} 
    }; 
int largest = array[0][0];
for(int i = 0; i < 3; i++){
    for(int j = 0; j < 4; j++){
        if(array[i][j] > largest){
            largest = array[i][j];
        }
    }
}
cout << "Largest element = " << largest << endl;
return 0;
}