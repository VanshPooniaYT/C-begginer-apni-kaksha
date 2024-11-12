#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number :- ";
    cin>>n;
    
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
        //we use break; to stop loop
        if(i==5){
            break;
        }
    }
    cout<<"sum = "<<sum<<"\n";

    return 0;
}