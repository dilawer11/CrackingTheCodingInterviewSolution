#include<iostream>

using namespace std;
bool isSubstring(string first, string second){
    for(int i = 0; i < second.length(); i++){
        if(second[i] == first[0]){
            int index = 0;
            while(first[index] == second[index + i] && index < first.length()){
                index++;
            }
            if(index == first.length()){
                return true;
            }
        }
    }
    return false;
}
bool stringRotation(string one, string two){
    string combined = one + one;
    return isSubstring(two,combined);
}
int main(){
    cout << "String Rotatation" << endl;
    string one, two;
    cout << "Enter String 1: ";
    cin >> one;
    cout << "Enter String 2: ";
    cin >> two;
    cout << "Ans = " << stringRotation(one, two) << endl;
    return 0;
}