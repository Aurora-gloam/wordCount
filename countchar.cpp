#include<iostream>
#include<fstream>
#include<string.h>
using namespace std; 
int main(int argc,char* argv[])
{
	int count=0;
	fstream input;
	input.open(argv[1]);
	if(!input.good())
	cout<<"in�ļ���ʧ�ܣ�"<<endl;
	char c;
    while (!input.eof())
    {
        c=input.get();
        if(isupper(c))
        {
        	c+=32;
        	input.seekg(-1,ios::cur);   
        	input<<c;
        }
        if(c>=0&&c<=255)
		count++;
    }
    input.close();
    cout<<count<<endl;
	return 0;
}

