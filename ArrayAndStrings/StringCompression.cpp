#include <iostream>
#include <string>
using namespace std;
string stringCompression(string str){
    int oldStringLength = str.length();
    string newString = "";
    char currentChar = str[0];
    int currentCount = 1;
    for(int i = 1; i < str.length(); i++){
        if(str[i] == currentChar){
            currentCount++;
        } else{
            newString += currentChar;
            newString += to_string(currentCount);
            currentChar = str[i];
            currentCount = 1;
        }
    }
    newString += currentChar;
    newString += to_string(currentCount);
    if(newString.length() < oldStringLength){
        return newString;
    } else{
        return str;
    }
    
}
int main(){
    cout << "String Compression" << endl;
    cout << "Enter String: " << endl; 
    string str;
    getline(cin, str);
    cout << "Compressed String = " << stringCompression(str) << endl;
    return 0;
}