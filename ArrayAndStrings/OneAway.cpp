#include <iostream>

using namespace std;

bool oneAway(string first, string second){
    if(first.length() == second.length()){ //Edit Case
        bool editMade = false;
        for(int i=0; i < first.length(); i++){
            if(first[i] != second[i]){
                if(editMade){
                    return false;
                } else{
                    editMade = true;
                }
            }
        }
        return true;
    } else if(first.length() + 1 == second.length()){ //Add Case
        bool changeMade = false;
        int index = 0;
        for(int i = 0; i < second.length(); i++){
            if(second[i] != first[index++]){
                if(changeMade){
                    return false;
                } else{
                    changeMade = true;
                    index--;
                }
            } 
        }
        return true;
    } else if(first.length() - 1 == second.length()){ // Delete Case
        bool changeMade = false;
        int index = 0;
        for(int i = 0; i < first.length(); i++){
            if(first[i] != second[index++]){
                if(changeMade){
                    return false;
                } else{
                    changeMade = true;
                    index--;
                }
            }
        }
        return true;
    } else{
        return false;
    }
}
int main(){
    cout << "One Away" << endl;
    string first, second;
    cout << "Enter String 1:" << endl;
    cin >> first;
    cout << "Enter String 2:" << endl;
    cin >> second;
    cout << "Ans = " << oneAway(first,second) << endl;
}