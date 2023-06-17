#include <bits/stdc++.h> 
bool isPossible(int *arr, int n)
{
    
    
        int i;
        int b=0;
        for(i=1;i<n;i++)
        {
          if (arr[i - 1] > arr[i]) {
            b++;
            if (b > 1)
              return false;
            if (i==1 ||  (arr[i - 2] < arr[i]))
              arr[i-1] = arr[i];
            else
              arr[i] = arr[i-1];
          }
        }
        return true;
    
}
