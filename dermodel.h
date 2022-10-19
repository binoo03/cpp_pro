#ifndef DERMODEL_H
#define DERMODEL_H
#include "basemodel.h"
class Model1 : public Model 
{
	public:
	virtual void set_controller(Controller_base* ptr_c);
	void insert_at_front(int);
	void insert_at_end(int);
	void deletevalue(int); 
	void display();
	DLL getlist();
	
	private:
	Controller_base* ptr_c_;
	DLL list_;
	
};
#endif