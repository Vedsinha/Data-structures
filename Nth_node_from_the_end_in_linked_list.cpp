
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* Link list Node 
struct Node {
    int data;
    Node* next;
}; */
/* Should return data of middle node. If linked list is empty, then  -1*/
int getMiddle(Node *head)
{
   // Your code here
  
   struct Node* temp=head;
   struct Node* temp1=head;
   int length=0;
   while(temp) {
       temp=temp->next;
       length++;
   }
   
     int index=length/2;
     
     while(index) {
         temp1=temp1->next;
         index--;
     }
     
     return temp1->data;
   
}



/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* struct Node
 {
   int data;
   Node* next;
 }; */
/* Should return data of n'th node from the end of linked list */
int getNthFromLast(Node *head, int n)
{
       // Your code here
       struct Node* temp=head;
       int length=0,index;
       while(temp)
       {
           temp=temp->next;
           length++;
       }
       struct Node* temp1=head;
       index=length-n;
       if(index<0)
       return -1;
       else
       {
       while(index)
       {
           temp1=temp1->next;
           index--;
       }
       return temp1->data;
       }
}
