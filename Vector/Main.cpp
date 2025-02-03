#include <iostream>
#include <vector>

int main()
{
	// vector 변수 생성.
	std::vector<int> vec;

	// 자료 삽입.
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
	//	// 삭제 원하는 위치의 반복자(iterator) 저장.
	//	auto iterator = vec.begin() + ix;

	//	// 앞에서 구한 반복자를 활용해 배열 원소 삭제.
	//	vec.erase(iterator);
	//}

	// 모두 소거.
	// 내부 저장 변수가 포인터인 경우에는 delete를 해야함.
	vec.clear();

	if (vec.empty())
	{
		//std::cout << vec[0] << " " << vec[1] << " " << vec[2] << std::endl;
		std::cout << "벡터가 비었음\n";
	}

	// 크기 조정.
	vec.resize(0);

	// 공간 확보.
	// 재할당 방지 목적 / 공간 최적화.
	vec.reserve(0);

	// 크기 줄일 떄 사용.
	vec.shrink_to_fit();

	return (0);
}