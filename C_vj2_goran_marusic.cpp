#include <iostream>

using namespace std;

void removeDuplicates(int *niz[],int *size){
    int i = 0,j=0,k =0;
    int duplicates = 0;
    int* temp;
    for (; i< *size; i++){
        for (; j< i;j++){
             if (i !=j && (*niz)[j] == (*niz)[i]){
                duplicates++;
            }
        }
    }
    duplicates = *size - duplicates;

    temp = new int[duplicates];
    for (i = 0;i<*size;i++){
        for (j =0;j<i;j++){
            if (i !=j && (*niz)[j] == (*niz)[i]){
               goto nxt;
            }
        }
        temp[k] = (*niz)[i];
        k++;
        nxt:;
    }
    *size = duplicates;
    *niz = temp;
}

void unosNiza(int * niz[],int size){
    int i = 0;
    *niz = new int[size];
    for (;i<size;i++){
        cin>>(*niz)[i];
    }
}

void ispisNiza(int * niz[],int size){
    int i = 0;
    for (;i<size;i++){
        cout<<(*niz)[i]<<" ";
    }
}

int main()
{
    int *niz;
    int size;
    cin >> size;
    unosNiza(&niz,size);
    removeDuplicates(&niz,&size);
    ispisNiza(&niz,size);
    delete(niz);
    return 0;
}