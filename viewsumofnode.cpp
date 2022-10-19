#include <iostream>
using namespace std;
#include "viewsumofnode.h"
#include "basecontroller.h"
#include "basemodel.h"



 
void SON::update()
{ 
	int x = ptr_model_->getlist().sum();
	cout << "Sum Of Nodes are : "<< x << "\n";
}
 
void SON::get_model(Model *ptr_model)
{
	ptr_model_ = ptr_model;
}

void SON::register_view(Controller_base* ptr_c)
{
	ptr_c->add(this);
};

void SON::deregister_view(Controller_base* ptr_c)
{
	ptr_c->remove(this);
};