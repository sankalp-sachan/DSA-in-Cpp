#include <iostream>
using namespace std;

int main(){
    int i;
    cin>>i;

    cout<<(i++)<<endl;
    cout<<"I after Post Increment"<<(i)<<endl;
    cout<<"I after Pre Increment" <<(++i)<<endl;

    cout<<"Now I becomes" <<i<<endl;


    cout<< "Now its Decrement of"<<i <<endl;

    cout<<(i--)<<endl;
    cout<<"I after Post Decrement"<<i<<endl;
    cout<<"I after Pre Decrement"<<(--i)<<endl;

    cout<<"the value of i is same as input"<<i<<endl;
}