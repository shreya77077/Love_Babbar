#include<iostream>
using namespace std;

int main (){
    int n,a,b,c;
    cout<<"enter the value of n"<< endl;
    //cin>> n;

    cout<<"printing count from 1 to n"<< endl;
    // int i = 1;
    // for (; ;){
    //    if(i <= n ){
    //     cout<< i << endl;
    //    }
    //    else{
    //     break;
    //    }
    //    i ++;
    // }
    for(a = 0,b = 1,c= 2 ; a >=0 && b >= 1 && c >= 2; a--, b -- ,c--){
        cout << a<<" "<<b<< " "<<c<<endl;

    }

}