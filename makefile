a.exe :basecontroller.o basemodel.o baseview.o derview.o dercontroller.o dermodel.o view_nodecount.o viewfirstnode.o viewlastnode.o viewsumofnode.o  viewgreatestkey.o viewgreatdiff.o client.o
		g++ basecontroller.o basemodel.o baseview.o derview.o dercontroller.o dermodel.o view_nodecount.o viewfirstnode.o viewlastnode.o viewsumofnode.o  viewgreatestkey.o viewgreatdiff.o client.o
basemodel.o : basemodel.cpp basemodel.h
			  g++ -c basemodel.cpp 
basecontroller.o : basecontroller.cpp basecontroller.h
			  g++ -c basecontroller.cpp 
baseview.o :baseview.cpp baseview.h
			  g++ -c baseview.cpp 
dermodel.o : dermodel.cpp dermodel.h
			  g++ -c dermodel.cpp 
dercontroller.o : dercontroller.cpp dercontroller.h
			  g++ -c dercontroller.cpp 
derview.o : derview.cpp derview.h
			  g++ -c derview.cpp 
viewsumofnode.o :viewsumofnode.cpp viewsumofnode.h
			  g++ -c viewsumofnode.cpp
viewlastnode.o :viewlastnode.cpp viewlastnode.h
			 g++ -c viewlastnode.cpp
viewfirstnode.o : viewfirstnode.cpp viewfirstnode.h
			 g++ -c viewfirstnode.cpp
view_nodecount.o: view_nodecount.cpp view_nodecount.h
			 g++ -c view_nodecount.cpp
viewgreatestkey.o: viewgreatestkey.cpp  viewgreatestkey.h
					g++ -c  viewgreatestkey.cpp
viewgreatdiff.o:viewgreatdiff.cpp viewgreatdiff.h
					g++ -c viewgreatdiff.cpp
client.o :client.cpp basecontroller.h basemodel.h baseview.h derview.h dercontroller.h dermodel.h view_nodecount.h viewfirstnode.h viewlastnode.h viewsumofnode.h viewgreatdiff.h viewgreatestkey.h