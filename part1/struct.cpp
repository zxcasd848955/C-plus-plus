#include <iostream>
#include <cstring>


using namespace std;


// struct Books
// {
//     char title[50];
//     char author[50];
//     char subject[100];
//     int book_id;
// };

typedef struce Books{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
}Books;

void book(struct Books *book);
main(int argc, char const *argv[])
{
    Books Book1;
    Books Book2;

    //Book1
    strcpy(Book1.title, "css");
    strcpy(Book1.author, "cz");
    strcpy(Book1.subject, "teach");

    // cout << Book1.title << "---" <<Book1.author<<endl;

    book(&Book1);
    return 0;
}


void book(struct Books *book){
    cout << "title" <<(*book).title <<endl;
}