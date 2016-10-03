#include <iostream>
#include <cmath>
using namespace std;

int main()
{
double L,N,Rate;
double Payment,AmountPaid,InterestPaid;

cout<<"Enter Loan Amount:    ";
cin>>L;
cout<<"Enter Montly Interest Rate(Decimal):   ";
cin>> Rate;
cout<<"Enter Number of Payments:    ";
cin>> N;

Payment = (Rate*(pow(1+Rate,N)))/((pow(1+Rate,N))-1);
AmountPaid = Payment*N;
InterestPaid = AmountPaid - L;
cout<<"Loan Amount:               $ "<<L<<endl;
cout<<"Monthly Interest Rate:       "<<Rate*100<<"%"<< endl;
cout<<"Number of Payments:          "<<N<<endl;
cout<<"Monthly Payment:           $ "<<Payment<<endl;
cout<<"Amount Paid Back:          $ "<<AmountPaid<<endl;
cout<<"Interest Paid:             $ "<< InterestPaid<<endl;


return 0;


}
