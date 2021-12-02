#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace std;

enum COIN
{
	COIN_BIT = 1,	//��Ʈ���� �迭
	COIN_ETH,	//�̴����� �迭
	COIN_RIP,	//���� �迭
	COIN_ALT,	//��Ʈ����(alternative coin)
	COIN_END
};

class tagCoinInfo
{
public:
	COIN coinKind;
	string name;
	string description;
	int price;
	float change;
};

class exChange
{
private:
	//���������� ��� Ŭ������ ���� ���� �����̳�
	vector<tagCoinInfo>				_vCoin;
	vector<tagCoinInfo>::iterator	_viCoin;

public:
	void coinSetup();
	void coinOutput(int coinNum);


	vector<tagCoinInfo> getCoinVector() { return _vCoin; }

	exChange();
	~exChange();
};

