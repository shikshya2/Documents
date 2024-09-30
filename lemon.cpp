#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter marks:";
    if(n>81 && n<100){
        cout<<"VERY GOOD";
    }
    else if(n>61 && n<80){
        cout<<"GOOD";
    }
    else{
        cout<<"FAIL";
    }
}
