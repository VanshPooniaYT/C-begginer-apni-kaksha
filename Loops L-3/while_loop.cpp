#include <iostream>
using namespace std;
int main (){
    int n ;

    cout<<"Enter number till which you want to print numbers\n:-";
    cin>>n;

    int count =1;
    while(count<=n){
        cout<<count<<" ";
        count++;
    }
    cout<<endl;

    return 0;
}