#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int low, high;
    cin >> low >> high;
    int j;
    for(int i=low;i<=high;i++){
        for(j=2;j*j<=i;j++){
            if(i%j==0){
                break;
            }
        }
        if(j*j>i){
            cout<<i<<endl;
        }
    }
    //write your code here

}
