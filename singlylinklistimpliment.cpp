#include<iostream>
using namespace std;
class node
{

public:
int data; 
node* next;
    node(int  data){
this->data = data;
this->next=NULL;

    }
    ~node(){
int value=this->data;
//memory free
if(this->next!=NULL){
    delete next;
    this->next=NULL;
}
cout<<"memory is free for node with data :"<<value<<endl;
    }
    
};
void Insertattail(node* &tail ,int d){
    node* temp=new node(d);
    tail->next=temp;
    tail=temp;

}
void insertinhead(node* &head ,int d){
    node* temp=new node(d);
    temp->next=head;
    head=temp;

}
void insertatpossition(node* &tail ,node* &head , int possition ,int b){
    node* temp=head;
    int count=1;
    if (possition==1)
    {
        insertinhead(head , b);
        return ;
    }
    if (temp -> next == NULL)
    {
        Insertattail(tail , b);
        return ;
    }
    
    while(count<possition-1){
    temp=temp->next;
    count++;
    }
    node* newnode=new node(b);
    newnode->next=temp->next;
    temp->next=newnode;
}
void deletenode(int possition ,node* &head){
if(possition==1){
    node*  temp=head;
    head=head->next;
    temp->next=NULL;
    delete temp;
}else{
    node* curr=head;
    node* prev=NULL;
   int count=1;
    while (count < possition)
    {
        prev=curr;
        curr=curr->next;
        count++;
    }
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;

}
}
void print(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<"\n";
}
int main(){
node* n1=new node(10);
node* head =n1;
node* tail =n1;
//print(head);
insertatpossition(tail,head,1,78);
insertatpossition(tail,head,2,88);
insertatpossition(tail,head,3,98);

//print(head);
// insertintail(head ,1,88);
// //print(head);
// insertintail(head ,1,98);
print(head);
deletenode(2,head);
print(head);
return 0;
}