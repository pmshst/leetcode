#include <stdio.h>
#include <iostream>
void swap(int tree[], int m, int n)
{
   int temp = tree[m];
   tree[m] = tree[n];
   tree[n] = temp;
}
void heapify(int tree[], int n, int i)
{  
   if(i>=n)
   {
     return;
   }	   
   int left= 2 * i + 1;
   int right= 2 * i + 2;
   int max = i;
   if(left<n && tree[left]>tree[max])
   {
      max = left;
   }
   if (right<n && tree[right]>tree[max])
   {
      max = right;
   }
   if(max!=i)
   {
      swap(tree, max, i);
	  heapify(tree,n, max);
   }
}

void build_heap(int tree[], int n)
{
   int last_node = n-1;
   int parent = (last_node - 1)/2;
   for(int i=parent;i>=0;i--)
   {
	   heapify(tree,n,i);
   }

}

void heap_sort(int tree[], int n)
{
  for(int i =n;i>0;i--)
  {
	  build_heap(tree,i);
      swap(tree,0,i-1);
  }
}

int main()
{
  int tree[]={3,9,2,4,8};
  heap_sort(tree,5);
  //build_heap(tree,5);
  //heapify(tree, 5, 0);
  for(int i=0;i<5;i++)
	 std::cout<<tree[i]<<std::endl;
  return 0;  
}
