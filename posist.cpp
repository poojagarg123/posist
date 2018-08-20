#include <iostream>
#include<bits/stdc++.h>
int k;
using namespace std;
/*struct data
{
    int owner_name;
    int address;
    int mobile;
    int phone;
    float value;

};*/

struct node
{

    int Datetime;
   // struct data;
    int owner_name;
    int address;
    int mobile;
    int phone;
    float value;
    int NodeNumber;
    int NodeId;
    struct node *ReferenceNodeId;
    int ChildNodeId;
    struct node * ReferenceChildNodeId;
    struct node *link;
};
struct node *p,*temp,*start=NULL,*ptr;
void createMultiSet(struct node *head)
{

    cout<<"how many multiset you want to create :"<<endl;
    cin>>k;
    for(int i=0;i<=k;i++)
    {
        p=new node;
        head->link=p;
        temp=p;

    }
    temp->link=NULL;

}
/*void Addnode(struct node *head)

{

    p=new node;
    head->link=p;
}*/
void createFirstNode()
{
    //int date,owner,add,mob,ph,val;
   // cin>>date;
   // cin>>owner;
   // p=new node;
   p=new node;
    p->Datetime=2018;
    p->NodeNumber=0;
    p->NodeId=0;
    p->ReferenceNodeId=NULL;

    cout<<"the datetime is " <<p->Datetime<<endl;
    cout<< "the node number is "<<p->NodeNumber<<endl;
    cout<<"the nodeId is"<<p->NodeId<<endl;
   // cin>>date>>owner>>add>>mob>>ph>>val;
   // p->DateTime=date;
   // p->owner_name=owner;
   // p->address=add;
   // p->mobile=mob;
   // p->phone=ph;
   // p->value=val;
   // ReferenceNodeId=NULL;
    if(start==NULL)
    {

        start=p;
        temp=p;
    }
    else{
        p=temp->link;
        temp=p;
    }
    temp->link=NULL;
}
int main() {

int choice;
cout<<"enter your choice of operation"<<endl;
cin>>choice;
cout<<"you have selected the option :" << choice<<" and the task is to:"<<endl;
switch(choice)
{

    case 1:cout<<"Create firt node"<<endl;
    createFirstNode();
    cout<<"your first node has been created with the above data"<<endl;
    break;
    case 2 : cout<<"create multiset of first node according to node number "<<endl;
      createMultiSet(start);



}

   // current date/time based on current system

}