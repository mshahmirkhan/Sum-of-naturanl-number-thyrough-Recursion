#include <iostream>
using namespace std;
int fun(int a );
int s=0;

int fun(int a){
	if(a==1){
		return(a);
	}else{
		s=a+fun(a-1);
		return(s);
	}
}

main(){
	int a;
	cout<<"\n\n\n               :TELL THE SUM OF ALL POSITIVE NATURAL NUMBER : \n\n\n\n";
	cout<<"ENTER ANY POSITIVE NUMBER : ";
	cin>>a;
	s=fun(a);
	cout<<"\n\n"<<s;
	return 0;
}
