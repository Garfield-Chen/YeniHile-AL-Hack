#pragma once
#define Misc _Misc::GetInstance()
class _Misc
{
public:
	void __fastcall		Manu();

	bool bAutoAmmo = false,//�ӵ�
		bGrenades = false,//����
		bEquip = true,//����
		bItems = false,//������Ʒ
		bParts = false,//���
		bNrg = false,//��������
		bHc = true,//��������
		bSc = true,//��������
		bShg = false,//��������
		bLoot = true,//ս��Ʒ
		bTrap = false,//������
		bDistance = true;//��Ʒ����


	int iItemsShow = 50;

	MenuItem *mMenu = 0;
	ImVec4 
		cEquip = ImColor(0, 255, 0),
		cParts = ImColor(0, 255, 0),
		cLoot = ImColor(0, 255, 0),
		cNrg = ImColor(0xAD, 0xFF, 0x2F),
		cHc = ImColor(0, 255, 255),
		cShg = ImColor(200, 5, 0),
		cSc = ImColor(255, 70, 0),

		cItems = ImColor(0, 0, 255),
		cGrenades = ImColor(200, 200, 200),

		cItemsCommon = ImColor(182, 182, 182),
		cItemsRare = ImColor(87, 179, 230),
		cItemsEpic = ImColor(197, 76, 249),
		cItemsLegendary = ImColor(251, 201, 58);


	static _Misc* GetInstance();

private:

	static _Misc* m_pInstance;
};

