#include "iostream"
#include "stdlib.h"
using namespace std;
int main(){
	int x,y;
	while(cin>>x>>y){
	if (!(x*y))
		cout << "Signs can't be sure" << endl;
	else if (!((x*y) + abs(x*y*1.0)))
		cout << "Signs are opposite" << endl;
	else 
		cout << "Signs are not opposot" << endl;
	}
   return 0;
}
