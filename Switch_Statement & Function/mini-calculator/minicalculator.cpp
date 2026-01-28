#include <iostream>
using namespace std;

int main(){
    cout<<"Enter the value of a: ";
    int a;
    cin >> a;

    cout<< "Enter the number of b: ";
    int b;
    cin >>b;

    // Operation

    char op;
    cout<<"Enter operation to porform";
    cin>>op;

    switch (op)
    {
    case '+':
        cout<<a+b<<endl;
        break;
    
    case '-':
        cout<<a-b<<endl;
        break;

    case '*':
        cout<<a*b<<endl;
        break;

    case '/':
        cout<<a/b<<endl;
        break;

    case '%':
        cout<<a%b<<endl;
        break;

    default:
        cout<<"Enter Valid operation"<<endl;
        break;
    }     
}