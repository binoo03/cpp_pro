#ifndef DERCONTROLLER_H
#define DERCONTROLLER_H
#include "basecontroller.h"
#include "dercontroller.h"
class Controller : public Controller_base
{
	public:
	Controller(Model* );
	virtual void add(View* );
	virtual void update();
	virtual void remove(View*);

	private:
	Model* ptr_m_;
	View *ptr_v1_[10];

};
#endif