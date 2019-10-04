#include<bits/stdc++.h>
using namespace std;
void syntaxError();

// range will be given in command line input
int main(int argc, char *argv[]){
	if(argc!=3){
		syntaxError();
	} 
	int lower_limit = atoi(argv[1]);
	int upper_limit = atoi(argv[2]);
	if (lower_limit>upper_limit){
		cout<<"Upper limit must be greater than lower limit"<<endl;
		syntaxError(); 
	}
	cout<<"Odd numbers between "<<lower_limit<<" and "<<upper_limit<<" is : ";
	for(int i=lower_limit;i<=upper_limit;i++){
		if(i%2){
			cout<<i<<" ";
		}
	} 
	cout<<endl;
	return 0;
}
void syntaxError(){
	cout<<"Error: use correct syntax"<<endl;
	cout<<"syntax: ./executable <lower_limit> <upper_limit>"<<endl;
	cout<<"example: ./a.out 1 100"<<endl;
	exit(0);
}