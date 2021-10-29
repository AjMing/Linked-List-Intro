#include <iostream>
using namespace std;
#include "node.h"

int main() {

  typedef struct node NODE;
  typedef NODE* NodePtr;

  int c=5,i;
    
  NodePtr head,temp; 
   // NODE * head;
  
  head= new NODE; //a 
  temp=head;
  // head=&a; 
 for(i=0;i<3;i++){// Create 3 additional nodes
  /*head->next=new NODE; //b
  head->next->next= new NODE;
  head->next->next->next=NULL;
  head->value = c;
   head->next->value = (*head).value+3;
   head->next->next->value=7;*/
   
   temp->value=c+i;
 }
  
//  b.value=head->value+3; 
   

   //HOW DO I ADD d AFTER b (linke b->d)

  
/*
   cout<<"Value of a is "<<a.value<<endl;
   cout<<"Value of *head is "<<(*head).value<<endl;
   cout<<"Value of *head is "<<head->value<<endl;
// 

  cout<<"Value of b is "<<b.value<<endl;
   cout<<"Value of b is "<<a.next -> value <<endl;
   cout<<"Value of b is "<< (*a.next).value <<endl;

   cout<<"Value of b is "<<head->next -> value <<endl;
   cout<<"Value of b is "<<(*(*head).next).value<<endl;
   //HOW to use head-> to print 'd->value'
    
  
     cout<<"Value of d is "<<d.value <<endl;
     cout<<"Value of d is "<< (*b.next).value <<endl;

     cout<<"Value of d is "<< b.next->value <<endl;
     
    cout<<"Value of d is "<< a.next->next->value <<endl;
   cout<<"Value of d is "<< head->next->next->value <<endl;
*/
  temp =head;


   for( i=0;i<3;i++){
       cout<<temp->value<<endl;
       temp=temp->next;
   }
   

 






} 