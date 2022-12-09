#include<iostream>
using namespace std;

int main(){

    int even=0;
    int odd=0;
    int x;

    while(x!=0){
        cout << "Enter an integer: ";
        cin >> x;
        if(x%2==0&&x!=0){
            even++;
        }
        if(x%2!=0&&x!=0){
            odd++;
        }
       
    }
    
    cout << "#Even numbers = " <<even<<"\n";
    cout << "#Odd numbers = " <<odd<<"\n" ;

    return 0;
}