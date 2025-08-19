#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements: ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<"Sum of the array elements is: "<<sum;

    return 0;
}
