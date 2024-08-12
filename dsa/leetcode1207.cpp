#include<iostream>
using namespace std;
    bool uniqueOccurrences(int *arr,int size) {
        int nums[1001] = {0};
        int occs[1001] = {0};
        int x=0;
        for(int i=0;i<size;i++){
            int find = 0;
            for(int j=0;j<x;j++){
                if(arr[i] == nums[j]){
                    find = 1;
                    break;
                }
            }
            if(find) continue;
            else{
                nums[x] = arr[i]; 
            

            int occurs = 1;
            for(int j=i+1;j<size;j++){
                if(arr[j] == arr[i]) occurs++;
            }

            // checking if it is unique
            for(int j=0;j<x;j++){
                if(occurs == occs[j]){
                    cout<<occurs<<" "<<occs[j]<<endl;
                    return false;
                }
            }

            occs[x++] = occurs;
            for(int m=0;m<x;m++) cout<<occs[m]<<" ";

            cout<<endl;

            }


        }
        return true;
    }

int main(){
    int arr[8] = {4,6,4,-8,0,-7,5,7};
    cout<<uniqueOccurrences(arr, 8);
}