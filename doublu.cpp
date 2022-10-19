#include<iostream>  
 using namespace std;
struct node  
{  
    struct node *prev;  
    struct node *next;  
    int data;  
};  
struct node *head;  
void insertion_beginning();  
void insertion_last();  
void insertion_specified();  
void deletion_beginning();  
void deletion_last();  
void deletion_specified();  
void display();  
void search();  
int main ()  
{  
int choice =0;  
    while(true)  
    {  
      
        cout<<"\n1.Insert in begining\n2.Insert at last\n3.Insert at any random location\n4.Delete from Beginning\n5.Delete from last\n6.Delete the node after the given data\n7.Search\n8.Show\n0.Exit"<<"\n";  
        cout<<"Enter your choice"<<"\n";  
        cin>>choice;  
        switch(choice)  
        {  
            case 1:  
            insertion_beginning();  
            break;  
            case 2:  
                    insertion_last();  
            break;  
            case 3:  
            insertion_specified();  
            break;  
            case 4:  
            deletion_beginning();  
            break;  
            case 5:  
            deletion_last();  
            break;  
            case 6:  
            deletion_specified();  
            break;  
            case 7:  
            search();  
            break;  
            case 8:  
            display();  
            break;  
            case 0:  
            exit(0);  
            break;  
            default:  
            cout<<"Please enter valid choice.."<<"\n";   
        }  
    }  
}  
void insertion_beginning()  
{  
   struct node *ptr;   
   int item;  
   ptr = new node;  
   if(ptr == NULL)  
   {  
       cout<<"OVERFLOW";  
   }  
   else  
   {  
    cout<<"Enter Item value:"<<"\n";    
    cin>>item;  
      
   if(head==NULL)  
   {  
       ptr->next = NULL;  
       ptr->prev=NULL;  
       ptr->data=item;  
       head=ptr;  
   }  
   else   
   {  
       ptr->data=item;  
       ptr->prev=NULL;  
       ptr->next = head;  
       head->prev=ptr;  
       head=ptr;  
   }  
  // cout<<"Node inserted"<<"\n";   
}  
     
}  
void insertion_last()  
{  
   struct node *ptr,*temp;  
   int item;  
   ptr = (struct node *) malloc(sizeof(struct node));  
   if(ptr == NULL)  
   {  
       cout<<"OVERFLOW";  
   }  
   else  
   {  
       cout<<"Enter value";  
       cin>>item;  
        ptr->data=item;  
       if(head == NULL)  
       {  
           ptr->next = NULL;  
           ptr->prev = NULL;  
           head = ptr;  
       }  
       else  
       {  
          temp = head;  
          while(temp->next!=NULL)  
          {  
              temp = temp->next;  
          }  
          temp->next = ptr;  
          ptr ->prev=temp;  
          ptr->next = NULL;  
          }  
             
       }  
   //  cout<<"node inserted"<<"\n";  
    }  
void insertion_specified()  
{  
   struct node *ptr,*temp;  
   int item,loc,i;  
   ptr = new node;  
   if(ptr == NULL)  
   {  
       cout<<"OVERFLOW";  
   }  
   else  
   {  
       temp=head;  
       cout<<"Enter the location";  
       cin>>loc;  
       for(i=0;i<loc;i++)  
       {  
           temp = temp->next;  
           if(temp == NULL)  
           {  
               cout<<"There are less than %d elements"<< loc <<"\n";  
               return;  
           }  
       }  
       cout<<"Enter value";  
       cin>>item;  
       ptr->data = item;  
       ptr->next = temp->next;  
       ptr -> prev = temp;  
       temp->next = ptr;  
       temp->next->prev=ptr;  
      // cout<<"node inserted"<<"\n";    
   }  
}  
void deletion_beginning()  
{  
    struct node *ptr;  
    if(head == NULL)  
    {  
        cout<<"UNDERFLOW";  
    }  
    else if(head->next == NULL)  
    {  
        head = NULL;   
        delete(head);  
     //   cout<<"node deleted"<<"\n";   
    }  
    else  
    {  
        ptr = head;  
        head = head -> next;  
        head -> prev = NULL;  
       delete(ptr);  
      //  cout<<"node deleted"<<"\n";    
    }  
  
}  
void deletion_last()  
{  
    struct node *ptr;  
    if(head == NULL)  
    {  
        cout<<" UNDERFLOW";  
    }  
    else if(head->next == NULL)  
    {  
        head = NULL;   
        delete(head);   
        cout<<"node deleted"<<"\n";   
    }  
    else   
    {  
        ptr = head;   
        if(ptr->next != NULL)  
        {  
            ptr = ptr -> next;   
        }  
        ptr -> prev -> next = NULL;   
        delete(ptr);  
        cout<<"node deleted"<<"\n";   
    }  
}  
void deletion_specified()  
{  
    struct node *ptr, *temp;  
    int val;  
    cout<<" Enter the data after which the node is to be deleted : ";  
    cin>>val;  
    ptr = head;  
    while(ptr -> data != val)  
    ptr = ptr -> next;  
    if(ptr -> next == NULL)  
    {  
        cout<<"Can't delete"<<"\n";    
    }  
    else if(ptr -> next -> next == NULL)  
    {  
        ptr ->next = NULL;  
    }  
    else  
    {   
        temp = ptr -> next;  
        ptr -> next = temp -> next;  
        temp -> next -> prev = ptr;  
        delete(temp);  
        cout<<"node deleted"<<"\n";  
    }     
}  
void display()  
{  
    struct node *ptr;  
    cout<<"printing values"<<"\n";   
    ptr = head;  
    while(ptr != NULL)  
    {  
        cout<<ptr->data<<"\n";  
        ptr=ptr->next;  
    }  
}   
void search()  
{  
    struct node *ptr;  
    int item,i=0,flag;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        cout<<"Empty List"<<"\n";  
    }  
    else  
    {   
        cout<<"Enter item which you want to search?"<<"\n";     
        cin>>item;  
        while (ptr!=NULL)  
        {  
            if(ptr->data == item)  
            {  
                cout<<"item found at locatio"<<i+1<<"\n";  
                flag=0;  
                break;  
            }   
            else  
            {  
                flag=1;  
            }  
            i++;  
            ptr = ptr -> next;  
        }  
        if(flag==1)  
        {  
            cout<<"Item not found"<<"\n";   
        }  
    }     
      
}  
