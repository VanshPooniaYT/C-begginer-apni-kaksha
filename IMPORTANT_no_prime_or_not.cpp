//Q:-find number is prime or not
#include<iostream>
using namespace std;
int main(){
    int n = 6;
    bool isPrime = true;//we considering no. prime
    
    for (int i =2 ; i<=n-1 ; i++){
        if( n%i == 0 ){ //non prime
        isPrime = false; //n%i==0 than change isPrime variable value
        break;//stop loop
        }

    }
    if(isPrime == true){//isPrime variable equal to true

        cout<<"prime no\n";
    }else{
        cout<< "non prime no\n";
        
    }

    return 0 ;
}
//Becarefull while doing this problem