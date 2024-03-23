#include<iostream>
using namespace std;
void selectionsort(int a[],int size){
	for(int i=0;i<size;i++){
		int lowindex=i;
		for(int j=i+1;j<size;j++){
			if(a[j]<a[lowindex]){
				lowindex=j;				
			}
		}
		int temp=a[i];
		a[i]=a[lowindex];
		a[lowindex]=temp;
	}	
}
void display(int a[],int size){
	cout<<"[";
	for(int i=0;i<size;i++){
		cout<<a[i];
		if(i!=size-1){
			cout<<" ";
		}
	}
	cout<<"]"<<endl;
}
int main(){
	int size;
	cout<<"Enter size of the array: ";
	cin>>size;
	while(size<=0){
		cout<<"Size of the array cannot be less than or equal to zero."<<endl<<"Enter a valid input: ";
		cin>>size;
	}
	int a[size];
	for(int i=0;i<size;i++){
		cout<<"Element ["<<i<<"]: ";
		cin>>a[i];
	}
	cout<<"The array is: "<<endl;
	display(a,size);
	cout<<"The sorted array is: "<<endl;
	selectionsort(a,size);
	display(a,size);
	return 0;
}
