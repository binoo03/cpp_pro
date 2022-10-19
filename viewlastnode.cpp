#include <iostream>
using namespace std;
#include "basecontroller.h"
#include "baseview.h"
#include "basemodel.h"
#include "viewlastnode.h"


void lstnode ::update()
{
	int x = ptr_model_->getlist().lastnodedata();
	if(x==-1){
		cout<<" list is empty";
		return;
	}
	cout << "Last  Node Data is : " << x<< "\n";
}

void lstnode ::get_model(Model *ptr_model)
{
	ptr_model_ = ptr_model;
}

void lstnode ::register_view(Controller_base* ptr_c)
{
	ptr_c->add(this);
};
void lstnode ::deregister_view(Controller_base* ptr_c)
{
	ptr_c->remove(this);
};