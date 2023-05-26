#include <bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node* next;
        node(int val){
            data = val;
            next = NULL;
        }
};
void insertattail(node* &head,int val){
    node* n =new node(val);
    if(head==NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
}
void display(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }cout<<"NULL";
    cout<<endl;
}
node* reverseknode(node* &head){
    node* curr = head;
    node* prev = NULL;
    node* nextptr;
    int count = 0;
    while(curr!=NULL && count<2){
        nextptr = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextptr;
        count++;
    }
    if(nextptr!=NULL){
        head->next = reverseknode(nextptr);
    }
    return prev;
}

int main(){
    node* head = NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    insertattail(head,4);
    display(head);
    node* munode = reverseknode(head);
    display(munode);
}