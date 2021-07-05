#include <bits/stdc++.h>
using namespace std;

int main(int argc, char **argv){
    long n;
    cin >> n;
    long len = to_string(n).length();
    long power = pow(10,len-1);
    while(power>0){
        cout<< n/power<<endl;
        n=n%power;
        power=power/10;
    }
    //write your code here
    
}
