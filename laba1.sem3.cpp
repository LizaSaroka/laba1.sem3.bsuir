#include <iostream>

using namespace std;
class sq
{
 int a;
public:
   
    int square2;
    int perimeter2;

    void getter()
    {
       cout << "Введите значение стороны квадрата а: ";
       
       inputInt();
    }
    int inputInt()
    {
        
        while (true)
        {
            cin >> a;
            if (isNumeric()&&isRange(a, 1,100))
                return a;
            else
                cout << "Введенное значение не соответствует типу. Попробуйте еще раз:";
        }
    }
    bool isRange(int number, int left_r, int right_r)
    {
        if ((number >= left_r) && (number <= right_r))
            return true;
        else
            return false;
    }
    bool isNumeric()
{
	if (cin.get() == '\n')
		return true;
	else
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		return false;
	}

}
    void square()
    {
        square2 = a * a;
    }
    void perimeter()
    {
        perimeter2 = 4 * a;
    }
    void show_square()
    {
        std::cout << "Площадь квадрата : " << square2;
    }
    void show_per()
    {
        std::cout << "Периметр квадрата : " << perimeter2;
    }
    int get() {
        return a;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    sq sq1;//создаем объект класса 

   cout<<sq1.get();
    int choice;
    sq1.getter();//задаем с клавиатуры значение длины стороны

   
    cout << "Что Вы хотите вычислить? " << endl;
    cout << "1 - Площадь квадрата: " << endl;
    cout << "2 - Периметр квадрата:" <<endl;
   
  cin >> choice;

    switch (choice) {
    case 1:
        sq1.square();//считаем значение площади
        sq1.show_square(); break;//выводим значение на экран
    case 2:
        sq1.perimeter();
        sq1.show_per(); break;
    };

    cout << std::endl;
    system("pause");
    return 0;
}