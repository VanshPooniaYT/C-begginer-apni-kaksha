//creating loop inside loop
#include<iostream>
using namespace std;
int main(){
int n = 10;
   for(int i=1; i<=n ; i++){//Lines
       int x =2;
      for(int j =1;j<=x; j++){//star in 1 line
         cout<<"*";
    }
     cout<<endl;
    }
   
    return 0 ;
}
