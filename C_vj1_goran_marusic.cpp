#include <iostream>

using namespace std;

int * returnPositiveFirst(int *niz,size_t size){
    int i = 0;
    for (; i< size; i++){
        if (niz[i] > 0){
            return &niz[i];
        }
        
    }
    return NULL;
}

int main()
{
    int niz[] = {0,0,1,3,4};
    
    int * lvalue = returnPositiveFirst(niz,sizeof(niz) / sizeof(niz[0]));
    *lvalue = 0;
    for (int i =0;i < (sizeof(niz)/sizeof(niz[0]));i++){
        printf("%d ",niz[i]);
    }
    return 0;
}