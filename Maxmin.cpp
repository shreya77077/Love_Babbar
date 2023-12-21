#include<iostream>
using namespace std;

int getMax(int num[], int n){
    int max = INT_MIN;

    for(int i = 0; i<n;i++){
        int max = INT_MIN;
        max = num[i];
        
    }
}

int main(){
    int size;
    cin >> size;

    int num[100];

    for(int i=0;i<size;i++){
      cin>>num[i];
    }

    return 0;
}
//(-2^31 to 2^31) => here (INT_MIN , INT_MAX) range 