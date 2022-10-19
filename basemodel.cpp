#include<iostream>
#include<cstdlib>
#include "basecontroller.h"
#include "basemodel.h"

using namespace std;
DLL::DLL() : head_(NULL) { }

void DLL::display() {
	if(head_ == NULL){
		cout<< "List is empty\n";
		return;
	}
	Node* temp = head_;
	cout << "The elements are: "<<"\n";
    while (temp != NULL) {
		cout << temp->data_ << " ";
		temp = temp->next_;
	}
	cout << "\n";
}

int DLL::firstnodedata(){
	if(head_ == NULL){
		return -1;
	}
	return head_->data_;
}

int DLL::lastnodedata(){
	if(head_ == NULL){
		return -1;
	}
	Node* last = head_;
	while (last->next_ != NULL)
		last = last->next_;
	return last->data_;
}

int DLL::count(){
	if(head_ == NULL){
		return 0;
	}
	Node* temp = head_;
	int count = 0;
	while (temp != NULL) {
		++count;
		temp = temp->next_;
	}
	return count;
}

int DLL::sum(){
	if(head_ == NULL){
		return 0;
	}
	Node* temp = head_;
	int sum = 0;
	while (temp != NULL) {
		sum += temp->data_;
		temp = temp->next_;
	}
	return sum;
}

void DLL::insert_at_beginning_(int newData) {
   	Node* newNode = new Node;
   	newNode->data_ = newData;
   	newNode->prev_ = NULL;
   	newNode->next_ = head_;
   	if(head_ != NULL)
   		head_->prev_ = newNode ;
   	head_ = newNode;
    cout << newData<<"\n";
	cout<<" added to list"<<"\n";
}

/*void DLL::insert_at_end_(int newData) {
   	Node* newNode = new Node;
   	Node* last = head_;
   	newNode->data_ = newData;
   	newNode->next_ = NULL;
   	if (head_ == NULL) {
   		newNode->prev_ = NULL;
   		head_ = newNode;
		 cout << newData<<"\n";
		cout<<" added to list"<<"\n";
		
	}
	while (last->next_ != NULL)
	{
	last = last->next_;
	}
	last->next_ = newNode;
	newNode->prev_ = last;
	newNode->next_=NULL;
    cout << newData<<"\n";
	cout<<" added to list"<<"\n";
}*/
void DLL::insert_at_end_(int newData){
	Node* ptr =new Node;
	Node* temp;
	if(ptr==NULL)
	{
		cout<<"Overflow"<<"\n";
	}
	else{
		ptr->data_=newData;
		if(head_==NULL)
		{
			ptr->next_=NULL;
			ptr->prev_=NULL;
			head_=ptr;
		}
		else{
			temp=head_;
			while(temp->next_!=NULL)
			{
				temp=temp->next_;
			}
			temp->next_=ptr;
			ptr->prev_=temp;
			ptr->next_=NULL;
		}
		cout<<newData<<"\n";
		cout<<"added to list";
	}
}

void DLL::deleteByValue(int val) {
    Node* cur = head_;
    while(cur && cur->data_ != val){
		cur = cur->next_;
	}
	if(cur != NULL){
		if(cur->prev_ == NULL){
			head_ = cur->next_;
			if(head_ != NULL)
				head_->prev_ = NULL;
			delete cur;
			return;
		}
		cur->prev_->next_ = cur->next_;
		delete cur;
        cout << val << " removed from list.\n\n";
	}
	else {
		cout << "Value not available in list.\n\n";
	}
}


int DLL::greatestKey()
{
	if(head_ == NULL){
		return -1;
	}
	Node* temp = head_;
	Node* max = head_;
	while (temp != NULL)
	{
		if (temp->data_ > max->data_)
			max = temp;
		temp = temp->next_;
	}
	return max->data_;
}

int DLL::greatestDiff()
{

	if(head_ == NULL){
		return -1;
	}
	Node* temp = head_;
	int diff = temp->data_;
	while (temp->next_ != NULL)
	{
		int new_diff = abs(temp->next_->data_ - temp->data_);
		if (new_diff > diff)
		{
			diff = new_diff;
		}
		temp = temp->next_;
	}
	return diff;
	
	
}
