#include<iostream>

using namespace std;
void printMatrix(int ** matrix, int m, int n){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
void zeroMatrix(int ** matrix, int m, int n){
    bool * rowArray = new bool [m];
    bool * colArray = new bool [n];
    for(int i = 0; i < m ; i++){
        rowArray[i] = 0;
    }
    for(int i = 0; i < n; i++){
        colArray[i] = 0;
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(!matrix[i][j]){
                rowArray[i] = 1;
                colArray[j] = 1;
            }
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            if(rowArray[i] || colArray[j]){
                matrix[i][j] = 0;
            }
        }
    }
    return;
}
int main(){
    cout << "Zero Matrix" << endl;
    cout << "Enter M of MxN Matrix: ";
    int M,N;
    cin >> M;
    cout << "Enter N of MxN Matrix: ";
    cin >> N;
    int ** matrix = new int * [M];
    cout << "Enter Matrix Elements:" << endl;
    for (int i = 0; i < M; i++){
        matrix[i] = new int[N];
        for(int j = 0; j < N; j++){
            cin >> matrix[i][j];
        }
    }
    cout << endl << "Entered Matrix" << endl;
    printMatrix(matrix, M, N);
    zeroMatrix(matrix, M, N);
    cout << endl << "Zero Matrix" << endl;
    printMatrix(matrix, M, N);
    return 0;
}