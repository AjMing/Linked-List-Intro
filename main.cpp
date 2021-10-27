#include <iostream>
using namespace std;
#include "node.h"

int main() {
  int c=5;
   struct node a,b,*head ,d ;
  

  head=&a; 
  a.next=&b;
  b.next= &d;
  
//  b.value=head->value+3; 
   a.value = c;
   b.value = (*head).value+3;
   d.value=7;

   //HOW DO I ADD d AFTER b (linke b->d)

  

   cout<<"Value of a is "<<a.value<<endl;
   cout<<"Value of b is "<<b.value<<endl;
   cout<<"Value of *head is "<<(*head).value<<endl;
   cout<<"Value of *head is "<<head->value<<endl;
// 


   cout<<"Value of b is "<<a.next -> value <<endl;
   cout<<"Value of b is "<< (*a.next).value <<endl;

   cout<<"Value of b is "<<head->next -> value <<endl;
   cout<<"Value of b is "<<(*(*head).next).value<<endl;
   //HOW to use head-> to print 'd->value'
    
  
     cout<<"Value of d is "<<d.value <<endl;
     cout<<"Value of d is "<< (*b.next).value <<endl;

     cout<<"Value of d is "<< b.next->value <<endl;
     
    cout<<"Value of d is "<< a.next->next->value <<endl;
   cout<<"Value of d is "<< henext->next->value <<endl;
   
} 