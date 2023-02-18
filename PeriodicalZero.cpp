#include"headers.h"
#include"classes.h"

Periodical::Periodical()
{
	cout<<__func__<<":BEGIN (PERIODICALZERO)"<<endl;

                author='\0';
                publicationData=0;
                title='\0';
                place='\0';
                pageRangeBeg=0;
		pageRangeEnd=0;
                s = CHECKED_OUT;

	cout<<__func__<<":END (PERIODICALZERO)"<<endl;
}
