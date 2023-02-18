#include"headers.h"
#include"classes.h"


void Dvd::checkIN()
{

        string c;
	cout<<__func__<<":BEGIN"<<endl;
        cout<<"ENTER THE TITLE OF DVD YOU WANT TO CHECKIN"<<endl;
        getchar();
        getline(cin,c);

        for(auto &item:d)
        {
                if(item->title == c)
                        item->s = ON_SHELF;
        }
	cout<<__func__<<":END"<<endl;

return ;
}
