
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
