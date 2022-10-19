#ifndef BASECONTROLLER_H
#define BASECONTROLLER_H
class Model;
class View;
class Controller_base 
{
	public:
	virtual ~Controller_base() { }
	virtual void update() = 0;
	virtual void add(View* ptr_v) = 0;
	virtual void remove(View* ptr_v) = 0;

};
#endif