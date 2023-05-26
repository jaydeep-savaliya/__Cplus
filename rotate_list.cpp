#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data = val;
        next=NULL;
    }
};
void insertattail(node* &head,int val){
    node* n = new node(val);
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
node* reverse(node* &head){
    node* curr = head;
    node* prev = NULL;
    node* nextptr;
    while(curr!=NULL){
        nextptr = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextptr;
    }
    return prev;
}
node* appendlastknode(node* &head,int k){
    node* temp = head;
    int length = 0;
    while(temp->next!=NULL){
        temp=temp->next;
        length++;
    }
    temp->next = head;
    k = k%(length+1);
    int jump = length - k;
    temp = head;
    while(jump){
        temp=temp->next;
        jump--;
    }
    node* newnode = temp->next;
    temp->next = NULL;
    return newnode;
}
node* middle(node* &head){
    node* fast = head;
    node* slow = head;
    while(fast && fast->next){
        fast = fast->next->next;
        slow = slow->next;
    }
    slow->next=NULL;
    return slow;
}

void reorder(node* &head){
    node* slow = head;
    node* fast = head;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }


    node* second = reverse(slow->next);
    slow->next =NULL;
    node* first  = head;
    while(second){
        node* temp1 = first->next;
        node* temp2 = second->next;
        first->next = second;
        second->next = temp1;
        first = temp1;
        second = temp2;
    }
}
void display(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }cout<<endl;
}
int main(){
    node* head = NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    insertattail(head,4);
    insertattail(head,5);
    insertattail(head,6);
    display(head);
    node* newnode  = middle(head);
    display(newnode);

    
    
}