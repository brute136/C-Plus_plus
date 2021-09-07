#include <iostream>
#include <string>
using namespace std;
class Books{
    protected:
        string Book;
        int Price;
    public:
        Books(string Book, int Price){
            this->Book=Book;
            this->Price=Price;
        }
        virtual void display()=0;
    
};
class Book_Print : public Books{
    public:
        Book_Print(string Book1, int Price1) : Books(Book1, Price1){
        }
        void display(){
            cout<<"The Book Name Is "<<Book<<endl<<endl<<endl;
            
            cout<<"The Price Is "<<Price<<endl<<endl<<endl;
        }
};
class BooksWithCode : public Book_Print{
        int id;
    public:
        BooksWithCode(string Name, int Pr, int id) : Book_Print(Name, Pr){
            this->id=id;
        }
        void display (){
                cout<<"The Book Name Is "<<Book<<endl<<endl<<endl;
            
            cout<<"The Price Is "<<Price<<endl<<endl<<endl;
            
            
            cout<<"The Id Is "<<id<<endl;
        }
};
int main(){
	Book_Print obj("Harry Poter ", 100);
	BooksWithCode obj2("Harry Nishanta", 200, 2);
	 Books* arr[2];
	arr[0] = &obj;
	arr[1] = &obj2;
	
	arr[0]->display();
	arr[1]->display();
	Book_Print * ptr = new Book_Print("Nishantaaaa", 200);
	for (int i=0;i<10;i++){
	    (ptr+i)->display();
	}
	
	
	return 0; 
}