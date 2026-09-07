#include <iostream>
using namespace std;
int main(){
    int days[7] = {1, 2, 3, 4, 5, 6, 7};
    int sales[7] = {1200, 950, 1500, 1800, 1100, 900, 2000};
    int totalSales = 0;
    int averageSales = 0;
    int highestSales = sales[0];
    int lowestSales = sales[0];
    int highestSalesDay = days[0];
    int lowestSalesDay = days[0];
    int countGreater = 0;

    for(int i=0; i <7; i++){
        totalSales += sales[i];
        averageSales = totalSales / 7;

        if(sales[i] > highestSales){
            highestSales = sales[i];
            highestSalesDay = days[i];
        }
        if(sales[i] < lowestSales){
            lowestSales = sales[i];
            lowestSalesDay = days[i];
        }
        if(sales[i] > 1000){
            countGreater++;
        }
    }
    cout << "Total sales for the week: Rs." << totalSales << endl;
    cout << "Average sales for a day: Rs." << averageSales << endl;
    cout << "Highest sales day: Day " << highestSalesDay << endl;
    cout << "Lowest sales day: Day " << lowestSalesDay << endl;
    cout << "Number of days with sales greater than Rs. 1000: " << countGreater << endl;
    return 0;
}