#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "enter the number of day: ";
    cin>>n;
    switch(n){
        case 1:
        cout<<"Monday";
        break;

         case 2:
         cout<<"tuesday";
        break;

         case 3:
         cout<<"wednesday";
        break;

         case 4:
         cout<<"thursday";
        break;

         case 5:
         cout<<"friday";
        break;

         case 6:
         cout<<"saturday";
        break;

        case 7:
        cout<<"Sunday";
        break;

         default:
         cout<<"invalidday";
    }

   
      return 0;
    
}