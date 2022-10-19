
#ifndef DERVIEW_H
#define DERVIEW_H
#include<iostream>
using namespace std;
class View_sq : public View
{
	public:
	virtual void update();
	virtual void get_model(Model *ptr_model);
	virtual void  register_view(Controller_base* ptr_c);
	virtual void deregister_view(Controller_base* ptr_c);
	private:
	Model *ptr_model_;

};
#endif