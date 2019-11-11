#include "LinkedList.h"
using namespace std;
LinkedList::LinkedList(){
    head = 0;
    tail = 0;
    length = 0;
}
void LinkedList::insert(string val){
    if(!head){
        head = new Node;
        head->val = val;
        head->next = 0;
        head->prev = 0;
        tail = head;
    }else{
        Node * newNode = new Node;
        tail->next = newNode;
        newNode->val = val;
        newNode->next = 0;
        newNode->prev = tail;
        tail = newNode;
    }
    length++;
}
void LinkedList::del(Node * ptr){
    if(ptr){
        if(ptr == head){
            head = ptr->next;
            if(head){
                head->prev = 0;
            } else{
                tail = head;
            }
            delete ptr;
        } else if(ptr == tail){
            tail = ptr->prev;
            tail->next = 0;
            delete ptr;
        }
        else{
            Node * prev = ptr->prev;
            Node * next = ptr->next;
            prev->next = next;
            next->prev = prev; 
            delete ptr;
        }
        length--;
    }
    return;
}
Node * LinkedList::search(string val){
    Node * ptr = head;
    while(ptr){
        if(ptr->val == val){
            return ptr;
        }
    }
    return 0;
}
void LinkedList::print(){
    Node * ptr = head;
    while(ptr){
        cout << "Val = " << ptr->val  << " Next=" << ptr->next << " Prev=" << ptr->prev << endl;
        ptr = ptr->next;
    }
    return;
}
int LinkedList::getLength(){
    return length;
}
Node * LinkedList::getHead(){
    return head;
}
