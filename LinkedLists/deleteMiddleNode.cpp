#include <iostream>
#include "LinkedList.cpp"

using namespace std;
void deleteMiddleNode(Node<string> * ptr){
    if(ptr){
    ptr-> val = ptr->next->val;
    Node<string> * nextPtr = ptr->next->next;
    delete ptr->next;
    ptr->next = nextPtr;
    }
}

int main(){
    cout << "Delete Middle Node" << endl;
    int n;
    string val;
    LinkedList<string> ll;
    cout << "Enter Initial Elements For Linked List: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        string temp;
        cin >> temp;
        ll.insert(temp);
    }
    cout << "Enter Value of Node" << endl;
    cin >> val;
    cout << "Linked List:" << endl;
    ll.print();
    deleteMiddleNode(ll.search(val));
    cout << endl << "After Removal:" << endl;
    ll.print();
    return 0;
}