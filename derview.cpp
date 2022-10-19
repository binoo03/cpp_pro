/*#include<iostream>
#include "basecontroller.h"
#include "baseview.h"
#include "basemodel.h"
#include "dermodel.h"
#include "derview.h"
#include "dercontroller.h"
using namespace std;

void  View_sq::update()
{
int x = ptr_model_->get_x();
cout << "Square : " << x * x << "\n";
}

void View_sq:: get_model(Model *ptr_model)
{
ptr_model_ = ptr_model;
}

void View_sq:: register_view(Controller_base* ptr_c)
{
ptr_c->add(this);

}
void View_sq::deregister_view(Controller_base* ptr_c)
{
	ptr_c->remove(this);
};*/