#include<iostream>
#include<iomanip>

using namespace std;

//function prototypes
double Add(double a, double b);
double Sub(double a, double b);
double Mult(double a, double b);
double Div(double a, double b);

double Add(double a, double b){

    return a + b;
}

double Sub(double a, double b){

    return a - b;
}

double Mult(double a, double b){

    return a * b;
}

double Div(double a, double b){
    if(b == 0){
        cout << "Can't divide by zero." << endl;
        return 0;
    }
    return a / b;
}


int main(){

    int option = 0;
    double num1 = 0.00;
    double num2 = 0.00;
    double res = 0.00;
    string choice = "";

    cout << "Welcome to the basic calculator." << endl;

    do{
        cout << "Enter in the first number: " << endl;
        cin >> num1;

        cout << "Enter in  the second number: " << endl;
        cin >> num2;

        do{
            cout << "Here is a list of operations:" << endl;
            cout << "1. Addition" << endl;
            cout << "2. Subtraction" << endl;
            cout << "3. Multiplication" << endl;
            cout << "4. Division" << endl;
            cout << "Enter in an operation (1-4)" << endl;
            cin >> option;

            if(option < 1 || option > 4){
                cout << "Please enter in a valid operation." << endl;
            }


        }while(option < 1 || option > 4);

        switch(option){

            case 1:
                res = Add(num1,num2);
                break;
            
            case 2:
                res = Sub(num1,num2);
                break;
            
            case 3:
                res = Mult(num1,num2);
                break;
            
            case 4:
                res = Div(num1,num2);
                break;
        }
        cout << "The result is: " << std::fixed << std::setprecision(2) << res << endl;
        cout << "Would you like to perform another operation?" << endl;
        cin >> choice;

    }while(choice != "N" || choice != "n");


    return 0;
}