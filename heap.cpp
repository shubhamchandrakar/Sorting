#include<iostream>
#include<string.h>
using namespace std;
class _heap{
	int *a;
	int size;
public:
	_heap(){
		a= NULL;
		size= 0;
	}
	~_heap(){
		delete a;
		size= 0;
	}
	void getsize(int arr[], int n){
		a = new int[n];
		size = n;
		a = arr;
	}
	void display(){
		int i;
		cout<<"\n Your Array : ";
		for(i=0;i<size;i++){
			cout<<" | "<<a[i];
		}
	}
	void swap(int x, int y){
		int tmp;
		tmp = a[y];
		a[y]= a[x];
		a[x]= tmp;

	}
	void heap_sort()
	{
		int i;
		int pi = (size/2)-1;
		// cout<<"\n pi in heap_sort : "<< pi;
		for (i = pi; i >= 0; i--) {
			// cout<<"\n pi at calling time build_heap : "<< i;
			buid_heap(i, size);
		}

		for (int j = 0; j < size-1; j++)
		{
			swap(0,size-1-j);
			buid_heap(0, size-1-j);

		}

	}

	void buid_heap(int pi, int size) {
		int tmp= a[pi];
		int c;
		for ( ;2*pi+1 <size; pi=c) {
			c = 2*pi+1;
			// cout<<"\n c  in for loop : "<< c;
			if (c+1<size && a[c+1]> a[c]) { // change c to i
				c++;
			}
			if (tmp< a[c]) {
				// cout<<"\n pi before parent update : "<< pi;
				a[pi] = a[c];
				// cout<<"\n parent updated: with "<< a[pi];
			} else {
				break;
			}

		}
		// cout<<"\n pi before child update : "<< pi;
		a[pi]= tmp;
		// cout<<"\n child updated: with "<< a[pi];

	}

};
int main(){
		int n,i;
		int *a;
		_heap q1;
		cout<<"\n Enter the size of array : ";
		cin>>n;
		a = new int[n];
		for(i=0;i<n;i++){
			cout<<"\n Enter the element of ["<<i<<"] : ";
			cin>>a[i];
		}
		q1.getsize(a,n);
		q1.display();
		q1.heap_sort();
		cout<<"\nsorted array : ";
		q1.display();
		cout<<"\n";
	return(0);
}
