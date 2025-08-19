#include<iostream>
using namespace std;
int main(){
    int n, i, j;
    cout<<"Enter n value: ";
    cin>>n;
    int mat1[n][n], mat2[n][n], product[n][n];
    cout << "Enter elements of first matrix:\n";
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            cin >> mat1[i][j];
    cout << "Enter elements of second matrix:\n";
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            cin >> mat2[i][j];
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            product[i][j] = 0;
            for (int k = 0; k < n; k++)
                product[i][j] += mat1[i][k] * mat2[k][j];
        }
    }
   
    cout << "Product of the matrices:\n";
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            cout << product[i][j] << " ";
        cout << endl;
    }
    return 0;
}