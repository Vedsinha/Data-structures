
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* Print the nth node of the linked list
   Node is defined as 
struct node
{
    int data;
    struct node* next;
};*/
// Should return data of node at given index. The function may
//  assume that there are at least index+1 nodes in linked list 
int GetNth(struct node* head, int index)
{
   // Code here
   struct node* temp=head;
   int i=0;
   while(i != index)
   {
       temp=temp->next;
       i++;
   }
   return temp->data;
}


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

