#include<iostream>
using namespace std;
int main(){
    int n,x=0;
    cout<<"enter the n value"<<endl;
    cin>>n;
    int n1 =n;
    while(n>0){
        x=n%10;
        n=n/10;
        while(n1>0){
            int y = n%10;
            if(y>=x){
                x=y;

            }else{
                
            }
        }
    }
    return 0;
}
// sum and avg of 2d array element
// sum of row 
// sum of each column
// maximum element in each row
// maximum element in each column
// transpose Matrix