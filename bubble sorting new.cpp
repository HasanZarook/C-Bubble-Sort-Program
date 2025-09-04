# include<iostream>

using namespace std;

int main(){
	int a;
	cout<<"Enter the Array size :"<<endl;
	cin>>a;
	int arr[a];
	cout<<"Enter the Array elements :"<<endl;
	for (int i=0; i<=(a-1); i++){
		cin>>arr[i];
	}
	
//	int b =sizeof(arr)/sizeof(arr[0]);
int b =a ;

	while(b>0){
		
		for (int i=0 ; i<=(b-2) ;i++){
			
			
			if(arr[i]>arr[i+1]){
				int temp = arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
			
		}
		b--;
			}
			for (int i=0; i<a; i++){
		cout<<arr[i]<<",";
	}
	cout<<" \n";
	return 0;
	
}
