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
void insertAtTail(node* &head,int val){
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
void insertAtHead(node* &head,int val){
    node* n = new node(val);
    n->next = head;
    head = n;
}
void Atdelete(node* &head,int val){
    if(head==NULL){
        return;
    }
    node* temp = head;
    while(temp->next->data !=val){
        temp = temp->next;
    }
    node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}
void deleteAtHead(node* &head){
    node* todelete = head;
    head = head->next;
    delete todelete;
}
node* reverse(node* &head){
    node* preptr = NULL;
    node* currptr = head;
    node* nextptr;
    while(currptr!=NULL){
        nextptr = currptr->next;
        currptr->next = preptr;
        preptr = currptr;
        currptr = nextptr;
    }
    return preptr;
}
node* reverse_recursive(node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* newhead = reverse_recursive(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
}
node* reversek(node* &head,int k){
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;
    int count = 0;
    while(currptr !=NULL && count<k){
        nextptr = currptr->next;
        currptr->next=prevptr;
        prevptr = currptr;
        currptr = nextptr;
        count++;
    }
    if(nextptr!=NULL){
            head->next = reversek(nextptr,k);
        }
    return prevptr;
}
void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp= temp->next;
    }
    cout<<endl;
}
bool search(node* head,int key){
    node* temp = head;
    while(temp!=NULL){
        if(temp->data == key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}

void makecycle(node* &head,int pos){
    node* temp = head;
    node* stratnode;
    int count = 1;
    while(temp->next !=NULL){
        if(count == pos){
            stratnode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = stratnode;
}

bool check(node* head){
    node* slow = head;
    node* fast = head;
    while(fast!=NULL && fast->next!=NULL){
        fast = fast->next->next;
        slow = slow->next;
        if(fast==slow){
            return true;
        }
    }
    return false;
}

void removecycle(node* &head){
    node* slow = head;
    node* fast = head;
    do
    {
        fast = fast->next->next;
        slow = slow->next;
    } while (slow!=fast);

    fast = head;

    while(slow->next!=fast->next){
        fast = fast->next;
        slow=slow->next;
    }
    slow->next = NULL;
}
void test(node* &head){
    node*temp;
    node* curr = head;
    while(curr!=NULL){
        curr = curr->next;
        if(curr->next==NULL){
            temp= curr;
        }
    }
    cout<<temp->data;
}
int main(){
    node* head = NULL;
    // insertAtTail(head,1);
    // insertAtTail(head,2);
    // insertAtHead(head,5);
    // insertAtTail(head,54);
    // insertAtHead(head,10);
    // insertAtTail(head,55);
    // Atdelete(head,54);
    // deleteAtHead(head);
    // display(head);
    // int k = 2;
    // makecycle(head,2);
    // // display(head);
    // cout<<check(head)<<endl;
    // removecycle(head);
    // cout<<check(head)<<endl;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    node* newnode = reversek(head,2);

    display(newnode);
    // test(head);

    // node* newhead = reverse(head);
    // display(newhead);
    return 0;
}