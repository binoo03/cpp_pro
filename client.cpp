#include<iostream>
#include"viewlastnode.h"
#include"viewfirstnode.h"
#include "view_nodecount.h"
#include "viewsumofnode.h"
#include "viewgreatdiff.h"
#include "viewgreatestkey.h"
#include "dermodel.h"
#include "derview.h"
#include "dercontroller.h"
#include "baseview.h"
#include "basecontroller.h"
#include "basemodel.h"
using namespace std;
int main()
{
	/*Model1 m(20);
	Controller c(&m);
	m.set_controller(&c);
	
	View_sq view_sq;
	view_sq.register_view(&c);
	view_sq.get_model(&m);
	view_sq.update();
	
	cube Cube;
	Cube.register_view(&c);
	Cube.get_model(&m);
	Cube.update();

	sum_of_digit SOD;
	SOD.register_view(&c);
	SOD.get_model(&m);
	SOD.update();
	
	bits bit;
	bit.register_view(&c);
	bit.get_model(&m);
	bit.update();

	
	cout<<"\n";
	m.change(65);
	view_sq.update();
	Cube.update();
	SOD.update();*/
	
	int n,st;
	char sp;
	Model1 m;
	Controller c(&m);
	m.set_controller(&c);
	
	 fstnode fs;
	 lstnode ls;
	 nodecount nc;
	 SON sn;
	 key gk;
	 diff gd;
	
	while(true)
	{
		cout << "\nChoose the option: "<<"\n";
		cout << "\n1.First node view_reg\n2.Last node view_reg\n3.Node_count view_reg\n"
				"4.Node_sum view_reg\n5.Add node at Beginning\n6.Add node at End\n7.Delete a node\n8.Display the list\n"
//9.Greatest key view_reg\n10.Greatest diff view_reg\n"
				"9.First node view_Dereg\n10.Last node view_Dereg\n11.Node_count view_Dereg\n12.Node_sum view_Dereg\n0.EXIT\n";
				//11.First node view_Dereg\n12.Last node view_Dereg\n13.Node_count view_Dereg\n14.Node_sum view_Dereg\n15. Greatestkey view_Dereg\n16.Greatestdiff view_Dereg"
				//\n0.EXIT\n";
		
		cin >> st;

		switch(st)
		{
			case 0: exit(0);
			
			case 1: fs.register_view(&c);
					fs.get_model(&m);
					fs.update();
					break;

			case 2: ls.register_view(&c);
					ls.get_model(&m);
					ls.update();
					break;
			
			case 3: nc.register_view(&c);
					nc.get_model(&m);
					nc.update();
					break;

			case 4: sn.register_view(&c);
					sn.get_model(&m);
					sn.update();
					break;
					
			case 5:	cout << "Enter the number : ";
					cin >> n;
					m.insert_at_front(n);
					break;
			case 6: cout << "Enter the number : ";
					cin >> n;
					m.insert_at_end(n);
					break;
							
			case 7:	cout << "Enter the number : ";
					cin >> n;
					m.deletevalue(n);
					break;
							
			case 8:	m.display();
					break;
						
		/*	case 9: gk.register_view(&c);
					gk.get_model(&m);
					gk.update();
					break;
					
			case 10:gd.register_view(&c);
					gd.get_model(&m);
					gd.update();
					break;*/
					
			case 9: fs.deregister_view(&c);
					break;

			case 10: ls.deregister_view(&c);
					break;

			case 11: nc.deregister_view(&c);
					break;

			case 12: sn.deregister_view(&c);
					break;
					
			/*case 15: gk.deregister_view(&c);
					break;
					
			case 16: gd.deregister_view(&c);
					break;*/
		
			default: cout << "Invalid choice\n";
					break;
		}
	}
}