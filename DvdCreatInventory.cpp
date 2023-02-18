#include"headers.h"
#include"classes.h"

void Dvd::creatInventory()
{
	static int c;
	int pos,ni,i;
	char noi[15];
	char nl[50];
	string n,sn;
//	vector<Dvd*>vecDvds;
	ifstream ifile("dvds.txt");//open dvds.txt
	cout<<__func__<<":BEGIN(Dvd)"<<endl;
	sn = '\0';//initialize string to null
	ifile.getline(noi,30);
	//cout<<__func__<<":"<<noi<<endl;
	n = noi;
	//cout<<__func__<<":"<<n<<endl;
	pos = n.find(' ');
	sn  = n.substr(pos+1);
	ni  = atoi(sn.c_str());
	cout<<__func__<<":ni="<<ni<<endl;
	for(i=0;i<ni;i++)
	{
		Dvd *d1;
		d1 = new Dvd;
		ifile.getline(nl,50);//reads the newline in nl

		ifile.getline(nl,50);//reads the newline in nl
		d1->artist = nl;
	//	cout<<__func__<<":Artist: "<<d->artist<<endl;

		memset(nl,'\0',50);
		ifile.getline(nl,50);//reads the newline in nl
		d1->title = nl;
	//	cout<<__func__<<":TITLE: "<<d->title<<endl;
		
		memset(nl,'\0',50);
		ifile.getline(nl,50);//reads the newline in nl
		d1->label = nl;
	//	cout<<__func__<<":Label: "<<d->label<<endl;

		memset(nl,'\0',50);
		ifile.getline(nl,50);//reads the newline in nl
		d1->date = atoi(nl);
	//	cout<<__func__<<":Date: "<<d->date<<endl;
		d1->count = c++;
		d.push_back(d1);
	}
	cout<<__func__<<":END(Dvd)"<<endl;
	return ;
}
