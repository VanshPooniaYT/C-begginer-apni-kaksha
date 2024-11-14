#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number :- ";
    cin>>n;
    for(int i = 0 ;i<=n-1 ; i++){
        char ch = 'A'; 
        for(int j = 0 ; j<n ; j++){
            cout<<ch;
            ch = ch+1;//65+1 = B , 65+2 = C
        }
        cout<<endl;
        
    }
    return 0;
}