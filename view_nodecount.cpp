#include <iostream>
using namespace std;
#include "basecontroller.h"
#include "view_nodecount.h"
#include "basemodel.h"


void nodecount::update()
{
	int x = ptr_model_->getlist().count();
	cout << "Total No Of Nodes are : " << x << "\n";
}

void nodecount::get_model(Model *ptr_model)
{
	ptr_model_ = ptr_model;
}

void nodecount::register_view(Controller_base* ptr_c)
{
	ptr_c->add(this);
};
void nodecount::deregister_view(Controller_base* ptr_c)
{
	ptr_c->remove(this);
};