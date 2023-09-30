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

    for (int i = 0;i <5; i++){
        cout<<"HI"<<endl;
        cout<<"Hey"<<endl;
        continue;
        cout<<"reply toh kerde"<<endl;

    }

}
// 0,1,1,2,3,5,8,13,21
//fibonacci series
//n = (n-1) + (n-2)
