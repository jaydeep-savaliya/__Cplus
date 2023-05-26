#include <bits/stdc++.h>
using namespace std;
class ListNode{
    public:
        int data;
        ListNode* next;
        ListNode(int val){
            data = val;
            next=NULL;
        }
};
void insertAtHead(ListNode* &head,int val){
    ListNode* n = new ListNode(val);
    n->next = head;
    head = n;
}
void insert(ListNode* &head,int val){
    ListNode* n = new ListNode(val);
    if(head==NULL){
        head=n;
        return;
    }
    ListNode* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
}
void print(ListNode* head){
    ListNode* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }cout<<endl;
}

ListNode* reverse_2(ListNode* &head,int left,int right){
    ListNode* temp = new ListNode(-1);
    ListNode* prev = temp;
    temp->next = head;
    for(int i=0;i<left-1;i++){
        prev = prev->next;
    }
    ListNode* curr= prev->next;
    for(int i=0;i<right-left;i++){
        ListNode* ptr = prev->next;
        prev->next= curr->next;
        curr->next = curr->next->next;
        prev->next->next = ptr;
    }
    return temp->next;
}
int main(){
    ListNode* head = NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);
    print(head);
   ListNode* new_node= reverse_2(head,2,4);
    print(new_node);
}