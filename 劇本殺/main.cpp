#include <iostream>
#include <windows.h>
#include "Opening.h"
#include "Scene.h"

using namespace std;

int main() {
    // �w�q�����M����
    cout << "�п�J�z���W�r" << endl;
    string setName;
    cin >> setName;
    Scene entrance(setName);
    Opening::SceneOP(entrance);

    // ��ܤU�@�B���
    int choice;
    cin >> choice;
    entrance.SceneZ(choice);

    switch (choice) {
    case 1:
        entrance.SceneHouse();
        break;
    case 2:
        entrance.SceneOut();
        break;
    case 3:
        entrance.ScenePeople();
        break;
    default:
        cout << "���~���ﶵ�A�Э��s��J" << endl;
        break;
    }

    return 0;
}
