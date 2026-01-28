#include<iostream>
using namespace std;
int reverse(char arr[], int n){
    int s = 0;
    int e = n-1;
    while(s<e){
        swap(arr[s++], arr[e--]);
    }
}
int main(){
    char name[20];
    cin>>name;
    // int size = sizeof(name[20])/sizeof(name[0]);

    reverse(name, 20);
    cout<<name<<endl;
}