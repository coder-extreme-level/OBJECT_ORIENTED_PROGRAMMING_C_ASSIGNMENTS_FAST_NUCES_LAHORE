//program to shrink array
#include <iostream>
using namespace std;
int* shrinkArray(int *ptr, int size);

int main(){
	int size, size2=0;
	
	cout<<"Enter size of Array:";
	cin>>size;
	
	int *ptr=new int[size];
	
	cout<<"Enter elements of array:"<<endl;
	
	for(int i=0;i<size;i++){
		cin>>*(ptr+i);
	}
	
	again: //repeat if user enter wrong input
	cout<<"Enter size to shrink array:";
	cin>>size2;
	
	if(size2>size){
		cout<<"Wrong Input."<<endl;//use while loop instead 
		goto again;
	}
	else{
	
	ptr=shrinkArray(ptr,size2);
	
	cout<<"Shrinked Array:"<<endl;
	
	for(int i=0;i<size2;i++){
		cout<<*(ptr+i)<<endl;
	}

	
	delete[] ptr;
}
	system ("pause");
	return 0;
}                
int* shrinkArray(int *ptr, int size){
	int *a=new int[size];
	
	for (int i=0;i<size;i++){
		*(a+i)=*(ptr+i);
	}
	
	delete []ptr;
	return a;
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               
