#include <iostream> 
using namespace std;
int main(){
    int totalFloors = 3;
    int roomsPerFloor = 6;

    for(int floor = 1; floor <= totalFloors; floor++){
        cout <<"Floor " << floor << endl;
        for(int room = 1; room <= roomsPerFloor; room++){
            cout << "Room " << floor << "0" << room << endl;
        }
        cout <<endl;
    }
    
    return 0;
}