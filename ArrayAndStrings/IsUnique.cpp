#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
bool addDSSolution(string str){
    bool char_array[256];
    for(int i = 0; i < 256; i++){
        char_array[i] = false;
    }
    for(int i = 0; i < str.length(); i++){
        if(char_array[str[i]]){
            return false;
        } else{
            char_array[str[i]] = true;
        }
    }
    return true;
}
bool nonAddDSSolution(string str){
    sort(str.begin(),str.end());
    for(int i = 0 ; i < str.length() -1 ; i++){
        if(str[i] == str[i + 1]){
            return false;
        }
    }
    return true;
}
int main(){
    cout << "Is Unique" << endl;
    cout << "Enter String: " << endl;
    string input_str;
    getline(cin,input_str);
    cout << "Additional DataStructure Solution = " << addDSSolution(input_str) << endl;
    cout << "Non-Additional DataStructure Solution = " << nonAddDSSolution(input_str) << endl;
    return 0;
}