#include"headers.h"
#include"classes.h"


void Book::BookDisplay()
{

	cout<<__func__<<":BEGIN"<<endl;
	cout << "+--------------------------------------------------" << endl; 
	cout << "| Book Collection:" << endl;
	cout << "| ================" << endl;
	for(auto &item:b)
	{
		cout<<endl;
		cout<<"["<<item->count<<"], ";
		if(item->s==ON_SHELF)
			cout<<"[ON_SHELF] ";
		else
			cout<<"[CHECKED_OUT] ";

		cout<<","<<item->author<<" ,"<<item->publicationDate<<" ,"<<item->title<<" ,"<<item->publisherLocation<<" ,"<<item->publisherName;

	}
	cout <<endl<< "| ================" << endl;
	cout<<__func__<<":END"<<endl;

	return ;
}
