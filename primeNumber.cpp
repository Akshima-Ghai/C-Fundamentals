#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        int i;
        if(n==1){
            cout<<"prime"<<endl;
            continue;
        }
        for(i=2;i<n;i++){
            
            if(n%i==0){
                cout<<"not prime"<<endl; 
                break;
            }
        }
        if(i==n){
            cout<<"prime"<<endl;
        }
    }
    return 0;
    //write your code here
    
}
