#include<bits/stdc++.h>
using namespace std; 
void SelectionSort(int A[],int n){
	for(int i=0;i<n-1;i++){
		int iMin = i;
		for(int j=i+1;j<n;j++){
			if(A[j]<A[iMin])
				iMin=j;
		}
		int temp=A[i];
		A[i]=A[iMin];
		A[iMin]=temp;
	}
}
int main(){
	int A[] = {2,7,4,5,1,3};
	SelectionSort(A,6);
	for(int i=0;i<6;i++){
		cout<<A[i]<<" ";
	}
}

/*
	Selection Sort Description 

	Time Complexity : O(n^2)
	Space Complexity : O(1)

	The Basic idea of Selection Sort is to find the index of the minimum element 
	of the array in one iteration and replace or swap the element with the first 
	index of the array and then lock the first index.

	Same in the second iteration, as we have the 0th index containing the small-
	-est element we go on to find the second smallest element and so on.

	Array = [2,7,4,1,5,3]

	after first pass the array will look like  : 

	Array = [1,7,4,2,5,3]

	Second pass :

	Array = [1,2,4,7,5,3]

	Third Pass : 

	Array = [1,2,3,7,5,4]

	Fourth Pass :

	Array = [1,2,3,4,5,7]

	Fifth Pass : 

	Array = [1,2,3,4,5,7]


*/