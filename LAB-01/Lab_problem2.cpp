#include <iostream>
using namespace std;
    int main ()
    {
      int x,y,z;
      cin>>x>>y>>z;
      if (x>=y && x>=z)
        cout<< x <<" is the largest number";
      else if(y>=x && y>=z)
        cout << y << " is the largest number";
      else
         cout<< z <<" is the largest number";
      return 0;


    }
