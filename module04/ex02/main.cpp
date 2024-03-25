#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	std::cout << "Brains test!\n" << std::endl;
	// BrainsTest();

	Animal *Animals[2];

	// デフォルトメッセージがBrainにセットされる
	Animals[0] = new Dog();
	Animals[0]->showIdea();
	Animals[1] = new Cat();
	Animals[1]->showIdea();

	// 任意のメッセージをセット
	Animals[0]->setBrain("（∪＾ω＾）わんわんお！");
	Animals[1]->setBrain("OIIA OIIA");
	Animals[0]->showIdea();
	Animals[1]->showIdea();

	// デストラクタ呼び出し
	delete Animals[0];
	delete Animals[1];

	// -----------------------------------------------

	std::cout << "\n<Copy test!>\n" << std::endl;
	// copyTest();

	Cat *cat1 = new Cat();
	Cat *cat2 = new Cat(*cat1);
	Cat	tmpCat = *cat2;
	Dog *dog1 = new Dog();
	Dog *dog2 = new Dog(*dog1);
	Dog	tmpDog = *dog2;
	// Animal *test = new Animal();

	// アドレスの表示
	std::cout << "\nCopied ideas\n" << std::endl;
	
	// コピーコンストラクタによって作成されたインスタンスのbrainの中身を表示
	cat2->showIdea();
	dog2->showIdea();

	std::cout << "Instanse ADDR\n" << std::endl;
	std::cout << "cat1: " << &cat1 << std::endl;
	std::cout << "cat2: " << &cat2 << std::endl;
	std::cout << "tmpCat: " << &tmpCat << std::endl;	
	std::cout << std::endl;
	std::cout << "dog1: " << &dog1 << std::endl;
	std::cout << "dog2: " << &dog2 << std::endl;
	std::cout << "tmpDog: " << &tmpDog << std::endl;

	std::cout << "\nBrain ADDR:\n" << std::endl;
	cat1->brainAddr();
	cat2->brainAddr();
	tmpCat.brainAddr();
	std::cout << std::endl;
	dog1->brainAddr();
	dog2->brainAddr();
	tmpDog.brainAddr();

	std::cout << std::endl;

	// デストラクタ呼び出し
	delete cat1;
	delete cat2;
	delete dog1;
	delete dog2;

	std::cout << std::endl;
	return (0);
}

// __attribute__((destructor))
// static void destructor() {
//     system("leaks -q animal_1");
// }
