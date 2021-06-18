//Q.1. max value//

#include <stdio.h>
int max(int array[], int n)
{
    for(int i = 1; i < n; i++)
    {
    if (array[1] < array[i]) 
    {
      array[1] = array[i];
    }
  }
  return array[1];
}

int main()
{
    int data[]={9,5,6,10,2,-3,4};
    int n=7;
    int a=max(data,n);
    printf("max:%d \n",a );
    
    return 0;
    
}



//Q.2. min value//

#include <stdio.h>
int min(int array[], int n)
{
    for(int i = 1; i < n; i++)
    {
    if (array[1] > array[i]) 
    {
      array[1] = array[i];
    }
  }
  return array[1];
}

int main()
{
    int data[]={9,5,6,10,2,-3,4};
    int n=7;
    int a=min(data,n);
    printf("min:%d \n",a );
    
    return 0;
    
}
