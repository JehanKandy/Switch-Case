#include <iostream>

using namespace std;



int n1, n2;
char op;

int main()
{
    cout << "JEHANKANDY CAL \n";
    cout << "To exit from cal ->> enter 'F' in Operator \n\n";
    do{
        cout << "Enter 1st Number : ";
        cin >> n1;

        cout << "Select the Operator (+ - * /) : ";
        cin >> op;

        cout << "Enter 2nd  Number : ";
        cin >> n2;


        switch (op){
        case '+':
            cout << "Total is : " << n1 + n2 << "\n\n";
            break;
        case '-':
            cout << "Sub is : " << n1 - n2 << "\n\n";
            break;
        case '*':
            cout << "Multiplication is : " << n1 * n2 << "\n\n";
            break;

        case '/':
            if (n2 == 0){
                cout << "Can not Divied By Zero \n\n";
            }else{
                cout << "Division is : " << n1 / n2 << "\n\n";
            }
            break;

        default:
            if(op == 'F'){
                cout << "\n Thank you for using my cal \n\n";
            }else{
                cout << "You Selected Wrong Operator \n\n";
            }
        }

    }while(op != 'F');
    return 0;
}
