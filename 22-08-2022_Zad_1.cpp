// реализуйте стек в виде односвязного списка. 
//Требуются реализовать типичные  операции по работе со стеком .
// При переполнении стека нужно увеличивать его размер.
//
#include <iostream>
#include <string.h>
#include <time.h>
using namespace std;

class Stack
{
	//Нижняя и верхняя границы стека
	int EMPTY = 0;
	int  FULL = 4;

	//Массив для хранения данных
	int* st = new int[FULL];
	//создаём динамический массив
	int* mass = new int[0];
	//индекс определяющий вершину стека
	int top;

public:

	//Конструктор
	Stack();

	//Добавление элемента
	int Push(int c);

	//Извлечение элемента
	char Pop();

	//Очистка стека
	void Clear();

	//Проверка существования элементов в стеке
	bool IsEmpty();

	//Проверка на переполнение стека
	bool IsFull();

	//Количество элементов в стеке
	int GetCount();
};

Stack::Stack()
{
	//Изначально стек пуст
	top = EMPTY;
}

void Stack::Clear()
{
	//Эффективная "очистка" стека
	//(данные в массиве все еще существуют,
	//но функции класса, ориентированные
	//на работу с вершиной стека,
	//будут их игнорировать)
	top = EMPTY;
}

bool Stack::IsEmpty()
{
	//Пуст?
	return top == EMPTY;
}

bool Stack::IsFull()
{
	//Полон?
	return top == FULL;
}

int Stack::GetCount()
{
	//Количество присутствующих в стеке элементов
	return top + 1;
}

int Stack::Push(int c)
{
	//здесь надо делать работу++++++++++++++++++++++++++++++++++++++++++++++++
	//Если в стеке есть место, то увеличиваем указатель
	//на вершину стека и вставляем новый элемент // убрал восклицательный знак
	int uk{ 0 };
	if (!IsFull())
	{
		st[++top] = c;
	}

	st[top + 1];
	int* st1 = new int[FULL+1];
	for (int i = 0; i < FULL; i++)
	{
		int ukaz_st = st[i];
		st1[i] = ukaz_st;
		int uk = i;
	}
	return 0;
	st1[uk + 1] = 555;
	return *st1;
}


char Stack::Pop()
{
	//Если в стеке есть элементы, то возвращаем
	//верхний и уменьшаем указатель на вершину стека
	if (!IsEmpty())
		return st[top--];
	else //Если в стеке элементов нет
		return 0;
}


int main()
{
	
	srand(time(0));

	Stack ST;
	int c;
	
	//пока стек не заполнится // убрал восклицательный знак
	while (!ST.IsFull()) {
		c = rand() % 4 + 2;
		ST.Push(c);
	}
	
	ST.Push(56);
	//пока стек не освободится
	while (c = ST.Pop()) {
		cout << c << " ";
		//cout << st1 << endl;
	}
	cout << "\n\n";
	cout << __cplusplus;
}