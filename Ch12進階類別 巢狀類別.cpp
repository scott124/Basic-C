#include <iostream>
#include <cstring>

using namespace std;

class BookShelf	//�w�q�~��C�OBookShelf
{
	private:
		
		static int MAX_BOOKS;
		int count;
		char *name;
		
		class Book //�w�q�_�����OBook
		{
			private:
				char *title;
				int price;
			public:
				Book(const char* t,int p)
				{
					title = new char[strlen(t)+1];
					strcpy(title,t);
					price = p;
				}
				char *getTitle()
				{
					return title;
				}
				int getPrice()
				{
					return price;
				}
		};
		Book* book[10];
	public:
		BookShelf(const char* n)
		{
			name=new char[strlen(n)+1];
			strcpy(name,n);
			count=0;
		}
		void InsertBook(const char* t,int p)
		{
			if(count==MAX_BOOKS)
			{
				cout<<"�Ѭ[���F\n"<<endl;
			}
				book[count++]=new Book(t,p);
		 } 
		
		void ListAllBooks()
		{
			cout<<"["<<name<<"]"<<endl;
			cout<<"==========================="<<endl;
			for(int i=0;i<count;i++)
				cout<<book[i]->getTitle()<<book[i]->getPrice()<<endl;
		}
		 
};
int BookShelf::MAX_BOOKS=10;
int main()
{
	BookShelf bks("�ڪ��Ѭ[");
	bks.InsertBook("VC++",81000);	//���J���y
	bks.InsertBook("VC--",100);	
	bks.InsertBook("VC**",81);	
	bks.ListAllBooks();
	
	return 0; 
 } 
