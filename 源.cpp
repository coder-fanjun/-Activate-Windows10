#include<iostream>
#include<Windows.h>
#include<fstream>
#include<algorithm>
using namespace std;
int main()
{
	int xt,set;
	

	
	printf("激活方式？\n 1.kms 2.exit  \n");

	cin >> set;
	system("cls");

	if (set == 2)
	{
		return 0;

	}


	if (set == 1)
	{
		cout << "请选择对应系统：" << endl
			<< "1.win10 edu 教育版" << endl
			<< "2.win10 ltsc 缩减版" << endl
			<< "3.win10 ltsb 阉割版" << endl
			<< "4.win10 ltd 企业版" << endl
			<< "5.win10 专业版" << endl
			<< "6.win10 home 家庭版" << endl;
		cin >> xt;

		system("cls");

		if(xt==6)
		{
			system("slmgr /ipk 37GNV-YCQVD-38XP9-T848R-FC2HD");
			printf("请稍等，正在配置当前激活服务器为kms.o3k.org \n");
			system("slmgr /skms kms.03k.org");
			printf("正在进行激活，请稍等……");
			system("slmgr /ato");

		}



		if (xt == 5)
		{
			system("slmgr /ipk W269N-WFGWX-YVC9B-4J6C9-T83GX");
			printf("请稍等，正在配置当前激活服务器为kms.o3k.org \n");
			system("slmgr /skms kms.03k.org");
			printf("正在进行激活，请稍等……");
			system("slmgr /ato");
		}



		if (xt == 4)
		{
			system("slmgr /ipk NPPR9-FWDCX-D2C8J-H872K-2YT43");
			printf("请稍等，正在配置当前激活服务器为kms.o3k.org \n");
			system("slmgr /skms kms.03k.org");
			printf("正在进行激活，请稍等……");
			system("slmgr /ato");

		}



		if (xt == 3)
		{
			system("slmgr /ipk DCPHK-NFMTC-H88MJ-PFHPY-QJ4BJ");
			printf("请稍等，正在配置当前激活服务器为kms.o3k.org \n");
			system("slmgr /skms kms.03k.org");
			printf("正在进行激活，请稍等……");
			system("slmgr /ato");

		}



		if (xt ==2)
		{
			system("slmgr /ipk M7XTQ-FN8P6-TTKYV-9D4CC-J462D");
			printf("请稍等，正在配置当前激活服务器为kms.o3k.org \n");
			system("slmgr /skms kms.03k.org");
			printf("正在进行激活，请稍等……");
			system("slmgr /ato");

		}



		if (xt == 1)
		{
			system("slmgr /ipk NW6C2-QMPVW-D7KKK-3GKT6-VCFB2");
			printf("请稍等，正在配置当前激活服务器为kms.o3k.org \n");
			system("slmgr /skms kms.03k.org");
			printf("正在进行激活，请稍等……");
			system("slmgr /ato");

		}

	}




	return 0;
}