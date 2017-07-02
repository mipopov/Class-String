#ifndef _MYSTRING_H_
#define _MYSTRING_H_

#include <iostream>

class MyString {
public:
	MyString();

    	MyString(const MyString &str);

	MyString(const char *c);
	
	MyString(size_t size);

	const char &operator[](size_t i) const;

    	MyString operator=(const MyString &str);

    	MyString operator+=(const MyString &str);

    	bool operator==(const MyString &str);

  	bool operator!=(const MyString &str);

    	bool operator<=(const MyString &str);

    	bool operator>=(const MyString &str);
	
	friend MyString operator+(const MyString &str1, const MyString &str2);
	
    	char Front();

    	char Back();

    	bool Empty();

    	size_t Size();

    	void Clear();

    	MyString Push_back(char a);

    	MyString Pop_back();

    	friend std::ostream &operator<<(std::ostream &os, const MyString &s);

    	~MyString();
private:
    	size_t len_;
    	char *buf_;
};

#endif
