
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

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*The structure of linked list is the following
struct node
{
int data;
Node* next;
};*/
int detectloop(Node *list)
{
   // your code here
   Node* temp=list;
   Node* temp1=list;
   
   while(temp && temp1 && temp1->next) {
       temp=temp->next;
       temp1=temp1->next->next;
       
        
       if(temp == temp1)
        return 1;
   }
   return 0;
   
}

