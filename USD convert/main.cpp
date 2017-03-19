//
//  main.cpp
//  USD convert
//
//  Created by Alicia Dale on 3/2/16.
//  Copyright © 2016 Alicia Dale. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;
    //Defalut menu displayed to console
void displayMenu()
{
    cout << "*************************" << endl;
    cout << " \tConvert USD to your selection of foreign currency"<<endl;
    cout << "This program will ask the user to enter how many USD to convert" << endl;
    cout << " \tEnter C to convert to Canadian Dollars." << endl;
    cout << "\tEnter E to convert to European Euro." << endl;
    cout << "\tEnter R to convert to Indian Rupee." << endl;
    cout << "\tEnter Y to convert to Japanese Yen" << endl;
    cout << "\tEnter P to convert to Mexican Peso." << endl;
    cout << "\tEnter A to convert to African Rand" << endl;
    cout << "\tEnter B to convert to British Pound." <<endl;
}

void convertCanadian(int USDollar,const double CANADIAN_DOLLAR)
{
    double conversion;
    conversion = USDollar * CANADIAN_DOLLAR;
    cout << fixed << setprecision(2);
    cout << "The Canadian value of your USD is: "<< conversion << endl;
}





void convertEuro(int USDollar, const double EURO)
{
    double conversion;
    conversion = USDollar * EURO;
    cout << fixed << setprecision(2);
    cout << "The European Euro value of your USD is: " << conversion << endl;
}




void convertRupee(int USDollar, const double INDIAN_RUPEE)
{
    double conversion;
    conversion = USDollar * INDIAN_RUPEE;
    cout << fixed << setprecision(2);
    cout << "The Indian Rupee value of your USD is: " << conversion << endl;
}




void convertYen(int USDollar, const double YEN)
{
    double conversion;
    conversion = USDollar * YEN;
    cout << fixed << setprecision(2);
    cout << "The Japanese Yen value of your USD is: " << conversion << endl;
}




void convertPeso(int USDollar, const double PESO)
{
    double conversion;
    conversion = USDollar * PESO;
    cout << fixed << setprecision(2);
    cout << "The Mexican Peso value of your USD is: " << conversion << endl;

}




void convertRand(int USDollar, const double AFRICAN_RAND)
{
    double conversion;
    conversion = USDollar * AFRICAN_RAND;
    cout << fixed << setprecision(2);
    cout << "The African Rand value of your USD is: " << conversion << endl;
}





void convertPound(int USDollar, const double BRITISH_POUND)
{
    double conversion;
    conversion = USDollar * BRITISH_POUND;
    cout << fixed << setprecision(2);
    cout << "The British Pound value of your USD is: " << conversion << endl;
}



void convertCanadian();
void convertEuro();
void convertRupee();
void convertYen();
void convertPeso();
void convertRand();
void convertPound();



int main(int argc, const char * argv[]) {
    
    
    displayMenu();
    
    
    // Declare Variables
    int USDollar = 0;
    const double CANADIAN_DOLLAR = .9813;
    const double EURO = .757;
    const double INDIAN_RUPEE = 52.53 ;
    const double YEN = 80.92;
    const double PESO = 13.1544;
    const double AFRICAN_RAND = 7.7522;
    const double BRITISH_POUND = .6178;
    char convert;
    
    
   
        //Prompt the user to enter USD they want to convert
    
    cout << "How many US dollars would you like to convert: " << endl;
    cin >> USDollar;
    
    
        //Must enter a number greater than 0, generated if statement to check status of number and if valid input
    
    if (USDollar <= 0)
    {
        cout << "Please enter a number greater than 0."<< endl;
        cout << "How many US dollars would you like to convert: "<< endl;
        cin >> USDollar;
    }
    else
    {
        cout <<"You would like to convert US dollar amount of: " << USDollar << endl;
    }

    
        //Prompt user to enter which currency to convert to
    cout << "Please Enter which foreign currency you would like to convert to (C, E, R, Y, P, A, or B): ";
    cin >> convert;
    convert = toupper(convert);
    
    
    
    
    
        //Currency is chosen and calculted to the user based on their input of conversion
    
    switch (convert)
    {
        case 'C':
            convertCanadian(USDollar,CANADIAN_DOLLAR);
            break;
    
        case 'E':
            convertEuro(USDollar,EURO);
            break;
            
        case 'R':
            convertRupee(USDollar,INDIAN_RUPEE);
            break;
            
        case 'Y':
            convertYen(USDollar,YEN);
            break;
            
        case 'P':
            convertPeso(USDollar,PESO);
            break;
            
        case 'A':
            convertRand(USDollar,AFRICAN_RAND);
            break;
            
        case 'B':
            convertPound(USDollar,BRITISH_POUND);
            break;
        
        
        default:
            displayMenu();
            break;
    }
    
    
    
    
    
    return 0;
}
