#include "mystring.h"
#include <cstring>
#include <stdio.h>

#define Min(a, b) ((a) < (b) ? (a) : (b))

MyString :: MyString() {
	buf_ = new char[1];
    	len_ = 0;
    	if (!buf_)
        	throw std::bad_alloc();
    	buf_[0] = '\0';
}

MyString :: MyString(const MyString &str) {
    	len_ = str.len_;
    	buf_ = new char[str.len_ + 1];
    	if (!buf_)
        	throw std::bad_alloc();
    	memcpy(buf_, str.buf_, len_ + 1);
}

MyString :: MyString(const char *c){
	len_ = strlen(c);
	buf_ = new char[len_ + 1];
	if (!buf_)
		throw std::bad_alloc();
	memcpy(buf_, c, len_ + 1);
}

MyString :: MyString(size_t i){
	buf_ = new char[i + 1];
        len_ = i;
	if (!buf_)
		throw std::bad_alloc();
	buf_[i] = '\0';

}

bool MyString :: operator==(const MyString &str){
	if (len_ != str.len_)
        	return false;
	for (size_t i = 0; i < str.len_; ++i){
		if (buf_[i] != str.buf_[i])
			return false;
	}
}

bool MyString :: operator!=(const MyString &str){
	if (!(*this == str))
		return true;
	else
		return false;

}

MyString MyString :: operator=(const MyString &str){
	if (*this == str)
		return (*this);
	char *buf1 = new char[str.len_ + 1];
	delete[] buf_;
	if (!buf1)
		throw std::bad_alloc();
	buf_ = buf1;
	len_ = str.len_;
	memcpy(buf_, str.buf_, str.len_ + 1);
	return (*this);
}

MyString MyString :: operator+=(const MyString &str){
	MyString S(buf_);
	delete[]buf_;
	buf_ = new char[str.len_ + S.len_ + 1];
	if (!buf_)
		throw std::bad_alloc();
	for (size_t i = 0; i < S.len_; ++i){
		buf_[i] = S.buf_[i];
	}
	for (size_t i = S.len_, j = 0; i < S.len_ + str.len_ + 1; ++i, ++j){
		buf_[i] = str.buf_[j];
	}
	len_ = S.len_ + str.len_;
	buf_[len_] = '\0';
	return (*this);
}

std::ostream& operator<<(std::ostream& os,const MyString &s){
	for (size_t i = 0; i < s.len_; ++i)
		os << s.buf_[i];
	return os;
}

size_t MyString :: Size(){
	return len_;
}

char MyString :: Back(){
	if (len_ != 0)
		return buf_[len_ - 1];
	else
		throw 3;
}

char MyString :: Front(){
        if (len_ != 0)
                return buf_[0];
        else
                throw 4;
}

const char &MyString :: operator[](size_t i) const {
	if (i > len_)
		throw 1;
    	return buf_[i];
}

bool MyString :: Empty(){
	if (len_ == 0)
		return true;
	else
		return false;
}

void MyString :: Clear(){
	len_ = 0;
	buf_[0] = '\0';
	
}
bool MyString :: operator<=(const MyString &str){
	bool r = true;
	for(size_t i = 0; i < Min(str.len_, len_); ++i){
		if (buf_[i] > str.buf_[i]){
			r = false;
			break;
		}
	}
	if (r)
		return true;
	else 
		return false;
}

bool MyString :: operator>=(const MyString &str){
	if (buf_ == str.buf_) 
		return true;
	else { 
		if (! (buf_ <= str.buf_))
			return true;
		else 
			return false;
	}
}

MyString operator+(const MyString &str1, const MyString &str2){
	MyString s(str1.len_ + str2.len_);
	for (size_t i = 0; i < str1.len_; ++i)
		s.buf_[i] = str1.buf_[i];
	for (size_t i = str1.len_, j = 0; i < str1.len_ + str2.len_; ++i, ++j)
		s.buf_[i] = str2.buf_[j];
	s.buf_[str1.len_ + str2.len_] = '\0';
	return s;

}

MyString MyString :: Push_back(char a){
	char *buf1 = new char[len_ + 1];
	for (size_t i = 0; i < len_; ++i)
		buf1[i] = buf_[i];
	buf1[len_] = a;
        delete[] buf_;
        if (!buf1)
                throw std::bad_alloc();
	buf_ = new char[len_ + 2];
        memcpy(buf_, buf1, len_ + 1);
	buf_[len_ + 1] = '\0';
	len_ = len_ + 2;
	delete[]buf1;
	return (*this);
}

MyString MyString :: Pop_back(){
	char *buf1 = new char[len_];
	for (size_t i = 0; i < len_ - 1; ++i)
		buf1[i] = buf_[i];
	delete[]buf_;
	if (!buf1)
		throw std::bad_alloc();
	buf_ = new char[len_ - 1];
	memcpy(buf_, buf1, len_ - 1);
	buf_[len_ - 1] = '\0';
	len_ = len_ - 1;
	delete[]buf1;
	return (*this);
}

MyString:: ~MyString(){
	delete[]buf_;
}
