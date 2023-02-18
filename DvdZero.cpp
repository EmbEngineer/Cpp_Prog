#include"headers.h"
#include"classes.h"

Dvd::Dvd()
{
	cout<<__func__<<":BEGIN (DVDZERO)"<<endl;
		//count  =0;
                artist ='\0';
                title  ='\0';
                label  ='\0';
                date   =0;
                s = CHECKED_OUT;
	cout<<__func__<<":END (DVDZERO)"<<endl;
}
