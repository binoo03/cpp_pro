#include<iostream>
#include "basecontroller.h"
#include "baseview.h"
#include "basemodel.h"
#include "dermodel.h"
#include "derview.h"
#include "dercontroller.h"
using namespace std;


void Model1::set_controller(Controller_base* ptr_c)
{
	ptr_c_ = ptr_c;
}

void Model1::insert_at_front(int data){
	list_.insert_at_beginning_(data);
	ptr_c_->update();
}

void Model1::insert_at_end(int data){
	list_.insert_at_end_(data);
	ptr_c_->update();
}

void Model1::deletevalue(int val){
	list_.deleteByValue(val);
	ptr_c_->update();
}

void Model1::display(){
	list_.display();
}

DLL Model1::getlist(){
	return list_;
}