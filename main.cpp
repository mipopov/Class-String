#include "mystring.h"
#include <stdio.h>
#include <assert.h>

void test1();
void test2();
void test3();
void test4();
void test5();
void test6();
void test7();
void test8();
void test9();
void test10();
void test11();
void test12();
void test13();
void test14();
void test15();
void test16();
void test17();

int main() {
	test1();
	test2();	
	test3();
	test4();
	test5();
	test6();
	test7();
	test8();
	test9();
	test10();
	test11();
	test12();
	test13();
	test14();
	test15();
	test16();
	test17();
    	return 0;
}

void test1() {
    printf("Test 1: Default Constructor\n");
    MyString s;
    assert(s[0] == '\0');
    printf("%c\n", s[0]);
    printf("Test1 succesfully done\n");
    printf("\n");
}

void test2() {
	printf("Test 2: Constructor: MyString S (Hello)\n");
	MyString s("HELLO");
	assert(s[0] == 'H');
	assert(s[1] == 'E');
	assert(s[2] == 'L');
	assert(s[3] == 'L');
	assert(s[4] == 'O');
	std::cout << s << std::endl;
	printf("Test2 succesfully done\n");
	printf("\n");
}

void test3() {
        printf("Test 3: Constructor: MyString S (MyString)\n");
        MyString s("HELLO");
	MyString Str(s);
        assert(s[0] == 'H');
        assert(s[1] == 'E');
        assert(s[2] == 'L');
        assert(s[3] == 'L');
        assert(s[4] == 'O');
        std::cout << s << std::endl;
        printf("Test3 succesfully done\n");
        printf("\n");
}

void test4() {
        printf("Test 4: Size()\n");
        MyString s("HELLO");
	assert(s.Size() == 5);
        std::cout << s.Size() << std::endl;
        printf("Test4 succesfully done\n");
        printf("\n");
}

void test5(){
        printf("Test 5: Comparing MyStrings, operator ==\n");
        MyString s("HELLO");
	MyString v("HELLo");
        if (s == v){
        	std::cout << s << " " << v  << std::endl;
	}
	else
		printf("Strings are not equal\n");

        printf("Test5 succesfully done\n");
        printf("\n");
}

void test6(){
	printf("Test 6: Equaling\n");
        MyString s("HELLO");
        MyString v("HELLO world!!!");
        std::cout << s << std::endl;
	s = v;
	assert(s[0] == 'H');
	assert(s[1] == 'E');
	assert(s[2] == 'L');
        assert(s[3] == 'L');
        assert(s[4] == 'O');
	assert(s[5] == ' ');
	assert(s[6] == 'w');
	assert(s[7] == 'o');
	assert(s[8] == 'r');
        assert(s[9] == 'l');
        assert(s[10] == 'd');
	assert(s[11] == '!');
	assert(s[12] == '!');
	assert(s[13] == '!');
	assert(s.Size() == 14);
	std::cout << s << std::endl;
        printf("Test6 succesfully done\n");
        printf("\n");

}

void test7(){
	printf("Test 7: MyString + MyString\n");
        MyString s("world ");
        MyString v("HELLO world!!!");
        std::cout << s << "    " << v << std::endl;
	s += v;
	assert(s[0] == 'w');
        assert(s[1] == 'o');
        assert(s[2] == 'r');
        assert(s[3] == 'l');
        assert(s[4] == 'd');
	assert(s[5] == ' ');
        assert(s[6] == 'H');
        assert(s[7] == 'E');
        assert(s[8] == 'L');
        assert(s[9] == 'L');
        assert(s[10] == 'O');
        assert(s[11] == ' ');
        assert(s[12] == 'w');
        assert(s[13] == 'o');
        assert(s[14] == 'r');
        assert(s[15] == 'l');
        assert(s[16] == 'd');
        assert(s[17] == '!');
        assert(s[18] == '!');
        assert(s[19] == '!');
        assert(s.Size() == 20);
        std::cout << s << std::endl;
        printf("Test7 succesfully done\n");
        printf("\n");
}

void test8(){
	printf("Test 8: Comparing MyStrings, operator !=\n");
        MyString s("HELLO");
        MyString v("Jam");
        if (s != v){
                std::cout << s << " " << v  << std::endl;
        }
        else
                printf("Strings are equal\n");

        printf("Test8 succesfully done\n");
        printf("\n");
}

void test9(){
	printf("Test 9: Empty function\n");
    	MyString s;
    	assert(s[0] == '\0');
    	if (s.Empty())
		printf("Yes, String is empry\n");
	else
		printf("No, string aren't empry\n");
    	printf("Test9 succesfully done\n");
    	printf("\n");
}

void test10(){
	printf("Test 10: Front && Back functions\n");
        MyString s("World in peace");
	assert(s.Front() == 'W');
	assert(s.Back() == 'e');
        std::cout << s.Front() << " " << s.Back() << std::endl;
        printf("Test10 succesfully done\n");
        printf("\n");
}

void test11(){
	printf("Test 11: Clear function\n");
        MyString s("Hello World");
	std::cout << s << std::endl;
       	s.Clear();
        if (s.Empty())
                printf("Yes, String is empry\n");
        else
                printf("No, string aren't empry\n");
        printf("Test11 succesfully done\n");
        printf("\n");
}

void test12(){
	printf("Test 12: Comparing MyStrings, operator <=\n");
        MyString s("HELLO");
        MyString v("He");
        if (v <= s){
                std::cout << s << " " << v  << std::endl;
        }
        else
                printf("String1 are not <= than String2\n");

        printf("Test12 succesfully done\n");
        printf("\n");
}

void test13(){
	printf("Test 13: Comparing MyStrings, operator >=\n");
        MyString s("HELLO");
        MyString v("He");
        if (s >= v){
                std::cout << s << " " << v  << std::endl;
        }
        else
                printf("String1 are not >= than String2\n");

        printf("Test13 succesfully done\n");
        printf("\n");
}
void test14(){
	printf("Test14: Operator +\n");
	MyString S1("HELLO ");
	MyString S2("world!!!");
	MyString s;
	s = S1 + S2;
	assert(s[0] == 'H');
        assert(s[1] == 'E');
        assert(s[2] == 'L');
        assert(s[3] == 'L');
        assert(s[4] == 'O');
        assert(s[5] == ' ');
        assert(s[6] == 'w');
        assert(s[7] == 'o');
        assert(s[8] == 'r');
        assert(s[9] == 'l');
        assert(s[10] == 'd');
        assert(s[11] == '!');
        assert(s[12] == '!');
        assert(s[13] == '!');
	std::cout << s << std::endl;
	printf("Test14 succesfully done\n");
        printf("\n");
}

void test15() {
	printf("Test 15: Constructor MyString(5)\n");
        MyString s(5);
        assert(s.Size() == 5);
        printf("Test15 succesfully done\n");
        printf("\n");
}

void test16() {
	printf("Test 16: Push_back function\n");
	MyString s("Worl"), s1;
	s1 = s.Push_back('d');
	assert(s1[4] == 'd');
	std::cout << s1 << std::endl;
	printf("Test16 succesfully done\n");
        printf("\n");
}

void test17() {
	printf("Test 17: Pop_back function\n");
        MyString s("Peacef"), s1;
        s1 = s.Pop_back();
        std::cout << s1 << std::endl;
        printf("Test17 succesfully done\n");
        printf("\n");
}
