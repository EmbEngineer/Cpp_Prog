#include"headers.h"
#include"classes.h"

void Book::creatInventory()
{
	static int c;
	int pos,ni,i;
	char noi[15];
	char nl[30];
	string n,sn;
	vector<Book*>vecBooks;

	ifstream ifile("books.txt");//open books.txt
	cout<<__func__<<":BEGIN(Book)"<<endl;
	sn = '\0';//initialize string to null
	ifile.getline(noi,30);//get the first line of the file upto 20 character

	n = noi;
	pos = n.find(' ');//finds the position of \b in n string
	sn  = n.substr(pos+1);//this will find the substring in n that is after position pos+1 and put in sn .
	ni  = atoi(sn.c_str());//c_str will convert string in char*
	for(i=0;i<ni;i++)
	{
		Book *b1;
		b1 = new Book;
		//vecBooks.pushback(b);
		ifile.getline(nl,30);//reads the newline in nl
		ifile.getline(nl,30);//reads the newline in nl
		b1->author = nl;
		//cout<<__func__<<":Author: "<<b->author<<endl;
		memset(nl,'\0',30);
		ifile.getline(nl,30);//reads the newline in nl
		b1->publicationDate = atoi(nl);
		//cout<<__func__<<":PublicationDate: "<<b->publicationDate<<endl;
		memset(nl,'\0',30);
		ifile.getline(nl,30);//reads the newline in nl
		b1->title =nl;
		//cout<<__func__<<":TITLE: "<<b->title<<endl;
		memset(nl,'\0',30);
		ifile.getline(nl,30);//reads the newline in nl
		b1->publisherLocation = nl;
		//cout<<__func__<<":Publisherlocation: "<<b->publisherLocation<<endl;
		memset(nl,'\0',30);
		ifile.getline(nl,30);//reads the newline in nl
		b1->publisherName=nl;
		//cout<<__func__<<":PublisherName: "<<b->publisherName<<endl;
		b1->count = c++;
		b.push_back(b1);
	}
	cout<<__func__<<":END(Book)"<<endl;
	return ;
	//return vecBooks;
}
