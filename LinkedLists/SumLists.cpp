#include<iostream>
#include "LinkedList.cpp"
using namespace std;

LinkedList<int> sumLists(LinkedList<int> ll1, LinkedList<int> ll2){
    Node<int> * ptr1 = ll1.getHead();
    Node<int> * ptr2 = ll2.getHead();
    LinkedList<int> l3;
    int carry = 0;
    while(ptr1 && ptr2){
        int sum = ptr1->val + ptr2->val + carry;
        int store = sum % 10;
        carry = sum / 10;
        l3.insert(store);
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    while(ptr2){
        int sum = ptr2->val + carry;
        int store = sum % 10;
        carry = sum / 10;
        l3.insert(store);
        ptr2 = ptr2->next;
    }
    while(ptr1){
        int sum = ptr1->val + carry;
        int store = sum % 10;
        carry = sum / 10;
        l3.insert(store);
        ptr1 = ptr1->next;
    }
    if(carry){
        l3.insert(carry);
    }
    return l3;
}
int main(){
    cout << "Sum Lists" << endl;
    LinkedList<int> ll1, ll2;
    int ll1length, ll2length;
    cout << "Enter Length Of List 1: ";
    cin >> ll1length;
    for(int i = 0; i < ll1length; i++){
        int temp;
        cin >> temp;
        ll1.insert(temp);
    }
    cout << "Enter Length Of List 2: ";
    cin >> ll2length;
    for(int i = 0; i < ll2length; i++){
        int temp;
        cin >> temp;
        ll2.insert(temp);
    }
    LinkedList<int> ll3 = sumLists(ll1, ll2);
    ll3.print();
    return 0;
}