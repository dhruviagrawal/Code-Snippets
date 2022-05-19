#include<bits/stdc++.h>
using namespace std;

class MyLinkedList {
   //SC O(1)
   //Loops mainly takes O(N) TC
private:
    struct Node{
        int value;
        Node* next=NULL;
        Node(int val)
        {
            value=val;
            next=NULL;
        }
    };
    
Node* head;
int size;
    
public:
    MyLinkedList() {
        head=NULL;
        size=0;
    }
    
    int get(int index) {
       if(index<0 || index>=size)
           return -1;
       else{
           Node* temp=head;
            for(int i=0;i<index;i++)
                temp=temp->next;
           return temp->value;
        }
    }
    
    void addAtHead(int val) {
        addAtIndex(0,val);
    }
    
    void addAtTail(int val) {
        addAtIndex(size,val);
    }
    
    void addAtIndex(int index, int val) {
        if(index<0 || index>size)
            return;
        
            Node* temp=new Node(val);
            
            if(index==0)
            {
                temp->next=head;
                head=temp;
            }
            else{
                
            Node* t=head;
            for(int i=0;i<index-1;i++)
            {
                t=t->next;
            }
             temp->next=t->next;
             t->next=temp;
           }
        
        size++;
       
    }
    
    void deleteAtIndex(int index) {
       if(index<0 || index>=size)
           return;
        
       else if(index==0)
       {
           Node* temphead=head;
           head=head->next;
           delete temphead;
       }
       else
       {
           Node* temp=head;
           for(int i=0;i<index-1;i++)
               temp=temp->next;
           Node* nextNode=temp->next->next;
           delete temp->next;
           temp->next=nextNode;
       }
       size--;

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