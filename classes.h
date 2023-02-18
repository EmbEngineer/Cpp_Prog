using namespace std;
enum state{ ON_SHELF , CHECKED_OUT };
class Book;
class Dvd;
class Periodical;
class Library
{
	private:
	protected: string libraryName;
		   vector<Book*> b;
		   vector<Dvd*> d;
		   vector<Periodical*> p;
	
	public:
		   static int mainMenu();
		   void display();
		   Library();
};
class Book:public Library
{
	private:
		//static int count;
		int count;
		string author;
		int publicationDate;
		string title;
		string publisherLocation;
		string publisherName;
		state s;
	public:
		Book();
		void creatInventory();
		void BookDisplay();
		void checkIN ();
		void checkOUT();
};

class Dvd:public Library
{
	private:
		
		int count;
		//static int count;
		string artist;
		string title;
		string label;
		int date;
		state s;
	public:
		Dvd();
		void creatInventory();
		void DvdDisplay();
		void checkIN ();
		void checkOUT();
};

class Periodical:public Library
{
	private:
		int count;
		//static int count;
		string author;
		int publicationData;
		string title;
		string place;
		int pageRangeBeg,pageRangeEnd;
		state s;

	public:
		Periodical();
		void creatInventory();
		void PeriodicalDisplay();
		void checkIN ();
		void checkOUT();

};
