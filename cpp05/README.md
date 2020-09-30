## 문제 설명
### 클래스 구조
~~~
Bureaucrat(관료)

Form(양식)
    - ShrubberyCreationForm
    - RobotomyRequestForm
    - PresidentialPardonForm

Intern(인턴)
~~~

### 클래스 간의 관계
- 관료의 등급에 따라 양식을 싸인하고 실행 할 수 있는 권한을 가지게 된다. 
- 양식 등급 보다 관료의 등급이 높으면 서류에 싸인을 하고 실행할 수 있고 그러지 않으면 예외가 발생한다.
- 인턴은 양식을 만들어서 리턴한다.


## ex00
### 예외처리
#### exception 레퍼런스
http://www.cplusplus.com/reference/exception/exception/

#### exception 공식 문서 튜토리얼
http://www.cplusplus.com/doc/tutorial/exceptions/

### 헷갈리는 const 위치

#### 변수에서 const
https://simplesolace.tistory.com/entry/c-%ED%95%AD%EC%83%81-%ED%97%B7%EA%B0%88%EB%A6%AC%EB%8A%94-const-%EC%9C%84%EC%B9%98%EC%97%90-%EB%94%B0%EB%A5%B8-%EC%93%B0%EC%9E%84%EC%83%88-%EC%B0%A8%EC%9D%B4-const-char-char-const

#### 맴버 함수에서의 const
https://pangtrue.tistory.com/16

#### const ... & == ... const&
https://stackoverflow.com/questions/19415674/what-does-const-mean-in-c

