#include "Opening.h"
#include <iostream>
#include <windows.h>

using namespace std;

std::string Opening::treasureItem = "";

void Opening::SceneOP(Scene& scene) {
	cout << "\n�@�ӳ��B�s�����ߤW�A�A���F�n���B�Ө�@�y��󰾻��s�ߪ���������" << endl;
	Sleep(2000);
	cout << "�o�y�ܶ�ڻ����O�@��I�������N�a���~�ҡA���b�@���j�����ܱo��o......" << endl;
	Sleep(2000);
	cout << "�A���}�ܶ骺�j���A�o�{�̭����M�O���q���A�ϩ����H�b�̭����ۧA" << endl;
	Sleep(2000);
	cout << "�A�P��@�����w�A���٬O���F�i�h......\n" << endl;
	Sleep(2000);
	cout << "�z�n, " << scene.getName() << "!" << endl;
	cout << "���i�j����A�A���T�ӿﶵ" << endl;
	cout << "1. ��������" << endl;
	cout << "2. �����~��" << endl;
	cout << "3. �߰ݸ��H" << endl;
}

void Opening::SceneO(int i) {
	bool failChoose = false;
	while (!failChoose) {
		switch (i) {
		case 1:
			cout << "�z��� ��������" << endl;
			failChoose = true;
			break;
		case 2:
			cout << "�z��� �����~��" << endl;
			failChoose = true;
			break;
		case 3:
			cout << "�z��� �߰ݸ��H" << endl;
			failChoose = true;
			break;
		default:
			cout << "���~���ﶵ�A�Э��s��J" << endl;
			cin >> i;
			break;
		}
	}
}

void Opening::SceneHouse() {
	int choice;
	cout << "\n�i�J�����A�L�J��î���O�W�j�����U" << endl;
	cout << "1. �d�ݾ��l" << endl;
	cout << "2. �[����W���e�@" << endl;
	cout << "3. �ˬd�Ѭ[����" << endl;
	cin >> choice;
	SceneHouseChoice(choice);
}

void Opening::SceneHouseChoice(int choice) {
	switch (choice) {
	case 1:
		cout << "\n�A���V���l�A�o�{�̭����@�ӯ��K�q�D�C" << endl;
		cout << "1. �i�J���K�q�D" << endl;
		cout << "2. �~�򱴯����U" << endl;
		cout << "3. �s�ӪB������" << endl;
		cin >> choice;
		HandleHouseSubChoice(choice);
		break;
	case 2:
		cout << "\n�A�o�{�@�T�e�@�᭱�õۤ@���_�͡C" << endl;
		cout << "1. �����_��" << endl;
		cout << "2. �M���_�ͤ�" << endl;
		cout << "3. �~���[���L�e�@" << endl;
		cin >> choice;
		HandleHouseSubChoice(choice);
		break;
	case 3:
		cout << "\n�A���@�������ܶ���v���ѡC" << endl;
		cout << "1. �\Ū���y" << endl;
		cout << "2. �N�ѱa��" << endl;
		cout << "3. ��^�Ѭ[" << endl;
		cin >> choice;
		HandleHouseSubChoice(choice);
		break;
	default:
		cout << "���~���ﶵ�A�Э��s��J" << endl;
		cin >> choice;
		SceneHouseChoice(choice);
		break;
	}
}

void Opening::HandleHouseSubChoice(int choice) {
	switch (choice) {
	case 1:
		cout << "\n�A�i�J�q�D�A�o�{�@�����ê��ж��A�̭����@���_�c�C" << endl;
		cout << "1. ���}�_�c" << endl;
		cout << "2. �ˬd�ж�" << endl;
		cout << "3. ��^���U" << endl;
		cin >> choice;
		switch (choice) {
		case 1:
			cout << "\n�A���}�_�c�A�o�{�̭����@�ӯ������_�ۡC" << endl;
			treasureItem = "�������_��";
			cout << "�A��o�F�@�� " << treasureItem << "�C" << endl;
			Conclusion();
			return;
		case 2:
			cout << "\n�A�ˬd�ж��A���S���o�{��L�����Ȫ��F��C" << endl;
			Conclusion();
			return;
		case 3:
			SceneHouse();
			return;
		default:
			cout << "���~���ﶵ�A�Э��s��J" << endl;
			cin >> choice;
			HandleHouseSubChoice(choice);
			return;
		}
		break;
	case 2:
		cout << "\n�A�o�{�@�T�e�@�᭱�õۤ@���_�͡C" << endl;
		cout << "1. �����_��" << endl;
		cout << "2. �M���_�ͤ�" << endl;
		cout << "3. �~���[���L�e�@" << endl;
		cin >> choice;
		HandleHouseSubChoice(choice);
		break;
	case 3:
		cout << "\n�A���@�������ܶ���v���ѡC" << endl;
		cout << "1. �\Ū���y" << endl;
		cout << "2. �N�ѱa��" << endl;
		cout << "3. ��^�Ѭ[" << endl;
		cin >> choice;
		HandleHouseSubChoice(choice);
		break;
	default:
		cout << "���~���ﶵ�A�Э��s��J" << endl;
		cin >> choice;
		HandleHouseSubChoice(choice);
		break;
	}
}

void Opening::SceneOut() {
	int choice;
	cout << "\n�A�M�w�b�B���������骺���" << endl;
	cout << "1. �ˬd�ū�" << endl;
	cout << "2. �ˬd�J��" << endl;
	cout << "3. �����g�c���" << endl;
	cin >> choice;
	SceneOutChoice(choice);
}

void Opening::SceneOutChoice(int choice) {
	switch (choice) {
	case 1:
		cout << "\n�A�o�{�ūǸ̦��@�ǩ_�����Ӫ��C" << endl;
		cout << "1. ��s�Ӫ�" << endl;
		cout << "2. �~�򱴯��ū�" << endl;
		cout << "3. �����@��Ӫ�" << endl;
		cin >> choice;
		HandleOutSubChoice(choice);
		break;
	case 2:
		cout << "\n�A�o�{�J�����y�W���@�����ê������C" << endl;
		cout << "1. Ĳ�ʾ���" << endl;
		cout << "2. �~���[���J��" << endl;
		cout << "3. �M���L�J��" << endl;
		cin >> choice;
		HandleOutSubChoice(choice);
		break;
	case 3:
		cout << "\n�A�b�g�c���g���A�o�{�F�@�����ê��a�U�J�f�C" << endl;
		cout << "1. �i�J�a�U�J�f" << endl;
		cout << "2. ���է��X�f" << endl;
		cout << "3. �M�D���U" << endl;
		cin >> choice;
		HandleOutSubChoice(choice);
		break;
	default:
		cout << "���~���ﶵ�A�Э��s��J" << endl;
		cin >> choice;
		SceneOutChoice(choice);
		break;
	}
}

void Opening::HandleOutSubChoice(int choice) {
	switch (choice) {
	case 1:
		cout << "\n�A�o�{�Ӫ����v�����ĪG�A�ç��F�@���j�Ѫ����O���C" << endl;
		cout << "1. �a�����O��" << endl;
		cout << "2. �~���s�Ӫ�" << endl;
		cout << "3. ��^�ܶ餺��" << endl;
		cin >> choice;
		switch (choice) {
		case 1:
			cout << "\n�A�a���F���O���C" << endl;
			Conclusion();
			return;
		case 2:
			cout << "\n�A�~���s�Ӫ��A���S���o�{��L�S�O���F��C" << endl;
			Conclusion();
			return;
		case 3:
			SceneHouse();
			return;
		default:
			cout << "���~���ﶵ�A�Э��s��J" << endl;
			cin >> choice;
			HandleOutSubChoice(choice);
			return;
		}
		break;
	case 2:
		cout << "\n�A�o�{�F�@���q���a�U�Ǫ����K�q�D�C" << endl;
		cout << "1. �i�J�a�U��" << endl;
		cout << "2. �~���[��P��" << endl;
		cout << "3. ��^�ܶ餺��" << endl;
		cin >> choice;
		switch (choice) {
		case 1:
			cout << "\n�A�i�J�a�U�ǡA�o�{�F�@���_�áC" << endl;
			cout << "1. ���}�_��" << endl;
			cout << "2. �~�򱴯��a�U��" << endl;
			cout << "3. ��^�a��" << endl;
			cin >> choice;
			switch (choice) {
			case 1:
				cout << "\n�A���}�_�áA�o�{�F�@�ӥj�Ѫ���Z�C" << endl;
				Conclusion();
				return;
			case 2:
				cout << "\n�A�~�򱴯��a�U�ǡA���S���o�{��L�S�O���F��C" << endl;
				Conclusion();
				return;
			case 3:
				SceneHouse();
				return;
			default:
				cout << "���~���ﶵ�A�Э��s��J" << endl;
				cin >> choice;
				HandleOutSubChoice(choice);
				return;
			}
			break;
		case 2:
			cout << "\n�A�~���[��P��A���S���o�{��L�S�O���F��C" << endl;
			Conclusion();
			return;
		case 3:
			SceneHouse();
			return;
		default:
			cout << "���~���ﶵ�A�Э��s��J" << endl;
			cin >> choice;
			HandleOutSubChoice(choice);
			return;
		}
		break;
	case 3:
		cout << "\n�A�o�{�@�ӥj�Ѫ��_���æb�a�U�ǡC" << endl;
		cout << "1. ���}�_��" << endl;
		cout << "2. �~�򱴯��a�U��" << endl;
		cout << "3. ��^�a��" << endl;
		cin >> choice;
		switch (choice) {
		case 1:
			cout << "\n�A���}�_�áA�o�{�F�@�ӥj�Ѫ���Z�C" << endl;
			Conclusion();
			return;
		case 2:
			cout << "\n�A�~�򱴯��a�U�ǡA���S���o�{��L�S�O���F��C" << endl;
			Conclusion();
			return;
		case 3:
			SceneOut();
			return;
		default:
			cout << "���~���ﶵ�A�Э��s��J" << endl;
			cin >> choice;
			HandleOutSubChoice(choice);
			return;
		}
		break;
	default:
		cout << "���~���ﶵ�A�Э��s��J" << endl;
		cin >> choice;
		HandleOutSubChoice(choice);
		break;
	}
}

void Opening::ScenePeople() {
	int choice;
	cout << "\n�A�b���餤�J��F�@�ӯ������u��" << endl;
	cout << "1. �ݥL�����ܶ骺��" << endl;
	cout << "2. ���ջ��A�L���A�i�J��h�ж�" << endl;
	cout << "3. ���H�u��" << endl;
	cin >> choice;
	ScenePeopleChoice(choice);
}

void Opening::ScenePeopleChoice(int choice) {
	switch (choice) {
	case 1:
		cout << "\n�u�çi�D�A�ܶ骺�D�H���g�æ��@�����B�]�I�C" << endl;
		cout << "1. �߰ݰ]�I�������m" << endl;
		cout << "2. �߰��ܶ���v" << endl;
		cout << "3. �V�u�ôM�D���U" << endl;
		cin >> choice;
		HandlePeopleSubChoice(choice);
		break;
	case 2:
		cout << "\n�u�óQ���A�A���A�@���_�͡C" << endl;
		cout << "1. �ϥ��_��" << endl;
		cout << "2. �O�s�_��" << endl;
		cout << "3. ���u�ó��P" << endl;
		cin >> choice;
		HandlePeopleSubChoice(choice);
		break;
	case 3:
		cout << "\n�u�ña�A�i�J�@�ӯ��K�ж��C" << endl;
		cout << "1. �[��ж�" << endl;
		cout << "2. �߰ݦu��" << endl;
		cout << "3. �j���ж�" << endl;
		cin >> choice;
		HandlePeopleSubChoice(choice);
		break;
	default:
		cout << "���~���ﶵ�A�Э��s��J" << endl;
		cin >> choice;
		ScenePeopleChoice(choice);
		break;
	}
}

void Opening::HandlePeopleSubChoice(int choice) {
	switch (choice) {
	case 1:
		cout << "\n�u�çi�D�A�]�I�æb�a�U�Ǫ��@���_�c�̡C" << endl;
		cout << "1. �e���a�U��" << endl;
		cout << "2. �~��P�u�å��" << endl;
		cout << "3. ���u�ña��" << endl;
		cin >> choice;
		switch (choice) {
		case 1:
			cout << "\n�A�e���a�U�ǡA�o�{�F�@���_�áC" << endl;
			cout << "1. ���}�_��" << endl;
			cout << "2. �~�򱴯��a�U��" << endl;
			cout << "3. ��^�a��" << endl;
			cin >> choice;
			switch (choice) {
			case 1:
				cout << "\n�A���}�_�áA�o�{�F�@�ӥj�Ѫ���Z�C" << endl;
				Conclusion();
				return;
			case 2:
				cout << "\n�A�~�򱴯��a�U�ǡA���S���o�{��L�S�O���F��C" << endl;
				Conclusion();
				return;
			case 3:
				SceneHouse();
				return;
			default:
				cout << "���~���ﶵ�A�Э��s��J" << endl;
				cin >> choice;
				HandlePeopleSubChoice(choice);
				return;
			}
			break;
		case 2:
			cout << "\n�A�~��P�u�å�͡A���L���G���@�h���C" << endl;
			Conclusion();
			return;
		case 3:
			cout << "\n�u�ña�A�e���a�U�ǡA�o�{�F�@���_�áC" << endl;
			cout << "1. ���}�_��" << endl;
			cout << "2. �~�򱴯��a�U��" << endl;
			cout << "3. ��^�a��" << endl;
			cin >> choice;
			switch (choice) {
			case 1:
				cout << "\n�A���}�_�áA�o�{�F�@�ӥj�Ѫ���Z�C" << endl;
				Conclusion();
				return;
			case 2:
				cout << "\n�A�~�򱴯��a�U�ǡA���S���o�{��L�S�O���F��C" << endl;
				Conclusion();
				return;
			case 3:
				SceneHouse();
				return;
			default:
				cout << "���~���ﶵ�A�Э��s��J" << endl;
				cin >> choice;
				HandlePeopleSubChoice(choice);
				return;
			}
			break;
		default:
			cout << "���~���ﶵ�A�Э��s��J" << endl;
			cin >> choice;
			HandlePeopleSubChoice(choice);
			return;
		}
		break;
	case 2:
		cout << "\n�A���}�@�ӯ��K�ж��A�̭����@�ӯ������c�l�C" << endl;
		cout << "1. ���}�c�l" << endl;
		cout << "2. �ˬd�P��" << endl;
		cout << "3. ��^�ܶ�j�U" << endl;
		cin >> choice;
		switch (choice) {
		case 1:
			cout << "\n�A���}�c�l�A�o�{�F�@�ӥj�Ѫ���Z�C" << endl;
			Conclusion();
			return;
		case 2:
			cout << "\n�A�ˬd�P��A���S���o�{��L�S�O���F��C" << endl;
			Conclusion();
			return;
		case 3:
			SceneHouse();
			return;
		default:
			cout << "���~���ﶵ�A�Э��s��J" << endl;
			cin >> choice;
			HandlePeopleSubChoice(choice);
			return;
		}
		break;
	case 3:
		cout << "\n�A�o�{�ж��̦��@�T�e�A�e�����G���õ۬Y�ǫH���C" << endl;
		cout << "1. �J�Ӭ�s�e�@" << endl;
		cout << "2. �ˬd��L���~" << endl;
		cout << "3. �߰ݦu�õe�@���Ӿ�" << endl;
		cin >> choice;
		switch (choice) {
		case 1:
			cout << "\n�A�J�Ӭ�s�e�@�A�o�{�F�@�����ê��Ÿ��C" << endl;
			Conclusion();
			return;
		case 2:
			cout << "\n�A�ˬd��L���~�A���S���o�{��L�S�O���F��C" << endl;
			Conclusion();
			return;
		case 3:
			cout << "\n�A�߰ݦu�õe�@���Ӿ��A���L���G���@�h���C" << endl;
			Conclusion();
			return;
		default:
			cout << "���~���ﶵ�A�Э��s��J" << endl;
			cin >> choice;
			HandlePeopleSubChoice(choice);
			return;
		}
		break;
	default:
		cout << "���~���ﶵ�A�Э��s��J" << endl;
		cin >> choice;
		HandlePeopleSubChoice(choice);
		break;
	}
}

void Opening::Conclusion() {
	cout << "\n�A�b�ܶ餤���_�I�����F�C" << endl;
	cout << "�A��o�F�G" << treasureItem << endl;
	cout << "�P�§A�C���o�ӹC���I" << endl;
	system("pause");
	exit(0);
}