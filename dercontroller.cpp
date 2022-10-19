#include<iostream>
#include "baseview.h"
#include "dercontroller.h"
using namespace std;

/*void Controller::update() 
{
		ptr_v1_->update();
}
void  Controller::add(View* ptr_v)
{
ptr_v1_ = ptr_v; 
}*/
static int count = 0;
Controller::Controller(Model* ptr_m) : ptr_m_(ptr_m) { }
void Controller::add(View* ptr_v)
{
	for(int i=0; i<=count; ++i)
	{
		if(ptr_v1_[i] == ptr_v){
			cout << "view already registered...\n";
			return;
		}
	}
	ptr_v1_[++count] = ptr_v;
	cout << "View  added successfully....\n";
}

void Controller::update() 
{
	for(int i=0; i<=count; i++)
	{
		if(ptr_v1_[i] != nullptr)
		{
			ptr_v1_[i]->update();
		}
	}
}

void Controller::remove(View* ptr_v)
{
	for(int i=0; i<=count; i++)
	{
		if(ptr_v1_[i] == ptr_v){
			ptr_v1_[i] = nullptr;
			cout << "View  removed successfully...\n";
			return;
		}
	}
	cout << "Degistering is invalid....\n";
}