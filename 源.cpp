#include<iostream>
#include<Windows.h>
#include<fstream>
#include<algorithm>
using namespace std;
int main()
{
	int xt,set;
	

	
	printf("���ʽ��\n 1.kms 2.exit  \n");

	cin >> set;
	system("cls");

	if (set == 2)
	{
		return 0;

	}


	if (set == 1)
	{
		cout << "��ѡ���Ӧϵͳ��" << endl
			<< "1.win10 edu ������" << endl
			<< "2.win10 ltsc ������" << endl
			<< "3.win10 ltsb �˸��" << endl
			<< "4.win10 ltd ��ҵ��" << endl
			<< "5.win10 רҵ��" << endl
			<< "6.win10 home ��ͥ��" << endl;
		cin >> xt;

		system("cls");

		if(xt==6)
		{
			system("slmgr /ipk 37GNV-YCQVD-38XP9-T848R-FC2HD");
			printf("���Եȣ��������õ�ǰ���������Ϊkms.o3k.org \n");
			system("slmgr /skms kms.03k.org");
			printf("���ڽ��м�����Եȡ���");
			system("slmgr /ato");

		}



		if (xt == 5)
		{
			system("slmgr /ipk W269N-WFGWX-YVC9B-4J6C9-T83GX");
			printf("���Եȣ��������õ�ǰ���������Ϊkms.o3k.org \n");
			system("slmgr /skms kms.03k.org");
			printf("���ڽ��м�����Եȡ���");
			system("slmgr /ato");
		}



		if (xt == 4)
		{
			system("slmgr /ipk NPPR9-FWDCX-D2C8J-H872K-2YT43");
			printf("���Եȣ��������õ�ǰ���������Ϊkms.o3k.org \n");
			system("slmgr /skms kms.03k.org");
			printf("���ڽ��м�����Եȡ���");
			system("slmgr /ato");

		}



		if (xt == 3)
		{
			system("slmgr /ipk DCPHK-NFMTC-H88MJ-PFHPY-QJ4BJ");
			printf("���Եȣ��������õ�ǰ���������Ϊkms.o3k.org \n");
			system("slmgr /skms kms.03k.org");
			printf("���ڽ��м�����Եȡ���");
			system("slmgr /ato");

		}



		if (xt ==2)
		{
			system("slmgr /ipk M7XTQ-FN8P6-TTKYV-9D4CC-J462D");
			printf("���Եȣ��������õ�ǰ���������Ϊkms.o3k.org \n");
			system("slmgr /skms kms.03k.org");
			printf("���ڽ��м�����Եȡ���");
			system("slmgr /ato");

		}



		if (xt == 1)
		{
			system("slmgr /ipk NW6C2-QMPVW-D7KKK-3GKT6-VCFB2");
			printf("���Եȣ��������õ�ǰ���������Ϊkms.o3k.org \n");
			system("slmgr /skms kms.03k.org");
			printf("���ڽ��м�����Եȡ���");
			system("slmgr /ato");

		}

	}




	return 0;
}