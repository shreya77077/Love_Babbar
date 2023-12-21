#include<iostream>
using namespace std;

//nCr fact = n!/(n-r)! r!
int fact(int n){
   int fact = 1;

   for(int i = 1; i<= n ; i++){
      fact = fact * i;
   }

   return fact;
}

int nCr(int n, int r){

    int num = fact(n);

    int denom = fact(n-r) * fact(r);

    int ans = num/denom ;

    return ans;


}

int main(){
    
    int n, r;

    cin >> n>>r ;
   
    cout <<"Answer is "<< nCr(n,r)<<endl;

     return 0; 

}

int fifthSize = sizeof(fifth)/sizeof(int);