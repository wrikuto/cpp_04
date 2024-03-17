#include <iostream>

class Base {
public:
    void attack() const { // 非仮想関数
        std::cout << "Base attack" << std::endl;
    }
};

class Derived : public Base {
public:
    void attack() const { // オーバーライドされた関数
        std::cout << "Derived attack" << std::endl;
    }
};

int main ()
{
    Base* obj = new Derived();
    obj->attack(); // "Base attack" が出力される
    return (0);
}
