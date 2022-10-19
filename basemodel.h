#ifndef BASEMODEL_H
#define BASEMODEL_H

class Controller_base;
struct Node {
	int data_;
	Node* next_;
	Node* prev_;
};

class DLL{
  private:
	Node* head_;
  public:
    DLL();
	void display();
	int firstnodedata();
	int lastnodedata();
	int count();
	int sum();
	int greatestKey();
	int greatestDiff();
	void insert_at_beginning_(int newData);
	void insert_at_end_(int newData);
	void deleteByValue(int val);
};
class Model 
{
public:
virtual ~Model() { }
virtual void set_controller(Controller_base* ptr_c) = 0;
virtual void insert_at_front(int) = 0;
virtual void insert_at_end(int) = 0;
virtual void deletevalue(int) = 0; 
virtual void display() = 0;
virtual DLL getlist() = 0;
};
#endif 