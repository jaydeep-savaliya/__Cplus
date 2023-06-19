#include <bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node* next;
            node(int val){
                data = val;
                next =NULL;
            }        
};
node* reverseKGroup(node* head,int k){
    if(head==NULL || k==1) return head;
    node* dummy = new node(0);
    dummy->next = head;
    node* curr = dummy;
    node* prev = dummy;
    node* nextptr = dummy;
    int count = 0;
    while(curr->next!=NULL){
        curr = curr->next;
        count++;
    }
    while(count>=k){
        curr = prev->next;
        nextptr = curr->next;
        for(int i=1;i<k;i++){
            curr->next = nextptr->next;
            nextptr->next = prev->next;
            prev->next = nextptr;
            nextptr = curr->next;
        }
        prev = curr;
        count-=k;
    }
    return dummy->next;
}
int main(){
    node* head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);
    head->next->next->next = new node(4);
    head->next->next->next->next = new node(5);
    int k = 2;
   
    node* ans = reverseKGroup(head,k);
    node* temp = ans;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<endl;
}