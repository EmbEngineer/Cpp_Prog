#include"headers.h"
#include"classes.h"


void Periodical::PeriodicalDisplay()
{

	cout<<__func__<<":BEGIN"<<endl;
	cout << "+--------------------------------------------------" << endl;
	cout << "| Periodical Collection:" << endl;
	cout << "| ================" << endl;
	for(auto &item:p)
	{
		cout<<"["<<item->count<<"], ";
		if(item->s==ON_SHELF)
			cout<<"[ON_SHELF]";
		else
			cout<<"[CHECKED_OUT]";
		cout<<","<<item->author<<","<<item->publicationData<<","<<item->title<<","<<item->place<<","<<item->pageRangeBeg<<" - "<<item->pageRangeEnd<<endl;
	}
	cout << "| ================" << endl;
	cout<<__func__<<":END"<<endl;
}
