#include"headers.h"
#include"classes.h"

Book::Book()
{
	cout<<__func__<<":BEGIN (BOOKZERO)"<<endl;
               
       		count = 0;	
		author = '\0';
                publicationDate = 0;
               	title ='\0';
                publisherLocation ='\0';
                publisherName ='\0';
		s = CHECKED_OUT;	
	cout<<__func__<<":END (BOOKZERO)"<<endl;
}
