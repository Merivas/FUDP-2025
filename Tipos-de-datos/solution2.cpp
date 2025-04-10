#include <iostream>
#include <cmath>

using namespace std;

int main(){
//Variables
    int number,numberAddition,numberSubstraction,numberMultiplication,numberDivition,numberPotency,numberHigher;
    bool numberPair;

//This is the first step to do different math exercises
    cout<<"Insert any number"<<endl;
    cin>>number;

    numberAddition=number+10;
    cout<<" your number + 10 is:"<<numberAddition<<endl;

    numberSubstraction=number-5;
    cout<<"Your number -5 is: "<<numberSubstraction<<endl;

    numberMultiplication=number*2;
    cout<<"Your number per 2 is "<<numberMultiplication<<endl;

    numberDivition=number/4;
    cout<<"Your number divideb by 4 is:  "<<numberDivition<<endl;

    numberPotency=number=pow(number,1500); 
    cout<<"Your number to the power of 1500 is : "<<numberPotency<<endl;

    numberPair=number>0 && number%2==0;

    cout<<"Your number if pair if you can see a number 0 and  your number is unpair if you can see a number 1"<<numberPair<<endl;

    return 0;

    /*With this program we can do different process to improve our math skills*/
}
