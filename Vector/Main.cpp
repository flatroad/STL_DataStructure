#include <iostream>
#include <vector>

int main()
{
	// vector ���� ����.
	std::vector<int> vec;

	// �ڷ� ����.
	for (int ix = 0; ix < 1000; ++ix)
	{
		vec.emplace_back(ix + 1);
	}
	
	for (auto iter = vec.begin(); iter != vec.end();)
	{
		iter = vec.erase(iter);
		if (iter != vec.end())
		{
			++iter;
		}
	}

	//for (int ix = 0; ix < 1000; ix += 10)
	//{
	//	// ���� ���ϴ� ��ġ�� �ݺ���(iterator) ����.
	//	auto iterator = vec.begin() + ix;

	//	// �տ��� ���� �ݺ��ڸ� Ȱ���� �迭 ���� ����.
	//	vec.erase(iterator);
	//}

	// ��� �Ұ�.
	// ���� ���� ������ �������� ��쿡�� delete�� �ؾ���.
	vec.clear();

	if (vec.empty())
	{
		//std::cout << vec[0] << " " << vec[1] << " " << vec[2] << std::endl;
		std::cout << "���Ͱ� �����\n";
	}

	// ũ�� ����.
	vec.resize(0);

	// ���� Ȯ��.
	// ���Ҵ� ���� ���� / ���� ����ȭ.
	vec.reserve(0);

	// ũ�� ���� �� ���.
	vec.shrink_to_fit();

	return (0);
}