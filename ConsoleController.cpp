#define _WIN32_WINNT 0x0500
#pragma comment(linker, "/SUBSYSTEM:WINDOWS")
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <sstream>
#include <ctime>
#include <windows.h>
using namespace std;
int main(){
	string input1;
	string input1sub1;
	string sysshutdownyn;
	string sysrestartyn;
	for( ; ; ){
		cout<<">> ";
		cin>>input1;
		if(input1=="sys-pre-ins-exe"){
			cout<<"sys-pre-ins-exe >> ";
			cin>>input1sub1;
			if(input1sub1=="notepad"){
				system("notepad.exe");
				cout<<"Notepad has been opened."<<endl;
			}
			else if(input1sub1=="ms-edge"){
				system("MicrosoftEdge.exe");
				cout<<"Microsoft has been opened."<<endl;
			}
			else if(input1sub1=="taskmgr"){
				system("taskmgr.exe");
				cout<<"Task Manager has been opened."<<endl;
			}
			else if(input1sub1=="ctrl-panel"){
				system("control.exe");
				cout<<"Control Panel has been opened."<<endl;
			}
		}
		else if(input1=="sys.shutdown.30s"){
			cout<<"Are you sure you want to shut down? [y/n]: ";
			cin>>sysshutdownyn;
			if(sysshutdownyn=="y"){
				cout<<"Shutting down in 30 seconds...";
				system("C:\\Windows\\System32\\shutdown /s");
    			return 0;
    		}
    		if(sysshutdownyn=="Y"){
				cout<<"Shutting down in 30 seconds...";
				system("C:\\Windows\\System32\\shutdown /s");
    			return 0;
    		}
    		if(sysshutdownyn=="n"){
				cout<<"30s shut-down command aborted."<<endl;
    		}
    		if(sysshutdownyn=="N"){
				cout<<"30s shut-down command aborted."<<endl;
    		}
		}
		else if(input1=="sys.shutdown.quick"){
			cout<<"Are you sure you want to shut down? [y/n]: ";
			cin>>sysshutdownyn;
			if(sysshutdownyn=="y"){
				cout<<"Shutting down...";
				system("C:\\Windows\\System32\\shutdown /s /t 0");
    			return 0;
    		}
    		if(sysshutdownyn=="Y"){
				cout<<"Shutting down...";
				system("C:\\Windows\\System32\\shutdown /s /t 0");
    			return 0;
    		}
    		if(sysshutdownyn=="n"){
				cout<<"Immediate shut-down command aborted."<<endl;
    		}
    		if(sysshutdownyn=="N"){
				cout<<"Immediate shut-down command aborted."<<endl;
    		}
		}
		else if(input1=="sys.shutdown.custom-seconds-amount"){
			cout<<"Are you sure you want to shut down? [y/n]: ";
			cin>>sysshutdownyn;
			if(sysshutdownyn=="y"){
				int sec, i;
			    string strOne, strTwo;
			    char str_One[50], str_Two[10];
			    ostringstream intToStr;
			    cout<<"Enter Number of Seconds to Shutdown: ";
			    cin>>sec;
			    intToStr<<sec;
			    strOne = "C:\\Windows\\System32\\shutdown /s /t ";
			    strTwo = intToStr.str();
			    i=0;
			    while(strOne[i])
			    {
			        str_One[i] = strOne[i];
			        i++;
			    }
			    str_One[i] = '\0';
			    i=0;
			    while(strTwo[i])
			    {
			        str_Two[i] = strTwo[i];
			        i++;
			    }
			    str_Two[i] = '\0';
			    strcat(str_One, str_Two);
			    system(str_One);
			    return 0;
    		}
    		if(sysshutdownyn=="Y"){
				int sec, i;
			    string strOne, strTwo;
			    char str_One[50], str_Two[10];
			    ostringstream intToStr;
			    cout<<"Enter Number of Seconds to Shutdown: ";
			    cin>>sec;
			    intToStr<<sec;
			    strOne = "C:\\Windows\\System32\\shutdown /s /t ";
			    strTwo = intToStr.str();
			    i=0;
			    while(strOne[i])
			    {
			        str_One[i] = strOne[i];
			        i++;
			    }
			    str_One[i] = '\0';
			    i=0;
			    while(strTwo[i])
			    {
			        str_Two[i] = strTwo[i];
			        i++;
			    }
			    str_Two[i] = '\0';
			    strcat(str_One, str_Two);
			    system(str_One);
			    return 0;
    		}
    		if(sysshutdownyn=="n"){
				cout<<"Custom time shut-down command aborted."<<endl;
    		}
    		if(sysshutdownyn=="N"){
				cout<<"Custom time shut-down command aborted."<<endl;
    		}
		}
		else if(input1=="sys-clock-date-time.show"){
			time_t timetoday;
   			time (&timetoday);
   			cout<<"Calendar date and time is: "<< asctime(localtime(&timetoday));
		}
		else if(input1=="console.close"){
			break;
		}
		else if(input1=="console.github-repo.open"){
			HWND hWnd = GetConsoleWindow();
			ShowWindow( hWnd, SW_HIDE );
			ShellExecute(NULL,TEXT("open"), TEXT("https://github.com/astronomerayaan/ConsoleController"), TEXT(""),NULL,SW_HIDE);
		}
		else{
			cout<<"Command not recognised."<<endl;
		}
	}
}
