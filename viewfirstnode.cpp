#include <iostream>
using namespace std;
#include "basecontroller.h"
#include "baseview.h"
#include "basemodel.h"
#include "viewfirstnode.h"



void fstnode::update()
{
	int x = ptr_model_->getlist().firstnodedata();
	if(x==-1){
		cout<<"list is empty";
		return;
	}
	cout << "First  Node Data is : " << x << "\n";
}

void fstnode::get_model(Model *ptr_model)
{
	ptr_model_ = ptr_model;
}

void fstnode::register_view(Controller_base* ptr_c)
{
	ptr_c->add(this);
};
void fstnode::deregister_view(Controller_base* ptr_c)
{
	ptr_c->remove(this);
};