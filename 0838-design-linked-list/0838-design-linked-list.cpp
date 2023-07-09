#include<iostream>

struct Node{
     int data;
     Node* next;
};

class MyLinkedList {
    Node* head = nullptr;;
    int length = 0;

public:

    Node* getNode(int indx){
        Node* curr = head;
        while(indx--){
            curr = curr->next;
        }
        return curr;
    }

    Node* createNode(int val){
        Node* nd = new Node();
        nd->data = val;
        nd->next = nullptr;
        return nd;
    }

    void del_ele(Node* nd){
        delete nd;
    }

    MyLinkedList() {
        // head = nullptr;
        // length = 0;
    }
    
    int get(int index) {
        if(index < 0 || index >= length){
            return -1;
        }
        Node* tmp = getNode(index);
        return tmp->data;
    }
    
    void addAtHead(int val) {
        Node* nd = createNode(val);
        nd->next = head;
        head = nd;
        length++;        
    }
    
    void addAtTail(int val) {
        Node* nd = createNode(val);
        if(head == nullptr){
            head = nd;
        } else { 
            Node* tmp = getNode(length - 1);
            tmp->next = nd;
        }
        length++;
    }
    
    void addAtIndex(int index, int val) {
        if(index > length){
            return;
        } else if (index <= 0){
            addAtHead(val);
        } else if (index == length){
            addAtTail(val);
        } else {
            Node* tmp = getNode(index - 1);
            Node* nd = createNode(val);
            nd->next = tmp->next;
            tmp->next = nd;
            length++;
        }
    }
    
    void deleteAtIndex(int index) {
         if(index < 0 || index >= length){
             return;
         }
         if(index == 0){
             Node* tmp = head;
             head = head->next;
             del_ele(tmp);
         } else {
             Node* tmp = getNode(index - 1);
             Node* ele = tmp->next;
             tmp->next = tmp->next->next;
             del_ele(ele); 
         }
         length--;        
    }

    
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */