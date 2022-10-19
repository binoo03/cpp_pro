#ifndef VIEWLASTNODE_H
#define VIEWLASTNODE_H
#include "baseview.h"


class lstnode : public View
{
	public:
	virtual void update();
	virtual void get_model(Model *ptr_model);
	virtual void register_view(Controller_base* ptr_c);
	virtual void deregister_view(Controller_base*);
	private:
	Model *ptr_model_;

};
#endif