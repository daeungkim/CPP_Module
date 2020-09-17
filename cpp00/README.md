# 기본 개념
## 출력
~~~c++
#include <iostream>

int main(void)
{
    std::cout << "Hello world!" << std::endl;
}
~~~
#### 결과
~~~
Hello world!
~~~

- std : 네임스페이스, 개념 상 '소속'이라 생각하면 됨.
- "::" : 범위 지정 연산자
- cout : 콘솔 출력을 담당하는 객체
- << : 연산자 함수
- endl : end of line = "\n" (없으면 개행이 없이 출력 됨.)

위 코드는 한글로 풀어서 설명하면 
> std에 속한 cout 객체에 "Hello world!" 문자열과 endl 객체를 넘겨 문자열을 화면에 출력해라!

## 입력
~~~c++
#include <iostream>

int main(void)
{
	int	age;
	std::cout << "input age : ";
	std::cin >> age;

	std::string name;
	std::cout << "input name : ";
	std::cin >> name;

	std::cout << "age = " << age 
            << " name = "<< name << std::endl;
}
~~~
#### 결과
~~~
input age : 28
input name : stevenkim
age = 28 name = stevenkim
~~~
- cin : 입력 받는 객체
- string : string 객체를 사용하면 길이 제한 없이 입력 받을 수 있음.

## 소문자면 대문자로 바꿔주는 함수
toupper()

## 클래스 만들기
전사 클래스 만들어 보자
### 해더 파일에 클래스 정의하기
#### warrior.hpp
~~~c++
#ifndef WARRIOR_HPP
# define WARRIOR_HPP

# include <iostream>

class WARRIOR
{
	private:
		int		hp;
		int		mp;
		int		attack;
		int		defense;

	public:
		WARRIOR(void);
		~WARRIOR(void);
		void	attackEnemy(ENEMY enemy);
		void	defenseEnemy(void);
		void	getItem(ITEM item);
};

#endif
~~~

### cpp 파일에 클래스 상세 함수들 구현하기
#### warrior.cpp
~~~c++
#include "warrior.hpp"

// 생성자
WARRIOR::WARRIOR(void)
{
	std::cout << "warrior created" << std::endl;
}

// 소멸자
WARRIOR::~WARRIOR(void)
{
	std::cout << "warrior destroyed" << std::endl;	
}

void WARRIOR::attackEnemy(ENEMY enemy)
{
	std::cout << "attack " << enemy.getName() << std::endl;	
}

void WARRIOR::defenseEnemy(void)
{
	std::cout << "defense!!" std::endl;
}

void WARRIOR:getItem(ITEM item)
{
	std::cout << "get " << item.getName() << std::endl;
}
~~~

