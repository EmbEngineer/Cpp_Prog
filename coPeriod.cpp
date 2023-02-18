#include"headers.h"
#include"classes.h"


void Periodical::checkOUT()
{
        string c;
	cout<<__func__<<":BEGIN"<<endl;
        cout<<"ENTER THE BOOK YOU WANT TO CHECKOUT"<<endl;
        getchar();
        getline(cin,c);

        for(auto &item:p)
        {
                if(item->title == c)
                        item->s = CHECKED_OUT;
        }

	cout<<__func__<<":END"<<endl;

return ;
}
