#include <iostream>
using namespace std;
int main(){
    string name;
    double PMR;
    double CMR;
    double costPerUnit;
    double FMC;
    double DiscountPer;
    double TaxPer;
    int LatePayDays;

cout<<"Enter Customer Name: ";
getline(cin,name);
cout<<"Enter Previous Meter Reading: ";
cin>>PMR;
cout<<"Enter Current Meter Reading: ";
cin>>CMR;
cout<<"Enter Cost per Unit: ";
cin>>costPerUnit;
cout<<"Enter Fixed Monthly Charges: ";
cin>>FMC;
cout<<"Discount Percentage: ";
cin>>DiscountPer;
cout<<"Tax Percentage: ";
cin>>TaxPer;
cout<<"Enter Number of Late Payments Days: ";
cin>>LatePayDays;

    double unitConsumed = CMR - PMR;
    double energyCharges = unitConsumed * costPerUnit;
    double subtotal = energyCharges + FMC;
    double discountAmount = (DiscountPer / 100) * subtotal;
    double AmountAfterDiscount = subtotal - discountAmount;
    double TaxAmount = (TaxPer / 100) * AmountAfterDiscount;
    double BillBeforeLateFee = AmountAfterDiscount + TaxAmount;
    double LatePaymentFee = LatePayDays * 50;
    double FinalBill = BillBeforeLateFee + LatePaymentFee;

cout << "Electricity Bill" <<endl;
cout << " Customer Name: "<<name<<endl;
cout<<"Unit Consumed: " << unitConsumed <<endl;
cout<< "Energy Charges: "<<energyCharges<<endl;
cout<<"Fixed Monthly Charge:"<<FMC<<endl;
cout<<"SubTotal : "<<subtotal<<endl;
cout<<"Discount Amount: "<<discountAmount <<endl;
cout<<"Amount After Discount: "<<AmountAfterDiscount<<endl;
cout<<"Tax Amount: "<<TaxAmount<< endl;
cout<<"Late Payment Fee: "<<LatePaymentFee<<endl;
cout<<"Final Bill: "<<FinalBill<<endl;

return 0;
}