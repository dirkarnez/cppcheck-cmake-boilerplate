#include <iostream>

using namespace std;

struct Book
{
    char *title;
};

int main()
{
    Book book;
    cout << book.title << endl;
    return 0;
}
