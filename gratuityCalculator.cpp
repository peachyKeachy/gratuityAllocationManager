/******************************************************************************

COP 3530
Martin Becerra JR

Calculator to add a customer's subtotal to their tip amount.

*******************************************************************************/
#include <stdio.h>
#include <iostream>


int main()
{
    char userChoice;
    do
    {
        
   //variables
    double subtotal;
    int tip;
    
    int tipChoice;
    
    double tipPercent;
    double tipPercentTotal;
    
    double exactTip;
    double exactTipTotal;
    
    
   //Ask guest to enter their subtotal    
   std::cout << "Enter the subtotal: ";
   std::cin >>  subtotal;
   
   
   //Ask guest to choose a tip type
   std::cout << "Type '1' to leave a tip percent or type '2' to leave an exact tip amount:  ";
   std::cin >> tip;
   
   
   //Calculations for grand total depending on if guest wants to enter a percentage or exact dollar amount
   if (tip == 1){
       
       std::cout << "Please enter your desired percentage: ";
       std::cin >> tipPercent;
       
       tipPercentTotal = subtotal * tipPercent/100.0;
       
       
   } else if (tip == 2){
       
       std::cout << "Please enter your desired exact amount: ";
       std::cin >> exactTip;
       
       exactTipTotal = subtotal + exactTip;
    
   }
   
   
   //Output the receipt
   std::cout << "Receipt "<< std::endl;
   std::cout << "Subtotal: $" << subtotal << std::endl;
   
   
   //Tip
   if (tipPercent = tipPercent){
       std::cout << "Tip ($" << tipPercent * subtotal / 100.0 << "): %" << tipPercent << std::endl;
   }else if (exactTip = exactTip){
       std::cout << "Tip (%" << exactTip / subtotal * 100.0<< "): $" << exactTip << std::endl;
   }
   
   
   //dashes to separate the grandtotal from the subtotal and tip
   std::cout << "--------" << std::endl;
   
   
   //Total
   if (exactTipTotal = exactTipTotal){
       std::cout << "Total: $" << exactTip + subtotal << std::endl;
   }else if(tipPercentTotal = tipPercentTotal){
       std::cout << "Total: $" << tipPercentTotal + subtotal << std::endl;
   }
    
    
    //loop program again
    std::cout << "Would you like to run this program again? (y/n): ";
    std::cin >> userChoice;
    }while(userChoice == 'y' || userChoice == 'Y');

    
    return 0;
}
