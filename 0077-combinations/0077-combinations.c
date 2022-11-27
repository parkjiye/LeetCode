/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int **array, num_comb=0;
int comb[21];

int numberofrows(int n, int k)
{
    if(k==0 || n==k) return 1;
    return numberofrows(n-1, k) + numberofrows(n-1, k-1);
}

void choose(int n, int k, int count)
{
    if(count==k)
    {
        for(int j=0;j<k;j++)
        {
            array[num_comb][j]=comb[j];
        }
        num_comb+=1;
        return;
    }

    int prev = count>0 ? comb[count-1] : 0;
    for(int i=prev+1;i<=n;i++)
    {
        comb[count] = i;
        choose(n, k, count+1);
    }
}


int** combine(int n, int k, int* returnSize, int** returnColumnSizes){

    int numofrows = numberofrows(n, k);
    *returnSize = numofrows;

    *returnColumnSizes = (int*) malloc(sizeof(int)*numofrows);
    for(int i=0;i<numofrows;i++)
    {
        (*returnColumnSizes)[i]=k;
    }

    array = (int**) malloc(sizeof(int*)*numofrows);
    for(int i=0;i<numofrows;i++)
    {
        array[i]=(int*)malloc(sizeof(int)*k);
    }

    num_comb=0;
    choose(n, k, 0);

    return array;
}