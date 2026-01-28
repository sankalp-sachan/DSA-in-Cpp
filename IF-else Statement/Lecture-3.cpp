#include<iostream>
using namespace std;

int main() {
    // int n ;
    // cin>>n;
// 
    // if (n>0)
    // {
    //     cout <<"N is a positive number"<<endl;
    // }else
    // {
    //     cout <<"N is a negative number"<<endl;
    // }
    // 
    // int a,b;
    // 
    // a = cin.get();
    // cout<<"Value of a and b is"<< a <<" and "<<b <<endl;
// 
    // cout<< "Value of a is :" <<a<<endl;

    /*int a;

    cout<<"Enter the value for a:";
    cin>>a;

    if (a > 0)
    {
        cout << "A is Positive Number" << endl;
    }
    else{
        if (a == 0)
        {
            cout << "Number is zero" << endl;
        }
        else
        {
            cout << "A is Negative Number" << endl;
        }
    }*/

    /* int a;

    cin >>a;

    if(a<20){
        cout << "Love";
    }
    else if (a == 24)
    {
        cout <<"Lovely";
    }
    else{
        cout<<"Babbar";
    }
    
    cout<<a;*/
    int a;
    cin >> a;
    
    int sum = 0;
    int i = 1;
    while (i <= a)
    {
        // cout<<i<<" "<<endl;
        sum = sum+i;
        i = i+1;

        // cout<<"Loop Completed"<<endl;
    }
    cout<<"Value of Sum is"<<sum<<endl;
    


}

