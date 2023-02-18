#include"headers.h"
#include"classes.h"

void Periodical::creatInventory()
{
	static int c;
	int pos,ni,i;
	char noi[15];
	char nl[50];
	string n,sn;
	int pos1,r1,r2;
//	vector<Periodical*>vecPeriodicals;
	
	cout<<__func__<<":BEGIN(Periodical)"<<endl;
	
	ifstream ifile("periodicals.txt");
	sn = '\0';//initialize string to null
	ifile.getline(noi,30);
	//cout<<__func__<<":"<<noi<<endl;
	n = noi;
	//cout<<__func__<<":"<<n<<endl;
	pos = n.find(' ');
	sn  = n.substr(pos+1);
	
	ni  = atoi(sn.c_str());
	//cout<<__func__<<":ni="<<ni<<endl;
	
	for(i=0;i<ni;i++)
	{
		Periodical *p1;
		p1 = new Periodical;
		ifile.getline(nl,50);//reads the newline in nl

		ifile.getline(nl,50);//reads the newline in nl
		p1->author = nl;
	//	cout<<__func__<<":Author: "<<p->author<<endl;

		memset(nl,'\0',50);
		ifile.getline(nl,50);//reads the newline in nl
		p1->publicationData = atoi(nl);
	//	cout<<__func__<<":Data: "<<p->publicationData<<endl;
		
		memset(nl,'\0',50);
		ifile.getline(nl,50);//reads the newline in nl
		p1->title = nl;
	//	cout<<__func__<<":TITLE: "<<p->title<<endl;
		
		memset(nl,'\0',50);
		ifile.getline(nl,50);//reads the newline in nl
		p1->place = nl;
	//	cout<<__func__<<":Place: "<<p->place<<endl;
		/*page range*/
		
		memset(nl,'\0',50);
		ifile.getline(nl,30);//reads the newline in nl
		string str1,str2;
		str1 = nl;
		str2 = nl;
		
		r2   = str2.find('-');
		str1 = str1.substr(0,r2-1);
		str2 = str2.substr(r2+1);

		p1->pageRangeBeg = atoi(str1.c_str());
		p1->pageRangeEnd = atoi(str2.c_str());
		p1->count = c++;
		p.push_back(p1);
	}
	cout<<__func__<<":END(Periodical)"<<endl;
	return ;
}
