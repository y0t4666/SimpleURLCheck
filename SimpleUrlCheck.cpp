#include <Windows.h>
#include <WinInet.h>
#include <stdio.h>
#include <iostream>

using namespace std;


int main()
{
	 string TryUrl;
	do
	{
		cout << "Enter URL : ";
		cin >> TryUrl;
		LPCSTR ConnectUrl = TryUrl.c_str();
		bool CheckNet = InternetCheckConnectionA(ConnectUrl, FLAG_ICC_FORCE_CONNECTION, 0);
		if (CheckNet == 1)
		{
			cout << ConnectUrl  << " Is Available\n\n";
		}
		else
		{
			cout << ConnectUrl << " Is Unavailable\n\n\n";
		}
	} while (true);
	
}
