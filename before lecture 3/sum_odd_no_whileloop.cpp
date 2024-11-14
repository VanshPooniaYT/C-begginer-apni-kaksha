#include <iostream>
using namespace std;
int main(){
    int n = 9;
    int oddSum=0;
    int number=1;

    while(number<=n){
        
        

        if(number %2 !=0){
            
            oddSum+=number;
        }
            number++;
    }
    cout<<"Sum of odd numbers :- "<<oddSum<<"\n";

    return 0;
  
}