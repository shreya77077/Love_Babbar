#include<iostream>
using namespace std;

bool search(int arr[],int size,int key){
   for (int i= 0; i<size;i++){
    if(arr[i]== key){
        return 1;
    }
   }
   return 0;
}

int main(){
    
    int arr[10] = {5, 7,-2,10,11, 5,0,-2,22,1};

    cout<< "Enter the element to search for" << endl;
    int key;
    cin >> key;

    bool found = search(arr,10,key);

   if(found){
    cout<<"Key is present"<< endl ;
   
   }
   else{
    cout<<"Key is lost"<<endl;

   }

    
    return 0;
}

/*
Reverse diff logic
void reverse(int arr[],int n){
    int start = 0;
    int end = -1;

    while(start<= end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
*/