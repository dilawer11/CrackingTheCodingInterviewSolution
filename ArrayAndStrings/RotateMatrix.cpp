#include<iostream>

using namespace std;
void displayMatrix(int ** matrix, int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
void rotateMatrix(int ** matrix, int n){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    return;
}

int main(){
    cout << "Rotate Matrix" << endl;
    cout << "Enter the Value of N: " << endl;
    int n;
    cin >> n;
    cout << "Enter Values: " << endl;
    int ** matrix = new int *[n];
    for (int i = 0; i < n; i++){
        matrix[i] = new int[n];
        for(int j = 0; j < n; j++){
            cin >> matrix[i][j];
        }
    }
    cout << "Displaying Input Matrix" << endl;
    displayMatrix(matrix, n);
    rotateMatrix(matrix, n);
    cout << "Rotated Matrix" << endl;
    displayMatrix(matrix, n);
    return 0;
}