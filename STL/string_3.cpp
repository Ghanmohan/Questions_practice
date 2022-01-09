#include<iostream>
#include<cstring>
using namespace std;

//strtok function usage
//used to cut out substring out of a string


int main()
{
    char s[50]="Ghanmohan dangi and yatharth";
    char *ptr=strtok(s," ");
    cout<<ptr<<endl;

    while(ptr!=NULL)
    {
        cout<<ptr<<endl;
        ptr=strtok(NULL," ");
        
    }
    return 0;
}
