#include"headers.h"
#include"classes.h"

Library::Library()
{
	vector<Book*>vBook;
	vector<Dvd*>vDvd;
	vector<Periodical*>vPeriodical;
	cout<<__func__<<" :BEGIN(ZERO ARG)"<<endl;
	libraryName ="THE GREAT GRAND LIBRARY";
	b = vBook;
        d = vDvd;
        p = vPeriodical;

	cout<<__func__<<" :END(ZERO ARG)"<<endl;

}
