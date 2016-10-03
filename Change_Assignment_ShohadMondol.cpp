/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <cstdlib>
#include <iostream>

using namespace std;

static int prog_change()
{

int five_dollarC,dollarC,quarterC,dimeC, nickelC,pennyC;
float price;
float tender;
float change;

cout<< "Enter Item Price:" << endl;
cin >>price;
cout<< "Enter Amount tendered: "<< endl;
cin >> tender;

if(price && tender <= 20) {
price = price*100;
tender = tender *100; 
change = tender - price;
five_dollarC = (int)(change/500);
change = change -(500*five_dollarC);
dollarC = (int)change/100;
change = change-(100*dollarC);
quarterC = (int)change/25;
change = change-(25*quarterC);
dimeC = (int)change/10;
change = change-(10*dimeC);
nickelC = (int)change/5;
change = change - (5*nickelC);
pennyC = (int)change/1;
change = change - (1*pennyC);

cout<< "Amount Tendered: " << tender/100 << endl;
cout<< "Price: " << price/100<< endl;
cout << "Change: "<< (tender - price)/100 << endl;
cout << "Your change is : " << endl;
cout << "5 Dollar Bills: " << five_dollarC <<endl;
cout << "1 Dollar Bills: " << dollarC << endl;
cout << "Quarters: " << quarterC << endl;
cout << "Dimes: " << dimeC << endl;
cout << "Nickels: " << nickelC << endl;
cout << "Pennies:" << pennyC << endl;

return 0;
}
else
    cout << "invalid Amount, must be less than 20" << endl;
    return 0;


}




static int(*currentProgram)(void) = prog_change;
int Change_Assignment_ShohadMondol() {
	return currentProgram();
}




