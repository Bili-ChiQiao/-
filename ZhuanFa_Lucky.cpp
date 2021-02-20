#include <iostream>
#include <cstdio>
#include <windows.h>
#include <ctime>
using namespace std;
int main()
{
	freopen("ZhuanFa_list.txt", "r", stdin);
    string name[1000];
    int n=0;
    while (std::cin >> name[++n]);
    freopen("CON", "r", stdin);
    srand((unsigned)time(NULL));
    cout<<"一等奖:"<<name[rand()%n]<<endl;
    system("pause");
    cout<<endl;
    cout<<"二等奖:"<<endl;
    for(int i=0;i<10;i++)
    {
    	cout<<name[rand()%n];
    	//system("pause");
    	getchar();
    }
    cout<<endl;
    system("pause"); 
    
    return 0; 
}

