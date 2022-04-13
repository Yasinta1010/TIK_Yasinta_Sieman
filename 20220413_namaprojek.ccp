//nested if
//percabangan bersarang
//if dalam if

#include <iostream>
using namespace std;
int main()
{
    int nilai;
    if (nilai % 2 == 0) {
        cout<<"Bilangan Genap lebih dari 10"<<endl;
    }
    else {
        cout<<"Bilangan Genap lebih dari 10"<<endl;
    }
    else {
        cout<<"Bilangan Ganjil";
        if (nilai <10) {
            cout<<"Bilangan Ganjil kurang dari 10"<<endl;
        else {
            cout<<"Bilangan Ganjil lebih dari 10"<<endl;
            }
        }
        return 0;
}
