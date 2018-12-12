#include <iostream>
#include <string>
using namespace std;
#include "T.h"

char en[]={'b','c','d','f','g','h','j','k','l','m'};
char de[]={'z','x','w','v','t','s','r','q','p','n'};

int main(){
cout<<"Please enter message\r\n>";
string mess = GetStr();
int len = GetLen(mess);
string enc;
for(int i = 0;i<len;i++){
    char ch = mess[i];
    char sch = ch;
    for(int i = 0;i<10;i++){
        if(ch==en[i]){
            sch=de[i];
        }
        if(ch==de[i]){
            sch=en[i];
        }
    }
    enc+=sch;
}
cout<<enc;
return 0;
}
