#include"headers.h"
#include"classes.h"


void Periodical::checkIN()
{
	
        string c;
	cout<<__func__<<":BEGIN"<<endl;
        cout<<"ENTER THE BOOK YOU WANT TO CHECKIN"<<endl;
        getchar();
        getline(cin,c);

        for(auto &item:p)
        {
                if(item->title == c)
                        item->s = ON_SHELF;
        }
	cout<<__func__<<":END"<<endl;

return ;
}
