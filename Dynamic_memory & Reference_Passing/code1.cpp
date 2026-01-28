// Accessing same element via two different variables:
#include <iostream>
using namespace std;

int main(){
    int i = 5;
    i++;
    cout<<"i= "<<i<<endl;

    int &j = i;
    j++;
    cout<<"j= "<<j<<endl;
    
    return 0;
}