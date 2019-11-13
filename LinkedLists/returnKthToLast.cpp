#include<iostream>
#include "LinkedList.cpp"

using namespace std;

// Although LinkedList.cpp is doubly linked list I will use it in this problem as singly
string returnKthToLast(LinkedList<string> ll, int k){
    Node<string> * ptr = ll.getHead();
    int length = ll.getLength(); //If length is not being stored you can just to another linear scan to find the length in O(n) time
    int loop = length - k;
    if(loop <= 0 || k <= 0){
        return "";
    }else{
        for(int i = 1; i < loop; i++){
            ptr = ptr->next;
        }
        return ptr->val;
    }
 
}
int main(){
    cout << "Return Kth to Last" << endl;
    int n, k;
    LinkedList<string> ll;
    cout << "Enter Initial Elements For Linked List: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        string temp;
        cin >> temp;
        ll.insert(temp);
    }
    cout << "Enter Value of K" << endl;
    cin >> k;
    cout << "Linked List:" << endl;
    ll.print();
    cout << endl << "Ans = " << returnKthToLast(ll,k) << endl;
    return 0;
}