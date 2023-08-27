#include<iostream>
using namespace std;

int main(){
    int a;
    cout << "Namaste Duniya :)"<<endl;
    // endl or \n both r same
    //  cout << "Namaste Duniya :)"<< '\n';
    cout << a << endl;

    float f = 1.2;
    cout << f << endl;
    
    int size = sizeof(a);
    cout<< "size of a is :"<< size<< endl;

    //Type cast [ASCAII]
    int a = 'a';
    cout << a << endl;
    //a = 97

    char ch = 98;
    cout << ch << endl; //b

}
/*
Data types
int - 4bytes
max =  2^32 - 1
min = 0
char ch = 'a' - 1 byte
max = 2^8 -1 , min = 0
bool (true/false) - 1 bit
float f = 1.2 -8bytes
double d = 2.23 - 8bytes
*/
