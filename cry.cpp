#include <iostream>

using namespace std;

class Animal {

public:
    virtual void Cry() = 0;
    virtual void Gosu() = 0;

};

class Dog : public Animal {

public:
    void Gosu() {
        cout << "�ٸ��� 4��\n";
        cout << "������ ����\n";
        return;
    }
    void Cry() {
        cout << "�۸�\n" << endl; return;
    }

};

class Bird : public Animal {

public:
    void Gosu() {
        cout << "�ٸ��� 2��\n";
        cout << "������ �����\n";
        return;
    }
    void Cry() {
        cout << "±±\n" << endl; return;
    };

};

class Cat : public Animal {

public:
    void Gosu() {
        cout << "�ٸ��� 4��\n";
        cout << "������ ��\n";
        return;
    }
    void Cry() {
        cout << "�Ŀ�\n" << endl; return;
    };

};

int main()
{
    Animal* pa = new Dog;
    Animal* pb = new Bird;
    Animal* pc = new Cat;
    pa->Gosu();
    pa->Cry();
    pb->Gosu();
    pb->Cry();
    pc->Gosu();
    pc->Cry();

    Dog* pd = (Dog*)pa;
    pd->Cry();

    Bird* pe = (Bird*)pb;
    pb->Cry();

    Cat* pf = (Cat*)pc;
    pc->Cry();
    return 0;
}