# baekJoon 
환경구축 : Edit code runner Executor Map
  - cpp : ["cpp": "cd $dir && g++ -std=c++17 $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt"](https://stg0123.github.io/study/5/)  
  - python : ["python3(mac) || py(win) -u"](https://soooprmx.com/run-python-in-command-line-on-windows/) 

# helped
- Algorithmic   
  - [1011](https://www.acmicpc.net/problem/1011)
  - [17298](https://www.acmicpc.net/problem/17298)
　  
- MatheMatical  
  - [계차수열 일반항 공식](https://github.com/mw08081/baekJoon#7-계차수열)     
  - 등비수열 등차수열 합
  　 
- Linguistic  
  - [`vector<T>` & `#include <vector>`](https://blog.naver.com/president304/222422474064)   
  - [`cout.precision(streamsize); cout << fixed; setprecisioin(streamsize);`](https://github.com/mw08081/baekJoon#1-출력-숫자의-자릿수-고정)     
  - [`ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);` & `endl VS '\n'`](https://github.com/mw08081/baekJoon#2-c-입출력-속도-단축)   
  - [`fill_n()`](https://github.com/mw08081/baekJoon#3-리스트-한-번에-채우기)  
  - [`getline(); cin.getline();`](https://github.com/mw08081/baekJoon#4-공백문자열-입력받기)  
  - [`strtok();`](https://github.com/mw08081/baekJoon#5-문자열-자르기)    
  - [`c_str();`](https://github.com/mw08081/baekJoon#6-string-to-char-)  
  - [`ceil(); floor();`](https://github.com/mw08081/baekJoon/blob/main/README.md#8-올림-내림)      
  - [`rotate(st, mid, fin);`](https://github.com/mw08081/baekJoon/blob/main/README.md#9-배열-회전)
  - [`reverse();`](https://github.com/mw08081/baekJoon/blob/main/README.md#10-배열-뒤집기)
  - [`stoi, stof, stol, stod && strtol, strtoul, strtoll, strtoull, strtod`]()
  - numeric accumulate, std::multiplies<int>()
  - map
  - list
  - 

# Special(onMyWay || Hard)
- OnMyWay  
  - [2675](https://github.com/mw08081/baekJoon/blob/main/backJoonCpp/2675.cpp) - O(n^2) not O(n^3)
  - [10845]() - using list (| vector) not Queue
- Hard  

- Both  

　  
   　  
      　  
         　  
            　  
               　  　  
                     
## 1. 출력 숫자의 자릿수 고정
### - cout.precision()  
해당 함수를 처음에 소수점을 고정해주는 함수로 착각했다  
이유는 단순했다  
　  
```C++
double dNum = 3.14;

cout.precision(6);
cout << dNum << endl;
```
을 실행한다면 결과는 `3.14000`이 나온다  
소수점 6자리로 설정했는데, 5자리까지만 나온 이유가 내가 착각한 이유와 동일하다  
　  
위의 함수는 출력할 숫자의 자리수를 설정해주는 함수이다(소수점의 자리수를 고정해주는 것이 아니다)  
그렇기에 일의자리 숫자 한자리를 제외한 5자리의 소수가 출력된 것이고 만약 dNum이 153.65이었다면 153.650으로 출력됬을 것이다  
　  
따라서 소수점의 자리수를 고정하려면 `cout << fixed;`를 이용하면 된다(뒤에서 설명)  
　  
cout.precision()을 좀 더 설명하자면 다음과 같다  
```c++
std::streamsize precision() const  
+ overload std::streamsize std::ios_base::precision(std::streamsize _Newprecision)  

streamsize __CLR_OR_THIS_CALL precision(streamsize _Newprecision) { // set precision to argument
        const streamsize _Oldprecision = _Prec;
        _Prec                          = _Newprecision;
        return _Oldprecision;
}
```
cout.precision()은 입출력 계산에서 사용되는 stream의 자릿수를 결정해주는 것이다  
자릿수는 `streamsize`라는 type으로써(long long) 사용된다  
　  
cout.precision()은 기본적으로 기존 streamsize를 반환한다  
따라서 특정 정밀한 작업이 끝난 후에는 기존의 streamsize로 돌려주는 것이 필요한데 아래와 같이 할 수 있다  
```c++
double dNum = 1 / 3;
streamsize originSize = cout.precision();

cout.precision(16);         //set decimal places to 16
cout << dNum << endl;

cout.precision(originSize);
```
streamsize는 ![streamsizePath](https://user-images.githubusercontent.com/58582985/145427782-c608cf17-de1b-4538-adcf-09301bbe6b34.PNG)에 정의되어있고  
cout.precision()은 ![precisionPath](https://user-images.githubusercontent.com/58582985/145427773-b5f1f418-f979-4f40-aee1-816716d128c3.PNG)에 정의되어있다  
  　  
    
### - cout << fixed;
결국 소수점의 자리수를 고정하려면 위의 내용을 입력해줘야한다  
아래는 cout << fixed 유뮤에 따른 결과이다
```c++
double dNum = 156.34;

cout.precision(6);

cout << dNum << endl;                   //156.340

cout << fixed;
cout << dNum << endl;                   //156.340000
```
　  
    
### - setprecision(streamsize)
일단 setprecision(streamsize)는 iomanip Header에 정의된 내용이다(#include <iomanip>)  
　  
사실 setprecision(streamsize)과 cout.precision(streamsize)의 차이를 잘 모르겠다  
또 setprecision(streamsize)의 사용법도 잘 모르겠다 아래의 코드를 살펴보자  
　  
#상황1
```c++
setprecision(16);
cout << 1 / 3 << endl;          //0.333333
```
설정이 되지 않는다  
　  
#상황2  
```c++
cout << fixed << setprecision(16);
cout << 1 / 3 << endl;                  //0.3333333333333333
```
설정이 된다 이렇게 보면 setprecision(streamsize)는 fixed와 함께 사용을 해야지 설정이 되는 것처럼 볼 수 있다  
그러나 다음 상황을 보자  
　  
#상황3
```c++
cout << setw(20) << right << setfill(' ') 
     << setprecision(16) << a / b << endl;       //0.3333333333333333
```
이렇게 하면 또 소수점 자리수가 설정이 된다  
여기에 사용된 setw(20), setfill(' ')은 setprecision(16)과 동일하게 iomanip Header에 정의된 내용인데  
그렇다면 iomanip Header에 정의된 내용과 함께 써줘야 소수점 설정이 가능하다는 것일까?  
　  
아니다.... setw(20)과 setfill(' ')을 제외한 right만 남겨두고 실행해도 소수점 설정이 된다  
모르겠다   
　  
　  
여튼 정리를 하자면 setprecision(streamsize)또한 cout << fixed과 함께 자리수를 정해주는 함수이다  
　  
+++ std::right는 오른쪽 정렬, std::setw(streamsize)는 출력할때 너비를 의미하고 std::setfill(char)는 남는 공간을 char로 채우는 함수이며, 일회성으로 보여진다  
　  
     
## 2. C++ 입출력 속도 단축  
### - 방법 1.
```c++
ios::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
```
이 코드는 입출력의 속도를 단축시킨다  

#1 `ios::sync_with_stdio(false);` 
찾아본 바로는 c++에서는 c의 입출력 방식을 추가??로 이용한다고 한다  
그렇기에 c++과 c의 입출력이 같이 일어나지 않도록 동기화를 끊어 c++만의 입출력 속도를 증진한다고 한다  
(c++과 c의 버퍼가 같이 이용되는 것이 아닌 c++의 버퍼만 이용하게된다)

다만 이 코드를 이용하려면 단일스레드 환경이어야 하며, c 방식의 입출력(printf(), getchar())를 사용할 수 없다고 한다  

#2 `cin.tie(NULL);`, `cout.tie(NULL);`  
참고자료를 읽어볼 것(정확히 정리가 안됨)   
　  
     
### - 방법 2.
```
#include <cstdio>

...

  scanf("%d", &num);
  printf("%d\n");
```
　  
   
### - std::endl과 '\n'의 차이
백준문제 풀이과정에서 속도차이를 줄여도 시간초과가 나오는 경우가 있다    
이때 << endl 대신 << '\n'을 사용해보자

endl은 내부의 버퍼를 비워는 역할로 진행이 느리므로 '\n'을 써보면 시간이 단축될 수 있다    
　  
   
### - 입출력 속도 
C11 scanf() - 0.92s  
C++17 cin - 2.17s  
C++17	ios_base::sync_with_stdio(false); cin.tie(NULL);	0.5938s  
C++17	ios_base::sync_with_stdio(false);	0.6348s  
  
C11 printf - 0.91s  
C++17 printf(c++) - 0.86s  
C++17	ios_base::sync_with_stdio(false); cout << i << '\n'; - 0.827s  
C++17	ios_base::sync_with_stdio(false); cout.tie(NULL); cout << i << '\n'; - 0.8272s  
(cout.tie(NULL)이 사용하지 않으면 0.0002s정도 빨라진다고 하는데.. 막상 코드에서 제외해보니 그렇지 않았다)  
<img width="306" alt="스크린샷 2022-01-31 오후 7 34 50" src="https://user-images.githubusercontent.com/58582985/151778602-ad510856-0a49-4bbe-bc42-aa7df1cd4f9f.png">

+ 참고자료 - https://jaimemin.tistory.com/1521  
+ 참고자료 - https://leeeegun.tistory.com/4  
+ 참고자료 - https://www.acmicpc.net/blog/view/56 (입력속도)  
+ 참고자료 - https://www.acmicpc.net/blog/view/57 (출력속도)  
　  
   
## 3. 리스트 한 번에 채우기
```c++
int arr[100];

fill_n(arr, 100, 0);        //fill_n(배열의 이름, 길이, 채우는 값)
```
　  
   
## 4. 공백문자열 입력받기
### - cin.getline()  
`cin.getline(char* s, streamsize n)` 는 `iostream > istream`해더파일에 존재한다  
주의할 점은 문자열 형태가 char * (char 형태의 배열) 이라는 점이다  
　  
   
### - getline()
`getline(&istream is, string& s)` 는 `string` 해더파일에 존재한다  
cin.getline과 다르게 char* 가 아닌 string 객체에 입력을 받는다  

### - 참고자료
https://nomad-learner.github.io/study/2021/02/22/getline%EB%B9%84%EA%B5%90.html  

　  
   
## 5. 문자열 자르기  
strtok()함수를 사용한다  
```c++
#include <iostream>
#include <cstring>            //strtok()가 포함된 해더파일
using namespace std;

int main()
{
  char s[1000];
  char * ptr;
  
  cin.getline(s, 1000);
  
  ptr = strtok(s, " ");             //strtok(char * s, const char * delimiter) : string이 아닌 char * 인점 주의할 것
  while(ptr != NULL)                //strtok()는 마지막에 도달하면 NULL을 반환함
  {
    ptr = strtok(NULL, " ");        //한 번 입력된 문자열을 계속해서 진행하므로 문자열엔 NULL 입력
    cout << *ptr << '\n';
  }
}
```
근데 이 방법을 사용해도 문제를 해결할 수 없다(이유는 모름, 아마 채점 기준 변동아닐까..)  
그래서 [이 곳](https://sossoon.tistory.com/24)을 참고하니 strtok()함수를 사용하여 문제를 해결할 수 있었다.

참고자료
- https://blockdmask.tistory.com/382  
- https://coding-factory.tistory.com/592  
- https://sossoon.tistory.com/24   
　  
   
## 6. string to char *  
`c_str()` 사용(나중에 공부하자..)  
　  
   
## 7. 계차수열
![image](https://user-images.githubusercontent.com/58582985/211246443-aecfeeab-00b8-4399-9c32-ed42b159e08c.png)  
(단, b_n은 계차수열의 a_n수열의 등차수열 일반항)  
  　  
   
## 8. 올림, 내림  
```C++
double ceil(double val);
double floor(double val);
  
double ceil(double val + 0.5f);     //반올림
```
   
   
## 9. 배열 회전
rotate는 iterable 객체를 회전시켜준다. 간단학 두번째 인자를 가장 앞으로 가져온다고 보면된다.
```c++
template< class ForwardIt >
ForwardIt rotate( ForwardIt first, ForwardIt middle, ForwardIt last );
```
```c++
#include <algorithm>

vecotr<int> v {1,2,3,4,5,6};
rotate(v.begin(), v.begin()+2, v.end());    //3 4 5 6 1 2
```
참고자료 - https://en.cppreference.com/w/cpp/algorithm/rotate
   
   
## 10. 배열 뒤집기
reverse()는 iterable 객체의 특정 구간을 뒤집는다. 마지막 인자 직전까지 뒤집힌 주의하자
```c++
template< class BidirIt >
void reverse( BidirIt first, BidirIt last );
```
```c++  
#include <algorithm>
vector<int> v {1,2,3,4,5,6};

reverse(v.begin(), v.begin()+3);      //3 2 1 4 5 6
reverse(v.begin(), v.end());          //6 5 4 1 2 3
```
참고자료 - https://en.cppreference.com/w/cpp/algorithm/reverse
   
   
## 11. 데이터 타입 변경하기(문자열 2 ...)
구글링을 하다보니 strtol 함수보다 stoi 부류의 함수를 권장한다고 한다  
현재 내가 보기엔 strtol은 `char*`를 매개변수로 받지만, stoi는 `string`을 받아온다  
다만, stoi에도 `char*`를 인자로 받는 오버로딩이 있는 듯하다.  
```c++
long      strtol( const char* str, char** str_end, int base );

long      stol( const std::string& str, std::size_t* pos = nullptr, int base = 10 );
int       stoi( const std::string& str, std::size_t* pos = nullptr, int base = 10 );

int       atoi( const char* str );
```
- 참고자료
  - https://en.cppreference.com/w/cpp/string/basic_string/stol
  - https://en.cppreference.com/w/cpp/string/byte/atoi
  - https://en.cppreference.com/w/cpp/string/byte/strtol
  - https://stackoverflow.com/questions/19259883/what-are-the-differences-between-stdstrtol-and-stdstoi
