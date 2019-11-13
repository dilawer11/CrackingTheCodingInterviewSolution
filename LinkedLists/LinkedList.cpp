#include "LinkedList.h"
using namespace std;
template<class T>
LinkedList<T>::LinkedList(){
    head = 0;
    tail = 0;
    length = 0;
}
template<class T>
void LinkedList<T>::insert(T val){
    if(!head){
        head = new Node<T>;
        head->val = val;
        head->next = 0;
        head->prev = 0;
        tail = head;
    }else{
        Node<T> * newNode = new Node<T>;
        tail->next = newNode;
        newNode->val = val;
        newNode->next = 0;
        newNode->prev = tail;
        tail = newNode;
    }
    length++;
}
template<class T>
void LinkedList<T>::del(Node<T> * ptr){
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
            Node<T> * prev = ptr->prev;
            Node<T> * next = ptr->next;
            prev->next = next;
            next->prev = prev; 
            delete ptr;
        }
        length--;
    }
    return;
}
template<class T>
Node<T> * LinkedList<T>::search(T val){
    Node<T> * ptr = head;
    while(ptr){
        if(ptr->val == val){
            return ptr;
        }
        ptr = ptr->next;
    }
    return 0;
}
template<class T>
void LinkedList<T>::print(){
    Node<T> * ptr = head;
    while(ptr){
        cout << "Val = " << ptr->val  << " Next=" << ptr->next << " Prev=" << ptr->prev << endl;
        ptr = ptr->next;
    }
    return;
}
template<class T>
int LinkedList<T>::getLength(){
    return length;
}
template<class T>
Node<T> * LinkedList<T>::getHead(){
    return head;
}
