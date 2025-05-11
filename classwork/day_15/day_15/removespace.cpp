#include <iostream>
using namespace std;
int main() {
    char in_str[100];
    char out_str[100];
    cout << "enter string: " << endl;
    cin.getline(in_str, 99);
    int j, i;
    
    for (int i = 0;i <= strlen(in_str);i++) {
       if(in_str[i]=' '){
           continue;
        }
       else {
           out_str[j++] = in_str[i];
       }
       out_str[j] = '\0';
    }
    cout << "the removed space in string: " << out_str << endl;
    return 0;
}
	






 
        