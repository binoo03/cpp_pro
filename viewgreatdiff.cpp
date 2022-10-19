#include <iostream>
using namespace std;
#include "basecontroller.h"
#include "baseview.h"
#include "basemodel.h"
#include "viewgreatdiff.h"



void diff::update()
{
	int x = ptr_model_->getlist().greatestDiff();
	if(x == -1){
		cout << "List is empty.\n";
		return;
	}
	cout << "Greatest difference is : " << x << "\n";
}

void diff::get_model(Model *ptr_model)
{
	ptr_model_ = ptr_model;
}

void diff::register_view(Controller_base* ptr_c)
{
	ptr_c->add(this);
};
void diff::deregister_view(Controller_base* ptr_c)
{
	ptr_c->remove(this);
};