#include<iostream>
#include<string>
using namespace std;
bool checkPermutaion(string first, string second){
    int char_array[256];
    for(int i = 0; i < 256; i++){
        char_array[i] = 0;
    }
    for(int i = 0; i < first.length(); i++){
        char_array[first[i]]++;
    }
    for(int i = 0; i < second.length(); i++){
        char_array[second[i]]--;
    }
    for(int i = 0; i < 256; i++){
        if(char_array[i]){
            return false;
        }
    }
    return true;
}

int main(){
    cout << "Check Permutation" << endl;
    string first, second;
    cout << "Enter String 1:" << endl;
    getline(cin, first);
    cout << "Enter String 2:" << endl;
    getline(cin, second);
    cout << "Ans = " << checkPermutaion(first, second) << endl;
    return 0;
}