#include <iostream>
using namespace std;
int main(){
    int array[3][4] = {
        {10, 20, 30, 40}, 
        {5, 15, 25, 35}, 
        {2, 4, 6, 8} 
        }; 

    for(int i = 0; i < 3; i++){
        int sumR = 0;
        for(int j = 0; j < 4; j++){
            sumR += array[i][j];
        }
        cout << "Sum of row " << i+1 << " = " << sumR << endl;
    }

    return 0;
}