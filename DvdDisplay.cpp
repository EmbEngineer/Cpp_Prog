#include"headers.h"
#include"classes.h"


//enum { ON_SHEL , CHECK_OUT };
void Dvd::DvdDisplay()
{
	cout<<__func__<<":BEGIN"<<endl;
	cout << "+--------------------------------------------------" << endl;
	cout << "| Dvd Collection:" << endl;
	cout << "| ================" << endl;
	for(auto &item:d)
	{
		
		cout<<"["<<item->count<<"], ";

		if(item->s == ON_SHELF)
			cout<<"[ON_SHELF]";
		else
			cout<<"[CHECKED_OUT]";
		cout<<","<<item->artist<<","<<item->title<<","<<item->label<<","<<item->date<<endl;
	}
	cout << "| ================" << endl;
	cout<<__func__<<":END"<<endl;

	return ;
}
