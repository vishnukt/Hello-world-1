#include <iostream>
using namespace std;
int main()
{
int arm=0,a,b,c,d,no;
cout << "Enter any number" << endl;
cin >> no;
d = no;
for(d=no;no!= 0;a=no%10,arm+=a*a*a,no=no/10);
if(arm==d)
  cout<<"Yes the number is an armstrong number"<<endl;
else
   cout<<"No, the number you entered is not an armstrong number"<<endl;

return 0;
}
