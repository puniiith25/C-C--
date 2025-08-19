#include<iostream>
using namespace std;
int main(){

    int n, i, j;
    cin >> n;
    int mat1[n][n], mat2[n][n], sum[n][n];
    cout << "Enter elements of first matrix:\n";
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            cin >> mat1[i][j];
    cout << "Enter elements of second matrix:\n";
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            cin >> mat2[i][j];
 
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            sum[i][j] = mat1[i][j] + mat2[i][j];
   
    cout << "Sum of the matrices:\n";
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            cout << sum[i][j] << " ";
        cout << endl;
    }
    return 0;
}