#include<iostream>
using namespace std;

int getMin(int num[], int n){
    int min = INT_MIN;

    for(int i = 0; i<n;i++){
        //int max = INT_MIN;
        if (num[i] < min){
           min = num[i];

        }
        
    }
    return min;
}

int getMax(int num[], int n){
    int max = INT_MIN;

    for(int i = 0; i<n;i++){
        //int max = INT_MIN;
        if (num[i] > max){
           max = num[i];

        }
        
    }
    return max;
}

int main(){
    int size;
    cin >> size;

    int num[100];

    for(int i=0;i<size;i++){
      cin>>num[i];
    }

    cout<< "Maximum value is " << getMax(num , size)<< endl;
    cout<< "Minimum value is " << getMin(num , size)<< endl;


    return 0;
}
//(-2^31 to 2^31) => here (INT_MIN , INT_MAX) range 