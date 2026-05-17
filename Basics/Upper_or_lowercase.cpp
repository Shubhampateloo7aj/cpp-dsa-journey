#include <iostream>
using namespace std ;
int main(){
    char a ;
    cout<<"Enter a character : ";
    cin>> a ;
    if (a>=65 && a<=90){
        cout<<"Uppercase character ...";
    }
    else if (a>=97 && a<= 122){
        cout<<"Lowercase character...";
    }
    else{
        cout<<"Character neither uppercase nor lowercase ...";
    }
    return 0;

}
