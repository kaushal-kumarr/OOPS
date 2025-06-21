#include<iostream>
using namespace std;

class library {
protected:
    string name;
    int pub_year;

public:
    library(string name, int pub_year) {
        this->name = name;
        this->pub_year = pub_year;
    }

    library() {} // default constructor

    void display_details() {
        cout << "Name is: " << name << endl;
        cout << "Publication year is: " << pub_year << endl;
    }
};

class books : public library {
protected:
    string author;

public:
    books(string author, string name, int pub_year) : library(name, pub_year) {
        this->author = author;
    }

    books() {} // default constructor

    void books_details() {
        display_details();
        cout << "Author is: " << author << endl;
    }
};

class newspaper : public books {
protected:
    string pub_date;

public:
    newspaper(string pub_date, string author, string name, int pub_year)
        : books(author, name, pub_year) // ✅ correct constructor call
    {
        this->pub_date = pub_date;
    }

    void newspaper_details() {
        books_details();
        cout << "Publication date is: " << pub_date << endl;
    }
};

int main() {
    books b1("Pradeep K Sinha", "C++", 2005);
    cout << "\nBook Details:" << endl;
    b1.books_details();

    newspaper n1("11/03/2025", "Editor", "Hindutimes", 2025);
    cout << "\nNewspaper Details:" << endl;
    n1.newspaper_details();

    return 0;
}
