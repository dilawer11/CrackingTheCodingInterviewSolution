#include<iostream>

using namespace std;
bool palindromePermutation(string str){
    int char_array[26];
    for (int i = 0; i < 26; i++){
        char_array[i] = 0;
    }
    for(int i = 0; i < str.length(); i++){
        if(str[i] > 96){
            str[i] -= 32; //covert to lowercase
        }
        str[i] -= 64;
        if(str[i] >= 0 && str[i] < 26){
            char_array[str[i]]++;
        }
    }
    bool oneOdd = false;
    for(int i = 0; i < 26; i++){
        if(char_array[i] % 2){
            if(oneOdd){
                return false;
            } else{
                oneOdd = true;
            }
        }
    }
    return true;
}

int main(){
    cout << "Palindrome Permutation" << endl;
    cout << "Enter String:" << endl;
    string str;
    getline(cin, str);
    cout << "Ans = " << palindromePermutation(str) << endl;
    return 0;
}