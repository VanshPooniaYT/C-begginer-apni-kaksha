#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number :- ";
    cin>>n;
    
    int i = 1;
    int sum = 0;
    while(i <= n){
        i++;
        sum+=i;
    
    }
    cout<<sum<<"\n";
    return 0;
}