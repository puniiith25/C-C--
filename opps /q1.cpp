#include<iostream>
using namespace std;
int main(){
    int n ,k,f=0;
    cout<<"Enter the N Value\n";
    cin>>n;
    int n1=n;
    int arr[4];
    int i=3;
    while(n>0){
        arr[i] = n%10;
        n=n/10;
        i--;
    }
    cout<<"Enter which position number you want in this  "<<n1<<"=";
    cin>>k;
    if(k<4){
         for(int i =0;i<4;i++){
        if(k==i){
             cout<<arr[i];
             f=1;
             break;
        }    
    }
    }else{
        cout<<"invalid position";
    }
    return 0;
}