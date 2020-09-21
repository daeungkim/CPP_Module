## ex00
### 복사 생성자
기존의 인스턴스를 가지고 새로운 인스턴스를 만들 수 있다
~~~c++

class Human
{
    private:
        std::string name;
    
    public:
        Human(const Human &h)
        {
            name = h.name;
        }
};

Human humanA;
Human humanB(humanA);
Human humanC = humanB;
~~~
#### 복사 생성자를 만들어 줌.
- `T(const T& a);` -> 복사 생성자의 표준 정의!
- humanB는 humanA를 인자 넘겨 받아 그 속성을 복사해서 새로운 인스턴스를 만들었다.

#### 디폴트 복사 생성자
- humanC 같은 경우에는 디폴트 복사 생성자를 호출한다.




