#include"headers.h"
#include"classes.h"

int Library::mainMenu()
{
	int i;
	Book b1;
	Dvd d1;
	Periodical p1;

	cout<<__func__<<":BEGIN\n"<<endl;

	b1.creatInventory();
	d1.creatInventory();
	p1.creatInventory();

	while(true)
	{
		cout<<"======= Library Inventory Manager ======="<<endl;
		cout<<"0  - Quit"<<endl;
		cout<<"1  - Display all collections"<<endl;
		cout<<"2  - Display book colletion"<<endl;
		cout<<"3  - Display Periodical collection"<<endl;
		cout<<"4  - Display DVD collection"<<endl;
		cout<<"10 - CHECKOUT BOOK"<<endl;
		cout<<"11 - CHECKOUT PERIODICAL"<<endl;
		cout<<"12 - CHECKOUT DVD"<<endl;
		cout<<"20 - CHECKIN BOOK"<<endl;
		cout<<"21 - CHECKIN PERIODICAL"<<endl;
		cout<<"22 - CHECKIN DVD"<<endl;
		cout<<"========================================="<<endl;

		cout<<"PLEASE ENTER YOUR CHOICE"<<endl;
		cin>>i;

		switch(i)
		{
			case 0:
				exit(EXIT_SUCCESS);
				break;

			case 1:
				b1.BookDisplay();
				p1.PeriodicalDisplay();
				d1.DvdDisplay();
				break;
			case 2:

				b1.BookDisplay();
				break;
			case 3:
				p1.PeriodicalDisplay();
				break;
			case 4:
				d1.DvdDisplay();
				break;
			case 10:
				b1.checkOUT();
				break;
			case 11:
				p1.checkOUT();
				break;
			case 12:
				d1.checkOUT();
				break;
			case 20:
				b1.checkIN();
				break;
			case 21:
				p1.checkIN();
				break;
			case 22:
				d1.checkIN();
				break;
		}
	}
	cout<<__func__<<":END\n"<<endl;
	return 0;
}
