#include<iostream>
#include<unordered_set>
#include "LinkedList.cpp"

using namespace std;
void removeDupsSpace(LinkedList ll){
    unordered_set <string> hashTable;
    Node * ptr = ll.getHead();
    while(ptr){
        Node * nextPtr = ptr->next;
        if(hashTable.find(ptr->val) == hashTable.end()){
            hashTable.insert(ptr->val);
        } else{
            ll.del(ptr);
        }
        ptr = nextPtr;
    }
    return;
}
void removeDupsNoSpace(LinkedList ll){
    Node * ptr1;
    Node * ptr2;
    ptr1 = ll.getHead();
    while(ptr1){
        ptr2 = ptr1->next;
        while(ptr2){
            Node * nextPtr = ptr2->next;
            if(ptr1->val == ptr2->val){
                ll.del(ptr2);
            }
            ptr2 = nextPtr;
        }
        ptr1 = ptr1->next;
    }
    return;
}
int main(){
    cout << "Remove Dups" << endl;
    int n, s;
    LinkedList ll;
    cout << "Enter Initial Elements For Linked List: ";
    cin >> n;
    cout << "Space(1) or NoSpace(0): " << endl;
    cin >> s;
    for(int i = 0; i < n; i++){
        string temp;
        cin >> temp;
        ll.insert(temp);
    }
    cout << "Initially" << endl;
    ll.print();
    cout << endl << "After Removing Dups" << endl;
    if(s){
        removeDupsSpace(ll);
    } else {
        removeDupsNoSpace(ll);
    }
    ll.print();
    return 0;
}