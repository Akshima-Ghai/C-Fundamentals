#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int a,b,c,max;
    cin >> a >> b >> c;
    if(a>=b && a>=c){
        max=a;
        if(b*b+c*c == a*a){
            cout<<"true";
            return 0;
        }
    }
    else if(b>=a && b>=c){
        max=b;
        if(a*a+c*c == b*b){
            cout<<"true";
            return 0;
        }
    }else{
        max=c;
        if(b*b+a*a == c*c){
            cout<<"true";
            return 0;
        }
    }
    cout<<"false";
    
    //write your code here
    
}
