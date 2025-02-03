#include <iostream>
#include <list>

struct Loc
{
	Loc(const wchar_t c, int x, int y)
		: c(c), x(x), y(y)
	{
	}
	wchar_t c;
	int x = 0;
	int y = 0;
};

class Diagram
{
	public:
		Diagram(){};
		~Diagram(){};
		void AddPoint(const Loc &item)
		{
			this->items.emplace_back(item);
		}
		void ItemsPrint()
		{
			for (Loc item : this->items)
			{
				std::wcout << item.c << " " << item.x << " " << item.y << std::endl;
			}
		}
		void DeleteItem(wchar_t c)
		{

		}
	private:
		std::list<Loc> items;
};

int main()
{
	Diagram dg;
	dg.AddPoint(Loc{ 'A', 50, 200 });
	dg.AddPoint(Loc{ 'B', 20, 80 });
	dg.AddPoint(Loc{ 'C', 75, 10 });
	dg.AddPoint(Loc{ 'D', 130, 80 });
	dg.AddPoint(Loc{ 'E', 100, 200 });

	dg.ItemsPrint();

	return (0);
}
