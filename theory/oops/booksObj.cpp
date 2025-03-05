#include <iostream>
using namespace std;

class Books
{
public:
    string name;
    float bookId;
    float quantity;
    string authorName;
};
int main()
{
    Books b1;
    b1.name = "Aman";
    b1.bookId = 123;
    b1.quantity = 111;
    b1.authorName = "Tanmay";

    Books b2;
    b1.name = "OM";
    b1.bookId = 124;
    b1.quantity = 1131;
    b1.authorName = "Omkar";

    Books b3;
    b1.name = "Mangesh";
    b1.bookId = 125;
    b1.quantity = 131;
    b1.authorName = "Om";

    Books b4;
    b1.name = "Niraj";
    b1.bookId = 126;
    b1.quantity = 131;
    b1.authorName = "Aman";

    cout << b1.authorName << " \n"
         << b1.bookId << " \n"
         << b1.name << " \n"
         << b1.quantity << endl;
    cout << b2.authorName << " \n"
         << b2.bookId << " \n"
         << b2.name << " \n"
         << b2.quantity << endl;
    cout << b3.authorName << " \n"
         << b3.bookId << " \n"
         << b3.name << " \n"
         << b3.quantity << endl;
    cout << b4.authorName << " \n"
         << b4.bookId << " \n"
         << b4.name << " \n"
         << b4.quantity << endl;
}
