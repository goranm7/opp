#include <iostream>

using namespace std;

int * sumArray(int n){
    int i = 0;
    int* temp;
    temp = new int[n];
    for (; i< n; i++){
        if (i < 2){
            temp[i] = 1;
            continue;
        }
        temp[i] = temp[i-1] + temp[i-2];
    }

    return temp;
}

void ispisNiza(int * niz,int size){
    int i = 0;
    for (;i<size;i++){
        cout<<niz[i]<<" ";
    }
}

int main()
{
    int *temp;
    int size;
    cin >> size;
    temp = sumArray(size);
    ispisNiza(temp,size);
    delete(temp);
    return 0;
}