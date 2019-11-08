#include<iostream>

using namespace std;
bool checkUnique(string str){
    bool map[255];
    for(int i=0;i < 255 ;i++){
        map[i] = 0;
    }
    for(int i=0;i<str.length() ;i++){
        if(map[str[i]]){
            return false;
        }else{
            map[str[i]] = 1;
        }
    }
    return true;
}

int main() {
    cout << "Unique Characters" << endl;
    cout << "Input String: ";
    string input_string;
    cin >> input_string;
    cout << endl;
    bool result = checkUnique(input_string);
    if(result){
        cout << "UNIQUE" << endl;
    } else{
        cout << "NOT UNIQUE" << endl;
    }
    return 0;
}