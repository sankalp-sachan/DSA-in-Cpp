#include <iostream>
using namespace std;

int main(){
    int even[2] = {2,5};
    int temp = even[1];
    // cout<<even[1]<<endl;

    even[1] = even[2];
    even[2] = temp;

    cout<<even[2]<<endl;


}