#include <iostream>
using namespace std;

int main()
{
   int i, x;
   char str[50];

   cout << "Please enter a string:\t";
   cin >> str;

   cout << "\nPlease choose following options:\n";
   cout << " Encrypt the string  ----> enter 1"<<endl;
   cout << " Decrypt the string  ----> enter 2"<<endl;
   cin >> x;

   switch(x)
   {
      case 1:
         for(i = 0; (i <=100 && str[i]); i++)
             str[i] = str[i]+ 2;   

         cout << "\nEncrypted string: " << str << endl;
         break;

      case 2:
         for(i = 0; (i <=100 && str[i]); i++)
         str[i] = str[i] - 2; 

      cout << \n"Decrypted string: " << str << endl;
      break;

      default:
         cout << "\nInvalid Input!!"<<endl;
   }
   return 0;
}            
