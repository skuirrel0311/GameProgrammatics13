#include<iostream>
#include<string>

void fizzBuzz(int maxNum);
std::string getFizzBuzz(int num);

int main()
{
	const int maxNum = 16;

	fizzBuzz(maxNum);

	return 0;
}

void fizzBuzz(int maxNum)
{
	//ループが1から開始するので1足しておく
	maxNum += 1;

	for (int i = 1; i < maxNum; i++)
	{
		std::cout << getFizzBuzz(i) + "\n";
	}
}

//3で割り切れるならFizz 5で割り切れるならBuzz 15で割り切れるならFizzBuzzを返す
std::string getFizzBuzz(int num)
{
	std::string result;

	if (num % 3 == 0){
		result = result + "Fizz";
	}
	if (num % 5 == 0){
		result = result + "Buzz";
	}

	if (result.empty()){
		result = std::to_string(num);
	}

	return result;
}

