#include <iostream>
using namespace std;
#include "basecontroller.h"
#include "baseview.h"
#include "basemodel.h"
#include "viewgreatestkey.h"



void key::update()
{
	int x = ptr_model_->getlist().greatestKey();
	if(x == -1){
		cout << "List is empty.\n";
		return;
	}
	cout << "Greatest element is : " << x << "\n";
}

void key::get_model(Model *ptr_model)
{
	ptr_model_ = ptr_model;
}

void key::register_view(Controller_base* ptr_c)
{
	ptr_c->add(this);
};
void key::deregister_view(Controller_base* ptr_c)
{
	ptr_c->remove(this);
};