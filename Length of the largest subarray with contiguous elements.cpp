#include <iostream>
using namespace std;

int largest_subaaray_with_cont_elements(int arr[],int n){
    int maxi,mini;
    int max_length=0;
    for(int i=0;i<n;i++){
        maxi=arr[i];
        mini=arr[i];
    for(int j=i+1;j<n;j++){
        if(maxi<arr[j])
            maxi=arr[j];
            
        if(mini>arr[j])
            mini=arr[j];

        if (maxi-mini==j-i){
            max_length=max(max_length,maxi-mini+1);
        }
        if (maxi-mini>n){
            break;
        }
    }}
    return max_length;
}
int main() {
    int n;
    cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	cout<<largest_subaaray_with_cont_elements(arr,n);
	return 0;
}
